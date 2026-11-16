/* f_0x1003d640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1003d640(Guest* g)
{
    double d10;
    double d11;
    double d24;
    double d25;
    double d26;
    double d27;
    double d3;
    double d38;
    double d39;
    double d40;
    double d41;
    double d43;
    double d45;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_24;
    double loc_2c_f;
    uint32_t loc_38;
    uint32_t t1;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t42;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x40u, in_ebp);
    if ((int32_t)(rd32(sp0 + 8u) - 1u) <= 0)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(sp0 + 8u) - 1u;
        wr32(sp0 - 0x44u, in_ebx);
        wr32(sp0 - 0x48u, in_esi);
        wr32(sp0 - 0x4cu, in_edi);
        t1 = rd32(sp0 + 0x10u);
        t2 = t1 - rd32(sp0 + 0x14u);
        wr32(sp0 - 0x14u, t2);
        wr32(sp0 - 0x1cu, eax);
        ecx = rd32(sp0 + 0x14u);
        edx = in_edx;
        ebx = t1;
        esi = rd32(sp0 + 0x14u) + 4u;
        edi = t2;
        loc_14 = t2;
        loc_1c = eax;
L_1003d66f: ;
        g->edx = edx;
        d3 = fr(g, fr(g, (double)rdf32(esi) - (double)rdf32(esi - 4u)) * (double)rdf32(COW_IMG(0x1032aba8u)));
        fpush(g, d3);
        g->esp = sp0 - 0x4cu;
        t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t5 = g->edx;
        wr32(sp0 - 0x38u, t4);
        if (t4 != 0u)
        {
            ecx = t4;
            edx = t5;
            loc_38 = t4;
        }
        else
        {
            edx = t5;
            wr32(sp0 - 0x38u, 1u);
            ecx = 1u;
            loc_38 = 1u;
        }
        wr32(sp0 + 8u, 0u);
        if ((int32_t)ecx > 0)
        {
            t6 = arg3 * 2u + 2u;
            wr32(sp0 - 0x18u, t6);
            wrf32(sp0 - 0x2cu, (float)(double)(float)(double)(int32_t)loc_38);
            eax = 0u;
            edi = edi + esi;
            loc_18 = t6;
            loc_2c_f = (double)(float)(double)(int32_t)loc_38;
L_1003d6b5: ;
            wr32(sp0 - 0x20u, eax + 1u);
            d7 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / loc_2c_f);
            wrf32(sp0 + 8u, (float)d7);
            wrf32(sp0 + 0x14u, (float)fr(g, (double)(int32_t)(eax + 1u) / loc_2c_f));
            d8 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u));
            wrf32(sp0 - 0x30u, (float)d8);
            wr32(sp0 - 0x50u, cow_f2bits(d8));
            wr32(sp0 - 0x54u, sp0 - 0x10u);
            d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u)) * (double)rdf32(esi - 4u)) + fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(esi))) * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0x28u, (float)d9);
            d10 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
            wrf32(sp0 - 0x34u, (float)d10);
            d11 = (double)(float)fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u)) * (double)rdf32(esi - 4u)) + fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(esi))) * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0x24u, (float)d11);
            g->eax = sp0 - 0x10u;
            g->esp = sp0 - 0x4cu;
            t12 = cow_thiscall(g, COW_IMG(0x1003dfe0u), ebx, 2, sp0 - 0x10u, cow_f2bits(d8));
            t13 = rd32(sp0 + 8u);
            wr32(sp0 + 0x10u, rd32(t12));
            wr32(sp0 - 0x50u, t13);
            wr32(sp0 - 0x54u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = t13;
            t14 = cow_thiscall(g, COW_IMG(0x1003dfe0u), edi, 2, sp0 - 0xcu, t13);
            t15 = g->edx;
            wr32(sp0 - 0x50u, t14);
            g->ebx = ebx;
            t16 = cow_fastcall(g, COW_IMG(0x1003e1d0u), sp0 + 0x10u, t15, 1, t14);
            t17 = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x50u, t17);
            wr32(sp0 - 0x54u, sp0 - 8u);
            t18 = cow_thiscall(g, COW_IMG(0x1003dfe0u), ebx, 2, sp0 - 8u, t17);
            t19 = rd32(sp0 + 0x14u);
            wr32(sp0 - 0x50u, t19);
            wr32(sp0 - 0x54u, sp0 - 4u);
            wr32(sp0 - 0x3cu, rd32(t18));
            g->eax = rd32(t18);
            g->edx = sp0 - 4u;
            t20 = rd32(t18);
            t21 = cow_thiscall(g, COW_IMG(0x1003dfe0u), edi, 2, sp0 - 4u, t19);
            t22 = g->edx;
            wr32(sp0 - 0x50u, t21);
            g->ebx = ebx;
            cow_fastcall(g, COW_IMG(0x1003e1d0u), sp0 - 0x3cu, t22, 1, t21);
            t23 = g->edx;
            d24 = fr(g, fr(g, cos((double)rdf32(sp0 - 0x28u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 + 8u, (float)d24);
            d25 = (double)(float)-fr(g, fr(g, sin((double)rdf32(sp0 - 0x28u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 - 0x34u, (float)d25);
            d26 = fr(g, fr(g, cos((double)rdf32(sp0 - 0x24u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 + 0x14u, (float)d26);
            d27 = (double)(float)-fr(g, fr(g, sin((double)rdf32(sp0 - 0x24u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 - 0x30u, (float)d27);
            t28 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x50u, t28);
            g->edx = t23;
            cow_stdcall(g, COW_IMG(0x10044010u), 1, t28);
            t29 = g->edx;
            t30 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba0u)), 0);
            t31 = rd32(sp0 - 0x34u);
            t32 = rd32(sp0 + 8u);
            wr32(t30, 0u);
            wr32(t30 + 4u, t31);
            wr32(t30 + 8u, t32);
            t33 = rd32(sp0 + 0x10u);
            t34 = rd32(sp0 - 0x30u);
            wr32(t30 + 0xcu, t33);
            t35 = rd32(sp0 + 0x14u);
            wr32(t30 + 0x10u, 0u);
            wr32(t30 + 0x14u, t34);
            wr32(t30 + 0x18u, t35);
            t36 = rd32(sp0 - 0x3cu);
            wr32(t30 + 0x1cu, t36);
            wr32(sp0 - 0x24u, 1u);
            if ((int32_t)arg3 <= 1)
            {
                eax = t30 + 0x20u;
            }
            else
            {
                eax = t30 + 0x20u;
                ecx = 1u;
                loc_24 = 1u;
L_1003d820: ;
                t37 = rd32(sp0 - 0x34u);
                wr32(eax + 4u, t37);
                d38 = (double)(float)fr(g, fr(g, (double)(int32_t)loc_24 * (double)rdf32(COW_IMG(0x10329d2cu))) / (double)(int32_t)arg3);
                wrf32(sp0 - 0x24u, (float)d38);
                d39 = fr(g, (double)rdf32(sp0 + 8u) * fr(g, sin(fr(g, fr(g, (double)(int32_t)loc_24 * (double)rdf32(COW_IMG(0x10329d2cu))) / (double)(int32_t)arg3))));
                d40 = fr(g, sin(fr(g, fr(g, (double)(int32_t)loc_24 * (double)rdf32(COW_IMG(0x10329d2cu))) / (double)(int32_t)arg3)));
                wrf32(eax, (float)d39);
                wr32(sp0 - 0x24u, ecx + 1u);
                d41 = fr(g, (double)rdf32(sp0 + 8u) * fr(g, cos(d38)));
                wrf32(eax + 8u, (float)d41);
                t42 = rd32(sp0 + 0x10u);
                d43 = (double)rdf32(sp0 + 0x14u);
                wr32(eax + 0xcu, t42);
                t44 = rd32(sp0 - 0x30u);
                wrf32(eax + 0x10u, (float)fr(g, d43 * d40));
                d45 = fr(g, (double)rdf32(sp0 + 0x14u) * fr(g, cos(d38)));
                wrf32(eax + 0x18u, (float)d45);
                wr32(eax + 0x14u, t44);
                t46 = rd32(sp0 - 0x3cu);
                wr32(eax + 0x1cu, t46);
                if ((int32_t)(ecx + 1u) < (int32_t)arg3)
                {
                    eax = eax + 0x20u;
                    loc_24 = ecx + 1u;
                    ecx = ecx + 1u;
                    goto L_1003d820;
                }
                eax = eax + 0x20u;
            }
            t47 = rd32(sp0 - 0x34u);
            t48 = rd32(sp0 + 8u);
            wr32(eax, 0u);
            wr32(eax + 4u, t47);
            wr32(eax + 8u, t48);
            t49 = rd32(sp0 + 0x10u);
            t50 = rd32(sp0 - 0x30u);
            wr32(eax + 0xcu, t49);
            t51 = rd32(sp0 + 0x14u);
            wr32(eax + 0x10u, 0u);
            wr32(eax + 0x14u, t50);
            wr32(eax + 0x18u, t51);
            t52 = rd32(sp0 - 0x3cu);
            wr32(eax + 0x1cu, t52);
            g->edx = t52;
            g->esp = sp0 - 0x4cu;
            cow_stdcall(g, COW_IMG(0x100441a0u), 0);
            t53 = g->edx;
            if ((int32_t)rd32(COW_IMG(0x1065cb08u)) <= 20)
            {
                edx = t53;
                wr32(COW_IMG(0x1065cb08u), rd32(COW_IMG(0x1065cb08u)) + 1u);
            }
            else
            {
                edx = t53;
                wr32(sp0 - 0x50u, 0xffffffffu);
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x58u, 5u);
                wr32(sp0 - 0x5cu, arg3 * 2u);
                wr32(sp0 - 0x60u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba0u)), 5, 0u, arg3 * 2u, 5u, 0u, 0xffffffffu);
                t54 = g->edx;
                edx = t54;
            }
            t55 = rd32(sp0 - 0x20u);
            t56 = rd32(sp0 - 0x38u);
            t57 = rd32(sp0 - 0x20u);
            wr32(sp0 + 8u, t55);
            if ((int32_t)t57 < (int32_t)t56)
            {
                eax = t55;
                goto L_1003d6b5;
            }
            ecx = t56;
            edi = rd32(sp0 - 0x14u);
        }
        t58 = rd32(sp0 - 0x1cu) - 1u;
        wr32(sp0 - 0x1cu, t58);
        if (rd32(sp0 - 0x1cu) != 1u)
        {
            eax = t58;
            ebx = ebx + 4u;
            esi = esi + 4u;
            loc_1c = t58;
            goto L_1003d66f;
        }
        ebx = rd32(sp0 - 0x44u);
        esi = rd32(sp0 - 0x48u);
        edi = rd32(sp0 - 0x4cu);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003d640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
