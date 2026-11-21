"""Cow panel: the control center for cow_kuluu_xi_anything.

    pythonw tools\\cow\\panel\\cow_panel.py                 (no console window, from the repo root)
    python  tools\\cow\\panel\\cow_panel.py --repo D:\\path\\to\\checkout

It lives IN THE REPO, under `tools/cow/panel`, and is started from there. It used to live in
`$HOME\\Downloads\\CowPanel`, and Downloads is a temp folder: it gets purged. The copy that lived there was
purged while its process was still on screen, and the header went on saying RUNNING over a drop that had died
28 hours ago. `downloads` stays a drop zone (zips in, log pulls out), not a home.

What it shows: what the system is doing (a drop running with N provers, the line, or idle), the proven share
(on GitHub, and live), the last push, and a log as it grows (the drop's console, the newest prover log, or
the line's log). RUNNING is said only of a PROCESS the panel can see in the process list; a stopped line says
STOPPED with its reason and the time it stopped, and a console log on disk proves nothing by itself.

What it does:
  * Drops: every zip in Downloads that carries an installer (install_*.py) or a panel. Run drop extracts it
    next to the zip and runs the installer in the background, its console kept in build/drops/; the panel
    can be closed and opened again without stopping it. Stop drop ends the installer and everything it
    started. A panel drop replaces this panel and restarts it.
  * The line: start, stop. Publish now. Stop provers.
Every button is a command you could type yourself. Nothing is reset, stashed, rebased or force-pushed.
"""
import argparse
import json
import os
import queue
import subprocess
import sys
import threading
import time
import tkinter as tk
import zipfile
from tkinter import messagebox, ttk

DEFAULT_REPO = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
HERE = os.path.dirname(os.path.abspath(__file__))
PY = sys.executable.replace("pythonw.exe", "python.exe")
PYW = sys.executable.replace("python.exe", "pythonw.exe") if os.name == "nt" else sys.executable
NOWIN = 0x08000000 if os.name == "nt" else 0          # CREATE_NO_WINDOW
# NEW_PROCESS_GROUP | NO_WINDOW: the drop gets a HIDDEN console of its own, which everything it starts (git,
# PowerShell, the provers) shares. DETACHED_PROCESS left it with no console at all, and Windows then opened a
# visible window for every console program it started.
DETACH = (0x00000200 | 0x08000000) if os.name == "nt" else 0
DOWNLOADS = os.path.join(os.path.expanduser("~"), "Downloads")
FAST_SECS = 3
MID_SECS = 10
SLOW_SECS = 120
STALE_DROP_SECS = 1800       # a drop console quieter than this, with no prover running, is not the console of
                             # whatever is live now (a cycle started outside the panel writes under build\cycle)
LOG_CHOICES = ("Drop console", "Newest prover log", "Line log")


def run(argv, cwd, timeout=120):
    try:
        p = subprocess.run(argv, cwd=cwd, capture_output=True, text=True, encoding="utf-8", errors="replace",
                           timeout=timeout, creationflags=NOWIN)
        return p.returncode, ((p.stdout or "") + (p.stderr or "")).splitlines()
    except (OSError, subprocess.TimeoutExpired) as exc:
        return 99, ["%s: %s" % (type(exc).__name__, exc)]


def processes():
    """[(pid, command line)] of the python processes, or None when the list cannot be read."""
    out = []
    if os.name == "nt":
        cmd = ("Get-CimInstance Win32_Process -Filter 'Name like ''python%''' | "
               "Select-Object ProcessId, CommandLine | ConvertTo-Json -Compress")
        rc, lines = run(["powershell", "-NoProfile", "-NonInteractive", "-Command", cmd], None, 60)
        if rc:
            return None
        text = "\n".join(ln for ln in lines if ln.strip()).strip()
        try:
            data = json.loads(text) if text else []
        except ValueError:
            return None
        for d in ([data] if isinstance(data, dict) else data):
            out.append((int(d.get("ProcessId") or 0), str(d.get("CommandLine") or "")))
        return out
    rc, lines = run(["ps", "-eo", "pid=,args="], None, 30)
    if rc:
        return None
    for ln in lines:
        f = ln.strip().split(None, 1)
        if len(f) == 2 and f[0].isdigit() and os.path.basename(f[1].split()[0]).startswith("python"):
            out.append((int(f[0]), f[1]))
    return out


