/* f_0x102185d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102185d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10218637u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_10218637;
    case 0x10218667u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_10218667;
    case 0x102186dbu: eax = g->eax; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102186db;
    case 0x102186e0u: eax = g->eax; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102186e0;
    case 0x102186e2u: eax = g->eax; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102186e2;
    case 0x10218724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10218724;
    case 0x1021872au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1021872a;
    case 0x102187a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102187a0;
    case 0x102187a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102187a5;
    case 0x102187a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102187a7;
    case 0x10218814u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10218814;
    case 0x10218828u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10218828;
    case 0x1021882fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1021882f;
    case 0x10218831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10218831;
    case 0x10218886u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10218886;
    case 0x10218888u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_10218888;
    case 0x102188fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102188fa;
    case 0x1021895cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_1021895c;
    case 0x10218967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10218967;
    case 0x1021897fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1021897f;
    case 0x10218a33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10218a33;
    case 0x10218a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10218a3e;
    case 0x10218a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10218a8a;
    case 0x10218a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10218a90;
    case 0x10218a95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10218a95;
    case 0x10218aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10218aa0;
    default: break;
    }
#endif

    COW_AT(102185d0)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 0x79u);
    wr32(sp0 - 0x60u, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x79u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x64u, 0x7au);
    wr32(sp0 - 0x68u, 9u);
    wr32(sp0 - 0x34u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x60u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x6cu, 0x7cu);
    wr32(sp0 - 0x70u, 9u);
    wr32(sp0 - 0x30u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x68u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x74u, 0x7du);
    wr32(sp0 - 0x78u, 9u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x70u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7du);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x7cu, 0x7eu);
    wr32(sp0 - 0x80u, 9u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x78u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x84u, 0x7bu);
    wr32(sp0 - 0x88u, 9u);
    g->edx = t15;
    g->esp = sp0 - 0x80u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7bu);
    t17 = g->edx;
    g->esp = sp0 - 0x58u;
    t18 = cow_thiscall(g, COW_IMG(0x1010a4d0u), arg1, 0);
    t19 = g->ecx;
    wr32(sp0 - 0x48u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = t19;
        edi = t18;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edi = t18;
    COW_AT(10218637)
        t20 = rd32(eax + 4u);
        wr32(sp0 - 0x3cu, t20);
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        t21 = rd32(eax + 8u);
        wr32(sp0 - 0x38u, t21);
        g->eax = sp0 - 0x3cu;
        g->esp = sp0 - 0x58u;
        t22 = cow_fastcall(g, COW_IMG(0x10218560u), self, t21, 1, sp0 - 0x3cu);
        t23 = g->ecx;
        t24 = rd16(self + 0x4au);
        wr16(self + 0x4au, (uint16_t)(((t22 << 8u ^ t24) & 0xf00u) ^ t24));
        eax = t22;
        ecx = (t23 & 0xffff0000u) | t24;
    }
    COW_AT(10218667)
    t25 = rd16(self + 0x50u);
    t26 = rd16(self + 0x36u);
    wr16(self + 0x26u, (uint16_t)t26);
    t27 = rd16(self + 0x32u);
    wr16(self + 0x64u, (uint16_t)t27);
    wr16(self + 0x66u, (uint16_t)((uint16_t)t25 + (uint16_t)t26));
    wr16(self + 0x60u, (uint16_t)((uint16_t)t27 + rd16(self + 0x52u)));
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + (uint16_t)((uint16_t)t25 + (uint16_t)t26)));
    t28 = rd16(self + 0x5au);
    t29 = rd16(self + 0x34u);
    t30 = rd16(self + 0x32u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t28 - t29) - t30));
    wr16(self + 0x72u, 0u);
    wr16(self + 0x74u, 0u);
    t31 = rd16(self + 0x60u);
    wr16(self + 0x6eu, (uint16_t)t31);
    t32 = rd16(self + 0x62u);
    wr16(self + 0x70u, (uint16_t)t32);
    wr16(self + 0x76u, rd16(self + 0x68u));
    wr16(self + 0x78u, 0u);
    if (rd32(edi + 0x14u) == 0u)
    {
    COW_AT(102186e0)
        eax = 0u;
    }
    else
    {
        eax = rd32(edi + 0x14u);
    COW_AT(102186db)
        eax = rd32(eax + 4u);
    }
    COW_AT(102186e2)
    wr32(sp0 - 0x5cu, self + 0x52u);
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 0x64u, self);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t33 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x6eu, 3, self, eax, self + 0x52u);
    wr16(self + 0x258u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 2u);
    t34 = rd32(arg1 + 0x8f0u);
    wr32(sp0 - 0x68u, t34);
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x1010f350u), sp0 - 0x1cu, 4, t34, 2u, 1u, 0u);
    t36 = g->edx;
    wr32(sp0 - 0x44u, 1u);
    g->edx = t36;
    t37 = cow_call_regs(g, COW_IMG(0x1010f510u), t35, sp0 - 0x1cu, g->edx, 1, 0);
    t38 = g->edx;
    if ((uint8_t)t37 != 0u)
    {
        edx = t38;
        edi = 1u;
    }
    else
    {
        edx = t38;
    COW_AT(10218724)
        edi = 1u;
        loc_44 = 1u;
L_1021872a: ;
    COW_AT(1021872a)
        wr32(sp0 - 0x40u, (uint16_t)edi);
        t39 = rd16(self + 0x40u);
        t40 = rd16(self + (uint16_t)edi * 0xeu + 0x66u);
        t41 = rd16(self + (uint16_t)edi * 0xeu + 0x6au);
        t42 = rd16(self + 0x3cu);
        wr16(self + (uint16_t)edi * 0xeu + 0x72u, (uint16_t)t42);
        wr16(self + (uint16_t)edi * 0xeu + 0x74u, (uint16_t)(t39 + (uint16_t)(t40 + t41)));
        t43 = rd16(self + 0x60u);
        wr16(self + (uint16_t)edi * 0xeu + 0x6eu, (uint16_t)((uint16_t)t42 + t43));
        wr16(self + (uint16_t)edi * 0xeu + 0x70u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t39 + (uint16_t)(t40 + t41))));
        t44 = rd16(self + 0x68u);
        t45 = rd16(self + 0x3eu);
        t46 = rd16(self + 0x3cu);
        wr16(self + (uint16_t)edi * 0xeu + 0x78u, 0u);
        wr16(self + (uint16_t)edi * 0xeu + 0x76u, (uint16_t)((uint16_t)(t44 - t45) - t46));
        g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t44 - t45) - t46);
        g->esp = sp0 - 0x58u;
        t47 = cow_call_regs(g, COW_IMG(0x101124b0u), (uint16_t)(t39 + (uint16_t)(t40 + t41)), sp0 - 0x18u, g->edx, 1, 0);
        t48 = g->edx;
        g->edx = t48;
        t49 = cow_thiscall(g, COW_IMG(0x10110ac0u), t47, 0);
        t50 = g->edx;
        if (rd32(t49 + 4u) == 0u)
        {
            edx = t50;
            ebx = self + (uint16_t)edi * 0xeu;
            edi = self + (uint16_t)edi * 0xeu + 0x6eu;
    COW_AT(102187a5)
            eax = 0u;
        }
        else
        {
            eax = rd32(t49 + 4u);
            edx = t50;
            ebx = self + (uint16_t)edi * 0xeu;
            edi = self + (uint16_t)edi * 0xeu + 0x6eu;
    COW_AT(102187a0)
            eax = rd32(eax + 4u);
        }
    COW_AT(102187a7)
        wr32(sp0 - 0x5cu, self + 0x52u);
        wr32(sp0 - 0x60u, eax);
        wr32(sp0 - 0x64u, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t51 = cow_thiscall(g, COW_IMG(0x1021ba80u), edi, 3, self, eax, self + 0x52u);
        t52 = g->edx;
        t53 = rd16(ebx + 0x74u);
        t54 = rd32(sp0 - 0x44u);
        wr16(self + 0x240u, 0u);
        wr16(self + 0x242u, (uint16_t)t53);
        t55 = rd16(self + 0x60u);
        wr16(self + 0x23cu, (uint16_t)t55);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, 0u);
        t56 = rd16(self + 0x62u);
        wr16(self + 0x23eu, (uint16_t)((uint16_t)t53 + t56));
        wr32(sp0 - 0x64u, t54);
        wr16(self + 0x246u, 0u);
        wr32(sp0 - 0x68u, self + 0x23cu);
        wr32(sp0 - 0x6cu, edi);
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        t57 = rd32(sp0 - 0x48u);
        wr32(sp0 - 0x74u, t57);
        wr16(self + 0x244u, 0x64u);
        g->eax = sp0 - 0x3cu;
        t58 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t57, sp0 - 0x3cu, edi, self + 0x23cu, t54, 0u, 0u);
        wr32(sp0 - 0x48u, t58);
        if ((int16_t)rd16(edi + 2u) < (int32_t)(rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u)))
        {
            ecx = (uint32_t)(int16_t)rd16(edi + 2u);
            edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
            ebx = t54;
            loc_48 = t58;
            goto L_1021882f;
        }
        eax = (t58 & 0xffff0000u) | rd16(edi + 2u);
        ecx = (uint32_t)(int16_t)rd16(edi + 2u);
        edx = rd16(self + 0x36u) + (uint32_t)(int16_t)rd16(self + 0x54u);
        ebx = t54;
        loc_48 = t58;
    COW_AT(10218814)
        if ((int16_t)((uint16_t)eax + rd16(edi + 0xau)) >= (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu)))
        {
            ecx = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)eax + rd16(edi + 0xau));
            edx = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
            goto L_1021882f;
        }
        ecx = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)eax + rd16(edi + 0xau));
        edx = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
    COW_AT(10218828)
        eax = 1u;
L_10218831: ;
    COW_AT(10218831)
        t59 = (edx & 0xffffff00u) | (uint8_t)eax != 0u;
        wr32(sp0 - 0x5cu, t59);
        t60 = (ecx & 0xffffff00u) | rd32(sp0 - 0x40u) == (uint32_t)(int16_t)rd16(self + 0x14u);
        wr32(sp0 - 0x60u, t60);
        wr32(sp0 - 0x64u, self + 0x23cu);
        g->eax = (uint32_t)(int16_t)rd16(self + 0x14u);
        t61 = rd16(self + 0x14u);
        g->esp = sp0 - 0x58u;
        t62 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, t60, t59);
        t63 = rd16(self + 0x258u);
        wr16(self + t63 * 2u + 0x25au, (uint16_t)ebx);
        wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
        g->ebx = ebx;
        g->edx = t63;
        t64 = cow_call_regs(g, COW_IMG(0x1010f540u), t62, sp0 - 0x1cu, g->edx, 1, 0);
        t65 = g->edx;
        wr32(sp0 - 0x44u, ebx + 1u);
        g->edx = t65;
        t66 = cow_call_regs(g, COW_IMG(0x1010f510u), t64, sp0 - 0x1cu, g->edx, 1, 0);
        t67 = g->edx;
        if ((uint8_t)t66 == 0u)
        {
            edx = t67;
            edi = ebx + 1u;
            loc_44 = rd32(sp0 - 0x44u);
            goto L_1021872a;
        }
        edx = t67;
        edi = ebx + 1u;
    COW_AT(10218886)
    }
    COW_AT(10218888)
    t68 = rd16(self + 0x42u);
    t69 = rd16(self + (uint16_t)edi * 0xeu + 0x66u);
    t70 = rd16(self + (uint16_t)edi * 0xeu + 0x6au);
    t71 = rd16(self + 0x3cu);
    wr16(self + 0x232u, (uint16_t)t71);
    wr16(self + 0x234u, (uint16_t)(t68 + (uint16_t)(t69 + t70)));
    t72 = rd16(self + 0x60u);
    wr16(self + 0x22eu, (uint16_t)((uint16_t)t71 + t72));
    wr16(self + 0x230u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t68 + (uint16_t)(t69 + t70))));
    t73 = rd16(self + 0x68u);
    t74 = rd16(self + 0x3eu);
    wr16(self + 0x238u, 0u);
    t75 = rd16(self + 0x3cu);
    wr16(self + 0x236u, (uint16_t)((uint16_t)(t73 - t74) - t75));
    g->eax = ((uint16_t)edi * 8u - (uint16_t)edi & 0xffff0000u) | (uint16_t)(t68 + (uint16_t)(t69 + t70));
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t73 - t74) - t75);
    g->esp = sp0 - 0x58u;
    t76 = cow_thiscall(g, COW_IMG(0x1010a4f0u), arg1, 0);
    t77 = g->ecx;
    t78 = g->edx;
    if ((uint16_t)t76 == 0u)
    {
        eax = t76;
        ecx = t77;
        edx = t78;
        loc_48 = rd32(sp0 - 0x48u);
    }
    else
    {
        edx = t78;
    COW_AT(102188fa)
        wr32(sp0 - 0x5cu, self + 0x52u);
        t79 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x60u, t79);
        wr32(sp0 - 0x64u, self);
        g->eax = t79;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t80 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x22eu, 3, self, t79, self + 0x52u);
        t81 = g->ecx;
        t82 = g->edx;
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, 0u);
        t83 = rd16(self + 0x234u);
        wr16(self + 0x240u, 0u);
        wr16(self + 0x242u, (uint16_t)t83);
        wr32(sp0 - 0x64u, 0u);
        wr16(self + 0x23cu, rd16(self + 0x60u));
        wr32(sp0 - 0x68u, self + 0x23cu);
        wr32(sp0 - 0x6cu, self + 0x22eu);
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        t84 = rd32(sp0 - 0x48u);
        wr32(sp0 - 0x74u, t84);
        t85 = rd16(self + 0x62u);
        wr16(self + 0x23eu, (uint16_t)((uint16_t)t83 + t85));
        wr16(self + 0x244u, 0x64u);
        wr16(self + 0x246u, 0u);
        g->eax = sp0 - 0x3cu;
        g->edx = (t82 & 0xffff0000u) | (uint16_t)((uint16_t)t83 + t85);
        t86 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t84, sp0 - 0x3cu, self + 0x22eu, self + 0x23cu, 0u, 0u, 0u);
        t87 = g->ecx;
        t88 = g->edx;
        wr32(sp0 - 0x48u, t86);
        if (rd16(self + 0x14u) != 0u)
        {
            eax = t86;
            ecx = t87;
            loc_48 = t86;
        }
        else
        {
            eax = t86;
            edx = t88;
            loc_48 = t86;
    COW_AT(1021895c)
            wr32(sp0 - 0x5cu, 0u);
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, self + 0x23cu);
            g->eax = eax;
            g->esp = sp0 - 0x58u;
            t89 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
            t90 = g->ecx;
            eax = t89;
            ecx = t90;
            loc_48 = rd32(sp0 - 0x48u);
        }
    COW_AT(10218967)
        t91 = rd16(self + 0x258u);
        wr16(self + t91 * 2u + 0x25au, 0u);
        wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
        edx = t91;
    }
    COW_AT(1021897f)
    t92 = rd16(self + 0x238u);
    t93 = rd16(self + 0x234u);
    t94 = rd16(self + 0x42u);
    t95 = rd16(self + 0x3cu);
    wr16(self + 0x24eu, (uint16_t)t95);
    wr16(self + 0x250u, (uint16_t)(t92 + (uint16_t)(t93 + t94)));
    t96 = rd16(self + 0x60u);
    wr16(self + 0x24au, (uint16_t)((uint16_t)t95 + t96));
    wr16(self + 0x24cu, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t92 + (uint16_t)(t93 + t94))));
    wr32(sp0 - 0x5cu, self + 0x52u);
    t97 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x60u, t97);
    wr32(sp0 - 0x64u, self);
    t98 = rd16(self + 0x68u);
    t99 = rd16(self + 0x3eu);
    t100 = rd16(self + 0x3cu);
    wr16(self + 0x254u, 0u);
    wr16(self + 0x252u, (uint16_t)((uint16_t)(t98 - t99) - t100));
    g->eax = t97;
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t98 - t99) - t100);
    g->esp = sp0 - 0x58u;
    t101 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x24au, 3, self, t97, self + 0x52u);
    t102 = g->ecx;
    t103 = g->edx;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    t104 = rd16(self + 0x250u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t104);
    wr32(sp0 - 0x64u, 0xffffffffu);
    wr16(self + 0x23cu, rd16(self + 0x60u));
    wr32(sp0 - 0x68u, self + 0x23cu);
    wr32(sp0 - 0x6cu, self + 0x24au);
    wr32(sp0 - 0x70u, sp0 - 0x3cu);
    t105 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x74u, t105);
    t106 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t104 + t106));
    wr16(self + 0x244u, 0x64u);
    wr16(self + 0x246u, 0u);
    g->eax = sp0 - 0x3cu;
    g->edx = (t103 & 0xffff0000u) | (uint16_t)((uint16_t)t104 + t106);
    t107 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t105, sp0 - 0x3cu, self + 0x24au, self + 0x23cu, 0xffffffffu, 0u, 0u);
    t108 = g->edx;
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        ebx = t107;
    }
    else
    {
        eax = t107;
        edx = t108;
        ebx = t107;
    COW_AT(10218a33)
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, 1u);
        wr32(sp0 - 0x64u, self + 0x23cu);
        g->esp = sp0 - 0x58u;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
    }
    COW_AT(10218a3e)
    wr16(self + rd16(self + 0x258u) * 2u + 0x25au, 0xffffu);
    t109 = rd16(self + 0x38u);
    t110 = rd16(self + 0x36u);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t111 = t109 + t110 + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x5cu, t111);
    g->eax = t111;
    g->edx = (uint32_t)(int16_t)rd16(self + 0x250u);
    t112 = rd16(self + 0x250u);
    g->esp = sp0 - 0x58u;
    t113 = cow_thiscall(g, COW_IMG(0x10218020u), self, 1, t111);
    t114 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = t113;
        edx = t114;
    }
    else
    {
        eax = t113;
        edx = t114;
    COW_AT(10218a8a)
        if ((rd8(self + 0x4bu) & 0xfu) != 0u)
        {
    COW_AT(10218a90)
            if ((uint16_t)ebx == 0u)
            {
    COW_AT(10218a95)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x58u;
                t115 = cow_stdcall(g, COW_IMG(0x10218550u), 0);
                t116 = g->edx;
                wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
                eax = t115;
                edx = t116;
            }
        }
    }
    COW_AT(10218aa0)
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return;
L_1021882f: ;
    COW_AT(1021882f)
    eax = 0u;
    goto L_10218831;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102185d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10218637u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, in_ebx);
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218667u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x4cu, in_ebx);
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102186dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102186e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102186e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ecx = self + 0x6eu;
        g->edx = self + 0x52u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10218724u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = 1u;
        wr32(sp0 - 0x44u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1021872au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102187a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102187a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x102187a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10218814u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218828u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1021882fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218831u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218886u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218888u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102188fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebx = self + 0x22eu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021895cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218967u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1021897fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10218a33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218a3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218a8au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218a90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebp = 0u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218a95u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10218aa0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x70u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102185d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102185d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
