/* f_0x101a0730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101be6c0 with this=0x1066278c, a pointer to [esp+0xc], and the dword at [esp+0x110].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101a0730(Guest* g, uint32_t sp0, uint32_t a0, uint32_t a1, uint32_t a2)
{
    (void)a0;
    (void)a1;
    (void)a2;

    const uint32_t ecx = sp0 + 0xCu;
    const uint32_t eax = rd32(sp0 + 0x110u);

    cow_thiscall(g, COW_IMG(0x101be6c0u), COW_IMG(0x1066278cu), 2u, ecx, eax);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_101a0730(g, sp0, a0, a1, a2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
