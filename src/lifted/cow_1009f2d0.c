/* f_0x1009f2d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   forwards the three stack arguments plus a byte read from the third argument to FUN_1009ee60, preserving the original register state at the call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_1009f2d0(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    uint32_t ecx_value = (g->ecx & 0xFFFFFF00u) | rd8(arg3 + 0x1Cu);

    g->ecx = ecx_value;
    g->eax = arg1;
    g->edx = arg2;

    cow_cdecl(g, COW_IMG(0x1009ee60u), 4u, arg1, arg2, arg3, ecx_value);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg3 = rd32(sp0 + 0xCu);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1009f2d0(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
