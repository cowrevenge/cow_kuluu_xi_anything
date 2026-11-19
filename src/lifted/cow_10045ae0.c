/* f_0x10045ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10045ae0(Guest* g)
{
    double d12;
    double d15;
    double d18;
    double d5;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10045aecu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045aec;
    case 0x10045af0u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045af0;
    case 0x10045afau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045afa;
    case 0x10045affu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045aff;
    case 0x10045b03u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b03;
    case 0x10045b07u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b07;
    case 0x10045b09u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b09;
    case 0x10045b12u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b12;
    case 0x10045b16u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b16;
    case 0x10045b30u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b30;
    case 0x10045b42u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b42;
    case 0x10045b7cu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b7c;
    case 0x10045b97u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045b97;
    case 0x10045ba2u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045ba2;
    case 0x10045ba9u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10045ba9;
    default: break;
    }
#endif

    COW_AT(10045ae0)
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x10044ae0u), self, in_edx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_10045af0;
    }
    eax = t1;
    edx = t2;
    COW_AT(10045aec)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10045af0: ;
    COW_AT(10045af0)
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        goto L_10045b16;
    }
    eax = rd32(self + 0xfcu);
    COW_AT(10045afa)
    if (rd32(eax) == 0u) goto L_10045b16;
    COW_AT(10045aff)
    if (eax == 0u)
    {
    COW_AT(10045b07)
        eax = 0u;
    }
    else
    {
    COW_AT(10045b03)
        eax = rd32(eax);
    }
    COW_AT(10045b09)
    if (!(rd8(eax + 0xdcu) & 1u)) goto L_10045b16;
    COW_AT(10045b12)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10045b16: ;
    COW_AT(10045b16)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10044f10u), self, 0);
    t4 = g->edx;
    d5 = (double)rdf32(self + 0x138u);
    if (d5 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t4;
    }
    else
    {
        eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t4;
    COW_AT(10045b30)
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_call_regs(g, COW_IMG(0x10044d40u), eax, self, g->edx, 1, 0);
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t9 = g->edx;
        if (t8 == 0u)
        {
    COW_AT(10045b7c)
            t19 = rd32(self + 0x54u);
            wr32(self + 0x90u, t19);
            t20 = rd32(self + 0x58u);
            wr32(self + 0x94u, t20);
            t21 = rd32(self + 0x5cu);
            wr32(self + 0x98u, t21);
            eax = t19;
            edx = t21;
        }
        else
        {
            eax = t8;
            edx = t9;
    COW_AT(10045b42)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t10 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            t11 = g->edx;
            d12 = fr(g, (double)rdf32(self + 0x54u) * (double)rdf32(t10));
            wrf32(self + 0x90u, (float)d12);
            g->edx = t11;
            t13 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            t14 = g->edx;
            d15 = fr(g, (double)rdf32(t13 + 4u) * (double)rdf32(self + 0x58u));
            wrf32(self + 0x94u, (float)d15);
            g->edx = t14;
            t16 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            t17 = g->edx;
            d18 = fr(g, (double)rdf32(t16 + 8u) * (double)rdf32(self + 0x5cu));
            wrf32(self + 0x98u, (float)d18);
            eax = t16;
            edx = t17;
        }
    COW_AT(10045b97)
        g->edx = edx;
        g->esp = sp0 - 4u;
        t22 = cow_call_regs(g, COW_IMG(0x10045920u), eax, self, g->edx, 1, 0);
        t23 = g->edx;
        if ((uint8_t)t22 == 0u)
        {
            eax = t22;
            edx = t23;
        }
        else
        {
            eax = t22;
            edx = t23;
    COW_AT(10045ba2)
            g->edx = edx;
            g->esp = sp0 - 4u;
            t24 = cow_call_regs(g, COW_IMG(0x100458f0u), eax, self, g->edx, 1, 0);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
    COW_AT(10045ba9)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10045ae0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10045aecu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045af0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045afau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045affu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b03u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b07u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b09u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b12u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b16u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b30u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b42u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b7cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045b97u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045ba2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10045ba9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_10045ae0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10045ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
