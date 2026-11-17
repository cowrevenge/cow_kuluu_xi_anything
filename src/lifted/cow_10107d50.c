/* f_0x10107d50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10107d90 with the second argument, then if the low 32-bit word at the first argument lacks bit 0x20, stores the low byte of the call result as a word at offset 0x48, sets bit 0x20, and retur

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10107d50(Guest* g, uint32_t param1, uint32_t param2, uint32_t sp0)
{
    const uint32_t saved_ebx = g->ebx;

    /*
     * Original stack at the call:
     *   sp0 - 12: return address pushed by call
     *   sp0 -  8: param2 pushed by caller
     *   sp0 -  4: saved ebx pushed by caller
     *   sp0      : return address of this function
     *
     * cow_cdecl will push the argument and return address itself, so start
     * with esp = sp0 - 4 to make the callee see esp = sp0 - 12.
     */
    g->esp = sp0 - 4u;
    wr32(sp0 - 4u, saved_ebx);

    cow_cdecl(g, COW_IMG(0x10107d90u), 1u, param2);

    g->ebx = saved_ebx;
    g->esp = sp0;

    const uint32_t edx = param1;
    const uint32_t ecx = rd32(edx);

    if ((ecx & 0x20u) != 0u)
    {
        return 0u;
    }

    const uint32_t call_eax = g->eax;
    const uint16_t ax = (uint16_t)((uint8_t)call_eax);

    wr16(edx + 0x48u, ax);
    wr32(edx, ecx | 0x20u);

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10107d50(g, param1, param2, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
