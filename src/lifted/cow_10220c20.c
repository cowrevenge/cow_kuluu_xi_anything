/* f_0x10220c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10220c20(Guest* g)
{
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10220c2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10220c2e;
    case 0x10220c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10220c32;
    case 0x10220c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10220c37;
    case 0x10220c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c3e;
    case 0x10220c40u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10220c40;
    case 0x10220c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c44;
    case 0x10220c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c59;
    case 0x10220c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c61;
    case 0x10220c6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c6e;
    case 0x10220c74u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10220c74;
    default: break;
    }
#endif

    COW_AT(10220c20)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10220c2e)
    if (eax == 0u)
    {
    COW_AT(10220c40)
        x0 = cow_bits2f(0u);
    }
    else
    {
    COW_AT(10220c32)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    COW_AT(10220c37)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t6 = cow_stdcall(g, COW_IMG(0x1001e4d0u), 0);
        d7 = cow_take_float(g);
        eax = t6;
        x0 = d7;
    COW_AT(10220c3e)
    }
    COW_AT(10220c44)
    d8 = fr(g, (double)rdf32(COW_IMG(0x10331360u)) - x0);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
        x0 = d8;
        goto L_10220c61;
    }
    x0 = d8;
    COW_AT(10220c59)
    fpush(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032df90u))));
    return;
L_10220c61: ;
    COW_AT(10220c61)
    if (x0 < (double)rdf32(COW_IMG(0x1033bf74u)))
    {
    COW_AT(10220c6e)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032df90u)));
    }
    COW_AT(10220c74)
    fpush(g, x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10220c20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10220c2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10220c74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10220c20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10220c20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
