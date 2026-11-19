/* f_0x102e4669 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4669(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e469au: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102e469a;
    case 0x102e46a7u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46a7;
    case 0x102e46b5u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46b5;
    case 0x102e46bbu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46bb;
    case 0x102e46d0u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46d0;
    case 0x102e46d6u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46d6;
    case 0x102e46ecu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46ec;
    case 0x102e46f2u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e46f2;
    case 0x102e4706u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e4706;
    case 0x102e470cu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e470c;
    case 0x102e471fu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_102e471f;
    case 0x102e4723u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102e4723;
    case 0x102e472au: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102e472a;
    case 0x102e473bu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102e473b;
    default: break;
    }
#endif

    COW_AT(102e4669)
    if (rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2 >= rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2)
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
        edi = rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
    COW_AT(102e469a)
        x0 = (double)rdf32(COW_IMG(0x10346180u));
L_102e46a7: ;
    COW_AT(102e46a7)
        t1 = rd32(eax) & 0x3ffu;
        t2 = rd32(eax);
        wr32(sp0 + 0xcu, t1);
        if ((int32_t)(t2 & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
    COW_AT(102e46b5)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102e46bb)
        wrf32(edx, (float)fr(g, x1 * x0));
        t3 = rd32(eax) >> 0xau & 0x3ffu;
        t4 = rd32(eax);
        wr32(sp0 + 0xcu, t3);
        if ((int32_t)(t4 >> 0xau & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
    COW_AT(102e46d0)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102e46d6)
        wrf32(edx + 4u, (float)fr(g, x1 * x0));
        t5 = rd32(eax) >> 0x14u & 0x3ffu;
        t6 = rd32(eax);
        wr32(sp0 + 0xcu, t5);
        if ((int32_t)(t6 >> 0x14u & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
    COW_AT(102e46ec)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102e46f2)
        wrf32(edx + 8u, (float)fr(g, x1 * x0));
        t7 = rd32(eax) >> 0x1eu;
        t8 = rd32(eax);
        wr32(sp0 + 0xcu, t7);
        if ((int32_t)(t8 >> 0x1eu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
    COW_AT(102e4706)
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102e470c)
        d9 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032a84cu)));
        wrf32(edx + 0xcu, (float)d9);
        if (eax + 4u < edi)
        {
            eax = eax + 4u;
            edx = edx + 0x10u;
            goto L_102e46a7;
        }
        eax = eax + 4u;
        edx = edx + 0x10u;
    COW_AT(102e471f)
    }
    COW_AT(102e4723)
    if (rd32(self + 0x10u) != 0u)
    {
    COW_AT(102e472a)
        t10 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t10;
        t11 = rd32(self + 0x1058u);
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t10);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    COW_AT(102e473b)
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
int cow_entry_fix_102e4669(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e469au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e46a7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46b5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46bbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46d0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46d6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46ecu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e46f2u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e4706u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e470cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0x3ffu;
        (void)sp0;
        return 1;
    }
    case 0x102e471fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e4723u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e472au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e473bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
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
void cow_adapter_102e4669(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e4669(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
