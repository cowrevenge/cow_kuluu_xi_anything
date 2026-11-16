/* f_0x101f97a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f97a0(Guest* g)
{
    double d20;
    double d21;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    uint32_t loc_14;
    uint32_t loc_18;
    double loc_8_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = in_eax;
    ebx = 0u;
    loc_14 = 0u;
L_101f97af: ;
    loc_18 = 0u;
L_101f97b7: ;
    if (rd16(ebx + rd32(self + 0x6bcu) + 4u) == 0u) goto L_101f98dc;
    eax = (eax & 0xffff0000u) | rd16(ebx + rd32(self + 0x6bcu) + 4u);
    esi = ebx + rd32(self + 0x6bcu);
    if ((uint16_t)eax != (uint32_t)(int16_t)rd16(self + 0x100u)) goto L_101f98dc;
    eax = (uint16_t)eax;
    if (rd8(esi + 6u) != rd16(self + 0x102u)) goto L_101f98dc;
    if (rd16(esi + 2u) > 0xau)
    {
        eax = (eax & 0xffffff00u) | 1u;
        ecx = rd16(esi + 2u);
        edx = rd8(esi + 7u);
        goto L_101f983c;
    }
    eax = (eax & 0xffffff00u) | 1u;
    ecx = rd16(esi + 2u);
    edx = rd8(esi + 7u);
    t1 = rd32(COW_IMG(0x101f991cu) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x101f980bu: goto L_101f980b;
    case 0x101f9813u: goto L_101f9813;
    case 0x101f981bu: goto L_101f981b;
    case 0x101f9823u: goto L_101f9823;
    case 0x101f982bu: goto L_101f982b;
    case 0x101f9833u: goto L_101f9833;
    case 0x101f983cu: goto L_101f983c;
    default: rt_fatal(g, COW_IMG(0x101f9804u), "switch");
    }
    return 0;
L_101f980b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_call_regs(g, COW_IMG(0x101cbc70u), eax, g->ecx, g->edx, 1, 1, edx);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
L_101f9839: ;
L_101f983c: ;
    d20 = (double)(float)fr(g, (double)(int32_t)rd32(esi + 8u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    d21 = (double)(float)fr(g, (double)(int32_t)rd32(esi + 0xcu) * (double)rdf32(COW_IMG(0x1032a22cu)));
    if ((uint16_t)(-(rd16(esi + 2u) < 0xcu) & ((edx & 0xffff0000u) | rd16(esi + 2u))) != (uint16_t)arg2)
    {
        ecx = -(rd16(esi + 2u) < 0xcu) & ((edx & 0xffff0000u) | rd16(esi + 2u));
        edx = (edx & 0xffff0000u) | rd16(esi + 2u);
        loc_10_f = d20;
        loc_8_f = d21;
        goto L_101f9891;
    }
    ecx = -(rd16(esi + 2u) < 0xcu) & ((edx & 0xffff0000u) | rd16(esi + 2u));
    edx = (edx & 0xffff0000u) | rd16(esi + 2u);
    loc_10_f = d20;
    loc_8_f = d21;
    if (rd16(esi) != (uint16_t)arg3)
    {
        edx = (edx & 0xffff0000u) | (uint16_t)arg3;
        goto L_101f9891;
    }
    edx = (edx & 0xffff0000u) | (uint16_t)arg3;
    if ((uint8_t)arg4 != 0u) goto L_101f98dc;
    edi = rd32(COW_IMG(0x10382194u) + (uint16_t)ecx * 8u);
L_101f9899: ;
    if ((uint8_t)eax == 0u)
    {
        edx = rd8(COW_IMG(0x10382190u) + (uint16_t)ecx * 8u);
        ecx = (uint16_t)ecx << 3u;
        eax = rd8(COW_IMG(0x10382191u) + ecx);
    }
    else
    {
        edx = rd8(COW_IMG(0x10382190u) + (uint16_t)ecx * 8u);
        eax = 0xffffffffu;
    }
    t22 = rd32(sp0 + 4u);
    g->ebx = ebx;
    g->eax = cow_f2bits(loc_8_f);
    g->esp = sp0 - 0x28u;
    t23 = cow_thiscall(g, COW_IMG(0x101f9950u), self, 6, t22, cow_f2bits(loc_10_f), cow_f2bits(loc_8_f), edx, eax, edi);
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        goto L_101f98f1;
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
L_101f98dc: ;
    if ((int32_t)(loc_18 + 1u) < 32)
    {
        eax = loc_18 + 1u;
        ebx = ebx + 0x14u;
        loc_18 = loc_18 + 1u;
        goto L_101f97b7;
    }
    eax = loc_18 + 1u;
L_101f98f1: ;
    if ((int32_t)(loc_14 + 0x280u) < 12800)
    {
        ebx = loc_14 + 0x280u;
        loc_14 = loc_14 + 0x280u;
        goto L_101f97af;
    }
    g->ebx = in_ebx;
    return rd32(sp0 + 4u);
L_101f9813: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t14 = cow_call_regs(g, COW_IMG(0x101cbcb0u), eax, g->ecx, g->edx, 1, 1, edx);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    goto L_101f9839;
L_101f981b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_call_regs(g, COW_IMG(0x101cbcf0u), eax, g->ecx, g->edx, 1, 1, edx);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    goto L_101f9839;
L_101f9823: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t8 = cow_call_regs(g, COW_IMG(0x101cbd30u), eax, g->ecx, g->edx, 1, 1, edx);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_101f9839;
L_101f982b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t5 = cow_call_regs(g, COW_IMG(0x101cbd70u), eax, g->ecx, g->edx, 1, 1, edx);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_101f9839;
L_101f9833: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_call_regs(g, COW_IMG(0x101cbdb0u), eax, g->ecx, g->edx, 1, 1, edx);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    goto L_101f9839;
L_101f9891: ;
    if ((uint8_t)arg4 == 0u) goto L_101f98dc;
    edi = COW_IMG(0x103d3c84u);
    goto L_101f9899;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f97a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f97a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
