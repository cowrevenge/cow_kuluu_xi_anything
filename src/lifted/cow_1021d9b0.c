/* f_0x1021d9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021d9b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 580u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021d9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021d9ec;
    case 0x1021d9f4u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021d9f4;
    case 0x1021d9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021d9fa;
    case 0x1021da02u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da02;
    case 0x1021da08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da08;
    case 0x1021da10u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da10;
    case 0x1021da16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da16;
    case 0x1021da1eu: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da1e;
    case 0x1021da24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da24;
    case 0x1021da35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x228u); in_esi = rd32(sp0 - 0x224u); in_ebx = rd32(sp0 - 0x220u); g->ebx = rd32(sp0 - 0x220u); g->edi = rd32(sp0 - 0x228u); g->esi = rd32(sp0 - 0x224u); goto E_1021da35;
    case 0x1021da46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021da46;
    case 0x1021da55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021da55;
    case 0x1021da57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021da57;
    case 0x1021da62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da62;
    case 0x1021da6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da6a;
    case 0x1021da70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da70;
    case 0x1021da78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da78;
    case 0x1021da7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da7e;
    case 0x1021da86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da86;
    case 0x1021da8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da8c;
    case 0x1021da94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da94;
    case 0x1021da9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021da9a;
    case 0x1021daabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021daab;
    case 0x1021daafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021daaf;
    case 0x1021dab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dab4;
    case 0x1021dab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dab6;
    case 0x1021dadbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dadb;
    case 0x1021dae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dae5;
    case 0x1021daebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021daeb;
    case 0x1021daf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021daf3;
    case 0x1021daf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021daf9;
    case 0x1021db01u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db01;
    case 0x1021db07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db07;
    case 0x1021db0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db0f;
    case 0x1021db15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db15;
    case 0x1021db23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021db23;
    case 0x1021db5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db5e;
    case 0x1021db68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db68;
    case 0x1021db6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db6e;
    case 0x1021db76u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db76;
    case 0x1021db7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db7c;
    case 0x1021db84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db84;
    case 0x1021db8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db8a;
    case 0x1021db96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021db96;
    case 0x1021dbaau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dbaa;
    case 0x1021dbc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbc6;
    case 0x1021dbd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbd0;
    case 0x1021dbd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbd6;
    case 0x1021dbdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbde;
    case 0x1021dbe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbe4;
    case 0x1021dbecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbec;
    case 0x1021dbf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbf2;
    case 0x1021dbfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dbfa;
    case 0x1021dc0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dc0e;
    case 0x1021dc2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc2a;
    case 0x1021dc34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc34;
    case 0x1021dc3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc3a;
    case 0x1021dc42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc42;
    case 0x1021dc48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc48;
    case 0x1021dc50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc50;
    case 0x1021dc56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc56;
    case 0x1021dc5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc5e;
    case 0x1021dc64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc64;
    case 0x1021dc72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dc72;
    case 0x1021dc8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc8c;
    case 0x1021dc96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc96;
    case 0x1021dc9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dc9c;
    case 0x1021dca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dca4;
    case 0x1021dcaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1021dcaa;
    case 0x1021dccau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; goto E_1021dcca;
    default: break;
    }
#endif

    COW_AT(1021d9b0)
    wr32(sp0 - 0x220u, in_ebx);
    wr32(sp0 - 0x224u, in_esi);
    wr32(sp0 - 0x228u, in_edi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x22cu, self + 0x10u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e60u));
    wr32(sp0 - 0x234u, 3u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x23cu, COW_IMG(0x1033fe08u));
    wr32(sp0 - 0x21cu, 0u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x210u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x228u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103294a4u)), 5, COW_IMG(0x1033fe08u), 0u, 3u, COW_IMG(0x10385e60u), self + 0x10u);   /* ole32.dll!CoCreateInstance */
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1021da35;
    }
    ecx = t2;
    edx = t3;
    COW_AT(1021d9ec)
    if (0u)
    {
    COW_AT(1021d9f4)
        wr32(sp0 - 0x22cu, 0u);
        g->edx = edx;
        t4 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t4 + 8u), t4, 1, 0u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    COW_AT(1021d9fa)
    if (0u)
    {
    COW_AT(1021da02)
        wr32(sp0 - 0x22cu, 0u);
        g->edx = rd32(0u);
        t7 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t7 + 8u), ecx, 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    COW_AT(1021da08)
    if (0u)
    {
    COW_AT(1021da10)
        wr32(sp0 - 0x22cu, 0u);
        t10 = rd32(0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t10 + 8u), t10, 1, 0u);
        t11 = g->ecx;
        ecx = t11;
    }
    COW_AT(1021da16)
    if (0u)
    {
    COW_AT(1021da1e)
        wr32(sp0 - 0x22cu, 0u);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(0u) + 8u), ecx, 1, 0u);
    }
    COW_AT(1021da24)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004005u;
