/* f_0x10183760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10183760(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_a0;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 200u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x8cu, self);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, self + 0x38e5cu);
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x9cu;
    t1 = cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x80u, arg1, self + 0x38e5cu);
    esi = sp0 - 0x80u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa0u, arg2 + 0x70u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    t2 = cow_call_regs(g, COW_IMG(0x10182070u), t1, g->ecx, g->edx, 0, 2, sp0 - 0x40u, arg2 + 0x70u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        esi = arg1;
        edi = sp0 - 0x80u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d4 = (double)(float)fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(arg2 + 0xe0u));
        wrf32(sp0 - 0x50u, (float)d4);
        d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(arg2 + 0xe4u));
        wrf32(sp0 - 0x4cu, (float)d5);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, 0x100u);
        d6 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(arg2 + 0xe8u));
        wrf32(sp0 - 0x48u, (float)d6);
        d7 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(arg2 + 0xecu));
        wrf32(sp0 - 0x44u, (float)d7);
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        t8 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
        if (rd8(self + 0x39598u) == 0u)
        {
            eax = (t8 & 0xffffff00u) | rd8(self + 0x39598u);
            wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1065c4d0u)));
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x1065c4d0u)));
        }
        t9 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0xa0u, t9);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa4u, t10);
        g->edx = t9;
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t10) + 0x130u), rd32(t10), 2, t10, t9);
        t11 = g->edx;
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
        cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 0xeu, 1u);
        if (rd32(arg2 + 0x60u) != 0u)
        {
            ebx = rd32(arg2 + 0x60u);
            wr32(sp0 - 0x88u, 0u);
            if ((int32_t)rd32(arg2 + 0x44u) <= 0) goto L_10183c7a;
            edi = 0xffffffffu;
            loc_88 = 0u;
L_10183893: ;
            wr32(sp0 - 0x84u, 0u);
            if ((int32_t)rd32(ebx) > 0)
            {
                eax = rd32(ebx + 4u);
                esi = eax + 0x28u;
                loc_84 = 0u;
L_101838ab: ;
                if (rd32(esi) != 0u)
                {
                    if (rd32(esi - 0x24u) == 0u)
                    {
                        if (edi != 1u)
                        {
                            wr32(sp0 - 0xa0u, 5u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t39);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t39) + 0xfcu), rd32(t39), 4, t39, 0u, 1u, 5u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t40);
                            cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 4, t40, 0u, 2u, 1u);
                            wr32(sp0 - 0xa0u, 3u);
                            wr32(sp0 - 0xa4u, 3u);
                            wr32(sp0 - 0xa8u, 0u);
                            t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t41);
                            cow_thiscall(g, rd32(rd32(t41) + 0xfcu), rd32(t41), 4, t41, 0u, 3u, 3u);
                            wr32(sp0 - 0xa0u, 6u);
                            wr32(sp0 - 0xa4u, 4u);
                            wr32(sp0 - 0xa8u, 0u);
                            t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t42);
                            cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 4, t42, 0u, 4u, 6u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 5u);
                            wr32(sp0 - 0xa8u, 0u);
                            t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t43);
                            cow_thiscall(g, rd32(rd32(t43) + 0xfcu), rd32(t43), 4, t43, 0u, 5u, 1u);
                            wr32(sp0 - 0xa0u, 3u);
                            wr32(sp0 - 0xa4u, 6u);
                            wr32(sp0 - 0xa8u, 0u);
                            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t44);
                            cow_thiscall(g, rd32(rd32(t44) + 0xfcu), rd32(t44), 4, t44, 0u, 6u, 3u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 1u);
                            t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t45);
                            cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 4, t45, 1u, 1u, 1u);
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 4u);
                            wr32(sp0 - 0xa8u, 1u);
                            t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t46);
                            cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 4, t46, 1u, 4u, 1u);
                            edi = 1u;
                        }
                        wr32(sp0 - 0xa0u, 0u);
                        wr32(sp0 - 0xa4u, 0u);
                        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xa8u, t47);
                        eax = t47;
                        ecx = rd32(t47);
                        edx = rd32(COW_IMG(0x1045666cu));
                        loc_a0 = 0u;
                        loc_a8 = t47;
                    }
                    else
                    {
                        if (edi != 0u)
                        {
                            wr32(sp0 - 0xa0u, 4u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t14);
                            if (arg3 != 0u)
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                                wr32(sp0 - 0xb0u, 2u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 0u);
                                t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t25);
                                cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 2u, 2u);
                                wr32(sp0 - 0xb0u, 1u);
                                wr32(sp0 - 0xb4u, 3u);
                                wr32(sp0 - 0xb8u, 0u);
                                t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t26);
                                cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 3u, 1u);
                                wr32(sp0 - 0xb0u, 6u);
                                wr32(sp0 - 0xb4u, 1u);
                                wr32(sp0 - 0xb8u, 1u);
                                t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t27);
                                cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 1u, 1u, 6u);
                                wr32(sp0 - 0xb0u, 1u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 1u);
                                t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t28);
                                cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 1u, 2u, 1u);
                                wr32(sp0 - 0xb0u, 3u);
                                wr32(sp0 - 0xb4u, 3u);
                                wr32(sp0 - 0xb8u, 1u);
                                t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t29);
                                cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 1u, 3u, 3u);
                                wr32(sp0 - 0xb0u, 6u);
                                wr32(sp0 - 0xb4u, 4u);
                                wr32(sp0 - 0xb8u, 0u);
                                t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t30);
                                cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 4, t30, 0u, 4u, 6u);
                                wr32(sp0 - 0xb0u, 0u);
                                wr32(sp0 - 0xb4u, 5u);
                                wr32(sp0 - 0xb8u, 0u);
                                t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t31);
                                cow_thiscall(g, rd32(rd32(t31) + 0xfcu), rd32(t31), 4, t31, 0u, 5u, 0u);
                                wr32(sp0 - 0xb0u, 3u);
                                wr32(sp0 - 0xb4u, 6u);
                                wr32(sp0 - 0xb8u, 0u);
                                t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t32);
                                cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 4, t32, 0u, 6u, 3u);
                                wr32(sp0 - 0xb0u, 1u);
                                wr32(sp0 - 0xb4u, 4u);
                                loc_b4 = 4u;
                                loc_b0 = 1u;
                            }
                            else
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                                wr32(sp0 - 0xb0u, 2u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 0u);
                                t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t15);
                                cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 2u, 2u);
                                wr32(sp0 - 0xb0u, 3u);
                                wr32(sp0 - 0xb4u, 3u);
                                wr32(sp0 - 0xb8u, 0u);
                                t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t16);
                                cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 0u, 3u, 3u);
                                wr32(sp0 - 0xb0u, 6u);
                                wr32(sp0 - 0xb4u, 1u);
                                wr32(sp0 - 0xb8u, 1u);
                                t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t17);
                                cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 1u, 1u, 6u);
                                wr32(sp0 - 0xb0u, 1u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 1u);
                                t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t18);
                                cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 1u, 2u, 1u);
                                wr32(sp0 - 0xb0u, 0u);
                                wr32(sp0 - 0xb4u, 3u);
                                wr32(sp0 - 0xb8u, 1u);
                                t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t19);
                                cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 1u, 3u, 0u);
                                wr32(sp0 - 0xb0u, 5u);
                                wr32(sp0 - 0xb4u, 4u);
                                wr32(sp0 - 0xb8u, 0u);
                                t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t20);
                                cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 4u, 5u);
                                wr32(sp0 - 0xb0u, 2u);
                                wr32(sp0 - 0xb4u, 5u);
                                wr32(sp0 - 0xb8u, 0u);
                                t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t21);
                                cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 5u, 2u);
                                wr32(sp0 - 0xb0u, 3u);
                                wr32(sp0 - 0xb4u, 6u);
                                wr32(sp0 - 0xb8u, 0u);
                                t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t22);
                                cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 4, t22, 0u, 6u, 3u);
                                wr32(sp0 - 0xb0u, 6u);
                                wr32(sp0 - 0xb4u, 4u);
                                wr32(sp0 - 0xb8u, 1u);
                                t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t23);
                                cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 1u, 4u, 6u);
                                wr32(sp0 - 0xb0u, 1u);
                                wr32(sp0 - 0xb4u, 5u);
                                wr32(sp0 - 0xb8u, 1u);
                                t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t24);
                                cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 1u, 5u, 1u);
                                wr32(sp0 - 0xb0u, 0u);
                                wr32(sp0 - 0xb4u, 6u);
                                loc_b4 = 6u;
                                loc_b0 = 0u;
                            }
                            wr32(sp0 - 0xb8u, 1u);
                            t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xbcu, t33);
                            g->esp = sp0 - 0xb4u;
                            cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 2, t33, 1u);
                            wr32(sp0 - 0xb8u, 1u);
                            wr32(sp0 - 0xbcu, 1u);
                            wr32(sp0 - 0xc0u, 2u);
                            t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xc4u, t34);
                            cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 2u, 1u, 1u);
                            wr32(sp0 - 0xb8u, 1u);
                            wr32(sp0 - 0xbcu, 4u);
                            wr32(sp0 - 0xc0u, 2u);
                            t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xc4u, t35);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 10, t35, 2u, 4u, 1u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                            edi = 0u;
                        }
                        if (rd32(rd32(esi - 0x24u) + 0x40u) == 0u)
                        {
                            eax = rd32(esi - 0x24u);
                            t37 = rd32(eax + 0x44u);
                            wr32(sp0 - 0xa0u, t37);
                            wr32(sp0 - 0xa4u, 0u);
                            t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t38);
                            eax = t37;
                            ecx = rd32(t38);
                            edx = t38;
                            loc_a0 = t37;
                            loc_a8 = t38;
                        }
                        else
                        {
                            ecx = rd32(rd32(esi - 0x24u) + 0x40u);
                            wr32(sp0 - 0xa0u, ecx);
                            wr32(sp0 - 0xa4u, 0u);
                            t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t36);
                            eax = ecx;
                            edx = t36;
                            loc_a0 = ecx;
                            ecx = rd32(t36);
                            loc_a8 = t36;
                        }
                    }
                    g->esp = sp0 - 0xa8u;
                    cow_thiscall(g, rd32(ecx + 0xf4u), ecx, 0);
                    t48 = rd32(esi - 0x10u) + rd32(rd32(sp0 - 0x98u) + 0x38d48u);
                    wr32(rd32(sp0 - 0x98u) + 0x38d48u, t48);
                    t49 = rd32(arg2 + 0x24u);
                    wr32(sp0 - 0xacu, t49);
                    wr32(sp0 - 0xb0u, rd32(esi));
                    wr32(sp0 - 0xb4u, 0u);
                    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xb8u, t50);
                    g->edx = rd32(esi);
                    t51 = rd32(esi);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 7, t50, 0u, t51, t49, rd32(sp0 - 0xa8u), 0u, rd32(sp0 - 0xa0u));
                    t52 = g->edx;
                    t53 = rd32(esi - 0x10u);
                    wr32(sp0 - 0xa0u, t53);
                    wr32(sp0 - 0xa4u, 0u);
                    t54 = rd32(arg2 + 0x2cu);
                    wr32(sp0 - 0xa8u, t54);
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t54, 0u, t53);
                }
                wr32(sp0 - 0x84u, loc_84 + 1u);
                if ((int32_t)(loc_84 + 1u) < (int32_t)rd32(ebx))
                {
                    esi = esi + 0xc0u;
                    loc_84 = loc_84 + 1u;
                    goto L_101838ab;
                }
            }
            wr32(sp0 - 0x88u, loc_88 + 1u);
            if ((int32_t)(loc_88 + 1u) < (int32_t)rd32(arg2 + 0x44u))
            {
                ebx = ebx + 0x24u;
                loc_88 = loc_88 + 1u;
                goto L_10183893;
            }
            if (edi == 0u) goto L_10183cda;
L_10183c7a: ;
            wr32(sp0 - 0xa0u, 5u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, 0u);
            t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t55);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 0u, 1u, 5u);
            wr32(sp0 - 0xa0u, 2u);
            wr32(sp0 - 0xa4u, 2u);
            wr32(sp0 - 0xa8u, 0u);
            t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t56);
            cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 0u, 2u, 2u);
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 3u);
            wr32(sp0 - 0xa8u, 0u);
            t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t57);
            cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 3u, 1u);
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, 1u);
            t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t58);
            cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 1u, 1u, 1u);
L_10183cda: ;
            wr32(sp0 - 0xa0u, 6u);
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 0u);
            t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t59);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 0u, 4u, 6u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, 5u);
            wr32(sp0 - 0xa8u, 0u);
            t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t60);
            cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 4, t60, 0u, 5u, 0u);
            wr32(sp0 - 0xa0u, 2u);
            wr32(sp0 - 0xa4u, 6u);
            wr32(sp0 - 0xa8u, 0u);
            t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t61);
            cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 4, t61, 0u, 6u, 2u);
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 1u);
            t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t62);
            g->eax = t62;
            t63 = rd32(t62);
            t64 = cow_thiscall(g, rd32(t63 + 0xfcu), t63, 4, t62, 1u, 4u, 1u);
            t65 = g->ecx;
            if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
            {
                ecx = t65;
                edx = rd32(sp0 - 0x8cu);
                wr32(sp0 - 0xa0u, rd32(COW_IMG(0x10621c00u)));
                g->esp = sp0 - 0x9cu;
                cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10183760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
