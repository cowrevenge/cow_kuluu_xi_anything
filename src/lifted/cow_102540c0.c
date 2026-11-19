/* f_0x102540c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102540c0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
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
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
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
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102540e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102540e7;
    case 0x1025410au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_1025410a;
    case 0x10254112u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_10254112;
    case 0x10254124u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254124;
    case 0x1025414au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025414a;
    case 0x102541c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541c3;
    case 0x102541c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541c8;
    case 0x102541d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541d2;
    case 0x102541d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541d7;
    case 0x102541e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541e6;
    case 0x102541fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541fc;
    case 0x10254212u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254212;
    case 0x10254220u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254220;
    case 0x1025422du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025422d;
    case 0x10254238u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254238;
    case 0x1025423eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025423e;
    case 0x1025424au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025424a;
    case 0x10254250u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254250;
    case 0x10254270u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254270;
    case 0x10254276u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254276;
    case 0x10254282u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254282;
    case 0x1025428au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025428a;
    case 0x1025428fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025428f;
    case 0x1025429bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025429b;
    case 0x102542b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542b6;
    case 0x102542c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542c0;
    case 0x102542e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542e2;
    case 0x102542e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); goto E_102542e5;
    case 0x10254358u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254358;
    case 0x1025436eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025436e;
    case 0x10254376u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254376;
    case 0x1025437bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025437b;
    case 0x10254388u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254388;
    case 0x102543c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_102543c2;
    case 0x102543d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102543d6;
    default: break;
    }
#endif

    COW_AT(102540c0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, COW_IMG(0x10389d94u));
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x102bcc41u), g->eax, self, in_edx, 1, 13, COW_IMG(0x10389d94u), 0u, 0u, 0u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    if (t1 == 0u)
    {
        loc_4 = in_ebp;
        loc_38 = in_ebx;
        loc_3c = in_esi;
        loc_40 = in_edi;
        goto L_102543d6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_8 = t1;
    COW_AT(102540e7)
    wr32(sp0 - 0x44u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t4 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xcu, t4);
    t7 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x3cu;
    t8 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, t5, t6, 1, 3, t7, rd32(sp0 - 0x44u), in_edi);
    t9 = g->edx;
    wr32(sp0 - 0x1cu, t8);
    if (rd32(sp0 - 0xcu) == 0u) goto L_102543c2;
    eax = t8;
    edx = t9;
    loc_1c = t8;
    COW_AT(1025410a)
    if (eax == 0u) goto L_102543c2;
    COW_AT(10254112)
    wr32(sp0 - 0x44u, 0u);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t10);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t11 = cow_cdecl(g, COW_IMG(0x10316224u), 1, t10);
    t12 = g->edx;
    if (t11 == 0u)
    {
        edx = t12;
        goto L_1025414a;
    }
    COW_AT(10254124)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 8u);
    g->eax = sp0 - 0xcu;
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x40u;
    t13 = cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 0x1cu, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    t14 = g->ecx;
    wr32(sp0 - 0x50u, arg2);
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x10253820u), g->eax, t14, arg2, 1, 3, arg2, sp0 - 8u, sp0 - 0xcu);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 4u);
    return 0u;
L_1025414a: ;
    COW_AT(1025414a)
    wr32(sp0 - 0x44u, COW_IMG(0x10254090u));
    wr32(sp0 - 0x48u, arg1);
    t15 = rd32(sp0 - 8u);
    wr32(sp0 - 0x4cu, t15);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102c3cd4u), 5, t15, arg1, COW_IMG(0x10254090u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t16 = rd32(sp0 - 8u);
    wr32(sp0 - 0x50u, t16);
    edi = arg2;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x4cu;
    t17 = cow_call_regs(g, COW_IMG(0x10253da0u), g->eax, g->ecx, t16, 1, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x54u, t17);
    t20 = rd32(sp0 - 8u);
    wr32(sp0 - 0x58u, t20);
    g->eax = t20;
    t21 = cow_call_regs(g, COW_IMG(0x102c3521u), g->eax, g->ecx, t19, 1, 3, t20, t17, rd32(sp0 - 0x50u));
    t22 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x5cu, t22);
    t23 = rd32(sp0 - 8u);
    wr32(sp0 - 0x60u, t23);
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x102bd021u), t21, g->ecx, t23, 1, 3, t23, t22, rd32(sp0 - 0x58u));
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, sp0 - 0x10u);
    wr32(sp0 - 0x74u, sp0 - 0x18u);
    wr32(sp0 - 0x78u, sp0 - 0x28u);
    wr32(sp0 - 0x7cu, sp0 - 0x24u);
    t24 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x80u, t24);
    t25 = rd32(sp0 - 8u);
    wr32(sp0 - 0x84u, t25);
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x102c2c58u), g->eax, g->ecx, t25, 1, 9, t25, t24, sp0 - 0x24u, sp0 - 0x28u, sp0 - 0x18u, sp0 - 0x10u, 0u, 0u, 0u);
    t26 = g->edx;
    t27 = rd32(sp0 - 0x24u);
    t28 = rd32(sp0 - 0x28u);
    wr32(arg2, t27);
    t29 = rd32(sp0 - 0x10u);
    wr32(arg2 + 4u, t28);
    if (t29 == 2u)
    {
        eax = t29;
        ecx = t28;
        edx = t26;
        goto L_10254212;
    }
    eax = t29;
    ecx = t28;
    edx = t26;
    COW_AT(102541c3)
    if (eax == 6u) goto L_10254212;
    COW_AT(102541c8)
    t30 = rd32(sp0 - 0x18u);
    if (t30 == 2u)
    {
        eax = t30 - 2u;
        cf = t30 < 2u;
        pf = PARITY((uint8_t)(t30 - 2u));
        zf = t30 == 2u;
        sf = (int32_t)(t30 - 2u) < 0;
        of = ((t30 ^ 2u) & (t30 ^ t30 - 2u)) >> 0x1fu;
    COW_AT(102541fc)
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
    COW_AT(102541d2)
        if (eax == 0xeu)
        {
            cf = eax < 0xeu;
            pf = PARITY((uint8_t)(eax - 0xeu));
            zf = eax == 0xeu;
            sf = (int32_t)(eax - 0xeu) < 0;
            of = ((eax ^ 0xeu) & (eax ^ eax - 0xeu)) >> 0x1fu;
            eax = eax - 0xeu;
    COW_AT(102541e6)
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
    COW_AT(102541d7)
            wr32(arg2 + 8u, ecx);
            t31 = 1u << (ecx & 0x1fu);
            wr32(arg2 + 0xcu, t31);
            edx = t31;
        }
    }
L_10254220: ;
    COW_AT(10254220)
    wr32(sp0 - 0x44u, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t36 = cow_cdecl(g, COW_IMG(0x10253740u), 3, arg2, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_10254238;
    }
    ecx = t37;
    edx = t38;
    COW_AT(1025422d)
    wr32(sp0 - 0x44u, 1u);
    t39 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t39);
    g->ebx = arg2;
    g->edi = edi;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x103161a8u), ecx, 2, t39, 1u);
    rt_fatal(g, COW_IMG(0x10254233u), "no way on");
    return 0;
L_10254212: ;
    COW_AT(10254212)
    wr32(arg2 + 8u, 0x18u);
    wr32(arg2 + 0xcu, 0u);
    goto L_10254220;
L_10254238: ;
    COW_AT(10254238)
    if ((rd8(sp0 - 0x10u) & 4u) != 0u)
    {
    COW_AT(1025423e)
        t40 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t40);
        g->eax = eax;
        g->ecx = t40;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t41 = cow_cdecl(g, COW_IMG(0x102be322u), 1, t40);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    }
    COW_AT(1025424a)
    if (rd32(sp0 - 0x18u) == 2u)
    {
    COW_AT(10254250)
        wr32(sp0 - 0x44u, 1u);
        wr32(sp0 - 0x48u, 4u);
        wr32(sp0 - 0x4cu, 0u);
        t44 = rd32(sp0 - 8u);
        wr32(sp0 - 0x50u, t44);
        g->ecx = ecx;
        g->edx = t44;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102c34ffu), 4, t44, 0u, 4u, 1u);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0x54u, COW_IMG(0x10253e10u));
        t47 = rd32(sp0 - 8u);
        wr32(sp0 - 0x58u, t47);
        g->eax = t47;
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x50u;
        t48 = cow_cdecl(g, COW_IMG(0x102beb98u), 2, t47, COW_IMG(0x10253e10u));
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    COW_AT(10254270)
    if (rd32(sp0 - 0x18u) == 0x10u)
    {
    COW_AT(10254276)
        t51 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t51);
        g->ecx = t51;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102be319u), 1, t51);
        t52 = g->ecx;
        t53 = g->edx;
        ecx = t52;
        edx = t53;
    }
    COW_AT(10254282)
    if (rd32(sp0 - 0x10u) == 2u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_1025428f;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(1025428a)
    if (eax != 6u) goto L_1025429b;
L_1025428f: ;
    COW_AT(1025428f)
    t54 = rd32(sp0 - 8u);
    wr32(sp0 - 0x44u, t54);
    g->edx = t54;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102c30eau), 1, t54);
    t55 = g->edx;
    edx = t55;
L_1025429b: ;
    COW_AT(1025429b)
    t56 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t56);
    t57 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t57);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, COW_IMG(0x102bd4d1u), t57, 3, t57, t56, rd32(sp0 - 0x40u));
    t58 = g->ecx;
    t59 = g->edx;
    if (rd32(arg2 + 0xcu) == 0u)
    {
        ecx = t58;
    }
    else
    {
        edx = t59;
    COW_AT(102542b6)
        if (rd32(sp0 - 0x10u) != 3u)
        {
    COW_AT(1025436e)
            if (rd32(sp0 - 0x18u) != 0x10u)
            {
                eax = rd32(sp0 - 0x18u);
            }
            else
            {
    COW_AT(10254376)
                eax = 8u;
            }
    COW_AT(1025437b)
            t71 = rd32(arg2 + 0x1cu);
            wr32(sp0 - 0x44u, t71);
            wr32(sp0 - 0x48u, eax);
            g->ecx = t71;
            g->esp = sp0 - 0x30u;
            cow_cdecl(g, COW_IMG(0x102c0815u), 6, eax, t71, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
            t72 = g->ecx;
            ecx = t72;
        }
        else
        {
    COW_AT(102542c0)
            wr32(sp0 - 0x44u, sp0 - 0x14u);
            wr32(sp0 - 0x48u, sp0 - 0x2cu);
            t60 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x4cu, t60);
            t61 = rd32(sp0 - 8u);
            wr32(sp0 - 0x50u, t61);
            g->esp = sp0 - 0x40u;
            cow_cdecl(g, COW_IMG(0x102c2effu), 4, t61, t60, sp0 - 0x2cu, sp0 - 0x14u);
            if ((int32_t)rd32(sp0 - 0x14u) <= (int32_t)rd32(arg2 + 0xcu))
            {
                eax = rd32(arg2 + 0xcu);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(arg2 + 0xcu);
    COW_AT(102542e2)
                wr32(sp0 - 0x14u, eax);
                loc_14 = eax;
            }
    COW_AT(102542e5)
            t62 = rd32(arg2 + 0x1cu);
            edi = t62;
            eax = 0u;
            ecx = eax * 3u >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x20u, 0u);
            ecx = eax * 3u & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t63 = rd32(sp0 - 0x2cu);
            t64 = rd32(arg2 + 0x1cu);
            esi = t63;
            edi = t64;
            ecx = loc_14 * 3u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = loc_14 * 3u & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr32(sp0 - 0x44u, sp0 - 0x30u);
            wr32(sp0 - 0x48u, sp0 - 0x34u);
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            t65 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x50u, t65);
            t66 = rd32(sp0 - 8u);
            wr32(sp0 - 0x54u, t66);
            g->esp = sp0 - 0x40u;
            cow_cdecl(g, COW_IMG(0x102c2fc7u), 5, t66, t65, sp0 - 0x20u, sp0 - 0x34u, sp0 - 0x30u);
            t67 = rd32(arg2 + 0xcu);
            t68 = rd32(arg2 + 0x28u);
            edi = t68;
            eax = 0x80808080u;
            ecx = t67 >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t67 & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (0u)
            {
    COW_AT(10254358)
                t69 = rd32(sp0 - 0x14u);
                t70 = rd32(arg2 + 0x28u);
                esi = 0u;
                edi = t70;
                ecx = t69 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t69 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
        }
    }
    COW_AT(10254388)
    t73 = rd32(arg2 + 0x20u);
    wr32(sp0 - 0x44u, t73);
    t74 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t74);
    g->eax = t74;
    g->esp = sp0 - 0x3cu;
    t75 = cow_thiscall_cdecl(g, COW_IMG(0x102bd998u), ecx, 3, t74, t73, rd32(sp0 - 0x40u));
    t76 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t76);
    t77 = rd32(sp0 - 8u);
    wr32(sp0 - 0x50u, t77);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bd9e5u), 3, t77, t76, rd32(sp0 - 0x48u));
    wr32(sp0 - 0x54u, sp0 - 0x1cu);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 4u);
    return 1u;
L_102543c2: ;
    COW_AT(102543c2)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 8u);
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
L_102543d6: ;
    COW_AT(102543d6)
    g->ebx = loc_38;
    g->esi = loc_3c;
    g->edi = loc_40;
    g->ebp = loc_4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102540c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102540e7u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, in_edi);
        wr32(sp0 - 0x3cu, in_esi);
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1025410au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
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
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254112u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
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
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254124u:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025414au:
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541c3u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541c8u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541d2u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541d7u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541e6u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541fcu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254212u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254220u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025422du:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254238u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025423eu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025424au:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254250u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254270u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254276u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254282u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025428au:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025428fu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025429bu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102542b6u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102542c0u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102542e2u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102542e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
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
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10254358u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x34u);
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1025436eu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254376u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025437bu:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10254388u:
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
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102543c2u:
    {
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
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102543d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
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
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102540c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102540c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
