/* f_0x10147ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10147ac0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d64;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_e0;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
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
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 268u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10147ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xe0u); goto E_10147ad6;
    case 0x10147ae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xe0u); goto E_10147ae1;
    case 0x10147aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xe0u); goto E_10147aee;
    case 0x10147b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b16;
    case 0x10147b20u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b20;
    case 0x10147b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b30;
    case 0x10147b35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b35;
    case 0x10147b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b3a;
    case 0x10147b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b41;
    case 0x10147b44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b44;
    case 0x10147b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b46;
    case 0x10147b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b4d;
    case 0x10147b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b51;
    case 0x10147b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b63;
    case 0x10147b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b75;
    case 0x10147b79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147b79;
    case 0x10147ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147ba4;
    case 0x10147bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_e8 = rd32(sp0 - 0xe8u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10147bba;
    case 0x10147bc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_e8 = rd32(sp0 - 0xe8u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10147bc3;
    case 0x10147beau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10147bea;
    case 0x10147c26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147c26;
    case 0x10147c33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147c33;
    case 0x10147c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_e8 = rd32(sp0 - 0xe8u); goto E_10147c4d;
    case 0x10147c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147c67;
    case 0x10147c81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147c81;
    case 0x10147c98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_e8 = rd32(sp0 - 0xe8u); goto E_10147c98;
    case 0x10147cb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147cb0;
    case 0x10147cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_e8 = rd32(sp0 - 0xe8u); goto E_10147cb8;
    case 0x10147d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147d50;
    case 0x10147d5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147d5d;
    case 0x10147d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10147d62;
    case 0x10147d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147d9e;
    case 0x10147decu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147dec;
    case 0x10147e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147e37;
    case 0x10147e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_e8 = rd32(sp0 - 0xe8u); goto E_10147e69;
    case 0x10147ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10147ea2;
    default: break;
    }
#endif

    COW_AT(10147ac0)
    wr32(sp0 - 0xe0u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xe0u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        edi = in_edi;
        loc_e0 = in_esi;
        goto L_10147ea2;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10147ad6)
    if (rd8(self + 0x1cu) != 0u)
    {
        edi = in_edi;
        loc_e0 = in_esi;
        goto L_10147bba;
    }
    COW_AT(10147ae1)
    if (rd32(COW_IMG(0x10578768u)) == 0u)
    {
        edi = in_edi;
        loc_e0 = in_esi;
        goto L_10147bba;
    }
    eax = rd32(COW_IMG(0x10578768u));
    COW_AT(10147aee)
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0xe8u, 0x4eu);
    wr32(sp0 - 0xecu, 0xeu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4eu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xf0u, 0x4eu);
    edi = t4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0xf4u, 0xeu);
    t7 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t7;
    g->esp = sp0 - 0xecu;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4eu);
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    edx = sp0 - 0xc8u;
    edi = t7;
L_10147b16: ;
    COW_AT(10147b16)
    t10 = rd8(eax);
    wr8(edx, (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        edx = edx + 1u;
        goto L_10147b16;
    }
    edx = edx + 1u;
    COW_AT(10147b20)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10147b41;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(10147b30)
    if (eax == 2u) goto L_10147b3a;
    COW_AT(10147b35)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10147b44;
    }
L_10147b3a: ;
    COW_AT(10147b3a)
    eax = 1u;
L_10147b46: ;
    COW_AT(10147b46)
    t11 = rd32(COW_IMG(0x10147eacu) + eax * 4u);
    switch (t11 - RD)
    {
    case 0x10147b4du: goto L_10147b4d;
    case 0x10147b51u: goto L_10147b51;
    case 0x10147b63u: goto L_10147b63;
    default: rt_fatal(g, COW_IMG(0x10147b46u), "switch");
    }
    return 0;
L_10147b41: ;
    COW_AT(10147b41)
    cf = eax < 3u;
    zf = eax == 3u;
L_10147b44: ;
    COW_AT(10147b44)
    if (!cf && !zf) goto L_10147b75;
    goto L_10147b46;
L_10147b4d: ;
    COW_AT(10147b4d)
    eax = 0u;
L_10147b79: ;
    COW_AT(10147b79)
    wr32(sp0 - 0xe8u, eax);
    t16 = (uint16_t)rd32(COW_IMG(0x10485678u));
    wr32(sp0 - 0xecu, t16);
    wr32(sp0 - 0xf0u, 0xc8u - edi);
    t17 = edi + sp0 - 0xc8u;
    wr32(sp0 - 0xf4u, t17);
    g->eax = 0xc8u - edi;
    t18 = rd32(COW_IMG(0x10578768u));
    g->esp = sp0 - 0xe4u;
    t19 = cow_fastcall(g, COW_IMG(0x10157120u), t18, t16, 4, t17, 0xc8u - edi, t16, eax);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        ecx = t20;
        edx = t21;
        edi = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
    }
    else
    {
        eax = t19;
        edi = rd32(sp0 - 0xe4u);
    COW_AT(10147ba4)
        wr32(sp0 - 0xe4u, 2u);
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        g->edx = sp0 - 0xc8u;
        t22 = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 0xe0u;
        cow_thiscall(g, COW_IMG(0x1013a320u), t22, 2, sp0 - 0xc8u, 2u);
        t23 = g->ecx;
        t24 = g->edx;
        wr8(self + 0x1cu, 1u);
        ecx = t23;
        edx = t24;
        loc_e0 = rd32(sp0 - 0xe0u);
    }
L_10147bba: ;
    COW_AT(10147bba)
    if ((uint8_t)rd32(COW_IMG(0x10485684u)) < 3u)
    {
        eax = rd32(COW_IMG(0x10485684u));
    COW_AT(10147bc3)
        wr32(sp0 - 0xe4u, 0u);
        wr32(sp0 - 0xe8u, 0u);
        wr32(sp0 - 0xecu, 0x80808080u);
        t25 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x12u;
        wr32(sp0 - 0xf0u, t25);
        t26 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x37u;
        wr32(sp0 - 0xf4u, t26);
        g->edx = t26;
        t27 = rd32(self + (uint8_t)eax * 4u + 0x40u);
        g->esp = sp0 - 0xe0u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t27, 5, t26, t25, 0x80808080u, 0u, 0u);
        t28 = g->ecx;
        t29 = g->edx;
        ecx = t28;
        edx = t29;
        loc_e0 = rd32(sp0 - 0xe0u);
    }
    COW_AT(10147bea)
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, rd16(COW_IMG(0x1048567eu)));
    wr32(sp0 - 0xecu, 4u);
    g->eax = rd16(COW_IMG(0x1048567eu));
    g->ecx = ecx;
    g->edx = edx;
    t30 = rd16(COW_IMG(0x1048567eu));
    g->esp = sp0 - 0xe4u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 4u, t30);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xe8u, t31);
    t34 = (t32 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x34u);
    wr32(sp0 - 0xecu, t34);
    t35 = (t33 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5eu);
    wr32(sp0 - 0xf0u, t35);
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0xccu;
    t36 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t35, t34, t31, 0x80808080u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
    t37 = g->ecx;
    t38 = g->edx;
    g->ecx = t37;
    g->edx = t38;
    g->esp = sp0 - 0xe0u;
    t39 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        edx = t41;
        goto L_10147c67;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(10147c26)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t42 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 == 0u)
    {
        ecx = t43;
        goto L_10147cb8;
    }
    ecx = t43;
    edx = t44;
    COW_AT(10147c33)
    t45 = rd32(COW_IMG(0x10482f98u)) >> 0x12u & 0xfu;
    wr32(sp0 - 0xe4u, t45);
    wr32(sp0 - 0xe8u, 1u);
    g->eax = t45;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t46 = cow_cdecl(g, COW_IMG(0x10107320u), 2, 1u, t45);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 == 0u)
    {
        ecx = t47;
        goto L_10147cb8;
    }
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(10147c4d)
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, eax);
    t49 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0xecu, t49);
    t50 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x32u);
    wr32(sp0 - 0xf0u, t50);
    ecx = t49;
    edx = t50;
    loc_e8 = eax;
    loc_ec = t49;
    loc_f0 = t50;
L_10147cb0: ;
    COW_AT(10147cb0)
    g->ecx = ecx;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, loc_f0, loc_ec, loc_e8, 0x80808080u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
    t57 = g->ecx;
    ecx = t57;
L_10147cb8: ;
    COW_AT(10147cb8)
    wr32(sp0 - 0xe4u, rd16(COW_IMG(0x1048567au)));
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->eax = sp0 - 0xd8u;
    g->edx = rd16(COW_IMG(0x1048567au));
    t58 = rd16(COW_IMG(0x1048567au));
    g->esp = sp0 - 0xd8u;
    t59 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t58, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t60 = g->edx;
    wr32(sp0 - 0xf0u, 0x3f800000u);
    wr32(sp0 - 0xf4u, 0x3f800000u);
    wr32(sp0 - 0xf8u, 1u);
    wr32(sp0 - 0xfcu, 0x80808080u);
    wr32(sp0 - 0x100u, sp0 - 0xd8u);
    t61 = (t60 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
    wr32(sp0 - 0x104u, t61);
    t62 = (t59 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x40u);
    wr32(sp0 - 0x108u, t62);
    g->esp = sp0 - 0xecu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0xd8u, 7, t62, t61, sp0 - 0xd8u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t63 = (uint16_t)rd32(COW_IMG(0x1048567cu));
    wr32(sp0 - 0xdcu, t63);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, t63);
    d64 = fr(g, (double)(int32_t)t63 * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(sp0 - 0xe8u, (float)(double)(float)d64);
    t65 = rd32(self + 0x50u);
    wr32(sp0 - 0xecu, t65);
    t66 = rd32(self + 0x4cu);
    wr32(sp0 - 0xf0u, t66);
    t67 = (t63 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x54u);
    wr32(sp0 - 0xf4u, t67);
    t68 = (t65 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5cu);
    wr32(sp0 - 0xf8u, t68);
    g->edi = edi;
    g->eax = t66;
    g->ecx = t67;
    g->edx = t68;
    g->esp = sp0 - 0xbcu;
    t69 = cow_cdecl(g, COW_IMG(0x101caec0u), 15, t68, t67, t66, t65, cow_f2bits((double)(float)d64), 0u, rd32(sp0 - 0xe0u), t63, rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u));
    t70 = g->ecx;
    t71 = g->edx;
    g->ecx = t70;
    g->edx = t71;
    g->esp = sp0 - 0xe0u;
    t72 = cow_call_regs(g, COW_IMG(0x10087b20u), t69, g->ecx, g->edx, 1, 0);
    t73 = g->ecx;
    t74 = g->edx;
    if ((uint8_t)t72 == 0u)
    {
        eax = t72;
        edx = t74;
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_10147ea2;
    }
    ecx = t73;
    edx = t74;
    COW_AT(10147d50)
    if ((int32_t)(rd32(COW_IMG(0x10482f9cu)) >> 2u & 3u) >= 0)
    {
        eax = rd32(COW_IMG(0x10482f9cu)) >> 2u & 3u;
    COW_AT(10147d5d)
        if ((int32_t)eax <= 2)
        {
    COW_AT(10147d62)
            t75 = rd32(COW_IMG(0x103716acu) + eax * 4u);
            wr32(sp0 - 0xe4u, t75);
            wr32(sp0 - 0xe8u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0xecu, sp0 - 0xd8u);
            g->eax = t75;
            g->ecx = sp0 - 0xd8u;
            g->esp = sp0 - 0xd8u;
            t76 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x1034f7e0u), t75, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
            t77 = g->ecx;
            wr32(sp0 - 0xf0u, 0x80808080u);
            wr32(sp0 - 0xf4u, sp0 - 0xd8u);
            t78 = (t76 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x91u);
            wr32(sp0 - 0xf8u, t78);
            t79 = (t77 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x8cu);
            wr32(sp0 - 0xfcu, t79);
            g->ecx = t79;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t79, t78, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x1034f7e0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
            t80 = g->ecx;
            ecx = t80;
        }
    }
    COW_AT(10147d9e)
    t81 = (uint16_t)rd32(COW_IMG(0x10482fa4u));
    wr32(sp0 - 0xe4u, t81);
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->eax = sp0 - 0xd8u;
    g->edx = t81;
    g->esp = sp0 - 0xd8u;
    t82 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t81, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t83 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t84 = (t83 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0xa1u);
    wr32(sp0 - 0xf8u, t84);
    t85 = (t82 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5au);
    wr32(sp0 - 0xfcu, t85);
    g->edx = t84;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t85, t84, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x10352ff0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t86 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t86;
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_10147ea2;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10147dec)
    t87 = rd8(eax + 0x40decu);
    wr32(sp0 - 0xe4u, t87);
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->ecx = t87;
    g->edx = sp0 - 0xd8u;
    g->esp = sp0 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t87, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t88 = g->ecx;
    t89 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t90 = (t88 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x6au);
    wr32(sp0 - 0xf8u, t90);
    t91 = (t89 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x6eu);
    wr32(sp0 - 0xfcu, t91);
    g->ecx = t90;
    g->edx = t91;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t91, t90, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x10352ff0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t92 = g->ecx;
    t93 = g->edx;
    if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu) == 0u)
    {
        eax = (rd32(COW_IMG(0x104dfd98u)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu);
        ecx = t92;
        edx = t93;
        goto L_10147e69;
    }
    eax = (rd32(COW_IMG(0x104dfd98u)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu);
    COW_AT(10147e37)
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x80808080u);
    t94 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x68u;
    wr32(sp0 - 0xf0u, t94);
    t95 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0xdau;
    wr32(sp0 - 0xf4u, t95);
    g->eax = (uint8_t)eax;
    g->edx = t95;
    g->esp = sp0 - 0xe0u;
    t96 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + (uint8_t)eax * 4u + 0x50u), 5, t95, t94, 0x80808080u, 0u, 0u);
    t97 = g->edx;
    g->esi = rd32(sp0 - 0xe0u);
    g->edi = edi;
    g->edx = t97;
    return t96;
L_10147b51: ;
    COW_AT(10147b51)
    t14 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0xe8u, t14);
    g->eax = t14;
    g->esp = sp0 - 0xe4u;
    t15 = cow_cdecl(g, COW_IMG(0x1008aab0u), 1, t14);
    eax = t15;
    goto L_10147b79;
L_10147b63: ;
    COW_AT(10147b63)
    t12 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0xe8u, t12);
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    t13 = cow_cdecl(g, COW_IMG(0x1008ab00u), 1, t12);
    eax = t13;
    goto L_10147b79;
L_10147b75: ;
    COW_AT(10147b75)
    eax = rd32(sp0 - 0xdcu);
    goto L_10147b79;
L_10147c67: ;
    COW_AT(10147c67)
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_10147cb8;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10147c81)
    t51 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0xefu);
    wr32(sp0 - 0xe4u, t51);
    wr32(sp0 - 0xe8u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t51;
    g->esp = sp0 - 0xe0u;
    t52 = cow_cdecl(g, COW_IMG(0x10107320u), 2, 1u, t51);
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 == 0u)
    {
        ecx = t53;
        goto L_10147cb8;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(10147c98)
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, eax);
    t55 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0xecu, t55);
    t56 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x32u);
    wr32(sp0 - 0xf0u, t56);
    ecx = t56;
    loc_e8 = eax;
    eax = t55;
    loc_ec = t55;
    loc_f0 = t56;
    goto L_10147cb0;
L_10147e69: ;
    COW_AT(10147e69)
    wr32(sp0 - 0xe4u, (uint8_t)eax);
    wr32(sp0 - 0xe8u, COW_IMG(0x103718b8u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->eax = sp0 - 0xd8u;
    g->edx = edx;
    g->esp = sp0 - 0xd8u;
    t98 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x103718b8u), (uint8_t)eax, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t99 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t100 = (t99 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x68u);
    wr32(sp0 - 0xf8u, t100);
    t101 = (t98 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0xdau);
    wr32(sp0 - 0xfcu, t101);
    g->eax = t101;
    g->edx = t100;
    t102 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t101, t100, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x103718b8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t103 = g->edx;
    eax = t102;
    edx = t103;
    loc_e0 = rd32(sp0 - 0xe0u);
L_10147ea2: ;
    COW_AT(10147ea2)
    g->esi = loc_e0;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10147ac0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10147ad6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147ae1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147aeeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147b16u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b20u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b30u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b35u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b3au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b41u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b46u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b4du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b51u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b63u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b75u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147b79u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10147ba4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147bbau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147bc3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147beau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e8;
        uint32_t loc_ec;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c26u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c33u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c4du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c67u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c81u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147c98u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147cb0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xe4u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10147cb8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x10147d50u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147d5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147d62u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147d9eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147decu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147e37u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147e69u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_e8;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xd8u);
        wr32(sp0 - 0xecu, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10147ea2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_e0;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10147ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10147ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
