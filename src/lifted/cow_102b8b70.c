/* f_0x102b8b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b8b70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b8b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b80;
    case 0x102b8b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b84;
    case 0x102b8b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b87;
    case 0x102b8b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b8b;
    case 0x102b8b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b8f;
    case 0x102b8b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b96;
    case 0x102b8ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8ba0;
    case 0x102b8ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8ba9;
    case 0x102b8bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8baf;
    case 0x102b8bb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8bb5;
    case 0x102b8bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8bc9;
    case 0x102b8be3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8be3;
    case 0x102b8bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8bed;
    case 0x102b8bfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8bfc;
    case 0x102b8c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c11;
    case 0x102b8c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c20;
    case 0x102b8c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c34;
    case 0x102b8c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c3e;
    case 0x102b8c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c4d;
    case 0x102b8c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c61;
    case 0x102b8c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c73;
    case 0x102b8c87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c87;
    case 0x102b8c96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8c96;
    case 0x102b8ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ca5;
    case 0x102b8cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8cb9;
    case 0x102b8cc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8cc8;
    case 0x102b8cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8cdc;
    case 0x102b8cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ceb;
    case 0x102b8cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8cfd;
    case 0x102b8d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d11;
    case 0x102b8d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d20;
    case 0x102b8d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d34;
    case 0x102b8d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d3e;
    case 0x102b8d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d48;
    case 0x102b8d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d57;
    case 0x102b8d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d6b;
    case 0x102b8d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d7a;
    case 0x102b8d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d91;
    case 0x102b8d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8d9b;
    case 0x102b8da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8da5;
    case 0x102b8db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8db4;
    case 0x102b8dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8dc8;
    case 0x102b8dd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8dd7;
    case 0x102b8de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8de1;
    case 0x102b8df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8df0;
    case 0x102b8e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e07;
    case 0x102b8e16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e16;
    case 0x102b8e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e30;
    case 0x102b8e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e3a;
    case 0x102b8e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e44;
    case 0x102b8e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e53;
    case 0x102b8e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e6a;
    case 0x102b8e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8e73;
    case 0x102b8e86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e86;
    case 0x102b8e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e90;
    case 0x102b8e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8e9f;
    case 0x102b8eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8eb4;
    case 0x102b8ec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ec3;
    case 0x102b8ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ed7;
    case 0x102b8ee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ee1;
    case 0x102b8ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ef0;
    case 0x102b8f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f04;
    case 0x102b8f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f16;
    case 0x102b8f2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f2a;
    case 0x102b8f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f39;
    case 0x102b8f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f48;
    case 0x102b8f5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f5c;
    case 0x102b8f6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f6b;
    case 0x102b8f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f7f;
    case 0x102b8f8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8f8e;
    case 0x102b8fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8fa0;
    case 0x102b8fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8fb4;
    case 0x102b8fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8fc3;
    case 0x102b8fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8fd7;
    case 0x102b8fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8fe1;
    case 0x102b8febu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8feb;
    case 0x102b8ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b8ffa;
    case 0x102b900eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b900e;
    case 0x102b901du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b901d;
    case 0x102b9034u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9034;
    case 0x102b903eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b903e;
    case 0x102b9048u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9048;
    case 0x102b9057u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9057;
    case 0x102b906bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b906b;
    case 0x102b907au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b907a;
    case 0x102b9084u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9084;
    case 0x102b9093u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9093;
    case 0x102b90aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90aa;
    case 0x102b90b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90b9;
    case 0x102b90d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90d3;
    case 0x102b90e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90e2;
    case 0x102b90ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90ec;
    case 0x102b90fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b90fb;
    case 0x102b9112u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b9112;
    default: break;
    }
#endif

    COW_AT(102b8b70)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = rd32(sp0 + 4u);
    COW_AT(102b8b84)
        esi = rd32(eax + 0x54u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = rd32(sp0 + 4u);
    COW_AT(102b8b80)
        esi = 0u;
    }
    COW_AT(102b8b87)
    if (eax != 0u)
    {
    COW_AT(102b8b8f)
        ecx = rd32(eax + rd32(ecx + 0x44u) * 4u + 0x54u);
    }
    else
    {
    COW_AT(102b8b8b)
        ecx = 0u;
    }
    COW_AT(102b8b96)
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t1);
    eax = 0u;
    edx = t1;
L_102b8ba0: ;
    COW_AT(102b8ba0)
    t2 = rd32(ecx + rd32(eax * 4u + edx) * 4u);
    if (t2 == 4u) goto L_102b8bb5;
    COW_AT(102b8ba9)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_102b8ba0;
    }
    COW_AT(102b8baf)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b8bb5: ;
    COW_AT(102b8bb5)
    t3 = rd32(ecx + rd32(edx + rd32(COW_IMG(0x103c7b60u) + eax * 4u) * 4u) * 4u);
    if (t3 != 3u) goto L_102b8e73;
    COW_AT(102b8bc9)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t4 = rd8(COW_IMG(0x103c7b80u) + eax * 4u);
    wr8(sp0 - 4u, (uint8_t)t4);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    ecx = t5;
    edx = t6;
    COW_AT(102b8be3)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    eax = t7;
    COW_AT(102b8bed)
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t8 = g->edx;
    edx = t8;
    COW_AT(102b8bfc)
    t9 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x30u, t9);
    t10 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x34u, t10);
    g->ecx = t9;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t10, t9);
    t11 = g->ecx;
    ecx = t11;
    edi = t10;
    COW_AT(102b8c11)
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8c20)
    t12 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x40u, t12);
    wr32(sp0 - 0x44u, edi + 0xcu);
    g->eax = edi + 0xcu;
    g->edx = t12;
    g->esp = sp0 - 0x3cu;
    t13 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0xcu, t12);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(102b8c34)
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t15 = g->ecx;
    ecx = t15;
    COW_AT(102b8c3e)
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8c4d)
    t16 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x54u, t16);
    wr32(sp0 - 0x58u, edi + 0x18u);
    g->eax = edi + 0x18u;
    g->esp = sp0 - 0x50u;
    t17 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x18u, t16);
    eax = t17;
    COW_AT(102b8c61)
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8c73)
    t18 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x24u, t18);
    wr32(sp0 - 0x28u, edi + 0x24u);
    g->edx = edi + 0x24u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x24u, t18);
    t19 = g->edx;
    edx = t19;
    COW_AT(102b8c87)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t20 = g->ecx;
    ecx = t20;
    COW_AT(102b8c96)
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8ca5)
    t21 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x3cu, t21);
    wr32(sp0 - 0x40u, edi + 0x30u);
    g->eax = edi + 0x30u;
    g->esp = sp0 - 0x38u;
    t22 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x30u, t21);
    eax = t22;
    COW_AT(102b8cb9)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8cc8)
    t23 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x4cu, t23);
    wr32(sp0 - 0x50u, edi + 0x3cu);
    g->edx = edi + 0x3cu;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x3cu, t23);
    t24 = g->edx;
    edx = t24;
    COW_AT(102b8cdc)
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t25 = g->ecx;
    ecx = t25;
    COW_AT(102b8ceb)
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8cfd)
    t26 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x24u, t26);
    wr32(sp0 - 0x28u, edi + 0x48u);
    g->eax = edi + 0x48u;
    g->esp = sp0 - 0x20u;
    t27 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x48u, t26);
    eax = t27;
    COW_AT(102b8d11)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8d20)
    t28 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x34u, t28);
    wr32(sp0 - 0x38u, edi + 0x54u);
    g->ecx = t28;
    g->edx = edi + 0x54u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x54u, t28);
    t29 = g->ecx;
    t30 = g->edx;
    ecx = t29;
    edx = t30;
    COW_AT(102b8d34)
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x30u;
    t31 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(102b8d3e)
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, sp0 - 0x10u, rd32(sp0 - 0x38u));
    t33 = g->ecx;
    ecx = t33;
    COW_AT(102b8d48)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8d57)
    t34 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x4cu, t34);
    wr32(sp0 - 0x50u, edi + 0x60u);
    g->eax = edi + 0x60u;
    g->esp = sp0 - 0x48u;
    t35 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x60u, t34);
    eax = t35;
    COW_AT(102b8d6b)
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8d7a)
    t36 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x1cu, t36);
    wr32(sp0 - 0x20u, edi + 0x6cu);
    g->ecx = t36;
    g->edx = edi + 0x6cu;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x6cu, t36);
    t37 = g->ecx;
    t38 = g->edx;
    ecx = t37;
    edx = t38;
    COW_AT(102b8d91)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t39 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(102b8d9b)
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, edx, 1, 1, sp0 - 0x10u);
    t41 = g->ecx;
    ecx = t41;
    COW_AT(102b8da5)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8db4)
    t42 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x34u, t42);
    wr32(sp0 - 0x38u, edi + 0x78u);
    g->eax = edi + 0x78u;
    g->esp = sp0 - 0x30u;
    t43 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x78u, t42);
    eax = t43;
    COW_AT(102b8dc8)
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc520u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
    COW_AT(102b8dd7)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x38u;
    t46 = cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    eax = t46;
    COW_AT(102b8de1)
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8df0)
    t47 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x50u, t47);
    wr32(sp0 - 0x54u, edi + 0x84u);
    g->edx = edi + 0x84u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x84u, t47);
    t48 = g->edx;
    edx = t48;
    COW_AT(102b8e07)
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8e16)
    t49 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x1cu, t49);
    wr32(sp0 - 0x20u, edi + 0x90u);
    g->eax = t49;
    g->ecx = edi + 0x90u;
    g->esp = sp0 - 0x18u;
    t50 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x90u, t49);
    t51 = g->ecx;
    eax = t50;
    ecx = t51;
    COW_AT(102b8e30)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t52 = g->ecx;
    t53 = g->edx;
    ecx = t52;
    edx = t53;
    COW_AT(102b8e3a)
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t54 = cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, edx, 1, 1, sp0 - 0x10u);
    eax = t54;
    COW_AT(102b8e44)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t55 = g->edx;
    edx = t55;
    COW_AT(102b8e53)
    t56 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x34u, t56);
    wr32(sp0 - 0x38u, edi + 0x9cu);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x9cu, t56);
    COW_AT(102b8e6a)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
L_102b8e73: ;
    COW_AT(102b8e73)
    wr8(sp0 - 4u, (uint8_t)eax);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t57 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    COW_AT(102b8e86)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t59 = g->ecx;
    ecx = t59;
    COW_AT(102b8e90)
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8e9f)
    t60 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x30u, t60);
    t61 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x34u, t61);
    g->edx = t60;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t61, t60);
    t62 = g->edx;
    edx = t62;
    edi = t61;
    COW_AT(102b8eb4)
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8ec3)
    t63 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x40u, t63);
    wr32(sp0 - 0x44u, edi + 0xcu);
    g->eax = t63;
    g->ecx = edi + 0xcu;
    g->esp = sp0 - 0x3cu;
    t64 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0xcu, t63);
    t65 = g->ecx;
    eax = t64;
    ecx = t65;
    COW_AT(102b8ed7)
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t66 = g->edx;
    edx = t66;
    COW_AT(102b8ee1)
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8ef0)
    t67 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x54u, t67);
    wr32(sp0 - 0x58u, edi + 0x18u);
    g->ecx = edi + 0x18u;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x18u, t67);
    t68 = g->ecx;
    ecx = t68;
    COW_AT(102b8f04)
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8f16)
    t69 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x24u, t69);
    wr32(sp0 - 0x28u, edi + 0x24u);
    g->eax = edi + 0x24u;
    g->esp = sp0 - 0x20u;
    t70 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x24u, t69);
    eax = t70;
    COW_AT(102b8f2a)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t71 = g->edx;
    edx = t71;
    COW_AT(102b8f39)
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8f48)
    t72 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x3cu, t72);
    wr32(sp0 - 0x40u, edi + 0x30u);
    g->ecx = edi + 0x30u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x30u, t72);
    t73 = g->ecx;
    ecx = t73;
    COW_AT(102b8f5c)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8f6b)
    t74 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x4cu, t74);
    wr32(sp0 - 0x50u, edi + 0x3cu);
    g->eax = edi + 0x3cu;
    g->esp = sp0 - 0x48u;
    t75 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x3cu, t74);
    eax = t75;
    COW_AT(102b8f7f)
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t76 = g->edx;
    edx = t76;
    COW_AT(102b8f8e)
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8fa0)
    t77 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x24u, t77);
    wr32(sp0 - 0x28u, edi + 0x48u);
    g->ecx = edi + 0x48u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x48u, t77);
    t78 = g->ecx;
    ecx = t78;
    COW_AT(102b8fb4)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8fc3)
    t79 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x34u, t79);
    wr32(sp0 - 0x38u, edi + 0x54u);
    g->eax = edi + 0x54u;
    g->edx = t79;
    g->esp = sp0 - 0x30u;
    t80 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x54u, t79);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(102b8fd7)
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x30u;
    t82 = cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t83 = g->ecx;
    eax = t82;
    ecx = t83;
    COW_AT(102b8fe1)
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 0x10u, rd32(sp0 - 0x38u));
    t84 = g->edx;
    edx = t84;
    COW_AT(102b8feb)
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b8ffa)
    t85 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x4cu, t85);
    wr32(sp0 - 0x50u, edi + 0x60u);
    g->ecx = edi + 0x60u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x60u, t85);
    t86 = g->ecx;
    ecx = t86;
    COW_AT(102b900e)
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b901d)
    t87 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x1cu, t87);
    wr32(sp0 - 0x20u, edi + 0x6cu);
    g->eax = edi + 0x6cu;
    g->edx = t87;
    g->esp = sp0 - 0x18u;
    t88 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x6cu, t87);
    t89 = g->edx;
    eax = t88;
    edx = t89;
    COW_AT(102b9034)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t90 = cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t91 = g->ecx;
    eax = t90;
    ecx = t91;
    COW_AT(102b903e)
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t92 = g->edx;
    edx = t92;
    COW_AT(102b9048)
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b9057)
    t93 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x34u, t93);
    wr32(sp0 - 0x38u, edi + 0x78u);
    g->ecx = edi + 0x78u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x78u, t93);
    t94 = g->ecx;
    ecx = t94;
    COW_AT(102b906b)
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x38u;
    t95 = cow_cdecl(g, COW_IMG(0x102bc4a0u), 2, sp0 - 8u, sp0 - 0x10u);
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(102b907a)
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x102bc7a0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t97 = g->ecx;
    ecx = t97;
    COW_AT(102b9084)
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b9093)
    t98 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x50u, t98);
    wr32(sp0 - 0x54u, edi + 0x84u);
    g->eax = edi + 0x84u;
    g->esp = sp0 - 0x4cu;
    t99 = cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x84u, t98);
    eax = t99;
    COW_AT(102b90aa)
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    COW_AT(102b90b9)
    t100 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x1cu, t100);
    wr32(sp0 - 0x20u, edi + 0x90u);
    g->edx = edi + 0x90u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x90u, t100);
    t101 = g->edx;
    edx = t101;
    COW_AT(102b90d3)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 0x10u;
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t102 = cow_cdecl(g, COW_IMG(0x102bc670u), 4, sp0 - 8u, sp0 - 0x10u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t103 = g->ecx;
    eax = t102;
    ecx = t103;
    COW_AT(102b90e2)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t104 = g->edx;
    edx = t104;
    COW_AT(102b90ec)
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t105 = g->ecx;
    ecx = t105;
    COW_AT(102b90fb)
    t106 = esi + rd32(sp0 + 4u) * 0xcu;
    wr32(sp0 - 0x38u, t106);
    wr32(sp0 - 0x3cu, edi + 0x9cu);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, edi + 0x9cu, t106);
    COW_AT(102b9112)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b8b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b8b80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8ba9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8bafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8bb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8bc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8be3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8bedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8bfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8c96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ca5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8cb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8cc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8cdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8cebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8cfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8d9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8da5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8db4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8dc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8dd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8de1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8df0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8e86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8e9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8eb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ec3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ed7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ee1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ef0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8f8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8fa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8fd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8fe1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8febu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b8ffau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b900eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x58u, sp0 - 8u);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b901du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b9034u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b903eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b9048u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b9057u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b906bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b907au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b9084u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b9093u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x10u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b90fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b9112u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x5cu, sp0 - 0x10u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        wr32(sp0 - 0x48u, sp0 + 4u);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b8b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b8b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
