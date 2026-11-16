/* f_0x101c4d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c4d50(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_101c4d6c;
    if (arg2 == 0u) goto L_101c4d6c;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, arg1, in_edx, 1, 1, arg2);
    t1 = g->edx;
    g->edx = t1;
    return 0u;
L_101c4d6c: ;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, arg1 + 0x300u, in_edx, 1, 1, arg1 + 0x300u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c4d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
