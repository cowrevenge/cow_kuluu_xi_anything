/* f_0x100ac9f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the dword at offset 0xc from the first argument into the dword pointed to by the second argument, and returns the first argument with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100ac9f0(Guest* g, uint32_t src, uint32_t dst)
{
    g->eax = src;
    g->edx = dst;

    const uint32_t ecx = rd32(src + 0xCu);
    g->ecx = ecx;

    const uint32_t eax = (src & 0xFFFFFF00u) | 1u;
    g->eax = eax;

    wr32(dst, ecx);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t src = rd32(sp0 + 4u);
    g->eax = src;

    const uint32_t dst = rd32(sp0 + 8u);
    g->edx = dst;

    const uint32_t result = cow_fn_100ac9f0(g, src, dst);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
