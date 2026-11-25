/* f_0x101ab820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ab820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ab829u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101ab829;
    case 0x101ab838u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101ab838;
    case 0x101ab846u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101ab846;
    case 0x101ab84bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101ab84b;
    case 0x101ab853u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101ab853;
    case 0x101ab860u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab860;
    case 0x101ab867u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab867;
    case 0x101ab86bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab86b;
    case 0x101ab878u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab878;
    case 0x101ab87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab87f;
    case 0x101ab883u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab883;
    case 0x101ab890u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab890;
    case 0x101ab897u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab897;
    case 0x101ab89bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab89b;
    case 0x101ab8a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8a8;
    case 0x101ab8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8af;
    case 0x101ab8b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8b1;
    case 0x101ab8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8bb;
    case 0x101ab8cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8cb;
    case 0x101ab8d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8d2;
    case 0x101ab8deu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8de;
    case 0x101ab8eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8ee;
    case 0x101ab8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab8f5;
    case 0x101ab901u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab901;
    case 0x101ab911u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab911;
    case 0x101ab918u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab918;
    case 0x101ab924u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab924;
    case 0x101ab934u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab934;
    case 0x101ab93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab93b;
    case 0x101ab947u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab947;
    case 0x101ab957u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab957;
    case 0x101ab95eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab95e;
    case 0x101ab96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab96e;
    case 0x101ab975u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab975;
    case 0x101ab981u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab981;
    case 0x101ab986u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab986;
    case 0x101ab98cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab98c;
    case 0x101ab990u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab990;
    case 0x101ab992u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab992;
    case 0x101ab99eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab99e;
    case 0x101ab9a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9a5;
    case 0x101ab9b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9b1;
    case 0x101ab9beu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9be;
    case 0x101ab9c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9c5;
    case 0x101ab9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9d1;
    case 0x101ab9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9de;
    case 0x101ab9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9e5;
    case 0x101ab9f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9f1;
    case 0x101ab9feu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101ab9fe;
    case 0x101aba05u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba05;
    case 0x101aba11u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba11;
    case 0x101aba1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba1e;
    case 0x101aba25u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba25;
    case 0x101aba31u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba31;
    case 0x101aba3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba3e;
    case 0x101aba45u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba45;
    case 0x101aba51u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba51;
    case 0x101aba61u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba61;
    case 0x101aba68u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba68;
    case 0x101aba74u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba74;
    case 0x101aba84u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba84;
    case 0x101aba8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba8b;
    case 0x101aba97u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101aba97;
    case 0x101abaa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abaa4;
    case 0x101abaabu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abaab;
    case 0x101abab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abab7;
    case 0x101abac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abac4;
    case 0x101abacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abacb;
    case 0x101abad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abad7;
    case 0x101abae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abae4;
    case 0x101abaebu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abaeb;
    case 0x101abaf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abaf7;
    case 0x101abb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb04;
    case 0x101abb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb0b;
    case 0x101abb17u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb17;
    case 0x101abb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb24;
    case 0x101abb2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb2b;
    case 0x101abb37u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101abb37;
    default: break;
    }
#endif

    COW_AT(101ab820)
    t1 = rd8(self);
    if ((uint8_t)t1 != 0u)
    {
    COW_AT(101ab829)
        if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
        {
            eax = rd32(COW_IMG(0x1057876cu));
            ecx = rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u);
            edx = in_edx;
            goto L_101ab853;
        }
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(101ab838)
        if (rd32(COW_IMG(0x10662d40u)) == 0u) goto L_101abb37;
        ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(101ab846)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(101ab84b)
        if ((uint8_t)eax == 0u) goto L_101abb37;
L_101ab853: ;
    COW_AT(101ab853)
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2bu, 0u, 0xffffffffu);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    COW_AT(101ab860)
        if ((uint8_t)eax == 0u) goto L_101ab86b;
    COW_AT(101ab867)
        loc_4 = 2u;
L_101ab8b1: ;
    COW_AT(101ab8b1)
        g->eax = eax;
        g->esp = sp0;
        t17 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, loc_4);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
L_101ab8bb: ;
    COW_AT(101ab8bb)
        g->edx = edx;
        g->esp = sp0;
        t20 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 1u, 0xffffffffu);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(101ab8cb)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab8d2)
            g->eax = eax;
            g->esp = sp0;
            t23 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 5u);
            t24 = g->ecx;
            t25 = g->edx;
            eax = t23;
            ecx = t24;
            edx = t25;
        }
    COW_AT(101ab8de)
        g->edx = edx;
        g->esp = sp0;
        t26 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 0u, 0xffffffffu);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    COW_AT(101ab8ee)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab8f5)
            g->eax = eax;
            g->esp = sp0;
            t29 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x1du);
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
        }
    COW_AT(101ab901)
        g->edx = edx;
        g->esp = sp0;
        t32 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x93u, 5u, 0xffffffffu);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    COW_AT(101ab911)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab918)
            g->eax = eax;
            g->esp = sp0;
            t35 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x20u);
            t36 = g->ecx;
            t37 = g->edx;
            eax = t35;
            ecx = t36;
            edx = t37;
        }
    COW_AT(101ab924)
        g->edx = edx;
        g->esp = sp0;
        t38 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x94u, 1u, 0xffffffffu);
        t39 = g->ecx;
        t40 = g->edx;
        eax = t38;
        ecx = t39;
        edx = t40;
    COW_AT(101ab934)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab93b)
            g->eax = eax;
            g->esp = sp0;
            t41 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 6u);
            t42 = g->ecx;
            t43 = g->edx;
            eax = t41;
            ecx = t42;
            edx = t43;
        }
    COW_AT(101ab947)
        g->edx = edx;
        g->esp = sp0;
        t44 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x94u, 1u, 0u);
        t45 = g->ecx;
        t46 = g->edx;
        eax = t44;
        ecx = t45;
        edx = t46;
    COW_AT(101ab957)
        if ((uint8_t)eax != 0u) goto L_101ab975;
    COW_AT(101ab95e)
        g->edx = edx;
        g->esp = sp0;
        t47 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8cu, 1u, 0xffffffffu);
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
    COW_AT(101ab96e)
        if ((uint8_t)eax == 0u) goto L_101ab981;
L_101ab975: ;
    COW_AT(101ab975)
        g->eax = eax;
        g->esp = sp0;
        t50 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x1eu);
        t51 = g->ecx;
        t52 = g->edx;
        eax = t50;
        ecx = t51;
        edx = t52;
L_101ab981: ;
    COW_AT(101ab981)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t53 = cow_stdcall(g, COW_IMG(0x1025e040u), 0);
        t54 = g->ecx;
        t55 = g->edx;
        eax = t53;
        ecx = t54;
        edx = t55;
    COW_AT(101ab986)
    COW_AT(101ab990)
    COW_AT(101ab98c)
    COW_AT(101ab992)
        g->edx = edx;
        g->esp = sp0 - 8u;
        t56 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 2, 0x3eu, 0x94u);
        t57 = g->ecx;
        t58 = g->edx;
        eax = t56;
        ecx = t57;
        edx = t58;
    COW_AT(101ab99e)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab9a5)
            g->eax = eax;
            g->esp = sp0;
            t59 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x1fu);
            t60 = g->ecx;
            t61 = g->edx;
            eax = t59;
            ecx = t60;
            edx = t61;
        }
    COW_AT(101ab9b1)
        g->edx = edx;
        g->esp = sp0;
        t62 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x18u, 1u, 0xffffffffu);
        t63 = g->ecx;
        t64 = g->edx;
        eax = t62;
        ecx = t63;
        edx = t64;
    COW_AT(101ab9be)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab9c5)
            g->eax = eax;
            g->esp = sp0;
            t65 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 7u);
            t66 = g->ecx;
            t67 = g->edx;
            eax = t65;
            ecx = t66;
            edx = t67;
        }
    COW_AT(101ab9d1)
        g->edx = edx;
        g->esp = sp0;
        t68 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x11u, 1u, 0xffffffffu);
        t69 = g->ecx;
        t70 = g->edx;
        eax = t68;
        ecx = t69;
        edx = t70;
    COW_AT(101ab9de)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101ab9e5)
            g->eax = eax;
            g->esp = sp0;
            t71 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 8u);
            t72 = g->ecx;
            t73 = g->edx;
            eax = t71;
            ecx = t72;
            edx = t73;
        }
    COW_AT(101ab9f1)
        g->edx = edx;
        g->esp = sp0;
        t74 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x1eu, 1u, 0xffffffffu);
        t75 = g->ecx;
        t76 = g->edx;
        eax = t74;
        ecx = t75;
        edx = t76;
    COW_AT(101ab9fe)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101aba05)
            g->eax = eax;
            g->esp = sp0;
            t77 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x11u);
            t78 = g->ecx;
            t79 = g->edx;
            eax = t77;
            ecx = t78;
            edx = t79;
        }
    COW_AT(101aba11)
        g->edx = edx;
        g->esp = sp0;
        t80 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x1fu, 1u, 0xffffffffu);
        t81 = g->ecx;
        t82 = g->edx;
        eax = t80;
        ecx = t81;
        edx = t82;
    COW_AT(101aba1e)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101aba25)
            g->eax = eax;
            g->esp = sp0;
            t83 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x15u);
            t84 = g->ecx;
            t85 = g->edx;
            eax = t83;
            ecx = t84;
            edx = t85;
        }
    COW_AT(101aba31)
        g->edx = edx;
        g->esp = sp0;
        t86 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x14u, 1u, 0xffffffffu);
        t87 = g->ecx;
        t88 = g->edx;
        eax = t86;
        ecx = t87;
        edx = t88;
    COW_AT(101aba3e)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101aba45)
            g->eax = eax;
            g->esp = sp0;
            t89 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x12u);
            t90 = g->ecx;
            t91 = g->edx;
            eax = t89;
            ecx = t90;
            edx = t91;
        }
    COW_AT(101aba51)
        g->edx = edx;
        g->esp = sp0;
        t92 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x86u, 1u, 0xffffffffu);
        t93 = g->ecx;
        t94 = g->edx;
        eax = t92;
        ecx = t93;
        edx = t94;
    COW_AT(101aba61)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101aba68)
            g->eax = eax;
            g->esp = sp0;
            t95 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0xau);
            t96 = g->ecx;
            t97 = g->edx;
            eax = t95;
            ecx = t96;
            edx = t97;
        }
    COW_AT(101aba74)
        g->edx = edx;
        g->esp = sp0;
        t98 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x85u, 1u, 0xffffffffu);
        t99 = g->ecx;
        t100 = g->edx;
        eax = t98;
        ecx = t99;
        edx = t100;
    COW_AT(101aba84)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101aba8b)
            g->eax = eax;
            g->esp = sp0;
            t101 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0xbu);
            t102 = g->ecx;
            t103 = g->edx;
            eax = t101;
            ecx = t102;
            edx = t103;
        }
    COW_AT(101aba97)
        g->edx = edx;
        g->esp = sp0;
        t104 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x22u, 1u, 0xffffffffu);
        t105 = g->ecx;
        t106 = g->edx;
        eax = t104;
        ecx = t105;
        edx = t106;
    COW_AT(101abaa4)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101abaab)
            g->eax = eax;
            g->esp = sp0;
            t107 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0xcu);
            t108 = g->ecx;
            t109 = g->edx;
            eax = t107;
            ecx = t108;
            edx = t109;
        }
    COW_AT(101abab7)
        g->edx = edx;
        g->esp = sp0;
        t110 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x24u, 1u, 0xffffffffu);
        t111 = g->ecx;
        t112 = g->edx;
        eax = t110;
        ecx = t111;
        edx = t112;
    COW_AT(101abac4)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101abacb)
            g->eax = eax;
            g->esp = sp0;
            t113 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0xeu);
            t114 = g->ecx;
            t115 = g->edx;
            eax = t113;
            ecx = t114;
            edx = t115;
        }
    COW_AT(101abad7)
        g->edx = edx;
        g->esp = sp0;
        t116 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x25u, 1u, 0xffffffffu);
        t117 = g->ecx;
        t118 = g->edx;
        eax = t116;
        ecx = t117;
        edx = t118;
    COW_AT(101abae4)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101abaeb)
            g->eax = eax;
            g->esp = sp0;
            t119 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0xfu);
            t120 = g->ecx;
            t121 = g->edx;
            eax = t119;
            ecx = t120;
            edx = t121;
        }
    COW_AT(101abaf7)
        g->edx = edx;
        g->esp = sp0;
        t122 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x26u, 1u, 0xffffffffu);
        t123 = g->ecx;
        t124 = g->edx;
        eax = t122;
        ecx = t123;
        edx = t124;
    COW_AT(101abb04)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101abb0b)
            g->eax = eax;
            g->esp = sp0;
            t125 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x10u);
            t126 = g->ecx;
            t127 = g->edx;
            eax = t125;
            ecx = t126;
            edx = t127;
        }
    COW_AT(101abb17)
        g->edx = edx;
        g->esp = sp0;
        t128 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2fu, 1u, 0xffffffffu);
        t129 = g->edx;
        eax = t128;
        edx = t129;
    COW_AT(101abb24)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101abb2b)
            g->esp = sp0;
            cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x13u);
        }
    }
L_101abb37: ;
    COW_AT(101abb37)
    return;
L_101ab86b: ;
    COW_AT(101ab86b)
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2cu, 0u, 0xffffffffu);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(101ab878)
    if ((uint8_t)eax == 0u) goto L_101ab883;
    COW_AT(101ab87f)
    loc_4 = 1u;
    goto L_101ab8b1;
L_101ab883: ;
    COW_AT(101ab883)
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2eu, 0u, 0xffffffffu);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(101ab890)
    if ((uint8_t)eax == 0u) goto L_101ab89b;
    COW_AT(101ab897)
    loc_4 = 4u;
    goto L_101ab8b1;
L_101ab89b: ;
    COW_AT(101ab89b)
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x2du, 0u, 0xffffffffu);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(101ab8a8)
    if ((uint8_t)eax == 0u) goto L_101ab8bb;
    COW_AT(101ab8af)
    loc_4 = 3u;
    goto L_101ab8b1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ab820(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ab829u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab838u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab846u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab84bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab853u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab860u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab867u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab86bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab878u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab87fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab883u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab890u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab897u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab89bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab8a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab8afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab8b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ab8bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab8cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab8d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab8deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab8eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab8f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab901u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab911u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab918u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab924u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab934u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab93bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab947u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab957u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab95eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab96eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab975u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab981u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab986u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab98cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ab990u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ab992u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101ab99eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab9a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab9c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101ab9e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ab9feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aba05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aba25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aba45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aba68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101aba8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aba97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abaa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101abaabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101abacbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abad7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abae4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101abaebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abaf7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abb04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101abb0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abb17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abb24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101abb2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101abb37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ab820(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ab820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
