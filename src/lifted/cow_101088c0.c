/* f_0x101088c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101088c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101088ceu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101088ce;
    case 0x101088d2u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_101088d2;
    case 0x101088dbu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_101088db;
    case 0x101088e1u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_101088e1;
    case 0x10108904u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108904;
    case 0x1010890du: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1010890d;
    case 0x10108913u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108913;
    case 0x10108918u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108918;
    case 0x10108921u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108921;
    case 0x10108927u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108927;
    case 0x10108934u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108934;
    case 0x10108938u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108938;
    case 0x10108951u: eax = g->eax; edx = g->edx; goto E_10108951;
    case 0x10108952u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_10108952;
    case 0x10108956u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108956;
    case 0x1010895du: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1010895d;
    case 0x10108980u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10108980;
    case 0x10108989u: eax = g->eax; edx = g->edx; goto E_10108989;
    default: break;
    }
#endif

    COW_AT(101088c0)
    if (rd16(self + 8u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10108952;
    }
    eax = rd32(self + 4u);
    COW_AT(101088ce)
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_1010890d;
    }
    edx = in_edx;
L_101088d2: ;
    COW_AT(101088d2)
    if (rd16(eax + 8u) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(eax + 8u);
        goto L_1010890d;
    }
    edx = (edx & 0xffff0000u) | rd16(eax + 8u);
    COW_AT(101088db)
    if (rd16(self + 8u) <= (uint16_t)edx) goto L_1010890d;
    COW_AT(101088e1)
    wr32(rd32(self) + 4u, eax);
    wr32(rd32(self + 4u), rd32(self));
    t1 = rd32(self + 4u);
    wr32(self, t1);
    t2 = rd32(t1 + 4u);
    t3 = rd32(self);
    wr32(self + 4u, t2);
    wr32(t3 + 4u, self);
    if (rd32(self + 4u) == 0u)
    {
        edx = t3;
        goto L_1010890d;
    }
    eax = rd32(self + 4u);
    edx = t3;
    COW_AT(10108904)
    wr32(eax, self);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_101088d2;
    }
L_1010890d: ;
    COW_AT(1010890d)
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        goto L_10108989;
    }
    eax = rd32(self);
L_10108913: ;
    COW_AT(10108913)
    if (rd32(eax) == 0u) goto L_10108989;
    COW_AT(10108918)
    if (rd16(eax + 8u) == 0u) goto L_10108927;
    edx = (edx & 0xffff0000u) | rd16(eax + 8u);
    COW_AT(10108921)
    if (rd16(self + 8u) >= (uint16_t)edx) goto L_10108989;
L_10108927: ;
    COW_AT(10108927)
    t4 = rd32(self + 4u);
    wr32(eax + 4u, t4);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
    COW_AT(10108934)
        wr32(eax, rd32(self));
    }
    COW_AT(10108938)
    t5 = rd32(self);
    wr32(self + 4u, t5);
    t6 = rd32(t5);
    wr32(self, t6);
    wr32(t6 + 4u, self);
    wr32(rd32(self + 4u), self);
    if (rd32(self) != 0u)
    {
        eax = rd32(self);
        edx = t5;
        goto L_10108913;
    }
    eax = rd32(self);
    edx = t5;
    COW_AT(10108951)
    g->edx = edx;
    return eax;
L_10108952: ;
    COW_AT(10108952)
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_10108989;
    }
    edx = in_edx;
L_10108956: ;
    COW_AT(10108956)
    if (rd16(eax + 8u) == 0u) goto L_10108989;
    COW_AT(1010895d)
    wr32(rd32(self) + 4u, eax);
    wr32(rd32(self + 4u), rd32(self));
    t7 = rd32(self + 4u);
    wr32(self, t7);
    t8 = rd32(t7 + 4u);
    t9 = rd32(self);
    wr32(self + 4u, t8);
    wr32(t9 + 4u, self);
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = t9;
        goto L_10108989;
    }
    eax = rd32(self + 4u);
    edx = t9;
    COW_AT(10108980)
    wr32(eax, self);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_10108956;
    }
    eax = rd32(self + 4u);
L_10108989: ;
    COW_AT(10108989)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101088c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101088ceu:
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
    case 0x101088d2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101088dbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101088e1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108904u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1010890du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108913u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108918u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108921u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108927u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108934u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108938u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108951u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108952u:
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
    case 0x10108956u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1010895du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108980u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10108989u:
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
void cow_adapter_101088c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101088c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
