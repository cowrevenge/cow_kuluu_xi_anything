/* f_0x1014f700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014f700(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014f70bu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014f70b;
    case 0x1014f712u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014f712;
    case 0x1014f71cu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014f71c;
    case 0x1014f734u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014f734;
    case 0x1014f73eu: eax = g->eax; self = g->ecx; goto E_1014f73e;
    case 0x1014f741u: eax = g->eax; self = g->ecx; goto E_1014f741;
    case 0x1014f744u: eax = g->eax; self = g->ecx; goto E_1014f744;
    case 0x1014f74du: eax = g->eax; goto E_1014f74d;
    case 0x1014f750u: eax = g->eax; self = g->ecx; goto E_1014f750;
    case 0x1014f75cu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1014f75c;
    default: break;
    }
#endif

    COW_AT(1014f700)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u) goto L_1014f74d;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(1014f70b)
    t1 = rd32(COW_IMG(0x1014f764u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1014f712u: goto L_1014f712;
    case 0x1014f734u: goto L_1014f734;
    case 0x1014f744u: goto L_1014f744;
    default: rt_fatal(g, COW_IMG(0x1014f70bu), "switch");
    }
    return;
L_1014f712: ;
    COW_AT(1014f712)
    if (rd8(self + 0x164u) == 0u) goto L_1014f74d;
    eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
    COW_AT(1014f71c)
    t2 = rd32(self + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x10118db0u), eax, t2, in_edx);
    return;
L_1014f734: ;
    COW_AT(1014f734)
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        goto L_1014f75c;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    COW_AT(1014f73e)
    if (eax == 1u) goto L_1014f750;
    eax = eax - 1u;
    COW_AT(1014f741)
    if (eax != 1u) goto L_1014f74d;
L_1014f744: ;
    COW_AT(1014f744)
    wr16(self + 0x15cu, 4u);
L_1014f74d: ;
    COW_AT(1014f74d)
    return;
L_1014f750: ;
    COW_AT(1014f750)
    wr16(self + 0x15cu, 3u);
    return;
L_1014f75c: ;
    COW_AT(1014f75c)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014f700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014f70bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f712u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f71cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f734u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f73eu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f741u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f744u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f74du:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f750u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014f75cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1014f700(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
