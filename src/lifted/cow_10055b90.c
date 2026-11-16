/* f_0x10055b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10055b90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x4au);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 0x4au, 0u, 0xffffffffu);
    t1 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_10055bd3;
    }
    eax = t2;
    edx = t3;
L_10055bb7: ;
    wr32(sp0 - 0x20u, 0xffff8080u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10055ea0u), eax + 0x30u, 1, 0xffff8080u);
    t4 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10055bb7;
    }
    edx = t6;
L_10055bd3: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10055b90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
