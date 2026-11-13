/* f_0x10116fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_1015e010 with this=0x10621838 and a stack pointer to a local containing ecx+0x30, then restores ecx from that local.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10116fe0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 4u);

    /* push ecx / add ecx, 0x30 / lea eax, [esp] / mov [esp], ecx */
    wr32(buf, self + 0x30u);

    /* push eax */
    g->eax = buf;
    g->esp = buf;

    /* mov ecx, 0x10621838 / call 0x1015e010 */
    cow_thiscall(g, COW_IMG(0x1015e010u), COW_IMG(0x10621838u), 1u, buf);

    /* The callee has popped its argument and the return address; esp is back at buf. */
    g->esp = buf;

    /* pop ecx */
    g->ecx = rd32(buf);

    /* ret */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10116fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10116fe0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
