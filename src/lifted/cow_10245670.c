/* f_0x10245670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10245670(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10245697u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10245697;
    case 0x1024569cu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1024569c;
    case 0x102456c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102456c4;
    case 0x102456cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102456cb;
    case 0x10245701u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245701;
    case 0x1024570eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024570e;
    case 0x10245717u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245717;
    case 0x1024571du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024571d;
    case 0x1024572fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024572f;
    case 0x10245746u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245746;
    case 0x1024575bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024575b;
    case 0x10245770u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245770;
    case 0x10245787u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245787;
    case 0x10245790u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245790;
    case 0x1024579bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024579b;
    case 0x102457afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457af;
    case 0x102457c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457c0;
    case 0x102457c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457c6;
    case 0x102457ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457ce;
    case 0x102457e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457e5;
    case 0x102457edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102457ed;
    case 0x10245802u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245802;
    case 0x10245817u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245817;
    case 0x10245827u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245827;
    case 0x1024582du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024582d;
    case 0x1024583fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024583f;
    case 0x10245856u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245856;
    case 0x1024585fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024585f;
    case 0x10245867u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245867;
    case 0x10245881u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245881;
    case 0x1024588au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024588a;
    case 0x10245892u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245892;
    case 0x102458a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458a7;
    case 0x102458bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458bc;
    case 0x102458ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458ce;
    case 0x102458d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458d7;
    case 0x102458f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458f8;
    case 0x102458feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102458fe;
    case 0x10245910u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245910;
    case 0x10245927u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245927;
    case 0x10245932u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245932;
    case 0x1024593bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024593b;
    case 0x10245944u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245944;
    case 0x1024594au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024594a;
    case 0x10245960u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245960;
    case 0x1024597cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024597c;
    case 0x10245981u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245981;
    case 0x1024599bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_1024599b;
    case 0x102459a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102459a3;
    case 0x102459abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102459ab;
    case 0x102459c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102459c0;
    case 0x102459d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102459d5;
    case 0x102459e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102459e8;
    case 0x10245a00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a00;
    case 0x10245a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a05;
    case 0x10245a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a19;
    case 0x10245a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a1f;
    case 0x10245a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a42;
    case 0x10245a48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a48;
    case 0x10245a5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a5a;
    case 0x10245a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a71;
    case 0x10245a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10245a7c;
    default: break;
    }
#endif

    COW_AT(10245670)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 0x10u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101c46b0u), rd32(COW_IMG(0x10662dccu)), 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
    COW_AT(10245697)
        eax = rd32(COW_IMG(0x103888ccu));
    }
    COW_AT(1024569c)
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t5 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x1cu;
    t6 = cow_stdcall(g, COW_IMG(0x100dba80u), 1, eax);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(COW_IMG(0x1047d694u), 0u);
    wr8(COW_IMG(0x106626d0u), 1u);
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x1012ad30u), 0);
    t10 = g->edx;
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        edx = t10;
    }
    else
    {
        eax = t9;
        ecx = rd32(COW_IMG(0x1046393cu));
        edx = t10;
    COW_AT(102456c4)
        wr32(sp0 - 0x20u, 0xffffffffu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x102463e0u), 1, 0xffffffffu);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    COW_AT(102456cb)
    wr32(sp0 - 0x20u, 0u);
    t13 = rd32(COW_IMG(0x10456a28u));
    wr32(t13, 0x40u);
    g->eax = t13;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x10014ef0u), 1, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t17 = cow_stdcall(g, COW_IMG(0x10037340u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x24u, 0xafu);
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_call_regs(g, COW_IMG(0x10193850u), t17, g->ecx, g->edx, 1, 1, 0xafu);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x28u, t20);
    g->ebx = 0u;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x24u;
    t23 = cow_cdecl(g, COW_IMG(0x10245570u), 1, t20);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x1cu;
    t26 = cow_stdcall(g, COW_IMG(0x1018c4f0u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    if (rd32(COW_IMG(0x106690a8u)) != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_1024570e;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(10245701)
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_stdcall(g, COW_IMG(0x1023e610u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)t29 < 0)
    {
        eax = t29;
        edx = t31;
        goto L_10245a1f;
    }
    ecx = t30;
    edx = t31;
L_1024570e: ;
    COW_AT(1024570e)
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669094u));
        goto L_10245746;
    }
    eax = rd32(COW_IMG(0x10669094u));
    COW_AT(10245717)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_10245770;
    }
    eax = rd32(eax);
    COW_AT(1024571d)
    wr32(sp0 - 0x20u, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
    t32 = g->ecx;
    t33 = g->edx;
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669094u));
        ecx = t32;
        edx = t33;
    }
    else
    {
        eax = rd32(COW_IMG(0x10669094u));
        edx = t33;
    COW_AT(1024572f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t34 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t35 = g->edx;
        g->edx = t35;
        t36 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10669094u), 0);
        t37 = g->ecx;
        t38 = g->edx;
        wr32(COW_IMG(0x10669094u), 0u);
        eax = t36;
        ecx = t37;
        edx = t38;
    }
L_10245746: ;
    COW_AT(10245746)
    wr32(sp0 - 0x20u, 0x1eu);
    wr32(sp0 - 0x24u, 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10245b20u), 2, 0xcu, 0x1eu);
    t39 = g->edx;
    if (rd32(COW_IMG(0x10669094u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669094u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10669094u));
        edx = t39;
    COW_AT(1024575b)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t40 = cow_cdecl(g, COW_IMG(0x10245480u), 2, sp0 - 0xcu, 0u);
        t41 = rd32(t40);
        wr32(COW_IMG(0x10669094u), t41);
        eax = t41;
    }
L_10245770: ;
    COW_AT(10245770)
    t42 = rd32(COW_IMG(0x10669078u));
    wr32(t42 + 0x14u, 2u);
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        edx = t42;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = t42;
    COW_AT(10245787)
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 0x1cu;
        t44 = cow_thiscall(g, rd32(t43 + 0x20u), ecx, 0);
        t45 = g->edx;
        if ((uint8_t)t44 == 0u)
        {
            eax = t44;
            edx = t45;
        }
        else
        {
            eax = t44;
    COW_AT(10245790)
            g->eax = eax;
            g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
            t46 = rd32(rd32(COW_IMG(0x10662d40u)));
            g->esp = sp0 - 0x1cu;
            t47 = cow_thiscall(g, rd32(t46 + 0x5cu), rd32(COW_IMG(0x10662d40u)), 0);
            t48 = g->edx;
            eax = t47;
            edx = t48;
        }
    }
    COW_AT(1024579b)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, COW_IMG(0x103883f0u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t49 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103883f0u), 1u, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    esi = 0u;
L_102457af: ;
    COW_AT(102457af)
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t52 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t53 = g->ecx;
    t54 = g->edx;
    if ((int32_t)t52 < 0)
    {
        eax = t52;
        edx = t54;
        goto L_10245a1f;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102457c0)
    if ((int32_t)(esi + 1u) < 10)
    {
        esi = esi + 1u;
        goto L_102457af;
    }
    COW_AT(102457c6)
    if (rd32(COW_IMG(0x106690a8u)) == 0u) goto L_102457e5;
    COW_AT(102457ce)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t55 = cow_cdecl(g, COW_IMG(0x1023b550u), 5, 1u, 1u, 0u, 0u, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    if ((int32_t)t55 < 0)
    {
        eax = t55;
        edx = t57;
        goto L_10245a1f;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
L_102457e5: ;
    COW_AT(102457e5)
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
    COW_AT(102457ed)
        wr32(sp0 - 0x20u, 0x1eu);
        wr32(sp0 - 0x24u, 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10245b20u), 2, 0xcu, 0x1eu);
        t58 = g->ecx;
        t59 = g->edx;
        if (rd32(COW_IMG(0x10669094u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10669094u));
            ecx = t58;
            edx = t59;
        }
        else
        {
            ecx = t58;
            edx = t59;
    COW_AT(10245802)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t60 = cow_cdecl(g, COW_IMG(0x10245480u), 2, sp0 - 0xcu, 0u);
            t61 = g->ecx;
            t62 = g->edx;
            t63 = rd32(t60);
            wr32(COW_IMG(0x10669094u), t63);
            eax = t63;
            ecx = t61;
            edx = t62;
        }
    }
    COW_AT(10245817)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t64 = cow_stdcall(g, COW_IMG(0x102406d0u), 0);
    t65 = g->ecx;
    t66 = g->edx;
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669094u));
        ecx = t65;
        edx = t66;
        esi = t64;
    }
    else
    {
        eax = rd32(COW_IMG(0x10669094u));
        ecx = t65;
        edx = t66;
        esi = t64;
    COW_AT(10245827)
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
    COW_AT(1024582d)
            wr32(sp0 - 0x20u, eax);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
            t67 = g->ecx;
            t68 = g->edx;
            if (rd32(COW_IMG(0x10669094u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10669094u));
                ecx = t67;
                edx = t68;
            }
            else
            {
                eax = rd32(COW_IMG(0x10669094u));
                edx = t68;
    COW_AT(1024583f)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t69 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t70 = g->edx;
                g->edx = t70;
                t71 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10669094u), 0);
                t72 = g->ecx;
                t73 = g->edx;
                wr32(COW_IMG(0x10669094u), 0u);
                eax = t71;
                ecx = t72;
                edx = t73;
            }
        }
    }
    COW_AT(10245856)
    if (esi == 0xfffffffeu) goto L_10245a1f;
    COW_AT(1024585f)
    if (esi != 0u) goto L_1024597c;
    COW_AT(10245867)
    wr32(sp0 - 0x20u, 0x1eu);
    wr32(sp0 - 0x24u, 0xfu);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t74 = cow_cdecl(g, COW_IMG(0x10245a90u), 2, 0xfu, 0x1eu);
    t75 = g->ecx;
    t76 = g->edx;
    g->ecx = t75;
    g->edx = t76;
    t77 = cow_stdcall(g, COW_IMG(0x102435f0u), 0);
    t78 = g->ecx;
    t79 = g->edx;
    if (t77 == 0xfffffffeu)
    {
        eax = t77;
        edx = t79;
        goto L_10245a1f;
    }
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(10245881)
    if (eax != 1u) goto L_10245932;
    COW_AT(1024588a)
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
    COW_AT(10245892)
        wr32(sp0 - 0x20u, 0x1eu);
        wr32(sp0 - 0x24u, 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10245b20u), 2, 0xcu, 0x1eu);
        t80 = g->ecx;
        t81 = g->edx;
        if (rd32(COW_IMG(0x10669094u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10669094u));
            ecx = t80;
            edx = t81;
        }
        else
        {
            eax = rd32(COW_IMG(0x10669094u));
            edx = t81;
    COW_AT(102458a7)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, sp0 - 8u);
            g->eax = eax;
            g->ecx = sp0 - 8u;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t82 = cow_cdecl(g, COW_IMG(0x10245480u), 2, sp0 - 8u, 0u);
            t83 = g->ecx;
            t84 = g->edx;
            t85 = rd32(t82);
            wr32(COW_IMG(0x10669094u), t85);
            eax = t85;
            ecx = t83;
            edx = t84;
        }
    }
    COW_AT(102458bc)
    wr32(sp0 - 0x20u, 0u);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t86 = cow_cdecl(g, COW_IMG(0x1023fbf0u), 1, 0u);
    t87 = g->ecx;
    t88 = g->edx;
    if (t86 == 0xffffffffu)
    {
        eax = t86;
        ecx = t87;
        edx = t88;
        goto L_102457e5;
    }
    eax = t86;
    ecx = t87;
    edx = t88;
L_102458ce: ;
    COW_AT(102458ce)
    if (eax == 0xfffffffeu) goto L_10245a1f;
L_102458d7: ;
    COW_AT(102458d7)
    wr32(sp0 - 0x20u, 0x80808080u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t117 = cow_cdecl(g, COW_IMG(0x10014ef0u), 1, 0x80808080u);
    t118 = g->ecx;
    t119 = g->edx;
    g->ebx = 0u;
    g->edi = 0x80808080u;
    g->edx = t119;
    cow_call_regs(g, COW_IMG(0x1018c4d0u), t117, t118, g->edx, 1, 0);
    t120 = g->ecx;
    t121 = g->edx;
    t122 = rd32(COW_IMG(0x10669094u));
    wr32(COW_IMG(0x106690a4u), 1u);
    if (t122 == 0u)
    {
        eax = t122;
        ecx = t120;
        edx = t121;
    }
    else
    {
        eax = t122;
        ecx = t120;
        edx = t121;
    COW_AT(102458f8)
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
    COW_AT(102458fe)
            wr32(sp0 - 0x20u, eax);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
            t123 = g->ecx;
            t124 = g->edx;
            if (rd32(COW_IMG(0x10669094u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10669094u));
                ecx = t123;
                edx = t124;
            }
            else
            {
                eax = rd32(COW_IMG(0x10669094u));
                edx = t124;
    COW_AT(10245910)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t125 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t126 = g->edx;
                g->edx = t126;
                t127 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10669094u), 0);
                t128 = g->ecx;
                t129 = g->edx;
                wr32(COW_IMG(0x10669094u), 0u);
                eax = t127;
                ecx = t128;
                edx = t129;
            }
        }
    }
    COW_AT(10245927)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10245c10u), eax, ecx, edx);
L_10245932: ;
    COW_AT(10245932)
    if (eax != 2u) goto L_102457e5;
    COW_AT(1024593b)
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669094u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10669094u));
    COW_AT(10245944)
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
    COW_AT(1024594a)
            wr32(sp0 - 0x20u, eax);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
            t89 = g->ecx;
            t90 = g->edx;
            if (rd32(COW_IMG(0x10669094u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10669094u));
                ecx = t89;
                edx = t90;
            }
            else
            {
                eax = rd32(COW_IMG(0x10669094u));
                edx = t90;
    COW_AT(10245960)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t91 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t92 = g->edx;
                g->edx = t92;
                t93 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10669094u), 0);
                t94 = g->ecx;
                t95 = g->edx;
                wr32(COW_IMG(0x10669094u), 0u);
                eax = t93;
                ecx = t94;
                edx = t95;
            }
        }
    }
    goto L_102458d7;
L_1024597c: ;
    COW_AT(1024597c)
    if (esi != 1u) goto L_10245a00;
    COW_AT(10245981)
    wr32(sp0 - 0x20u, 0x1eu);
    wr32(sp0 - 0x24u, 6u);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t96 = cow_cdecl(g, COW_IMG(0x10245a90u), 2, 6u, 0x1eu);
    t97 = g->ecx;
    t98 = g->edx;
    g->ecx = t97;
    g->edx = t98;
    t99 = cow_stdcall(g, COW_IMG(0x10239720u), 0);
    t100 = g->ecx;
    t101 = g->edx;
    if (t99 == 0xfffffffeu)
    {
        eax = t99;
        edx = t101;
        goto L_10245a1f;
    }
    eax = t99;
    ecx = t100;
    edx = t101;
    COW_AT(1024599b)
    if (eax != esi) goto L_102457e5;
    COW_AT(102459a3)
    if (rd32(COW_IMG(0x10669094u)) == 0u)
    {
    COW_AT(102459ab)
        wr32(sp0 - 0x20u, 0x1eu);
        wr32(sp0 - 0x24u, 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10245b20u), 2, 0xcu, 0x1eu);
        t102 = g->ecx;
        t103 = g->edx;
        if (rd32(COW_IMG(0x10669094u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10669094u));
            ecx = t102;
            edx = t103;
        }
        else
        {
            eax = rd32(COW_IMG(0x10669094u));
            ecx = t102;
    COW_AT(102459c0)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, sp0 - 4u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 4u;
            g->esp = sp0 - 0x1cu;
            t104 = cow_cdecl(g, COW_IMG(0x10245480u), 2, sp0 - 4u, 0u);
            t105 = g->ecx;
            t106 = g->edx;
            t107 = rd32(t104);
            wr32(COW_IMG(0x10669094u), t107);
            eax = t107;
            ecx = t105;
            edx = t106;
        }
    }
    COW_AT(102459d5)
    wr32(sp0 - 0x20u, 1u);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t108 = cow_cdecl(g, COW_IMG(0x1023fbf0u), 1, 1u);
    t109 = g->ecx;
    t110 = g->edx;
    if (t108 != 0xffffffffu)
    {
        eax = t108;
        ecx = t109;
        edx = t110;
        goto L_102458ce;
    }
    eax = t108;
    ecx = t109;
    edx = t110;
    COW_AT(102459e8)
    wr32(sp0 - 0x20u, 0xafu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t111 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xafu);
    t112 = g->ecx;
    t113 = g->edx;
    wr32(sp0 - 0x24u, t111);
    g->ebx = 0u;
    g->ecx = t112;
    g->edx = t113;
    g->esp = sp0 - 0x20u;
    t114 = cow_cdecl(g, COW_IMG(0x10245570u), 1, t111);
    t115 = g->ecx;
    t116 = g->edx;
    eax = t114;
    ecx = t115;
    edx = t116;
    goto L_102457e5;
L_10245a00: ;
    COW_AT(10245a00)
    if (esi != 2u)
    {
    COW_AT(10245a7c)
        zf = esi == 3u;
    }
    else
    {
    COW_AT(10245a05)
        wr32(sp0 - 0x20u, 0x1eu);
        wr32(sp0 - 0x24u, 0x11u);
        g->ebx = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t130 = cow_cdecl(g, COW_IMG(0x10245a90u), 2, 0x11u, 0x1eu);
        t131 = g->ecx;
        t132 = g->edx;
        g->ecx = t131;
        g->edx = t132;
        t133 = cow_call_regs(g, COW_IMG(0x1023b230u), t130, g->ecx, g->edx, 1, 0);
        t134 = g->ecx;
        t135 = g->edx;
        eax = t133;
        ecx = t134;
        edx = t135;
        zf = t133 + 2u == 0u;
    }
    COW_AT(10245a19)
    if (!zf) goto L_102457e5;
L_10245a1f: ;
    COW_AT(10245a1f)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t136 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x1cu;
    t137 = cow_stdcall(g, COW_IMG(0x100db6a0u), 0);
    t138 = g->ecx;
    t139 = g->edx;
    g->ebx = 0u;
    g->edi = 0x80808080u;
    g->edx = t139;
    cow_call_regs(g, COW_IMG(0x1018c4d0u), t137, t138, g->edx, 1, 0);
    t140 = g->ecx;
    t141 = g->edx;
    t142 = rd32(COW_IMG(0x10669094u));
    wr32(COW_IMG(0x106690a4u), 0xffffffffu);
    if (t142 == 0u)
    {
        eax = t142;
        ecx = t140;
        edx = t141;
    }
    else
    {
        eax = t142;
        ecx = t140;
        edx = t141;
    COW_AT(10245a42)
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
    COW_AT(10245a48)
            wr32(sp0 - 0x20u, eax);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x100446a0u), 1, eax);
            t143 = g->ecx;
            t144 = g->edx;
            if (rd32(COW_IMG(0x10669094u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10669094u));
                ecx = t143;
                edx = t144;
            }
            else
            {
                eax = rd32(COW_IMG(0x10669094u));
                edx = t144;
    COW_AT(10245a5a)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t145 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t146 = g->edx;
                g->edx = t146;
                t147 = cow_thiscall(g, COW_IMG(0x10071050u), COW_IMG(0x10669094u), 0);
                t148 = g->ecx;
                t149 = g->edx;
                wr32(COW_IMG(0x10669094u), 0u);
                eax = t147;
                ecx = t148;
                edx = t149;
            }
        }
    }
    COW_AT(10245a71)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10245c10u), eax, ecx, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10245670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10245697u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024569cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102456c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102456cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245701u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024570eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245717u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024571du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024572fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245746u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024575bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245770u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245787u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245790u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024579bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102457edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245802u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245817u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245827u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024582du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024583fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245856u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024585fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245867u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245881u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024588au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245892u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102458a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102458bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102458ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102458d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102458f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102458feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10245910u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10245927u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10245932u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024593bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245944u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024594au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245960u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024597cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245981u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1024599bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102459a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102459abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102459c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102459d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x102459e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245a00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245a05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245a19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245a1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10245a42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10245a48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10245a5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10245a71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10245a7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10245670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10245670(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
