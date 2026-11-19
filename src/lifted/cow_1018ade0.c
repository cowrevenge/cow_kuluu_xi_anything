/* f_0x1018ade0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018ade0(Guest* g)
{
    double d21;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018adefu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1018adef;
    case 0x1018adf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018adf4;
    case 0x1018adfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018adfe;
    case 0x1018ae09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae09;
    case 0x1018ae14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae14;
    case 0x1018ae1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae1b;
    case 0x1018ae32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae32;
    case 0x1018ae47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae47;
    case 0x1018ae68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae68;
    case 0x1018ae6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018ae6f;
    case 0x1018aea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1018aea9;
    default: break;
    }
#endif

    COW_AT(1018ade0)
    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(1018adef)
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1018ade0u), in_eax, ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(1018adf4)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
    COW_AT(1018ae14)
        if (rd32(self + 8u) != 0u)
        {
            edi = rd32(self + 8u);
    COW_AT(1018ae1b)
            g->ebx = self + 0x14u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x1018abf0u), edi, 0);
            t7 = g->ecx;
            t8 = g->edx;
            g->edx = t8;
            t9 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
            t10 = g->edx;
            wr32(self + 8u, 0u);
            eax = t9;
            edx = t10;
        }
    }
    else
    {
        eax = rd32(self + 0x14u);
    COW_AT(1018adfe)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_call_regs(g, COW_IMG(0x1018c290u), eax, self + 0x14u, g->edx, 1, 0);
        t3 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
    COW_AT(1018ae09)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x14u, 1, 0u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    COW_AT(1018ae32)
    wr32(self + 0x1cu, 0x3f800000u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1018a340u), self, 0);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
    COW_AT(1018ae47)
        t11 = rd32(self + 0x18u);
        t12 = t11 - rd32(self + 0x14u);
        t13 = rd32(self + 0x14u);
        wrf32(self + 0x1cu, (float)fr(g, (double)(int32_t)t12 / (double)(int32_t)t11));
        if (rd32(ecx + 0x20u) != 0u)
        {
            eax = rd32(ecx + 0x20u);
            edx = t13;
    COW_AT(1018ae68)
            if (rd32(self + 0x20u) != 0u)
            {
                ecx = rd32(self + 0x20u);
    COW_AT(1018ae6f)
                g->esp = sp0 - 0x14u;
                t14 = cow_call_regs(g, COW_IMG(0x1018aeb0u), eax, self, edx, 0, 2, eax, ecx);
                t15 = rd32(self + 0x1cu);
                t16 = rd32(rd32(self + 8u) + 0x20u);
                t17 = rd32(self + 0x20u);
                g->eax = t17;
                g->edx = t16;
                t18 = cow_thiscall(g, COW_IMG(0x10189490u), t14, 3, t17, t16, t15);
                t19 = g->edx;
                cow_thiscall(g, COW_IMG(0x1018ada0u), self, 0);
                t20 = rd32(self + 8u);
                d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x1cu));
                wr32(self + 0x20u, t14);
                wrf32(t20 + 0x1cu, (float)d21);
            }
        }
    }
    COW_AT(1018aea9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018ade0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018adefu:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1018adf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018adfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018ae6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1018aea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ade0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1018ade0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
