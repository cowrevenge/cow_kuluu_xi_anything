/* f_0x1013a160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013a160(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013a16du: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a16d;
    case 0x1013a16fu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a16f;
    case 0x1013a173u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a173;
    case 0x1013a17eu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a17e;
    case 0x1013a186u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a186;
    case 0x1013a18cu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a18c;
    case 0x1013a18eu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a18e;
    case 0x1013a192u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1013a192;
    default: break;
    }
#endif

    COW_AT(1013a160)
    if ((int8_t)(rd8(self + 8u) + 1u) < 1)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)(rd8(self + 8u) + 1u);
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 8u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)(rd8(self + 8u) + 1u);
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 8u);
    COW_AT(1013a16d)
        eax = eax & 0xffffff00u;
    }
    COW_AT(1013a16f)
    if ((uint8_t)eax == (uint8_t)ebx)
    {
        edx = in_edx;
        goto L_1013a192;
    }
L_1013a173: ;
    COW_AT(1013a173)
    if (rd32(self + (uint32_t)(int8_t)eax * 4u + 0x1cu) != 0u)
    {
        edx = (uint32_t)(int8_t)eax;
        goto L_1013a192;
    }
    edx = (uint32_t)(int8_t)eax;
    COW_AT(1013a17e)
    if (rd32(edx * 4u + self + 0x20u) != 0u) goto L_1013a192;
    COW_AT(1013a186)
    if ((int8_t)((uint8_t)eax + 1u) < 1)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    COW_AT(1013a18c)
        eax = eax & 0xffffff00u;
    }
    COW_AT(1013a18e)
    if ((uint8_t)eax != (uint8_t)ebx) goto L_1013a173;
L_1013a192: ;
    COW_AT(1013a192)
    wr8(self + 8u, (uint8_t)eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1013a1a0u), eax, self, edx);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013a160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013a16du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a16fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a173u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a17eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a186u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a18cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a18eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013a192u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1013a160(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
