/* f_0x1007ffa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ffa0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007ffb1u: edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1007ffb1;
    case 0x1007ffceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1007ffce;
    case 0x1007ffe0u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1007ffe0;
    case 0x1007ffe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1007ffe5;
    case 0x1007ffe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1007ffe9;
    case 0x10080006u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10080006;
    case 0x10080024u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10080024;
    case 0x10080029u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10080029;
    case 0x1008004fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008004f;
    case 0x10080058u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080058;
    case 0x1008005eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008005e;
    case 0x10080073u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080073;
    case 0x1008008cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008008c;
    default: break;
    }
#endif

    COW_AT(1007ffa0)
    wr32(sp0 - 0x18u, in_esi);
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        edx = rd32(COW_IMG(0x103551e0u));
        esi = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007ffce;
    }
    edx = rd32(COW_IMG(0x103551e0u));
    COW_AT(1007ffb1)
    wr32(sp0 - 0x1cu, 0x1e00u);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, COW_IMG(0x10355408u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100800a0u), 5, COW_IMG(0x10355408u), 5u, 0x1e00u, in_esi, rd32(sp0 - 0x14u));
    t1 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t1;
    return arg3;
L_1007ffce: ;
    COW_AT(1007ffce)
    wr32(sp0 - 0x1cu, in_edi);
    edi = COW_IMG(0x10358130u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(1007ffe0)
        eax = -cf + 1u - cf;
    }
    COW_AT(1007ffe5)
    if (eax != 0u) goto L_10080006;
    COW_AT(1007ffe9)
    wr32(sp0 - 0x1cu, 0x1e00u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, COW_IMG(0x10355408u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100800a0u), 5, COW_IMG(0x10355408u), 1u, 0x1e00u, in_esi, rd32(sp0 - 0x14u));
    t2 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t2;
    return arg3;
L_10080006: ;
    COW_AT(10080006)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd8(rd32(edx + 4u)) == 0x2fu)
    {
        ecx = rd32(edx + 4u);
        loc_14 = 0u;
    }
    else
    {
        ecx = rd32(edx + 4u);
    COW_AT(10080024)
        wr8(sp0 - 0x14u, 0x2fu);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(10080029)
    wr32(sp0 - 0x1cu, 0x12u);
    t3 = rd32(edx + 4u);
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x14u, g->ecx, t3, 1, 3, sp0 - 0x14u, t3, 0x12u);
    t5 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, COW_IMG(0x10355408u));
    g->ecx = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10077ad0u), g->eax, g->ecx, t5, 1, 5, COW_IMG(0x10355408u), sp0 - 0x14u, sp0 - 0x14u, rd32(sp0 - 0x20u), 0x12u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_10080073;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1008004f)
    if (rd16(eax + 0x14u) == 0u) goto L_1008008c;
    eax = (eax & 0xffff0000u) | rd16(eax + 0x14u);
    COW_AT(10080058)
    if ((uint16_t)eax == 0x10bu) goto L_1008008c;
    COW_AT(1008005e)
    wr32(sp0 - 0x1cu, (uint32_t)(int16_t)eax);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10080210u), g->eax, g->ecx, (uint32_t)(int16_t)eax, 1, 1, (uint32_t)(int16_t)eax);
    t9 = g->edx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = in_edi;
    g->edx = t9;
    return arg3;
L_10080073: ;
    COW_AT(10080073)
    wr32(sp0 - 0x1cu, 0x1e00u);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, sp0 - 0x13u);
    wr32(sp0 - 0x28u, COW_IMG(0x10355408u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10080140u), 7, COW_IMG(0x10355408u), sp0 - 0x13u, 7u, 0x1e00u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t10 = g->edx;
    edx = t10;
L_1008008c: ;
    COW_AT(1008008c)
    g->esi = rd32(sp0 - 0x18u);
    g->edi = in_edi;
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007ffa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007ffb1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1007ffceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1007ffe0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007ffe5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1007ffe9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10080006u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10080024u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080029u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1008004fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10080058u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1008005eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10080073u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1008008cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ffa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007ffa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
