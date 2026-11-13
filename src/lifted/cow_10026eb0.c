/* f_0x10026eb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies three dwords from the second stack argument to the first stack argument, preserving the original sequential read/write order, and leaves eax with the third source dword and edx with the second.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10026eb0(Guest* g, uint32_t dest, uint32_t src)
{
    g->eax = src;

    g->edx = rd32(src);
    wr32(dest, g->edx);

    g->edx = rd32(src + 4u);
    wr32(dest + 4u, g->edx);

    g->eax = rd32(src + 8u);
    wr32(dest + 8u, g->eax);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t src = rd32(sp0 + 8u);
    g->eax = src;

    const uint32_t dest = rd32(sp0 + 4u);
    g->ecx = dest;

    const uint32_t result = cow_fn_10026eb0(g, dest, src);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
