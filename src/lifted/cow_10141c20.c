/* f_0x10141c20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   zero-extends the low 16 bits of the argument when its low byte is at least 12; otherwise tail-calls FUN_100fd4c0 with the argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10141c20(Guest* g, uint32_t param)
{
    if ((uint8_t)param < 0xCu)
    {
        /*
         * The original tail jmp executes after:
         *   mov eax, dword ptr [esp + 4]
         * so the callee sees eax = param as well as the stack argument.
         */
        g->eax = param;
        return cow_cdecl(g, COW_IMG(0x100fd4c0u), 1u, param);
    }

    /*
     * xor ax, ax zeroes only the low 16 bits of eax.
     * At this point eax == param.
     */
    return param & 0xFFFF0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10141c20(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
