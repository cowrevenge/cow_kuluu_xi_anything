/* f_0x10208120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10208120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_38;
    uint32_t loc_40;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10208133u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10208133;
    case 0x10208141u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_10208141;
    case 0x10208422u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); goto E_10208422;
    case 0x10208466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10208466;
    case 0x10208480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10208480;
    case 0x10208482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10208482;
    case 0x1020849au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); goto E_1020849a;
    case 0x102084a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); goto E_102084a9;
    case 0x102084b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); goto E_102084b6;
    case 0x102084b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_40 = rd32(sp0 - 0x40u); loc_24 = rd32(sp0 - 0x24u); goto E_102084b9;
    default: break;
    }
#endif

    COW_AT(10208120)
    wr32(sp0 - 0x24u, in_esi);
    g->esp = sp0 - 0x24u;
    t1 = cow_fastcall(g, COW_IMG(0x100fcdc0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_24 = in_esi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10208133)
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t4 = cow_fastcall(g, COW_IMG(0x100fcdc0u), ecx, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (rd8(t4) == 0u)
        {
            eax = t4;
            edx = t6;
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_24 = in_esi;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
    COW_AT(10208141)
            wr32(sp0 - 0x28u, in_ebx);
            wr32(sp0 - 0x2cu, in_ebp);
            wr32(sp0 - 0x30u, in_edi);
            wr32(sp0 - 0x34u, 0x80808080u);
            g->eax = eax;
            t7 = rd16(self + 0x14u);
            g->esp = sp0 - 0x30u;
            t8 = cow_call_regs(g, COW_IMG(0x100fcdc0u), g->eax, ecx, edx, 1, 1, 0x80808080u);
            t9 = g->edx;
            wr32(sp0 - 0x38u, t8);
            t10 = (t8 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 7u);
            wr32(sp0 - 0x3cu, t10);
            t11 = ((in_edi & 0xffff0000u) | t7) + 4u;
            wr32(sp0 - 0x40u, t11);
            t12 = ((t9 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - (uint16_t)t7)) - 6u;
            wr32(sp0 - 0x44u, t12);
            g->eax = t10;
            g->ecx = t11;
            g->edx = t12;
            t13 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t12, t11, t10, t8, 0x80808080u);
            t14 = g->ecx;
            t15 = g->edx;
            g->esp = sp0 - 0x44u;
            t16 = cow_fastcall(g, COW_IMG(0x100fce20u), t14, t15, 0);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(sp0 - 0x48u, (uint16_t)t16);
            wr32(sp0 - 0x4cu, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x50u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = t18;
            g->esp = sp0 - 0x3cu;
            t19 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)t16, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t20 = g->edx;
            wr32(sp0 - 0x54u, 0x3f800000u);
            wr32(sp0 - 0x58u, 0x3f800000u);
            wr32(sp0 - 0x5cu, 1u);
            wr32(sp0 - 0x60u, 0x80808080u);
            wr32(sp0 - 0x64u, sp0 - 0x20u);
            t21 = (t20 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x14u);
            wr32(sp0 - 0x68u, t21);
            t22 = (t19 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x45u);
            wr32(sp0 - 0x6cu, t22);
            g->eax = t22;
            g->edx = t21;
            g->esp = sp0 - 0x50u;
            t23 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t22, t21, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t24 = g->ecx;
            t25 = g->edx;
            g->esp = sp0 - 0x6cu;
            t26 = cow_fastcall(g, COW_IMG(0x100fce40u), t24, t25, 0);
            t27 = g->edx;
            wr32(sp0 - 0x70u, (uint16_t)t26);
            wr32(sp0 - 0x74u, COW_IMG(0x103719d4u));
            wr32(sp0 - 0x78u, sp0 - 0x20u);
            g->eax = (uint16_t)t26;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x64u;
            t28 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103719d4u), (uint16_t)t26, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
            t29 = g->ecx;
            wr32(sp0 - 0x34u, 0x80808080u);
            wr32(sp0 - 0x38u, sp0 - 0x20u);
            t30 = (t28 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x14u);
            wr32(sp0 - 0x3cu, t30);
            t31 = (t29 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x47u);
            wr32(sp0 - 0x40u, t31);
            g->eax = t30;
            g->ecx = t31;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x1cu;
            t32 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t31, t30, sp0 - 0x20u, 0x80808080u, in_edi, in_ebp, in_ebx, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t33 = g->ecx;
            t34 = g->edx;
            g->esp = sp0 - 0x40u;
            t35 = cow_fastcall(g, COW_IMG(0x100fce60u), t33, t34, 0);
            t36 = g->ecx;
            wr32(sp0 - 0x44u, (uint16_t)t35);
            wr32(sp0 - 0x48u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            g->ecx = t36;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x38u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)t35, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x50u, 0x3f800000u);
            wr32(sp0 - 0x54u, 0x3f800000u);
            wr32(sp0 - 0x58u, 1u);
            wr32(sp0 - 0x5cu, 0x80808080u);
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            t39 = (t37 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x21u);
            wr32(sp0 - 0x64u, t39);
            t40 = (t38 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x45u);
            wr32(sp0 - 0x68u, t40);
            g->eax = sp0 - 0x20u;
            g->edx = t40;
            g->esp = sp0 - 0x4cu;
            t41 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t39, 7, t40, t39, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t42 = g->ecx;
            t43 = g->edx;
            g->esp = sp0 - 0x68u;
            t44 = cow_fastcall(g, COW_IMG(0x100fce80u), t42, t43, 0);
            t45 = g->ecx;
            t46 = g->edx;
            wr32(sp0 - 0x6cu, (uint16_t)t44);
            wr32(sp0 - 0x70u, COW_IMG(0x103719d4u));
            wr32(sp0 - 0x74u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = t46;
            g->esp = sp0 - 0x60u;
            t47 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103719d4u), (uint16_t)t44, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
            t48 = g->edx;
            wr32(sp0 - 0x34u, 0x80808080u);
            wr32(sp0 - 0x38u, sp0 - 0x20u);
            t49 = (t48 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x21u);
            wr32(sp0 - 0x3cu, t49);
            t50 = (t47 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x47u);
            wr32(sp0 - 0x40u, t50);
            g->eax = t50;
            g->ecx = sp0 - 0x20u;
            g->edx = t49;
            g->esp = sp0 - 0x1cu;
            t51 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t50, t49, sp0 - 0x20u, 0x80808080u, in_edi, in_ebp, in_ebx, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t52 = g->ecx;
            t53 = g->edx;
            wr32(sp0 - 0x44u, 0u);
            g->esp = sp0 - 0x38u;
            t54 = cow_call_regs(g, COW_IMG(0x100fcea0u), g->eax, t52, t53, 1, 3, 0u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
            t55 = g->edx;
            wr32(sp0 - 0x48u, (uint16_t)t54);
            wr32(sp0 - 0x4cu, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x50u, sp0 - 0x20u);
            g->eax = (uint16_t)t54;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x3cu;
            t56 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)t54, 0u, rd32(sp0 - 0x40u));
            t57 = g->ecx;
            wr32(sp0 - 0x54u, 0x3f800000u);
            wr32(sp0 - 0x58u, 0x3f800000u);
            wr32(sp0 - 0x5cu, 1u);
            wr32(sp0 - 0x60u, 0x80808080u);
            wr32(sp0 - 0x64u, sp0 - 0x20u);
            t58 = (t56 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x37u);
            wr32(sp0 - 0x68u, t58);
            t59 = (t57 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4du);
            wr32(sp0 - 0x6cu, t59);
            g->eax = t58;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x50u;
            t60 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t59, 7, t59, t58, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t61 = g->ecx;
            t62 = g->edx;
            wr32(sp0 - 0x70u, 0u);
            g->esp = sp0 - 0x64u;
            t63 = cow_call_regs(g, COW_IMG(0x100fced0u), g->eax, t61, t62, 1, 3, 0u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
            t64 = g->ecx;
            wr32(sp0 - 0x34u, (uint16_t)t63);
            wr32(sp0 - 0x38u, COW_IMG(0x103719d4u));
            wr32(sp0 - 0x3cu, sp0 - 0x20u);
            g->ecx = t64;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103719d4u), (uint16_t)t63, in_edi, in_ebp);
            t65 = g->ecx;
            t66 = g->edx;
            wr32(sp0 - 0x40u, 0x80808080u);
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            t67 = (t65 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x37u);
            wr32(sp0 - 0x48u, t67);
            t68 = (t66 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4fu);
            wr32(sp0 - 0x4cu, t68);
            g->eax = sp0 - 0x20u;
            g->ecx = t67;
            g->edx = t68;
            t69 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t68, t67, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x103719d4u), rd32(sp0 - 0x34u), in_edi, in_ebp);
            t70 = g->ecx;
            t71 = g->edx;
            wr32(sp0 - 0x50u, 1u);
            g->esp = sp0 - 0x44u;
            t72 = cow_call_regs(g, COW_IMG(0x100fcea0u), g->eax, t70, t71, 1, 3, 1u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
            t73 = g->ecx;
            t74 = g->edx;
            wr32(sp0 - 0x54u, (uint16_t)t72);
            wr32(sp0 - 0x58u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x5cu, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = t74;
            g->esp = sp0 - 0x48u;
            t75 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)t72, 1u, rd32(sp0 - 0x4cu));
            t76 = g->edx;
            wr32(sp0 - 0x60u, 0x3f800000u);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x68u, 1u);
            wr32(sp0 - 0x6cu, 0x80808080u);
            wr32(sp0 - 0x70u, sp0 - 0x20u);
            t77 = (t76 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
            wr32(sp0 - 0x74u, t77);
            t78 = (t75 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4du);
            wr32(sp0 - 0x78u, t78);
            g->eax = t78;
            g->edx = t77;
            g->esp = sp0 - 0x5cu;
            t79 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t78, t77, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t80 = g->ecx;
            t81 = g->edx;
            wr32(sp0 - 0x34u, 1u);
            g->esp = sp0 - 0x28u;
            t82 = cow_call_regs(g, COW_IMG(0x100fced0u), g->eax, t80, t81, 1, 3, 1u, in_edi, in_ebp);
            t83 = g->edx;
            wr32(sp0 - 0x38u, (uint16_t)t82);
            wr32(sp0 - 0x3cu, COW_IMG(0x103719d4u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->eax = (uint16_t)t82;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            t84 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103719d4u), (uint16_t)t82, 1u, in_edi);
            t85 = g->ecx;
            wr32(sp0 - 0x44u, 0x80808080u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            t86 = (t84 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
            wr32(sp0 - 0x4cu, t86);
            t87 = (t85 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4fu);
            wr32(sp0 - 0x50u, t87);
            g->eax = t86;
            g->ecx = t87;
            g->edx = sp0 - 0x20u;
            t88 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t87, t86, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x103719d4u), rd32(sp0 - 0x38u), 1u, in_edi);
            t89 = g->ecx;
            t90 = g->edx;
            wr32(sp0 - 0x54u, 2u);
            g->esp = sp0 - 0x48u;
            t91 = cow_call_regs(g, COW_IMG(0x100fcea0u), g->eax, t89, t90, 1, 3, 2u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t92 = g->ecx;
            wr32(sp0 - 0x58u, (uint16_t)t91);
            wr32(sp0 - 0x5cu, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x60u, sp0 - 0x20u);
            g->ecx = t92;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint16_t)t91, 2u, rd32(sp0 - 0x50u));
            t93 = g->ecx;
            t94 = g->edx;
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x68u, 0x3f800000u);
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 0x80808080u);
            wr32(sp0 - 0x74u, sp0 - 0x20u);
            t95 = (t93 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x51u);
            wr32(sp0 - 0x78u, t95);
            t96 = (t94 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4du);
            wr32(sp0 - 0x7cu, t96);
            g->eax = sp0 - 0x20u;
            g->edx = t96;
            g->esp = sp0 - 0x60u;
            t97 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t95, 7, t96, t95, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t98 = g->ecx;
            t99 = g->edx;
            wr32(sp0 - 0x34u, 2u);
            g->esp = sp0 - 0x28u;
            t100 = cow_call_regs(g, COW_IMG(0x100fced0u), g->eax, t98, t99, 1, 3, 2u, in_edi, in_ebp);
            t101 = g->ecx;
            t102 = g->edx;
            wr32(sp0 - 0x38u, (uint16_t)t100);
            wr32(sp0 - 0x3cu, COW_IMG(0x103719d4u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = t102;
            g->esp = sp0 - 0x2cu;
            t103 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103719d4u), (uint16_t)t100, 2u, in_edi);
            t104 = g->edx;
            wr32(sp0 - 0x44u, 0x80808080u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            t105 = (t104 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x51u);
            wr32(sp0 - 0x4cu, t105);
            t106 = (t103 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4fu);
            wr32(sp0 - 0x50u, t106);
            g->eax = t106;
            g->ecx = sp0 - 0x20u;
            g->edx = t105;
            t107 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t106, t105, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x103719d4u), rd32(sp0 - 0x38u), 2u, in_edi);
            t108 = g->ecx;
            t109 = g->edx;
            eax = t107;
            ecx = t108;
            edx = t109;
            ebx = in_ebx;
            ebp = 0u;
            edi = ((in_edi | t7) & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x60u);
L_10208422: ;
    COW_AT(10208422)
            wr32(sp0 - 0x34u, ebp);
            g->eax = eax;
            t110 = rd16(self + 0x14u);
            g->esp = sp0 - 0x28u;
            t111 = cow_call_regs(g, COW_IMG(0x100fcf00u), g->eax, ecx, edx, 1, 3, ebp, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t112 = g->edx;
            wr32(sp0 - 0x38u, (uint16_t)t111);
            wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->ebx = (ebx & 0xffff0000u) | (uint16_t)(t110 + 0x32u);
            g->eax = (uint16_t)t111;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x2cu;
            t113 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), (uint16_t)t111, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t114 = g->ecx;
            wr32(sp0 - 0x44u, 0x80808080u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            wr32(sp0 - 0x4cu, edi);
            t115 = (ebx & 0xffff0000u) | (uint16_t)(t110 + 0x32u);
            wr32(sp0 - 0x50u, t115);
            g->ecx = t114;
            g->edx = sp0 - 0x20u;
            t116 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t115, edi, sp0 - 0x20u, 0x80808080u, sp0 - 0x20u, COW_IMG(0x1036f9d0u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t117 = g->ecx;
            t118 = g->edx;
            wr32(sp0 - 0x54u, ebp);
            g->esp = sp0 - 0x48u;
            t119 = cow_call_regs(g, COW_IMG(0x100fcf30u), g->eax, t117, t118, 1, 3, ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t120 = g->ecx;
            t121 = g->edx;
            if ((int16_t)t119 <= 0)
            {
                eax = t119;
                ecx = t120;
                edx = t121;
                ebx = t116;
                sf = (int16_t)t119 < 0;
                goto L_10208480;
            }
            eax = t119;
            edx = t121;
            ebx = t116;
    COW_AT(10208466)
            wr32(sp0 - 0x34u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x38u, COW_IMG(0x103715c0u));
            wr32(sp0 - 0x3cu, sp0 - 0x20u);
            g->ebx = ebx;
            g->eax = (uint32_t)(int16_t)eax;
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x28u;
            t122 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t123 = g->ecx;
            wr32(sp0 - 0x40u, 0x80408040u);
            eax = t122;
            ecx = t123;
            loc_40 = 0x80408040u;
            loc_38 = COW_IMG(0x103715c0u);
L_1020849a: ;
    COW_AT(1020849a)
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            wr32(sp0 - 0x48u, edi);
            wr32(sp0 - 0x4cu, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x28u;
            t126 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx, edi, sp0 - 0x20u, loc_40, sp0 - 0x20u, loc_38, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t127 = g->ecx;
            t128 = g->edx;
            eax = t126;
            ecx = t127;
            edx = t128;
L_102084a9: ;
    COW_AT(102084a9)
            if ((int32_t)(ebp + 1u) < 7)
            {
                ebp = ebp + 1u;
                edi = edi + 0xdu;
                goto L_10208422;
            }
    COW_AT(102084b6)
            ebx = rd32(sp0 - 0x28u);
            ebp = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    COW_AT(102084b9)
    g->ebx = ebx;
    g->esi = loc_24;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10208480: ;
    COW_AT(10208480)
    if (!sf) goto L_102084a9;
    COW_AT(10208482)
    wr32(sp0 - 0x34u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x38u, COW_IMG(0x1036c00cu));
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->ebx = ebx;
    g->eax = (uint32_t)(int16_t)eax;
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    t124 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c00cu), (uint32_t)(int16_t)eax, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t125 = g->ecx;
    wr32(sp0 - 0x40u, 0x80804040u);
    eax = t124;
    ecx = t125;
    loc_40 = 0x80804040u;
    loc_38 = COW_IMG(0x1036c00cu);
    goto L_1020849a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10208120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10208133u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208141u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10208422u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10208466u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10208480u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x30u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10208482u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1020849au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102084a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102084b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x74u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102084b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_40;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_40 = rd32(sp0 - 0x40u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10208120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10208120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
