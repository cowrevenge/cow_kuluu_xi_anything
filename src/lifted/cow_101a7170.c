/* f_0x101a7170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a7170(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a719au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a719a;
    case 0x101a71a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a71a1;
    case 0x101a71afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a71af;
    case 0x101a71c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a71c3;
    case 0x101a71ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a71ce;
    default: break;
    }
#endif

    COW_AT(101a7170)
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
    COW_AT(101a717b)
        if (rd32(self + 0x1cu) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x1cu);
    COW_AT(101a7182)
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t1 = cow_call_regs(g, COW_IMG(0x101c5e50u), (in_eax & 0xffffff00u) | (uint8_t)arg1, ecx, g->edx, 0, 1, 0u);
            t2 = g->ecx;
            t3 = g->edx;
            t4 = (t1 & 0xffffff00u) | rd8(self + 0x20u);
            t5 = (t2 & 0xffffff00u) | rd8(self + 0x24u);
            g->eax = t4;
            g->edx = t3;
            t6 = cow_thiscall(g, COW_IMG(0x101a8990u), rd32(self + 0x14u), 3, t5, t4, t1);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    COW_AT(101a719a)
    if (rd32(self + 0x1cu) != 0u)
    {
        ecx = rd32(self + 0x1cu);
    COW_AT(101a71a1)
        g->eax = eax;
        g->edx = rd32(ecx);
        t8 = rd32(ecx);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8 + 0xcu), ecx, 1, 1u);
        t10 = g->edx;
        wr32(self + 0x1cu, 0u);
        eax = t9;
        edx = t10;
    }
    COW_AT(101a71af)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
    COW_AT(101a71c3)
        wr8(eax + 0x61u, 1u);
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    COW_AT(101a71ce)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a7170(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a719au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a71a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a71afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a71c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a71ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101a717b: holds in_eax, which no location here says
     101a7182: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7170(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101a7170(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
