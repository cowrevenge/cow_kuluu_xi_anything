/* f_0x10228440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10228440(Guest* g)
{
    double d43;
    double d47;
    double d48;
    double d52;
    double d62;
    double d66;
    double d87;
    double d89;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    double loc_28_f;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t88;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(sp0 - 0x40u, 0xc2u);
    wr32(sp0 - 0x1cu, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x40u, 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t4 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        if (rd8(self + 5u) == ((uint8_t)t4 == 0u))
        {
            eax = (t4 & 0xffffff00u) | (uint8_t)t4 == 0u;
            edx = t6;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = (t4 & 0xffffff00u) | (uint8_t)t4 == 0u;
            edx = t6;
            wr8(self + 5u, (uint8_t)eax);
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        wr32(sp0 - 0x28u, 0u);
        if ((uint8_t)ebx != 0u)
        {
            g->esp = sp0 - 0x3cu;
            cow_fastcall(g, COW_IMG(0x10228910u), self, edx, 0);
            t25 = g->ecx;
            t26 = g->edx;
            ecx = t25;
            edx = t26;
            loc_28 = 0u;
        }
        else
        {
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0xcu, 0u);
            if (rd32(COW_IMG(0x10578478u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10578478u));
                loc_28 = 0u;
                loc_10 = 0u;
                loc_c = 0u;
                goto L_102284e8;
            }
            eax = rd32(COW_IMG(0x10578478u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t7 = cow_thiscall(g, COW_IMG(0x10159370u), rd32(COW_IMG(0x1057876cu)), 0);
            t8 = g->edx;
            wr32(sp0 - 0x10u, rd32(t7));
            t9 = rd32(t7 + 4u);
            wr32(sp0 - 0xcu, t9);
            if (rd32(t7 + 4u) != 0u)
            {
                edx = t8;
                loc_10 = rd32(t7);
                loc_c = t9;
                goto L_102284be;
            }
            eax = t9;
            ecx = rd32(t7);
            edx = t8;
            loc_10 = rd32(t7);
            loc_c = t9;
            if (ecx == 0u) goto L_10228526;
L_102284be: ;
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x1057876cu));
            g->edx = edx;
            t10 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t11 = cow_call_regs(g, COW_IMG(0x101593c0u), sp0 - 0x10u, g->ecx, g->edx, 0, 1, sp0 - 0x10u);
            t12 = g->ecx;
            t13 = g->edx;
            if ((uint8_t)t11 == 0u)
            {
                eax = t11;
                edx = t13;
                goto L_10228526;
            }
            ecx = t12;
            edx = t13;
            wr32(sp0 - 0x28u, 1u);
            if (rd32(sp0 - 0xcu) != 0u)
            {
                eax = rd32(sp0 - 0xcu);
                loc_28 = 1u;
                loc_10 = rd32(sp0 - 0x10u);
                goto L_1022853c;
            }
            eax = rd32(sp0 - 0xcu);
            if (rd32(sp0 - 0x10u) != 0u)
            {
                loc_28 = 1u;
                loc_10 = rd32(sp0 - 0x10u);
                goto L_1022853c;
            }
            loc_28 = 1u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
L_102284e8: ;
            g->edx = edx;
            t14 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t15 = cow_call_regs(g, COW_IMG(0x10157cb0u), eax, t14, g->edx, 1, 0);
            t16 = g->ecx;
            t17 = g->edx;
            if (t15 == 0u)
            {
                ecx = t16;
                edx = t17;
                loc_28 = rd32(sp0 - 0x28u);
                goto L_10228538;
            }
            eax = t15;
            edx = t17;
            wr32(sp0 - 0x10u, rd32(eax));
            t18 = rd32(eax + 4u);
            wr32(sp0 - 0xcu, t18);
            if (rd32(eax + 4u) != 0u)
            {
                loc_10 = rd32(eax);
                eax = t18;
                loc_c = t18;
                goto L_1022850c;
            }
            ecx = rd32(eax);
            loc_10 = rd32(eax);
            eax = t18;
            loc_c = t18;
            if (ecx == 0u) goto L_10228530;
L_1022850c: ;
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x1057876cu));
            g->edx = edx;
            t19 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t20 = cow_call_regs(g, COW_IMG(0x101593c0u), eax, g->ecx, g->edx, 0, 1, sp0 - 0x10u);
            t21 = g->ecx;
            t22 = g->edx;
            if ((uint8_t)t20 == 0u)
            {
                ecx = t21;
                edx = t22;
                goto L_10228530;
            }
            ecx = t21;
            edx = t22;
            wr32(sp0 - 0x28u, 0u);
            loc_28 = 0u;
L_10228538: ;
            eax = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
L_1022853c: ;
            if (rd32(self + 0x22cu) != eax)
            {
                wr32(self + 0x228u, loc_10);
                wr32(self + 0x22cu, eax);
                g->esp = sp0 - 0x3cu;
                cow_fastcall(g, COW_IMG(0x102288e0u), self, loc_10, 0);
                t23 = g->ecx;
                t24 = g->edx;
                ecx = t23;
                edx = t24;
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
        t27 = rd8(self + 0x230u);
        wr32(sp0 - 0x10u, t27);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        t28 = rd32(self + 0x22cu);
        wr8(sp0 - 0x29u, 0u);
        if (t28 != 0u)
        {
            eax = t28;
            loc_10 = t27;
            goto L_1022858a;
        }
        eax = t28;
        loc_10 = t27;
        if (rd32(self + 0x228u) == 0u)
        {
            esi = 0u;
            loc_24 = 0u;
            loc_20 = 0u;
            goto L_102285d1;
        }
L_1022858a: ;
        if (rd32(COW_IMG(0x106643a8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            esi = 0u;
            loc_24 = 0u;
            loc_20 = 0u;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            wr32(sp0 - 0x40u, eax);
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t29 = cow_stdcall(g, COW_IMG(0x10203540u), 1, eax);
            t30 = g->edx;
            if ((int32_t)t29 < 0)
            {
                eax = t29;
                edx = t30;
            }
            else
            {
                eax = t29;
                edx = t30;
                esi = t29;
                wr32(sp0 - 0x40u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t31 = cow_stdcall(g, COW_IMG(0x10202c90u), 1, esi);
                t32 = g->edx;
                wr32(sp0 - 0x40u, esi);
                wr32(sp0 - 0x20u, t31);
                g->edx = t32;
                t33 = cow_stdcall(g, COW_IMG(0x10202cc0u), 1, esi);
                t34 = g->edx;
                wr8(sp0 - 0x29u, (uint8_t)t33);
                eax = t33;
                edx = t34;
            }
            t35 = rd32(self + 0x22cu);
            wr32(sp0 - 0x40u, t35);
            g->eax = eax;
            g->ecx = t35;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t36 = cow_cdecl(g, COW_IMG(0x10098f70u), 1, t35);
            t37 = g->ecx;
            t38 = g->edx;
            eax = t36;
            ecx = t37;
            edx = t38;
            esi = t36;
            loc_28 = rd32(sp0 - 0x28u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_20 = rd32(sp0 - 0x20u);
        }
L_102285d1: ;
        wr8(self + 0x230u, (uint8_t)loc_28);
        if (esi == 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)loc_28;
            goto L_1022860f;
        }
        edx = (edx & 0xffffff00u) | (uint8_t)loc_28;
        ebx = 0u;
        edi = 0u;
L_102285df: ;
        wr32(sp0 - 0x40u, edi);
        wr32(sp0 - 0x44u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t39 = cow_cdecl(g, COW_IMG(0x10098f90u), 3, esi, edi, rd32(sp0 - 0x3cu));
        t40 = g->ecx;
        t41 = g->edx;
        if ((uint16_t)t39 == 0xffffu)
        {
            eax = t39;
            ecx = t40;
            edx = t41;
        }
        else
        {
            eax = t39;
            ecx = t40;
            edx = t41;
            if ((uint16_t)eax != 0u)
            {
                wr16(self + (uint16_t)ebx * 2u + 0x234u, (uint16_t)eax);
                ecx = (uint16_t)ebx;
                ebx = ebx + 1u;
            }
        }
        if ((int32_t)(edi + 1u) < 32)
        {
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_102285df;
        }
        wr32(sp0 - 0x24u, ebx);
        loc_10 = rd32(sp0 - 0x10u);
        loc_24 = ebx;
        loc_20 = rd32(sp0 - 0x20u);
L_1022860f: ;
        wr32(sp0 - 0x28u, self + 8u);
        wr32(sp0 - 0x14u, 0xfffffdf8u - self);
        ecx = self + 8u;
        ebx = self + 0x208u;
        edi = 0xfffffdf8u - self;
        loc_28 = self + 8u;
        loc_14 = 0xfffffdf8u - self;
L_10228627: ;
        if (rd8(ebx) != 0u)
        {
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t42 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
            if ((int32_t)(uint16_t)rd32(sp0 - 0x24u) <= 0)
            {
                eax = t42;
                edx = 0u;
                esi = (uint16_t)rd32(sp0 - 0x24u);
            }
            else
            {
                eax = t42;
                esi = (uint16_t)rd32(sp0 - 0x24u);
                edx = 0u;
                edi = self + 0x234u;
L_10228645: ;
                if (eax == rd16(edi)) goto L_10228656;
                if ((int32_t)(edx + 1u) < (int32_t)esi)
                {
                    edx = edx + 1u;
                    edi = edi + 2u;
                    goto L_10228645;
                }
                edx = edx + 1u;
L_10228656: ;
                edi = rd32(sp0 - 0x14u);
            }
            if (edx != esi)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                wr8(ebx, 0u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
        wr32(sp0 - 0x28u, loc_28 + 0x10u);
        if ((int32_t)(ebx + edi + 1u) < 32)
        {
            ecx = loc_28 + 0x10u;
            edx = ebx + edi + 1u;
            ebx = ebx + 1u;
            loc_28 = loc_28 + 0x10u;
            goto L_10228627;
        }
        edx = ebx + edi + 1u;
        d43 = (double)rdf32(COW_IMG(0x1032a3acu));
        wr16(self + 0x278u, (uint16_t)loc_24);
        wr32(sp0 - 0x28u, 0x41800000u);
        if (rd32(COW_IMG(0x106671b8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106671b8u));
            esi = loc_24;
            loc_28 = 0x41800000u;
            x0 = d43;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106671b8u));
            esi = loc_24;
            x0 = d43;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t44 = cow_call_regs(g, COW_IMG(0x10227920u), eax, ecx, g->edx, 1, 0);
            t45 = g->ecx;
            t46 = g->edx;
            if ((uint8_t)t44 != 1u)
            {
                eax = t44;
                ecx = t45;
                edx = t46;
                loc_28 = 0x41800000u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                eax = t44;
                ecx = t45;
                edx = t46;
                wr32(sp0 - 0x28u, 0x42000000u);
                loc_28 = 0x42000000u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_20 = rd32(sp0 - 0x20u);
                x0 = (double)rdf32(COW_IMG(0x10329d34u));
            }
        }
        d47 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 - 0x18u, (float)d47);
        g->edx = edx;
        d48 = fr(g, cow_bits2f(loc_28) * d47);
        fpush(g, d48);
        g->esp = sp0 - 0x3cu;
        t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t50 = g->edx;
        wr32(sp0 - 0x14u, t49);
        wrf32(sp0 - 0x28u, (float)(double)(float)(double)(int32_t)t49);
        if ((uint16_t)esi != 0u)
        {
            loc_28_f = (double)(float)(double)(int32_t)t49;
            t51 = (uint32_t)((int32_t)((uint16_t)esi + ((uint32_t)((int32_t)((uint16_t)esi - 1u) >> 0x1fu) & 7u) - 1u) >> 3u) + 1u;
            wr32(sp0 - 0x14u, t51);
            d52 = (double)(float)fr(g, (double)(int32_t)t51 * loc_28_f);
            wrf32(sp0 - 0x24u, (float)d52);
            eax = t51;
            edx = (uint32_t)((int32_t)((uint16_t)esi - 1u) >> 0x1fu) & 7u;
        }
        else
        {
            eax = t49;
            edx = t50;
            loc_28_f = (double)(float)(double)(int32_t)t49;
            wr32(sp0 - 0x24u, 0u);
        }
        wr32(sp0 - 0x40u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t53 = cow_thiscall(g, COW_IMG(0x1015f960u), COW_IMG(0x10621838u), 1, 0u);
        t54 = g->edx;
        t55 = rd32(t53);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        if (t55 == 0u)
        {
            eax = t55;
            edx = t54;
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
        else
        {
            eax = t55;
            edx = t54;
            if (rd32(eax + 8u) == 0u)
            {
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
            }
            else
            {
                ecx = rd32(eax + 8u);
                if (rd32(COW_IMG(0x106643a8u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x106643a8u));
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_3c = rd32(sp0 - 0x3cu);
                }
                else
                {
                    eax = rd32(COW_IMG(0x106643a8u));
                    wr32(sp0 - 0x40u, sp0 - 8u);
                    g->edx = edx;
                    t56 = rd16(eax + 0x5eu);
                    t57 = rd16(eax + 0x5cu);
                    g->esp = sp0 - 0x3cu;
                    t58 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
                    t59 = g->edx;
                    t60 = (uint32_t)(int16_t)rd16(sp0 - 6u) - 8u;
                    wr32(sp0 - 0x14u, t60);
                    g->ecx = t60;
                    t61 = rd16(sp0 - 8u);
                    d62 = fr(g, (double)(int32_t)t60 - (double)rdf32(sp0 - 0x24u));
                    fpush(g, d62);
                    t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), t58, g->ecx, g->edx, 1, 0);
                    t64 = g->ecx;
                    if ((int32_t)((uint32_t)(int16_t)t61 + 0x158u) < (int16_t)t57)
                    {
                        ecx = t64;
                        edx = (uint32_t)(int16_t)t61 + 0x158u;
                        ebx = t63;
                        esi = (uint32_t)(int16_t)t61 + 0xc8u;
                    }
                    else
                    {
                        eax = (uint32_t)(int16_t)t57;
                        edx = (uint32_t)(int16_t)t61 + 0x158u;
                        ebp = (self & 0xffff0000u) | t56;
                        esi = (uint32_t)(int16_t)t61 + 0xc8u;
                        t65 = (uint32_t)(int16_t)ebp - 8u;
                        wr32(sp0 - 0x14u, t65);
                        g->ecx = t65;
                        g->edx = edx;
                        d66 = fr(g, (double)(int32_t)t65 - (double)rdf32(sp0 - 0x24u));
                        fpush(g, d66);
                        g->esp = sp0 - 0x3cu;
                        t67 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t68 = g->ecx;
                        t69 = g->edx;
                        ecx = t68;
                        edx = t69;
                        ebx = t67;
                    }
                    if (rd32(sp0 - 0x20u) == 0u)
                    {
                        eax = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x20u);
                        t70 = (-(rd8(sp0 - 0x29u) != 0u) & 0x404040u) - 0x7fbfbfc0u;
                        wr32(sp0 - 0x40u, t70);
                        t71 = rd32(sp0 - 0x20u);
                        wr32(sp0 - 0x44u, t71);
                        wr32(sp0 - 0x48u, ebx - 0x10u);
                        wr32(sp0 - 0x4cu, esi);
                        g->eax = t70;
                        g->ecx = ecx;
                        g->edx = t71;
                        g->esp = sp0 - 0x28u;
                        t72 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, ebx - 0x10u, t71, t70, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                        t73 = g->ecx;
                        t74 = g->edx;
                        wr32(sp0 - 0x14u, t72);
                        if (rd32(sp0 - 0x10u) != 1u)
                        {
                            eax = rd32(sp0 - 0x10u);
                            edx = t74;
                        }
                        else
                        {
                            eax = rd32(sp0 - 0x10u);
                            ecx = t73;
                            edx = t74;
                            ebp = ebx - 0x10u;
                            edi = t70;
                            loc_14 = t72;
                            wr32(sp0 - 0x40u, 0x3f800000u);
                            wr32(sp0 - 0x44u, 0x3f800000u);
                            wr32(sp0 - 0x48u, 1u);
                            wr32(sp0 - 0x4cu, edi);
                            wr32(sp0 - 0x50u, COW_IMG(0x10386284u));
                            wr32(sp0 - 0x54u, ebp);
                            wr32(sp0 - 0x58u, esi);
                            g->edx = edx;
                            g->esp = sp0 - 0x3cu;
                            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, esi, ebp, COW_IMG(0x10386284u), edi, 1u, 0x3f800000u, 0x3f800000u);
                            t75 = g->ecx;
                            t76 = g->edx;
                            wr32(sp0 - 0x5cu, edi);
                            wr32(sp0 - 0x60u, COW_IMG(0x10386280u));
                            wr32(sp0 - 0x64u, ebp);
                            t77 = rd32(sp0 - 0x14u);
                            wr32(sp0 - 0x68u, t77);
                            g->eax = t77;
                            g->edx = t76;
                            g->esp = sp0 - 0x44u;
                            t78 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t77, ebp, COW_IMG(0x10386280u), edi, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), COW_IMG(0x10386284u), rd32(sp0 - 0x4cu), 1u);
                            t79 = g->edx;
                            eax = t78;
                            edx = t79;
                        }
                    }
                    if (rd16(rd32(sp0 - 0x1cu) + 0x278u) == 0u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x1cu) + 0x278u);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x1cu) + 0x278u);
                        wr32(sp0 - 0x20u, esi);
                        wr32(sp0 - 0x14u, ebx);
                        wr32(sp0 - 0x24u, 0u);
                        if ((uint16_t)eax == 0u)
                        {
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                            loc_3c = rd32(sp0 - 0x3cu);
                            goto L_102288ce;
                        }
                        ebp = 0u;
                        edi = esi;
                        loc_14 = ebx;
                        loc_20 = esi;
                        loc_24 = 0u;
L_10228848: ;
                        wr32(sp0 - 0x40u, loc_24);
                        g->ebx = ebx;
                        g->eax = eax;
                        g->esp = sp0 - 0x3cu;
                        t80 = cow_thiscall(g, COW_IMG(0x10228280u), rd32(sp0 - 0x1cu), 1, loc_24);
                        if (t80 == 0u)
                        {
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_20 = rd32(sp0 - 0x20u);
                        }
                        else
                        {
                            eax = t80;
                            wr32(sp0 - 0x40u, 0u);
                            wr32(sp0 - 0x44u, 0x80808080u);
                            t81 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x48u, t81);
                            wr32(sp0 - 0x4cu, ebx + 1u);
                            wr32(sp0 - 0x50u, edi + 1u);
                            g->eax = eax;
                            g->edx = ebx + 1u;
                            g->esp = sp0 - 0x50u;
                            t82 = cow_thiscall(g, COW_IMG(0x10227130u), eax, 0);
                            t83 = g->edx;
                            g->ebx = ebx;
                            g->edx = t83;
                            g->esp = sp0 - 0x3cu;
                            t84 = cow_thiscall(g, COW_IMG(0x10026ad0u), t82, 5, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), 0x80808080u, 0u);
                            t85 = g->ecx;
                            t86 = g->edx;
                            if (ebp != 7u)
                            {
                                eax = t84;
                                ecx = t85;
                                edx = t86;
                                d89 = fr(g, (double)(int32_t)rd32(sp0 - 0x20u) + (double)rdf32(sp0 - 0x28u));
                                fpush(g, d89);
                                g->esp = sp0 - 0x3cu;
                                t90 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                wr32(sp0 - 0x20u, t90);
                                ebp = ebp + 1u;
                                edi = t90;
                                loc_14 = rd32(sp0 - 0x14u);
                                loc_20 = t90;
                            }
                            else
                            {
                                eax = t84;
                                ecx = t85;
                                edx = t86;
                                wr32(sp0 - 0x20u, esi);
                                d87 = fr(g, (double)(int32_t)rd32(sp0 - 0x14u) + (double)rdf32(sp0 - 0x28u));
                                fpush(g, d87);
                                g->esp = sp0 - 0x3cu;
                                t88 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                wr32(sp0 - 0x14u, t88);
                                ebx = t88;
                                ebp = 0u;
                                edi = esi;
                                loc_14 = t88;
                                loc_20 = rd32(sp0 - 0x20u);
                            }
                        }
                        t91 = rd32(sp0 - 0x24u) + 1u;
                        wr32(sp0 - 0x24u, t91);
                        if ((int32_t)t91 < (int32_t)rd16(rd32(sp0 - 0x1cu) + 0x278u))
                        {
                            eax = t91;
                            loc_24 = t91;
                            goto L_10228848;
                        }
                        eax = t91;
                        edx = rd32(sp0 - 0x1cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                }
            }
        }
    }
L_102288ce: ;
    g->ebx = loc_30;
    g->esi = loc_38;
    g->edi = loc_3c;
    g->ebp = loc_34;
    g->edx = edx;
    return eax;
L_10228526: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_10 = 0u;
    loc_c = 0u;
    goto L_102284e8;
L_10228530: ;
    wr32(sp0 - 0x10u, 0u);
    eax = 0u;
    loc_28 = rd32(sp0 - 0x28u);
    loc_10 = 0u;
    goto L_1022853c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
