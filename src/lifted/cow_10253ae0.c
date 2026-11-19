/* f_0x10253ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10253ae0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t70;
    uint32_t t71;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10253b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10253b07;
    case 0x10253b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); goto E_10253b2a;
    case 0x10253b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); goto E_10253b32;
    case 0x10253b44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253b44;
    case 0x10253b6au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253b6a;
    case 0x10253bdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253bde;
    case 0x10253be3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253be3;
    case 0x10253bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253bed;
    case 0x10253bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253bf2;
    case 0x10253c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c01;
    case 0x10253c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c17;
    case 0x10253c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c2d;
    case 0x10253c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c3b;
    case 0x10253c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c48;
    case 0x10253c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c53;
    case 0x10253c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c59;
    case 0x10253c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c65;
    case 0x10253c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c6b;
    case 0x10253c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c8b;
    case 0x10253c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c91;
    case 0x10253c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253c9d;
    case 0x10253ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253ca5;
    case 0x10253caau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253caa;
    case 0x10253cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253cb6;
    case 0x10253ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253ccd;
    case 0x10253cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253cd3;
    case 0x10253cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253cf5;
    case 0x10253cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_10253cf8;
    case 0x10253d2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253d2a;
    case 0x10253d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253d32;
    case 0x10253d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10253d37;
    case 0x10253d44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_10253d44;
    case 0x10253d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); goto E_10253d7e;
    case 0x10253d92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10253d92;
    default: break;
    }
#endif

    COW_AT(10253ae0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, COW_IMG(0x10389d94u));
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x102bcc41u), g->eax, self, in_edx, 1, 13, COW_IMG(0x10389d94u), 0u, 0u, 0u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    if (t1 == 0u)
    {
        loc_4 = in_ebp;
        loc_2c = in_ebx;
        loc_30 = in_esi;
        loc_34 = in_edi;
        goto L_10253d92;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_8 = t1;
    COW_AT(10253b07)
    wr32(sp0 - 0x38u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t4 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xcu, t4);
    t7 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t7);
    g->eax = t7;
    g->esp = sp0 - 0x30u;
    t8 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, t5, t6, 1, 3, t7, rd32(sp0 - 0x38u), in_edi);
    t9 = g->edx;
    wr32(sp0 - 0x18u, t8);
    if (rd32(sp0 - 0xcu) == 0u) goto L_10253d7e;
    eax = t8;
    edx = t9;
    loc_18 = t8;
    COW_AT(10253b2a)
    if (eax == 0u) goto L_10253d7e;
    COW_AT(10253b32)
    wr32(sp0 - 0x38u, 0u);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t10);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t11 = cow_cdecl(g, COW_IMG(0x10316224u), 1, t10);
    t12 = g->edx;
    if (t11 == 0u)
    {
        edx = t12;
        goto L_10253b6a;
    }
    COW_AT(10253b44)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0xcu);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->eax = sp0 - 0xcu;
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x34u;
    t13 = cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 0x18u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x18u);
    t14 = g->ecx;
    wr32(sp0 - 0x44u, arg2);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10253820u), g->eax, t14, arg2, 1, 3, arg2, sp0 - 8u, sp0 - 0xcu);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 4u);
    return 0u;
L_10253b6a: ;
    COW_AT(10253b6a)
    wr32(sp0 - 0x38u, arg1);
    t15 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t15);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102c3b54u), 2, t15, arg1);
    t16 = rd32(sp0 - 8u);
    wr32(sp0 - 0x40u, t16);
    edi = arg2;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x3cu;
    t17 = cow_call_regs(g, COW_IMG(0x10253da0u), g->eax, g->ecx, t16, 1, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x44u, t17);
    t20 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t20);
    g->eax = t20;
    t21 = cow_call_regs(g, COW_IMG(0x102c3521u), g->eax, g->ecx, t19, 1, 3, t20, t17, rd32(sp0 - 0x40u));
    t22 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x4cu, t22);
    t23 = rd32(sp0 - 8u);
    wr32(sp0 - 0x50u, t23);
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x102bd021u), t21, g->ecx, t23, 1, 3, t23, t22, rd32(sp0 - 0x48u));
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, sp0 - 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x14u);
    wr32(sp0 - 0x68u, sp0 - 0x24u);
    wr32(sp0 - 0x6cu, sp0 - 0x20u);
    t24 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x70u, t24);
    t25 = rd32(sp0 - 8u);
    wr32(sp0 - 0x74u, t25);
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c2c58u), g->eax, g->ecx, t25, 1, 9, t25, t24, sp0 - 0x20u, sp0 - 0x24u, sp0 - 0x14u, sp0 - 0x10u, 0u, 0u, 0u);
    t26 = g->edx;
    t27 = rd32(sp0 - 0x20u);
    t28 = rd32(sp0 - 0x24u);
    wr32(arg2, t27);
    t29 = rd32(sp0 - 0x10u);
    wr32(arg2 + 4u, t28);
    if (t29 == 2u)
    {
        eax = t29;
        ecx = t28;
        edx = t26;
        goto L_10253c2d;
    }
    eax = t29;
    ecx = t28;
    edx = t26;
    COW_AT(10253bde)
    if (eax == 6u) goto L_10253c2d;
    COW_AT(10253be3)
    t30 = rd32(sp0 - 0x14u);
    if (t30 == 2u)
    {
        eax = t30 - 2u;
        cf = t30 < 2u;
        pf = PARITY((uint8_t)(t30 - 2u));
        zf = t30 == 2u;
        sf = (int32_t)(t30 - 2u) < 0;
        of = ((t30 ^ 2u) & (t30 ^ t30 - 2u)) >> 0x1fu;
    COW_AT(10253c17)
        wr32(arg2 + 8u, 4u);
        t34 = 1u << (rd32(arg2 + 8u) & 0x1fu);
        t35 = rd32(arg2 + 8u);
        wr32(arg2 + 0xcu, t34);
        ecx = t35;
        edx = t34;
    }
    else
    {
        eax = t30 - 2u;
        ecx = t30;
    COW_AT(10253bed)
        if (eax == 0xeu)
        {
            cf = eax < 0xeu;
            pf = PARITY((uint8_t)(eax - 0xeu));
            zf = eax == 0xeu;
            sf = (int32_t)(eax - 0xeu) < 0;
            of = ((eax ^ 0xeu) & (eax ^ eax - 0xeu)) >> 0x1fu;
            eax = eax - 0xeu;
    COW_AT(10253c01)
            wr32(arg2 + 8u, 8u);
            t32 = 1u << (rd32(arg2 + 8u) & 0x1fu);
            t33 = rd32(arg2 + 8u);
            wr32(arg2 + 0xcu, t32);
            ecx = t33;
            edx = t32;
        }
        else
        {
            cf = eax < 0xeu;
            pf = PARITY((uint8_t)(eax - 0xeu));
            zf = eax == 0xeu;
            sf = (int32_t)(eax - 0xeu) < 0;
            of = ((eax ^ 0xeu) & (eax ^ eax - 0xeu)) >> 0x1fu;
            eax = eax - 0xeu;
    COW_AT(10253bf2)
            wr32(arg2 + 8u, ecx);
            t31 = 1u << (ecx & 0x1fu);
            wr32(arg2 + 0xcu, t31);
            edx = t31;
        }
    }
L_10253c3b: ;
    COW_AT(10253c3b)
    wr32(sp0 - 0x38u, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t36 = cow_cdecl(g, COW_IMG(0x10253740u), 3, arg2, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_10253c53;
    }
    ecx = t37;
    edx = t38;
    COW_AT(10253c48)
    wr32(sp0 - 0x38u, 1u);
    t39 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t39);
    g->ebx = arg2;
    g->edi = edi;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x103161a8u), ecx, 2, t39, 1u);
    rt_fatal(g, COW_IMG(0x10253c4eu), "no way on");
    return 0;
L_10253c2d: ;
    COW_AT(10253c2d)
    wr32(arg2 + 8u, 0x18u);
    wr32(arg2 + 0xcu, 0u);
    goto L_10253c3b;
L_10253c53: ;
    COW_AT(10253c53)
    if ((rd8(sp0 - 0x10u) & 4u) != 0u)
    {
    COW_AT(10253c59)
        t40 = rd32(sp0 - 8u);
        wr32(sp0 - 0x38u, t40);
        g->eax = eax;
        g->ecx = t40;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t41 = cow_cdecl(g, COW_IMG(0x102be322u), 1, t40);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    }
    COW_AT(10253c65)
    if (rd32(sp0 - 0x14u) == 2u)
    {
    COW_AT(10253c6b)
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, 4u);
        wr32(sp0 - 0x40u, 0u);
        t44 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t44);
        g->ecx = ecx;
        g->edx = t44;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x102c34ffu), 4, t44, 0u, 4u, 1u);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0x48u, COW_IMG(0x10253e10u));
        t47 = rd32(sp0 - 8u);
        wr32(sp0 - 0x4cu, t47);
        g->eax = t47;
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x44u;
        t48 = cow_cdecl(g, COW_IMG(0x102beb98u), 2, t47, COW_IMG(0x10253e10u));
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    COW_AT(10253c8b)
    if (rd32(sp0 - 0x14u) == 0x10u)
    {
    COW_AT(10253c91)
        t51 = rd32(sp0 - 8u);
        wr32(sp0 - 0x38u, t51);
        g->ecx = t51;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x102be319u), 1, t51);
        t52 = g->ecx;
        t53 = g->edx;
        ecx = t52;
        edx = t53;
    }
    COW_AT(10253c9d)
    if (rd32(sp0 - 0x10u) == 2u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_10253caa;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(10253ca5)
    if (eax != 6u) goto L_10253cb6;
L_10253caa: ;
    COW_AT(10253caa)
    t54 = rd32(sp0 - 8u);
    wr32(sp0 - 0x38u, t54);
    g->edx = t54;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102c30eau), 1, t54);
    t55 = g->edx;
    edx = t55;
L_10253cb6: ;
    COW_AT(10253cb6)
    t56 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x38u, t56);
    t57 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t57);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall_cdecl(g, COW_IMG(0x102bd4d1u), t57, 3, t57, t56, rd32(sp0 - 0x34u));
    t58 = g->ecx;
    t59 = g->edx;
    if (rd32(arg2 + 0xcu) == 0u)
    {
        ecx = t58;
    }
    else
    {
        edx = t59;
    COW_AT(10253ccd)
        if (rd32(sp0 - 0x10u) != 3u)
        {
    COW_AT(10253d2a)
            if (rd32(sp0 - 0x14u) != 0x10u)
            {
                eax = rd32(sp0 - 0x14u);
            }
            else
            {
    COW_AT(10253d32)
                eax = 8u;
            }
    COW_AT(10253d37)
            t65 = rd32(arg2 + 0x1cu);
            wr32(sp0 - 0x38u, t65);
            wr32(sp0 - 0x3cu, eax);
            g->ecx = t65;
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x102c0815u), 6, eax, t65, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
            t66 = g->ecx;
            ecx = t66;
        }
        else
        {
    COW_AT(10253cd3)
            wr32(sp0 - 0x38u, sp0 - 0x1cu);
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            t60 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x40u, t60);
            t61 = rd32(sp0 - 8u);
            wr32(sp0 - 0x44u, t61);
            g->esp = sp0 - 0x34u;
            cow_cdecl(g, COW_IMG(0x102c2effu), 4, t61, t60, sp0 - 0x28u, sp0 - 0x1cu);
            if ((int32_t)rd32(sp0 - 0x1cu) <= (int32_t)rd32(arg2 + 0xcu))
            {
                eax = rd32(arg2 + 0xcu);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = rd32(arg2 + 0xcu);
    COW_AT(10253cf5)
                wr32(sp0 - 0x1cu, eax);
                loc_1c = eax;
            }
    COW_AT(10253cf8)
            t62 = rd32(arg2 + 0x1cu);
            edi = t62;
            eax = 0u;
            ecx = eax * 3u >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = eax * 3u & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t63 = rd32(sp0 - 0x28u);
            t64 = rd32(arg2 + 0x1cu);
            esi = t63;
            edi = t64;
            ecx = loc_1c * 3u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = loc_1c * 3u & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
    }
    COW_AT(10253d44)
    t67 = rd32(arg2 + 0x20u);
    wr32(sp0 - 0x38u, t67);
    t68 = rd32(sp0 - 8u);
    wr32(sp0 - 0x3cu, t68);
    g->eax = t68;
    g->esp = sp0 - 0x30u;
    t69 = cow_thiscall_cdecl(g, COW_IMG(0x102bd998u), ecx, 3, t68, t67, rd32(sp0 - 0x34u));
    t70 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x40u, t70);
    t71 = rd32(sp0 - 8u);
    wr32(sp0 - 0x44u, t71);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102bd9e5u), 3, t71, t70, rd32(sp0 - 0x3cu));
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    wr32(sp0 - 0x4cu, sp0 - 0xcu);
    wr32(sp0 - 0x50u, sp0 - 8u);
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x18u);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 4u);
    return 1u;
L_10253d7e: ;
    COW_AT(10253d7e)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0xcu);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x18u);
    loc_4 = rd32(sp0 - 4u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
L_10253d92: ;
    COW_AT(10253d92)
    g->ebx = loc_2c;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10253ae0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10253b07u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, in_edi);
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x2cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10253b2au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10253b32u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10253b44u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10253b6au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10253bdeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253be3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253bedu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253bf2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c01u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c17u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c2du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c3bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c48u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c59u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c65u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c6bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c8bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c91u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253c9du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253ca5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253caau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253cb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253ccdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253cd3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253cf5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10253cf8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10253d2au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253d32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253d37u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253d44u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x24u);
        wr32(sp0 - 0x64u, sp0 - 0x14u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10253d7eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10253d92u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10253ae0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10253ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
