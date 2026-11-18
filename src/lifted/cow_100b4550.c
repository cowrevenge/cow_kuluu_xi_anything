/* f_0x100b4550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b4550(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b456bu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_100b456b;
    case 0x100b456eu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_100b456e;
    case 0x100b4571u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_100b4571;
    case 0x100b457bu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_100b457b;
    case 0x100b4585u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_100b4585;
    case 0x100b458eu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; goto E_100b458e;
    default: break;
    }
#endif

    COW_AT(100b4550)
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = rd32(self + 0x20u);
        goto L_100b4585;
    }
    eax = t1;
    edx = rd32(self + 0x20u);
    COW_AT(100b456b)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100b457b;
    }
    eax = eax - 1u;
    COW_AT(100b456e)
    if (eax != 1u) goto L_100b458e;
    eax = eax - 1u;
    COW_AT(100b4571)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100b4590u), self, 2, 1u, 0x12u);
    g->ebx = in_ebx;
    return;
L_100b457b: ;
    COW_AT(100b457b)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100b4590u), self, 2, 1u, 0x11u);
    g->ebx = in_ebx;
    return;
L_100b4585: ;
    COW_AT(100b4585)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100b4590u), self, 2, 1u, 0x10u);
L_100b458e: ;
    COW_AT(100b458e)
    g->ebx = in_ebx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b4550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b456bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b456eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b4571u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b457bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b4585u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b458eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b4550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b4550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
