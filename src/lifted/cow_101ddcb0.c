/* f_0x101ddcb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ddcb0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_204;
    uint32_t loc_208;
    uint32_t loc_214;
    uint32_t loc_218;
    uint32_t loc_21c;
    uint32_t loc_220;
    uint32_t loc_224;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 588u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ddcfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_101ddcfa;
    case 0x101ddd0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_101ddd0a;
    case 0x101ddd1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101ddd1d;
    case 0x101ddd23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101ddd23;
    case 0x101ddd2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101ddd2b;
    case 0x101ddd35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101ddd35;
    case 0x101ddd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); loc_214 = rd32(sp0 - 0x214u); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101ddd80;
    case 0x101dddf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dddf9;
    case 0x101dde12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101dde12;
    case 0x101dde18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101dde18;
    case 0x101dde2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dde2c;
    case 0x101dde4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101dde4e;
    default: break;
    }
#endif

    COW_AT(101ddcb0)
    wr32(sp0 - 0x218u, in_ebx);
    wr32(sp0 - 0x21cu, in_ebp);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    wr32(sp0 - 0x228u, sp0 - 0x210u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x210u, 0u);
    wr16(sp0 - 0x20eu, 0u);
    wr16(sp0 - 0x20cu, 0u);
    wr16(sp0 - 0x20au, 0u);
    g->esp = sp0 - 0x224u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x210u, t1, g->edx, 0, 1, sp0 - 0x210u);
    t2 = rd32(sp0 - 0x210u) + 4u;
    wr32(sp0 - 0x214u, t2);
    if (rd8(self + 0x16u) != 2u)
    {
        ebp = rd32(sp0 - 0x20cu) - rd32(sp0 - 0x210u) - 8u;
        loc_214 = t2;
    }
    else
    {
        loc_214 = t2;
    COW_AT(101ddcfa)
        wr32(sp0 - 0x214u, loc_214 + 0x10u);
        ebp = 0x14fu;
        loc_214 = loc_214 + 0x10u;
    }
    COW_AT(101ddd0a)
    wr32(sp0 - 0x208u, 0u);
    t3 = rd32(sp0 - 0x20eu) + 4u;
    wr32(sp0 - 0x204u, t3);
    edx = 0u;
    ebx = t3;
    loc_218 = in_ebx;
    loc_21c = in_ebp;
    loc_220 = in_esi;
    loc_224 = in_edi;
    loc_208 = 0u;
    loc_204 = t3;
L_101ddd23: ;
    COW_AT(101ddd23)
    if ((uint32_t)(int8_t)rd8(self + 0x14u) != edx) goto L_101ddd80;
    eax = (uint32_t)(int8_t)rd8(self + 0x14u);
    COW_AT(101ddd2b)
    if (rd32(self + 0x378u) == 0u) goto L_101ddd80;
    ecx = rd32(self + 0x378u);
    COW_AT(101ddd35)
    wr32(sp0 - 0x228u, 1u);
    wr32(sp0 - 0x22cu, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x230u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x234u, (uint32_t)(int16_t)loc_214);
    g->edx = (uint32_t)(int16_t)ebp;
    g->esp = sp0 - 0x224u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6060u), eax, ecx, g->edx, 1, 4, (uint32_t)(int16_t)loc_214, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)ebp, 1u);
    t5 = g->edx;
    wr32(sp0 - 0x238u, t4);
    g->edx = t5;
    g->esp = sp0 - 0x234u;
    t6 = cow_call_regs(g, COW_IMG(0x101c6020u), t4, rd32(self + 0x378u), g->edx, 1, 1, t4);
    t7 = g->edx;
    wr32(sp0 - 0x23cu, t6);
    g->edx = t7;
    g->esp = sp0 - 0x224u;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x378u), 6, t6, rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), 1u);
    t8 = g->edx;
    t9 = rd32(self + 0x378u);
    wr32(t9 + 0x6a8u, (uint32_t)(int16_t)loc_214);
    t10 = (uint32_t)(int16_t)ebx - 0x88u;
    t11 = rd32(sp0 - 0x204u);
    wr32(t9 + 0x6acu, t10);
    edx = t8;
    ebx = t11;
L_101dddf9: ;
    COW_AT(101dddf9)
    wr32(sp0 - 0x204u, ebx + 0x10u);
    t22 = rd32(sp0 - 0x208u) + 1u;
    t23 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x208u, t22);
    if ((int32_t)(t23 + 1u) < 3)
    {
        loc_204 = ebx + 0x10u;
        ebx = ebx + 0x10u;
        loc_208 = t22;
        goto L_101ddd1d;
    }
    eax = t22;
    COW_AT(101dde12)
    if (rd8(self + 0x16u) == 2u)
    {
    COW_AT(101dde18)
        t24 = (uint32_t)(int8_t)rd8(self + 0x17u);
        wr32(sp0 - 0x228u, t24);
        g->eax = t24;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t25 = cow_thiscall(g, COW_IMG(0x1020b4b0u), rd32(COW_IMG(0x10664494u)), 1, t24);
        t26 = g->edx;
        if (t25 == 0u)
        {
            eax = t25;
            edx = t26;
        }
        else
        {
            eax = t25;
    COW_AT(101dde2c)
            wr32(sp0 - 0x228u, 0u);
            wr32(sp0 - 0x22cu, 0u);
            wr32(sp0 - 0x230u, 0x80808080u);
            t27 = (uint32_t)(int16_t)rd16(sp0 - 0x20eu) + 8u;
            wr32(sp0 - 0x234u, t27);
            t28 = (uint32_t)(int16_t)rd16(sp0 - 0x210u) + 8u;
            wr32(sp0 - 0x238u, t28);
            g->eax = eax;
            g->edx = t28;
            g->esp = sp0 - 0x224u;
            t29 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t28, t27, 0x80808080u, 0u, 0u);
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
    }
    COW_AT(101dde4e)
    g->ebx = rd32(sp0 - 0x218u);
    g->esi = rd32(sp0 - 0x220u);
    g->edi = rd32(sp0 - 0x224u);
    g->ebp = rd32(sp0 - 0x21cu);
    g->edx = edx;
    return eax;
L_101ddd1d: ;
    COW_AT(101ddd1d)
    edx = loc_208;
    loc_218 = rd32(sp0 - 0x218u);
    loc_21c = rd32(sp0 - 0x21cu);
    loc_220 = rd32(sp0 - 0x220u);
    loc_224 = rd32(sp0 - 0x224u);
    loc_214 = rd32(sp0 - 0x214u);
    goto L_101ddd23;
L_101ddd80: ;
    COW_AT(101ddd80)
    wr32(sp0 - 0x228u, 0u);
    wr32(sp0 - 0x22cu, 1u);
    wr32(sp0 - 0x230u, 0x200u);
    wr32(sp0 - 0x234u, sp0 - 0x200u);
    t12 = edx * 0x29u + self + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
    edi = t12;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t13 = ~ecx - 1u;
    wr32(sp0 - 0x238u, t13);
    wr32(sp0 - 0x23cu, t12);
    t14 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x224u;
    cow_thiscall(g, COW_IMG(0x101b7280u), t14, 6, t12, t13, sp0 - 0x200u, 0x200u, 1u, 0u);
    t15 = g->ecx;
    wr32(sp0 - 0x228u, 0x200u);
    edi = sp0 - 0x200u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t16 = ~ecx - 1u;
    wr32(sp0 - 0x22cu, t16);
    wr32(sp0 - 0x230u, sp0 - 0x200u);
    g->eax = eax;
    t17 = cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x200u, 1, 3, sp0 - 0x200u, t16, 0x200u);
    t18 = g->edx;
    t19 = (t17 & 0xffffff00u) | rd8(self + 0x16u) == 1u;
    wr32(sp0 - 0x234u, t19);
    wr32(sp0 - 0x238u, 0x80808080u);
    wr32(sp0 - 0x23cu, sp0 - 0x200u);
    wr32(sp0 - 0x240u, ebx);
    t20 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x244u, t20);
    wr32(sp0 - 0x248u, ebp);
    g->edx = t20;
    g->esp = sp0 - 0x230u;
    cow_thiscall_cdecl(g, COW_IMG(0x101ca250u), sp0 - 0x200u, 6, ebp, t20, ebx, sp0 - 0x200u, 0x80808080u, t19);
    t21 = g->edx;
    edx = t21;
    goto L_101dddf9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ddcb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ddcfau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x224u;
        g->edi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x101ddd0au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x224u;
        g->edi = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x101ddd1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101ddd23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_214;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ddd2bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_214;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ddd35u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_214;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101ddd80u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_214;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        loc_214 = rd32(sp0 - 0x214u);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101dddf9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101dde12u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101dde18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101dde2cu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101dde4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_204;
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ddcb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ddcb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
