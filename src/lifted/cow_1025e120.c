/* f_0x1025e120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1025e120(Guest* g)
{
    double d11;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025e129u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e129;
    case 0x1025e142u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e142;
    case 0x1025e15bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e15b;
    case 0x1025e172u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e172;
    case 0x1025e179u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e179;
    case 0x1025e180u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025e180;
    default: break;
    }
#endif

    COW_AT(1025e120)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10123ee0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_1025e180;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1025e129)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 2, 0x3fu, 6u);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    if (d7 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1025e180;
    }
    eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t5;
    edx = t6;
    COW_AT(1025e142)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 2, 0x3fu, 7u);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    if (d11 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1025e180;
    }
    eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t9;
    edx = t10;
    COW_AT(1025e15b)
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3fu, 0xa9u, 4u, 0xffffffffu);
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        goto L_1025e179;
    }
    eax = t12;
    COW_AT(1025e172)
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return eax;
L_1025e179: ;
    COW_AT(1025e179)
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1025e180: ;
    COW_AT(1025e180)
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025e120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025e129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025e142u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025e15bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025e172u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025e179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025e180u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025e120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
