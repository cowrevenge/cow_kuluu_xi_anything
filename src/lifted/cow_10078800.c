/* f_0x10078800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078800(Guest* g)
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
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 2104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007881du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1007881d;
    case 0x10078840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078840;
    case 0x10078849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078849;
    case 0x10078850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078850;
    case 0x10078863u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078863;
    case 0x1007886eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007886e;
    case 0x10078881u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078881;
    case 0x10078894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078894;
    case 0x100788abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788ab;
    case 0x100788b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788b2;
    case 0x100788c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788c5;
    case 0x100788ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788ce;
    case 0x100788e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788e1;
    case 0x100788f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100788f5;
    case 0x1007891au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007891a;
    case 0x10078938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078938;
    case 0x10078942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078942;
    case 0x10078947u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078947;
    default: break;
    }
#endif

    COW_AT(10078800)
    wr32(sp0 - 0x80cu, in_ebx);
    wr32(sp0 - 0x810u, in_esi);
    wr32(sp0 - 0x814u, in_edi);
    wr8(sp0 - 0x808u, 6u);
    wr8(sp0 - 0x807u, 0u);
    wr8(sp0 - 0x806u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x814u;
    COW_RET(0x1007881du);
    t1 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1007881d)
    wr32(sp0 - 0x818u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x81cu, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x820u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x824u, 0u);
    t4 = rd32(COW_IMG(0x103551e0u));
    t5 = rd32(COW_IMG(0x103551e4u));
    wr8(sp0 - 0x804u, (uint16_t)eax != 0u);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x814u;
    COW_RET(0x10078840u);
    t6 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t4, t5);
    t7 = g->edx;
    edx = t7;
    ebx = (in_ebx & 0xffffff00u) | (uint16_t)eax != 0u;
    eax = t6;
    edi = t5;
    COW_AT(10078840)
    if (eax != 0u)
    {
        esi = eax;
        goto L_10078863;
    }
    COW_AT(10078849)
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        goto L_10078863;
    }
    COW_AT(10078850)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_10078863: ;
    COW_AT(10078863)
    wr32(sp0 - 0x818u, esi);
    wr32(sp0 - 0x81cu, sp0 - 0x800u);
    g->edx = edx;
    g->esp = sp0 - 0x800u;
    COW_RET(0x1007886eu);
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x800u, 7, sp0 - 0x800u, esi, rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u));
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
    COW_AT(1007886e)
    edi = sp0 - 0x800u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x814u < sp0 - 0x81cu;
    pf = PARITY((uint8_t)(sp0 - 0x814u));
    af = (sp0 - 0x81cu ^ sp0 - 0x814u) >> 4u & 1u;
    zf = sp0 == 0x814u;
    sf = (int32_t)(sp0 - 0x814u) < 0;
    of = ((sp0 - 0x81cu ^ sp0 - 0x814u) & (sp0 - 0x814u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_10078894;
    }
    COW_AT(10078881)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_10078894: ;
    COW_AT(10078894)
    wr32(sp0 - 0x818u, sp0 - 0x800u);
    wr32(sp0 - 0x81cu, 0u);
    t10 = (ebx & 0xffffff00u) | (uint8_t)((-((uint8_t)ebx != 0u) & 0x13u) + 5u);
    wr32(sp0 - 0x820u, t10);
    g->eax = eax;
    g->edx = sp0 - 0x800u;
    g->esp = sp0 - 0x814u;
    COW_RET(0x100788abu);
    t11 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, t10, 0u, sp0 - 0x800u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    ebx = t10;
    COW_AT(100788ab)
    if ((uint8_t)eax == 1u) goto L_100788c5;
    COW_AT(100788b2)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_100788c5: ;
    COW_AT(100788c5)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u) goto L_100788e1;
    COW_AT(100788ce)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_100788e1: ;
    COW_AT(100788e1)
    t13 = rd32(sp0 - 0x804u);
    wr32(sp0 - 0x818u, t13);
    wr32(sp0 - 0x81cu, 5u);
    wr32(sp0 - 0x820u, sp0 - 0x400u);
    g->ebx = ebx;
    g->esp = sp0 - 0x814u;
    COW_RET(0x100788f5u);
    cow_thiscall_cdecl(g, COW_IMG(0x100e3750u), sp0 - 0x400u, 3, sp0 - 0x400u, 5u, t13);
    COW_AT(100788f5)
    wr32(sp0 - 0x824u, esi);
    t14 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    wr32(sp0 - 0x828u, t14);
    wr32(sp0 - 0x82cu, sp0 - 0x400u);
    wr32(sp0 - 0x830u, COW_IMG(0x1035804cu));
    wr32(sp0 - 0x834u, sp0 - 0x800u);
    g->ebx = ebx;
    g->esp = sp0 - 0x820u;
    COW_RET(0x1007891au);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x800u, COW_IMG(0x1035804cu), sp0 - 0x400u, t14, esi);
    COW_AT(1007891a)
    wr32(sp0 - 0x818u, 0u);
    wr32(sp0 - 0x81cu, 1u);
    wr32(sp0 - 0x820u, 0u);
    wr32(sp0 - 0x824u, sp0 - 0x808u);
    wr32(sp0 - 0x828u, sp0 - 0x800u);
    g->ebx = ebx;
    g->eax = sp0 - 0x800u;
    g->edx = sp0 - 0x808u;
    g->esp = sp0 - 0x814u;
    COW_RET(0x10078938u);
    t15 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x800u, sp0 - 0x808u, 0u, 1u, 0u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(10078938)
    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
    COW_AT(10078942)
        g->edx = edx;
        g->esp = sp0 - 0x814u;
        COW_RET(0x10078947u);
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t17 = g->edx;
        edx = t17;
    }
    COW_AT(10078947)
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10078800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007881du:
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
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x80cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10078840u:
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
        g->esp = sp0 - 0x824u;
        (void)sp0;
        return 1;
    }
    case 0x10078849u:
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
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x10078850u:
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
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x10078863u:
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
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1007886eu:
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
        g->esp = sp0 - 0x81cu;
        wr32(sp0 - 0x81cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x10078881u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x81cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x10078894u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x81cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788abu:
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
        g->esp = sp0 - 0x820u;
        wr32(sp0 - 0x818u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788b2u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x818u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788c5u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x818u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788ceu:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x818u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788e1u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x818u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x100788f5u:
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
        g->esp = sp0 - 0x820u;
        wr32(sp0 - 0x820u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x1007891au:
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
        g->esp = sp0 - 0x834u;
        wr32(sp0 - 0x834u, sp0 - 0x800u);
        wr32(sp0 - 0x82cu, sp0 - 0x400u);
        wr32(sp0 - 0x820u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078938u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x834u, sp0 - 0x800u);
        wr32(sp0 - 0x82cu, sp0 - 0x400u);
        wr32(sp0 - 0x828u, sp0 - 0x800u);
        wr32(sp0 - 0x824u, sp0 - 0x808u);
        (void)sp0;
        return 1;
    }
    case 0x10078942u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x834u, sp0 - 0x800u);
        wr32(sp0 - 0x82cu, sp0 - 0x400u);
        wr32(sp0 - 0x828u, sp0 - 0x800u);
        wr32(sp0 - 0x824u, sp0 - 0x808u);
        (void)sp0;
        return 1;
    }
    case 0x10078947u:
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
        g->esp = sp0 - 0x814u;
        wr32(sp0 - 0x834u, sp0 - 0x800u);
        wr32(sp0 - 0x82cu, sp0 - 0x400u);
        wr32(sp0 - 0x828u, sp0 - 0x800u);
        wr32(sp0 - 0x824u, sp0 - 0x808u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10078800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10078800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
