/* f_0x10082d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10082d70(Guest* g)
{
    double d13;
    double d4;
    double d5;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10082da2u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10082da2;
    case 0x10082da4u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082da4;
    case 0x10082db2u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082db2;
    case 0x10082dc7u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082dc7;
    case 0x10082dd1u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082dd1;
    case 0x10082de6u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082de6;
    case 0x10082df2u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082df2;
    case 0x10082e07u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e07;
    case 0x10082e0eu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e0e;
    case 0x10082e13u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e13;
    case 0x10082e19u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e19;
    case 0x10082e23u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e23;
    case 0x10082e26u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e26;
    case 0x10082e3au: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e3a;
    case 0x10082e44u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e44;
    case 0x10082e59u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e59;
    case 0x10082e65u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e65;
    case 0x10082e6fu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e6f;
    case 0x10082e84u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e84;
    case 0x10082e90u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082e90;
    case 0x10082ea5u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082ea5;
    case 0x10082eb0u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_10082eb0;
    case 0x10082eb2u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10082eb2;
    default: break;
    }
#endif

    COW_AT(10082d70)
    wr32(COW_IMG(0x1048a350u), 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0x3cu);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x1047d578u));
    wr32(COW_IMG(0x1048a354u), t1);
    wr32(COW_IMG(0x1048a324u), 0u);
    if (t3 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t3;
    COW_AT(10082da2)
L_10082da4: ;
    COW_AT(10082da4)
        if (rd32(esi + 0x54u) == 0u)
        {
            ebp = esi + 0x54u;
            goto L_10082e65;
        }
        ebp = esi + 0x54u;
        edi = rd32(esi + 0x54u);
    COW_AT(10082db2)
        d4 = (double)rdf32(edi + 0x8cu);
        d5 = (double)rdf32(esi + 0x8cu);
        if (!(d4 < d5))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
            goto L_10082e3a;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
    COW_AT(10082dc7)
        if (rd16(edi + 0xb2u) == 0u)
        {
    COW_AT(10082dd1)
            d6 = (double)rdf32(edi + 0x8cu);
            if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(10082df2)
                t7 = rd8(edi + 0xb2u);
                wr8(edi + 0xb0u, 1u);
                wr8(edi + 0xb2u, (uint8_t)(t7 | 1u));
            }
            else
            {
    COW_AT(10082de6)
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(edi) + 0x288u), edi, 0);
            }
        }
    COW_AT(10082e07)
        if (rd32(esi + 0x58u) == 0u)
        {
    COW_AT(10082e13)
            wr32(COW_IMG(0x1047d578u), edi);
        }
        else
        {
            eax = rd32(esi + 0x58u);
    COW_AT(10082e0e)
            wr32(eax + 0x54u, edi);
        }
    COW_AT(10082e19)
        if (rd32(edi + 0x54u) == 0u)
        {
            eax = rd32(edi + 0x54u);
            ebp = edi + 0x54u;
        }
        else
        {
            eax = rd32(edi + 0x54u);
            ebp = edi + 0x54u;
    COW_AT(10082e23)
            wr32(eax + 0x58u, esi);
        }
    COW_AT(10082e26)
        t8 = rd32(esi + 0x58u);
        wr32(esi + 0x54u, rd32(ebp));
        wr32(edi + 0x58u, t8);
        wr32(esi + 0x58u, edi);
        wr32(ebp, esi);
        edx = t8;
L_10082ea5: ;
    COW_AT(10082ea5)
        if (rd32(ebp) != 0u)
        {
            esi = rd32(ebp);
            goto L_10082da4;
        }
    COW_AT(10082eb0)
    }
    COW_AT(10082eb2)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10082e3a: ;
    COW_AT(10082e3a)
    if (rd16(esi + 0xb2u) != 0u) goto L_10082ea5;
    COW_AT(10082e44)
    d9 = (double)rdf32(esi + 0x8cu);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_10082e90;
    }
    COW_AT(10082e59)
    g->eax = rd32(esi);
    g->edx = edx;
    t10 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x288u), esi, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_10082ea5;
L_10082e65: ;
    COW_AT(10082e65)
    if (rd16(esi + 0xb2u) != 0u) goto L_10082ea5;
    COW_AT(10082e6f)
    d13 = (double)rdf32(esi + 0x8cu);
    if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_10082e90;
    }
    eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(10082e84)
    g->eax = eax;
    g->edx = rd32(esi);
    t14 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, rd32(t14 + 0x288u), esi, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    goto L_10082ea5;
L_10082e90: ;
    COW_AT(10082e90)
    t17 = rd8(esi + 0xb2u);
    wr8(esi + 0xb0u, 1u);
    wr8(esi + 0xb2u, (uint8_t)(t17 | 1u));
    eax = ((eax | t17) & 0xffffff00u) | (uint8_t)(t17 | 1u);
    goto L_10082ea5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10082d70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10082da2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10082da4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082db2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082dd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082de6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082df2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082e90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082ea5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082eb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10082eb2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10082d70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10082d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
