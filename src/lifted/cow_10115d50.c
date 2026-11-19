/* f_0x10115d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10115d50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
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
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10115d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10115d6c;
    case 0x10115d7eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10115d7e;
    case 0x10115d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115d9e;
    case 0x10115da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115da5;
    case 0x10115db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115db4;
    case 0x10115dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115dc3;
    case 0x10115dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115dd9;
    case 0x10115dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115ded;
    case 0x10115df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115df3;
    case 0x10115e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115e09;
    case 0x10115e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115e29;
    case 0x10115e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115e3f;
    case 0x10115e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115e53;
    case 0x10115e59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115e59;
    case 0x10115e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115e6b;
    case 0x10115e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115e7d;
    case 0x10115e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115e8c;
    case 0x10115ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115ea2;
    case 0x10115ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115ebc;
    case 0x10115eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115ece;
    case 0x10115eebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115eeb;
    case 0x10115f08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115f08;
    case 0x10115f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115f14;
    case 0x10115f31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115f31;
    case 0x10115f47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115f47;
    case 0x10115f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115f60;
    case 0x10115f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115f72;
    case 0x10115f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115f7c;
    case 0x10115fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10115fa7;
    case 0x10115fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115fce;
    case 0x10115fe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115fe4;
    case 0x10115ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10115ffa;
    case 0x10116010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116010;
    case 0x10116030u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116030;
    case 0x10116035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116035;
    case 0x10116046u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116046;
    case 0x10116054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116054;
    case 0x1011606du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011606d;
    case 0x1011607fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011607f;
    case 0x10116098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116098;
    case 0x101160aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101160aa;
    case 0x101160c3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101160c3;
    case 0x101160cdu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101160cd;
    case 0x101160ecu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101160ec;
    case 0x1011610fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011610f;
    case 0x10116123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116123;
    case 0x1011612eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_1011612e;
    case 0x1011613fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011613f;
    case 0x10116172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116172;
    case 0x1011617du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_1011617d;
    case 0x1011619au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011619a;
    case 0x101161a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101161a3;
    case 0x101161bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101161ba;
    case 0x101161ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101161cc;
    case 0x101161e5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101161e5;
    case 0x10116208u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116208;
    case 0x10116221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116221;
    case 0x1011623bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011623b;
    case 0x1011624du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_1011624d;
    case 0x10116267u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116267;
    case 0x10116275u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116275;
    case 0x10116281u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_10116281;
    case 0x1011628eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1011628e;
    case 0x10116299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116299;
    case 0x101162a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_101162a3;
    case 0x101162c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101162c0;
    case 0x101162c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101162c4;
    case 0x101162ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101162dd;
    case 0x101162f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101162f4;
    case 0x10116307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116307;
    case 0x10116335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10116335;
    default: break;
    }
#endif

    COW_AT(10115d50)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x4f1a8u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x4f1a8u);
        esi = rd32(sp0 + 4u);
        edi = rd32(rd32(sp0 + 4u) + 0x4f1acu);
        goto L_10115d7e;
    }
    COW_AT(10115d6c)
    wr32(arg2, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_10115d7e: ;
    COW_AT(10115d7e)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, esi + 0x2f0d4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026dbafu), self, 3, esi + 0x2f0d4u, in_ebx, in_edi);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(esi + 0x4f1a8u) - 1u > 0x14u) goto L_10116281;
    eax = rd32(esi + 0x4f1a8u) - 1u;
    ecx = t1;
    edx = t2;
    ebx = esi + 0x2f0d4u;
    COW_AT(10115d9e)
    t3 = rd32(COW_IMG(0x1011634cu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10115da5u: goto L_10115da5;
    case 0x10115dc3u: goto L_10115dc3;
    case 0x10115e29u: goto L_10115e29;
    case 0x10115e8cu: goto L_10115e8c;
    case 0x10115f31u: goto L_10115f31;
    case 0x10115fceu: goto L_10115fce;
    case 0x10116054u: goto L_10116054;
    case 0x1011606du: goto L_1011606d;
    case 0x10116098u: goto L_10116098;
    case 0x10116172u: goto L_10116172;
    case 0x101161bau: goto L_101161ba;
    case 0x10116275u: goto L_10116275;
    case 0x1011628eu: goto L_1011628e;
    case 0x101162f4u: goto L_101162f4;
    default: rt_fatal(g, COW_IMG(0x10115d9eu), "switch");
    }
    return 0;
L_10115da5: ;
    COW_AT(10115da5)
    if (rd32(esi + 0x2f0f8u) != 6u)
    {
        eax = rd32(esi + 0x2f0f8u);
        goto L_1011619a;
    }
    COW_AT(10115db4)
    wr32(edi + 0x13cu, 0x64u);
L_1011617d: ;
    COW_AT(1011617d)
    t134 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t135 = rd32(sp0 - 0x18u);
    t136 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t134;
    g->esi = t135;
    g->edi = t136;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10115dc3: ;
    COW_AT(10115dc3)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t112 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t113 = g->ecx;
    t114 = g->edx;
    if ((int32_t)t112 < 0) goto L_101161cc;
    ecx = t113;
    edx = t114;
    COW_AT(10115dd9)
    t115 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t115);
    wr32(sp0 + 4u, t115);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t116 = cow_call_regs(g, COW_IMG(0x10116520u), t115, g->ecx, g->edx, 1, 3, t115, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t117 = g->ecx;
    t118 = g->edx;
    eax = t116;
    ecx = t117;
    edx = t118;
    zf = t116 == 5u;
L_10115ded: ;
    COW_AT(10115ded)
    if (zf) goto L_1011623b;
    COW_AT(10115df3)
    t119 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t119);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t120 = cow_call_regs(g, COW_IMG(0x10116520u), t119, g->ecx, g->edx, 1, 3, t119, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t121 = g->ecx;
    t122 = g->edx;
    if (t120 != 4u)
    {
        ecx = t121;
        edx = t122;
    COW_AT(10116221)
        wr32(edi + 0x13cu, 0x65u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, ebx);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    }
    else
    {
    COW_AT(10115e09)
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, ebx);
        t123 = rd32(rd32(sp0 + 4u) + 0x20u);
        t124 = rd32(sp0 + 4u);
        wr32(edi + 0x13cu, t123);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    }
L_101162a3: ;
    COW_AT(101162a3)
    t129 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t130 = rd32(sp0 - 0x18u);
    t131 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t129;
    g->esi = t130;
    g->edi = t131;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10115e29: ;
    COW_AT(10115e29)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t92 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t93 = g->ecx;
    t94 = g->edx;
    if ((int32_t)t92 < 0) goto L_101161cc;
    ecx = t93;
    edx = t94;
    COW_AT(10115e3f)
    t95 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t95);
    wr32(sp0 + 4u, t95);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t96 = cow_call_regs(g, COW_IMG(0x10116520u), t95, g->ecx, g->edx, 1, 3, t95, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t97 = g->ecx;
    t98 = g->edx;
    eax = t96;
    ecx = t97;
    edx = t98;
    zf = t96 == 0x20u;
L_10115e53: ;
    COW_AT(10115e53)
    if (zf) goto L_10115f60;
    COW_AT(10115e59)
    t99 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t99);
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t100 = cow_call_regs(g, COW_IMG(0x10116520u), eax, g->ecx, g->edx, 1, 3, t99, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t101 = g->ecx;
    if (t100 != 4u)
    {
        eax = t100;
        ecx = t101;
    COW_AT(10115e7d)
        wr32(edi + 0x13cu, 0x65u);
    }
    else
    {
    COW_AT(10115e6b)
        t102 = rd32(rd32(sp0 + 4u) + 0x20u);
        t103 = rd32(sp0 + 4u);
        wr32(edi + 0x13cu, t102);
        eax = t103;
        ecx = t102;
    }
L_10115f7c: ;
    COW_AT(10115f7c)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    wr32(esi + 0x4f1a8u, 0u);
    t108 = rd32(sp0 - 0x20u);
    t109 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t108;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t109;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10115e8c: ;
    COW_AT(10115e8c)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = sp0 - 0x10u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t76 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t77 = g->ecx;
    t78 = g->edx;
    if ((int32_t)t76 < 0) goto L_101161cc;
    ecx = t77;
    edx = t78;
    COW_AT(10115ea2)
    t79 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t79);
    wr32(sp0 + 4u, t79);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t80 = cow_call_regs(g, COW_IMG(0x10116520u), t79, g->ecx, g->edx, 1, 3, t79, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t81 = g->ecx;
    t82 = g->edx;
    if (t80 != 0xbu)
    {
        eax = t80;
        edx = t82;
        goto L_10115ffa;
    }
    ecx = t81;
    edx = t82;
    COW_AT(10115ebc)
    t83 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t83);
    wr32(sp0 - 0x28u, edi);
    g->eax = t83;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t84 = cow_cdecl(g, COW_IMG(0x10116de0u), 4, edi, t83, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t85 = g->ecx;
    t86 = g->edx;
    if (t84 != 0u)
    {
        eax = t84;
        ecx = t85;
        edx = t86;
        goto L_10115f08;
    }
    eax = t84;
    edx = t86;
L_10115ece: ;
    COW_AT(10115ece)
    wr32(edi + 0x13cu, 0x67u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_1011617d;
L_10115eeb: ;
    COW_AT(10115eeb)
    wr32(edi + 0x13cu, 0x65u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_1011617d;
L_10115f08: ;
    COW_AT(10115f08)
    if (rd32(edi + 0x144u) != 0u) goto L_10116267;
    COW_AT(10115f14)
    wr32(edi + 0x13cu, 0x68u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_101162a3;
L_10115f31: ;
    COW_AT(10115f31)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t69 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t70 = g->ecx;
    t71 = g->edx;
    if ((int32_t)t69 < 0) goto L_101161cc;
    ecx = t70;
    edx = t71;
    COW_AT(10115f47)
    t72 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t72);
    wr32(sp0 + 4u, t72);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t73 = cow_call_regs(g, COW_IMG(0x10116520u), t72, g->ecx, g->edx, 1, 3, t72, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t74 = g->ecx;
    t75 = g->edx;
    eax = t73;
    ecx = t74;
    edx = t75;
    zf = t73 == 3u;
    goto L_10115e53;
L_10115f60: ;
    COW_AT(10115f60)
    t104 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t104);
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->ecx = t104;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t105 = cow_cdecl(g, COW_IMG(0x10116de0u), 4, edi, t104, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t106 = g->ecx;
    t107 = g->edx;
    if (t105 != 0u)
    {
        eax = t105;
        edx = t107;
        goto L_10115fa7;
    }
    eax = t105;
    ecx = t106;
    COW_AT(10115f72)
    wr32(edi + 0x13cu, 0x67u);
    goto L_10115f7c;
L_10115fa7: ;
    COW_AT(10115fa7)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    wr32(esi + 0x4f1a8u, 0u);
    t110 = rd32(sp0 - 0x20u);
    t111 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0u);
    g->ebx = t110;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t111;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10115fce: ;
    COW_AT(10115fce)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = sp0 - 0x10u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t56 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t57 = g->ecx;
    t58 = g->edx;
    if ((int32_t)t56 < 0) goto L_101161cc;
    ecx = t57;
    edx = t58;
    COW_AT(10115fe4)
    t59 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t59);
    wr32(sp0 + 4u, t59);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t60 = cow_call_regs(g, COW_IMG(0x10116520u), t59, g->ecx, g->edx, 1, 3, t59, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 3u)
    {
        ecx = t61;
        edx = t62;
        goto L_10116030;
    }
    eax = t60;
    edx = t62;
L_10115ffa: ;
    COW_AT(10115ffa)
    t87 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t87);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t88 = cow_call_regs(g, COW_IMG(0x10116520u), eax, g->ecx, g->edx, 1, 3, t87, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t89 = g->edx;
    if (t88 != 4u)
    {
        eax = t88;
        edx = t89;
        goto L_10115eeb;
    }
    COW_AT(10116010)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    t90 = rd32(rd32(sp0 + 4u) + 0x20u);
    t91 = rd32(sp0 + 4u);
    wr32(edi + 0x13cu, t90);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_1011617d;
L_10116030: ;
    COW_AT(10116030)
    t63 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t63);
    eax = t63;
    loc_24 = t63;
L_10116035: ;
    COW_AT(10116035)
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t64 = cow_cdecl(g, COW_IMG(0x10116de0u), 4, edi, loc_24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t65 = g->ecx;
    t66 = g->edx;
    if (t64 == 0u)
    {
        eax = t64;
        edx = t66;
        goto L_10115ece;
    }
    ecx = t65;
    edx = t66;
    COW_AT(10116046)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
L_10116054: ;
    COW_AT(10116054)
    t67 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t68 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0u);
    g->ebx = t67;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t68;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_1011606d: ;
    COW_AT(1011606d)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t35 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t36 = g->ecx;
    t37 = g->edx;
    if ((int32_t)t35 < 0) goto L_101160aa;
    ecx = t36;
    edx = t37;
    COW_AT(1011607f)
    t38 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t38);
    wr32(sp0 + 4u, t38);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t39 = cow_call_regs(g, COW_IMG(0x10116520u), t38, g->ecx, g->edx, 1, 3, t38, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t40 = g->ecx;
    t41 = g->edx;
    ecx = t40;
    edx = t41;
    zf = t39 == 0x23u;
L_10116123: ;
    COW_AT(10116123)
    t42 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t42);
    if (zf)
    {
        eax = t42;
        loc_24 = t42;
        goto L_10116035;
    }
    eax = t42;
    loc_24 = t42;
    COW_AT(1011612e)
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t43 = cow_call_regs(g, COW_IMG(0x10116520u), eax, g->ecx, g->edx, 1, 3, loc_24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t44 = g->edx;
    if (t43 != 4u)
    {
        eax = t43;
        edx = t44;
        goto L_10115eeb;
    }
    COW_AT(1011613f)
    t45 = rd32(edi + 0x138u);
    wr32(sp0 - 0x24u, t45);
    wr32(sp0 - 0x28u, edi);
    t46 = rd32(rd32(sp0 + 4u) + 0x20u);
    t47 = rd32(sp0 + 4u);
    wr32(edi + 0x13cu, t46);
    g->ebx = ebx;
    g->eax = t45;
    g->edx = t46;
    g->esp = sp0 - 0x20u;
    t48 = cow_cdecl(g, COW_IMG(0x10116d30u), 2, edi, t45);
    t49 = g->edx;
    wr32(edi + 0x138u, t48);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_1011617d;
L_10116098: ;
    COW_AT(10116098)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t28 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t29 = g->ecx;
    t30 = g->edx;
    if ((int32_t)t28 >= 0)
    {
        ecx = t29;
        edx = t30;
        goto L_1011610f;
    }
L_101160aa: ;
    COW_AT(101160aa)
    wr32(arg2, 1u);
    if (rd32(esi + 0x2f0f8u) != 6u) goto L_10116281;
    COW_AT(101160c3)
    if (rd32(esi + 0x2f0fcu) == 0u) goto L_101160ec;
    eax = rd32(esi + 0x2f0fcu);
    COW_AT(101160cd)
    wr32(edi + 0x13cu, eax);
    t50 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t51 = rd32(sp0 - 0x18u);
    t52 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t50;
    g->esi = t51;
    g->edi = t52;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_101160ec: ;
    COW_AT(101160ec)
    wr32(edi + 0x13cu, 0x65u);
    t53 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t54 = rd32(sp0 - 0x18u);
    t55 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t53;
    g->esi = t54;
    g->edi = t55;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_1011610f: ;
    COW_AT(1011610f)
    t31 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t31);
    wr32(sp0 + 4u, t31);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t32 = cow_call_regs(g, COW_IMG(0x10116520u), t31, g->ecx, g->edx, 1, 3, t31, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t33 = g->ecx;
    t34 = g->edx;
    ecx = t33;
    edx = t34;
    zf = t32 == 3u;
    goto L_10116123;
L_10116172: ;
    COW_AT(10116172)
    if (rd32(esi + 0x2f0f8u) != 6u)
    {
        eax = rd32(esi + 0x2f0f8u);
        goto L_1011619a;
    }
    goto L_1011617d;
L_1011619a: ;
    COW_AT(1011619a)
    if (eax == 4u) goto L_10116275;
    COW_AT(101161a3)
    t137 = rd32(sp0 - 0x20u);
    t138 = rd32(sp0 - 0x18u);
    t139 = rd32(sp0 - 0x1cu);
    wr32(arg2, 1u);
    g->ebx = t137;
    g->esi = t138;
    g->edi = t139;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_101161ba: ;
    COW_AT(101161ba)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x1026db8du), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)t21 >= 0)
    {
        ecx = t22;
        edx = t23;
        goto L_10116208;
    }
L_101161cc: ;
    COW_AT(101161cc)
    wr32(arg2, 1u);
    if (rd32(esi + 0x2f0f8u) != 6u) goto L_10116281;
    COW_AT(101161e5)
    wr32(edi + 0x13cu, 0x65u);
    t132 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t133 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0xffffffffu);
    g->ebx = t132;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t133;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10116208: ;
    COW_AT(10116208)
    t24 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t24);
    wr32(sp0 + 4u, t24);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_call_regs(g, COW_IMG(0x10116520u), t24, g->ecx, g->edx, 1, 3, t24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    zf = t25 == 0xbu;
    goto L_10115ded;
L_1011623b: ;
    COW_AT(1011623b)
    t125 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t125);
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t125;
    g->esp = sp0 - 0x18u;
    t126 = cow_cdecl(g, COW_IMG(0x10116de0u), 4, edi, t125, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t127 = g->ecx;
    t128 = g->edx;
    if (t126 != 0u)
    {
        eax = t126;
        ecx = t127;
        goto L_10116267;
    }
    ecx = t127;
    edx = t128;
    COW_AT(1011624d)
    wr32(edi + 0x13cu, 0x67u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    goto L_101162a3;
L_10116267: ;
    COW_AT(10116267)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026dbccu), 4, ebx, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
L_10116275: ;
    COW_AT(10116275)
    wr32(esi + 0x4f1a8u, 0u);
    wr32(arg2, 0u);
L_10116281: ;
    COW_AT(10116281)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_1011628e: ;
    COW_AT(1011628e)
    if (rd32(esi + 0x2f0f8u) != 6u)
    {
        eax = rd32(esi + 0x2f0f8u);
        goto L_101162c0;
    }
    COW_AT(10116299)
    wr32(edi + 0x13cu, 0x65u);
    goto L_101162a3;
L_101162c0: ;
    COW_AT(101162c0)
    if (eax != 0u) goto L_101162dd;
    COW_AT(101162c4)
    t16 = rd32(sp0 - 0x20u);
    wr32(esi + 0x4f1a8u, 0u);
    t17 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0u);
    g->ebx = t16;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t17;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_101162dd: ;
    COW_AT(101162dd)
    t18 = rd32(sp0 - 0x20u);
    t19 = rd32(sp0 - 0x18u);
    t20 = rd32(sp0 - 0x1cu);
    wr32(arg2, 1u);
    g->ebx = t18;
    g->esi = t19;
    g->edi = t20;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_101162f4: ;
    COW_AT(101162f4)
    wr32(sp0 - 0x24u, esi + 0x3f12cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = esi + 0x3f12cu;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x1026dae6u), 3, esi + 0x3f12cu, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u) goto L_10116335;
    ecx = t5;
    edx = t6;
    COW_AT(10116307)
    t7 = rd32(esi + 0x4f1acu);
    wr32(esi + 0x4f1a8u, 0u);
    wr32(sp0 - 0x24u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x20u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t9, t10, 1, 1, esi);
    t11 = rd32(sp0 - 0x20u);
    t12 = rd32(sp0 - 0x1cu);
    wr32(arg2, 0u);
    g->ebx = t11;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t12;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
L_10116335: ;
    COW_AT(10116335)
    t13 = rd32(sp0 - 0x20u);
    t14 = rd32(sp0 - 0x18u);
    t15 = rd32(sp0 - 0x1cu);
    wr32(arg2, 1u);
    g->ebx = t13;
    g->esi = t14;
    g->edi = t15;
    g->ebp = rd32(sp0 - 0x14u);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10115d50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10115d6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115d7eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115d9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115da5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115db4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115dc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115dd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10115dedu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115df3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10115e53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115e8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115ea2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10115ebcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115eceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115eebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f08u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f14u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10115f60u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115f7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115fa7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115fceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10115fe4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10115ffau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116010u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116030u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116035u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116046u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116054u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011606du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011607fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10116098u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101160aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101160c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101160cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101160ecu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ecx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011610fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10116123u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011612eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011613fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116172u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011617du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011619au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101161a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101161bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101161ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101161e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->eax = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10116208u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10116221u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011623bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011624du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116267u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116275u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116281u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011628eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116299u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101162a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101162c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101162c4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101162ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101162f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116307u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10116335u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10115d50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10115d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
