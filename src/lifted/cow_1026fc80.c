/* f_0x1026fc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026fc80(Guest* g)
{
    double d16;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_8_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026fcaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1026fcae;
    case 0x1026fce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_1026fce0;
    case 0x1026fce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_1026fce4;
    case 0x1026fd08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fd08;
    case 0x1026fd3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8_f = rdf32(sp0 - 8u); goto E_1026fd3b;
    case 0x1026fd40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8_f = rdf32(sp0 - 8u); goto E_1026fd40;
    case 0x1026fd59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fd59;
    case 0x1026fd72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026fd72;
    case 0x1026fd7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fd7e;
    case 0x1026fd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fd83;
    case 0x1026fd95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fd95;
    case 0x1026fda5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8_f = rdf32(sp0 - 8u); goto E_1026fda5;
    case 0x1026fdb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_8_f = rdf32(sp0 - 8u); goto E_1026fdb5;
    case 0x1026fdd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fdd6;
    case 0x1026fde0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fde0;
    case 0x1026fdf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fdf7;
    case 0x1026fe08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe08;
    case 0x1026fe0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe0d;
    case 0x1026fe26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026fe26;
    case 0x1026fe31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe31;
    case 0x1026fe36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe36;
    case 0x1026fe48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe48;
    case 0x1026fe58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe58;
    case 0x1026fe68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026fe68;
    case 0x1026fe74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1026fe74;
    default: break;
    }
#endif

    COW_AT(1026fc80)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1026fec0u), 2, t1, sp0 - 0xcu);
    t2 = g->edx;
    t3 = rd32(sp0 - 0xcu);
    wr32(sp0 + 4u, 1u);
    if ((int32_t)t3 < 0)
    {
        edx = t2;
        goto L_1026fe74;
    }
    ecx = t3;
    COW_AT(1026fcae)
    t4 = ecx * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 4u;
    wr32(sp0 - 0x28u, t4);
    g->eax = t4;
    g->edx = ecx * 0x15u;
    t5 = rd32(COW_IMG(0x1099aed0u));
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1028a2b0u), t5, 1, t4);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x10u, t6);
    if (t6 == 0u)
    {
        edx = t8;
        goto L_1026fe74;
    }
    eax = t6;
    ecx = t7;
    ebx = t6;
    loc_10 = t6;
    COW_AT(1026fce0)
    esi = 0u;
    edi = 0u;
L_1026fce4: ;
    COW_AT(1026fce4)
    wr32(sp0 - 0x28u, 8u);
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 4u, esi * 0x14u);
    t9 = COW_IMG(0x103b12a8u) + esi * 0x14u;
    wr32(sp0 - 0x30u, t9);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t9, ebx, 8u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        ebp = esi * 0x14u;
    COW_AT(1026fd08)
        t13 = rd32(COW_IMG(0x103b12b0u) + ebp);
        wr32(sp0 - 0x14u, t13);
        t14 = rd32(COW_IMG(0x103b12b4u) + ebp);
        t15 = rd32(COW_IMG(0x1099aed0u));
        d16 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(t13));
        wr32(sp0 + 4u, t14);
        wrf32(sp0 - 8u, (float)(double)(float)d16);
        if ((int32_t)rd32(COW_IMG(0x1099aeccu)) <= 0)
        {
            eax = rd32(COW_IMG(0x1099aeccu));
            goto L_1026fdb5;
        }
        ecx = t13;
        ebx = t15;
        ebp = 0u;
        loc_14 = t13;
        loc_8_f = (double)(float)d16;
L_1026fd3b: ;
    COW_AT(1026fd3b)
        if ((int8_t)rd8(ebx) < 0)
        {
    COW_AT(1026fd40)
            t17 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x28u, t17);
            wr32(sp0 - 0x2cu, ebx + 4u);
            wr8(t17 + 5u, 0u);
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            t18 = cow_call_regs(g, COW_IMG(0x10311ef0u), t17, g->ecx, ebx + 4u, 1, 7, ebx + 4u, t17, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), loc_14);
            t19 = g->ecx;
            t20 = g->edx;
            if (t18 == 0u)
            {
                ecx = t19;
                loc_14 = rd32(sp0 - 0x14u);
                loc_8_f = (double)rdf32(sp0 - 8u);
            }
            else
            {
                ecx = t19;
                edx = t20;
    COW_AT(1026fd59)
                t21 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x28u, t21);
                wr32(sp0 - 0x2cu, ebp);
                g->ecx = ecx;
                g->esp = sp0 - 0x24u;
                cow_cdecl(g, COW_IMG(0x102704e0u), 2, ebp, t21);
                t22 = g->ecx;
                if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
                {
                    ecx = t22;
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_8_f = (double)rdf32(sp0 - 8u);
                }
                else
                {
    COW_AT(1026fd72)
                    ecx = rd32(COW_IMG(0x1099aedcu));
                    esi = rd32(COW_IMG(0x1099aedcu)) + 0x9cu;
                    edi = 0u;
L_1026fd7e: ;
    COW_AT(1026fd7e)
                    if (rd32(esi - 8u) == ebp)
                    {
    COW_AT(1026fd83)
                        t23 = rd32(esi + 0x20u);
                        wr32(sp0 - 0x28u, t23);
                        t24 = rd32(sp0 - 8u);
                        wr32(esi, t24);
                        g->esp = sp0 - 0x24u;
                        cow_thiscall_cdecl(g, COW_IMG(0x1028d840u), ecx, 1, t23);
                        t25 = g->ecx;
                        ecx = t25;
                    }
    COW_AT(1026fd95)
                    if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
                    {
                        esi = esi + 0xc0u;
                        edi = edi + 1u;
                        goto L_1026fd7e;
                    }
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_8_f = (double)rdf32(sp0 - 8u);
                }
            }
        }
    COW_AT(1026fda5)
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(COW_IMG(0x1099aeccu)))
        {
            ebx = ebx + 0xacu;
            ebp = ebp + 1u;
            goto L_1026fd3b;
        }
        eax = rd32(COW_IMG(0x1099aeccu));
L_1026fdb5: ;
    COW_AT(1026fdb5)
        t26 = rd32(COW_IMG(0x103b12b8u) + rd32(sp0 - 4u));
        wr32(sp0 - 0x28u, t26);
        g->eax = eax;
        g->ecx = rd32(sp0 - 4u);
        g->edx = t26;
        t27 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        t28 = cow_cdecl(g, COW_IMG(0x10271d90u), 1, t26);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
        ebx = rd32(sp0 - 0x10u);
        esi = 0x40u;
        edi = 1u;
    }
    COW_AT(1026fdd6)
    if ((int32_t)(esi + 1u) < 64)
    {
        esi = esi + 1u;
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1026fce4;
    }
    COW_AT(1026fde0)
    wr32(sp0 - 0x28u, 0xc1au);
    wr32(sp0 - 0x2cu, COW_IMG(0x103b17c0u));
    wr32(sp0 - 0x30u, ebx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b17c0u), 0xc1au);
    t31 = g->ecx;
    t32 = g->edx;
    if (edi != 0u)
    {
        edx = t32;
    }
    else
    {
        ecx = t31;
        edx = t32;
    COW_AT(1026fdf7)
        if ((int32_t)rd32(COW_IMG(0x1099aeccu)) <= 0) goto L_1026fe68;
        eax = rd32(COW_IMG(0x1099aeccu));
        ebx = rd32(COW_IMG(0x1099aed0u));
        ebp = 0u;
L_1026fe08: ;
    COW_AT(1026fe08)
        if ((int8_t)rd8(ebx) < 0)
        {
    COW_AT(1026fe0d)
            wr32(sp0 - 0x28u, 0x3f800000u);
            wr32(sp0 - 0x2cu, ebp);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x102704e0u), 2, ebp, 0x3f800000u);
            t33 = g->ecx;
            t34 = g->edx;
            if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
            {
                ecx = t33;
                edx = t34;
            }
            else
            {
                ecx = t33;
                edx = t34;
    COW_AT(1026fe26)
                eax = rd32(COW_IMG(0x1099aedcu));
                esi = rd32(COW_IMG(0x1099aedcu)) + 0x9cu;
                edi = 0u;
L_1026fe31: ;
    COW_AT(1026fe31)
                if (rd32(esi - 8u) == ebp)
                {
    COW_AT(1026fe36)
                    t35 = rd32(esi + 0x20u);
                    wr32(esi, 0x3f800000u);
                    wr32(sp0 - 0x28u, t35);
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    cow_thiscall_cdecl(g, COW_IMG(0x1028d840u), t35, 1, t35);
                    t36 = g->ecx;
                    t37 = g->edx;
                    ecx = t36;
                    edx = t37;
                }
    COW_AT(1026fe48)
                if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
                {
                    eax = rd32(COW_IMG(0x1099aed8u));
                    esi = esi + 0xc0u;
                    edi = edi + 1u;
                    goto L_1026fe31;
                }
            }
        }
    COW_AT(1026fe58)
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(COW_IMG(0x1099aeccu)))
        {
            eax = rd32(COW_IMG(0x1099aeccu));
            ebx = ebx + 0xacu;
            ebp = ebp + 1u;
            goto L_1026fe08;
        }
    }
L_1026fe68: ;
    COW_AT(1026fe68)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return rd32(sp0 + 4u);
L_1026fe74: ;
    COW_AT(1026fe74)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026fc80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026fcaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->esi = 1u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1026fce0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fce4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fd95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fda5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fdb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fdd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fde0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fdf7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1026fe74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026fc80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026fc80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
