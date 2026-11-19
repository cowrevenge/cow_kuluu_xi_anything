/* f_0x101b1d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101b1d00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_21fc;
    uint32_t loc_2200;
    int64_t q32;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 8712u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b1d0au: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_101b1d0a;
    case 0x101b1d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d18;
    case 0x101b1d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d26;
    case 0x101b1d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d36;
    case 0x101b1d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d3e;
    case 0x101b1d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d45;
    case 0x101b1d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d4d;
    case 0x101b1d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d5e;
    case 0x101b1d65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d65;
    case 0x101b1d75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d75;
    case 0x101b1d8au: ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d8a;
    case 0x101b1d91u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1d91;
    case 0x101b1da0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1da0;
    case 0x101b1dafu: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1daf;
    case 0x101b1db3u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1db3;
    case 0x101b1db5u: eax = g->eax; self = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); goto E_101b1db5;
    case 0x101b1dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1dbb;
    case 0x101b1dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1dca;
    case 0x101b1dd1u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1dd1;
    case 0x101b1de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1de1;
    case 0x101b1deau: ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1dea;
    case 0x101b1deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1dee;
    case 0x101b1dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1dfe;
    case 0x101b1e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e0a;
    case 0x101b1e19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e19;
    case 0x101b1e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e24;
    case 0x101b1e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e26;
    case 0x101b1e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); goto E_101b1e31;
    case 0x101b1e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e36;
    case 0x101b1e3bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1e3b;
    case 0x101b1e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1e4b;
    case 0x101b1e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e57;
    case 0x101b1e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e66;
    case 0x101b1e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e71;
    case 0x101b1e75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e75;
    case 0x101b1e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e77;
    case 0x101b1e81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); goto E_101b1e81;
    case 0x101b1e86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1e86;
    case 0x101b1e8bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1e8b;
    case 0x101b1e9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1e9a;
    case 0x101b1eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b1eaa;
    case 0x101b1eb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1eb9;
    case 0x101b1ec0u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1ec0;
    case 0x101b1ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1ed0;
    case 0x101b1ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b1ed8;
    case 0x101b1ee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1ee0;
    case 0x101b1eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1eee;
    case 0x101b1ef5u: ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1ef5;
    case 0x101b1effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1eff;
    case 0x101b1f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1f06;
    case 0x101b1f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f10;
    case 0x101b1f1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1f1c;
    case 0x101b1f25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1f25;
    case 0x101b1f3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1f3a;
    case 0x101b1f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); goto E_101b1f4d;
    case 0x101b1f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1f52;
    case 0x101b1f54u: ecx = g->ecx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f54;
    case 0x101b1f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2200 = rd32(sp0 - 0x2200u); loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b1f5f;
    case 0x101b1f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f6f;
    case 0x101b1f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f7c;
    case 0x101b1f8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f8b;
    case 0x101b1f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f92;
    case 0x101b1f94u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f94;
    case 0x101b1f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1f9b;
    case 0x101b1fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1fa3;
    case 0x101b1fabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1fab;
    case 0x101b1fb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1fb5;
    case 0x101b1fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1fc0;
    case 0x101b1fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b1fd0;
    case 0x101b1fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1fd6;
    case 0x101b1fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b1fe5;
    case 0x101b1ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b1ff1;
    case 0x101b1ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b1ff6;
    case 0x101b1ffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b1ffe;
    case 0x101b2006u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b2006;
    case 0x101b2011u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b2011;
    case 0x101b201cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b201c;
    case 0x101b2023u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b2023;
    case 0x101b2027u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b2027;
    case 0x101b202fu: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b202f;
    case 0x101b2036u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2036;
    case 0x101b2042u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b2042;
    case 0x101b2044u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2044;
    case 0x101b2050u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b2050;
    case 0x101b2052u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2052;
    case 0x101b205eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b205e;
    case 0x101b2060u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2060;
    case 0x101b206bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b206b;
    case 0x101b206du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_101b206d;
    case 0x101b2085u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_21fc = rd32(sp0 - 0x21fcu); goto E_101b2085;
    case 0x101b208eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_101b208e;
    default: break;
    }
#endif

    COW_AT(101b1d00)
    COW_AT(101b1d0a)
    wr32(sp0 - 0x21e8u, in_ebx);
    wr32(sp0 - 0x21ecu, in_esi);
    wr32(sp0 - 0x21f0u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x21f0u;
    cow_thiscall(g, COW_IMG(0x101b4710u), sp0 - 0x21e4u, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(101b1d18)
    t2 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f4u, t2);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t2;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f0u;
    t4 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(101b1d26)
    wr32(sp0 - 0x21f4u, eax);
    wr8(self + 0xef22u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t7 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t8 = g->edx;
    edx = t8;
    edi = eax;
    eax = t7;
    COW_AT(101b1d36)
    if (eax == 0u) goto L_101b1fd6;
    COW_AT(101b1d3e)
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t9 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(101b1d45)
    if ((uint8_t)eax != 0u) goto L_101b1fd6;
    COW_AT(101b1d4d)
    wr32(sp0 - 0x21f4u, in_ebp);
    wr32(sp0 - 0x21f8u, edi);
    t12 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t12);
    g->eax = t12;
    g->esp = sp0 - 0x21fcu;
    t13 = cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    eax = t13;
    COW_AT(101b1d5e)
    g->eax = eax;
    g->edx = rd32(self);
    t14 = rd32(self);
    g->esp = sp0 - 0x21f4u;
    t15 = cow_thiscall(g, rd32(t14 + 0x1cu), self, 2, rd32(sp0 - 0x21fcu), rd32(sp0 - 0x21f8u));
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(101b1d65)
    t17 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t17);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t17;
    t18 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f4u;
    t19 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t17);
    t20 = g->ecx;
    ecx = t20;
    ebp = eax;
    eax = t19;
    COW_AT(101b1d75)
    if (arg1 - 1u > 7u)
    {
        edi = eax;
        eax = arg1 - 1u;
        goto L_101b1fc0;
    }
    edi = eax;
    COW_AT(101b1d8a)
    t21 = rd32(COW_IMG(0x101b209cu) + arg1 * 4u - 4u);
    switch (t21 - RD)
    {
    case 0x101b1d91u: goto L_101b1d91;
    case 0x101b1dd1u: goto L_101b1dd1;
    case 0x101b1deau: goto L_101b1dea;
    case 0x101b1e3bu: goto L_101b1e3b;
    case 0x101b1e8bu: goto L_101b1e8b;
    case 0x101b1ec0u: goto L_101b1ec0;
    case 0x101b1ef5u: goto L_101b1ef5;
    case 0x101b1f94u: goto L_101b1f94;
    default: rt_fatal(g, COW_IMG(0x101b1d8au), "switch");
    }
    return 0;
L_101b1d91: ;
    COW_AT(101b1d91)
    wr32(sp0 - 0x21f8u, edi);
    t95 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t95);
    g->edx = arg1;
    g->esp = sp0 - 0x21f4u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t95, edi);
    t96 = g->edx;
    edx = t96;
    COW_AT(101b1da0)
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 0u);
    if (rd32(self + 0xf0f8u) != 1u)
    {
        eax = rd32(self + 0xf0f8u);
    COW_AT(101b1db3)
        wr32(sp0 - 0x2200u, 0x79u);
        loc_2200 = 0x79u;
    }
    else
    {
        eax = rd32(self + 0xf0f8u);
    COW_AT(101b1daf)
        wr32(sp0 - 0x2200u, 0xfu);
        loc_2200 = 0xfu;
    }
    COW_AT(101b1db5)
    wr32(sp0 - 0x2204u, 0u);
    g->esp = sp0 - 0x21f4u;
    cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, loc_2200, 0u, 0u);
    t97 = g->ecx;
    ecx = t97;
    COW_AT(101b1dbb)
    t98 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t98);
    g->eax = t98;
    g->esp = sp0 - 0x21f4u;
    t99 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t98);
    eax = t99;
    COW_AT(101b1dca)
    edi = eax;
L_101b1fc0: ;
    COW_AT(101b1fc0)
    wr32(sp0 - 0x21f8u, edi);
    t100 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t100);
    g->eax = eax;
    g->edx = t100;
    g->esp = sp0 - 0x21f4u;
    t101 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t100, edi);
    t102 = g->edx;
    eax = t101;
    edx = t102;
    COW_AT(101b1fd0)
    ebp = rd32(sp0 - 0x21f4u);
L_101b2085: ;
    COW_AT(101b2085)
    g->esp = sp0 - 0x21f0u;
    t123 = cow_call_regs(g, COW_IMG(0x101b4780u), eax, sp0 - 0x21e4u, edx, 1, 0);
    t124 = g->edx;
    eax = t123;
    edx = t124;
    COW_AT(101b208e)
    g->ebx = rd32(sp0 - 0x21e8u);
    g->esi = rd32(sp0 - 0x21ecu);
    g->edi = rd32(sp0 - 0x21f0u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101b1dd1: ;
    COW_AT(101b1dd1)
    wr32(sp0 - 0x21f8u, edi);
    t88 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t88);
    g->eax = arg1 - 1u;
    g->edx = t88;
    g->esp = sp0 - 0x21f4u;
    t89 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t88, edi);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    COW_AT(101b1de1)
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 0u);
    wr32(sp0 - 0x2200u, 0xfu);
    loc_21fc = 0u;
    loc_2200 = 0xfu;
L_101b1ed8: ;
    COW_AT(101b1ed8)
    wr32(sp0 - 0x2204u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, loc_2200, loc_21fc, 0u);
    t91 = g->edx;
    edx = t91;
    COW_AT(101b1ee0)
    t92 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t92);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t93 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f4u;
    t94 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t92);
    eax = t94;
    COW_AT(101b1eee)
    edi = eax;
    goto L_101b1fc0;
L_101b1dea: ;
    COW_AT(101b1dea)
    if ((int32_t)ebp > 0)
    {
        eax = arg1 - 1u;
        edx = arg1;
    }
    else
    {
    COW_AT(101b1dee)
        wr32(sp0 - 0x21f8u, edi);
        t76 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x21fcu, t76);
        g->esp = sp0 - 0x21f4u;
        cow_stdcall(g, COW_IMG(0x101aff60u), 2, t76, edi);
    COW_AT(101b1dfe)
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        g->eax = sp0 - 0x21e4u;
        g->esp = sp0 - 0x21f4u;
        t77 = cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, sp0 - 0x21e4u);
        eax = t77;
    COW_AT(101b1e0a)
        t78 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x21f8u, t78);
        g->eax = eax;
        g->edx = t78;
        g->esp = sp0 - 0x21f4u;
        t79 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t78);
        t80 = g->edx;
        eax = t79;
        edx = t80;
    COW_AT(101b1e19)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x21f4u;
        t81 = cow_thiscall(g, COW_IMG(0x101b4b70u), sp0 - 0x21e4u, 0);
        t82 = g->ecx;
        t83 = g->edx;
        ecx = t82;
        edx = t83;
        edi = eax;
        eax = t81;
    COW_AT(101b1e24)
        ebp = eax;
    }
    COW_AT(101b1e26)
    wr32(sp0 - 0x21f8u, ebp - 1u);
    wr32(sp0 - 0x21fcu, ebp - 1u);
    wr32(sp0 - 0x2200u, 0x12u);
    wr32(sp0 - 0x2204u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    t84 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, ebp - 1u, ebp - 1u);
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    COW_AT(101b1e31)
    g->eax = eax;
    g->esp = sp0 - 0x21f4u;
    t87 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t87;
    COW_AT(101b1e36)
    goto L_101b1fc0;
L_101b1e3b: ;
    COW_AT(101b1e3b)
    wr32(sp0 - 0x21f8u, edi);
    t64 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t64);
    g->esp = sp0 - 0x21f4u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t64, edi);
    ebp = ebp + 1u;
    COW_AT(101b1e4b)
    wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
    g->eax = sp0 - 0x21e4u;
    g->esp = sp0 - 0x21f4u;
    t65 = cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, sp0 - 0x21e4u);
    eax = t65;
    COW_AT(101b1e57)
    t66 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t66);
    g->eax = eax;
    g->edx = t66;
    g->esp = sp0 - 0x21f4u;
    t67 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t66);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(101b1e66)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    t69 = cow_thiscall(g, COW_IMG(0x101b4b70u), sp0 - 0x21e4u, 0);
    t70 = g->ecx;
    t71 = g->edx;
    ecx = t70;
    edx = t71;
    edi = eax;
    eax = t69;
    COW_AT(101b1e71)
    if ((int32_t)eax <= (int32_t)ebp)
    {
    COW_AT(101b1e75)
        ebp = 0u;
    }
    COW_AT(101b1e77)
    wr32(sp0 - 0x21f8u, ebp);
    wr32(sp0 - 0x21fcu, ebp);
    wr32(sp0 - 0x2200u, 0x12u);
    wr32(sp0 - 0x2204u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    t72 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, ebp, ebp);
    t73 = g->ecx;
    t74 = g->edx;
    eax = t72;
    ecx = t73;
    edx = t74;
    COW_AT(101b1e81)
    g->eax = eax;
    g->esp = sp0 - 0x21f4u;
    t75 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t75;
    COW_AT(101b1e86)
    goto L_101b1fc0;
L_101b1e8b: ;
    COW_AT(101b1e8b)
    wr32(sp0 - 0x21f8u, edi);
    t57 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t57);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = arg1;
    t58 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f4u;
    t59 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t57, edi);
    t60 = g->edx;
    eax = t59;
    edx = t60;
    COW_AT(101b1e9a)
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 1u);
    wr32(sp0 - 0x2200u, 0xcbu);
    wr32(sp0 - 0x2204u, 0u);
    g->esp = sp0 - 0x21f4u;
    cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcbu, 1u, 0u);
    t61 = g->ecx;
    ecx = t61;
    COW_AT(101b1eaa)
    t62 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t62);
    g->eax = t62;
    g->esp = sp0 - 0x21f4u;
    t63 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t62);
    eax = t63;
    COW_AT(101b1eb9)
    edi = eax;
    goto L_101b1fc0;
L_101b1ec0: ;
    COW_AT(101b1ec0)
    wr32(sp0 - 0x21f8u, edi);
    t54 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t54);
    g->eax = arg1 - 1u;
    g->edx = t54;
    g->esp = sp0 - 0x21f4u;
    t55 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t54, edi);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(101b1ed0)
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 1u);
    wr32(sp0 - 0x2200u, 0xcdu);
    loc_21fc = 1u;
    loc_2200 = 0xcdu;
    goto L_101b1ed8;
L_101b1ef5: ;
    COW_AT(101b1ef5)
    if (arg3 != 1u) goto L_101b1f54;
    COW_AT(101b1eff)
    if ((int32_t)(ebp - 7u) < 0)
    {
    COW_AT(101b1f10)
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        g->eax = sp0 - 0x21e4u;
        g->edx = rd32(self);
        t27 = rd32(self);
        g->esp = sp0 - 0x21f4u;
        t28 = cow_thiscall(g, rd32(t27 + 0x18u), self, 1, sp0 - 0x21e4u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    COW_AT(101b1f1c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x21f4u;
        t30 = cow_thiscall(g, COW_IMG(0x101b4b70u), sp0 - 0x21e4u, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(101b1f25)
        q32 = (int64_t)cow_muls(0x92492493u, eax);
        t33 = (uint32_t)((int32_t)(eax + cow_qhi(q32)) >> 2u);
        ecx = t33 >> 0x1fu;
        edx = t33 + (t33 >> 0x1fu);
    }
    else
    {
        eax = ebp - 7u;
    COW_AT(101b1f06)
        t25 = cow_divs(g, eax, 7u);
        t26 = cow_mods(g, eax, 7u);
        ecx = 7u;
        edx = t26;
    }
    COW_AT(101b1f3a)
    t34 = edx * 8u - edx;
    wr32(sp0 - 0x21f8u, t34);
    wr32(sp0 - 0x21fcu, t34);
    wr32(sp0 - 0x2200u, 0x12u);
    wr32(sp0 - 0x2204u, edi);
    g->eax = t34;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    t35 = cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x12u, t34, t34);
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(101b1f4d)
    g->eax = eax;
    g->esp = sp0 - 0x21f4u;
    t38 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    eax = t38;
    COW_AT(101b1f52)
    goto L_101b1fc0;
L_101b1f54: ;
    COW_AT(101b1f54)
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 1u);
    wr32(sp0 - 0x2200u, 0x15u);
    wr32(sp0 - 0x2204u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x21f4u;
    cow_stdcall(g, COW_IMG(0x102bc858u), 4, edi, 0x15u, 1u, 0u);
    t39 = g->ecx;
    ecx = t39;
    COW_AT(101b1f5f)
    wr32(sp0 - 0x21f8u, edi);
    t40 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21fcu, t40);
    g->eax = t40;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t41 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f4u;
    t42 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t40, edi);
    t43 = g->edx;
    eax = t42;
    edx = t43;
    COW_AT(101b1f6f)
    wr32(sp0 - 0x21f8u, 0x800u);
    wr32(sp0 - 0x21fcu, 0u);
    g->esp = sp0 - 0x21f4u;
    t44 = cow_call_regs(g, COW_IMG(0x101b20e0u), eax, self, g->edx, 0, 2, 0u, 0x800u);
    eax = t44;
    COW_AT(101b1f7c)
    t45 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t45);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t45;
    t46 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f4u;
    t47 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t45);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(101b1f8b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21f4u;
    t50 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t51 = g->edx;
    edx = t51;
    edi = eax;
    eax = t50;
    COW_AT(101b1f92)
L_101b1f9b: ;
    COW_AT(101b1f9b)
    if (rd8(self + 0xf100u) != 0u)
    {
    COW_AT(101b1fa3)
        if (rd32(self + 0xf0f4u) != 0u)
        {
    COW_AT(101b1fb5)
            g->eax = eax;
            g->esp = sp0 - 0x21f4u;
            t53 = cow_thiscall(g, COW_IMG(0x101911a0u), rd32(COW_IMG(0x1066269cu)), 0);
            eax = t53;
        }
        else
        {
    COW_AT(101b1fab)
            t52 = rd32(COW_IMG(0x10662dacu));
            wr32(t52 + 0x14u, 0u);
            eax = t52;
        }
    }
    goto L_101b1fc0;
L_101b1f94: ;
    COW_AT(101b1f94)
    g->eax = arg1 - 1u;
    g->edx = rd32(self);
    t22 = rd32(self);
    g->esp = sp0 - 0x21f4u;
    t23 = cow_thiscall(g, rd32(t22 + 0x70u), self, 0);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    goto L_101b1f9b;
L_101b1fd6: ;
    COW_AT(101b1fd6)
    wr32(sp0 - 0x21f4u, edi);
    t103 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x21f8u, t103);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = edx;
    t104 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x21f0u;
    t105 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t103, edi);
    t106 = g->edx;
    eax = t105;
    edx = t106;
    COW_AT(101b1fe5)
    if (arg1 == 5u) goto L_101b1ff6;
    COW_AT(101b1ff1)
    if (arg1 != 6u) goto L_101b201c;
L_101b1ff6: ;
    COW_AT(101b1ff6)
    if (rd8(self + 0xf100u) != 0u)
    {
    COW_AT(101b1ffe)
        if (rd32(self + 0xf0f4u) != 0u)
        {
    COW_AT(101b2011)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x21f0u;
            t108 = cow_thiscall(g, COW_IMG(0x101911a0u), rd32(COW_IMG(0x1066269cu)), 0);
            t109 = g->edx;
            eax = t108;
            edx = t109;
        }
        else
        {
    COW_AT(101b2006)
            t107 = rd32(COW_IMG(0x10662dacu));
            wr32(t107 + 0x14u, 0u);
            edx = t107;
        }
    }
L_101b201c: ;
    COW_AT(101b201c)
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t110 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(101b2023)
    if ((uint8_t)eax == 0u)
    {
        ebp = in_ebp;
        goto L_101b2085;
    }
    COW_AT(101b2027)
    if (arg1 - 1u > 5u) goto L_101b206d;
    COW_AT(101b202f)
    t112 = rd32(COW_IMG(0x101b20bcu) + arg1 * 4u - 4u);
    switch (t112 - RD)
    {
    case 0x101b2036u: goto L_101b2036;
    case 0x101b2044u: goto L_101b2044;
    case 0x101b2052u: goto L_101b2052;
    case 0x101b2060u: goto L_101b2060;
    case 0x101b206du: goto L_101b206d;
    default: rt_fatal(g, COW_IMG(0x101b202fu), "switch");
    }
    return 0;
L_101b2036: ;
    COW_AT(101b2036)
    wr32(sp0 - 0x21f4u, 0u);
    wr32(sp0 - 0x21f8u, 1u);
    wr32(sp0 - 0x21fcu, 0xdu);
    g->eax = arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t119 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0xdu, 1u, 0u);
    t120 = g->edx;
    eax = t119;
    edx = t120;
    COW_AT(101b2042)
    ebp = in_ebp;
    goto L_101b2085;
L_101b2044: ;
    COW_AT(101b2044)
    wr32(sp0 - 0x21f4u, 0u);
    wr32(sp0 - 0x21f8u, 1u);
    wr32(sp0 - 0x21fcu, 0x1bu);
    g->eax = arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t117 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 0x1bu, 1u, 0u);
    t118 = g->edx;
    eax = t117;
    edx = t118;
    COW_AT(101b2050)
    ebp = in_ebp;
    goto L_101b2085;
L_101b2052: ;
    COW_AT(101b2052)
    wr32(sp0 - 0x21f4u, 0u);
    wr32(sp0 - 0x21f8u, 1u);
    wr32(sp0 - 0x21fcu, 9u);
    g->eax = arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t115 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, 1u, 0u);
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(101b205e)
    ebp = in_ebp;
    goto L_101b2085;
L_101b2060: ;
    COW_AT(101b2060)
    wr32(sp0 - 0x21f4u, 0u);
    wr32(sp0 - 0x21f8u, 0u);
    wr32(sp0 - 0x21fcu, 9u);
    g->eax = arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t113 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, 9u, 0u, 0u);
    t114 = g->edx;
    eax = t113;
    edx = t114;
    COW_AT(101b206b)
    ebp = in_ebp;
    goto L_101b2085;
L_101b206d: ;
    COW_AT(101b206d)
    wr32(sp0 - 0x21f4u, arg3);
    wr32(sp0 - 0x21f8u, arg2);
    wr32(sp0 - 0x21fcu, arg1);
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0x21f0u;
    t121 = cow_thiscall(g, COW_IMG(0x101b53c0u), self, 3, arg1, arg2, arg3);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    ebp = in_ebp;
    goto L_101b2085;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b1d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b1d0au:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x21e4u;
        g->eax = 0x21e4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21fcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1d91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1da0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1dafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21fcu;
        g->ebx = 0u;
        wr32(sp0 - 0x21fcu, 0u);
        wr32(sp0 - 0x21f8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b1db3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21fcu;
        g->ebx = 0u;
        wr32(sp0 - 0x21fcu, 0u);
        wr32(sp0 - 0x21f8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b1db5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2200;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        g->esp = sp0 - 0x2200u;
        g->ebx = 0u;
        wr32(sp0 - 0x21fcu, 0u);
        wr32(sp0 - 0x21f8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b1dbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1dcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1dd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1de1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1deau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1deeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1dfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1e19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b1e4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1e66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1e9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1eaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_21fc;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1eb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1ec0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1ed8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_21fc;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x2200u;
        g->ebx = 0u;
        wr32(sp0 - 0x21f8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b1ee0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1eeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1ef5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1effu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1f25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        wr32(sp0 - 0x21f8u, sp0 - 0x21e4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1f3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        ecx = g->ecx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_21fc;
        uint32_t loc_2200;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2200 = rd32(sp0 - 0x2200u);
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1f9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fa3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f4u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1fe5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b1ff1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b1ff6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b1ffeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2006u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2011u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b201cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2023u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2027u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b202fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2036u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2042u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_21fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2044u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2050u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_21fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2052u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b205eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_21fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b2060u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        g->eax = arg1 - 1u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101b206bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_21fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b206du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x21f0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2085u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_21fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_21fc = rd32(sp0 - 0x21fcu);
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    case 0x101b208eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x21f0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b1d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b1d00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
