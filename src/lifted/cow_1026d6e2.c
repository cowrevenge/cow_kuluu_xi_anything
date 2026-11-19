/* f_0x1026d6e2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026d6e2(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026d6efu: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1026d6ef;
    case 0x1026d70du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d70d;
    case 0x1026d71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d71b;
    case 0x1026d720u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1026d720;
    case 0x1026d722u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1026d722;
    default: break;
    }
#endif

    COW_AT(1026d6e2)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(arg1 + 0x1cu) != 0u)
    {
    COW_AT(1026d720)
        eax = 0u;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
    }
    else
    {
    COW_AT(1026d6ef)
        t1 = rd32(arg1 + 0x1006cu);
        wr32(sp0 - 0xcu, t1);
        g->eax = arg1;
        g->ecx = arg1;
        g->edx = t1;
        g->esp = sp0 - 8u;
        t2 = cow_stdcall(g, rd32(COW_IMG(0x10329424u)), 1, t1);   /* ws2_32.dll!WSASetEvent */
        t3 = g->ecx;
        t4 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = t3;
        g->edx = t4;
        t5 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 != 1u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
    COW_AT(1026d71b)
            eax = 0xffffffffu;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            ecx = t6;
            edx = t7;
    COW_AT(1026d70d)
            wr32(arg1 + 0x1cu, 1u);
            eax = 0u;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(1026d722)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->esi = loc_8;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026d6e2(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026d6efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d70du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d71bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d720u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d722u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d6e2(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026d6e2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
