/* f_0x1006a630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006a630(Guest* g)
{
    double d10;
    double d30;
    double d31;
    double d5;
    double d52;
    double d53;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_10_f;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t t1;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0xcu, self);
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x1006a9d0u), self, in_edx, 0);
    wr32(sp0 - 0x14u, 0x47c35000u);
    t1 = rd32(sp0 + 4u);
    wr32(self + 0x1cu, t1);
    wr32(sp0 - 0x18u, 0x47c35000u);
    t2 = rd32(t1 + 0x10u);
    t3 = rd32(t1);
    t4 = rd32(t1 + 4u);
    d5 = (double)rdf32(COW_IMG(0x1032c0fcu));
    wr32(self + 0x10u, t2);
    wr32(sp0 - 0x10u, 0xc7c35000u);
    if ((int32_t)rd32(t1) <= 0)
    {
        ecx = t1;
        edx = t2;
        ebx = t1 + t3 * 0xcu + 0x14u;
        esi = t1 + 0x14u;
        edi = t1 + t3 * 0xcu + t4 * 0x10u + 0x14u;
        loc_14 = 0x47c35000u;
        loc_18 = 0x47c35000u;
        loc_10 = 0xc7c35000u;
        x0 = d5;
    }
    else
    {
        eax = rd32(t1);
        ecx = t1;
        ebx = t1 + t3 * 0xcu + 0x14u;
        esi = t1 + 0x14u;
        edi = t1 + t3 * 0xcu + t4 * 0x10u + 0x14u;
        x0 = d5;
        wr32(sp0 - 8u, eax);
        edx = esi;
        loc_14 = 0x47c35000u;
        loc_18 = 0x47c35000u;
        loc_10 = 0xc7c35000u;
        loc_8 = eax;
L_1006a68c: ;
        if (!((double)rdf32(edx) < cow_bits2f(loc_18)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), cow_bits2f(loc_18), 1u);
        }
        else
        {
            wr32(sp0 - 0x18u, rd32(edx));
            eax = rd32(edx);
            loc_18 = rd32(edx);
        }
        if ((cow_fsw(g, (double)rdf32(edx), cow_bits2f(loc_10), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(edx), cow_bits2f(loc_10), 1u) & 0x4100u;
        }
        else
        {
            wr32(sp0 - 0x10u, rd32(edx));
            eax = rd32(edx);
            loc_10 = rd32(edx);
        }
        d6 = (double)rdf32(edx + 4u);
        if (!(d6 < cow_bits2f(loc_14)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, cow_bits2f(loc_14), 1u);
        }
        else
        {
            t7 = rd32(edx + 4u);
            wr32(sp0 - 0x14u, t7);
            eax = t7;
            loc_14 = t7;
        }
        d8 = (double)rdf32(edx + 4u);
        if (x0 < d8)
        {
            x0 = (double)rdf32(edx + 4u);
        }
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            eax = loc_8 - 1u;
            edx = edx + 0xcu;
            loc_8 = loc_8 - 1u;
            goto L_1006a68c;
        }
        edx = edx + 0xcu;
    }
    wr32(self + 0x20u, 0x152u);
    d9 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, cow_bits2f(loc_10) - cow_bits2f(loc_18)));
    wrf32(sp0 - 0x10u, (float)d9);
    d10 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, x0 - cow_bits2f(loc_14)));
    wrf32(sp0 - 4u, (float)d10);
    if (rd32(ecx + 0x10u) == 0u)
    {
        loc_10_f = d9;
        loc_4_f = d10;
    }
    else
    {
        eax = rd32(ecx + 0x10u);
        loc_10_f = d9;
        loc_4_f = d10;
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, eax);
        wr32(sp0 - 0x3cu, 0x152u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t11 = cow_stdcall(g, COW_IMG(0x1006a020u), 4, 0x152u, eax, 0u, 1u);
        t12 = g->edx;
        t13 = rd32(sp0 + 4u);
        wr32(self + 4u, t11);
        ecx = t13;
        edx = t12;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10_f = (double)rdf32(sp0 - 0x10u);
        loc_4_f = (double)rdf32(sp0 - 4u);
    }
    if (rd32(ecx + 0xcu) != 0u)
    {
        eax = rd32(ecx + 0xcu);
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, eax * 3u);
        t14 = rd32(self + 0x20u);
        wr32(sp0 - 0x3cu, t14);
        g->eax = eax;
        g->edx = t14;
        g->esp = sp0 - 0x2cu;
        t15 = cow_stdcall(g, COW_IMG(0x1006a020u), 4, t14, eax * 3u, 0u, 1u);
        t16 = g->edx;
        t17 = rd32(sp0 + 4u);
        wr32(self + 8u, t15);
        ecx = t17;
        edx = t16;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10_f = (double)rdf32(sp0 - 0x10u);
        loc_4_f = (double)rdf32(sp0 - 4u);
    }
    wr32(sp0 - 0x30u, 4u);
    t18 = rd32(ecx + 8u);
    wr32(self + 0xcu, t18);
    t19 = rd32(ecx + 8u) * 2u;
    wr32(sp0 - 0x34u, t19);
    g->esp = sp0 - 0x2cu;
    t20 = cow_call_regs(g, COW_IMG(0x10028640u), t18, t19, edx, 1, 2, t19, 4u);
    t21 = rd32(sp0 + 4u);
    wr32(self + 0x18u, t20);
    t22 = rd32(t21 + 0xcu);
    wr32(self + 0x14u, t22);
    if (rd32(t21 + 0x10u) == 0u)
    {
        ecx = t21;
        edx = t22;
        ebp = self;
    }
    else
    {
        eax = rd32(t21 + 0x10u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        wr32(sp0 - 0x38u, eax);
        wr32(sp0 - 0x3cu, 0u);
        t23 = rd32(self + 4u);
        wr32(sp0 - 0x40u, t23);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x2cu), rd32(rd32(self + 4u)), 5, t23, 0u, eax, sp0 - 0x1cu, 0u);
        t24 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, 0u);
        if ((int32_t)rd32(t24 + 8u) <= 0)
        {
            edx = rd32(t24 + 8u);
            ebp = self;
            loc_1c = rd32(sp0 - 0x1cu);
            goto L_1006a892;
        }
        ecx = 0u;
        ebp = self;
        loc_1c = rd32(sp0 - 0x1cu);
L_1006a7aa: ;
        t25 = rd32(edi);
        wr16(ecx * 2u + rd32(ebp + 0x18u), (uint16_t)t25);
        if ((int32_t)t25 <= 0)
        {
            edi = edi + 4u;
        }
        else
        {
            eax = t25;
            edi = edi + 4u;
            wr32(sp0 - 8u, eax);
            loc_8 = eax;
L_1006a7c2: ;
            t26 = rd32(esi + rd16(edi) * 0xcu);
            t27 = rd16(edi);
            wr32(loc_1c, t26);
            t28 = rd32(esi + t27 * 0xcu + 4u);
            wr32(loc_1c + 4u, t28);
            t29 = rd32(esi + t27 * 0xcu + 8u);
            wr32(loc_1c + 8u, t29);
            d30 = fr(g, fr(g, (double)rdf32(esi + t27 * 0xcu) - (double)rdf32(sp0 - 0x18u)) * (double)rdf32(sp0 - 0x10u));
            wrf32(loc_1c + 0x1cu, (float)d30);
            d31 = fr(g, fr(g, (double)rdf32(esi + t27 * 0xcu + 4u) - (double)rdf32(sp0 - 0x14u)) * (double)rdf32(sp0 - 4u));
            wrf32(loc_1c + 0x20u, (float)d31);
            t32 = rd32(ebx + rd16(edi + 2u) * 0x10u);
            t33 = rd16(edi + 2u);
            wr32(loc_1c + 0xcu, t32);
            t34 = rd32(ebx + t33 * 0x10u + 4u);
            wr32(loc_1c + 0x10u, t34);
            t35 = rd32(ebx + t33 * 0x10u + 8u);
            wr32(loc_1c + 0x14u, t35);
            wr32(sp0 - 0x30u, loc_1c + 0xcu);
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, loc_1c + 0xcu);
            t36 = rd32(ebx + t33 * 0x10u + 0xcu);
            wr32(rd32(sp0 - 0x1cu) + 0x18u, t36);
            t37 = rd32(sp0 - 0x1cu) + 0x24u;
            wr32(sp0 - 0x1cu, t37);
            t38 = rd32(sp0 - 8u) - 1u;
            wr32(sp0 - 8u, t38);
            if (rd32(sp0 - 8u) != 1u)
            {
                edi = edi + 4u;
                loc_8 = t38;
                loc_1c = t37;
                goto L_1006a7c2;
            }
            edi = edi + 4u;
            loc_1c = t37;
            ecx = rd32(sp0 + 8u);
            ebp = rd32(sp0 - 0xcu);
        }
        t39 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, ecx + 1u);
        if ((int32_t)(ecx + 1u) < (int32_t)rd32(t39 + 8u))
        {
            ecx = ecx + 1u;
            goto L_1006a7aa;
        }
        edx = t39;
L_1006a892: ;
        t40 = rd32(ebp + 4u);
        wr32(sp0 - 0x30u, t40);
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(t40) + 0x30u), rd32(t40), 1, t40);
        t41 = g->edx;
        ecx = rd32(sp0 + 4u);
        edx = t41;
    }
    t42 = rd32(ecx + 0xcu);
    t43 = rd32(ecx + 0xcu);
    wr32(ebp + 0x14u, t42);
    if (t43 == 0u)
    {
        eax = t42;
    }
    else
    {
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        t44 = rd32(ecx + 0xcu) * 3u;
        wr32(sp0 - 0x38u, t44);
        wr32(sp0 - 0x3cu, 0u);
        t45 = rd32(ebp + 8u);
        wr32(sp0 - 0x40u, t45);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(rd32(ebp + 8u)) + 0x2cu), t44, 5, t45, 0u, t44, sp0 - 0x1cu, 0u);
        t46 = g->ecx;
        t47 = rd32(ebp + 0x14u);
        wr32(sp0 + 8u, 0u);
        if ((int32_t)t47 <= 0)
        {
            eax = t47;
            ecx = t46;
            goto L_1006a9b4;
        }
        loc_1c = rd32(sp0 - 0x1cu);
L_1006a8dc: ;
        wr32(sp0 + 4u, 3u);
L_1006a8e4: ;
        t48 = rd32(esi + rd16(edi) * 0xcu);
        t49 = rd16(edi);
        wr32(loc_1c, t48);
        t50 = rd32(esi + t49 * 0xcu + 4u);
        wr32(loc_1c + 4u, t50);
        t51 = rd32(esi + t49 * 0xcu + 8u);
        wr32(loc_1c + 8u, t51);
        d52 = fr(g, fr(g, (double)rdf32(esi + t49 * 0xcu) - (double)rdf32(sp0 - 0x18u)) * (double)rdf32(sp0 - 0x10u));
        wrf32(loc_1c + 0x1cu, (float)d52);
        d53 = fr(g, fr(g, (double)rdf32(esi + t49 * 0xcu + 4u) - (double)rdf32(sp0 - 0x14u)) * (double)rdf32(sp0 - 4u));
        wrf32(loc_1c + 0x20u, (float)d53);
        t54 = rd32(ebx + rd16(edi + 2u) * 0x10u);
        t55 = rd16(edi + 2u);
        wr32(loc_1c + 0xcu, t54);
        t56 = rd32(ebx + t55 * 0x10u + 4u);
        wr32(loc_1c + 0x10u, t56);
        t57 = rd32(ebx + t55 * 0x10u + 8u);
        wr32(loc_1c + 0x14u, t57);
        wr32(sp0 - 0x30u, loc_1c + 0xcu);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, loc_1c + 0xcu);
        t58 = rd32(ebx + t55 * 0x10u + 0xcu);
        t59 = rd32(sp0 + 4u);
        wr32(rd32(sp0 - 0x1cu) + 0x18u, t58);
        t60 = rd32(sp0 - 0x1cu) + 0x24u;
        wr32(sp0 - 0x1cu, t60);
        wr32(sp0 + 4u, t59 - 1u);
        if (t59 != 1u)
        {
            edi = edi + 4u;
            loc_1c = t60;
            goto L_1006a8e4;
        }
        edi = edi + 4u;
        loc_1c = t60;
        t61 = rd32(sp0 + 8u) + 1u;
        t62 = rd32(sp0 - 0xcu);
        t63 = rd32(rd32(sp0 - 0xcu) + 0x14u);
        wr32(sp0 + 8u, t61);
        if ((int32_t)t61 < (int32_t)t63) goto L_1006a8dc;
        eax = t61;
        ecx = t62;
        ebp = ecx;
L_1006a9b4: ;
        t64 = rd32(ebp + 8u);
        wr32(sp0 - 0x30u, t64);
        g->eax = eax;
        g->edx = rd32(t64);
        t65 = rd32(t64);
        g->esp = sp0 - 0x2cu;
        t66 = cow_thiscall(g, rd32(t65 + 0x30u), ecx, 1, t64);
        t67 = g->edx;
        eax = t66;
        edx = t67;
    }
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006a630(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
