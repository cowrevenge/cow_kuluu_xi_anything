/* f_0x10216500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10216500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10216509u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10216509;
    case 0x10216513u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10216513;
    case 0x1021651du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1021651d;
    case 0x10216522u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10216522;
    default: break;
    }
#endif

    COW_AT(10216500)
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10216509)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(10216513)
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
    COW_AT(1021651d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(10216522)
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1020a600u), t5, 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    g->eax = rd32(COW_IMG(0x10664494u));
    g->ecx = t6;
    g->edx = t7;
    t9 = rd32(COW_IMG(0x10664494u));
    t10 = cow_cdecl(g, COW_IMG(0x10107b40u), 1, t8);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, t8, 1u);
    t14 = g->edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1020a9d0u), t13, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t8, 1u, 0u, 0u, 0u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10216500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10216509u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10216513u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1021651du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10216522u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10216500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10216500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
