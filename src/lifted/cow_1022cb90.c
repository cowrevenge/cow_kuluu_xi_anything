/* f_0x1022cb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022cb90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_8;
    uint32_t loc_c;
    int64_t q5;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1021eb10u), rd32(COW_IMG(0x10667a80u)), 0);
    t1 = g->edx;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edx = t1;
        edi = in_edi;
    }
    else
    {
        edx = t1;
        wr32(sp0 - 0x18u, in_edi);
        t2 = rd32(self + 0x30u);
        wr32(sp0 - 0x1cu, t2);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall(g, COW_IMG(0x1022c730u), self, 1, t2);
        t4 = g->edx;
        q5 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)rd16(COW_IMG(0x106671e0u) + t3 * 2u) + 0x3bu);
        t6 = (uint32_t)((int32_t)(cow_qhi(q5) + (uint32_t)(int16_t)rd16(COW_IMG(0x106671e0u) + t3 * 2u) + 0x3bu) >> 5u);
        t7 = t6 + (t6 >> 0x1fu);
        t8 = rd32(COW_IMG(0x10578474u));
        wr32(t8 + 0x24u, t7);
        if ((uint8_t)arg1 != 1u)
        {
            edx = t7;
        }
        else
        {
            ecx = t6 >> 0x1fu;
            edx = t7;
            edi = t3;
            if (rd8(self + 0xbcu) == 0u)
            {
                if (rd32(self + 0x6cu) == 0u)
                {
                    eax = rd32(self + 0x6cu);
                    wr32(sp0 - 0x1cu, edi);
                    g->esp = sp0 - 0x1cu;
                    t12 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 0);
                    t13 = g->edx;
                    g->edx = t13;
                    g->esp = sp0 - 0x18u;
                    t14 = cow_thiscall(g, COW_IMG(0x1022bf80u), t12, 1, rd32(sp0 - 0x1cu));
                    t15 = g->edx;
                    wr32(sp0 - 0x1cu, 2u);
                    wr32(sp0 - 0x20u, t14);
                    g->edx = t15;
                    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t14, 2u);
                    t16 = g->edx;
                    edx = t16;
                }
                else
                {
                    eax = rd32(self + 0x6cu);
                    if (eax == 1u)
                    {
                        eax = eax - 1u;
                        goto L_1022cc27;
                    }
                    eax = eax - 1u;
                    if (eax != 1u) goto L_1022cc48;
                    eax = eax - 1u;
                    wr32(sp0 - 0x1cu, 2u);
                    wr32(sp0 - 0x20u, 9u);
                    loc_20 = 9u;
L_1022cc08: ;
                    wr32(sp0 - 0x24u, 0xeu);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_20);
                    t10 = g->edx;
                    wr32(sp0 - 0x20u, t9);
                    g->edx = t10;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t9, 2u);
                    t11 = g->edx;
                    wr8(self + 0xbcu, 1u);
                    edx = t11;
                }
            }
L_1022cc48: ;
            if (rd32(self + 0xc0u) != 0u)
            {
                eax = rd32(self + 0xc0u);
                if (rd32(eax + 8u) != 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t17 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
                    t18 = g->edx;
                    if ((uint8_t)t17 == 0u)
                    {
                        edx = t18;
                    }
                    else
                    {
                        edx = t18;
                        wr32(sp0 - 0xcu, 0u);
                        wr32(sp0 - 8u, 0u);
                        if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
                        {
                            loc_c = 0u;
                            loc_8 = 0u;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x104e1d4cu));
                            t19 = rd32(eax + 4u);
                            wr32(sp0 - 0xcu, t19);
                            t20 = rd32(eax + 8u);
                            wr32(sp0 - 8u, t20);
                            edx = t20;
                            loc_c = t19;
                            loc_8 = t20;
                        }
                        wr32(sp0 - 0x1cu, sp0 - 0xcu);
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t21 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(self + 0xc0u) + 8u), 1, sp0 - 0xcu);
                        t22 = g->edx;
                        if ((uint8_t)t21 == 0u)
                        {
                            edx = t22;
                        }
                        else
                        {
                            eax = t21;
                            wr32(sp0 - 0x1cu, 0u);
                            wr32(sp0 - 0x20u, 8u);
                            g->edx = rd32(self);
                            t23 = rd32(self);
                            g->esp = sp0 - 0x18u;
                            cow_thiscall(g, rd32(t23 + 0x18u), self, 2, 8u, 0u);
                            t24 = g->edx;
                            edx = t24;
                        }
                    }
                }
            }
        }
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            edi = rd32(sp0 - 0x18u);
            goto L_1022ccc1;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        edi = rd32(sp0 - 0x18u);
        if (eax == 2u) goto L_1022cd27;
        if (eax == 3u) goto L_1022cd27;
L_1022ccc1: ;
        if ((int32_t)eax >= 2)
        {
            if ((int32_t)eax <= 3)
            {
                if (rd32(self + 8u) != 0u)
                {
                    ecx = rd32(self + 8u);
                    wr32(sp0 - 0x18u, sp0 - 0xcu);
                    g->esp = sp0 - 0x14u;
                    t25 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
                    if (0u)
                    {
                        eax = t25;
                        edx = 0u;
                    }
                    else
                    {
                        wr32(sp0 - 0x18u, 0u);
                        wr32(sp0 - 0x1cu, 1u);
                        wr32(sp0 - 0x20u, 1u);
                        t26 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
                        wr32(sp0 - 0x24u, t26);
                        wr32(sp0 - 0x28u, 0xc6u);
                        t27 = rd32(sp0 - 0xau);
                        wr32(sp0 - 0x2cu, t27);
                        t28 = rd32(sp0 - 0xcu);
                        wr32(sp0 - 0x30u, t28);
                        g->eax = t27;
                        g->edx = t28;
                        g->esp = sp0 - 0x14u;
                        t29 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t28, t27, 0xc6u, t26, 1u, 1u, 0u);
                        t30 = g->edx;
                        eax = t29;
                        edx = t30;
                    }
                }
            }
        }
    }
L_1022cd27: ;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_1022cc27: ;
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 8u);
    loc_20 = 8u;
    goto L_1022cc08;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022cb90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022cb90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
