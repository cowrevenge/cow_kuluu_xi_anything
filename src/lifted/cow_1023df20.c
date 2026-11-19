/* f_0x1023df20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1023df20(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 276u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023df38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1023df38;
    case 0x1023df49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023df49;
    case 0x1023df67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023df67;
    case 0x1023df6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023df6d;
    case 0x1023df77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023df77;
    case 0x1023e066u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023e066;
    case 0x1023e07bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023e07b;
    case 0x1023e093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023e093;
    case 0x1023e0afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023e0af;
    default: break;
    }
#endif

    COW_AT(1023df20)
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_edi);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x10cu, in_esi);
    edx = in_edx;
    ebx = 0u;
    loc_104 = in_ebx;
    loc_108 = in_edi;
    loc_10c = in_esi;
L_1023df38: ;
    COW_AT(1023df38)
    wr32(sp0 - 0x110u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t1 = cow_stdcall(g, COW_IMG(0x100db6e0u), 1, ebx);
    t2 = g->edx;
    if (t1 != 1u)
    {
        eax = t1;
        edx = t2;
        goto L_1023df67;
    }
    eax = t1;
    edx = t2;
    COW_AT(1023df49)
    wr32(sp0 - 0x110u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t3 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, ebx);
    t4 = g->edx;
    esi = t3;
    edi = COW_IMG(0x1034f2b8u);
    ecx = 2u;
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
        goto L_1023df6d;
    }
    eax = 0u;
    edx = t4;
L_1023df67: ;
    COW_AT(1023df67)
    if ((int32_t)(ebx + 1u) < 16)
    {
        ebx = ebx + 1u;
        loc_104 = rd32(sp0 - 0x104u);
        loc_108 = rd32(sp0 - 0x108u);
        loc_10c = rd32(sp0 - 0x10cu);
        goto L_1023df38;
    }
    ebx = ebx + 1u;
L_1023df6d: ;
    COW_AT(1023df6d)
    if (ebx == 0x10u)
    {
        esi = rd32(sp0 - 0x10cu);
        goto L_1023e0af;
    }
    esi = rd32(sp0 - 0x10cu);
    COW_AT(1023df77)
    t5 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + 1u;
    wr32(sp0 - 0x10cu, t5);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->esp = sp0 - 0x108u;
    cow_stdcall(g, COW_IMG(0x100db870u), 2, sp0 - 0x100u, t5);
    t6 = rd32(rd32(COW_IMG(0x10668fc0u)) + 0x14u) + 1u;
    wr32(sp0 - 0x10cu, t6);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    cow_stdcall(g, COW_IMG(0x100db890u), 2, sp0 - 0x100u, t6);
    t7 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    wr32(sp0 - 0x10cu, t7);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    cow_stdcall(g, COW_IMG(0x100db8b0u), 2, sp0 - 0x100u, t7);
    t8 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
    wr32(sp0 - 0x10cu, t8);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    cow_stdcall(g, COW_IMG(0x100db8f0u), 2, sp0 - 0x100u, t8);
    t9 = rd32(rd32(COW_IMG(0x10668fbcu)) + 0x14u);
    wr32(sp0 - 0x10cu, t9);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    cow_stdcall(g, COW_IMG(0x100db910u), 2, sp0 - 0x100u, t9);
    t10 = rd32(rd32(COW_IMG(0x10668fc8u)) + 0x14u);
    wr32(sp0 - 0x10cu, t10);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    t11 = cow_call_regs(g, COW_IMG(0x100db8d0u), g->eax, g->ecx, t10, 0, 2, sp0 - 0x100u, t10);
    t12 = g->edx;
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    wr32(sp0 - 0x110u, ebx);
    t13 = cow_stdcall(g, COW_IMG(0x100db7f0u), 2, ebx, sp0 - 0x100u);
    t14 = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    wr32(sp0 - 0x10cu, t14);
    wr32(sp0 - 0x110u, ebx);
    g->edx = t14;
    cow_stdcall(g, COW_IMG(0x100db810u), 2, ebx, t14);
    t15 = g->edx;
    t16 = rd32(COW_IMG(0x10668fccu)) + 0x2cu;
    wr32(sp0 - 0x10cu, t16);
    wr32(sp0 - 0x110u, ebx);
    g->edx = t15;
    cow_stdcall(g, COW_IMG(0x100db850u), 2, ebx, t16);
    t17 = g->edx;
    edi = rd32(COW_IMG(0x10668fccu)) + 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t17;
        goto L_1023e093;
    }
    ecx = ~ecx - 1u;
    COW_AT(1023e066)
    t18 = rd32(COW_IMG(0x10668fd0u)) + 0x18u;
    edi = t18;
    ecx = 0xffffffffu;
    cf = rd32(COW_IMG(0x10668fd0u)) + 0x18u < rd32(COW_IMG(0x10668fd0u));
    pf = PARITY((uint8_t)(rd32(COW_IMG(0x10668fd0u)) + 0x18u));
    af = (rd32(COW_IMG(0x10668fd0u)) ^ 0x18u ^ rd32(COW_IMG(0x10668fd0u)) + 0x18u) >> 4u & 1u;
    zf = rd32(COW_IMG(0x10668fd0u)) + 0x18u == 0u;
    sf = (int32_t)(rd32(COW_IMG(0x10668fd0u)) + 0x18u) < 0;
    of = ((rd32(COW_IMG(0x10668fd0u)) ^ rd32(COW_IMG(0x10668fd0u)) + 0x18u) & (rd32(COW_IMG(0x10668fd0u)) + 0x18u ^ 0x18u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t18;
        goto L_1023e093;
    }
    edx = t18;
    COW_AT(1023e07b)
    wr32(sp0 - 0x10cu, edx);
    wr32(sp0 - 0x110u, ebx);
    g->esp = sp0 - 0x108u;
    cow_stdcall(g, COW_IMG(0x100db830u), 2, ebx, edx);
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x108u);
    return ebx;
L_1023e093: ;
    COW_AT(1023e093)
    wr32(sp0 - 0x10cu, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x110u, ebx);
    g->esp = sp0 - 0x108u;
    cow_stdcall(g, COW_IMG(0x100db830u), 2, ebx, COW_IMG(0x103d3c84u));
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x108u);
    return ebx;
L_1023e0af: ;
    COW_AT(1023e0af)
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x108u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023df20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023df38u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1023df49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1023df67u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1023df6du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1023df77u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x1023e066u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x1023e07bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x1023e093u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x1023e0afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023df20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023df20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
