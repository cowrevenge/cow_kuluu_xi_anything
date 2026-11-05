// CowLiftDump.java - Ghidra headless post-script for the cow lift pipeline.
//
// Decompile EVERY function in the program to C and write one JSON object per line to the file named by
// the first script argument. This is the raw material tools/cow/lift.py turns into cow style, so the
// thing it has to get right is not the C - it is the ADDRESS: every record carries the entry point and
// the body the program itself reports, because ledger/functions.csv is the authority on boundaries and
// PHASE A step 2 is the comparison of the two.
//
// Compiled by analyzeHeadless itself (it is a GhidraScript), not by javac by hand: the whole classpath
// and the script-args convention belong to the launcher.
//
//   analyzeHeadless C:\ghidra_proj cow -process FFXiMain.unpacked.dll \
//       -scriptPath tools\cow\ghidra -postScript "CowLiftDump.java C:\ghidra_out\functions.jsonl"
//
// args: <output.jsonl> [limit] [only:0xADDR,0xADDR,...]
//   limit  - stop after N functions (the 5-function smoke test and the 200-function pilot use this)
//   only:  - dump exactly those entry points, whatever the order. The smoke test points this at the
//            three units already hand-converted (0x102d9502, 0x102da1d8, 0x102da2b2) so the C can be
//            read against a conversion that is known-good, rather than against five arbitrary FUN_*s.
//
// Deliberately NOT done here: any opinion about what a function IS. Names stay Ghidra's FUN_* and
// nothing is renamed, because a rename is a claim and a claim owes the evidence cow/names.csv asks
// for. Naming is PHASE B, by cluster.

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.util.HashSet;
import java.util.Set;

public class CowLiftDump extends GhidraScript {

