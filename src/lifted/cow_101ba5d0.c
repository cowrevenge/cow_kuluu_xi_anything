/* f_0x101ba5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ba5d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ba5deu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ba5de;
    case 0x101ba601u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba601;
    case 0x101ba610u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba610;
    case 0x101ba61du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba61d;
    case 0x101ba62fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba62f;
    case 0x101ba634u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba634;
    case 0x101ba639u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba639;
    case 0x101ba63eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba63e;
    case 0x101ba64bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba64b;
    case 0x101ba658u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba658;
    case 0x101ba665u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba665;
    case 0x101ba674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba674;
    case 0x101ba681u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba681;
    case 0x101ba687u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ba687;
    case 0x101ba6a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_101ba6a3;
    default: break;
    }
#endif

    COW_AT(101ba5d0)
    wr32(sp0 - 4u, in_esi);
    if (rd8(arg1) != 0x40u)
    {
        loc_4 = in_esi;
        goto L_101ba6a3;
    }
    COW_AT(101ba5de)
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, arg1 + 2u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10313979u), arg1 + 2u, 3, arg1 + 2u, sp0 + 4u, 0x10u);
    if ((uint32_t)(int8_t)rd8(arg1 + 1u) - 0x41u > 0x18u)
    {
        loc_4 = in_esi;
        goto L_101ba6a3;
    }
    eax = t1;
    ecx = (uint32_t)(int8_t)rd8(arg1 + 1u) - 0x41u;
    COW_AT(101ba601)
    t2 = rd32(COW_IMG(0x101ba6acu) + rd8(COW_IMG(0x101ba6c4u) + ecx) * 4u);
    switch (t2 - RD)
    {
    case 0x101ba610u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba610;
    case 0x101ba61du: goto L_101ba61d;
    case 0x101ba658u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba658;
    case 0x101ba665u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba665;
    case 0x101ba674u: edx = rd8(COW_IMG(0x101ba6c4u) + ecx); goto L_101ba674;
    case 0x101ba6a3u: loc_4 = rd32(sp0 - 4u); goto L_101ba6a3;
    default: rt_fatal(g, COW_IMG(0x101ba609u), "switch");
    }
    return 0;
L_101ba610: ;
    COW_AT(101ba610)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x12u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, eax);
    t18 = g->ecx;
    eax = t17;
    ecx = t18;
L_101ba681: ;
    COW_AT(101ba681)
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_101ba6a3;
    }
    edx = eax;
    COW_AT(101ba687)
    wr32(sp0 - 8u, in_edi);
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t19 = rd32(sp0 - 4u);
    wr8(arg2, (uint8_t)((uint8_t)(~ecx - 1u) + 1u));
    g->ebx = in_ebx;
    g->esi = t19;
    g->edi = in_edi;
    return edx;
L_101ba61d: ;
    COW_AT(101ba61d)
    wr32(sp0 - 8u, in_ebx);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_101ba639;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    COW_AT(101ba62f)
    if (ecx == 2u) goto L_101ba63e;
    COW_AT(101ba634)
    if (ecx == 3u) goto L_101ba63e;
L_101ba639: ;
    COW_AT(101ba639)
    if ((int32_t)ecx > 1) goto L_101ba64b;
L_101ba63e: ;
    COW_AT(101ba63e)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, eax);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    goto L_101ba681;
L_101ba64b: ;
    COW_AT(101ba64b)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x15u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x15u, eax);
    t16 = g->ecx;
    eax = t15;
    ecx = t16;
    goto L_101ba681;
L_101ba658: ;
    COW_AT(101ba658)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, 0x13u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, eax);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    goto L_101ba681;
L_101ba665: ;
    COW_AT(101ba665)
    wr32(sp0 - 8u, eax);
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 1, eax);
    t8 = g->edx;
    t9 = cow_thiscall(g, COW_IMG(0x1022bf00u), t7, 1, rd32(sp0 - 8u));
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
    goto L_101ba681;
L_101ba674: ;
    COW_AT(101ba674)
    wr32(sp0 - 8u, eax);
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 1, eax);
    t4 = g->edx;
    g->ecx = t3;
    t5 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 8u));
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    goto L_101ba681;
L_101ba6a3: ;
    COW_AT(101ba6a3)
    g->ebx = in_ebx;
    g->esi = loc_4;
    g->edi = in_edi;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ba5d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ba5deu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ba601u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba610u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba61du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba62fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba634u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba639u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba63eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba64bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba658u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba665u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba674u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ba681u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ba687u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ba6a3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba5d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ba5d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
