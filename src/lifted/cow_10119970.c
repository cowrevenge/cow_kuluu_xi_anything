/* f_0x10119970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10119970(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 0x10u)
    {
        edx = in_edx;
        goto L_10119a0b;
    }
    t1 = rd32(COW_IMG(0x10119a10u) + rd8(COW_IMG(0x10119a30u) + arg1) * 4u);
    edx = rd8(COW_IMG(0x10119a30u) + arg1);
    switch (t1 - RD)
    {
    case 0x1011998cu: goto L_1011998c;
    case 0x1011999bu: goto L_1011999b;
    case 0x101199abu: goto L_101199ab;
    case 0x101199bbu: goto L_101199bb;
    case 0x101199cfu: goto L_101199cf;
    case 0x101199e3u: goto L_101199e3;
    case 0x101199f7u: goto L_101199f7;
    case 0x10119a0bu: goto L_10119a0b;
    default: rt_fatal(g, COW_IMG(0x10119985u), "switch");
    }
    return 0;
L_1011998c: ;
    t2 = rd32(self + 0x18u);
    wr16(self + 0x28u, 0u);
    wr32(self + 0x10u, t2);
    g->edx = edx;
    return t2;
L_1011999b: ;
    wr16(self + 0x28u, 2u);
    wr32(self + 0x10u, 1u);
    g->edx = edx;
    return arg1;
L_101199ab: ;
    wr32(self + 0x10u, 3u);
    wr16(self + 0x28u, 0u);
    g->edx = edx;
    return arg1;
L_101199bb: ;
    wr16(self + 0x28u, 0u);
    wr32(self + 0x10u, 0xbu);
    wr32(self + 0x18u, 0xbu);
    g->edx = edx;
    return 0xbu;
L_101199cf: ;
    wr16(self + 0x28u, 0u);
    wr32(self + 0x10u, 5u);
    wr32(self + 0x18u, 5u);
    g->edx = edx;
    return 5u;
L_101199e3: ;
    wr16(self + 0x28u, 0u);
    wr32(self + 0x10u, 0xfu);
    wr32(self + 0x18u, 0xfu);
    g->edx = edx;
    return 0xfu;
L_101199f7: ;
    wr32(self + 0x10u, 0x10u);
    wr32(self + 0x18u, 0x10u);
    wr16(self + 0x28u, 0u);
L_10119a0b: ;
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119970(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
