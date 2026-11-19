/* f_0x101eb880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101eb880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101eb898u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_101eb898;
    case 0x101eb89du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb89d;
    case 0x101eb8a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb8a7;
    case 0x101eb8c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb8c8;
    case 0x101eb8ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb8ec;
    case 0x101eb8feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb8fe;
    case 0x101eb911u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb911;
    case 0x101eb91eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb91e;
    case 0x101eb92au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb92a;
    case 0x101eb92fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb92f;
    case 0x101eb93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb93b;
    case 0x101eb940u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb940;
    case 0x101eb94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb94c;
    case 0x101eb951u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb951;
    case 0x101eb95du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb95d;
    case 0x101eb962u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101eb962;
    case 0x101eb96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_101eb96e;
    default: break;
    }
#endif

    COW_AT(101eb880)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(COW_IMG(0x10663684u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663684u));
    COW_AT(101eb898)
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t1 = cow_thiscall(g, COW_IMG(0x101eacf0u), ecx, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    COW_AT(101eb89d)
        if (eax == 0u)
        {
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
        }
        else
        {
            edi = eax;
    COW_AT(101eb8a7)
            wr32(sp0 - 0x28u, sp0 - 0x18u);
            t3 = rd32(self + 8u);
            wr16(sp0 - 0x18u, 0u);
            wr16(sp0 - 0x16u, 0u);
            wr16(sp0 - 0x14u, 0u);
            wr16(sp0 - 0x12u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t3, g->edx, 0, 1, sp0 - 0x18u);
            t4 = g->ecx;
            t5 = g->edx;
            ecx = t4;
            edx = t5;
    COW_AT(101eb8c8)
            t6 = rd16(sp0 - 0x16u);
            wr16(self + 0x5cu, rd16(sp0 - 0x18u));
            wr32(sp0 - 0x28u, edi + 0x10u);
            wr32(sp0 - 0x2cu, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x30u, self + 0x14u);
            wr16(self + 0x5eu, (uint16_t)t6);
            g->ebx = 0u;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x14u, COW_IMG(0x1034f7e0u), edi + 0x10u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    COW_AT(101eb8ec)
            t7 = rd32(edi + 0x2cu);
            wr32(sp0 - 0x34u, t7);
            t8 = rd32(edi + 0x28u);
            wr32(sp0 - 0x38u, t8);
            wr32(sp0 - 0x3cu, sp0 - 0x10u);
            g->ecx = sp0 - 0x10u;
            g->esp = sp0 - 0x30u;
            cow_cdecl(g, COW_IMG(0x10310981u), 3, sp0 - 0x10u, t8, t7);
            t9 = g->ecx;
            ecx = t9;
    COW_AT(101eb8fe)
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            wr32(sp0 - 0x44u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x48u, self + 0x28u);
            g->ebx = 0u;
            g->eax = self + 0x28u;
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x34u;
            t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x28u, COW_IMG(0x1034f7e0u), sp0 - 0x10u, sp0 - 0x10u, rd32(sp0 - 0x38u));
            t11 = g->edx;
            eax = t10;
            edx = t11;
    COW_AT(101eb911)
            if (rd8(edi + 0x80u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + 0x80u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(edi + 0x80u);
    COW_AT(101eb91e)
                wr32(sp0 - 0x28u, 3u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t12 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
    COW_AT(101eb92a)
            if (rd8(edi + 1u) != 0u)
            {
    COW_AT(101eb92f)
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
    COW_AT(101eb93b)
            if (rd8(edi) == 3u)
            {
    COW_AT(101eb940)
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t16 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
                t17 = g->edx;
                eax = t16;
                edx = t17;
            }
    COW_AT(101eb94c)
            if (rd8(edi) != 5u)
            {
    COW_AT(101eb951)
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t18 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
    COW_AT(101eb95d)
            if (rd8(edi) == 7u)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
            }
            else
            {
    COW_AT(101eb962)
                wr32(sp0 - 0x28u, 4u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t20 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
                t21 = g->edx;
                eax = t20;
                edx = t21;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_24 = rd32(sp0 - 0x24u);
            }
        }
    }
    COW_AT(101eb96e)
    g->ebx = loc_1c;
    g->esi = loc_20;
    g->edi = loc_24;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101eb880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101eb898u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101eb89du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101eb8a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101eb8c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101eb8ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101eb8feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb911u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb91eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb92au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb92fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb93bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb940u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb94cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb951u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb95du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb962u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101eb96eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101eb880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