L_1021da35: ;
    COW_AT(1021da35)
    wr32(sp0 - 0x22cu, 0x188u);
    g->eax = eax;
    g->esp = sp0 - 0x220u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x188u, in_edi, in_esi);
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
    COW_AT(1021da55)
        eax = 0u;
    }
    else
    {
        eax = t12;
        edx = t13;
    COW_AT(1021da46)
        wr32(sp0 - 0x22cu, sp0 - 0x20cu);
        wr32(sp0 - 0x230u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t14 = cow_thiscall(g, COW_IMG(0x1021de90u), eax, 2, 0u, sp0 - 0x20cu);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    COW_AT(1021da57)
    t16 = rd32(sp0 - 0x20cu);
    wr32(self + 0x20u, eax);
    if ((int32_t)t16 >= 0)
    {
        ecx = t16;
        goto L_1021daab;
    }
    ecx = t16;
    COW_AT(1021da62)
    if (rd32(sp0 - 0x210u) != 0u)
    {
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021da6a)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t17 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t17 + 8u), ecx, 1, eax);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    COW_AT(1021da70)
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021da78)
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t20 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t20 + 8u), t20, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
    }
    COW_AT(1021da7e)
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
    COW_AT(1021da86)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t23 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t23 + 8u), ecx, 1, eax);
        t24 = g->edx;
        edx = t24;
    }
    COW_AT(1021da8c)
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
    COW_AT(1021da94)
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
    COW_AT(1021da9a)
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return 0x80004005u;
L_1021daab: ;
    COW_AT(1021daab)
    if (eax == 0u)
    {
    COW_AT(1021dab4)
        eax = 0u;
    }
    else
    {
    COW_AT(1021daaf)
        eax = eax + 0xcu;
    }
    COW_AT(1021dab6)
    wr32(sp0 - 0x22cu, eax);
    wr32(sp0 - 0x230u, sp0 - 0x21cu);
    g->esp = sp0 - 0x228u;
    cow_fastcall(g, COW_IMG(0x1021dd20u), ecx, sp0 - 0x21cu, 2, sp0 - 0x21cu, eax);
    wr32(sp0 - 0x22cu, COW_IMG(0x10385e40u));
    t25 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x230u, t25);
    t26 = rd32(self + 0x10u);
    wr32(sp0 - 0x234u, t26);
    g->eax = t26;
    g->edx = t25;
    t27 = rd32(rd32(self + 0x10u));
    t28 = cow_thiscall(g, rd32(t27 + 0xcu), t27, 3, t26, t25, COW_IMG(0x10385e40u));
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x20cu, t28);
    if ((int32_t)t28 >= 0)
    {
        edx = t30;
        goto L_1021db23;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(1021dadb)
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021dae5)
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t31 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t31 + 8u), t31, 1, eax);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    COW_AT(1021daeb)
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021daf3)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t34 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t34 + 8u), ecx, 1, eax);
        t35 = g->ecx;
        t36 = g->edx;
        ecx = t35;
        edx = t36;
    }
    COW_AT(1021daf9)
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
    COW_AT(1021db01)
        wr32(sp0 - 0x22cu, eax);
        t37 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t37 + 8u), t37, 1, eax);
        t38 = g->ecx;
        ecx = t38;
    }
    COW_AT(1021db07)
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
    COW_AT(1021db0f)
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    }
    COW_AT(1021db15)
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021db23: ;
    COW_AT(1021db23)
    wr32(sp0 - 0x22cu, 0x104u);
    wr32(sp0 - 0x230u, sp0 - 0x208u);
    wr32(sp0 - 0x234u, 0xffffffffu);
    wr32(sp0 - 0x238u, arg1);
    wr32(sp0 - 0x23cu, 0u);
    wr32(sp0 - 0x240u, 0u);
    g->esp = sp0 - 0x228u;
    cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6, 0u, 0u, arg1, 0xffffffffu, sp0 - 0x208u, 0x104u);   /* kernel32.dll!MultiByteToWideChar */
    wr32(sp0 - 0x22cu, sp0 - 0x218u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e30u));
    wr32(sp0 - 0x234u, sp0 - 0x208u);
    t39 = rd32(self + 0x10u);
    wr32(sp0 - 0x238u, t39);
    g->eax = t39;
    g->edx = rd32(rd32(self + 0x10u));
    t40 = rd32(rd32(self + 0x10u));
    t41 = cow_thiscall(g, rd32(t40 + 0x38u), sp0 - 0x208u, 4, t39, sp0 - 0x208u, COW_IMG(0x10385e30u), sp0 - 0x218u);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x20cu, t41);
    if ((int32_t)t41 >= 0) goto L_1021dbaa;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(1021db5e)
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021db68)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t44 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t44 + 8u), ecx, 1, eax);
        t45 = g->ecx;
        t46 = g->edx;
        ecx = t45;
        edx = t46;
    }
    COW_AT(1021db6e)
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021db76)
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t47 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t47 + 8u), t47, 1, eax);
        t48 = g->ecx;
        t49 = g->edx;
        ecx = t48;
        edx = t49;
    }
    COW_AT(1021db7c)
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
    COW_AT(1021db84)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t50 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t50 + 8u), ecx, 1, eax);
        t51 = g->edx;
        edx = t51;
    }
    COW_AT(1021db8a)
    if (rd32(sp0 - 0x21cu) == 0u) goto L_1021dc64;
    eax = rd32(sp0 - 0x21cu);
    COW_AT(1021db96)
    wr32(sp0 - 0x22cu, eax);
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dbaa: ;
    COW_AT(1021dbaa)
    wr32(sp0 - 0x22cu, sp0 - 0x214u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e28u));
    t52 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x234u, t52);
    g->eax = t52;
    g->edx = rd32(rd32(sp0 - 0x21cu));
    t53 = rd32(rd32(sp0 - 0x21cu));
    g->esp = sp0 - 0x228u;
    t54 = cow_thiscall(g, rd32(t53 + 0x2cu), sp0 - 0x214u, 3, t52, COW_IMG(0x10385e28u), sp0 - 0x214u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x20cu, t54);
    if ((int32_t)t54 >= 0) goto L_1021dc0e;
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(1021dbc6)
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021dbd0)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t57 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t57 + 8u), ecx, 1, eax);
        t58 = g->ecx;
        t59 = g->edx;
        ecx = t58;
        edx = t59;
    }
    COW_AT(1021dbd6)
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021dbde)
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t60 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t60 + 8u), t60, 1, eax);
        t61 = g->ecx;
        t62 = g->edx;
        ecx = t61;
        edx = t62;
    }
    COW_AT(1021dbe4)
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
    COW_AT(1021dbec)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t63 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t63 + 8u), ecx, 1, eax);
        t64 = g->edx;
        edx = t64;
    }
    COW_AT(1021dbf2)
    if (rd32(sp0 - 0x21cu) == 0u) goto L_1021dc64;
    eax = rd32(sp0 - 0x21cu);
    COW_AT(1021dbfa)
    wr32(sp0 - 0x22cu, eax);
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dc0e: ;
    COW_AT(1021dc0e)
    wr32(sp0 - 0x22cu, sp0 - 0x210u);
    wr32(sp0 - 0x230u, COW_IMG(0x10385e18u));
    t65 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x234u, t65);
    g->eax = t65;
    g->edx = rd32(rd32(sp0 - 0x218u));
    t66 = rd32(rd32(sp0 - 0x218u));
    g->esp = sp0 - 0x228u;
    t67 = cow_thiscall(g, rd32(t66 + 0x2cu), sp0 - 0x210u, 3, t65, COW_IMG(0x10385e18u), sp0 - 0x210u);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x20cu, t67);
    if ((int32_t)t67 >= 0) goto L_1021dc72;
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(1021dc2a)
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021dc34)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t70 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t70 + 8u), ecx, 1, eax);
        t71 = g->ecx;
        t72 = g->edx;
        ecx = t71;
        edx = t72;
    }
    COW_AT(1021dc3a)
    if (rd32(sp0 - 0x218u) != 0u)
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021dc42)
        wr32(sp0 - 0x22cu, eax);
        g->edx = edx;
        t73 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t73 + 8u), t73, 1, eax);
        t74 = g->ecx;
        t75 = g->edx;
        ecx = t74;
        edx = t75;
    }
    COW_AT(1021dc48)
    if (rd32(sp0 - 0x214u) != 0u)
    {
        eax = rd32(sp0 - 0x214u);
    COW_AT(1021dc50)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t76 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t76 + 8u), ecx, 1, eax);
        t77 = g->edx;
        edx = t77;
    }
    COW_AT(1021dc56)
    if (rd32(sp0 - 0x21cu) != 0u)
    {
        eax = rd32(sp0 - 0x21cu);
    COW_AT(1021dc5e)
        wr32(sp0 - 0x22cu, eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
L_1021dc64: ;
    COW_AT(1021dc64)
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dc72: ;
    COW_AT(1021dc72)
    t78 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x22cu, t78);
    t79 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x230u, t79);
    t80 = rd32(self + 0x10u);
    wr32(sp0 - 0x234u, t80);
    g->eax = t80;
    g->edx = rd32(rd32(self + 0x10u));
    t81 = rd32(rd32(self + 0x10u));
    g->esp = sp0 - 0x228u;
    t82 = cow_thiscall(g, rd32(t81 + 0x2cu), t79, 3, t80, t79, t78);
    t83 = g->ecx;
    t84 = g->edx;
    wr32(sp0 - 0x20cu, t82);
    if ((int32_t)t82 >= 0)
    {
        eax = t82;
        goto L_1021dcca;
    }
    eax = t82;
    ecx = t83;
    edx = t84;
    COW_AT(1021dc8c)
    if (rd32(sp0 - 0x210u) == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        eax = rd32(sp0 - 0x210u);
    COW_AT(1021dc96)
        wr32(sp0 - 0x22cu, eax);
        g->edx = rd32(eax);
        t85 = rd32(eax);
        g->esp = sp0 - 0x228u;
        cow_thiscall(g, rd32(t85 + 8u), ecx, 1, eax);
        t86 = g->edx;
        edx = t86;
    }
    COW_AT(1021dc9c)
    if (rd32(sp0 - 0x218u) == 0u)
    {
        eax = rd32(sp0 - 0x218u);
    }
    else
    {
        eax = rd32(sp0 - 0x218u);
    COW_AT(1021dca4)
        wr32(sp0 - 0x22cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        t87 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t88 = g->edx;
        eax = t87;
        edx = t88;
    }
    COW_AT(1021dcaa)
    g->eax = eax;
    g->esp = sp0 - 0x228u;
    t89 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x214u, edx, 0);
    t90 = g->edx;
    cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x21cu, t90, 0);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return esi;
