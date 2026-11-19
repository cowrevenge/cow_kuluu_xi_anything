/* f_0x100215c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100215c0(Guest* g)
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100215d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100215d0;
    case 0x100215d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_100215d9;
    case 0x100215e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_100215e7;
    case 0x100215f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_100215f3;
    case 0x100215fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_100215fd;
    case 0x1002160au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1002160a;
    case 0x10021614u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_10021614;
    case 0x10021621u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_10021621;
    case 0x1002162bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1002162b;
    case 0x10021635u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_10021635;
    case 0x1002163eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1002163e;
    case 0x1002164cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1002164c;
    case 0x10021662u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10021662;
    case 0x10021672u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10021672;
    default: break;
    }
#endif

    COW_AT(100215c0)
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100215d0)
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(100215d9)
    g->eax = rd32(arg2);
    g->edx = edx;
    t4 = rd32(arg2);
    g->esp = sp0 - 0x54u;
    t5 = cow_thiscall(g, rd32(t4 + 0x1c0u), arg2, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100215e7)
    wr32(sp0 - 0x58u, rd32(eax));
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t7 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, rd32(eax));
    eax = t7;
    COW_AT(100215f3)
    g->eax = eax;
    g->edx = rd32(arg2);
    t8 = rd32(arg2);
    g->esp = sp0 - 0x54u;
    t9 = cow_thiscall(g, rd32(t8 + 0x1c0u), arg2, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(100215fd)
    t11 = rd32(eax + 4u);
    wr32(sp0 - 0x58u, t11);
    g->eax = t11;
    g->esp = sp0 - 0x54u;
    t12 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t11);
    eax = t12;
    COW_AT(1002160a)
    g->eax = eax;
    g->edx = rd32(arg2);
    t13 = rd32(arg2);
    g->esp = sp0 - 0x54u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1c0u), arg2, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(10021614)
    t16 = rd32(eax + 8u);
    wr32(sp0 - 0x58u, t16);
    g->eax = t16;
    g->esp = sp0 - 0x54u;
    t17 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t16);
    eax = t17;
    COW_AT(10021621)
    g->eax = eax;
    g->edx = rd32(arg2);
    t18 = rd32(arg2);
    g->esp = sp0 - 0x54u;
    t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), arg2, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1002162b)
    wr32(sp0 - 0x58u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t21 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, eax);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(10021635)
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t23 = g->ecx;
    t24 = g->edx;
    ecx = t23;
    edx = t24;
    COW_AT(1002163e)
    wr32(sp0 - 0x58u, self + 0x44u);
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t25 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, self + 0x44u);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(1002164c)
    wr32(sp0 - 0x58u, sp0 - 0x4cu);
    wr32(sp0 - 0x5cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t27 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, arg1, sp0 - 0x4cu);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(10021662)
    wr32(arg1 + 0xcu, 0x3f800000u);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t29 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t29;
    COW_AT(10021672)
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100215c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100215d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100215d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100215e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100215f3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100215fdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1002160au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10021614u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10021621u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1002162bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10021635u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1002163eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1002164cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10021662u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x10021672u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100215c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100215c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
