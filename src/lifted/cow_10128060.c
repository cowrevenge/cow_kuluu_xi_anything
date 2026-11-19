/* f_0x10128060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10128060(Guest* g)
{
    unsigned af;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 192u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10128071u: eax = g->eax; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); goto E_10128071;
    case 0x10128086u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); goto E_10128086;
    case 0x101280ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101280ff;
    case 0x101281b8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101281b8;
    case 0x101281c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101281c9;
    case 0x101281cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101281cd;
    case 0x101281d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101281d3;
    case 0x101281e1u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); goto E_101281e1;
    default: break;
    }
#endif

    COW_AT(10128060)
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(sp0 + 0xcu) == 0u) goto L_101281e1;
    ebp = rd32(sp0 + 0xcu);
    COW_AT(10128071)
    edi = ebp;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u < 0x2cu) goto L_101281e1;
    COW_AT(10128086)
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, sp0 - 0x28u);
    wr32(sp0 - 0x68u, sp0 - 0x2cu);
    wr32(sp0 - 0x6cu, sp0 - 4u);
    wr32(sp0 - 0x70u, sp0 - 8u);
    wr32(sp0 - 0x74u, sp0 - 0xcu);
    wr32(sp0 - 0x78u, sp0 - 0x10u);
    wr32(sp0 - 0x7cu, sp0 - 0x14u);
    wr32(sp0 - 0x80u, sp0 - 0x18u);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    wr32(sp0 - 0x88u, sp0 - 0x20u);
    wr32(sp0 - 0x8cu, sp0 - 0x30u);
    wr32(sp0 - 0x90u, sp0 - 0x34u);
    wr32(sp0 - 0x94u, sp0 - 0x38u);
    wr32(sp0 - 0x98u, sp0 - 0x24u);
    wr32(sp0 - 0x9cu, sp0 - 0x3cu);
    wr32(sp0 - 0xa0u, sp0 - 0x40u);
    wr32(sp0 - 0xa4u, sp0 - 0x44u);
    wr32(sp0 - 0xa8u, sp0 - 0x48u);
    wr32(sp0 - 0xacu, sp0 - 0x4cu);
    wr32(sp0 - 0xb0u, sp0 - 0x50u);
    wr32(sp0 - 0xb4u, sp0 + 0xcu);
    wr32(sp0 - 0xb8u, COW_IMG(0x1036f128u));
    wr32(sp0 - 0xbcu, ebp);
    g->eax = sp0 - 0x4cu;
    g->ecx = sp0 - 0x50u;
    g->edx = sp0 + 0xcu;
    g->esp = sp0 - 0xb0u;
    t1 = cow_cdecl(g, COW_IMG(0x10313683u), 3, ebp, COW_IMG(0x1036f128u), sp0 + 0xcu);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101280ff)
    t4 = rd8(sp0 - 0x50u);
    t5 = rd8(sp0 - 0x4cu);
    t6 = rd32(sp0 - 0x38u);
    wr8(arg1, rd8(sp0 + 0xcu));
    t7 = rd32(sp0 - 0x48u);
    wr8(arg1 + 1u, (uint8_t)t4);
    t8 = rd32(sp0 - 0x44u);
    wr8(arg1 + 2u, (uint8_t)t5);
    t9 = rd32(sp0 - 0x40u);
    wr32(arg1 + 4u, t7);
    t10 = rd16(sp0 - 0x3cu);
    wr32(arg1 + 8u, t8);
    wr32(arg1 + 0xcu, t9);
    t11 = rd8(sp0 - 0x34u);
    wr16(arg1 + 0x10u, (uint16_t)t10);
    t12 = rd8(sp0 - 0x30u);
    wr8(arg1 + 0x14u, (uint8_t)t11);
    t13 = rd32(sp0 - 0x1cu);
    wr8(arg1 + 0x15u, (uint8_t)t12);
    t14 = rd32(sp0 - 0x18u);
    wr32(arg1 + 0x1cu, t13);
    t15 = rd32(sp0 - 0x10u);
    wr8(arg1 + 0x13u, t6 != 0u);
    t16 = rd32(sp0 - 0x20u);
    wr8(arg1 + 0x12u, 0u);
    wr32(arg1 + 0x18u, t16);
    t17 = rd32(sp0 - 0x14u);
    wr32(arg1 + 0x20u, t14);
    wr32(arg1 + 0x24u, t17);
    t18 = rd32(sp0 - 0xcu);
    t19 = rd32(sp0 - 8u);
    t20 = rd32(sp0 - 0x28u);
    wr32(arg1 + 0x28u, t15);
    t21 = rd32(sp0 - 4u);
    wr32(arg1 + 0x2cu, t18);
    t22 = rd32(sp0 - 0x2cu);
    wr32(arg1 + 0x34u, t21);
    wr32(arg1 + 0x30u, t19);
    wr32(arg1 + 0x38u, t22);
    wr8(arg2, t20 != 0u);
    if ((rd8(arg1 + 0x15u) & 0xfu) != 1u)
    {
        edx = arg2;
    }
    else
    {
        eax = (t22 & 0xffffff00u) | (rd8(arg1 + 0x15u) & 0xfu);
        ebx = (t6 & 0xffffff00u) | rd8(arg1 + 0x15u);
    COW_AT(101281b8)
        t23 = rd32(arg1 + 8u);
        wr32(sp0 - 0x64u, t23);
        wr32(sp0 - 0x68u, 0u);
        g->eax = eax;
        g->edx = arg2;
        g->esp = sp0 - 0x60u;
        t24 = cow_thiscall(g, COW_IMG(0x10127f60u), rd32(COW_IMG(0x10578160u)), 2, 0u, t23);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(101281c9)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101281cd)
            wr8(arg1 + 0x15u, (uint8_t)(ebx | 0x40u));
        }
    }
    COW_AT(101281d3)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return ebp + 0x89u;
L_101281e1: ;
    COW_AT(101281e1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10128060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10128071u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10128086u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101280ffu:
    {
        unsigned af;
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
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xb4u, sp0 + 0xcu);
        wr32(sp0 - 0xb0u, sp0 - 0x50u);
        wr32(sp0 - 0xacu, sp0 - 0x4cu);
        wr32(sp0 - 0xa8u, sp0 - 0x48u);
        wr32(sp0 - 0xa4u, sp0 - 0x44u);
        wr32(sp0 - 0xa0u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x3cu);
        wr32(sp0 - 0x98u, sp0 - 0x24u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x34u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, sp0 - 0x14u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x70u, sp0 - 8u);
        wr32(sp0 - 0x6cu, sp0 - 4u);
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x101281b8u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x60u;
        g->edx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xb4u, sp0 + 0xcu);
        wr32(sp0 - 0xb0u, sp0 - 0x50u);
        wr32(sp0 - 0xacu, sp0 - 0x4cu);
        wr32(sp0 - 0xa8u, sp0 - 0x48u);
        wr32(sp0 - 0xa4u, sp0 - 0x44u);
        wr32(sp0 - 0xa0u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x3cu);
        wr32(sp0 - 0x98u, sp0 - 0x24u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x34u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, sp0 - 0x14u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x70u, sp0 - 8u);
        wr32(sp0 - 0x6cu, sp0 - 4u);
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x101281c9u:
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
        g->esp = sp0 - 0x60u;
        g->esi = arg1;
        wr32(sp0 - 0xb4u, sp0 + 0xcu);
        wr32(sp0 - 0xb0u, sp0 - 0x50u);
        wr32(sp0 - 0xacu, sp0 - 0x4cu);
        wr32(sp0 - 0xa8u, sp0 - 0x48u);
        wr32(sp0 - 0xa4u, sp0 - 0x44u);
        wr32(sp0 - 0xa0u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x3cu);
        wr32(sp0 - 0x98u, sp0 - 0x24u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x34u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, sp0 - 0x14u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x70u, sp0 - 8u);
        wr32(sp0 - 0x6cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101281cdu:
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
        g->esp = sp0 - 0x60u;
        g->esi = arg1;
        wr32(sp0 - 0xb4u, sp0 + 0xcu);
        wr32(sp0 - 0xb0u, sp0 - 0x50u);
        wr32(sp0 - 0xacu, sp0 - 0x4cu);
        wr32(sp0 - 0xa8u, sp0 - 0x48u);
        wr32(sp0 - 0xa4u, sp0 - 0x44u);
        wr32(sp0 - 0xa0u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x3cu);
        wr32(sp0 - 0x98u, sp0 - 0x24u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x34u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, sp0 - 0x14u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x70u, sp0 - 8u);
        wr32(sp0 - 0x6cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101281d3u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0xb4u, sp0 + 0xcu);
        wr32(sp0 - 0xb0u, sp0 - 0x50u);
        wr32(sp0 - 0xacu, sp0 - 0x4cu);
        wr32(sp0 - 0xa8u, sp0 - 0x48u);
        wr32(sp0 - 0xa4u, sp0 - 0x44u);
        wr32(sp0 - 0xa0u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x3cu);
        wr32(sp0 - 0x98u, sp0 - 0x24u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x34u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x1cu);
        wr32(sp0 - 0x80u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, sp0 - 0x14u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x70u, sp0 - 8u);
        wr32(sp0 - 0x6cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101281e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10128060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10128060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
