/* f_0x1018ef30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018ef30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018ef44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1018ef44;
    case 0x1018ef5au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1018ef5a;
    case 0x1018ef5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018ef5e;
    case 0x1018ef66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1018ef66;
    case 0x1018ef70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018ef70;
    case 0x1018ef76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018ef76;
    case 0x1018ef81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018ef81;
    case 0x1018ef8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018ef8e;
    case 0x1018efacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018efac;
    case 0x1018efb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018efb8;
    case 0x1018efd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1018efd9;
    case 0x1018eff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1018eff6;
    default: break;
    }
#endif

    COW_AT(1018ef30)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(1018ef44)
        wr8(eax + 0x85u, 0u);
        t1 = rd32(self + 8u);
        wr8(t1 + 0x69u, 0u);
        if (rd32(self + 0x2218u) == 0u)
        {
            eax = t1;
    COW_AT(1018ef66)
            g->eax = eax;
            g->edx = rd32(rd32(self + 0x221cu));
            t5 = rd32(rd32(self + 0x221cu));
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, rd32(t5), rd32(self + 0x221cu), 0);
            t7 = g->edx;
            eax = t6;
            edx = t7;
    COW_AT(1018ef70)
            ecx = rd32(self + 0x221cu);
        }
        else
        {
            eax = t1;
            ecx = rd32(self + 0x2218u);
    COW_AT(1018ef5a)
            g->eax = eax;
            g->edx = rd32(ecx);
            t2 = rd32(ecx);
            g->esp = sp0 - 0x14u;
            t3 = cow_thiscall(g, rd32(t2), ecx, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
    COW_AT(1018ef5e)
            ecx = rd32(self + 0x2218u);
        }
    COW_AT(1018ef76)
        wr32(self + 0x2208u, eax);
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0 - 0x14u;
        t9 = cow_thiscall(g, rd32(t8 + 4u), ecx, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    COW_AT(1018ef81)
        wr32(self + 0x220cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t11 = cow_thiscall(g, COW_IMG(0x1018fa00u), self, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    COW_AT(1018ef8e)
        t13 = rd32(self + 0x2208u);
        wr32(self + 0x2204u, 0u);
        t14 = rd32(self + 0x220cu);
        wr32(sp0 - 0x18u, t14);
        wr32(sp0 - 0x1cu, eax + t13);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t15 = cow_call_regs(g, COW_IMG(0x10119110u), eax + t13, rd32(self + 8u), g->edx, 0, 2, eax + t13, t14);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    COW_AT(1018efac)
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        g->ebx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t17 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 2u, 1u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    COW_AT(1018efb8)
        wr16(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        t19 = rd32(self + 8u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, t19, g->edx, 0, 1, sp0 - 0xcu);
    COW_AT(1018efd9)
        t20 = rd32(sp0 - 0xau);
        t21 = rd16(sp0 - 0xcu);
        t22 = rd32(sp0 - 6u);
        wr16(self + 0x2222u, (uint16_t)(t22 - t20));
        wr16(self + 0x2220u, (uint16_t)t21);
        eax = (t20 & 0xffff0000u) | t21;
        edx = t22 - t20;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(1018eff6)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018ef30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018ef44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018ef8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018efacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018efb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018efd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1018eff6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ef30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018ef30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
