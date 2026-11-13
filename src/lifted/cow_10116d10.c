/* f_0x10116d10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0 if bit 0 of byte [param+0x134] is set; otherwise tail-calls the target and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10116d10(Guest* g, uint32_t param)
{
    if (rd8(param + 0x134u) & 1u)
    {
        /* Original: xor eax, eax; ret.  edx is untouched. */
        return 0u;
    }

    /* Original: jmp 0x100d7e80 (tail call).  Preserve the target's eax/edx. */
    (void)cow_cdecl(g, COW_IMG(0x100d7e80u), 1u, param);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10116d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10116d10(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
