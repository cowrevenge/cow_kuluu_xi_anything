/* f_0x10106eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10106eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10106ec9u: eax = g->eax; ecx = g->ecx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106ec9;
    case 0x10106ee1u: eax = g->eax; ecx = g->ecx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106ee1;
    case 0x10106ee8u: eax = g->eax; ecx = g->ecx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106ee8;
    case 0x10106ef9u: eax = g->eax; ecx = g->ecx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106ef9;
    case 0x10106f12u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106f12;
    case 0x10106f14u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10106f14;
    default: break;
    }
#endif

    COW_AT(10106eb0)
    t1 = rd32(sp0 + 4u);
    wr8(arg3 + 4u, 0u);
    if (t1 >= arg2)
    {
        eax = t1;
        goto L_10106f14;
    }
    eax = t1;
    COW_AT(10106ec9)
    wr32(arg3, rd32(eax));
    t2 = rd16(eax + 4u);
    wr16(sp0 + 4u, (uint16_t)t2);
    if ((uint16_t)t2 <= 0x80u)
    {
        esi = eax + 6u;
    }
    else
    {
        esi = eax + 6u;
    COW_AT(10106ee1)
        wr16(sp0 + 4u, 0x80u);
    }
    COW_AT(10106ee8)
    if (esi + (uint16_t)rd32(sp0 + 4u) > arg2) goto L_10106f12;
    eax = esi + (uint16_t)rd32(sp0 + 4u);
    ecx = (uint16_t)rd32(sp0 + 4u);
    COW_AT(10106ef9)
    t3 = ecx;
    edi = arg3 + 4u;
    ecx = t3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3 + 0x83u, 0u);
    return eax;
L_10106f12: ;
    COW_AT(10106f12)
    eax = esi;
L_10106f14: ;
    COW_AT(10106f14)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10106eb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10106ec9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edx = arg3;
        g->ebx = arg2;
        g->edi = arg3 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x10106ee1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edx = arg3;
        g->ebx = arg2;
        g->edi = arg3 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x10106ee8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edx = arg3;
        g->ebx = arg2;
        g->edi = arg3 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x10106ef9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edx = arg3;
        g->edi = arg3 + 4u;
        (void)sp0;
        return 1;
    }
    case 0x10106f12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10106f14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10106eb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10106eb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
