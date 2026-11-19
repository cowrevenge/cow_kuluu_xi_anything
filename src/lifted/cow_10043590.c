/* f_0x10043590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043590(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100435a5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435a5;
    case 0x100435a9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435a9;
    case 0x100435b1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435b1;
    case 0x100435bdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435bd;
    case 0x100435c7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435c7;
    case 0x100435e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100435e2;
    case 0x10043616u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10043616;
    case 0x100436f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_100436f4;
    default: break;
    }
#endif

    COW_AT(10043590)
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x104u);
    COW_AT(100435a5)
        if (eax == 0u)
        {
    COW_AT(100435b1)
            esi = 0u;
            loc_8 = 0u;
        }
        else
        {
    COW_AT(100435a9)
            esi = rd32(eax);
            loc_8 = rd32(eax);
        }
    COW_AT(100435bd)
        if (rd32(self + 0x1bcu) != 0u)
        {
            eax = rd32(self + 0x1bcu);
            edx = in_edx;
        }
        else
        {
    COW_AT(100435c7)
            g->esp = sp0 - 0x10u;
            t1 = cow_call_regs(g, COW_IMG(0x1003f8a0u), self + 0x1a8u, esi, in_edx, 0, 2, self + 0x194u, self + 0x1a8u);
            t2 = g->edx;
            wr32(self + 0x1bcu, t1);
            eax = t1;
            edx = t2;
        }
    COW_AT(100435e2)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t4 = (uint32_t)(int16_t)rd16(esi + 0x34u);
        t5 = rd32(self + 0x1bcu);
        g->eax = t4;
        g->edx = self + 0xa0u;
        t6 = cow_stdcall(g, COW_IMG(0x10042d00u), 4, t5, t4, self + 0xa0u, 0u);
        t7 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            edx = t7;
    COW_AT(10043616)
            t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t9 = rd32(COW_IMG(0x1047cf7cu));
            t10 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(t9 + 0xa90u, t8);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x100746a0u), t10, 0);
            t11 = g->edx;
            d12 = (double)rdf32(self + 0x1c0u);
            wrf32(t10 + 0x34u, (float)d12);
            wrf32(t10 + 0x30u, (float)d12);
            t13 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t14 = rd32(COW_IMG(0x1047cf7cu));
            t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(t14 + 0xa90u, t13);
            g->eax = t14;
            t16 = cow_thiscall(g, COW_IMG(0x1006a4a0u), rd32(COW_IMG(0x1047bfa8u)), 1, t15);
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t17 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t18 = cow_thiscall(g, rd32(t17 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t10, t10, t15);
            t19 = g->edx;
            g->edx = t19;
            cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t10);
            t20 = g->edx;
            t21 = rd32(self + 0x1bcu);
            cow_call_regs(g, COW_IMG(0x1003f440u), t21, loc_8, t20, 0, 6, self, COW_IMG(0x1047bc0cu), self + 0x194u, self + 0x1a8u, t21, 1u);
            wr32(self + 0x1bcu, 0u);
            esi = self + 0x194u;
            edi = self + 0x1a8u;
            ecx = 5u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t22 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t23 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t23 + 0xa90u, t22);
            wr32(t22 * 4u + t23 + 0xa10u, t15);
            t24 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t25 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t25 + 0xa90u, t24);
            wr32(t24 * 4u + t25 + 0xa10u, t10);
            eax = t25;
            edx = t15;
        }
    }
    COW_AT(100436f4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10043590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100435a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100435a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100435b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100435bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100435c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100435e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10043616u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x1c0u;
        (void)sp0;
        return 1;
    }
    case 0x100436f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10043590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10043590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
