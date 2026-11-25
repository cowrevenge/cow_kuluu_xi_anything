/* f_0x10022190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10022190(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002219cu: eax = g->eax; edx = g->edx; goto E_1002219c;
    case 0x100221a3u: eax = g->eax; edx = g->edx; goto E_100221a3;
    case 0x100221acu: eax = g->eax; edx = g->edx; goto E_100221ac;
    case 0x100221bcu: eax = g->eax; edx = g->edx; goto E_100221bc;
    case 0x100221c5u: eax = g->eax; edx = g->edx; goto E_100221c5;
    default: break;
    }
#endif

    COW_AT(10022190)
    t1 = rd32(sp0 + 4u);
    g->edx = self;
    t2 = cow_call_regs(g, COW_IMG(0x10022170u), t1, g->ecx, g->edx, 1, 1, t1);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1002219c)
    if ((int32_t)eax >= 0) goto L_100221ac;
    COW_AT(100221a3)
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_100221ac: ;
    COW_AT(100221ac)
    t4 = (uint32_t)(int8_t)rd8(eax + edx + 0xau);
    t5 = rd8(eax + edx + 0xau);
    wr32(sp0 + 4u, t4);
    if ((uint32_t)(int8_t)t5 != 0xffu) goto L_100221c5;
    COW_AT(100221bc)
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_100221c5: ;
    COW_AT(100221c5)
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a18u))));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10022190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002219cu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100221a3u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100221acu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100221bcu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100221c5u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
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
void cow_adapter_10022190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10022190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
