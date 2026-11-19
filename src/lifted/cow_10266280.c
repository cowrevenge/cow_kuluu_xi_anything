/* f_0x10266280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10266280(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026628fu: esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1026628f;
    case 0x10266298u: ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10266298;
    case 0x102662b1u: ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102662b1;
    case 0x102662c9u: ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102662c9;
    case 0x102662cbu: ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102662cb;
    default: break;
    }
#endif

    COW_AT(10266280)
    if (arg1 <= arg2) goto L_102662b1;
    COW_AT(1026628f)
    if (arg1 >= arg2 + arg3) goto L_102662b1;
    COW_AT(10266298)
    g->df = 1;
    esi = arg2 + arg3 - 1u;
    edi = arg1 + arg3 - 1u;
    ecx = arg3;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->df = 0;
    g->edx = arg3;
    return arg1;
L_102662b1: ;
    COW_AT(102662b1)
    g->df = 0;
    esi = arg2;
    edi = arg1;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((ecx | (arg3 & 3u)) != 0u)
    {
        ecx = ecx | (arg3 & 3u);
    COW_AT(102662c9)
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    }
    COW_AT(102662cb)
    g->edx = arg3 & 3u;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10266280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026628fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t esi;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10266298u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102662b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102662c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->edx = arg3 & 3u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102662cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->edx = arg3 & 3u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10266280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10266280(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
