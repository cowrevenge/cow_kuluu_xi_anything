/* f_0x102e8bf7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e8bf7(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e8c05u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x28u); goto E_102e8c05;
    case 0x102e8c0cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x28u); goto E_102e8c0c;
    case 0x102e8c19u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); in_edi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_102e8c19;
    case 0x102e8c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102e8c2d;
    case 0x102e8c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102e8c35;
    case 0x102e8c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102e8c3a;
    case 0x102e8c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102e8c45;
    case 0x102e8c5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_102e8c5c;
    case 0x102e8c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_102e8c61;
    case 0x102e8c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_4 = rd32(sp0 - 4u); goto E_102e8c62;
    default: break;
    }
#endif

    COW_AT(102e8bf7)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    if (arg2 != 0u)
    {
    COW_AT(102e8c0c)
        wr32(sp0 - 0x2cu, in_esi);
        if (rd32(arg1 + 0x460u) != 0u)
        {
            edx = in_edx;
            loc_4 = in_ebp;
            loc_28 = in_edi;
            loc_2c = in_esi;
            goto L_102e8c5c;
        }
    COW_AT(102e8c19)
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, arg2);
        g->edx = in_edx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(arg2) + 0x38u), sp0 - 0x24u, 3, arg2, 0u, sp0 - 0x24u);
        t1 = g->edx;
        if (rd32(sp0 - 0x24u) != rd32(arg1 + 0x10u))
        {
            edx = t1;
            loc_4 = in_ebp;
            loc_28 = in_edi;
            loc_2c = in_esi;
            goto L_102e8c5c;
        }
        edx = t1;
    COW_AT(102e8c2d)
        if (rd32(sp0 - 0xcu) != rd32(arg1 + 0xcu))
        {
            loc_4 = rd32(sp0 - 4u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            goto L_102e8c5c;
        }
        eax = rd32(arg1 + 0xcu);
    COW_AT(102e8c35)
        if (rd32(sp0 - 8u) != eax)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            goto L_102e8c5c;
        }
    COW_AT(102e8c3a)
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t2 = cow_fastcall(g, COW_IMG(0x102e8984u), arg1, edx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)t2 < 0)
        {
            eax = t2;
            edx = t4;
            loc_4 = rd32(sp0 - 4u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            ecx = t3;
            edx = t4;
    COW_AT(102e8c45)
            wr32(arg1 + 0x34u, arg2);
            wr32(sp0 - 0x30u, arg2);
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, rd32(rd32(arg2) + 4u), ecx, 1, arg2);
            t5 = g->edx;
            wr32(arg1 + 0x460u, 1u);
            eax = 0u;
            edx = t5;
            loc_4 = rd32(sp0 - 4u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
L_102e8c61: ;
    COW_AT(102e8c61)
        esi = loc_2c;
    }
    else
    {
    COW_AT(102e8c05)
        eax = 0x8876086cu;
        edx = in_edx;
        esi = in_esi;
        loc_4 = in_ebp;
        loc_28 = in_edi;
    }
    COW_AT(102e8c62)
    g->esi = esi;
    g->edi = loc_28;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e8c5c: ;
    COW_AT(102e8c5c)
    eax = 0x8876086cu;
    goto L_102e8c61;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e8bf7(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e8c05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e8c0cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102e8c19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        in_edi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102e8c2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e8c35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e8c3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e8c45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e8c5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e8c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e8c62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8bf7(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e8bf7(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
