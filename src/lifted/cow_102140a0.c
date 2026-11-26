/* f_0x102140a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102140a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_c0;
    uint32_t loc_c4;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
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
    cow_frame(g, sp0, 208u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102140bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0xacu); g->ebp = rd32(sp0 - 0xacu); goto E_102140ba;
    case 0x102140d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102140d4;
    case 0x102140ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); goto E_102140eb;
    case 0x1021417bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1021417b;
    case 0x1021418cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); goto E_1021418c;
    case 0x10214197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214197;
    case 0x102141acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c0 = rd32(sp0 - 0xc0u); goto E_102141ac;
    case 0x102141b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102141b1;
    case 0x102141bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102141bc;
    case 0x102141e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102141e1;
    case 0x10214212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c0 = rd32(sp0 - 0xc0u); goto E_10214212;
    case 0x10214217u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214217;
    case 0x1021421du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_1021421d;
    case 0x10214222u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214222;
    case 0x10214225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214225;
    case 0x102142a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102142a1;
    case 0x102142b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142b6;
    case 0x102142c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142c4;
    case 0x102142cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142cf;
    case 0x102142d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142d7;
    case 0x102142dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142df;
    case 0x102142e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_102142e5;
    case 0x102142fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102142fd;
    case 0x1021435fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1021435f;
    case 0x10214373u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214373;
    case 0x1021437cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1021437c;
    case 0x102143e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102143e1;
    case 0x102143e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102143e5;
    case 0x102143f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102143f9;
    case 0x1021440au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); goto E_1021440a;
    case 0x10214410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10214410;
    case 0x1021442bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1021442b;
    case 0x10214432u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214432;
    case 0x10214439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214439;
    case 0x10214445u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214445;
    case 0x1021444eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1021444e;
    case 0x10214456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214456;
    case 0x1021445du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1021445d;
    case 0x10214464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10214464;
    default: break;
    }
#endif

    COW_AT(102140a0)
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xa8u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = self;
        edx = in_edx;
        loc_ac = in_ebp;
        loc_a8 = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(102140ba)
        t1 = rd32(eax + 4u);
        wr32(sp0 - 0x9cu, t1);
        wr32(sp0 - 0xb0u, sp0 - 0x9cu);
        t2 = rd32(eax + 8u);
        wr32(sp0 - 0x98u, t2);
        g->eax = sp0 - 0x9cu;
        g->esp = sp0 - 0xacu;
        COW_RET(0x102140d4u);
        t3 = cow_fastcall(g, COW_IMG(0x10215050u), self, t2, 1, sp0 - 0x9cu);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(102140d4)
        t6 = rd16(self + 0x178u);
        wr16(self + 0x178u, (uint16_t)(((t6 ^ eax) & 0xfu) ^ t6));
        edx = ((t6 ^ eax) & 0xfu) ^ ((ecx & 0xffff0000u) | t6);
        ecx = (ecx & 0xffff0000u) | t6;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
    }
    COW_AT(102140eb)
    t7 = rd16(self + 0x16au);
    t8 = rd16(self + 0x17au);
    t9 = rd16(self + 0x166u);
    wr16(self + 0x18eu, (uint16_t)t9);
    wr32(sp0 - 0xb0u, in_ebx);
    wr32(sp0 - 0xb4u, in_esi);
    wr16(self + 0x190u, (uint16_t)(t7 + t8));
    wr32(sp0 - 0xb8u, in_edi);
    t10 = rd16(self + 0x17cu);
    wr16(self + 0x18au, (uint16_t)((uint16_t)t9 + t10));
    wr16(self + 0x18cu, (uint16_t)(rd16(self + 0x17eu) + (uint16_t)(t7 + t8)));
    t11 = rd16(self + 0x184u);
    t12 = rd16(self + 0x168u);
    t13 = rd16(self + 0x166u);
    wr16(self + 0x194u, (uint16_t)(rd16(self + 0x16au) + (uint16_t)(rd16(self + 0x186u) - rd16(self + 0x16cu))));
    wr16(self + 0x192u, (uint16_t)((uint16_t)(t11 - t12) - t13));
    if ((int32_t)(rd32(self + 0x130u) - 1u) > 0)
    {
        eax = rd32(self + 0x130u) - 1u;
        ecx = rd32(self + 0x130u);
        edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t11 - t12) - t13);
        ebx = rd32(self + 0xcu);
        goto L_10214197;
    }
    eax = rd32(self + 0x130u) - 1u;
    edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t11 - t12) - t13);
    ebx = rd32(self + 0xcu);
    COW_AT(1021417b)
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 8u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664530u));
    g->edx = edx;
    t14 = rd32(COW_IMG(0x10664530u));
    g->esp = sp0 - 0xc0u;
    COW_RET(0x1021418cu);
    t15 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 8u);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(1021418c)
    wr32(sp0 - 0xc4u, eax);
    wr32(sp0 - 0xc8u, sp0 - 0x94u);
    loc_c0 = 0u;
    loc_c4 = eax;
    eax = sp0 - 0x94u;
L_1021421d: ;
    COW_AT(1021421d)
    g->ebx = ebx;
    g->esp = sp0 - 0xbcu;
    COW_RET(0x10214222u);
    cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x94u, loc_c4, loc_c0);
    COW_AT(10214222)
L_10214225: ;
    COW_AT(10214225)
    t33 = rd32(ebx + 0xcu) - 1u;
    wr32(sp0 - 0xbcu, 0x80808000u);
    t34 = rd32(ebx + 8u);
    esi = sp0 - 0x94u;
    edi = t34;
    ecx = t33 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t33 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t35 = rd32(ebx + 0xcu);
    t36 = rd32(ebx + 8u);
    wr8(t35 + t36 - 1u, 0u);
    t37 = rd16(self + 0x16au);
    t38 = rd16(self + 0x166u);
    wr16(ebx + 0x16u, (uint16_t)t37);
    wr16(ebx + 0x14u, (uint16_t)t38);
    t39 = rd16(self + 0x18au);
    wr16(ebx + 0x10u, (uint16_t)((uint16_t)t38 + t39));
    wr16(ebx + 0x12u, (uint16_t)((uint16_t)t37 + rd16(self + 0x18cu)));
    wr32(sp0 - 0xc0u, self + 0x17cu);
    t40 = rd16(self + 0x184u);
    wr16(ebx + 0x18u, (uint16_t)t40);
    wr16(ebx + 0x1au, 0u);
    g->esp = sp0 - 0xb8u;
    COW_RET(0x102142a1u);
    cow_fastcall(g, COW_IMG(0x10211ec0u), ebx, (t36 & 0xffff0000u) | t40, 2, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu));
    esi = ebx + 0x10u;
    COW_AT(102142a1)
    wr32(self + 0x134u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa0u, self + 0x10u);
    eax = 0u;
    edx = esi;
    edi = 0u;
    loc_a4 = 0u;
    loc_a0 = self + 0x10u;
    loc_a8 = rd32(sp0 - 0xa8u);
L_102142b6: ;
    COW_AT(102142b6)
    if (rd32(loc_a0) != 0u)
    {
        ecx = rd32(loc_a0);
    COW_AT(102142c4)
        if ((uint8_t)arg1 == 0u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
            goto L_102142df;
        }
        ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(102142cf)
        if (eax != rd32(self + 0x138u)) goto L_102142df;
    COW_AT(102142d7)
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x28u) | 2u;
L_102142e5: ;
    COW_AT(102142e5)
        wr8(ecx + 0x28u, (uint8_t)ebx);
        if (eax != rd32(self + 0x130u) - 1u)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x174u);
            ebx = rd32(self + 0x130u) - 1u;
            esi = ecx + 0x10u;
    COW_AT(1021437c)
            t52 = rd16(edx + 6u);
            t53 = rd16(edx + 0xau);
            t54 = rd16(self + 0x170u);
            wr16(esi + 4u, (uint16_t)t54);
            wr16(esi + 6u, (uint16_t)(t52 + (uint16_t)((uint16_t)eax + t53)));
            t55 = rd16(self + 0x18au);
            wr16(esi, (uint16_t)((uint16_t)t54 + t55));
            wr16(esi + 2u, (uint16_t)(rd16(self + 0x18cu) + (uint16_t)(t52 + (uint16_t)((uint16_t)eax + t53))));
            wr32(sp0 - 0xbcu, arg2);
            t56 = rd16(self + 0x192u);
            t57 = rd16(self + 0x172u);
            t58 = rd16(self + 0x170u);
            wr16(esi + 0xau, 0u);
            wr16(esi + 8u, (uint16_t)((uint16_t)(t56 - t57) - t58));
            wr32(sp0 - 0xc0u, self + 0x17cu);
            g->eax = self + 0x17cu;
            g->esp = sp0 - 0xb8u;
            COW_RET(0x102143e1u);
            t59 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, arg2, 2, self + 0x17cu, rd32(sp0 - 0xbcu));
            t60 = g->edx;
            eax = t59;
            edx = t60;
            ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t54 + t55);
    COW_AT(102143e1)
            if ((uint8_t)eax != 1u)
            {
                loc_a8 = rd32(sp0 - 0xa8u);
            }
            else
            {
    COW_AT(102143e5)
                wr32(sp0 - 0xbcu, edi);
                wr32(sp0 - 0xc0u, esi);
                wr32(sp0 - 0xc4u, esi);
                wr32(sp0 - 0xc8u, sp0 - 0x9cu);
                t61 = rd32(sp0 - 0xa8u);
                wr32(sp0 - 0xccu, t61);
                g->eax = sp0 - 0x9cu;
                g->esp = sp0 - 0xb8u;
                COW_RET(0x102143f9u);
                t62 = cow_thiscall(g, COW_IMG(0x10214b30u), self, 5, t61, sp0 - 0x9cu, esi, esi, edi);
                eax = t62;
    COW_AT(102143f9)
                wr32(sp0 - 0xa8u, eax);
                t63 = rd32(self + 0x134u) + 1u;
                wr32(self + 0x134u, t63);
                loc_a8 = rd32(sp0 - 0xa8u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x174u);
            ebx = rd32(self + 0x130u) - 1u;
            esi = ecx + 0x10u;
    COW_AT(102142fd)
            wr32(sp0 - 0xbcu, 0x80808080u);
            t41 = rd16(edx + 6u);
            t42 = rd16(edx + 0xau);
            t43 = rd16(self + 0x170u);
            wr16(esi + 4u, (uint16_t)t43);
            wr16(esi + 6u, (uint16_t)(t41 + (uint16_t)((uint16_t)eax + t42)));
            t44 = rd16(self + 0x18au);
            wr16(esi, (uint16_t)((uint16_t)t43 + t44));
            t45 = rd16(self + 0x18cu);
            wr16(esi + 2u, (uint16_t)(t45 + (uint16_t)(t41 + (uint16_t)((uint16_t)eax + t42))));
            t46 = rd16(self + 0x192u);
            t47 = rd16(self + 0x172u);
            t48 = rd16(self + 0x170u);
            wr16(esi + 0xau, 0u);
            wr16(esi + 8u, (uint16_t)((uint16_t)(t46 - t47) - t48));
            wr32(sp0 - 0xc0u, self + 0x17cu);
            g->eax = self + 0x17cu;
            g->esp = sp0 - 0xb8u;
            COW_RET(0x1021435fu);
            t49 = cow_fastcall(g, COW_IMG(0x10212050u), ecx, ((edx | t43) & 0xffff0000u) | (uint16_t)(t45 + (uint16_t)(t41 + (uint16_t)((uint16_t)eax + t42))), 2, self + 0x17cu, rd32(sp0 - 0xbcu));
            eax = t49;
            ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t43 + t44);
    COW_AT(1021435f)
            wr32(sp0 - 0xbcu, edi);
            wr32(sp0 - 0xc0u, esi);
            wr32(sp0 - 0xc4u, esi);
            wr32(sp0 - 0xc8u, sp0 - 0x9cu);
            t50 = rd32(sp0 - 0xa8u);
            wr32(sp0 - 0xccu, t50);
            g->eax = eax;
            g->esp = sp0 - 0xb8u;
            COW_RET(0x10214373u);
            t51 = cow_thiscall(g, COW_IMG(0x10214b30u), self, 5, t50, sp0 - 0x9cu, esi, esi, edi);
            eax = t51;
    COW_AT(10214373)
            wr32(sp0 - 0xa8u, eax);
            loc_a8 = eax;
        }
    COW_AT(1021440a)
        eax = rd32(sp0 - 0xa4u);
        edx = esi;
        loc_a0 = rd32(sp0 - 0xa0u);
    }
    COW_AT(10214410)
    wr32(sp0 - 0xa4u, eax + 1u);
    wr32(sp0 - 0xa0u, loc_a0 + 4u);
    if ((int16_t)(edi + 1u) < 31)
    {
        edi = edi + 1u;
        loc_a4 = eax + 1u;
        eax = eax + 1u;
        loc_a0 = loc_a0 + 4u;
        goto L_102142b6;
    }
    eax = eax + 1u;
    esi = loc_a0 + 4u;
    edi = edi + 1u;
    COW_AT(1021442b)
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    COW_RET(0x10214432u);
    t64 = cow_call_regs(g, COW_IMG(0x10214470u), eax, self, g->edx, 1, 0);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(10214432)
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    COW_RET(0x10214439u);
    cow_thiscall(g, COW_IMG(0x10214820u), self, 0);
    t66 = g->edx;
    edx = t66;
    COW_AT(10214439)
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        ebx = rd32(sp0 - 0xb0u);
        esi = rd32(sp0 - 0xb4u);
        edi = rd32(sp0 - 0xb8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = rd32(sp0 - 0xb0u);
        esi = rd32(sp0 - 0xb4u);
        edi = rd32(sp0 - 0xb8u);
    COW_AT(10214445)
        t67 = rd8(self + 0x178u);
        if ((t67 & 0xfu) != 0u)
        {
    COW_AT(1021444e)
            t68 = rd16(sp0 - 0xa8u);
            if ((uint16_t)t68 == 0u)
            {
    COW_AT(10214456)
                g->esp = sp0 - 0xacu;
                COW_RET(0x1021445du);
                cow_thiscall(g, COW_IMG(0x10215030u), self, 0);
    COW_AT(1021445d)
                t69 = rd8(self + 0x178u);
                wr8(self + 0x178u, t69 & 0xf0u);
            }
        }
    }
    COW_AT(10214464)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0xacu);
    return;
L_10214197: ;
    COW_AT(10214197)
    t18 = rd32(self + 0x134u);
    wr32(sp0 - 0xbcu, t18);
    wr32(sp0 - 0xc0u, eax);
    wr32(sp0 - 0xc4u, 8u);
    if ((int32_t)ecx < 31)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        loc_c0 = eax;
        goto L_10214212;
    }
    ecx = rd32(COW_IMG(0x10664530u));
    loc_c0 = eax;
    COW_AT(102141ac)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xc0u;
    COW_RET(0x102141b1u);
    t19 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 8u);
    t20 = g->ecx;
    eax = t19;
    ecx = t20;
    COW_AT(102141b1)
    wr32(sp0 - 0xc4u, eax);
    wr32(sp0 - 0xc8u, sp0 - 0x94u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0x94u;
    g->esp = sp0 - 0xbcu;
    COW_RET(0x102141bcu);
    cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x94u, eax, rd32(sp0 - 0xc0u));
    t21 = g->ecx;
    t22 = g->edx;
    ecx = t21;
    edx = t22;
    COW_AT(102141bc)
    edi = sp0 - 0x94u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0xb8u < sp0 - 0xc8u;
    pf = PARITY((uint8_t)(sp0 - 0xb8u));
    af = (sp0 - 0xc8u ^ 0x10u ^ sp0 - 0xb8u) >> 4u & 1u;
    zf = sp0 == 0xb8u;
    sf = (int32_t)(sp0 - 0xb8u) < 0;
    of = ((sp0 - 0xc8u ^ sp0 - 0xb8u) & (sp0 - 0xb8u ^ 0x10u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0xbcu, 7u);
    t23 = rd16(COW_IMG(0x10350e4cu));
    t24 = rd32(COW_IMG(0x10664530u));
    wr16(edi - 1u, (uint16_t)t23);
    g->eax = (eax & 0xffff0000u) | t23;
    g->ecx = t24;
    g->esp = sp0 - 0xb8u;
    COW_RET(0x102141e1u);
    t25 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, rd32(sp0 - 0xbcu));
    t26 = g->ecx;
    eax = t25;
    ecx = t26;
    COW_AT(102141e1)
    t27 = eax;
    edi = t27;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t28 = edi - ~ecx;
    t29 = ecx;
    edi = sp0 - 0x94u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t30 = edi;
    esi = t28;
    edi = t30 - 1u;
    ecx = ~t29 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~t29 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    goto L_10214225;
L_10214212: ;
    COW_AT(10214212)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xc0u;
    COW_RET(0x10214217u);
    t31 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 8u);
    t32 = g->ecx;
    eax = t31;
    ecx = t32;
    COW_AT(10214217)
    wr32(sp0 - 0xc4u, eax);
    wr32(sp0 - 0xc8u, sp0 - 0x94u);
    edx = sp0 - 0x94u;
    loc_c0 = rd32(sp0 - 0xc0u);
    loc_c4 = eax;
    goto L_1021421d;
L_102142df: ;
    COW_AT(102142df)
    ebx = (ebx & 0xffffff00u) | (rd8(ecx + 0x28u) & 0xfdu);
    goto L_102142e5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102140a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102140bau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xa8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102140d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102140ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a8;
        uint32_t loc_ac;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1021417bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1021418cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10214197u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102141acu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xc4u, 8u);
        (void)sp0;
        return 1;
    }
    case 0x102141b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x102141bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xc8u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x102141e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214212u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xc4u, 8u);
        (void)sp0;
        return 1;
    }
    case 0x10214217u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x1021421du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_c0;
        uint32_t loc_c4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xc8u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10214222u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xc8u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10214225u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142a1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102142b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142c4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102142fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1021435fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214373u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1021437cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102143e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102143e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x102143f9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1021440au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214410u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1021442bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214432u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214439u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10214445u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
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
    case 0x1021444eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
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
    case 0x10214456u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
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
    case 0x1021445du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
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
    case 0x10214464u:
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
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102140a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102140a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
