/* f_0x1013e590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013e590(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x27u) - 1u > 4u)
    {
        eax = rd8(self + 0x27u) - 1u;
        goto L_1013e633;
    }
    eax = rd8(self + 0x27u) - 1u;
    t1 = rd32(COW_IMG(0x1013e68cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1013e5aeu: goto L_1013e5ae;
    case 0x1013e5cau: goto L_1013e5ca;
    case 0x1013e5e5u: goto L_1013e5e5;
    case 0x1013e600u: goto L_1013e600;
    case 0x1013e61bu: goto L_1013e61b;
    default: rt_fatal(g, COW_IMG(0x1013e5a7u), "switch");
    }
    return;
L_1013e5ae: ;
    wr32(sp0 - 8u, 0x82u);
    wr32(sp0 - 4u, 0xf0u);
    t6 = rd32(self + 8u);
    wr16(t6 + 0x38u, 0u);
    eax = t6;
    edx = in_edx;
    loc_8 = 0x82u;
    loc_4 = 0xf0u;
L_1013e64c: ;
    if (rd8(self + 0x371u) != 0u)
    {
        t8 = rd32(self + 8u);
        wr16(t8 + 0x38u, 0u);
        eax = t8;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    t9 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t9);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t10);
    t11 = rd32(self + 8u);
    wr16(self + 0x372u, (uint16_t)t9);
    cow_call_regs(g, COW_IMG(0x10119110u), t9, t11, g->edx, 0, 2, t10, t9);
    return;
L_1013e5ca: ;
    wr32(sp0 - 8u, 0x82u);
    wr32(sp0 - 4u, 0xf0u);
    t5 = rd32(self + 8u);
    wr16(t5 + 0x38u, 0xau);
    edx = t5;
    loc_8 = 0x82u;
    loc_4 = 0xf0u;
    goto L_1013e64c;
L_1013e5e5: ;
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x30u);
    t4 = rd32(self + 8u);
    wr16(t4 + 0x38u, 0x50u);
    eax = t4;
    edx = in_edx;
    loc_8 = 0x10u;
    loc_4 = 0x30u;
    goto L_1013e64c;
L_1013e600: ;
    wr32(sp0 - 8u, 0x82u);
    wr32(sp0 - 4u, 0x104u);
    t3 = rd32(self + 8u);
    wr16(t3 + 0x38u, 0xau);
    edx = t3;
    loc_8 = 0x82u;
    loc_4 = 0x104u;
    goto L_1013e64c;
L_1013e61b: ;
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x10u);
    t2 = rd32(self + 8u);
    wr16(t2 + 0x38u, 0x50u);
    eax = t2;
    edx = in_edx;
    loc_8 = 0x10u;
    loc_4 = 0x10u;
    goto L_1013e64c;
L_1013e633: ;
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0xf0u);
    t7 = rd32(self + 8u);
    wr16(t7 + 0x38u, 0xcu);
    edx = t7;
    loc_8 = 0x10u;
    loc_4 = 0xf0u;
    goto L_1013e64c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013e590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
