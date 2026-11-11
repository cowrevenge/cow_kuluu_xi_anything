"""Make a Linux-testable copy of tools/cow/cowdiff.c: MSVC's __try/__except is replaced by a signal
handler, nothing else. Used only by the judge self-test; the real harness is never built from this."""
import sys

SHIM = r'''
/* TEST SHIM (Linux only): stands in for MSVC's __try/__except so a guest fault ends the state */
#include <signal.h>
static sigjmp_buf test_jmp;
static volatile int test_armed;
static void test_on_fault(int sig) { (void)sig; if (test_armed) { test_armed = 0; siglongjmp(test_jmp, 1); } _exit(99); }
static void test_install(void) { struct sigaction sa; memset(&sa, 0, sizeof sa); sa.sa_handler = test_on_fault; sa.sa_flags = SA_NODEFER; sigaction(SIGSEGV, &sa, NULL); sigaction(SIGBUS, &sa, NULL); }
'''


def main(src, dst):
    text = open(src, encoding="utf-8").read()
    marker = "static void run_side(GuestFn fn, Guest* g, Outcome* o)"
    i = text.index(marker)
    text = text[:i] + SHIM.lstrip("\n") + text[i:]
    # the non-MSVC branch of run_side calls fn(g) bare; arm the handler around it
    j = text.index(marker)
    k = text.index("#else", j)
    k2 = text.index("fn(g);", k)
    text = (text[:k2] + "if (sigsetjmp(test_jmp, 1) == 0) { test_armed = 1; fn(g); test_armed = 0; }\n"
            "    else o->faulted = (int)0xC0000005;" + text[k2 + len("fn(g);"):])
    m = text.index("int main(")
    b = text.index("{", m)
    text = text[:b + 1] + "\n    test_install();" + text[b + 1:]
    open(dst, "w", encoding="utf-8").write(text)


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