L_1021dcca: ;
    COW_AT(1021dcca)
    wr32(sp0 - 0x22cu, self + 0x14u);
    g->edx = self + 0x14u;
    g->esp = sp0 - 0x228u;
    cow_thiscall(g, COW_IMG(0x1021de30u), self + 0x10u, 1, self + 0x14u);
    t91 = g->edx;
    wr32(sp0 - 0x22cu, self + 0x18u);
    g->eax = self + 0x18u;
    g->edx = t91;
    t92 = cow_thiscall(g, COW_IMG(0x1021de50u), self + 0x10u, 1, self + 0x18u);
    t93 = g->edx;
    wr32(sp0 - 0x22cu, self + 0x1cu);
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x1021de70u), self + 0x10u, 1, self + 0x1cu);
    t95 = g->edx;
    t96 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x210u, t95, 0);
    t97 = g->edx;
    t98 = cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x218u, t97, 0);
    t99 = g->edx;
    t100 = cow_fastcall(g, COW_IMG(0x1021de20u), sp0 - 0x214u, t99, 0);
    t101 = g->edx;
    cow_fastcall(g, COW_IMG(0x1021de10u), sp0 - 0x21cu, t101, 0);
    g->ebx = rd32(sp0 - 0x220u);
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021d9b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021d9ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0u);
        wr32(sp0 - 0x210u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021d9f4u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->eax = 0u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021d9fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da02u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->eax = 0u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da10u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->eax = 0u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x21cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da1eu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021da35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x228u);
        in_esi = rd32(sp0 - 0x224u);
        in_ebx = rd32(sp0 - 0x220u);
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0u);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x20cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021da46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021da55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021da57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021da62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021da94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021da9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021daabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021daafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021dab4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021dab6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021dadbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dae5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021daebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021daf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021daf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021db01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021db07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021db0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021db15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021db23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021db5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1021db68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1021db6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021db76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021db7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021db84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021db8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021db96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1021dbaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x234u, sp0 - 0x208u);
        wr32(sp0 - 0x22cu, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1021dbc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x22cu, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x1021dbd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x22cu, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x1021dbd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dbdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dbe4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dbecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dbf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dbfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x22cu, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x1021dc2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x22cu, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x1021dc34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        wr32(sp0 - 0x22cu, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x1021dc3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        wr32(sp0 - 0x22cu, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x1021dc8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dc9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021dca4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021dcaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x228u;
        (void)sp0;
        return 1;
    }
    case 0x1021dccau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        g->esp = sp0 - 0x228u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d9b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021d9b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
