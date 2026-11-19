/* f_0x10178900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10178900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10178914u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10178914;
    case 0x10178927u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10178927;
    case 0x10178938u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10178938;
    case 0x1017894du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1017894d;
    case 0x10178962u: ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10178962;
    case 0x1017896au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1017896a;
    case 0x10178970u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10178970;
    case 0x101789a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789a2;
    case 0x101789a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789a6;
    case 0x101789a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789a8;
    case 0x101789b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789b9;
    case 0x101789beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789be;
    case 0x101789c6u: ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789c6;
    case 0x101789dcu: ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789dc;
    case 0x101789e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101789e3;
    case 0x10178a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10178a14;
    default: break;
    }
#endif

    COW_AT(10178900)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)arg1 <= 0)
    {
        eax = in_eax;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
    COW_AT(10178914)
        wr32(self + 0x38u, 1u);
        if (rd32(self + 0xd8u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(10178927)
            wr32(sp0 - 0x20u, 1u);
            g->esp = sp0 - 0x1cu;
            cow_fastcall(g, COW_IMG(0x10178ac0u), self, in_edx, 1, 1u);
            t1 = g->edx;
            wr32(self + 0x17cu, 0xffffffffu);
            edx = t1;
        }
    COW_AT(10178938)
        wr32(sp0 - 0x20u, arg1);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t2 = cow_thiscall(g, COW_IMG(0x101779b0u), self, 2, sp0 - 0x10u, arg1);
        t3 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            edx = t3;
    COW_AT(1017894d)
            wr32(self + 0x48u, arg1);
            wr32(self + 0x54u, 1u);
            if ((int32_t)arg1 >= 700) goto L_1017896a;
    COW_AT(10178962)
            if ((int32_t)arg1 < 600)
            {
                eax = arg1 + 0x64u;
                goto L_10178970;
            }
L_1017896a: ;
    COW_AT(1017896a)
            eax = arg1 + 0x144f7u;
L_10178970: ;
    COW_AT(10178970)
            wr32(sp0 - 0x20u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t4 = cow_stdcall(g, COW_IMG(0x10178dd0u), 1, eax);
            t5 = g->edx;
            wr32(sp0 - 0x20u, t4);
            wr32(sp0 - 0x24u, sp0 + 4u);
            t6 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, t4);
            wr32(sp0 - 0x20u, t4);
            wr32(sp0 - 0x24u, sp0 + 4u);
            g->edx = sp0 + 4u;
            t7 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 4u, t4);
            t8 = g->edx;
            if (rd32(t7) == 0u)
            {
                edx = t8;
    COW_AT(101789a6)
                eax = 0u;
            }
            else
            {
                eax = rd32(t7);
                edx = t8;
    COW_AT(101789a2)
                eax = rd32(eax);
            }
    COW_AT(101789a8)
            wr32(self + 0x12cu, eax);
            wr32(self + 0x54u, 0u);
            if (rd32(self + 0x12cu) == 0u)
            {
                ecx = rd32(self + 0x12cu);
            }
            else
            {
                ecx = rd32(self + 0x12cu);
    COW_AT(101789b9)
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_call_regs(g, COW_IMG(0x10071e90u), eax, ecx, g->edx, 1, 0);
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
            }
    COW_AT(101789be)
            if (arg2 != 0u)
            {
    COW_AT(101789dc)
                wr8(COW_IMG(0x10376ee8u), 1u);
                eax = arg2;
            }
            else
            {
    COW_AT(101789c6)
                t11 = (arg2 & 0xffff0000u) | rd16(self + 0x48u);
                wr32(sp0 - 0x20u, t11);
                wr32(sp0 - 0x24u, 1u);
                g->eax = t11;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t12 = cow_cdecl(g, COW_IMG(0x100fc680u), 2, 1u, t11);
                t13 = g->edx;
                wr8(COW_IMG(0x10376ee8u), (uint8_t)t12);
                eax = t12;
                edx = t13;
            }
    COW_AT(101789e3)
            t14 = rd32(self + 0x48u);
            wr32(self + 0x17cu, t14);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t15 = cow_thiscall(g, COW_IMG(0x1017a630u), self, 0);
            wr32(sp0 - 0x20u, self + 0xd8u);
            t16 = rd32(self + 0x12cu);
            wr32(sp0 - 0x24u, t16);
            g->edx = t16;
            t17 = cow_thiscall(g, COW_IMG(0x10186d30u), self, 2, t16, self + 0xd8u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x20u, 0x30317665u);
            g->ecx = t18;
            g->edx = t19;
            t20 = cow_cdecl(g, COW_IMG(0x101889c0u), 1, 0x30317665u);
            t21 = g->ecx;
            t22 = g->edx;
            wr32(self + 0x50u, t20);
            t23 = cow_call_regs(g, COW_IMG(0x100852d0u), g->eax, g->ecx, t22, 1, 0);
            eax = t23;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    COW_AT(10178a14)
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10178900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10178914u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10178927u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10178938u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1017894du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10178962u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg1 + 0x64u;
        g->ebp = self + 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1017896au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10178970u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101789a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789dcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2;
        g->ebp = self + 0xd8u;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101789e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0xd8u;
        (void)sp0;
        return 1;
    }
    case 0x10178a14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10178900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10178900(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
