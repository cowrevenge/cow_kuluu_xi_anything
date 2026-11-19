/* f_0x10064cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10064cd0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_61c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1576u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10064cffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_61c = rd32(sp0 - 0x61cu); in_esi = rd32(sp0 - 0x618u); in_ebx = rd32(sp0 - 0x614u); g->ebx = rd32(sp0 - 0x614u); g->esi = rd32(sp0 - 0x618u); goto E_10064cff;
    case 0x10064d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_61c = rd32(sp0 - 0x61cu); in_esi = rd32(sp0 - 0x618u); in_ebx = rd32(sp0 - 0x614u); g->ebx = rd32(sp0 - 0x614u); g->esi = rd32(sp0 - 0x618u); goto E_10064d23;
    case 0x10064d3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_61c = rd32(sp0 - 0x61cu); goto E_10064d3b;
    case 0x10064d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_61c = rd32(sp0 - 0x61cu); goto E_10064d3c;
    case 0x10064d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064d4e;
    case 0x10064d6bu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064d6b;
    case 0x10064d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064d7a;
    case 0x10064d89u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10064d89;
    case 0x10064d8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_61c = rd32(sp0 - 0x61cu); goto E_10064d8a;
    default: break;
    }
#endif

    COW_AT(10064cd0)
    wr32(sp0 - 0x614u, in_ebx);
    wr32(sp0 - 0x618u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x618u;
    t1 = cow_thiscall(g, COW_IMG(0x1006b7a0u), sp0 - 0x610u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x61cu, 0x1000u);
    wr32(sp0 - 0x620u, 1u);
    wr32(sp0 - 0x624u, arg1);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1006b7c0u), sp0 - 0x610u, 3, arg1, 1u, 0x1000u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_10064d23;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10064cff)
    wr32(sp0 - 0x61cu, arg1);
    wr32(sp0 - 0x620u, COW_IMG(0x10353ad8u));
    g->ebx = self;
    g->eax = eax;
    g->esp = sp0 - 0x618u;
    t6 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x610u, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return t8 & 0xffffff00u;
L_10064d23: ;
    COW_AT(10064d23)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x618u;
    t9 = cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t10 = g->edx;
    wr32(sp0 - 0x61cu, 0u);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x610u, 1, 0u);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
        edi = in_edi;
    }
    else
    {
        edx = t12;
    COW_AT(10064d3b)
        wr32(sp0 - 0x61cu, in_edi);
        loc_61c = in_edi;
L_10064d3c: ;
    COW_AT(10064d3c)
        t13 = rd32(sp0 - 0x60cu);
        wr32(sp0 - 0x620u, t13);
        g->eax = t13;
        g->esp = sp0 - 0x61cu;
        t14 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, t13);
        t15 = g->edx;
        if (t14 == 0u)
        {
            eax = t14;
            edx = t15;
        }
        else
        {
            eax = t14;
            edx = t15;
    COW_AT(10064d4e)
            wr32(sp0 - 0x620u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x61cu;
            t16 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, 0u);
            esi = t16;
            edi = COW_IMG(0x10353b70u);
            ecx = 8u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                eax = t16;
                edx = 0u;
            }
            else
            {
    COW_AT(10064d6b)
                t17 = rd32(sp0 - 0x60cu) + 7u;
                wr32(sp0 - 0x620u, t17);
                g->eax = t17;
                g->edx = 0u;
                g->esp = sp0 - 0x61cu;
                t18 = cow_thiscall(g, COW_IMG(0x10065250u), self, 1, t17);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
        }
    COW_AT(10064d7a)
        wr32(sp0 - 0x620u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x61cu;
        t20 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x610u, 1, 0u);
        t21 = g->edx;
        if (t20 != 0u)
        {
            edx = t21;
            loc_61c = rd32(sp0 - 0x61cu);
            goto L_10064d3c;
        }
        eax = t20;
        edx = t21;
    COW_AT(10064d89)
        edi = rd32(sp0 - 0x61cu);
    }
    COW_AT(10064d8a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x618u;
    t22 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t23 = g->edx;
    g->edi = edi;
    t24 = cow_thiscall(g, COW_IMG(0x1006b7b0u), sp0 - 0x610u, 0);
    g->ebx = rd32(sp0 - 0x614u);
    g->esi = rd32(sp0 - 0x618u);
    g->edi = edi;
    return (t24 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10064cd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10064cffu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_61c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_61c = rd32(sp0 - 0x61cu);
        in_esi = rd32(sp0 - 0x618u);
        in_ebx = rd32(sp0 - 0x614u);
        g->esp = sp0 - 0x618u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10064d23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_61c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_61c = rd32(sp0 - 0x61cu);
        in_esi = rd32(sp0 - 0x618u);
        in_ebx = rd32(sp0 - 0x614u);
        g->esp = sp0 - 0x618u;
        (void)sp0;
        return 1;
    }
    case 0x10064d3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_61c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_61c = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x618u;
        (void)sp0;
        return 1;
    }
    case 0x10064d3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_61c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_61c = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x10064d4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x10064d6bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x61cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10064d7au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x10064d89u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x61cu;
        (void)sp0;
        return 1;
    }
    case 0x10064d8au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_61c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_61c = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x618u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10064cd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10064cd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
