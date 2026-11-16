/* f_0x101addc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101addc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, arg1);
    wr32(sp0 - 8u, 0x31u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 + 4u, 0x31u, arg1);
    t2 = g->edx;
    if (rd32(t1) == 0u) goto L_101addfb;
    eax = rd32(t1);
    edx = t2;
    if (rd32(eax) == 0u) goto L_101addfb;
    eax = rd32(eax);
    wr32(sp0 - 4u, eax + 0x30u);
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, eax + 0x30u);
    return rd32(arg2 * 4u + rd32(t3));
L_101addfb: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101addc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101addc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
