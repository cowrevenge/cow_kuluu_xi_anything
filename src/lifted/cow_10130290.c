/* f_0x10130290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10130290(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013029au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013029a;
    case 0x101302a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302a6;
    case 0x101302b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302b5;
    case 0x101302c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302c2;
    case 0x101302cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302cf;
    case 0x101302dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302dc;
    case 0x101302e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302e9;
    case 0x101302f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101302f6;
    default: break;
    }
#endif

    COW_AT(10130290)
    if (rd32(COW_IMG(0x10578158u)) == 0u) goto L_101302f6;
    ecx = rd32(COW_IMG(0x10578158u));
    COW_AT(1013029a)
    if (rd32(sp0 + 4u) + 0x47u > 0x46u) goto L_101302f6;
    eax = rd32(sp0 + 4u) + 0x47u;
    COW_AT(101302a6)
    t1 = rd32(COW_IMG(0x101302fcu) + rd8(COW_IMG(0x10130314u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101302b5u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302b5;
    case 0x101302c2u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302c2;
    case 0x101302cfu: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302cf;
    case 0x101302dcu: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302dc;
    case 0x101302e9u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302e9;
    case 0x101302f6u: goto L_101302f6;
    default: rt_fatal(g, COW_IMG(0x101302aeu), "switch");
    }
    return;
L_101302b5: ;
    COW_AT(101302b5)
    wr32(sp0 + 4u, 0x86u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302c2: ;
    COW_AT(101302c2)
    wr32(sp0 + 4u, 0x87u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302cf: ;
    COW_AT(101302cf)
    wr32(sp0 + 4u, 0x88u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302dc: ;
    COW_AT(101302dc)
    wr32(sp0 + 4u, 0x89u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302e9: ;
    COW_AT(101302e9)
    wr32(sp0 + 4u, 0xb9u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302f6: ;
    COW_AT(101302f6)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10130290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013029au:
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
    case 0x101302a6u:
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
    case 0x101302b5u:
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
    case 0x101302c2u:
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
    case 0x101302cfu:
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
    case 0x101302dcu:
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
    case 0x101302e9u:
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
    case 0x101302f6u:
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
void cow_adapter_10130290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10130290(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
