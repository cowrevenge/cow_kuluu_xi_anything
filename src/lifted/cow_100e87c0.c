/* f_0x100e87c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e87c0(Guest* g)
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 192u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e87e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xa8u); in_esi = rd32(sp0 - 0xa4u); in_ebp = rd32(sp0 - 0xa0u); in_ebx = rd32(sp0 - 0x9cu); g->ebp = rd32(sp0 - 0xa0u); g->ebx = rd32(sp0 - 0x9cu); g->edi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa4u); goto E_100e87e1;
    case 0x100e87f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e87f2;
    case 0x100e8803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8803;
    case 0x100e880bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e880b;
    case 0x100e8826u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8826;
    case 0x100e882du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e882d;
    case 0x100e8838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8838;
    case 0x100e8841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8841;
    case 0x100e8869u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8869;
    case 0x100e8876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8876;
    case 0x100e8880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8880;
    case 0x100e8890u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8890;
    case 0x100e88b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e88b2;
    default: break;
    }
#endif

    COW_AT(100e87c0)
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    t1 = rd16(rd32(sp0 + 0xcu)) >> 9u;
    wr32(sp0 - 0xacu, t1);
    wr32(sp0 - 0xb0u, 6u);
    g->eax = t1;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0xa8u;
    COW_RET(0x100e87e1u);
    t3 = cow_cdecl(g, COW_IMG(0x100dddb0u), 2, 6u, t1);
    eax = t3;
    edi = t2;
    COW_AT(100e87e1)
    wr32(sp0 - 0xb4u, eax);
    wr32(sp0 - 0xb8u, edi + 8u);
    wr32(sp0 - 0xbcu, sp0 - 0x98u);
    g->edx = sp0 - 0x98u;
    g->esp = sp0 - 0xb0u;
    COW_RET(0x100e87f2u);
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x98u, edi + 8u, eax);
    t4 = g->edx;
    edx = t4;
    esi = eax;
    COW_AT(100e87f2)
    t5 = rd32(COW_IMG(0x104ca3f0u));
    wr8(esi + sp0 - 0x98u, 0u);
    if (t5 == 0u)
    {
        eax = t5;
        goto L_100e8876;
    }
    eax = t5;
    COW_AT(100e8803)
    if (rd8(sp0 - 0x98u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x98u);
        goto L_100e8876;
    }
    COW_AT(100e880b)
    t6 = rd32(edi + 4u);
    t7 = rd32(sp0 + 4u);
    wr32(t7 + 0x40e1cu, t6);
    if (rd8(COW_IMG(0x10361e38u)) == 0u)
    {
        eax = (t6 & 0xffffff00u) | rd8(COW_IMG(0x10361e38u));
        goto L_100e8876;
    }
    ecx = t7;
    COW_AT(100e8826)
    eax = COW_IMG(0x10361e38u);
    ebx = 0u;
    ebp = COW_IMG(0x10361e38u);
L_100e882d: ;
    COW_AT(100e882d)
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    g->ecx = ecx;
    g->esp = sp0 - 0xa8u;
    COW_RET(0x100e8838u);
    t8 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, sp0 - 0x98u, 1, 2, sp0 - 0x98u, eax);
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    COW_AT(100e8838)
    if (eax == 0u)
    {
        edx = eax;
        goto L_100e8869;
    }
    edx = eax;
    COW_AT(100e8841)
    esi = edx;
    edi = rd32(COW_IMG(0x104ca3f0u)) + 0x18c04u;
    ecx = 0x19u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t10 = rd32(COW_IMG(0x104ca3f0u));
    wr8(t10 + 0x18c67u, 0u);
    if (rd32(ebp + 0x64u) != 0u)
    {
        ecx = t10;
        goto L_100e8890;
    }
    ecx = t10;
L_100e8869: ;
    COW_AT(100e8869)
    if (rd8(ebp + 0x68u) != 0u)
    {
        eax = ebp + 0x68u;
        ecx = (ecx & 0xffffff00u) | rd8(ebp + 0x68u);
        ebx = ebx + 1u;
        ebp = ebp + 0x68u;
        goto L_100e882d;
    }
    eax = ebp + 0x68u;
L_100e8876: ;
    COW_AT(100e8876)
    wr32(sp0 - 0xacu, sp0 - 0x98u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    COW_RET(0x100e8880u);
    t14 = cow_cdecl(g, COW_IMG(0x100e88c0u), 1, sp0 - 0x98u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100e8880)
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e8890: ;
    COW_AT(100e8890)
    edi = COW_IMG(0x10361e38u) + ebx * 0x68u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = ebx * 0xdu >> 0x1du & 1u;
    pf = PARITY((uint8_t)(ebx * 0x68u));
    af = 0u;
    zf = ebx * 0x68u == 0u;
    sf = (int32_t)(ebx * 0x68u) < 0;
    of = ebx * 0x68u >> 0x1fu ^ (ebx * 0xdu >> 0x1du & 1u);
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t11 = edx + ~ecx - 1u;
    wr32(sp0 - 0xacu, t11);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    COW_RET(0x100e88b2u);
    t12 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10361e9cu) + ebx * 0x68u), t11, 1, t11);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(100e88b2)
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e87c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e87e1u:
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xa8u);
        in_esi = rd32(sp0 - 0xa4u);
        in_ebp = rd32(sp0 - 0xa0u);
        in_ebx = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x100e87f2u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x100e8803u:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e880bu:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e8826u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e882du:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e8838u:
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
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x100e8841u:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e8869u:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e8876u:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e8880u:
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
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100e8890u:
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
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x100e88b2u:
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
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e87c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e87c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
