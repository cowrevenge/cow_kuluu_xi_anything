/* f_0x100160c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100160c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100160d0u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100160d0;
    case 0x100160d2u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100160d2;
    case 0x10016137u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10016137;
    case 0x1001613bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1001613b;
    case 0x10016142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10016142;
    default: break;
    }
#endif

    COW_AT(100160c0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) < 3)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
    COW_AT(100160d0)
        eax = 0u;
    }
    COW_AT(100160d2)
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, 0xf003fu);
    wr32(sp0 - 0x1cu, 0u);
    t1 = rd32(COW_IMG(0x10350598u) + eax * 4u);
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, 0x80000002u);
    wr32(sp0 + 4u, 0u);
    g->eax = t1;
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032901cu)), 5, 0x80000002u, t1, 0u, 0xf003fu, sp0 + 4u);   /* advapi32.dll!RegOpenKeyExA */
    if (t2 != 0u)
    {
        eax = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t2;
    COW_AT(100160fd)
        wr32(sp0 - 4u, eax);
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, COW_IMG(0x1034f498u));
        t3 = rd32(sp0 + 4u);
        wr32(sp0 - 0x28u, t3);
        wr32(sp0 - 8u, 4u);
        g->eax = sp0 + 4u;
        g->ecx = sp0 - 4u;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        t4 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, t3, COW_IMG(0x1034f498u), 0u, sp0 - 4u, sp0 + 4u, sp0 - 8u);   /* advapi32.dll!RegQueryValueExA */
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 != 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            ebx = in_ebx & 0xffffff00u;
            esi = t3;
        }
        else
        {
            ecx = t5;
            edx = t6;
            esi = t3;
    COW_AT(1001612e)
            eax = rd32(sp0 + 4u);
            ebx = (in_ebx & 0xffffff00u) | rd32(sp0 + 4u) != 0u;
        }
    COW_AT(10016137)
        if (esi != 0u)
        {
    COW_AT(1001613b)
            wr32(sp0 - 0x14u, esi);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t7 = cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, esi);   /* advapi32.dll!RegCloseKey */
            eax = t7;
        }
    }
    COW_AT(10016142)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100160c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100160d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100160d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x10016137u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001613bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10016142u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100160fd: holds in_ebx, which no location here says
     1001612e: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100160c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100160c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
