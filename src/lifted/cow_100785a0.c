/* f_0x100785a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100785a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_408;
    uint32_t loc_40c;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1060u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100785c5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_100785c5;
    case 0x100785dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100785da;
    case 0x100785feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100785fe;
    case 0x10078615u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078615;
    case 0x10078635u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078635;
    case 0x10078658u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078658;
    case 0x1007865fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007865f;
    case 0x1007867du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007867d;
    case 0x1007869cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); goto E_1007869c;
    case 0x100786aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100786ae;
    case 0x100786efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100786ef;
    case 0x100786feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100786fe;
    case 0x10078708u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078708;
    case 0x1007870du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007870d;
    default: break;
    }
#endif

    COW_AT(100785a0)
    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    t1 = rd32(COW_IMG(0x1047d490u));
    wr8(sp0 - 0x404u, 4u);
    wr8(sp0 - 0x403u, 0u);
    wr8(sp0 - 0x402u, 0u);
    if ((int32_t)t1 < 3)
    {
        edx = in_edx;
        loc_408 = in_esi;
        loc_40c = in_edi;
        goto L_1007869c;
    }
    COW_AT(100785c5)
    t2 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x410u, t2);
    g->edx = in_edx;
    t3 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x3f4u;
    t4 = cow_call_regs(g, COW_IMG(0x10077c30u), t3, t2, g->edx, 1, 7, t2, in_edi, in_esi, rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u));
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        goto L_100785fe;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(100785da)
    wr32(sp0 - 0x410u, 0x65u);
    wr32(sp0 - 0x414u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x418u, t7);
    g->edx = t9;
    g->esp = sp0 - 0x410u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t7, 9u);
    t10 = g->edx;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = t10;
    return -arg3;
L_100785fe: ;
    COW_AT(100785fe)
    t11 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x410u, t11);
    g->eax = t11;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t12 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x40cu;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, t11);
    t14 = g->edx;
    if (t13 != 1u)
    {
        eax = t13;
        edx = t14;
        goto L_10078635;
    }
    eax = t13;
    edx = t14;
    COW_AT(10078615)
    wr32(sp0 - 0x410u, 0xb3u);
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xb3u);
    t15 = g->edx;
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = t15;
    return arg3;
L_10078635: ;
    COW_AT(10078635)
    wr32(sp0 - 0x410u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x414u, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, 1u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t16 = rd32(COW_IMG(0x103551e0u));
    t17 = rd32(COW_IMG(0x103551e4u));
    g->esp = sp0 - 0x40cu;
    t18 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 1u, COW_IMG(0x10354de0u), t16, t17);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        esi = t18;
        goto L_1007865f;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    edi = t17;
    COW_AT(10078658)
    if (rd32(edi + 8u) == 0u)
    {
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        goto L_1007869c;
    }
    esi = rd32(edi + 8u);
L_1007865f: ;
    COW_AT(1007865f)
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x3f8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), ecx, 7, sp0 - 0x400u, esi, rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t21 = g->ecx;
    t22 = g->edx;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x40cu < sp0 - 0x414u;
    pf = PARITY((uint8_t)(sp0 - 0x40cu));
    af = (sp0 - 0x414u ^ sp0 - 0x40cu) >> 4u & 1u;
    zf = sp0 == 0x40cu;
    sf = (int32_t)(sp0 - 0x40cu) < 0;
    of = ((sp0 - 0x414u ^ sp0 - 0x40cu) & (sp0 - 0x40cu ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t22;
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        goto L_1007869c;
    }
    COW_AT(1007867d)
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 3u);
    t23 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x41cu, t23);
    g->edx = t23;
    g->esp = sp0 - 0x408u;
    t24 = cow_call_regs(g, COW_IMG(0x100e3570u), sp0 - 0x400u, g->ecx, g->edx, 1, 5, t23, 3u, 0u, sp0 - 0x400u, rd32(sp0 - 0x40cu));
    t25 = g->edx;
    if ((uint8_t)t24 == 1u) goto L_100786ae;
    edx = t25;
    loc_408 = rd32(sp0 - 0x408u);
    loc_40c = rd32(sp0 - 0x40cu);
L_1007869c: ;
    COW_AT(1007869c)
    g->esi = loc_408;
    g->edi = loc_40c;
    g->edx = edx;
    return -arg3;
L_100786ae: ;
    COW_AT(100786ae)
    wr32(sp0 - 0x410u, esi);
    t26 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x414u, t26);
    wr32(sp0 - 0x418u, COW_IMG(0x10358038u));
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x408u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358038u), t26, esi, rd32(sp0 - 0x40cu));
    t27 = g->edx;
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, 1u);
    wr32(sp0 - 0x418u, 0u);
    wr32(sp0 - 0x41cu, sp0 - 0x404u);
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = sp0 - 0x404u;
    g->edx = t27;
    g->esp = sp0 - 0x40cu;
    t28 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    t29 = g->edx;
    if (rd32(COW_IMG(0x1066268cu)) == 0u)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1066268cu));
    COW_AT(100786ef)
        t30 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x410u, t30);
        g->eax = t30;
        t31 = rd32(COW_IMG(0x103551e0u));
        g->esp = sp0 - 0x40cu;
        t32 = cow_fastcall(g, COW_IMG(0x1018d6e0u), ecx, t31, 1, t30);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    COW_AT(100786fe)
    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
    COW_AT(10078708)
        g->edx = edx;
        g->esp = sp0 - 0x40cu;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t34 = g->edx;
        edx = t34;
    }
    COW_AT(1007870d)
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100785a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100785c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x100785dau:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x100785feu:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078615u:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078635u:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078658u:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x1007865fu:
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
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x1007867du:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x1007869cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
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
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x100786aeu:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x410u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x100786efu:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    case 0x100786feu:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    case 0x10078708u:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    case 0x1007870du:
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
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100785a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100785a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