    private static String esc(String s) {
        if (s == null) return "";
        StringBuilder b = new StringBuilder(s.length() + 16);
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '"':  b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n");  break;
                case '\r': b.append("\\r");  break;
                case '\t': b.append("\\t");  break;
                default:
                    if (c < 0x20) b.append(String.format("\\u%04x", (int) c));
                    else b.append(c);
            }
        }
        return b.toString();
    }

    private static String hexOf(long v) {
        return "0x" + Long.toString(v & 0xFFFFFFFFL, 16);
    }

    private static String hex(Address a) {
        return a == null ? null : hexOf(a.getUnsignedOffset());
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new Exception("usage: CowLiftDump.java <out.jsonl> [limit] [only:a,b]");
        String outPath = args[0];
        int limit = 0;
        Set<String> only = null;
        for (int i = 1; i < args.length; i++) {
            String a = args[i].trim();
            if (a.startsWith("only:")) a = a.substring(5);
            // Both forms accepted, because a comma in a script arg is split by the launcher before it
            // reaches here (Ghidra saw 'only:0x102d9502' '0x102da1d8' '0x102da2b2' as three args), and a
            // bare hex token is what that leaves. So every 0x... token is an address, comma or not.
            for (String s : a.split("[,\\s]+")) {
                s = s.trim().toLowerCase();
                if (s.startsWith("0x") && s.length() > 2) {
                    if (only == null) only = new HashSet<String>();
                    only.add(s);
                } else if (s.matches("\\d+")) {
                    limit = Integer.parseInt(s);
                }
            }
        }

        DecompInterface decomp = new DecompInterface();
        if (!decomp.openProgram(currentProgram)) {
            throw new Exception("decompiler would not open the program: " + decomp.getLastMessage());
        }

        long t0 = System.currentTimeMillis();
        int n = 0, scanned = 0, failed = 0, timedout = 0, thunks = 0;
        String lastError = "";

        try (BufferedWriter w = new BufferedWriter(new FileWriter(outPath), 1 << 20)) {
            FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
            while (it.hasNext()) {
                if (monitor.isCancelled()) break;
                Function f = it.next();
                scanned++;
                Address entry = f.getEntryPoint();
                String addr = hex(entry);
                if (only != null && !only.contains(addr)) continue;

                // The body is the model's own, via Namespace.getBody() - the recompiler's ledger row has
                // an end and a size and step 2 compares them to THESE, not to something I derive.
                AddressSetView body = f.getBody();
                Address bmin = body.getMinAddress();
                Address bmax = body.getMaxAddress();
                long count = body.getNumAddresses();
                long span = (bmin == null || bmax == null) ? 0
                        : (bmax.getUnsignedOffset() - bmin.getUnsignedOffset()) + 1;

                int insns = 0;
                InstructionIterator ii = currentProgram.getListing().getInstructions(body, true);
                while (ii.hasNext()) { ii.next(); insns++; }

                boolean isThunk = f.isThunk();
                String thunkTarget = null;
                if (isThunk) {
                    thunks++;
                    Function th = f.getThunkedFunction(false);
                    if (th != null) thunkTarget = hex(th.getEntryPoint());
                }

                StringBuilder cal = new StringBuilder();
                Set<Function> called = f.getCalledFunctions(monitor);
                if (called != null) {
                    for (Function cf : called) {
                        if (cf == null) continue;
                        if (cal.length() > 0) cal.append(',');
                        cal.append(hex(cf.getEntryPoint()));
                    }
                }

                DecompileResults res = decomp.decompileFunction(f, 60000, monitor);
                String c = null, sig = null;
                boolean to = false, ok = false;
                if (res != null && res.decompileCompleted()) {
                    DecompiledFunction df = res.getDecompiledFunction();
                    if (df != null && df.getC() != null) { c = df.getC(); sig = df.getSignature(); ok = true; }
                }
                if (!ok && res != null) {
                    to = res.isTimedOut();
                    if (to) timedout++;
                    else { failed++; lastError = String.valueOf(res.getErrorMessage()); }
                }
                if (sig == null) {
                    sig = f.getPrototypeString(false, false);
                    if (sig == null) sig = f.getName() + "()";
                }

                Parameter[] ps = f.getParameters();
                StringBuilder pn = new StringBuilder();
                for (int i = 0; i < ps.length; i++) {
                    if (i > 0) pn.append('|');
                    pn.append(ps[i].getName()).append(':').append(ps[i].getDataType().getName());
                }

                StringBuilder j = new StringBuilder(1024);
                j.append('{');
                j.append("\"addr\":\"").append(addr).append('"').append(',');
                j.append("\"body_min\":\"").append(hex(bmin)).append('"').append(',');
                j.append("\"body_max\":\"").append(hex(bmax)).append('"').append(',');
                j.append("\"body_count\":").append(count).append(',');
                j.append("\"span\":").append(span).append(',');
                j.append("\"insns\":").append(insns).append(',');
                j.append("\"ghidra_name\":\"").append(esc(f.getName())).append('"').append(',');
                j.append("\"is_thunk\":").append(isThunk).append(',');
                j.append("\"thunk_target\":\"").append(esc(thunkTarget)).append('"').append(',');
                j.append("\"external\":").append(f.isExternal()).append(',');
                j.append("\"no_return\":").append(f.hasNoReturn()).append(',');
                j.append("\"variadic\":").append(f.hasVarArgs()).append(',');
                j.append("\"cc\":\"").append(esc(f.getCallingConventionName())).append('"').append(',');
                j.append("\"purge\":").append(f.getStackPurgeSize()).append(',');
                j.append("\"signature\":\"").append(esc(sig)).append('"').append(',');
                j.append("\"callees\":\"").append(esc(cal.toString())).append('"').append(',');
                j.append("\"decompiled\":").append(ok).append(',');
                j.append("\"timeout\":").append(to).append(',');
                j.append("\"param_count\":").append(f.getParameterCount()).append(',');
                j.append("\"params\":\"").append(esc(pn.toString())).append('"').append(',');
                j.append("\"c\":\"").append(esc(c)).append('"');
                j.append('}');
                w.write(j.toString());
                w.newLine();

                n++;
                if (n % 500 == 0) {
                    println("CowLiftDump: " + n + " dumped of " + scanned + " scanned, " + failed
                            + " failed, " + timedout + " timeout, " + thunks + " thunk, "
                            + ((System.currentTimeMillis() - t0) / 1000) + "s");
                }
                if (limit > 0 && n >= limit) break;
            }
        } finally {
            decomp.dispose();
        }

        println("CowLiftDump DONE: dumped " + n + " of " + scanned + " functions -> " + outPath
                + " (" + failed + " decompile failed" + (failed > 0 ? ", last error: " + lastError : "")
                + ", " + timedout + " timed out, " + thunks + " thunks, "
                + ((System.currentTimeMillis() - t0) / 1000) + "s)");
    }
}
