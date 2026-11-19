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
    double d12;
    double d13;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d41;
    double d42;
    double d43;
    double d45;
    double d47;
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
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t t1;
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
    uint32_t t44;
    uint32_t t46;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003d655u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x40u); goto E_1003d655;
    case 0x1003d66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_1003d66f;
    case 0x1003d689u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003d689;
    case 0x1003d695u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003d695;
    case 0x1003d6a3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003d6a3;
    case 0x1003d6b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003d6b5;
    case 0x1003d81cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1003d81c;
    case 0x1003d820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1003d820;
    case 0x1003d88bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1003d88b;
    case 0x1003d88du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1003d88d;
    case 0x1003d8dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1003d8da;
    case 0x1003d8f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1003d8f4;
    case 0x1003d8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1003d8fa;
    case 0x1003d90eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1003d90e;
    case 0x1003d912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003d912;
    case 0x1003d927u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003d927;
    case 0x1003d92au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_1003d92a;
    default: break;
    }
#endif

    COW_AT(1003d640)
    wr32(sp0 - 0x40u, in_ebp);
    if ((int32_t)(rd32(sp0 + 8u) - 1u) <= 0)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_40 = in_ebp;
    }
    else
    {
        eax = rd32(sp0 + 8u) - 1u;
    COW_AT(1003d655)
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
        loc_40 = in_ebp;
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_14 = t2;
        loc_1c = eax;
L_1003d66f: ;
    COW_AT(1003d66f)
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
    COW_AT(1003d689)
            wr32(sp0 - 0x38u, 1u);
            ecx = 1u;
            loc_38 = 1u;
        }
    COW_AT(1003d695)
        wr32(sp0 + 8u, 0u);
        if ((int32_t)ecx > 0)
        {
    COW_AT(1003d6a3)
            t6 = arg3 * 2u + 2u;
            wr32(sp0 - 0x18u, t6);
            wrf32(sp0 - 0x2cu, (float)(double)(float)(double)(int32_t)loc_38);
            eax = 0u;
            edi = edi + esi;
            loc_18 = t6;
            loc_2c_f = (double)(float)(double)(int32_t)loc_38;
L_1003d6b5: ;
    COW_AT(1003d6b5)
            wr32(sp0 - 0x20u, eax + 1u);
            d7 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / loc_2c_f);
            wrf32(sp0 + 8u, (float)d7);
            wrf32(sp0 + 0x14u, (float)fr(g, (double)(int32_t)(eax + 1u) / loc_2c_f));
            d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u));
            wrf32(sp0 - 0x30u, (float)(double)(float)d8);
            d9 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(esi));
            d10 = fr(g, d8 * (double)rdf32(esi - 4u));
            wr32(sp0 - 0x50u, cow_f2bits((double)(float)d8));
            wr32(sp0 - 0x54u, sp0 - 0x10u);
            d11 = fr(g, fr(g, d10 + d9) * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0x28u, (float)(double)(float)d11);
            d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
            wrf32(sp0 - 0x34u, (float)(double)(float)d12);
            d13 = fr(g, fr(g, fr(g, d12 * (double)rdf32(esi - 4u)) + fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(esi))) * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0x24u, (float)(double)(float)d13);
            g->eax = sp0 - 0x10u;
            g->esp = sp0 - 0x4cu;
            t14 = cow_thiscall(g, COW_IMG(0x1003dfe0u), ebx, 2, sp0 - 0x10u, cow_f2bits((double)(float)d8));
            t15 = rd32(sp0 + 8u);
            wr32(sp0 + 0x10u, rd32(t14));
            wr32(sp0 - 0x50u, t15);
            wr32(sp0 - 0x54u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = t15;
            t16 = cow_thiscall(g, COW_IMG(0x1003dfe0u), edi, 2, sp0 - 0xcu, t15);
            t17 = g->edx;
            wr32(sp0 - 0x50u, t16);
            g->ebx = ebx;
            t18 = cow_fastcall(g, COW_IMG(0x1003e1d0u), sp0 + 0x10u, t17, 1, t16);
            t19 = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x50u, t19);
            wr32(sp0 - 0x54u, sp0 - 8u);
            t20 = cow_thiscall(g, COW_IMG(0x1003dfe0u), ebx, 2, sp0 - 8u, t19);
            t21 = rd32(sp0 + 0x14u);
            wr32(sp0 - 0x50u, t21);
            wr32(sp0 - 0x54u, sp0 - 4u);
            wr32(sp0 - 0x3cu, rd32(t20));
            g->eax = rd32(t20);
            g->edx = sp0 - 4u;
            t22 = rd32(t20);
            t23 = cow_thiscall(g, COW_IMG(0x1003dfe0u), edi, 2, sp0 - 4u, t21);
            t24 = g->edx;
            wr32(sp0 - 0x50u, t23);
            g->ebx = ebx;
            cow_fastcall(g, COW_IMG(0x1003e1d0u), sp0 - 0x3cu, t24, 1, t23);
            t25 = g->edx;
            d26 = fr(g, fr(g, cos((double)rdf32(sp0 - 0x28u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 + 8u, (float)d26);
            d27 = fr(g, fr(g, sin((double)rdf32(sp0 - 0x28u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 - 0x34u, (float)(double)(float)-d27);
            d28 = fr(g, fr(g, cos((double)rdf32(sp0 - 0x24u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 + 0x14u, (float)d28);
            d29 = fr(g, fr(g, sin((double)rdf32(sp0 - 0x24u))) * (double)rdf32(sp0 + 4u));
            wrf32(sp0 - 0x30u, (float)(double)(float)-d29);
            t30 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x50u, t30);
            g->eax = t30;
            g->edx = t25;
            t31 = cow_stdcall(g, COW_IMG(0x10044010u), 1, t30);
            t32 = g->edx;
            t33 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba0u)), 0);
            t34 = rd32(sp0 - 0x34u);
            t35 = rd32(sp0 + 8u);
            wr32(t33, 0u);
            wr32(t33 + 4u, t34);
            wr32(t33 + 8u, t35);
            t36 = rd32(sp0 + 0x10u);
            t37 = rd32(sp0 - 0x30u);
            wr32(t33 + 0xcu, t36);
            t38 = rd32(sp0 + 0x14u);
            wr32(t33 + 0x10u, 0u);
            wr32(t33 + 0x14u, t37);
            wr32(t33 + 0x18u, t38);
            t39 = rd32(sp0 - 0x3cu);
            wr32(t33 + 0x1cu, t39);
            wr32(sp0 - 0x24u, 1u);
            if ((int32_t)arg3 <= 1)
            {
                eax = t33 + 0x20u;
            }
            else
            {
                eax = t33 + 0x20u;
    COW_AT(1003d81c)
                ecx = 1u;
                loc_24 = 1u;
L_1003d820: ;
    COW_AT(1003d820)
                t40 = rd32(sp0 - 0x34u);
                wr32(eax + 4u, t40);
                d41 = fr(g, fr(g, (double)(int32_t)loc_24 * (double)rdf32(COW_IMG(0x10329d2cu))) / (double)(int32_t)arg3);
                wrf32(sp0 - 0x24u, (float)(double)(float)d41);
                d42 = fr(g, (double)rdf32(sp0 + 8u) * fr(g, sin(d41)));
                wrf32(eax, (float)d42);
                wr32(sp0 - 0x24u, ecx + 1u);
                d43 = fr(g, (double)rdf32(sp0 + 8u) * fr(g, cos((double)(float)d41)));
                wrf32(eax + 8u, (float)d43);
                t44 = rd32(sp0 + 0x10u);
                d45 = (double)rdf32(sp0 + 0x14u);
                wr32(eax + 0xcu, t44);
                t46 = rd32(sp0 - 0x30u);
                wrf32(eax + 0x10u, (float)fr(g, d45 * fr(g, sin(d41))));
                d47 = fr(g, (double)rdf32(sp0 + 0x14u) * fr(g, cos((double)(float)d41)));
                wrf32(eax + 0x18u, (float)d47);
                wr32(eax + 0x14u, t46);
                t48 = rd32(sp0 - 0x3cu);
                wr32(eax + 0x1cu, t48);
                if ((int32_t)(ecx + 1u) < (int32_t)arg3)
                {
                    eax = eax + 0x20u;
                    loc_24 = ecx + 1u;
                    ecx = ecx + 1u;
                    goto L_1003d820;
                }
                eax = eax + 0x20u;
    COW_AT(1003d88b)
            }
    COW_AT(1003d88d)
            t49 = rd32(sp0 - 0x34u);
            t50 = rd32(sp0 + 8u);
            wr32(eax, 0u);
            wr32(eax + 4u, t49);
            wr32(eax + 8u, t50);
            t51 = rd32(sp0 + 0x10u);
            t52 = rd32(sp0 - 0x30u);
            wr32(eax + 0xcu, t51);
            t53 = rd32(sp0 + 0x14u);
            wr32(eax + 0x10u, 0u);
            wr32(eax + 0x14u, t52);
            wr32(eax + 0x18u, t53);
            t54 = rd32(sp0 - 0x3cu);
            wr32(eax + 0x1cu, t54);
            g->edx = t54;
            g->esp = sp0 - 0x4cu;
            cow_stdcall(g, COW_IMG(0x100441a0u), 0);
            t55 = g->edx;
            if ((int32_t)rd32(COW_IMG(0x1065cb08u)) <= 20)
            {
                edx = t55;
    COW_AT(1003d8f4)
                wr32(COW_IMG(0x1065cb08u), rd32(COW_IMG(0x1065cb08u)) + 1u);
            }
            else
            {
                edx = t55;
    COW_AT(1003d8da)
                wr32(sp0 - 0x50u, 0xffffffffu);
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x58u, 5u);
                wr32(sp0 - 0x5cu, arg3 * 2u);
                wr32(sp0 - 0x60u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba0u)), 5, 0u, arg3 * 2u, 5u, 0u, 0xffffffffu);
                t56 = g->edx;
                edx = t56;
            }
    COW_AT(1003d8fa)
            t57 = rd32(sp0 - 0x20u);
            t58 = rd32(sp0 - 0x38u);
            t59 = rd32(sp0 - 0x20u);
            wr32(sp0 + 8u, t57);
            if ((int32_t)t59 < (int32_t)t58)
            {
                eax = t57;
                loc_38 = rd32(sp0 - 0x38u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_2c_f = (double)rdf32(sp0 - 0x2cu);
                goto L_1003d6b5;
            }
            ecx = t58;
    COW_AT(1003d90e)
            edi = rd32(sp0 - 0x14u);
        }
    COW_AT(1003d912)
        t60 = rd32(sp0 - 0x1cu) - 1u;
        t61 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x1cu, t60);
        if (t61 != 1u)
        {
            eax = t60;
            ebx = ebx + 4u;
            esi = esi + 4u;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_1c = t60;
            goto L_1003d66f;
        }
    COW_AT(1003d927)
        ebx = rd32(sp0 - 0x44u);
        esi = rd32(sp0 - 0x48u);
        edi = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
    }
    COW_AT(1003d92a)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_40;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003d640(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003d655u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d66fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d689u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d695u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d6a3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        g->eax = 0u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d6b5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        double loc_2c_f;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d81cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = 1u;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1003d820u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        ST(0) = (double)(int32_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d88bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        ST(0) = (double)(int32_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d88du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1003d8dau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1003d8f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        wr32(sp0 - 0x54u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1003d8fau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d90eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d912u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003d927u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d92au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_38;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d640(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003d640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
