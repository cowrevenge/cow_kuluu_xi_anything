/* f_0x100cec90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100cec90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cecb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100cecb8;
    case 0x100cecc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100cecc3;
    case 0x100cecd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cecd2;
    case 0x100cecdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cecdc;
    case 0x100cece7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cece7;
    case 0x100cecedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ceced;
    case 0x100cecf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cecf0;
    case 0x100cecf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cecf8;
    case 0x100cecfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cecfc;
    case 0x100cecfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cecfe;
    case 0x100ced15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced15;
    case 0x100ced29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced29;
    case 0x100ced38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced38;
    case 0x100ced40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced40;
    case 0x100ced44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced44;
    case 0x100ced46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced46;
    case 0x100ced4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ced4a;
    case 0x100ced5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ced5c;
    case 0x100ced6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ced6b;
    case 0x100ced7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ced7c;
    case 0x100ced80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100ced80;
    case 0x100ced99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ced99;
    case 0x100ceda6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100ceda6;
    case 0x100cedaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cedae;
    case 0x100cedb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cedb4;
    case 0x100cedcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cedcd;
    case 0x100cede1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100cede1;
    default: break;
    }
#endif

    COW_AT(100cec90)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x20u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = self;
        edi = 0u;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
        eax = t1;
        edx = t2;
        ebp = t1;
    COW_AT(100cecb8)
        if (rd32(ebp) == 0u)
        {
            esi = self;
            edi = 0u;
            loc_28 = in_ebx;
            loc_2c = in_ebp;
            loc_30 = in_esi;
            loc_34 = in_edi;
            goto L_100ced80;
        }
        ecx = rd32(ebp);
        edi = 0u;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
        loc_20 = self;
L_100cecc3: ;
    COW_AT(100cecc3)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t3 = cow_thiscall(g, COW_IMG(0x10029e70u), ecx, 0);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            edx = t4;
            esi = t3;
    COW_AT(100cecd2)
            if (rd32(esi) == 0u)
            {
                eax = rd32(esi);
                goto L_100ced6b;
            }
            eax = rd32(esi);
L_100cecdc: ;
    COW_AT(100cecdc)
            t5 = rd32(eax + 8u);
            wr32(sp0 - 0x24u, t5);
            if (rd32(eax + 8u) != 0u)
            {
                eax = t5;
    COW_AT(100cece7)
                if (rd32(eax) != 0u)
                {
                    eax = rd32(eax);
    COW_AT(100ceced)
                    eax = rd32(eax + 0x28u);
L_100cecf0: ;
    COW_AT(100cecf0)
                    wr32(sp0 - 0x24u, eax);
                    if (eax == 0u)
                    {
                        loc_24 = eax;
    COW_AT(100cecfc)
                        eax = 0u;
                    }
                    else
                    {
                        loc_24 = eax;
    COW_AT(100cecf8)
                        eax = rd32(eax);
                    }
    COW_AT(100cecfe)
                    wr32(sp0 - 0x38u, 0xffffffffu);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, arg1);
                    wr32(sp0 - 0x44u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, 0u, 0xffffffffu);
                    t6 = g->edx;
                    if (rd32(sp0 - 8u) == 0u)
                    {
                        edx = t6;
                        goto L_100ced29;
                    }
                    eax = rd32(sp0 - 8u);
                    edx = t6;
L_100ced15: ;
    COW_AT(100ced15)
                    wr32(sp0 - 0x38u, 0u);
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
                    t7 = g->edx;
                    if (rd32(sp0 - 8u) != 0u)
                    {
                        eax = rd32(sp0 - 8u);
                        edx = t7;
                        edi = edi + 1u;
                        goto L_100ced15;
                    }
                    edx = t7;
                    edi = edi + 1u;
L_100ced29: ;
    COW_AT(100ced29)
                    g->eax = rd32(sp0 - 0x24u);
                    g->edx = edx;
                    t8 = rd32(sp0 - 0x24u);
                    g->esp = sp0 - 0x34u;
                    t9 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(t8), 0);
                    t10 = g->edx;
                    if (t9 == 0u)
                    {
                        edx = t10;
                        goto L_100ced5c;
                    }
                    eax = t9;
                    edx = t10;
    COW_AT(100ced38)
                    if (rd32(sp0 - 0x24u) == 0u)
                    {
    COW_AT(100ced44)
                        ecx = 0u;
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0x24u);
    COW_AT(100ced40)
                        ecx = rd32(ecx);
                    }
    COW_AT(100ced46)
                    if (eax == ecx) goto L_100ced5c;
    COW_AT(100ced4a)
                    t11 = rd32(COW_IMG(0x1047d130u)) - 1u;
                    t12 = rd32(eax + 0x14u);
                    wr32(COW_IMG(0x1047d130u), t11);
                    eax = t12;
                    goto L_100cecf0;
                }
            }
L_100ced5c: ;
    COW_AT(100ced5c)
            if (rd32(rd32(esi) + 4u) != 0u)
            {
                eax = rd32(rd32(esi) + 4u);
                esi = rd32(esi) + 4u;
                goto L_100cecdc;
            }
            eax = rd32(rd32(esi) + 4u);
        }
L_100ced6b: ;
    COW_AT(100ced6b)
        if (rd32(rd32(ebp) + 4u) != 0u)
        {
            ecx = rd32(rd32(ebp) + 4u);
            ebp = rd32(ebp) + 4u;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_100cecc3;
        }
    COW_AT(100ced7c)
        esi = rd32(sp0 - 0x20u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
    }
L_100ced80: ;
    COW_AT(100ced80)
    wr32(sp0 - 0x38u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(esi);
    t13 = rd32(esi);
    g->esp = sp0 - 0x34u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1e0u), esi, 1, sp0 + 4u);
    t15 = g->edx;
    wr32(sp0 - 0x24u, rd32(t14));
    if (rd32(t14) == 0u)
    {
        edx = t15;
    }
    else
    {
        eax = rd32(t14);
        edx = t15;
        loc_24 = rd32(t14);
    COW_AT(100ced99)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t16 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x24u, 0);
        t17 = g->edx;
        if ((uint8_t)t16 == 0u)
        {
            edx = t17;
        }
        else
        {
            edx = t17;
    COW_AT(100ceda6)
            if (rd32(sp0 - 0x24u) != 0u)
            {
                eax = rd32(sp0 - 0x24u);
    COW_AT(100cedae)
                if (rd32(eax) != 0u)
                {
                    ecx = rd32(eax);
    COW_AT(100cedb4)
                    wr32(sp0 - 0x38u, 0xffffffffu);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, arg1);
                    wr32(sp0 - 0x44u, ecx);
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, ecx, arg1, 0u, 0xffffffffu);
                    t18 = g->edx;
                    if (rd32(sp0 - 8u) == 0u)
                    {
                        edx = t18;
                        goto L_100cede1;
                    }
                    eax = rd32(sp0 - 8u);
                    edx = t18;
L_100cedcd: ;
    COW_AT(100cedcd)
                    wr32(sp0 - 0x38u, 0u);
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
                    t19 = g->edx;
                    if (rd32(sp0 - 8u) != 0u)
                    {
                        eax = rd32(sp0 - 8u);
                        edx = t19;
                        edi = edi + 1u;
                        goto L_100cedcd;
                    }
                    edx = t19;
                    edi = edi + 1u;
                }
            }
        }
    }
L_100cede1: ;
    COW_AT(100cede1)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cec90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cecb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x20u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cecc3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecdcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cece7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecf0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecfcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100cecfeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced7cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ced99u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ceda6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cedaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cedb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cedcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100cede1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cec90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cec90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
