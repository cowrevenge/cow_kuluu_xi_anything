/* f_0x10183490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10183490(Guest* g)
{
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_a0;
    uint32_t loc_a8;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, self + 0x38e5cu);
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    wr32(sp0 - 0x8cu, self);
    g->esp = sp0 - 0x9cu;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x80u, arg1, self + 0x38e5cu);
    esi = sp0 - 0x80u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa0u, arg2 + 0x70u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = arg2 + 0x70u;
    t1 = cow_call_regs(g, COW_IMG(0x10181bb0u), sp0 - 0x40u, g->ecx, g->edx, 0, 2, sp0 - 0x40u, arg2 + 0x70u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = arg1;
        edi = sp0 - 0x80u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, 0x100u);
        d3 = (double)(float)fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(arg2 + 0xe0u));
        wrf32(sp0 - 0x50u, (float)d3);
        d4 = (double)(float)fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(arg2 + 0xe4u));
        wrf32(sp0 - 0x4cu, (float)d4);
        d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(arg2 + 0xe8u));
        wrf32(sp0 - 0x48u, (float)d5);
        d6 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(arg2 + 0xecu));
        wrf32(sp0 - 0x44u, (float)d6);
        g->eax = eax;
        t7 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x9cu;
        t8 = cow_thiscall(g, COW_IMG(0x1000bd50u), t7, 2, 0x100u, sp0 - 0x80u);
        t9 = g->ecx;
        if (rd8(self + 0x39598u) == 0u)
        {
            ecx = t9;
            wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1065c4d0u)));
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x1065c4d0u)));
        }
        t10 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0xa0u, t10);
        t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa4u, t11);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t11) + 0x130u), t10, 2, t11, t10);
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xdu);
        wr32(sp0 - 0xa8u, 0u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t12);
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0xdu, 1u);
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xeu);
        wr32(sp0 - 0xa8u, 0u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t13);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t14 = rd32(t13);
        t15 = rd32(COW_IMG(0x1045666cu));
        cow_thiscall(g, rd32(t14 + 0xfcu), t14, 4, t13, 0u, 0xeu, 1u);
        t16 = g->ecx;
        t17 = g->edx;
        if (rd32(arg2 + 0x60u) != 0u)
        {
            ecx = t16;
            edx = t17;
            ebp = rd32(arg2 + 0x60u);
            wr32(sp0 - 0x88u, 0u);
            if ((int32_t)rd32(arg2 + 0x44u) <= 0) goto L_1018372c;
            ebx = 0xffffffffu;
            loc_88 = 0u;
L_101835cb: ;
            wr32(sp0 - 0x84u, 0u);
            if ((int32_t)rd32(ebp) > 0)
            {
                esi = rd32(ebp + 4u);
                esi = esi + 0x28u;
                loc_84 = 0u;
L_101835e4: ;
                if (rd32(esi) != 0u)
                {
                    if (rd32(esi - 0x24u) == 0u)
                    {
                        if (ebx != 1u)
                        {
                            wr32(sp0 - 0xa0u, 2u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t24);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 1u, 2u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t25);
                            cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 2u, 1u);
                            ebx = 1u;
                        }
                        wr32(sp0 - 0xa0u, 0u);
                        wr32(sp0 - 0xa4u, 0u);
                        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xa8u, t26);
                        eax = t26;
                        ecx = rd32(t26);
                        edx = rd32(COW_IMG(0x1045666cu));
                        loc_a0 = 0u;
                        loc_a8 = t26;
                    }
                    else
                    {
                        if (ebx != 0u)
                        {
                            wr32(sp0 - 0xa0u, 5u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t18);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 0u, 1u, 5u);
                            wr32(sp0 - 0xa0u, 2u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t19);
                            cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 0u, 2u, 2u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 3u);
                            wr32(sp0 - 0xa8u, 0u);
                            t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t20);
                            cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 3u, 1u);
                            ebx = 0u;
                        }
                        if (rd32(rd32(esi - 0x24u) + 0x40u) == 0u)
                        {
                            eax = rd32(esi - 0x24u);
                            t22 = rd32(eax + 0x44u);
                            wr32(sp0 - 0xa0u, t22);
                            wr32(sp0 - 0xa4u, 0u);
                            t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t23);
                            eax = t22;
                            ecx = rd32(t23);
                            edx = t23;
                            loc_a0 = t22;
                            loc_a8 = t23;
                        }
                        else
                        {
                            ecx = rd32(rd32(esi - 0x24u) + 0x40u);
                            wr32(sp0 - 0xa0u, ecx);
                            wr32(sp0 - 0xa4u, 0u);
                            t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t21);
                            eax = ecx;
                            edx = t21;
                            loc_a0 = ecx;
                            ecx = rd32(t21);
                            loc_a8 = t21;
                        }
                    }
                    g->esp = sp0 - 0xa8u;
                    cow_thiscall(g, rd32(ecx + 0xf4u), ecx, 0);
                    t27 = rd32(arg2 + 0x24u);
                    wr32(sp0 - 0xacu, t27);
                    wr32(sp0 - 0xb0u, rd32(esi));
                    wr32(sp0 - 0xb4u, 0u);
                    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xb8u, t28);
                    g->edx = rd32(esi);
                    t29 = rd32(esi);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 7, t28, 0u, t29, t27, rd32(sp0 - 0xa8u), 0u, rd32(sp0 - 0xa0u));
                    t30 = g->edx;
                    t31 = rd32(esi - 0x10u);
                    wr32(sp0 - 0xa0u, t31);
                    wr32(sp0 - 0xa4u, 0u);
                    t32 = rd32(arg2 + 0x2cu);
                    wr32(sp0 - 0xa8u, t32);
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t32, 0u, t31);
                    t33 = rd32(esi - 0x10u);
                    wr32(rd32(sp0 - 0x8cu) + 0x38d48u, t33 + rd32(rd32(sp0 - 0x8cu) + 0x38d48u));
                    edx = t33;
                }
                wr32(sp0 - 0x84u, loc_84 + 1u);
                if ((int32_t)(loc_84 + 1u) < (int32_t)rd32(ebp))
                {
                    esi = esi + 0xc0u;
                    loc_84 = loc_84 + 1u;
                    goto L_101835e4;
                }
            }
            wr32(sp0 - 0x88u, loc_88 + 1u);
            if ((int32_t)(loc_88 + 1u) < (int32_t)rd32(arg2 + 0x44u))
            {
                ebp = ebp + 0x24u;
                loc_88 = loc_88 + 1u;
                goto L_101835cb;
            }
            ecx = rd32(arg2 + 0x44u);
L_1018372c: ;
            if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
            {
                eax = rd32(sp0 - 0x8cu);
                wr32(sp0 - 0xa0u, rd32(COW_IMG(0x10621c00u)));
                g->esp = sp0 - 0x9cu;
                cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10183490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
