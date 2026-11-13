/* f_0x100539e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns true if the flag bit 0x400 is set in [this+0xd8], otherwise returns true iff FUN_100493b0() returns zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100539e0(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 0xd8u);

    /* test ah, 4 / je: branch when bit 10 of eax is clear */
    if ((eax & 0x400u) != 0u)
    {
        /* mov al, 1 */
        eax = (eax & 0xFFFFFF00u) | 1u;

        /* edx is untouched on this path */
        g->edx = g->edx;
        return eax;
    }

    /* call 0x100493b0 */
    uint32_t callee_eax = cow_thiscall_cdecl(g, COW_IMG(0x100493b0u), self, 0u);

    /* test eax, eax / sete al */
    uint32_t result = (callee_eax & 0xFFFFFF00u) | ((callee_eax == 0u) ? 1u : 0u);

    /* edx is whatever the callee left in it */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100539e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100539e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
