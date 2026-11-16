/* f_0x102df400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102df400(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281f3u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102df40au));
    wr32(sp0 - 0x44u, in_ebx);
    if (rd8(self + 8u) == 2u)
    {
        loc_10 = t1;
        wr32(sp0 - 0x48u, in_esi);
        wr32(sp0 - 0x4cu, in_edi);
        t2 = rd32(rd32(self) + 0x1058u);
        wr32(sp0 - 0x50u, t2 << 4u);
        g->esp = sp0 - 0x44u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, t2 << 4u, in_edi, in_esi);
        t4 = g->edx;
        wr32(sp0 - 0x34u, t3);
        wr32(sp0 - 8u, 0u);
        if (t3 == 0u)
        {
            ecx = rd32(sp0 - 0x50u);
            edx = t4;
            wr32(sp0 - 0x14u, 0u);
            loc_14 = 0u;
        }
        else
        {
            eax = t3;
            ecx = rd32(sp0 - 0x50u);
            edx = t4;
            edi = t2;
            loc_34 = t3;
            wr32(sp0 - 0x50u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0x54u, edi);
            wr32(sp0 - 0x58u, 0x10u);
            wr32(sp0 - 0x5cu, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x4cu;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
            t5 = g->ecx;
            t6 = g->edx;
            t7 = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x14u, t7);
            ecx = t5;
            edx = t6;
            loc_14 = t7;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        if (loc_14 != 0u)
        {
            t8 = rd32(rd32(self + 4u) + 0x1058u);
            wr32(sp0 - 0x50u, t8 << 4u);
            g->esp = sp0 - 0x44u;
            t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t8 << 4u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
            t10 = g->edx;
            wr32(sp0 - 0x34u, t9);
            wr32(sp0 - 8u, 1u);
            if (t9 == 0u)
            {
                eax = t9;
                ecx = rd32(sp0 - 0x50u);
                edx = t10;
                wr32(sp0 - 0x18u, 0u);
                loc_18 = 0u;
            }
            else
            {
                eax = t9;
                ecx = rd32(sp0 - 0x50u);
                edx = t10;
                edi = t8;
                loc_34 = t9;
                wr32(sp0 - 0x50u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0x54u, edi);
                wr32(sp0 - 0x58u, 0x10u);
                wr32(sp0 - 0x5cu, eax);
                g->ecx = ecx;
                g->esp = sp0 - 0x4cu;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
                t11 = g->ecx;
                t12 = g->edx;
                t13 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x18u, t13);
                eax = t13;
                ecx = t11;
                edx = t12;
                loc_18 = t13;
            }
            wr32(sp0 - 8u, 0xffffffffu);
            if (loc_18 != 0u)
            {
                t16 = cow_divu(g, rd32(rd32(self) + 0x1058u) << 0x10u, rd32(rd32(self + 4u) + 0x1058u));
                t17 = cow_modu(g, rd32(rd32(self) + 0x1058u) << 0x10u, rd32(rd32(self + 4u) + 0x1058u));
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x38u, t16);
                t18 = cow_divu(g, rd32(rd32(self) + 0x105cu) << 0x10u, rd32(rd32(self + 4u) + 0x105cu));
                t19 = cow_modu(g, rd32(rd32(self) + 0x105cu) << 0x10u, rd32(rd32(self + 4u) + 0x105cu));
                wr32(sp0 - 0x3cu, t18);
                t20 = cow_divu(g, rd32(rd32(self) + 0x1060u) << 0x10u, rd32(rd32(self + 4u) + 0x1060u));
                t21 = cow_modu(g, rd32(rd32(self) + 0x1060u) << 0x10u, rd32(rd32(self + 4u) + 0x1060u));
                wr32(sp0 - 0x40u, t20);
                if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
                {
                    eax = t20;
                    ecx = rd32(self);
                    edx = t21;
                    goto L_102df5e1;
                }
                edx = t21;
                edi = rd32(rd32(self + 4u) + 0x105cu);
                loc_2c = 0u;
                loc_20 = 0u;
                loc_38 = t16;
                loc_3c = t18;
                loc_40 = t20;
L_102df51a: ;
                wr32(sp0 - 0x30u, 0xffffffffu);
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x1cu, 0u);
                if (edi == 0u) goto L_102df5c6;
                esi = 0u;
                loc_34 = 0u;
                loc_1c = 0u;
L_102df52e: ;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                if ((~esi & 0xffff0000u) == 0u)
                {
                    loc_30 = 0xffffffffu;
                }
                else
                {
                    t22 = rd32(sp0 - 0x14u);
                    wr32(sp0 - 0x50u, t22);
                    wr32(sp0 - 0x54u, loc_2c >> 0x10u);
                    wr32(sp0 - 0x58u, esi >> 0x10u);
                    g->edx = esi >> 0x10u;
                    g->esp = sp0 - 0x4cu;
                    cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, esi >> 0x10u, loc_2c >> 0x10u, t22);
                    t23 = g->edx;
                    wr32(sp0 - 0x30u, esi);
                    edx = t23;
                    loc_30 = esi;
                }
                if (rd32(rd32(self + 4u) + 0x1058u) == 0u)
                {
                    loc_24 = 0u;
                    loc_28 = 0u;
                }
                else
                {
                    eax = loc_18;
                    loc_24 = 0u;
                    loc_28 = 0u;
L_102df56b: ;
                    wr32(sp0 - 0x24u, loc_24 + loc_38);
                    wr32(sp0 - 0x28u, loc_28 + 1u);
                    t24 = rd32(sp0 - 0x14u);
                    esi = (loc_24 >> 0x10u) * 0x10u + t24;
                    edi = eax;
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    if (loc_28 + 1u < rd32(rd32(self + 4u) + 0x1058u))
                    {
                        eax = eax + 0x10u;
                        loc_24 = loc_24 + loc_38;
                        loc_28 = loc_28 + 1u;
                        goto L_102df56b;
                    }
                    edx = loc_28 + 1u;
                    loc_24 = loc_24 + loc_38;
                    loc_28 = loc_28 + 1u;
                }
                wr32(sp0 - 0x50u, loc_18);
                wr32(sp0 - 0x54u, loc_20);
                wr32(sp0 - 0x58u, loc_1c);
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, loc_1c, loc_20, loc_18);
                t25 = g->edx;
                t26 = rd32(sp0 - 0x1cu) + 1u;
                wr32(sp0 - 0x1cu, t26);
                t27 = rd32(sp0 - 0x34u) + rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x34u, t27);
                if (t26 < rd32(rd32(self + 4u) + 0x105cu))
                {
                    edx = t25;
                    esi = t27;
                    loc_34 = t27;
                    loc_1c = t26;
                    goto L_102df52e;
                }
                edx = t25;
                edi = rd32(rd32(self + 4u) + 0x105cu);
L_102df5c6: ;
                wr32(sp0 - 0x2cu, loc_2c + loc_40);
                wr32(sp0 - 0x20u, loc_20 + 1u);
                if (loc_20 + 1u < rd32(rd32(self + 4u) + 0x1060u))
                {
                    loc_2c = loc_2c + loc_40;
                    loc_20 = loc_20 + 1u;
                    loc_30 = 0xffffffffu;
                    goto L_102df51a;
                }
                eax = rd32(self + 4u);
                ecx = loc_20 + 1u;
L_102df5e1: ;
                t28 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x50u, t28);
                g->eax = eax;
                g->esp = sp0 - 0x4cu;
                t29 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t28);
                t30 = g->ecx;
                t31 = g->edx;
                t32 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x54u, t32);
                g->esp = sp0 - 0x50u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t30, t31, 1, 1, t32);
                t33 = g->edx;
                eax = 0u;
                edx = t33;
            }
            else
            {
                t14 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x50u, t14);
                g->esp = sp0 - 0x4cu;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t14);
                t15 = g->edx;
                eax = 0x8007000eu;
                edx = t15;
            }
        }
        else
        {
            eax = 0x8007000eu;
        }
        esi = rd32(sp0 - 0x48u);
        edi = rd32(sp0 - 0x4cu);
    }
    else
    {
        loc_10 = t1;
        eax = 0x80004005u;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
    }
    wr32(g->fs_base, loc_10);
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102df400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102df400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
