/* f_0x102f1efc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f1efc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f1f05u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f1f05;
    case 0x102f1f0bu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f1f0b;
    case 0x102f1f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f1f19;
    case 0x102f1f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f1f30;
    case 0x102f1f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f1f33;
    default: break;
    }
#endif

    COW_AT(102f1efc)
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(102f1f05)
        if (arg2 == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(102f1f0b)
            g->eax = in_eax;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            COW_RET(0x102f1f19u);
            t1 = cow_thiscall_cdecl(g, COW_IMG(0x102f1ee1u), self, 3, arg1, arg2, arg3);
            t2 = g->ecx;
            t3 = g->edx;
            eax = t1;
            ecx = t2;
            edx = t3;
    COW_AT(102f1f19)
            g->edx = edx;
            g->esp = sp0 - 4u;
            COW_RET(0x102f1f30u);
            cow_cdecl(g, COW_IMG(0x102f1e01u), 4, arg1, arg2, cow_dlo(rdf64(COW_IMG(0x10343428u))), cow_dhi(rdf64(COW_IMG(0x10343428u))));
            t4 = g->edx;
            edx = t4;
    COW_AT(102f1f30)
        }
    }
    COW_AT(102f1f33)
    g->ebp = in_ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f1efc(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f1f05u:
    {
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1f0bu:
    {
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1f19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1f30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1f33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1efc(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f1efc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
