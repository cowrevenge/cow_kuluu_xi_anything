/* f_0x1013cc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013cc50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(rd32(self + 0x1cu) + 0x14bcu) == 0u)
    {
        ecx = rd32(self + 0x1cu);
        wr32(sp0 - 8u, 0u);
        loc_8 = 0u;
    }
    else
    {
        eax = rd32(rd32(self + 0x1cu) + 0x14bcu);
        ecx = rd32(self + 0x1cu);
        wr16(sp0 - 8u, rd16(eax));
    }
    wr32(sp0 - 0x20u, sp0 - 9u);
    t1 = rd32(self + 0x348u);
    wr32(sp0 - 0x24u, t1);
    t2 = rd16(rd32(ecx + 0x14b4u));
    wr32(sp0 - 0x28u, t2);
    t3 = (t1 & 0xffff0000u) | rd16(self + 0x24u);
    wr32(sp0 - 0x2cu, t3);
    g->eax = t3;
    g->edx = t2;
    t4 = rd32(sp0 + 4u);
    t5 = rd16(rd32(self + 0x368u) + 0x20u);
    t6 = rd16(rd32(self + 0x368u) + 0x22u);
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x101cb8a0u), 4, t3, t2, t1, sp0 - 9u);
    t8 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t7);
    if ((uint8_t)t7 == 0u)
    {
        ebx = t4 + ((in_ebx & 0xffff0000u) | (uint16_t)(t5 - t6));
        edi = t4;
        goto L_1013ccc9;
    }
    edx = t8;
    ebx = t4 + ((in_ebx & 0xffff0000u) | (uint16_t)(t5 - t6));
    edi = t4;
    if ((rd8(sp0 - 9u) & 0x10u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 9u);
        goto L_1013ccfd;
    }
    edx = (edx & 0xffffff00u) | rd8(sp0 - 9u);
    wr8(sp0 + 4u, 0u);
L_1013cd1c: ;
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_1013cd35;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_1013cd91;
    if (eax == 3u) goto L_1013cd91;
L_1013cd35: ;
    if ((int32_t)eax < 2) goto L_1013cd91;
    wr32(sp0 - 4u, 0xfffffffeu);
    if (rd8(sp0 + 4u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
        ecx = 1u;
    }
    if ((int8_t)(loc_8 >> 8u) < 0)
    {
        ecx = ecx + 1u;
    }
    if ((loc_8 >> 8u & 0x40u) != 0u) goto L_1013cd70;
    eax = loc_8;
    if (rd8(sp0 + 4u) == 0u) goto L_1013cd71;
    if ((edx & 3u) == 0u) goto L_1013cd71;
L_1013cd70: ;
    ecx = ecx + 1u;
L_1013cd71: ;
    if (rd32(self + 0x340u) == 3u)
    {
        ecx = ecx + 1u;
    }
    eax = (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx) - (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx)) >> 0x1fu)) >> 1u);
    edi = edi + (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx) - (uint32_t)((int32_t)(-(ecx * 8u - ecx) - (ecx * 8u - ecx)) >> 0x1fu)) >> 1u);
    loc_4 = 0xfffffffeu;
L_1013cd99: ;
    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t17 = rd32(self + 0x364u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t17, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t18 = g->ecx;
        ecx = rd32(sp0 - 4u) + ((t18 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x364u) + 0x22u) - rd16(rd32(self + 0x364u) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t18 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x364u) + 0x22u) - rd16(rd32(self + 0x364u) + 0x20u)));
    }
    if ((int8_t)(loc_8 >> 8u) >= 0)
    {
        eax = loc_8;
    }
    else
    {
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t19 = rd32(self + 0x358u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t19, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t20 = g->ecx;
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 4u) + ((t20 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x358u) + 0x22u) - rd16(rd32(self + 0x358u) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t20 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x358u) + 0x22u) - rd16(rd32(self + 0x358u) + 0x20u)));
    }
    if ((eax >> 8u & 0x40u) != 0u)
    {
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
        t21 = rd32(self + 0x35cu);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t21, 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t22 = g->ecx;
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 4u) + ((t22 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x35cu) + 0x22u) - rd16(rd32(self + 0x35cu) + 0x20u)));
        edi = edi + rd32(sp0 - 4u) + ((t22 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 0x35cu) + 0x22u) - rd16(rd32(self + 0x35cu) + 0x20u)));
    }
    if (rd32(self + 0x340u) != 3u) goto L_1013ce80;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
    wr32(sp0 - 0x30u, (uint32_t)(int16_t)edi);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x360u), 5, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1013ccc9: ;
    wr32(sp0 - 0x20u, sp0 - 9u);
    t9 = rd32(self + 0x348u);
    wr32(sp0 - 0x24u, t9);
    t10 = rd16(rd32(rd32(self + 0x1cu) + 0x14b4u));
    wr32(sp0 - 0x28u, t10);
    t11 = (rd32(self + 0x1cu) & 0xffff0000u) | rd16(self + 0x24u);
    wr32(sp0 - 0x2cu, t11);
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 0x1cu;
    t12 = cow_cdecl(g, COW_IMG(0x101cb990u), 4, t11, t10, t9, sp0 - 9u);
    t13 = g->edx;
    t14 = rd8(sp0 - 9u);
    wr8(sp0 + 4u, (uint8_t)t12);
    if ((uint8_t)t12 == 0u)
    {
        edx = (t13 & 0xffffff00u) | t14;
        goto L_1013cd1c;
    }
    edx = (t13 & 0xffffff00u) | t14;
L_1013ccfd: ;
    if (edx & 1u)
    {
        t15 = (rd32(sp0 - 8u) & 0xffffff00u) | (uint8_t)(rd32(sp0 - 8u) | 0x40u);
        wr32(sp0 - 8u, t15);
        loc_8 = t15;
    }
    if ((edx & 2u) != 0u)
    {
        t16 = (loc_8 & 0xffff00ffu) | (uint8_t)(loc_8 >> 8u | 0x40u) << 8u;
        wr32(sp0 - 8u, t16);
        loc_8 = t16;
    }
    goto L_1013cd1c;
L_1013cd91: ;
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
    goto L_1013cd99;
L_1013ce80: ;
    if ((eax & 0x10u) != 0u)
    {
        if ((eax >> 8u & 8u) == 0u) goto L_1013ce95;
        if (rd8(sp0 + 4u) == 0u) goto L_1013ce95;
        if (!(eax & 1u)) goto L_1013ceb1;
L_1013ce95: ;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)ebx);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x368u), 5, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    }
L_1013ceb1: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013cc50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
