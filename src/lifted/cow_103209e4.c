/* f_0x103209e4 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object at param points to an MSVC C++ exception record with the expected magic values, tail-call the common handler; otherwise optionally call a registered filter through a global function poin

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_103209e4(Guest* g, uint32_t param)
{
    const uint32_t rec = rd32(param);

    if (rd32(rec) == 0xE06D7363u &&
        rd32(rec + 0x10u) == 3u &&
        rd32(rec + 0x14u) == 0x19930520u)
    {
        /* Preserve the register state that the original tail jmp leaves for the target. */
        g->esi = param;
        g->eax = rec;

        /*
         * Tail call to 0x1032181c.
         * The call site is a jmp from a function with one stack argument, so use the
         * same argument convention as this function and let the target pop its own
         * argument bytes.
         */
        const uint32_t r = cow_stdcall(g, COW_IMG(0x1032181cu), 1u, param);
        return r;
    }

    const uint32_t fp = rd32(COW_IMG(0x109b28c8u));

    if (fp != 0u)
    {
        const uint32_t ok = cow_cdecl(g, COW_IMG(0x10324cbeu), 1u, fp);
        if (ok != 0u)
        {
            /*
             * Original:
             *   push esi
             *   call dword ptr [0x109b28c8]
             * with no caller-side cleanup, so the callee pops the argument.
             */
            return cow_stdcall(g, fp, 1u, param);
        }
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103209e4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_103209e4(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
