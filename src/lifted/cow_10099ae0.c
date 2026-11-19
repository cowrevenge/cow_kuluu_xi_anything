/* f_0x10099ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_10099ae0(Guest* g)
{
    double d165;
    double d51;
    double d52;
    double d61;
    double d62;
    double d64;
    double d65;
    double d69;
    double d73;
    double d76;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_34;
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
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t63;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t75;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10099afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x34u); goto E_10099afb;
    case 0x10099b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x34u); goto E_10099b00;
    case 0x10099b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x34u); goto E_10099b11;
    case 0x10099b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099b22;
    case 0x10099b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099b2b;
    case 0x10099b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099b2d;
    case 0x10099b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); goto E_10099b3a;
    case 0x10099b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099b55;
    case 0x10099b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099b5a;
    case 0x10099b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099b96;
    case 0x10099ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099ba1;
    case 0x10099bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099bdc;
    case 0x10099c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099c29;
    case 0x10099c33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099c33;
    case 0x10099c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099c3a;
    case 0x10099c43u: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099c43;
    case 0x10099ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099ca4;
    case 0x10099cbau: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099cba;
    case 0x10099ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099cea;
    case 0x10099cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099cf0;
    case 0x10099db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099db9;
    case 0x10099dc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099dc6;
    case 0x10099e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e14;
    case 0x10099e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e1a;
    case 0x10099e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e20;
    case 0x10099e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e55;
    case 0x10099e5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e5f;
    case 0x10099e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099e92;
    case 0x10099e9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099e9b;
    case 0x10099eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099eb8;
    case 0x10099ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_10099ebf;
    case 0x10099efcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099efc;
    case 0x10099f03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10099f03;
    case 0x1009a0b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0b8;
    case 0x1009a0beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0be;
    case 0x1009a0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0d4;
    case 0x1009a0dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0da;
    case 0x1009a0edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0ed;
    case 0x1009a0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a0f7;
    case 0x1009a18cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a18c;
    case 0x1009a1cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a1cb;
    case 0x1009a1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009a1e1;
    case 0x1009a4efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1009a4ef;
    case 0x1009a4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1009a4fa;
    case 0x1009a8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1009a8db;
    case 0x1009a8e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1009a8e9;
    case 0x1009a8ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1009a8eb;
    case 0x1009aaa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009aaa6;
    case 0x1009aab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009aab7;
    case 0x1009aac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1009aac1;
    default: break;
    }
#endif

    COW_AT(10099ae0)
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd16(rd32(sp0 + 0xcu) + 8u);
    wr32(sp0 - 0x38u, t1);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x34u;
    t3 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t1);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        esi = t2;
        goto L_10099b00;
    }
    eax = t3;
    COW_AT(10099afb)
    g->esi = in_esi;
    return eax;
L_10099b00: ;
    COW_AT(10099b00)
    if (rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) != 0u)
    {
        loc_34 = in_esi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(10099b11)
        wr32(sp0 - 0x38u, 0x2acu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t5 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
        t6 = g->edx;
        if (t5 == 0u)
        {
    COW_AT(10099b2b)
            eax = 0u;
        }
        else
        {
            eax = t5;
            edx = t6;
    COW_AT(10099b22)
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t7 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
            eax = t7;
        }
    COW_AT(10099b2d)
        wr32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u, eax);
        loc_34 = rd32(sp0 - 0x34u);
    }
    COW_AT(10099b3a)
    t8 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x74u);
    wr32(sp0 - 0x28u, t8);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        loc_28 = t8;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = t8;
        loc_28 = t8;
    COW_AT(10099b55)
        if (eax != rd32(esi + 4u))
        {
    COW_AT(10099b5a)
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
            t9 = g->edx;
            g->eax = rd16(esi + 8u);
            t10 = rd16(esi + 8u);
            t11 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + t10 * 4u), t9, 0);
            t12 = g->edx;
            wr32(sp0 - 0x38u, 0u);
            t13 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            t14 = cow_thiscall(g, COW_IMG(0x1008a350u), t13, 1, 0u);
            t15 = g->ecx;
            t16 = rd32(esi + 4u);
            wr32(sp0 - 0x38u, t16);
            t17 = (t14 & 0xffff0000u) | rd16(esi + 8u);
            wr32(sp0 - 0x3cu, t17);
            g->eax = t17;
            g->ecx = t15;
            g->esp = sp0 - 0x20u;
            t18 = cow_cdecl(g, COW_IMG(0x10099a40u), 7, t17, t16, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t19 = g->ecx;
            eax = t18;
            ecx = t19;
            loc_34 = rd32(sp0 - 0x34u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    COW_AT(10099b96)
    if ((rd8(esi + 0xau) & 0x1fu) == 0x1fu)
    {
        ecx = (ecx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
    COW_AT(10099ba1)
        t20 = rd32(esi + 4u);
        wr32(sp0 - 0x38u, t20);
        t21 = (eax & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x3cu, t21);
        g->eax = t21;
        g->esp = sp0 - 0x20u;
        t22 = cow_cdecl(g, COW_IMG(0x10099a40u), 7, t21, t20, loc_34, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28, rd32(sp0 - 0x24u));
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u, rd8(esi + 0xau));
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1feu, 0u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    COW_AT(10099bdc)
    t23 = rd16(esi + 8u);
    t24 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t25 = rd32(esi + 4u);
    wr32(t24 + 0x74u, t23);
    wr32(t24 + 0x78u, t25);
    t26 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u & 0xefu) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t26);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 5u & 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(10099c29)
        if (rd16(eax + 0x210u) == 0u)
        {
    COW_AT(10099c33)
            wr8(eax + 0xeeu, 0u);
        }
    }
    COW_AT(10099c3a)
    if ((rd8(esi + 0xau) & 0x20u) == 0u) goto L_10099cba;
    COW_AT(10099c43)
    wr16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1fau, 0u);
    t27 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u | 0x10u) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t27);
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u, 0u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 8u & 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        goto L_1009aac1;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(10099ca4)
    t28 = (rd32(eax + 0x120u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(eax + 0x120u) >> 8u | 0x40u) << 8u;
    wr32(eax + 0x120u, t28);
    g->esi = loc_34;
    return (eax & 0xffffff00u) | 1u;
L_10099cba: ;
    COW_AT(10099cba)
    t29 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr16(t29 + 0x1fau, rd16(esi + 0x3cu));
    if (rd16(esi + 0x30u) == rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x166u))
    {
        edx = rd16(esi + 8u);
    }
    else
    {
        eax = (t29 & 0xffff0000u) | rd16(esi + 0x30u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = rd16(esi + 8u);
    COW_AT(10099cea)
        wr32(sp0 - 0x38u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x1008cce0u), eax, ecx, g->edx, 0, 1, eax);
        t30 = g->edx;
        edx = t30;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    COW_AT(10099cf0)
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x294u, rd8(esi + 0x32u));
    t31 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x33u) << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x2000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t31);
    t32 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x33u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x4000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t32);
    t33 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd8(esi + 0x33u) * 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0x80u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t33);
    t34 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) & 0xfffffff7u;
    t35 = rd16(esi + 8u);
    wr32(rd32(COW_IMG(0x10480af0u) + t35 * 4u) + 0x128u, t34);
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u) != 0u)
    {
        eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = t35;
        goto L_10099e1a;
    }
    eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    edx = t35;
    COW_AT(10099db9)
    if ((rd8(esi + 0xau) & 0x1fu) == 0x1fu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0xau);
        edx = (edx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
        goto L_10099e14;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 0xau);
    edx = (edx & 0xffffff00u) | (rd8(esi + 0xau) & 0x1fu);
    COW_AT(10099dc6)
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
    t36 = g->edx;
    g->eax = rd16(esi + 8u);
    t37 = rd16(esi + 8u);
    t38 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + t37 * 4u), t36, 0);
    t39 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    cow_thiscall(g, COW_IMG(0x1008a350u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, 0u);
    t40 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 8u | 0x80u) << 8u;
    t41 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t42 = rd32(sp0 - 0x34u);
    wr32(t41 + 0x12cu, t40);
    g->esi = t42;
    return t41 & 0xffffff00u;
L_10099e14: ;
    COW_AT(10099e14)
    wr8(ecx + 0x145u, (uint8_t)eax);
L_10099e1a: ;
    COW_AT(10099e1a)
    if ((rd8(esi + 0xau) & 8u) != 0u)
    {
    COW_AT(10099e20)
        t43 = rd16(esi) >> 9u;
        wr32(sp0 - 0x38u, t43);
        wr32(sp0 - 0x3cu, 0x5cu);
        wr32(sp0 - 0x40u, esi + 0x5au);
        wr32(sp0 - 0x44u, 0x10u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x10u, 0x10u, esi + 0x5au, 0x5cu, t43, loc_34);
        t44 = g->edx;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = t44;
        t45 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        g->esp = sp0 - 0x34u;
        t46 = cow_thiscall(g, COW_IMG(0x10093430u), t45, 1, sp0 - 0x10u);
        t47 = g->ecx;
        t48 = g->edx;
        eax = t46;
        ecx = t47;
        edx = t48;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    COW_AT(10099e55)
    if (rd8(esi + 0xau) & 1u)
    {
    COW_AT(10099e5f)
        t49 = rd32(esi + 0x14u);
        wr32(sp0 - 0x18u, t49);
        t50 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        d51 = (double)rdf32(esi + 0xcu);
        d52 = (double)rdf32(esi + 0x10u);
        wr32(t50 + 0x4cu, t49);
        wrf32(t50 + 0x44u, (float)d51);
        wrf32(t50 + 0x48u, (float)d52);
        if (rd8(COW_IMG(0x10489900u)) == 0u) goto L_10099ebf;
        eax = (t50 + 0x44u & 0xffffff00u) | rd8(COW_IMG(0x10489900u));
        ecx = t49;
        edx = t49;
    COW_AT(10099e92)
        g->esp = sp0 - 0x34u;
        t53 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
        if ((uint8_t)t53 == 0u)
        {
            loc_34 = rd32(sp0 - 0x34u);
            loc_28 = rd32(sp0 - 0x28u);
            goto L_10099ebf;
        }
    COW_AT(10099e9b)
        t54 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
        if (t54 >> 7u & 1u)
        {
            loc_34 = rd32(sp0 - 0x34u);
            loc_28 = rd32(sp0 - 0x28u);
            goto L_10099ebf;
        }
        eax = t54;
    COW_AT(10099eb8)
        if (!(eax >> 8u & 1u)) goto L_10099f03;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
L_10099ebf: ;
    COW_AT(10099ebf)
        t55 = rd32(esi + 0x14u);
        t56 = rd32(esi + 0x10u);
        t57 = rd32(esi + 0xcu);
        wr32(sp0 + 0xcu, t55);
        wr32(sp0 - 0x30u, t56);
        wr32(sp0 - 0x2cu, t57);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, 0x42480000u);
        t58 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x40u, t58);
        wr32(sp0 - 0x44u, t56);
        wr32(sp0 - 0x48u, t57);
        g->eax = t58;
        g->esp = sp0 - 0x34u;
        t59 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t57, t56, t58, 0x42480000u, sp0 - 0x28u);
        if ((uint8_t)t59 == 1u)
        {
    COW_AT(10099efc)
            t60 = rd32(sp0 - 0x28u);
            wr32(esi + 0x10u, t60);
        }
L_10099f03: ;
    COW_AT(10099f03)
        d61 = (double)(float)(double)rdf32(esi + 0x14u);
        wrf32(sp0 - 0x18u, (float)d61);
        d62 = (double)rdf32(esi + 0xcu);
        t63 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        d64 = (double)rdf32(esi + 0x14u);
        d65 = (double)rdf32(esi + 0x10u);
        wrf32(t63 + 0x24u, (float)d62);
        wrf32(t63 + 0x28u, (float)d65);
        wrf32(t63 + 0x2cu, (float)d64);
        t66 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t67 = rd16(esi + 8u);
        wrf32(t66 + 4u, (float)d62);
        wrf32(t66 + 8u, (float)d65);
        wr32(t66 + 0xcu, cow_f2bits(d61));
        t68 = (t67 & 0xffffff00u) | rd8(esi + 0xbu);
        wr32(sp0 - 0x38u, t68);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x100dd990u), 1, t68);
        d69 = cow_take_float(g);
        t70 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr32(t70 + 0x34u, 0u);
        wrf32(t70 + 0x38u, (float)d69);
        wr32(t70 + 0x3cu, 0u);
        t71 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr32(t71 + 0x14u, 0u);
        wrf32(t71 + 0x18u, (float)d69);
        wr32(t71 + 0x1cu, 0u);
        t72 = rd8(esi + 0x1cu);
        wr32(sp0 + 0xcu, t72);
        d73 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x15cu, (float)d73);
        t74 = rd8(esi + 0x1du);
        t75 = rd16(esi + 8u);
        wr32(sp0 + 0xcu, t74);
        d76 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + t75 * 4u) + 0x9cu, (float)d76);
        t77 = rd16(esi + 0x18u) & 0x1fffu;
        wr32(sp0 - 0x38u, t77);
        cow_thiscall(g, COW_IMG(0x1008cd20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, t77);
        t78 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xdu << 0x13u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x80000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t78);
        t79 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xeu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x40000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t79);
        t80 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x18u) >> 0xfu << 0x14u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x100000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t80);
        t81 = rd16(esi + 8u);
        t82 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t83 = rd32(esi + 0x18u);
        wr16(t82 + 0x1f8u, t83 >> 0x11u);
        eax = t81;
        ecx = t82;
        edx = t83 >> 0x11u;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    COW_AT(1009a0b8)
    if ((rd8(esi + 0xau) & 2u) != 0u)
    {
    COW_AT(1009a0be)
        t84 = rd32(esi + 0x2cu);
        t85 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t86 = rd16(esi + 8u);
        wr32(t85 + 0x188u, t84);
        eax = t85;
        ecx = t84;
        edx = t86;
    }
    COW_AT(1009a0d4)
    if ((rd8(esi + 0xau) & 0x10u) != 0u)
    {
    COW_AT(1009a0da)
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, esi + 0x48u);
        t87 = (eax & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x40u, t87);
        g->edx = esi + 0x48u;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, COW_IMG(0x1009afe0u), ecx, 7, t87, esi + 0x48u, 0u, loc_34, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28);
        t88 = g->edx;
        edx = t88;
        loc_34 = rd32(sp0 - 0x34u);
    }
    COW_AT(1009a0ed)
    if ((rd8(esi + 0xau) & 4u) != 0u)
    {
    COW_AT(1009a0f7)
        t89 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ (((uint32_t)rd8(esi + 0x20u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t89);
        t90 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 1u << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x4000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t90);
        t91 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 2u << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x40000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t91);
        if (rd16(esi + 0x3eu) == 0u)
        {
    COW_AT(1009a1cb)
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffffffbu;
        }
        else
        {
    COW_AT(1009a18c)
            t92 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd8(esi + 0x2au) * 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0xeu);
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t92);
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) | 4u;
        }
    COW_AT(1009a1e1)
        wr32(eax + 0x130u, ecx);
        t93 = rd32(esi + 0x20u) >> 5u & 7u;
        wr32(sp0 - 0x38u, t93);
        g->edx = rd16(esi + 8u);
        t94 = rd16(esi + 8u);
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x10097a20u), rd32(COW_IMG(0x10480af0u) + t94 * 4u), 1, t93);
        t95 = g->edx;
        wr32(sp0 - 0x38u, esi + 0x34u);
        cow_thiscall(g, COW_IMG(0x1009ab40u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, esi + 0x34u);
        t96 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 8u << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t96);
        t97 = rd16(esi + 8u);
        wr8(sp0 + 0xcu, rd32(esi + 0x20u) >> 9u & 3u);
        t98 = (rd32(rd32(COW_IMG(0x10480af0u) + t97 * 4u) + 0x120u) & 0x3fffffffu) ^ (uint32_t)(uint8_t)rd32(sp0 + 0xcu) << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + t97 * 4u) + 0x120u, t98);
        t99 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xbu << 0x14u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x100000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t99);
        t100 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x24u) >> 0x1fu << 0x15u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x200000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t100);
        t101 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xcu << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x800000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t101);
        t102 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xdu << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x1000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t102);
        t103 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0xeu << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t103);
        t104 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0xfu) << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x2000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t104);
        t105 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ (((uint32_t)rd8(esi + 0x22u) << 0x1au ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x4000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t105);
        t106 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0x11u << 0x1bu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x8000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t106);
        t107 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x20u) >> 0x12u << 0x1cu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x10000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t107);
        t108 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u) ^ ((rd32(esi + 0x28u) >> 1u << 3u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u)) & 8u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u, t108);
        t109 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x13u) << 4u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t109);
        t110 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x14u) << 5u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x20u);
        t111 = rd32(esi + 0x20u);
        t112 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t110);
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xecu, rd8(esi + 0x1eu));
        if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 1u & 1u))
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009a4ef)
            t113 = rd8(esi + 0x1fu);
            wr32(eax + 0x16cu, t113);
        }
    COW_AT(1009a4fa)
        t114 = rd8(esi + 0x24u) + rd8(esi + 0x25u) * 0x100u + rd8(esi + 0x26u) * 0x10000u;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1d4u, t114);
        t115 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1bu << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x4000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t115);
        t116 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)rd8(esi + 0x23u) << 0xbu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x3800u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t116);
        t117 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1cu << 0x10u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t117);
        t118 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1du << 6u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x40u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t118);
        t119 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x15u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x100u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t119);
        t120 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x20u) >> 0x1eu << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 4u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t120);
        t121 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x27u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x100u);
        t122 = rd8(esi + 0x27u);
        t123 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t121);
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1ffu, rd8(esi + 0x29u));
        t124 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) >> 8u & 0xfbu) << 8u;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t124);
        t125 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1fu << 9u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x200u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t125);
        t126 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x19u << 0xau ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t126);
        t127 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1bu << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t127);
        t128 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1cu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000u);
        t129 = rd32(esi + 0x24u);
        t130 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t128);
        t131 = rd32(esi + 0x24u) >> 0x1du & 1u;
        wr32(sp0 - 0x38u, t131);
        t132 = rd16(esi + 8u);
        wr32(sp0 - 0x3cu, t132);
        g->eax = t132;
        g->esp = sp0 - 0x34u;
        t133 = cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t131, 1, 2, t132, t131);
        t134 = rd32(esi + 0x24u) >> 0x1eu & 1u;
        wr32(sp0 - 0x40u, t134);
        t135 = rd16(esi + 8u);
        wr32(sp0 - 0x44u, t135);
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, t135, 1, 2, t135, t134);
        t136 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 2u << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x800000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t136);
        t137 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 3u << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x1000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t137);
        t138 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 4u << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t138);
        t139 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 5u << 0x1bu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x8000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t139);
        t140 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 6u) << 0x1eu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t140);
        t141 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0x7fffffffu) ^ (uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x19u & 1u) << 0x1fu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t141);
        t142 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)rd8(esi + 0x28u) << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t142);
        t143 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffffffeu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t143);
        if ((rd32(esi + 0x20u) & 8u) == 0u)
        {
    COW_AT(1009a8e9)
            eax = 0u;
        }
        else
        {
    COW_AT(1009a8db)
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
        }
    COW_AT(1009a8eb)
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x18cu, eax);
        t144 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x2bu) << 0xcu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x1000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t144);
        t145 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x17u << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t145);
        t146 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffbffffu;
        t147 = rd16(esi + 8u);
        wr32(rd32(COW_IMG(0x10480af0u) + t147 * 4u) + 0x130u, t146);
        t148 = (t146 & 0xffff0000u) | rd16(esi + 0x3eu);
        wr32(sp0 - 0x38u, t148);
        g->edx = t147;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x1009acb0u), t148, rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), g->edx, 0, 1, t148);
        t149 = g->edx;
        t150 = (t149 & 0xffffff00u) | rd8(esi + 0x40u);
        wr32(sp0 - 0x38u, t150);
        wr32(sp0 - 0x3cu, 0u);
        g->eax = rd16(esi + 8u);
        t151 = rd16(esi + 8u);
        t152 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t153 = cow_fastcall(g, COW_IMG(0x1009ace0u), t152, t150, 2, 0u, t150);
        t154 = g->ecx;
        t155 = (t154 & 0xffffff00u) | rd8(esi + 0x41u);
        wr32(sp0 - 0x38u, t155);
        wr32(sp0 - 0x3cu, 1u);
        cow_fastcall(g, COW_IMG(0x1009ace0u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), rd16(esi + 8u), 2, 1u, t155);
        t156 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ (((uint32_t)rd8(esi + 0x33u) << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0x30u);
        t157 = rd8(esi + 0x33u);
        t158 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t156);
        t159 = (rd8(esi + 0x33u) >> 2u & 0xcu) ^ (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) & 0xfffffff3u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t159);
        t160 = rd8(esi + 0x42u);
        t161 = t160 >> 6u & 1u;
        wr32(sp0 - 0x38u, t161);
        t162 = t160 >> 4u & 3u;
        wr32(sp0 - 0x3cu, t162);
        wr32(sp0 - 0x40u, t160 & 0xfu);
        cow_fastcall(g, COW_IMG(0x1009ad20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), t162, 3, t160 & 0xfu, t162, t161);
        t163 = rd8(esi + 0x43u);
        t164 = rd16(esi + 8u);
        wr32(sp0 + 0xcu, t163);
        d165 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + t164 * 4u) + 0x208u, (float)d165);
        t166 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ (((uint32_t)rd8(esi + 0x44u) << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0xf000000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t166);
        t167 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        wr8(t167 + 0x1dbu, (uint8_t)(rd32(esi + 0x44u) >> 4u));
        edx = t167;
        loc_34 = rd32(sp0 - 0x34u);
    }
    COW_AT(1009aaa6)
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) != rd16(esi + 8u))
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        ecx = rd16(esi + 8u);
    COW_AT(1009aab7)
        wr32(sp0 - 0x38u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t168 = cow_cdecl(g, COW_IMG(0x1008a0e0u), 1, 2u);
        eax = t168;
        loc_34 = rd32(sp0 - 0x34u);
    }
L_1009aac1: ;
    COW_AT(1009aac1)
    g->esi = loc_34;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10099ae0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10099afbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099b96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099ba1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099bdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099c29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099c33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099c3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099c43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10099ca4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099cbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10099ceau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099cf0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099db9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099dc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099e9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099eb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099ebfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10099efcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10099f03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a0f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a18cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a1cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a1e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a4efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a4fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a8dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a8e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009a8ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009aaa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009aab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1009aac1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10099ae0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10099ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
