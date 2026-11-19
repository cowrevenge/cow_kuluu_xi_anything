/* f_0x1031d0ac - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031d0ac(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031d0cau: ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1031d0ca;
    case 0x1031d0dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d0df;
    case 0x1031d0e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d0e4;
    case 0x1031d0eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d0ee;
    case 0x1031d100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1031d100;
    case 0x1031d102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1031d102;
    case 0x1031d133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d133;
    case 0x1031d13eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1031d13e;
    case 0x1031d145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d145;
    case 0x1031d14cu: in_edx = g->edx; esi = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1031d14c;
    case 0x1031d161u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_1031d161;
    default: break;
    }
#endif

    COW_AT(1031d0ac)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->df = 0;
    if ((rd32(arg1 + 4u) & 6u) != 0u)
    {
    COW_AT(1031d14c)
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x24u, 0xffffffffu);
        wr32(sp0 - 0x28u, arg2);
        g->ebp = arg2 + 0x10u;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x103165eau), 3, arg2, 0xffffffffu, sp0 - 4u);
        t14 = g->edx;
        eax = 1u;
        edx = t14;
        loc_4 = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
    COW_AT(1031d0ca)
        wr32(sp0 - 0xcu, arg1);
        wr32(sp0 - 8u, arg3);
        wr32(arg2 - 4u, sp0 - 0xcu);
        eax = sp0 - 0xcu;
        edx = in_edx;
        ebx = arg2;
        ebp = sp0 - 4u;
        esi = rd32(arg2 + 0xcu);
        edi = rd32(arg2 + 8u);
        loc_4 = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
L_1031d0df: ;
    COW_AT(1031d0df)
        if (esi == 0xffffffffu) goto L_1031d145;
    COW_AT(1031d0e4)
        if (rd32(edi + esi * 0xcu + 4u) == 0u) goto L_1031d133;
        ecx = esi * 3u;
    COW_AT(1031d0ee)
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 0x24u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall_cdecl(g, rd32(ecx * 4u + edi + 4u), ecx, 2, ebp, esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t3;
            ebx = rd32(rd32(sp0 - 0x24u) + 0xcu);
            ebp = rd32(sp0 - 0x24u);
            esi = rd32(sp0 - 0x20u);
            loc_4 = rd32(sp0 - 4u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            goto L_1031d133;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = rd32(rd32(sp0 - 0x24u) + 0xcu);
        esi = rd32(sp0 - 0x20u);
        sf = (int32_t)t1 < 0;
    COW_AT(1031d100)
        if (sf) goto L_1031d13e;
    COW_AT(1031d102)
        wr32(sp0 - 0x20u, ebx);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        t4 = rd32(ebx + 8u);
        g->esp = sp0 - 0x14u;
        t5 = cow_cdecl(g, COW_IMG(0x103165a8u), 3, ebx, sp0 - 4u, rd32(sp0 - 0x18u));
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 0x24u, ebx);
        g->ebp = ebx + 0x10u;
        g->edx = t7;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x103165eau), 2, ebx, esi);
        t8 = g->edx;
        wr32(sp0 - 0x20u, 1u);
        g->ebp = ebx + 0x10u;
        g->edx = t8;
        cow_call_regs(g, COW_IMG(0x1031667eu), rd32(esi * 0xcu + t4 + 8u), esi * 3u, g->edx, 0, 1, 1u);
        t9 = g->ecx;
        t10 = g->edx;
        t11 = rd32(t4 + t9 * 4u);
        wr32(ebx + 0xcu, t11);
        g->eax = t11;
        g->edx = t10;
        t12 = cow_thiscall(g, rd32(t4 + t9 * 4u + 8u), t9, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
        ebp = ebx + 0x10u;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
L_1031d133: ;
    COW_AT(1031d133)
        esi = rd32(esi * 0xcu + rd32(ebx + 8u));
        edi = rd32(ebx + 8u);
        goto L_1031d0df;
    }
L_1031d161: ;
    COW_AT(1031d161)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_1031d13e: ;
    COW_AT(1031d13e)
    eax = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    goto L_1031d161;
L_1031d145: ;
    COW_AT(1031d145)
    eax = 1u;
    goto L_1031d161;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031d0ac(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031d0cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d0dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d0e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d0eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d102u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d133u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d13eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d145u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d14cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031d161u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d0ac(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031d0ac(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
