/* f_0x1003b4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003b4e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003b4f0u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b4f0;
    case 0x1003b4f4u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b4f4;
    case 0x1003b4fdu: eax = g->eax; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b4fd;
    case 0x1003b4ffu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b4ff;
    case 0x1003b506u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b506;
    case 0x1003b50eu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b50e;
    case 0x1003b518u: eax = g->eax; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1003b518;
    default: break;
    }
#endif

    COW_AT(1003b4e0)
    if (rd32(rd32(COW_IMG(0x1047b978u)) + 8u) == 0u) goto L_1003b518;
    eax = rd32(rd32(COW_IMG(0x1047b978u)) + 8u);
    edx = 0u;
    esi = rd32(COW_IMG(0x1047b978u));
L_1003b4f0: ;
    COW_AT(1003b4f0)
    if (eax == self) goto L_1003b4ff;
    COW_AT(1003b4f4)
    if (rd32(eax + 8u) != 0u)
    {
        edx = eax;
        eax = rd32(eax + 8u);
        goto L_1003b4f0;
    }
    COW_AT(1003b4fd)
    return;
L_1003b4ff: ;
    COW_AT(1003b4ff)
    if (edx != 0u)
    {
        eax = rd32(self + 8u);
        goto L_1003b50e;
    }
    eax = rd32(self + 8u);
    COW_AT(1003b506)
    wr32(esi + 8u, eax);
    wr32(self + 8u, edx);
    return;
L_1003b50e: ;
    COW_AT(1003b50e)
    wr32(edx + 8u, eax);
    wr32(self + 8u, 0u);
L_1003b518: ;
    COW_AT(1003b518)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003b4e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003b4f0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b4f4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b4fdu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b4ffu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b506u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b50eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1003b518u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003b4e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003b4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
