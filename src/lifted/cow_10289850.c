/* f_0x10289850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10289850(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028986eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1028986e;
    case 0x10289878u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10289878;
    case 0x102898a3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102898a3;
    case 0x102898bfu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102898bf;
    case 0x102898f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102898f6;
    case 0x10289910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10289910;
    case 0x1028992bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1028992b;
    default: break;
    }
#endif

    COW_AT(10289850)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x24u, arg2);
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg2, COW_IMG(0x1036bf68u));
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        ebx = t1;
        goto L_10289878;
    }
    eax = t1;
    edx = t2;
    COW_AT(1028986e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0xffffffffu;
L_10289878: ;
    COW_AT(10289878)
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 8u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0x10u, 8u, 1u, ebx, in_edi, in_esi);
    wr8(sp0 - 8u, 0u);
    esi = sp0 - 0x10u;
    edi = COW_IMG(0x103b95b4u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = t3;
        goto L_102898bf;
    }
    COW_AT(102898a3)
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, COW_IMG(0x103b9588u));
    g->ebx = ebx;
    g->eax = sp0 - 0x10u;
    g->edx = 0u;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9588u), sp0 - 0x10u);
    t5 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    g->edx = t5;
    return 0xffffffffu;
L_102898bf: ;
    COW_AT(102898bf)
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, arg1 + 0x14u);
    g->eax = eax;
    g->ecx = arg1 + 0x14u;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, 0u, 1, 3, arg1 + 0x14u, ebx, in_ebp);
    t7 = g->ecx;
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, arg1 + 0x18u);
    g->ecx = t7;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, arg1 + 0x18u, 1, 3, arg1 + 0x18u, ebx, arg1 + 0x14u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->ecx = t8;
    g->esp = sp0 - 0x2cu;
    t10 = cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, t9, 1, 3, sp0 + 8u, ebx, arg1 + 0x18u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, arg1 + 0x20u);
    g->ecx = t11;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, t12, 1, 3, arg1 + 0x20u, ebx, sp0 + 8u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)rd32(arg1 + 0x20u) <= 0)
    {
        eax = rd32(arg1 + 0x20u);
        ecx = t13;
        edx = t14;
        edi = arg1 + 0x20u;
    }
    else
    {
        eax = rd32(arg1 + 0x20u);
        ecx = t13;
        edx = t14;
    COW_AT(102898f6)
        wr32(sp0 - 0x24u, eax);
        wr32(sp0 - 0x28u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102897e0u), 6, arg1, eax, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t15 = g->ecx;
        t16 = g->edx;
        t17 = rd32(arg1 + 0x24u);
        wr32(arg1 + 0x1cu, arg2);
        if ((int32_t)arg2 <= 0)
        {
            eax = arg2;
            ecx = t15;
            edx = t16;
            edi = t17;
            goto L_1028992b;
        }
        eax = arg2;
        ecx = t15;
        edx = t16;
        ebp = 0u;
        edi = t17;
L_10289910: ;
    COW_AT(10289910)
        wr32(sp0 - 0x24u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t18 = cow_cdecl(g, COW_IMG(0x10289b60u), 1, edi);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10289d10u), 7, edi, ebx, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t21 = g->ecx;
        t22 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            eax = rd32(arg1 + 0x1cu);
            ecx = t21;
            edx = t22;
            ebp = ebp + 1u;
            edi = edi + 0x10u;
            goto L_10289910;
        }
        eax = rd32(arg1 + 0x1cu);
        ecx = t21;
        edx = t22;
        edi = edi + 0x10u;
    }
L_1028992b: ;
    COW_AT(1028992b)
    wr32(sp0 - 0x24u, ebx);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t23 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t23;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10289850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028986eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10289878u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102898a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->edx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102898bfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->edx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102898f6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10289910u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028992bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x38u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10289850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10289850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
