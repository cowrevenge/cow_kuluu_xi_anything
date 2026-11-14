/* f_0x10136fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on this object, then calls another helper with the object's field at +8 as this, and if it returns non-null sets the byte at result+0x44 to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10136fb0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    cow_thiscall_cdecl(g, COW_IMG(0x10136450u), self, 0u);

    const uint32_t this2 = rd32(self + 8u);
    cow_thiscall_cdecl(g, COW_IMG(0x10118220u), this2, 0u);

    const uint32_t result = g->eax;
    const uint32_t final_edx = g->edx;

    if (result != 0u)
    {
        wr8(result + 0x44u, (uint8_t)1u);
    }

    g->esi = saved_esi;
    g->edx = final_edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10136fb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
