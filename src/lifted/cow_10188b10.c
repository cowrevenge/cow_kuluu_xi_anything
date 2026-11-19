/* f_0x10188b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10188b10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10188b23u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b23;
    case 0x10188b2au: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b2a;
    case 0x10188b31u: eax = g->eax; edx = g->edx; goto E_10188b31;
    case 0x10188b39u: eax = g->eax; edx = g->edx; goto E_10188b39;
    case 0x10188b3cu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b3c;
    case 0x10188b43u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b43;
    case 0x10188b4cu: eax = g->eax; edx = g->edx; goto E_10188b4c;
    case 0x10188b4fu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b4f;
    case 0x10188b59u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10188b59;
    case 0x10188b5du: eax = g->eax; edx = g->edx; goto E_10188b5d;
    case 0x10188b60u: eax = g->eax; edx = g->edx; goto E_10188b60;
    default: break;
    }
#endif

    COW_AT(10188b10)
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) == 0xb6u)
    {
        edx = rd32(COW_IMG(0x1065cb04u));
        goto L_10188b3c;
    }
    eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u);
    edx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(10188b23)
    if (eax == 0x84u) goto L_10188b3c;
    COW_AT(10188b2a)
    if (rd32(self + 0x18u) == 0u) goto L_10188b39;
    eax = rd32(self + 0x18u);
    COW_AT(10188b31)
    g->edx = edx;
    return ~rd8(eax) & 1u;
L_10188b39: ;
    COW_AT(10188b39)
    g->edx = edx;
    return 0u;
L_10188b3c: ;
    COW_AT(10188b3c)
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_10188b60;
    }
    eax = rd32(self + 0x18u);
    COW_AT(10188b43)
    if (rd8(eax) & 1u) goto L_10188b4f;
    COW_AT(10188b4c)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10188b4f: ;
    COW_AT(10188b4f)
    if (rd32(edx + 0x1c4u) == 0u)
    {
        eax = rd32(edx + 0x1c4u);
        goto L_10188b60;
    }
    eax = rd32(edx + 0x1c4u);
    COW_AT(10188b59)
    if (self != eax) goto L_10188b60;
    COW_AT(10188b5d)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10188b60: ;
    COW_AT(10188b60)
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10188b10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10188b23u:
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
    case 0x10188b2au:
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
    case 0x10188b31u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10188b39u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10188b3cu:
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
    case 0x10188b43u:
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
    case 0x10188b4cu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10188b4fu:
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
    case 0x10188b59u:
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
    case 0x10188b5du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10188b60u:
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
void cow_adapter_10188b10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10188b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
