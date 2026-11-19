/* f_0x1030b481 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1030b481(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1030b498u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_1030b498;
    case 0x1030b4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_1030b4b3;
    default: break;
    }
#endif

    COW_AT(1030b481)
    t1 = rd32(arg5 + 0x28u);
    g->eax = arg5;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, rd32(arg5 + 0x20u), self, 3, t1, 1u, 0x1cu);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(1030b498)
        wr32(eax, 0u);
        wr8(eax + 0x10u, (uint8_t)arg1);
        wr8(eax + 0x11u, (uint8_t)arg2);
        wr32(eax + 0x14u, arg3);
        wr32(eax + 0x18u, arg4);
    }
    COW_AT(1030b4b3)
    g->ebp = in_ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1030b481(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1030b498u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b4b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1030b481(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1030b481(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
