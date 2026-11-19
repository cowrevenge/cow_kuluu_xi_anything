/* f_0x10088bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10088bd0(Guest* g)
{
    double d114;
    double d2;
    double d22;
    double d26;
    double d27;
    double d33;
    double d39;
    double d6;
    double d62;
    double d66;
    double d7;
    double d74;
    double d75;
    double d82;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
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
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10088be3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10088be3;
    case 0x10088be9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10088be9;
    case 0x10088bfau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088bfa;
    case 0x10088c01u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c01;
    case 0x10088c0bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c0b;
    case 0x10088c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c3f;
    case 0x10088c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c47;
    case 0x10088c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c56;
    case 0x10088c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c61;
    case 0x10088c88u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088c88;
    case 0x10088ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ca1;
    case 0x10088ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ca7;
    case 0x10088cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088cc4;
    case 0x10088cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ccc;
    case 0x10088cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088cf9;
    case 0x10088d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d28;
    case 0x10088d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d31;
    case 0x10088d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d40;
    case 0x10088d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088d45;
    case 0x10088dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088dd5;
    case 0x10088e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e3a;
    case 0x10088e5cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10088e5c;
    case 0x10088e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e84;
    case 0x10088e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088e8c;
    case 0x10088ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ec5;
    case 0x10088eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088eea;
    case 0x10088ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ef0;
    case 0x10088f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f37;
    case 0x10088f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f7a;
    case 0x10088f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088f80;
    case 0x10088f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088f85;
    case 0x10088f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088f9b;
    case 0x10088fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fa3;
    case 0x10088facu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fac;
    case 0x10088fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fb4;
    case 0x10088fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fbc;
    case 0x10088fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fc6;
    case 0x10088fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10088fe7;
    case 0x10088feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088fee;
    case 0x10088ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10088ff4;
    case 0x10089013u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10089013;
    case 0x1008901au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1008901a;
    case 0x10089029u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10089029;
    case 0x10089036u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089036;
    case 0x10089038u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10089038;
    case 0x1008903du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1008903d;
    case 0x1008904cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1008904c;
    case 0x1008905bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1008905b;
    case 0x10089061u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089061;
    case 0x10089082u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089082;
    case 0x10089092u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089092;
    case 0x10089097u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10089097;
    case 0x100890a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890a7;
    case 0x100890ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890cc;
    case 0x100890ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890ce;
    case 0x100890deu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_100890de;
    default: break;
    }
#endif

    COW_AT(10088bd0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(rd32(COW_IMG(0x10487ee0u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        goto L_10088be9;
    }
    COW_AT(10088be3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10088be9: ;
    COW_AT(10088be9)
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(COW_IMG(0x10487eb4u)) + 1u > 3u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_10088f85;
    }
    ecx = rd32(COW_IMG(0x10487eb4u)) + 1u;
    COW_AT(10088bfa)
    t1 = rd32(COW_IMG(0x100890f0u) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x10088c01u: goto L_10088c01;
    case 0x10088c61u: goto L_10088c61;
    case 0x10088c88u: goto L_10088c88;
    case 0x10088e5cu: goto L_10088e5c;
    default: rt_fatal(g, COW_IMG(0x10088bfau), "switch");
    }
    return 0;
L_10088c01: ;
    COW_AT(10088c01)
    if (rd32(COW_IMG(0x10578478u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578478u));
    COW_AT(10088c0b)
        wr32(sp0 - 0x14u, COW_IMG(0x1035baecu));
        wr8(ecx + 0x65u, 2u);
        wr32(ecx + 0x68u, 0x80808080u);
        g->eax = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t110 = cow_thiscall(g, COW_IMG(0x10150a30u), rd32(COW_IMG(0x10578478u)), 1, COW_IMG(0x1035baecu));
        t111 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, COW_IMG(0x1035bad8u));
        g->ebx = 0u;
        g->edx = t111;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bad8u), 1u, 0u);
        t112 = g->edx;
        eax = rd32(COW_IMG(0x10487ee0u));
        edx = t112;
    }
    COW_AT(10088c3f)
    if ((int32_t)rd32(eax + 0x24u) < 2)
    {
        ecx = rd32(eax + 0x24u);
    COW_AT(10088c47)
        wr16(COW_IMG(0x10485ff2u), rd16(COW_IMG(0x1035b564u) + ecx * 2u));
    }
    COW_AT(10088c56)
    wr32(COW_IMG(0x10487eb4u), rd32(COW_IMG(0x10487eb4u)) + 1u);
    loc_4 = self;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_10088f85: ;
    COW_AT(10088f85)
    t113 = rd32(eax + 0xcu) + rd32(eax + 4u);
    wr32(eax + 4u, t113);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee0u)) + 4u) >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edi = loc_10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        edi = loc_10;
    COW_AT(10088f9b)
        wr32(eax + 4u, 0u);
        eax = rd32(COW_IMG(0x10487ee0u));
    }
    COW_AT(10088fa3)
    if ((int32_t)rd32(eax + 4u) <= (int32_t)rd32(eax))
    {
        edx = rd32(eax + 4u);
    }
    else
    {
        ecx = rd32(eax);
        edx = rd32(eax + 4u);
    COW_AT(10088fac)
        wr32(eax + 4u, ecx);
        eax = rd32(COW_IMG(0x10487ee0u));
    }
    COW_AT(10088fb4)
    if (rd32(COW_IMG(0x10578478u)) != 0u)
    {
    COW_AT(10088fbc)
        wr32(sp0 - 4u, rd32(eax));
        if (rd32(eax) == 0u)
        {
            loc_4 = rd32(eax);
        }
        else
        {
            ecx = rd32(eax);
            loc_4 = rd32(eax);
    COW_AT(10088fc6)
            d114 = fr(g, fr(g, (double)(int32_t)rd32(eax + 4u) * (double)rdf32(COW_IMG(0x1032a3c8u))) / (double)(int32_t)loc_4);
            fpush(g, d114);
            g->esp = sp0 - 0xcu;
            t115 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            wr16(rd32(COW_IMG(0x106643a8u)) + 0x3au, (uint16_t)t115);
            eax = rd32(COW_IMG(0x10487ee0u));
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(10088fe7)
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = edi;
    return rd32(eax + 4u);
L_10088c61: ;
    COW_AT(10088c61)
    wr32(COW_IMG(0x10487eb8u), 0u);
    wr32(COW_IMG(0x10487ebcu), 0u);
    wr32(COW_IMG(0x10487ec0u), 0u);
    wr32(COW_IMG(0x10487ec4u), 0u);
    wr32(COW_IMG(0x10487eb4u), 1u);
    loc_4 = self;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
    goto L_10088f85;
L_10088c88: ;
    COW_AT(10088c88)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3fu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, in_edi, in_esi);
    t60 = g->ecx;
    t61 = g->edx;
    d62 = cow_take_float(g);
    if (d62 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t59 & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t60;
        edx = t61;
    }
    else
    {
        eax = (t59 & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t60;
        edx = t61;
    COW_AT(10088ca1)
        wr32(COW_IMG(0x10487ec4u), rd32(COW_IMG(0x10487ec4u)) + 1u);
    }
    COW_AT(10088ca7)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t63 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t64 = g->ecx;
    t65 = g->edx;
    d66 = cow_take_float(g);
    g->edx = t65;
    fpush(g, d66);
    t67 = cow_call_regs(g, COW_IMG(0x10311c6cu), t63, g->ecx, g->edx, 1, 0);
    t68 = g->edx;
    t69 = t67 + rd32(COW_IMG(0x10487ebcu));
    t70 = rd32(COW_IMG(0x10487ebcu));
    wr32(COW_IMG(0x10487ebcu), t69);
    if ((int32_t)(t67 + t70) <= 5)
    {
        eax = t67;
        ecx = t69;
        edx = t68;
    }
    else
    {
        eax = t67;
        ecx = t69;
        edx = t68;
    COW_AT(10088cc4)
        if (rd32(COW_IMG(0x10487ec4u)) != 0u)
        {
    COW_AT(10088ccc)
            g->edx = edx;
            t71 = rd32(COW_IMG(0x10487ee0u));
            g->esp = sp0 - 0x10u;
            t72 = cow_call_regs(g, COW_IMG(0x10014cf0u), t71, g->ecx, g->edx, 1, 0);
            t73 = g->edx;
            d74 = cow_take_float(g);
            g->edx = t73;
            d75 = fr(g, fr(g, d74 * (double)(int32_t)rd32(rd32(COW_IMG(0x10487ee0u)) + 0x18u)) * (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d75);
            t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), t72, g->ecx, g->edx, 1, 0);
            t77 = g->edx;
            t78 = t76 + rd32(t71 + 4u);
            wr32(t71 + 4u, t78);
            wr32(COW_IMG(0x10487ec4u), 0u);
            eax = t76;
            ecx = t78;
            edx = t77;
        }
    }
    COW_AT(10088cf9)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t79 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t80 = g->ecx;
    t81 = g->edx;
    d82 = cow_take_float(g);
    fpush(g, d82);
    t83 = cow_call_regs(g, COW_IMG(0x10311c6cu), t79, g->ecx, g->edx, 1, 0);
    t84 = rd32(COW_IMG(0x10487eb8u)) + t83 * rd32(rd32(COW_IMG(0x10487ee0u)) + 0x10u);
    t85 = rd32(COW_IMG(0x10487ee0u));
    t86 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x10u);
    t87 = rd32(COW_IMG(0x10487eb8u));
    wr32(COW_IMG(0x10487eb8u), t84);
    if ((int32_t)(t87 + t83 * t86) < 6000)
    {
        eax = t85;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10088f85;
    }
    eax = t85;
    ecx = t84;
    edx = t83 * t86;
    COW_AT(10088d28)
    if (rd32(eax + 4u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10088f85;
    }
    COW_AT(10088d31)
    wr32(eax + 0x2cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t88 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t89 = g->edx;
    if ((int32_t)(t88 & 0x80000001u) >= 0)
    {
        eax = t88 & 0x80000001u;
        edx = t89;
    }
    else
    {
        eax = t88 & 0x80000001u;
        edx = t89;
    COW_AT(10088d40)
        eax = (eax - 1u | 0xfffffffeu) + 1u;
    }
    COW_AT(10088d45)
    t90 = rd32(COW_IMG(0x10487ee0u));
    wr32(t90 + 0x28u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t91 = cow_fastcall(g, COW_IMG(0x103149e0u), t90, edx, 0);
    t92 = cow_divs(g, t91, rd32(rd32(COW_IMG(0x10487ee0u)) + 8u) * 2u);
    t93 = cow_mods(g, t91, rd32(rd32(COW_IMG(0x10487ee0u)) + 8u) * 2u);
    t94 = t93 * 0xau + 0x14u;
    wr32(COW_IMG(0x10487eb8u), t94);
    t95 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t95);
    wr32(sp0 - 0x18u, 0x37687366u);
    g->eax = rd32(t95);
    t96 = rd32(t95);
    t97 = cow_thiscall(g, rd32(t96 + 0x29cu), t95, 2, 0x37687366u, t95);
    t98 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t98);
    wr32(sp0 - 0x18u, 0x38687366u);
    g->edx = rd32(t98);
    t99 = rd32(t98);
    cow_thiscall(g, rd32(t99 + 0x29cu), t98, 2, 0x38687366u, t98);
    t100 = g->edx;
    t101 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t101);
    wr32(sp0 - 0x18u, 0x39687366u);
    cow_thiscall(g, rd32(rd32(t101) + 0x29cu), t101, 2, 0x39687366u, t101);
    wr32(sp0 - 0x14u, 0u);
    t102 = rd32(self + 0xa0u);
    wr32(sp0 - 0x18u, t102);
    t103 = rd32(COW_IMG(0x1035b568u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u) * 4u);
    wr32(sp0 - 0x1cu, t103);
    cow_thiscall(g, rd32(rd32(t102) + 0x298u), t102, 3, t103, t102, 0u);
    if (rd32(self + 0xa4u) != 0u)
    {
        edi = rd32(self + 0xa4u);
    COW_AT(10088dd5)
        t104 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t104);
        wr32(sp0 - 0x18u, 0x37687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x37687366u, t104);
        t105 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t105);
        wr32(sp0 - 0x18u, 0x38687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t105);
        t106 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t106);
        wr32(sp0 - 0x18u, 0x39687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t106);
        wr32(sp0 - 0x14u, 0u);
        t107 = rd32(self + 0xa0u);
        wr32(sp0 - 0x18u, t107);
        t108 = rd32(COW_IMG(0x1035b568u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u) * 4u);
        wr32(sp0 - 0x1cu, t108);
        cow_thiscall(g, rd32(rd32(edi) + 0x298u), edi, 3, t108, t107, 0u);
    }
    COW_AT(10088e3a)
    t109 = rd32(COW_IMG(0x10487eb4u));
    wr32(COW_IMG(0x10487ebcu), 0u);
    wr32(COW_IMG(0x10487ec0u), 0u);
    wr32(COW_IMG(0x10487ec4u), 0u);
    wr32(COW_IMG(0x10487eb4u), t109 + 1u);
L_10088f80: ;
    COW_AT(10088f80)
    eax = rd32(COW_IMG(0x10487ee0u));
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_10088f85;
L_10088e5c: ;
    COW_AT(10088e5c)
    d2 = (double)(float)(double)(int32_t)rd32(eax + 0x2cu);
    wrf32(sp0 - 4u, (float)d2);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = cow_take_float(g);
    g->ecx = t4;
    d7 = fr(g, (double)rdf32(sp0 - 4u) - d6);
    fpush(g, d7);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = rd32(COW_IMG(0x10487ee0u));
    wr32(t10 + 0x2cu, t8);
    if ((int32_t)rd32(rd32(COW_IMG(0x10487ee0u)) + 0x2cu) >= 0)
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        ecx = t9;
        edx = t10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10487ee0u));
        ecx = t9;
        edx = t10;
    COW_AT(10088e84)
        if ((int32_t)rd32(eax + 0x24u) >= 2)
        {
            eax = rd32(eax + 0x24u);
        }
        else
        {
            eax = rd32(eax + 0x24u);
    COW_AT(10088e8c)
            wr32(sp0 - 0x14u, 0u);
            t11 = rd32(self + 0xa0u);
            wr32(sp0 - 0x18u, t11);
            t12 = rd32(COW_IMG(0x1035b55cu) + eax * 4u);
            wr32(sp0 - 0x1cu, t12);
            g->eax = t12;
            g->edx = rd32(t11);
            t13 = rd32(t11);
            g->esp = sp0 - 0x10u;
            t14 = cow_thiscall(g, rd32(t13 + 0x298u), t11, 3, t12, t11, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            t17 = cow_fastcall(g, COW_IMG(0x103149e0u), t15, t16, 0);
            t18 = cow_divs(g, t17, 6u);
            t19 = cow_mods(g, t17, 6u);
            t20 = t19 * 0x3cu + 0x12cu;
            t21 = rd32(COW_IMG(0x10487ee0u));
            wr32(t21 + 0x2cu, t20);
            eax = t21;
            ecx = 6u;
            edx = t20;
        }
    }
    COW_AT(10088ec5)
    d22 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x10487eb8u));
    wrf32(sp0 - 4u, (float)d22);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    d26 = cow_take_float(g);
    g->ecx = t24;
    g->edx = t25;
    d27 = fr(g, (double)rdf32(sp0 - 4u) - d26);
    fpush(g, d27);
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(COW_IMG(0x10487eb8u), t28);
    if ((int32_t)t28 >= 0)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        zf = t28 == 0u;
        goto L_10088fee;
    }
    eax = t28;
    COW_AT(10088eea)
    wr32(COW_IMG(0x10487eb8u), 0u);
L_10088ef0: ;
    COW_AT(10088ef0)
    t47 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t47);
    wr32(sp0 - 0x18u, 0x38687366u);
    g->edx = rd32(t47);
    t48 = rd32(t47);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t48 + 0x29cu), t47, 2, 0x38687366u, t47);
    t49 = g->edx;
    t50 = rd32(self + 0xa0u);
    wr32(sp0 - 0x14u, t50);
    wr32(sp0 - 0x18u, 0x39687366u);
    g->eax = rd32(t50);
    t51 = rd32(t50);
    t52 = cow_thiscall(g, rd32(t51 + 0x29cu), t50, 2, 0x39687366u, t50);
    wr32(sp0 - 0x14u, 0u);
    t53 = rd32(self + 0xa0u);
    wr32(sp0 - 0x18u, t53);
    wr32(sp0 - 0x1cu, 0x37687366u);
    g->edx = rd32(t53);
    t54 = rd32(t53);
    cow_thiscall(g, rd32(t54 + 0x298u), t53, 3, 0x37687366u, t53, 0u);
    t55 = g->edx;
    if (rd32(self + 0xa4u) != 0u)
    {
        edx = t55;
        edi = rd32(self + 0xa4u);
    COW_AT(10088f37)
        t56 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t56);
        wr32(sp0 - 0x18u, 0x38687366u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x38687366u, t56);
        t57 = rd32(self + 0xa0u);
        wr32(sp0 - 0x14u, t57);
        wr32(sp0 - 0x18u, 0x39687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x29cu), edi, 2, 0x39687366u, t57);
        wr32(sp0 - 0x14u, 0u);
        t58 = rd32(self + 0xa0u);
        wr32(sp0 - 0x18u, t58);
        wr32(sp0 - 0x1cu, 0x37687366u);
        cow_thiscall(g, rd32(rd32(edi) + 0x298u), edi, 3, 0x37687366u, t58, 0u);
    }
    COW_AT(10088f7a)
    wr32(COW_IMG(0x10487eb4u), 0u);
    goto L_10088f80;
L_10088fee: ;
    COW_AT(10088fee)
    if (zf) goto L_10088ef0;
    COW_AT(10088ff4)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t32 = g->edx;
    d33 = cow_take_float(g);
    if (rd32(rd32(COW_IMG(0x10487ee0u)) + 0x28u) != 0u)
    {
        eax = (t31 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = rd32(COW_IMG(0x10487ee0u));
        edx = t32;
        x0 = d33;
        goto L_10089038;
    }
    eax = (t31 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ecx = rd32(COW_IMG(0x10487ee0u));
    edx = t32;
    x0 = d33;
    COW_AT(10089013)
    if ((eax & 0x4100u) != 0u)
    {
        eax = eax & 0x4100u;
        goto L_10089029;
    }
    COW_AT(1008901a)
    t34 = rd32(COW_IMG(0x10487ec0u)) + 1u;
    wr32(COW_IMG(0x10487ec0u), t34);
    eax = t34;
L_10089061: ;
    COW_AT(10089061)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t36 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    d39 = cow_take_float(g);
    g->edx = t38;
    fpush(g, d39);
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t36, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    t42 = t40 + rd32(COW_IMG(0x10487ebcu));
    t43 = rd32(COW_IMG(0x10487ebcu));
    wr32(COW_IMG(0x10487ebcu), t42);
    if ((int32_t)(t40 + t43) > 5)
    {
        eax = t40;
        ecx = t42;
        edx = t41;
    COW_AT(10089082)
        wr32(COW_IMG(0x10487ebcu), 0u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t44 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
        if ((int32_t)t44 < 4)
        {
            eax = t44;
        }
        else
        {
    COW_AT(10089092)
            eax = 4u;
        }
    COW_AT(10089097)
        if ((int32_t)rd32(COW_IMG(0x10487ec0u)) <= (int32_t)rd32(COW_IMG(0x10487ec4u)))
        {
            sf = (int32_t)(rd32(COW_IMG(0x10487ec0u)) - rd32(COW_IMG(0x10487ec4u))) < 0;
            of = ((rd32(COW_IMG(0x10487ec0u)) ^ rd32(COW_IMG(0x10487ec4u))) & (rd32(COW_IMG(0x10487ec0u)) ^ rd32(COW_IMG(0x10487ec0u)) - rd32(COW_IMG(0x10487ec4u)))) >> 0x1fu;
    COW_AT(100890cc)
            if (sf != of)
            {
    COW_AT(100890ce)
                t46 = rd32(rd32(COW_IMG(0x10487ee0u)) + 0x18u) + rd32(rd32(COW_IMG(0x10487ee0u)) + 4u);
                wr32(rd32(COW_IMG(0x10487ee0u)) + 4u, t46);
            }
    COW_AT(100890de)
            wr32(COW_IMG(0x10487ec0u), 0u);
            wr32(COW_IMG(0x10487ec4u), 0u);
        }
        else
        {
    COW_AT(100890a7)
            t45 = rd32(rd32(COW_IMG(0x10487ee0u)) + 4u) - rd32(rd32(COW_IMG(0x10487ee0u)) + 0x14u) * eax;
            wr32(rd32(COW_IMG(0x10487ee0u)) + 4u, t45);
            wr32(COW_IMG(0x10487ec0u), 0u);
            wr32(COW_IMG(0x10487ec4u), 0u);
        }
    }
    goto L_10088f80;
L_10089029: ;
    COW_AT(10089029)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10089061;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10089036)
L_1008905b: ;
    COW_AT(1008905b)
    wr32(COW_IMG(0x10487ec4u), rd32(COW_IMG(0x10487ec4u)) + 1u);
    goto L_10089061;
L_10089038: ;
    COW_AT(10089038)
    if (PARITY(eax >> 8u & 5u)) goto L_1008904c;
    COW_AT(1008903d)
    t35 = rd32(COW_IMG(0x10487ec0u)) + 1u;
    wr32(COW_IMG(0x10487ec0u), t35);
    eax = t35;
    goto L_10089061;
L_1008904c: ;
    COW_AT(1008904c)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_10089061;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    goto L_1008905b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10088bd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10088be3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088be9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088bfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088c01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088c88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10088ca1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ca7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088cf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088d45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088dd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088e8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ec5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088eeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ef0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088f9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088facu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088fc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088fe7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10088feeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10088ff4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089013u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008901au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089029u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089036u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089038u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008903du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008904cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008905bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089061u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089082u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089092u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10089097u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100890deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10088bd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10088bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
