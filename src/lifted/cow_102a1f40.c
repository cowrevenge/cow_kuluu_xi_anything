/* f_0x102a1f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a1f40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a1f51u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f51;
    case 0x102a1f58u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f58;
    case 0x102a1f61u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f61;
    case 0x102a1f6au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f6a;
    case 0x102a1f73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f73;
    case 0x102a1f7cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f7c;
    case 0x102a1f85u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f85;
    case 0x102a1f8eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102a1f8e;
    case 0x102a1f97u: eax = g->eax; ecx = g->ecx; goto E_102a1f97;
    default: break;
    }
#endif

    COW_AT(102a1f40)
    if (rd32(rd32(sp0 + 4u)) - 0xf0001u > 6u) goto L_102a1f97;
    eax = rd32(sp0 + 4u);
    ecx = rd32(rd32(sp0 + 4u)) - 0xf0001u;
    COW_AT(102a1f51)
    t1 = rd32(COW_IMG(0x102a1f98u) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x102a1f58u: goto L_102a1f58;
    case 0x102a1f61u: goto L_102a1f61;
    case 0x102a1f6au: goto L_102a1f6a;
    case 0x102a1f73u: goto L_102a1f73;
    case 0x102a1f7cu: goto L_102a1f7c;
    case 0x102a1f85u: goto L_102a1f85;
    case 0x102a1f8eu: goto L_102a1f8e;
    default: rt_fatal(g, COW_IMG(0x102a1f51u), "switch");
    }
    return;
L_102a1f58: ;
    COW_AT(102a1f58)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102990b0u), eax, ecx, in_edx);
    return;
L_102a1f61: ;
    COW_AT(102a1f61)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102993d0u), eax, ecx, in_edx);
    return;
L_102a1f6a: ;
    COW_AT(102a1f6a)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10290b80u), eax, ecx, in_edx);
    return;
L_102a1f73: ;
    COW_AT(102a1f73)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10299a90u), eax, ecx, in_edx);
    return;
L_102a1f7c: ;
    COW_AT(102a1f7c)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102997c0u), eax, ecx, in_edx);
    return;
L_102a1f85: ;
    COW_AT(102a1f85)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102b2cc0u), eax, ecx, in_edx);
    return;
L_102a1f8e: ;
    COW_AT(102a1f8e)
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x102b2b40u), eax, ecx, in_edx);
    return;
L_102a1f97: ;
    COW_AT(102a1f97)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a1f40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a1f51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102a1f97u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1f40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a1f40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
