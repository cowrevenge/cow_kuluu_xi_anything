/* f_0x1023f560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023f560(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 1848u);

    wr32(sp0 - 0x70cu, in_esi);
    wr32(sp0 - 0x710u, in_edi);
    wr8(sp0 - 0x400u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x3ffu;
    eax = 0u;
    ecx = 0xffu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x714u, 7u);
    wr32(sp0 - 0x718u, self + 0x1cu);
    wr32(sp0 - 0x71cu, sp0 - 0x600u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->edx = sp0 - 0x600u;
    g->esp = sp0 - 0x714u;
    cow_thiscall_cdecl(g, COW_IMG(0x1023f450u), self + 0x1cu, 2, sp0 - 0x600u, self + 0x1cu);
    t1 = g->edx;
    wr32(sp0 - 0x720u, 7u);
    wr32(sp0 - 0x724u, self + 0x34u);
    wr32(sp0 - 0x728u, sp0 - 0x700u);
    g->esp = sp0 - 0x720u;
    cow_thiscall_cdecl(g, COW_IMG(0x1023f450u), sp0 - 0x700u, 2, sp0 - 0x700u, self + 0x34u);
    t2 = g->ecx;
    wr32(sp0 - 0x72cu, 7u);
    wr32(sp0 - 0x730u, self + 0x44u);
    wr32(sp0 - 0x734u, sp0 - 0x500u);
    g->edx = self + 0x44u;
    g->esp = sp0 - 0x72cu;
    cow_thiscall_cdecl(g, COW_IMG(0x1023f450u), t2, 2, sp0 - 0x500u, self + 0x44u);
    t3 = g->edx;
    if (rd32(self + 0x14u) > 4u) goto L_1023f69b;
    eax = rd32(self + 0x14u);
    edx = t3;
    t4 = rd32(COW_IMG(0x1023f6e8u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1023f5d5u: goto L_1023f5d5;
    case 0x1023f604u: goto L_1023f604;
    case 0x1023f628u: goto L_1023f628;
    case 0x1023f652u: goto L_1023f652;
    case 0x1023f686u: goto L_1023f686;
    default: rt_fatal(g, COW_IMG(0x1023f5ceu), "switch");
    }
    return 0;
L_1023f5d5: ;
    wr32(sp0 - 0x714u, sp0 - 0x700u);
    wr32(sp0 - 0x718u, sp0 - 0x600u);
    wr32(sp0 - 0x71cu, 0x47u);
    wr32(sp0 - 0x720u, 8u);
    g->eax = eax;
    g->ecx = sp0 - 0x700u;
    g->edx = sp0 - 0x600u;
    g->esp = sp0 - 0x718u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x47u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x71cu, t10);
    wr32(sp0 - 0x720u, sp0 - 0x400u);
    g->esp = sp0 - 0x70cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t10, sp0 - 0x600u, sp0 - 0x700u, in_edi);
L_1023f69b: ;
    wr32(sp0 - 0x714u, sp0 - 0x708u);
    t13 = rd32(self + 8u);
    wr16(sp0 - 0x708u, 0u);
    wr16(sp0 - 0x706u, 0u);
    wr16(sp0 - 0x704u, 0u);
    wr16(sp0 - 0x702u, 0u);
    g->edx = sp0 - 0x708u;
    g->esp = sp0 - 0x710u;
    cow_call_regs(g, COW_IMG(0x10118f70u), 0u, t13, g->edx, 0, 1, sp0 - 0x708u);
    t14 = g->edx;
    wr16(sp0 - 0x708u, (uint16_t)(rd16(sp0 - 0x708u) + 0x30u));
    wr16(sp0 - 0x706u, (uint16_t)(rd16(sp0 - 0x706u) + 4u));
    wr32(sp0 - 0x714u, sp0 - 0x708u);
    wr32(sp0 - 0x718u, sp0 - 0x400u);
    g->eax = sp0 - 0x708u;
    g->edx = t14;
    g->esp = sp0 - 0x6d8u;
    t15 = cow_cdecl(g, COW_IMG(0x1023f4d0u), 16, sp0 - 0x400u, sp0 - 0x708u, in_edi, in_esi, rd32(sp0 - 0x708u), rd32(sp0 - 0x704u), rd32(sp0 - 0x700u), rd32(sp0 - 0x6fcu), rd32(sp0 - 0x6f8u), rd32(sp0 - 0x6f4u), rd32(sp0 - 0x6f0u), rd32(sp0 - 0x6ecu), rd32(sp0 - 0x6e8u), rd32(sp0 - 0x6e4u), rd32(sp0 - 0x6e0u), rd32(sp0 - 0x6dcu));
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1023f604: ;
    wr32(sp0 - 0x714u, sp0 - 0x700u);
    wr32(sp0 - 0x718u, 0x4bu);
    wr32(sp0 - 0x71cu, 8u);
    g->eax = eax;
    g->ecx = sp0 - 0x700u;
    g->esp = sp0 - 0x714u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x4bu);
    t9 = g->ecx;
    wr32(sp0 - 0x718u, t8);
    wr32(sp0 - 0x71cu, sp0 - 0x400u);
    g->esp = sp0 - 0x708u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t8, sp0 - 0x700u, in_edi, in_esi);
    goto L_1023f69b;
L_1023f628: ;
    wr32(sp0 - 0x714u, sp0 - 0x600u);
    wr32(sp0 - 0x718u, sp0 - 0x700u);
    wr32(sp0 - 0x71cu, 2u);
    wr32(sp0 - 0x720u, 0x4eu);
    wr32(sp0 - 0x724u, 8u);
    wr32(sp0 - 0x728u, 0x400u);
    wr32(sp0 - 0x72cu, sp0 - 0x400u);
    g->esp = sp0 - 0x714u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x400u, 0x400u, 8u, 0x4eu, 2u, sp0 - 0x700u);
    goto L_1023f69b;
L_1023f652: ;
    wr32(sp0 - 0x714u, sp0 - 0x700u);
    wr32(sp0 - 0x718u, sp0 - 0x500u);
    wr32(sp0 - 0x71cu, sp0 - 0x600u);
    wr32(sp0 - 0x720u, 0x51u);
    wr32(sp0 - 0x724u, 8u);
    g->eax = sp0 - 0x700u;
    g->ecx = sp0 - 0x500u;
    g->edx = sp0 - 0x600u;
    g->esp = sp0 - 0x71cu;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x51u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x720u, t5);
    wr32(sp0 - 0x724u, sp0 - 0x400u);
    g->esp = sp0 - 0x710u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t5, sp0 - 0x600u, sp0 - 0x500u, sp0 - 0x700u);
    goto L_1023f69b;
L_1023f686: ;
    wr32(sp0 - 0x714u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x718u, sp0 - 0x400u);
    g->esp = sp0 - 0x704u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x103d3c84u), in_edi, in_esi, rd32(sp0 - 0x708u));
    goto L_1023f69b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
