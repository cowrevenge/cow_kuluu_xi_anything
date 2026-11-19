/* f_0x1026ffa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026ffa0(Guest* g)
{
    double d11;
    double d12;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026ffd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_1026ffd6;
    case 0x1026ffdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; loc_30 = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_1026ffdf;
    case 0x1026ffedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_ebp = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_1026ffed;
    case 0x10270002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10270002;
    case 0x10270038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10270038;
    case 0x10270048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10270048;
    case 0x1027004du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027004d;
    case 0x10270060u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10270060;
    case 0x10270066u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10270066;
    case 0x1027006cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027006c;
    case 0x10270074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10270074;
    case 0x10270075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10270075;
    default: break;
    }
#endif

    COW_AT(1026ffa0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, arg2);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1028d9c0u), 1, arg2);
    if (rd32(rd32(COW_IMG(0x1099aed0u)) + rd32(sp0 + 4u) * 0xacu + 0xa8u) != 0u)
    {
        ebx = rd32(rd32(COW_IMG(0x1099aed0u)) + rd32(sp0 + 4u) * 0xacu + 0xa8u);
        goto L_1026ffdf;
    }
    eax = rd32(sp0 + 4u) * 0x15u;
    COW_AT(1026ffd6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_1026ffdf: ;
    COW_AT(1026ffdf)
    wr32(sp0 - 0x30u, in_ebp);
    if ((int32_t)rd32(ebx + 0x58u) <= 0)
    {
        edi = in_edi;
        loc_28 = in_ebx;
        loc_2c = in_esi;
        loc_30 = in_ebp;
    }
    else
    {
    COW_AT(1026ffed)
        wr32(sp0 - 0x34u, in_edi);
        t1 = sp0 - 0x20u - arg2;
        wr32(sp0 + 4u, t1);
        t2 = sp0 - 0x10u - arg2;
        wr32(sp0 - 0x24u, t2);
        ebp = 0u;
        loc_28 = in_ebx;
        loc_2c = in_esi;
        loc_30 = in_ebp;
        loc_34 = in_edi;
        loc_24 = t2;
L_10270002: ;
    COW_AT(10270002)
        t3 = rd32(ebp * 4u + rd32(ebx + 0x4cu)) + 0x14u;
        wr32(sp0 - 0x38u, t3);
        t4 = rd32(ebp * 4u + rd32(ebx + 0x50u));
        wr32(sp0 - 0x3cu, t4);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->edx = t3;
        t5 = rd32(ebp * 4u + rd32(ebx + 0x4cu));
        g->esp = sp0 - 0x34u;
        t6 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x20u, t4, t3);
        t7 = g->edx;
        wr32(sp0 - 0x44u, t5 + 0x20u);
        wr32(sp0 - 0x48u, t4);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        t8 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x10u, t4, t5 + 0x20u);
        eax = t8;
        ecx = arg2;
        esi = 3u;
L_10270038: ;
    COW_AT(10270038)
        d9 = (double)rdf32(ecx + rd32(sp0 + 4u));
        if (!(d9 < (double)rdf32(ecx)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(ecx), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(ecx), 0u);
            edx = rd32(sp0 + 4u);
    COW_AT(10270048)
            t10 = rd32(ecx + edx);
            wr32(ecx, t10);
        }
    COW_AT(1027004d)
        d11 = (double)rdf32(ecx + rd32(sp0 - 0x24u));
        d12 = (double)rdf32(ecx + 0xcu);
        if ((cow_fsw(g, d11, d12, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d11, d12, 0u) & 0x4100u;
        }
        else
        {
            edx = rd32(sp0 - 0x24u);
    COW_AT(10270060)
            t13 = rd32(ecx + edx);
            wr32(ecx + 0xcu, t13);
            eax = t13;
        }
    COW_AT(10270066)
        if (esi != 1u)
        {
            ecx = ecx + 4u;
            esi = esi - 1u;
            goto L_10270038;
        }
    COW_AT(1027006c)
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x58u))
        {
            ebp = ebp + 1u;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_24 = rd32(sp0 - 0x24u);
            goto L_10270002;
        }
    COW_AT(10270074)
        edi = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(10270075)
    g->ebx = loc_28;
    g->esi = loc_2c;
    g->edi = edi;
    g->ebp = loc_30;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026ffa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026ffd6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1026ffdfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026ffedu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10270002u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10270038u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10270048u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1027004du:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10270060u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10270066u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1027006cu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10270074u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10270075u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ffa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026ffa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
