/* f_0x10225960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10225960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022596au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022596a;
    case 0x10225973u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10225973;
    case 0x1022598au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022598a;
    case 0x10225998u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10225998;
    case 0x102259a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102259a1;
    case 0x102259a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102259a3;
    case 0x102259a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102259a6;
    case 0x102259f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102259f1;
    case 0x10225a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10225a12;
    default: break;
    }
#endif

    COW_AT(10225960)
    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x64u);
    COW_AT(1022596a)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    COW_AT(10225973)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x1000u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x64u, t4);
    if (rd32(self + 0x68u) != 0u)
    {
        eax = rd32(self + 0x68u);
        edx = t6;
    }
    else
    {
        eax = rd32(self + 0x68u);
        ecx = t5;
        edx = t6;
    COW_AT(1022598a)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x68u);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
    COW_AT(102259a1)
            eax = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
    COW_AT(10225998)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    COW_AT(102259a3)
        wr32(self + 0x68u, eax);
    }
    COW_AT(102259a6)
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(self + 0x68u);
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x101c8290u), t11, 1, 0x20u);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t14, 1, 1, 0x23u);
    t16 = g->edx;
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x101c8380u), rd32(self + 0x68u), 1, t15);
    t17 = g->edx;
    t18 = rd32(self + 0x64u);
    g->eax = t18;
    g->edx = t17;
    t19 = rd32(COW_IMG(0x10662dccu));
    t20 = cow_thiscall(g, COW_IMG(0x101c4740u), t19, 4, 0x60u, t18, 0x1000u, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x70u, 0u);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (t20 & 0xffffff00u) | (uint8_t)arg1;
        ecx = t21;
        edx = t22;
    }
    else
    {
        eax = (t20 & 0xffffff00u) | (uint8_t)arg1;
        edx = t22;
    COW_AT(102259f1)
        wr8(COW_IMG(0x1066716eu), 0u);
        wr32(COW_IMG(0x10666eacu), 0u);
        wr32(COW_IMG(0x10666eb0u), 0u);
        wr32(COW_IMG(0x10666eb4u), 0u);
        wr32(COW_IMG(0x10666eb8u), 0u);
        ecx = 0u;
    }
    COW_AT(10225a12)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t23 = cow_stdcall(g, COW_IMG(0x10225340u), 0);
    t24 = rd16(COW_IMG(0x10666eacu) + rd8(COW_IMG(0x1066716eu)) * 2u);
    cow_thiscall(g, COW_IMG(0x102256f0u), self, 2, t24, (uint8_t)t23);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10225960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022596au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10225973u:
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
    case 0x1022598au:
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
    case 0x10225998u:
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
    case 0x102259a1u:
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
    case 0x102259a3u:
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
    case 0x102259a6u:
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
    case 0x102259f1u:
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
    case 0x10225a12u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10225960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10225960(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