def kill(pid, tree=True):
    if os.name == "nt":
        run(["taskkill", "/PID", str(pid)] + (["/T"] if tree else []) + ["/F"], None, 60)
    else:
        try:
            os.kill(pid, 9)
        except OSError:
            pass


def ago(secs):
    secs = max(0, int(secs))
    if secs < 90:
        return "%ds ago" % secs
    if secs < 5400:
        return "%dm ago" % (secs // 60)
    return "%.1fh ago" % (secs / 3600.0)


def tail(path, n=80):
    try:
        with open(path, "rb") as fh:
            fh.seek(0, 2)
            size = fh.tell()
            fh.seek(max(0, size - 32000))
            return fh.read().decode("utf-8", "replace").replace("\r", "").splitlines()[-n:]
    except OSError:
        return []


def drops():
    """[(zip path or folder, top folder, installer or 'PANEL', mtime)] newest first: the zips in Downloads that
    carry an installer or a panel, and the folders already extracted there that do (a zip that was deleted
    after extracting still shows)."""
    out, seen = [], set()
    try:
        names = os.listdir(DOWNLOADS)
    except OSError:
        return out
    for f in names:
        p = os.path.join(DOWNLOADS, f)
        if not f.lower().endswith(".zip"):
            continue
        try:
            with zipfile.ZipFile(p) as z:
                members = z.namelist()
        except (OSError, zipfile.BadZipFile):
            continue
        inst = [m for m in members if m.count("/") == 1 and os.path.basename(m).startswith("install_")
                and m.endswith(".py")]
        panel = [m for m in members if m.count("/") == 1 and os.path.basename(m) == "cow_panel.py"]
        if inst or panel:
            top = (inst or panel)[0].split("/")[0]
            seen.add(top.lower())
            out.append((p, top, os.path.basename(inst[0]) if inst else "PANEL", os.path.getmtime(p)))
    for f in names:
        p = os.path.join(DOWNLOADS, f)
        if f.lower() in seen or not os.path.isdir(p):
            continue
        try:
            inst = sorted(x for x in os.listdir(p) if x.startswith("install_") and x.endswith(".py"))
        except OSError:
            continue
        if inst:
            out.append((p, f, inst[0], os.path.getmtime(os.path.join(p, inst[0]))))
    return sorted(out, key=lambda x: -x[3])


class Model:
    """Everything the window shows, gathered off the UI thread."""

    def __init__(self, repo):
        self.repo = repo
        self.work = os.path.join(repo, "build", "conveyor")
        self.drops_dir = os.path.join(repo, "build", "drops")
        self.data = {}
        self.lock = threading.Lock()
        self.stop = threading.Event()
        self.log_choice = LOG_CHOICES[0]

    def set(self, **kv):
        with self.lock:
            self.data.update(kv)

    def get(self):
        with self.lock:
            return dict(self.data)

    def heartbeat(self):
        try:
            with open(os.path.join(self.work, "heartbeat.json"), encoding="utf-8") as fh:
                hb = json.load(fh)
        except (OSError, ValueError):
            hb = {}
        stopflag = os.path.isfile(os.path.join(self.work, "STOP"))
        age = time.time() - float(hb.get("when") or 0)
        phase = str(hb.get("phase") or "")
        if not hb:
            state = "never ran"
        elif age > 150 or phase.startswith("stopped"):
            state = "stopped"
        elif stopflag:
            state = "stopping"
        else:
            state = "running"
        extra = {k: v for k, v in hb.items() if k not in ("pid", "when", "at", "phase")}
        what = phase + ("  " + ", ".join("%s %s" % kv for kv in sorted(extra.items())) if extra else "")
        # A stop the line made itself is news, not silence. Keep its reason and the moment it happened: the
        # header used to blank this out, and the screen went on showing the last drop as RUNNING for a day over
        # a heartbeat that said `stopped: judge check failed` at 2026-11-21 00:19:41.
        stopped = phase[len("stopped"):].lstrip(": ").strip() if phase.startswith("stopped") else ""
        self.set(line_state=state, line_what=what if hb and state != "stopped" else "",
                 line_stopped=stopped, line_since=str(hb.get("at") or ""), line_pid=hb.get("pid"))

    def newest(self, paths):
        best, when = None, 0.0
        for c in paths:
            try:
                m = os.path.getmtime(c)
            except OSError:
                continue
            if m > when:
                best, when = c, m
        return best, when

    def drop_state(self):
        """The newest drop console: its step (the last '== ' header), when it started and when it last wrote."""
        try:
            paths = [os.path.join(self.drops_dir, f) for f in os.listdir(self.drops_dir) if f.endswith(".log")]
        except OSError:
            paths = []
        best, when = self.newest(paths)
        if not best:
            self.set(drop_step="", drop_quiet=0, drop_age=0, drop_end="")
            return
        lines = tail(best, 400)
        steps = [ln[3:].strip() for ln in lines if ln.startswith("== ") and not ln.startswith("== 20")]
        ends = [ln.strip() for ln in lines if ln.startswith(("INSTALLED", "INSTALL STOPPED", "STAGED", "Traceback",
                                                             "CYCLE DONE", "CYCLE STOPPED"))]
        self.set(drop_step=steps[-1] if steps else "starting", drop_quiet=time.time() - when,
                 drop_age=time.time() - os.path.getctime(best), drop_end=ends[-1] if ends else "")

    def logs(self):
        choice = self.log_choice
        if choice == "Drop console":
            try:
                paths = [os.path.join(self.drops_dir, f) for f in os.listdir(self.drops_dir) if f.endswith(".log")]
            except OSError:
                paths = []
        elif choice == "Newest prover log":
            par = os.path.join(self.repo, "build", "lift_par")
            try:
                paths = [os.path.join(par, f) for f in os.listdir(par) if f.endswith(".log")]
            except OSError:
                paths = []
        else:
            paths = [os.path.join(self.work, "conveyor.log")]
        best, when = self.newest(paths)
        self.set(log_path=best or "", log_when=ago(time.time() - when) if best else "",
                 log_lines=tail(best) if best else ["(no %s yet)" % choice.lower()])

    def procs(self):
        ps = processes()
        if ps is None:
            # Unknown is NOT running. The old value here was installer="?", which is truthy, so every branch
            # downstream took it for a live drop and the header said RUNNING over a 28-hour-old console log,
            # forever, on any stretch where the process list could not be read.
            self.set(provers=0, prover_pids=[], installer="", installer_pids=[], procs_err=True)
            return
        me = os.getpid()
        provers = [p for p, cl in ps if p != me and "lift_proof.py" in cl.lower()]
        inst, ipids = [], []
        for p, cl in ps:
            low = cl.lower().replace("\\", "/")
            if p == me or "cow_panel" in low:
                continue
            for name in ("install_", "finish_cowv3", "cycle.py"):
                i = low.find(name)
                if i >= 0:
                    inst.append(os.path.basename(low[i:].split()[0].strip('"')))
                    ipids.append(p)
                    break
        self.set(provers=len(provers), prover_pids=provers, installer=", ".join(sorted(set(inst))),
                 installer_pids=ipids, procs_err=False)

    def last_push(self):
        rc, out = run(["git", "log", "-1", "--format=%h|%ct|%s", "origin/main"], self.repo, 60)
        if rc or not out or "|" not in out[0]:
            self.set(push="(git log failed)")
        else:
            h, ct, subj = out[0].split("|", 2)
            self.set(push="%s  %s  %s" % (h, ago(time.time() - int(ct)), subj))
        rc, out = run(["git", "show", "origin/main:cow/conveyor/daily.tsv"], self.repo, 60)
        rows = [ln.split("\t") for ln in out if ln.strip() and not ln.startswith("#")] if not rc else []
        rows = [r for r in rows if len(r) >= 4]
        if rows:
            try:
                self.set(pub_gold=int(rows[-1][1]), pub_pct=float(rows[-1][3]))
            except ValueError:
                pass

    def score(self):
        code = ("import sys, json; sys.path.insert(0, r'%s'); import conveyor as C; "
                "t, sb = C.scoreboard(write=False); "
                "print('COWPANEL ' + json.dumps({'gold': sb['gold_n'], 'pct': sb['pct'], "
                "'rows': {k: v[0] for k, v in sb['rows'].items()}}))" % os.path.join(self.repo, "tools", "cow"))
        rc, out = run([PY, "-c", code], self.repo, 600)
        got = [ln for ln in out if ln.startswith("COWPANEL ")]
        if got:
            d = json.loads(got[-1][9:])
            self.set(live_gold=d["gold"], live_pct=d["pct"], tiers=d["rows"], score_when=time.time())

    def loop(self):
        nxt = {"fast": 0.0, "mid": 0.0, "slow": 0.0}
        while not self.stop.is_set():
            t = time.time()
            try:
                if t >= nxt["fast"]:
                    nxt["fast"] = t + FAST_SECS
                    self.heartbeat()
                    self.logs()
                    self.drop_state()
                if t >= nxt["mid"]:
                    nxt["mid"] = t + MID_SECS
                    self.procs()
                    self.last_push()
                    self.set(drops=drops())
                if t >= nxt["slow"]:
                    nxt["slow"] = t + SLOW_SECS
                    threading.Thread(target=self.score, daemon=True).start()
            except Exception as exc:
                self.set(err="%s: %s" % (type(exc).__name__, exc))
            self.stop.wait(1.0)


def header_line(m, d):
    """The one line that says what the system is doing, and the colour it deserves. Split out of the window so
    `cow_panel.py --print-state` (and anyone testing it) can ask what the panel would claim, with no Tk."""
    inst, nprov, line = d.get("installer") or "", d.get("provers", 0), d.get("line_state", "-")
    step, quiet = d.get("drop_step") or "", d.get("drop_quiet", 0)
    ipids = d.get("installer_pids") or []
    # RUNNING is a claim about a PROCESS, never about a log file that happens to be on disk. The old code took
    # the presence of a drop console, or the string "?" from a process list it could not read, as proof of life:
    # a dead OnePass9 installer sat in this header as RUNNING, "last output 28.0h ago", for a day.
    live = bool(ipids) or (isinstance(nprov, int) and nprov > 0)
    if d.get("procs_err"):
        return ("UNKNOWN: the process list cannot be read, so nothing here can be called running", "#b26a00")
    if inst and not ipids:
        return ("STOPPED: %s is not a running process; its console last wrote %s" % (inst, ago(quiet)), "#a33")
    if inst:
        name = inst.replace("install_", "").replace(".py", "")
        # the newest prover line ("  12 min  3400/13924 judged  gold ...") is the progress
        prog = [ln.strip() for ln in (d.get("log_lines") or []) if " judged " in ln]
        if prog and m.log_choice == LOG_CHOICES[0]:
            step = "%s: %s" % (step.split(".")[0], prog[-1].split("(")[0].strip())
        if quiet > STALE_DROP_SECS:
            # That console has been silent for hours, so it is not the console of whatever is live now (a cycle
            # started outside the panel writes under build\cycle, and a drop's zip can outlive its process by a
            # day). Its step and its age belong to a dead run: show what is actually alive instead.
            return ("RUNNING: %s (pid %s)  |  %s provers  |  that drop console is not this run's: it last wrote"
                    " %s" % (name, ",".join(str(p) for p in ipids), nprov, ago(quiet)), "#1b7f3b")
        sysline = "RUNNING: %s  |  step %s  |  %s in  |  last output %s  |  %s provers" % (
            name, step[:60], ago(d.get("drop_age", 0)).replace(" ago", ""), ago(quiet), nprov)
        color = "#1b7f3b"
        if quiet > 1200 and not nprov:
            sysline += "  |  NOTHING FOR %s: may be stuck" % ago(quiet).replace(" ago", "")
            color = "#b26a00"
        return sysline, color
    if line == "running":
        return "RUNNING: the line (model loop)  |  %s provers" % nprov, "#1b7f3b"
    if live:
        return "RUNNING: %s provers (no drop, no line)" % nprov, "#b26a00"
    last = d.get("drop_end") or ""
    idle = "IDLE: nothing is running" + ("  |  last drop ended: %s" % last[:80] if last else "")
    return idle, ("#a33" if last.startswith(("INSTALL STOPPED", "CYCLE STOPPED", "Traceback")) else "#555")


def line_row(d):
    """The Line row: a stop says what stopped and when, in the line's own words (its heartbeat), never blank."""
    line, inst = d.get("line_state", "-"), d.get("installer") or ""
    live = bool(d.get("installer_pids")) or (isinstance(d.get("provers", 0), int) and d.get("provers", 0) > 0)
    if line == "stopped":
        return ("STOPPED: %s, since %s" % (d.get("line_stopped") or "no reason given",
                                           d.get("line_since") or "an unknown time"), "#a33")
    if inst and live and line != "running":
        return "paused while the drop runs (it starts it again at the end)", "#555"
    return ("%s%s" % (line, ("   " + d["line_what"][:80]) if d.get("line_what") else ""),
            "#1b7f3b" if line == "running" else "#555")


class Panel:
    def __init__(self, root, model):
        self.root, self.m = root, model
        self.msgs = queue.Queue()
        root.title("Cow panel")
        root.geometry("1180x760")
        root.minsize(900, 520)
        try:
            ttk.Style().theme_use("vista" if os.name == "nt" else "clam")
        except tk.TclError:
            pass
        top = ttk.Frame(root, padding=10)
        top.pack(fill="x")
        self.system = ttk.Label(top, text="-", font=("Segoe UI", 13, "bold"))
        self.system.grid(row=0, column=0, columnspan=2, sticky="w")
        self.pct = ttk.Label(top, text="-", font=("Segoe UI", 22, "bold"))
        self.pct.grid(row=1, column=0, sticky="w")
        self.pct_sub = ttk.Label(top, text="", font=("Segoe UI", 11))
        self.pct_sub.grid(row=2, column=0, sticky="w")
        self.tiers = ttk.Label(top, text="", font=("Segoe UI", 10))
        self.tiers.grid(row=3, column=0, sticky="w", pady=(2, 0))
        info = ttk.Frame(top)
        info.grid(row=1, column=1, rowspan=3, sticky="ne", padx=(30, 0))
        top.columnconfigure(1, weight=1)
        self.rows = {}
        for i, key in enumerate(("Line (model loop)", "Provers", "Last push")):
            ttk.Label(info, text=key + ":", font=("Segoe UI", 10, "bold")).grid(row=i, column=0, sticky="e", padx=(0, 6))
            v = ttk.Label(info, text="-", font=("Segoe UI", 10))
            v.grid(row=i, column=1, sticky="w")
            self.rows[key] = v

        dropf = ttk.LabelFrame(root, text="Drops (zips in Downloads)", padding=(10, 4, 10, 6))
        dropf.pack(fill="x", padx=10)
        self.drop_var = tk.StringVar()
        self.drop_box = ttk.Combobox(dropf, textvariable=self.drop_var, state="readonly", width=70)
        self.drop_box.pack(side="left", padx=(0, 6))
        ttk.Button(dropf, text="Run drop", command=self.run_drop).pack(side="left", padx=(0, 6))
        ttk.Button(dropf, text="Stop drop", command=self.stop_drop).pack(side="left", padx=(0, 6))
        self.drop_map = {}

        btns = ttk.Frame(root, padding=(10, 6, 10, 6))
        btns.pack(fill="x")
        for text, fn in (("RUN CYCLE", self.run_cycle), ("Start line", self.start_line), ("Stop line", self.stop_line),
                         ("Publish now", self.publish), ("Stop provers", self.stop_provers),
                         ("Open logs", self.open_logs), ("Refresh score", self.refresh_score)):
            ttk.Button(btns, text=text, command=fn).pack(side="left", padx=(0, 6))
        ttk.Label(btns, text="   Log:").pack(side="left")
        self.log_var = tk.StringVar(value=LOG_CHOICES[0])
        lb = ttk.Combobox(btns, textvariable=self.log_var, values=LOG_CHOICES, state="readonly", width=18)
        lb.pack(side="left", padx=(4, 0))
        lb.bind("<<ComboboxSelected>>", lambda _e: self._log_choice())
        self.status = ttk.Label(btns, text="", font=("Segoe UI", 10))
        self.status.pack(side="left", padx=10)

        logf = ttk.Frame(root, padding=(10, 0, 10, 10))
        logf.pack(fill="both", expand=True)
        self.logname = ttk.Label(logf, text="", font=("Segoe UI", 9))
        self.logname.pack(anchor="w")
        self.log = tk.Text(logf, wrap="none", font=("Consolas", 9), bg="#111418", fg="#d8dee9", relief="flat")
        sy = ttk.Scrollbar(logf, orient="vertical", command=self.log.yview)
        self.log.configure(yscrollcommand=sy.set)
        sy.pack(side="right", fill="y")
        self.log.pack(fill="both", expand=True)
        self.last_log = None
        self.tick()

    # ---- helpers
    def _do(self, label, fn):
        self.status.configure(text=label + "...")

        def work():
            try:
                msg = fn()
            except Exception as exc:
                msg = "%s failed: %s" % (label, exc)
            self.msgs.put(msg)
        threading.Thread(target=work, daemon=True).start()

    def _log_choice(self):
        self.m.log_choice = self.log_var.get()
        self.last_log = None
        threading.Thread(target=self.m.logs, daemon=True).start()

    # ---- drops
    def run_drop(self):
        sel = self.drop_map.get(self.drop_var.get())
        if not sel:
            self.status.configure(text="Pick a drop first")
            return
        zpath, top, inst, _m = sel
        if inst != "PANEL" and self.m.get().get("installer_pids"):
            if not messagebox.askyesno("Run drop", "Another installer is running (%s). Start %s anyway? It "
                                       "will wait for the other one where it needs to."
                                       % (self.m.get().get("installer"), inst)):
                return
        if not messagebox.askyesno("Run drop", "Extract %s and run %s?" % (os.path.basename(zpath),
                                                                            "the new panel" if inst == "PANEL" else inst)):
            return
        if zpath.lower().endswith(".zip"):
            try:
                with zipfile.ZipFile(zpath) as z:
                    z.extractall(DOWNLOADS)
            except (OSError, zipfile.BadZipFile) as exc:
                self.status.configure(text="Extract failed: %s" % exc)
                return
        if inst == "PANEL":
            # a new panel: start it, then close this one
            subprocess.Popen([PYW, os.path.join(DOWNLOADS, top, "cow_panel.py"), "--repo", self.m.repo],
                             cwd=self.m.repo, creationflags=DETACH, close_fds=True)
            self.m.stop.set()
            self.root.after(500, self.root.destroy)
            return
        os.makedirs(self.m.drops_dir, exist_ok=True)
        logp = os.path.join(self.m.drops_dir, "%s_%s.log" % (top, time.strftime("%m%d_%H%M%S")))
        fh = open(logp, "w", encoding="utf-8", errors="replace")
        fh.write("== %s  %s\n" % (time.strftime("%Y-%m-%d %H:%M:%S"), os.path.join(DOWNLOADS, top, inst)))
        fh.flush()
        env = dict(os.environ, PYTHONUNBUFFERED="1", PYTHONIOENCODING="utf-8")
        subprocess.Popen([PY, "-u", os.path.join(DOWNLOADS, top, inst)], cwd=self.m.repo, stdout=fh,
                         stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL, env=env, creationflags=DETACH,
                         close_fds=True)
        fh.close()
        self.log_var.set(LOG_CHOICES[0])
        self._log_choice()
        self.status.configure(text="Started %s (its console: %s)" % (inst, logp))

    def run_cycle(self):
        """The standing loop (tools/cow/cycle.py): grow, judge, relift, publish, start the line."""
        script = os.path.join(self.m.repo, "tools", "cow", "cycle.py")
        if not os.path.isfile(script):
            self.status.configure(text="tools/cow/cycle.py is not installed yet: run the Cycle drop first")
            return
        if self.m.get().get("installer_pids"):
            self.status.configure(text="%s is already running" % self.m.get().get("installer"))
            return
        if not messagebox.askyesno("Run cycle", "Run a full cycle now? (lift what has no unit, judge, relift, "
                                   "publish, start the line)"):
            return
        os.makedirs(self.m.drops_dir, exist_ok=True)
        logp = os.path.join(self.m.drops_dir, "Cycle_%s.log" % time.strftime("%m%d_%H%M%S"))
        fh = open(logp, "w", encoding="utf-8", errors="replace")
        fh.write("== %s  %s\n" % (time.strftime("%Y-%m-%d %H:%M:%S"), script))
        fh.flush()
        env = dict(os.environ, PYTHONUNBUFFERED="1", PYTHONIOENCODING="utf-8")
        subprocess.Popen([PY, "-u", script], cwd=self.m.repo, stdout=fh, stderr=subprocess.STDOUT,
                         stdin=subprocess.DEVNULL, env=env, creationflags=DETACH, close_fds=True)
        fh.close()
        self.log_var.set(LOG_CHOICES[0])
        self._log_choice()
        self.status.configure(text="Cycle started")

    def stop_drop(self):
        pids = self.m.get().get("installer_pids") or []
        if not pids:
            self.status.configure(text="No drop is running")
            return
        if not messagebox.askyesno("Stop drop", "End %s and every prover it started? What they finished is "
                                   "kept; running the drop again carries on." % self.m.get().get("installer")):
            return

        def f():
            for p in pids:
                kill(p, tree=True)
            for p in self.m.get().get("prover_pids") or []:
                kill(p, tree=True)
            return "Ended the drop and its provers"
        self._do("Stopping the drop", f)

    # ---- the line and the rest
    def start_line(self):
        def f():
            rc, out = run([PY, "tools/cow/conveyor.py", "start"], self.m.repo, 300)
            return (out[-1] if out else "start: no output")[:160]
        self._do("Starting the line", f)

    def stop_line(self):
        def f():
            run([PY, "tools/cow/conveyor.py", "stop"], self.m.repo, 120)
            return "Stop requested: the line ends after the step it is in"
        self._do("Stopping the line", f)

    def publish(self):
        if not messagebox.askyesno("Publish", "Commit the scoreboard and push to GitHub now?"):
            return

        def f():
            rc, out = run([PY, "tools/cow/conveyor.py", "publish"], self.m.repo, 1800)
            pub = [ln for ln in out if ln.startswith("PUBLISH ")]
            return pub[-1] if pub else (out[-1] if out else "publish: no output")
        self._do("Publishing", f)

    def stop_provers(self):
        n = self.m.get().get("provers")
        if not n or n == "?":
            self.status.configure(text="No provers running")
            return
        if not messagebox.askyesno("Stop provers", "End %s prover process(es)? A drop waiting on them carries "
                                   "on to its next step with what they finished." % n):
            return

        def f():
            pids = self.m.get().get("prover_pids") or []
            for p in pids:
                kill(p)
            return "Ended %d prover process(es)" % len(pids)
        self._do("Stopping provers", f)

    def open_logs(self):
        d = os.path.dirname(self.m.get().get("log_path") or "") or os.path.join(self.m.repo, "build")
        if os.name == "nt":
            os.startfile(d)                          # noqa: S606
        else:
            run(["xdg-open", d], None, 10)

    def refresh_score(self):
        self.status.configure(text="Counting the score...")
        threading.Thread(target=self.m.score, daemon=True).start()

    # ---- the refresh
    def tick(self):
        d = self.m.get()
        while not self.msgs.empty():
            self.status.configure(text=self.msgs.get())
        nprov = d.get("provers", 0)
        # what the system is doing, in one line. Both this and the line row are module functions, so
        # `cow_panel.py --print-state` and a test can ask the window's question without a window.
        sysline, color = header_line(self.m, d)
        self.system.configure(text=sysline, foreground=color)
        # the score
        t_all = d.get("tiers") or {}
        waiting = t_all.get("stale", 0)
        judged = sum(v for k, v in t_all.items() if k in ("gold", "silver", "weak", "fail", "timeout", "noisy",
                                                           "hang", "error"))
        if "pub_pct" in d and (waiting > 0.25 * max(1, waiting + judged) or "live_pct" not in d):
            self.pct.configure(text="%.3f%% proven  (on GitHub, %d gold)" % (d["pub_pct"], d["pub_gold"]))
            if "live_pct" in d:
                self.pct_sub.configure(text="re-judge in progress: %d of %d units judged by the current judge, "
                                            "%d gold among them   |   counted %s"
                                       % (judged, judged + waiting, d["live_gold"],
                                          ago(time.time() - d.get("score_when", time.time()))))
            else:
                self.pct_sub.configure(text="counting the live score...")
        elif "live_pct" in d:
            self.pct.configure(text="%.3f%% proven" % d["live_pct"])
            sub = "%d gold now" % d["live_gold"]
            if "pub_pct" in d:
                diff = d["live_pct"] - d["pub_pct"]
                sub += "   |   on GitHub: %.3f%%%s" % (d["pub_pct"], ("   (+%.3f not pushed yet)" % diff) if diff > 0.0005 else "")
            self.pct_sub.configure(text=sub + "   |   counted %s" % ago(time.time() - d.get("score_when", time.time())))
        if t_all:
            order = ("gold", "silver", "weak", "fail", "timeout", "no unit yet")
            self.tiers.configure(text="   ".join("%s %d" % (k, t_all[k]) for k in order if k in t_all))
        ltext, lcolor = line_row(d)
        self.rows["Line (model loop)"].configure(text=ltext, foreground=lcolor)
        self.rows["Provers"].configure(text=str(nprov))
        self.rows["Last push"].configure(text=(d.get("push") or "-")[:90])
        # drops
        ds = d.get("drops") or []
        labels = ["%s%s   (%s, %s)" % (os.path.basename(z), "" if z.lower().endswith(".zip") else "  [folder]",
                                          "panel" if i == "PANEL" else i, ago(time.time() - m))
                  for z, _t, i, m in ds]
        if labels != list(self.drop_box.cget("values") or ()):
            self.drop_map = dict(zip(labels, ds))
            self.drop_box.configure(values=labels)
            if self.drop_var.get() not in self.drop_map and labels:
                self.drop_var.set(labels[0])
        # the log
        lines = d.get("log_lines") or []
        key = (d.get("log_path"), len(lines), lines[-1] if lines else "")
        if key != self.last_log:
            self.last_log = key
            at_end = self.log.yview()[1] > 0.98
            self.log.configure(state="normal")
            self.log.delete("1.0", "end")
            self.log.insert("end", "\n".join(lines))
            self.log.configure(state="disabled")
            if at_end:
                self.log.see("end")
        self.logname.configure(text="%s   (written %s)" % (d.get("log_path", ""), d.get("log_when", "")))
        self.root.after(1000, self.tick)


def _fatal(exc_text):
    try:
        with open(os.path.join(HERE, "cow_panel_error.txt"), "w", encoding="utf-8") as fh:
            fh.write(exc_text)
    except OSError:
        pass
    try:
        r = tk.Tk()
        r.withdraw()
        messagebox.showerror("Cow panel", exc_text[-1500:])
    except Exception:
        pass


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--repo", default="")
    ap.add_argument("--print-state", action="store_true",
                    help="print what the header and the line row would say, and exit: no window, no buttons")
    a = ap.parse_args()
    repo = a.repo or (os.getcwd() if os.path.isfile(os.path.join(os.getcwd(), "tools", "cow", "conveyor.py"))
                      else DEFAULT_REPO)
    repo = os.path.abspath(repo)
    if not os.path.isfile(os.path.join(repo, "tools", "cow", "conveyor.py")):
        _fatal("No repository at %s (pass --repo <path>)." % repo)
        return 1
    model = Model(repo)
    if a.print_state:
        # what the window would claim, asked without a window: this is how the RUNNING/STOPPED rules are checked
        for fn in (model.heartbeat, model.procs, model.drop_state, model.logs):
            fn()
        d = model.get()
        print("header : %s" % header_line(model, d)[0])
        print("line   : %s" % line_row(d)[0])
        print("log    : %s (written %s)" % (d.get("log_path"), d.get("log_when")))
        return 0
    threading.Thread(target=model.loop, daemon=True).start()
    root = tk.Tk()
    Panel(root, model)
    root.protocol("WM_DELETE_WINDOW", lambda: (model.stop.set(), root.destroy()))
    root.mainloop()
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except SystemExit:
        raise
    except Exception:
        import traceback
        _fatal(traceback.format_exc())
        sys.exit(1)
