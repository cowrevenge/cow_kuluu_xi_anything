/* f_0x10078d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078d80(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_418;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1076u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10078db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x414u); in_esi = rd32(sp0 - 0x410u); g->edi = rd32(sp0 - 0x414u); g->esi = rd32(sp0 - 0x410u); goto E_10078db9;
    case 0x10078dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x414u); in_esi = rd32(sp0 - 0x410u); g->edi = rd32(sp0 - 0x414u); g->esi = rd32(sp0 - 0x410u); goto E_10078dc0;
    case 0x10078dd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x414u); in_esi = rd32(sp0 - 0x410u); g->edi = rd32(sp0 - 0x414u); g->esi = rd32(sp0 - 0x410u); goto E_10078dd2;
    case 0x10078df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078df0;
    case 0x10078e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e02;
    case 0x10078e17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e17;
    case 0x10078e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e29;
    case 0x10078e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e32;
    case 0x10078e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e44;
    case 0x10078e59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x418u); g->ebx = rd32(sp0 - 0x418u); goto E_10078e59;
    case 0x10078e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x418u); g->ebx = rd32(sp0 - 0x418u); goto E_10078e5d;
    case 0x10078e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; goto E_10078e6b;
    case 0x10078e7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e7f;
    case 0x10078e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e83;
    case 0x10078e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078e88;
    case 0x10078eb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078eb9;
    case 0x10078ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_418 = rd32(sp0 - 0x418u); goto E_10078ebe;
    case 0x10078ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078ed7;
    case 0x10078efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078efd;
    case 0x10078f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078f02;
    default: break;
    }
#endif

    COW_AT(10078d80)
    wr32(sp0 - 0x410u, in_esi);
    wr32(sp0 - 0x414u, in_edi);
    wr32(sp0 - 0x418u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x41cu, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x420u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x424u, 0u);
    t1 = rd32(COW_IMG(0x103551e0u));
    t2 = rd32(COW_IMG(0x103551e4u));
    wr8(sp0 - 0x408u, 0xddu);
    wr8(sp0 - 0x407u, 0u);
    wr8(sp0 - 0x406u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x414u;
    t3 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t1, t2);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        esi = t3;
        goto L_10078dd2;
    }
    eax = t3;
    edx = t4;
    edi = t2;
    COW_AT(10078db9)
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        goto L_10078dd2;
    }
    COW_AT(10078dc0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return -arg3;
L_10078dd2: ;
    COW_AT(10078dd2)
    wr32(sp0 - 0x418u, esi);
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->edx = edx;
    g->esp = sp0 - 0x400u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, esi, in_edi, in_esi, rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u));
    t5 = g->ecx;
    t6 = g->edx;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x414u < sp0 - 0x41cu;
    pf = PARITY((uint8_t)(sp0 - 0x414u));
    af = (sp0 - 0x41cu ^ sp0 - 0x414u) >> 4u & 1u;
    zf = sp0 == 0x414u;
    sf = (int32_t)(sp0 - 0x414u) < 0;
    of = ((sp0 - 0x41cu ^ sp0 - 0x414u) & (sp0 - 0x414u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_10078e02;
    }
    edx = t6;
    COW_AT(10078df0)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e02: ;
    COW_AT(10078e02)
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    wr32(sp0 - 0x41cu, 0u);
    wr32(sp0 - 0x420u, 0x23u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x414u;
    t7 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, 0x23u, 0u, sp0 - 0x400u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 1u)
    {
        ecx = t8;
        edx = t9;
        goto L_10078e29;
    }
    edx = t9;
    COW_AT(10078e17)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e29: ;
    COW_AT(10078e29)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10078e44;
    }
    COW_AT(10078e32)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return -arg3;
L_10078e44: ;
    COW_AT(10078e44)
    wr32(sp0 - 0x418u, in_ebx);
    t10 = rd8(eax + 0x40decu);
    t11 = rd8(eax + 0x40debu);
    wr8(sp0 - 0x409u, (uint8_t)t10);
    if ((uint8_t)t11 == 0u)
    {
        ecx = (ecx & 0xffffff00u) | t10;
        ebx = (in_ebx & 0xffffff00u) | t11;
        loc_418 = in_ebx;
        goto L_10078ebe;
    }
    ecx = (ecx & 0xffffff00u) | t10;
    ebx = (in_ebx & 0xffffff00u) | t11;
    COW_AT(10078e59)
    if ((uint8_t)ecx == 0u)
    {
        loc_418 = in_ebx;
        goto L_10078ebe;
    }
    COW_AT(10078e5d)
    wr32(sp0 - 0x41cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x418u;
    t12 = cow_cdecl(g, COW_IMG(0x100e47c0u), 1, 8u);
    t13 = g->ecx;
    if ((uint8_t)t12 == 0u)
    {
        ecx = t13;
        goto L_10078eb9;
    }
    eax = t12;
    ecx = t13;
    COW_AT(10078e6b)
    eax = (eax & 0xffffff00u) | (uint8_t)ebx;
    ecx = (ecx & 0xffffff00u) | 0xau;
    cf = 0u;
    of = 0u;
    { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    t14 = rd8(sp0 - 0x409u);
    wr8(sp0 - 0x404u, (uint8_t)((uint8_t)((uint8_t)eax + t14) + 0x24u));
    if ((uint8_t)((uint8_t)((uint8_t)eax + t14) + 0x24u) < 0x2fu) goto L_10078e83;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)eax + t14) + 0x24u);
    COW_AT(10078e7f)
    if ((uint8_t)eax < 0x4du) goto L_10078e88;
L_10078e83: ;
    COW_AT(10078e83)
    wr8(sp0 - 0x404u, 0x2fu);
L_10078e88: ;
    COW_AT(10078e88)
    wr32(sp0 - 0x41cu, esi);
    t15 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    wr32(sp0 - 0x420u, t15);
    t16 = (uint8_t)rd32(sp0 - 0x404u);
    wr32(sp0 - 0x424u, t16);
    wr32(sp0 - 0x428u, 0xefu);
    wr32(sp0 - 0x42cu, COW_IMG(0x10358088u));
    wr32(sp0 - 0x430u, sp0 - 0x400u);
    g->ebx = ebx;
    g->edx = t15;
    g->esp = sp0 - 0x41cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358088u), 0xefu, t16, t15);
    t17 = g->edx;
    edx = t17;
L_10078ed7: ;
    COW_AT(10078ed7)
    wr32(sp0 - 0x41cu, 0u);
    wr32(sp0 - 0x420u, 1u);
    wr32(sp0 - 0x424u, 0u);
    wr32(sp0 - 0x428u, sp0 - 0x408u);
    wr32(sp0 - 0x42cu, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = sp0 - 0x408u;
    g->edx = edx;
    g->esp = sp0 - 0x418u;
    t19 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x408u, 0u, 1u, 0u);
    t20 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t20;
        ebx = rd32(sp0 - 0x418u);
    }
    else
    {
        eax = t19;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t20;
        ebx = rd32(sp0 - 0x418u);
    COW_AT(10078efd)
        g->edx = edx;
        g->esp = sp0 - 0x414u;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t21 = g->edx;
        edx = t21;
    }
    COW_AT(10078f02)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x414u);
    g->edx = edx;
    return arg3;
L_10078eb9: ;
    COW_AT(10078eb9)
    eax = rd32(COW_IMG(0x104dfd98u));
    loc_418 = rd32(sp0 - 0x418u);
L_10078ebe: ;
    COW_AT(10078ebe)
    wr32(sp0 - 0x41cu, esi);
    wr32(sp0 - 0x420u, eax + 0x3c3a4u);
    wr32(sp0 - 0x424u, COW_IMG(0x1035807cu));
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    g->ebx = ebx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x414u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x1035807cu), eax + 0x3c3a4u, esi, loc_418);
    t18 = g->edx;
    edx = t18;
    goto L_10078ed7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10078d80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10078db9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x414u);
        in_esi = rd32(sp0 - 0x410u);
        g->esp = sp0 - 0x414u;
        (void)sp0;
        return 1;
    }
    case 0x10078dc0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x414u);
        in_esi = rd32(sp0 - 0x410u);
        g->esp = sp0 - 0x414u;
        (void)sp0;
        return 1;
    }
    case 0x10078dd2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x414u);
        in_esi = rd32(sp0 - 0x410u);
        g->esp = sp0 - 0x414u;
        (void)sp0;
        return 1;
    }
    case 0x10078df0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e02u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x418u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e29u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x418u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e32u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x418u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x418u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078e59u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
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
        in_ebx = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078e5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
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
        in_ebx = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078e6bu:
    {
        unsigned af;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x418u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10078e7fu:
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
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078e83u:
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
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078e88u:
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
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078eb9u:
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
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078ebeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_418;
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
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078ed7u:
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
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10078efdu:
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
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x42cu, sp0 - 0x400u);
        wr32(sp0 - 0x428u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10078f02u:
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
        g->esp = sp0 - 0x414u;
        wr32(sp0 - 0x42cu, sp0 - 0x400u);
        wr32(sp0 - 0x428u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10078d80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10078d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
