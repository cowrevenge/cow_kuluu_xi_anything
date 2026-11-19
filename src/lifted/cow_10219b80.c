/* f_0x10219b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10219b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10219bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10219bdb;
    case 0x10219c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10219c0b;
    case 0x10219d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10219d31;
    case 0x10219d3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10219d3d;
    case 0x10219dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10219dbe;
    case 0x10219e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10219e1a;
    case 0x10219e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10219e26;
    case 0x10219e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10219e40;
    case 0x10219ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10219ef5;
    case 0x10219f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10219f00;
    case 0x10219f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10219f4c;
    case 0x10219f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10219f52;
    case 0x10219f57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10219f57;
    case 0x10219f62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10219f62;
    default: break;
    }
#endif

    COW_AT(10219b80)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 0x79u);
    wr32(sp0 - 0x38u, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x79u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x3cu, 0x7au);
    wr32(sp0 - 0x40u, 9u);
    wr32(sp0 - 0x14u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x38u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x44u, 0x7cu);
    wr32(sp0 - 0x48u, 9u);
    wr32(sp0 - 0x10u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x40u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x4cu, 0x7du);
    wr32(sp0 - 0x50u, 9u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x48u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7du);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x54u, 0x7eu);
    wr32(sp0 - 0x58u, 9u);
    wr32(sp0 - 8u, t10);
    g->edx = t12;
    g->esp = sp0 - 0x50u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->edx;
    g->edx = t14;
    t15 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1010a4d0u), t15, 0);
    t16 = g->ecx;
    t17 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = t16;
        edx = t17;
        ebx = t7;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = t7;
    COW_AT(10219bdb)
        t18 = rd32(eax + 4u);
        wr32(sp0 - 0x1cu, t18);
        wr32(sp0 - 0x34u, sp0 - 0x1cu);
        t19 = rd32(eax + 8u);
        wr32(sp0 - 0x18u, t19);
        g->eax = sp0 - 0x1cu;
        g->esp = sp0 - 0x30u;
        t20 = cow_fastcall(g, COW_IMG(0x10218560u), self, t19, 1, sp0 - 0x1cu);
        t21 = g->edx;
        t22 = rd16(self + 0x4au);
        wr16(self + 0x4au, (uint16_t)(((t20 << 8u ^ t22) & 0xf00u) ^ t22));
        eax = t20;
        ecx = ((t20 << 8u ^ t22) & 0xf00u) ^ ((in_ebp & 0xffff0000u) | t22);
        edx = t21;
    }
    COW_AT(10219c0b)
    t23 = rd16(self + 0x50u);
    t24 = rd16(self + 0x48u);
    wr16(self + 0x26u, (uint16_t)t24);
    t25 = rd16(self + 0x44u);
    wr16(self + 0x64u, (uint16_t)t25);
    wr16(self + 0x66u, (uint16_t)((uint16_t)t23 + (uint16_t)t24));
    wr32(sp0 - 0x34u, self + 0x52u);
    wr32(sp0 - 0x38u, ebx);
    t26 = rd16(self + 0x52u);
    wr16(self + 0x60u, (uint16_t)((uint16_t)t25 + t26));
    wr32(sp0 - 0x3cu, self);
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + (uint16_t)((uint16_t)t23 + (uint16_t)t24)));
    t27 = rd16(self + 0x5au);
    t28 = rd16(self + 0x46u);
    t29 = rd16(self + 0x44u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t27 - t28) - t29));
    wr16(self + 0x72u, 0u);
    wr16(self + 0x74u, 0u);
    t30 = rd16(self + 0x60u);
    wr16(self + 0x6eu, (uint16_t)t30);
    t31 = rd16(self + 0x62u);
    wr16(self + 0x70u, (uint16_t)t31);
    t32 = rd16(self + 0x68u);
    wr16(self + 0x76u, (uint16_t)t32);
    wr16(self + 0x78u, 0u);
    g->eax = ((eax | t23 | t30) & 0xffff0000u) | t32;
    g->edx = (edx & 0xffff0000u) | t31;
    g->esp = sp0 - 0x30u;
    t33 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x6eu, 3, self, ebx, self + 0x52u);
    t34 = g->ecx;
    t35 = g->edx;
    t36 = rd16(self + 0x74u);
    t37 = rd16(self + 0x42u);
    t38 = rd16(self + 0x3cu);
    wr16(self + 0x258u, 0u);
    wr32(sp0 - 0x34u, self + 0x52u);
    t39 = rd16(self + 0x78u);
    wr16(self + 0x80u, (uint16_t)t38);
    wr16(self + 0x82u, (uint16_t)(t39 + (uint16_t)(t36 + t37)));
    t40 = rd16(self + 0x60u);
    wr16(self + 0x7cu, (uint16_t)((uint16_t)t38 + t40));
    t41 = rd32(sp0 - 8u);
    wr16(self + 0x7eu, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t39 + (uint16_t)(t36 + t37))));
    wr32(sp0 - 0x38u, t41);
    wr32(sp0 - 0x3cu, self);
    t42 = rd16(self + 0x68u);
    t43 = rd16(self + 0x3cu);
    t44 = rd16(self + 0x3eu);
    wr16(self + 0x86u, 0u);
    wr16(self + 0x84u, (uint16_t)((uint16_t)(t42 - t43) - t44));
    g->eax = t41;
    g->edx = (t35 & 0xffff0000u) | (uint16_t)((uint16_t)(t42 - t43) - t44);
    t45 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x7cu, 3, self, t41, self + 0x52u);
    t46 = g->edx;
    t47 = rd16(self + 0x82u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t47);
    wr32(sp0 - 0x34u, 0u);
    t48 = rd16(self + 0x60u);
    wr16(self + 0x23cu, (uint16_t)t48);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, self + 0x23cu);
    wr32(sp0 - 0x44u, self + 0x7cu);
    t49 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t47 + t49));
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    wr16(self + 0x246u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr16(self + 0x244u, 0x64u);
    g->eax = sp0 - 0x1cu;
    g->edx = ((t46 | t48) & 0xffff0000u) | (uint16_t)((uint16_t)t47 + t49);
    t50 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, 0u, sp0 - 0x1cu, self + 0x7cu, self + 0x23cu, 1u, 0u, 0u);
    t51 = g->edx;
    wr32(sp0 - 0x20u, t50);
    if ((int16_t)rd16(self + 0x14u) <= 0)
    {
        eax = t50;
        edx = t51;
        loc_20 = t50;
    }
    else
    {
        eax = t50;
        edx = t51;
        loc_20 = t50;
    COW_AT(10219d31)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, self + 0x23cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t52 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
        t53 = g->edx;
        eax = t52;
        edx = t53;
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(10219d3d)
    t54 = rd16(self + 0x258u);
    wr16(self + t54 * 2u + 0x25au, 1u);
    t55 = rd16(self + 0x86u);
    t56 = rd16(self + 0x42u);
    t57 = rd16(self + 0x3cu);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t58 = rd16(self + 0x82u);
    wr16(self + 0x232u, (uint16_t)t57);
    wr16(self + 0x234u, (uint16_t)(t58 + (uint16_t)(t55 + t56)));
    t59 = rd16(self + 0x60u);
    wr16(self + 0x22eu, (uint16_t)((uint16_t)t57 + t59));
    wr16(self + 0x230u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t58 + (uint16_t)(t55 + t56))));
    t60 = rd32(sp0 + 4u);
    t61 = rd16(self + 0x68u);
    t62 = rd16(self + 0x3cu);
    wr16(self + 0x238u, 0u);
    t63 = rd16(self + 0x3eu);
    wr16(self + 0x236u, (uint16_t)((uint16_t)(t61 - t62) - t63));
    g->eax = (eax & 0xffff0000u) | (uint16_t)(t58 + (uint16_t)(t55 + t56));
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t61 - t62) - t63);
    g->esp = sp0 - 0x30u;
    t64 = cow_thiscall(g, COW_IMG(0x1010a4f0u), t60, 0);
    t65 = g->ecx;
    t66 = g->edx;
    if ((uint16_t)t64 == 0u)
    {
        eax = t64;
        ecx = t65;
        edx = t66;
        loc_20 = rd32(sp0 - 0x20u);
    }
    else
    {
        edx = t66;
    COW_AT(10219dbe)
        wr32(sp0 - 0x34u, self + 0x52u);
        t67 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x38u, t67);
        wr32(sp0 - 0x3cu, self);
        g->eax = t67;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t68 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x22eu, 3, self, t67, self + 0x52u);
        t69 = g->edx;
        t70 = rd16(self + 0x234u);
        wr16(self + 0x240u, 0u);
        wr16(self + 0x242u, (uint16_t)t70);
        wr32(sp0 - 0x34u, 0u);
        t71 = rd16(self + 0x60u);
        wr16(self + 0x23cu, (uint16_t)t71);
        wr32(sp0 - 0x38u, 0u);
        t72 = rd16(self + 0x62u);
        wr16(self + 0x23eu, (uint16_t)((uint16_t)t70 + t72));
        wr32(sp0 - 0x3cu, 0u);
        wr16(self + 0x246u, 0u);
        wr32(sp0 - 0x40u, self + 0x23cu);
        wr32(sp0 - 0x44u, self + 0x22eu);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        t73 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x4cu, t73);
        wr16(self + 0x244u, 0x64u);
        g->eax = sp0 - 0x1cu;
        g->edx = ((t69 | t71) & 0xffff0000u) | (uint16_t)((uint16_t)t70 + t72);
        t74 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t73, sp0 - 0x1cu, self + 0x22eu, self + 0x23cu, 0u, 0u, 0u);
        t75 = g->ecx;
        t76 = g->edx;
        wr32(sp0 - 0x20u, t74);
        if (rd16(self + 0x14u) != 0u)
        {
            eax = t74;
            ecx = t75;
            loc_20 = t74;
        }
        else
        {
            eax = t74;
            edx = t76;
            loc_20 = t74;
    COW_AT(10219e1a)
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x3cu, self + 0x23cu);
            g->eax = eax;
            g->esp = sp0 - 0x30u;
            t77 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
            t78 = g->ecx;
            eax = t77;
            ecx = t78;
            loc_20 = rd32(sp0 - 0x20u);
        }
    COW_AT(10219e26)
        t79 = rd16(self + 0x258u);
        wr16(self + t79 * 2u + 0x25au, 0u);
        wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
        edx = t79;
    }
    COW_AT(10219e40)
    t80 = (ecx & 0xffff0000u) | rd16(self + 0x3cu);
    t81 = rd16(self + 0x234u);
    t82 = rd16(self + 0x42u);
    wr32(sp0 + 4u, t80);
    wr32(sp0 - 0x34u, self + 0x52u);
    t83 = rd16(self + 0x238u);
    wr16(self + 0x24eu, (uint16_t)t80);
    wr16(self + 0x250u, (uint16_t)(t83 + (uint16_t)(t81 + t82)));
    wr16(self + 0x24au, (uint16_t)(rd16(self + 0x60u) + rd16(sp0 + 4u)));
    t84 = rd32(sp0 - 0x10u);
    t85 = rd16(self + 0x62u);
    wr16(self + 0x24cu, (uint16_t)(t85 + (uint16_t)(t83 + (uint16_t)(t81 + t82))));
    wr32(sp0 - 0x38u, t84);
    wr32(sp0 - 0x3cu, self);
    t86 = rd16(self + 0x68u);
    t87 = rd16(self + 0x3cu);
    t88 = rd16(self + 0x3eu);
    wr16(self + 0x254u, 0u);
    wr16(self + 0x252u, (uint16_t)((uint16_t)(t86 - t87) - t88));
    g->eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)(t86 - t87) - t88);
    g->edx = (edx & 0xffff0000u) | (uint16_t)(t85 + (uint16_t)(t83 + (uint16_t)(t81 + t82)));
    g->esp = sp0 - 0x30u;
    t89 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x24au, 3, self, t84, self + 0x52u);
    t90 = g->ecx;
    t91 = g->edx;
    t92 = rd16(self + 0x250u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t92);
    wr32(sp0 - 0x34u, 0u);
    wr16(self + 0x23cu, rd16(self + 0x60u));
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0xffffffffu);
    wr32(sp0 - 0x40u, self + 0x23cu);
    wr32(sp0 - 0x44u, self + 0x24au);
    t93 = rd32(sp0 - 0x20u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t92 + rd16(self + 0x62u)));
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t93);
    wr16(self + 0x244u, 0x64u);
    wr16(self + 0x246u, 0u);
    g->eax = t93;
    g->edx = sp0 - 0x1cu;
    t94 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t93, sp0 - 0x1cu, self + 0x24au, self + 0x23cu, 0xffffffffu, 0u, 0u);
    t95 = g->edx;
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        ebx = t94;
    }
    else
    {
        eax = t94;
        edx = t95;
        ebx = t94;
    COW_AT(10219ef5)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, self + 0x23cu);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
    }
    COW_AT(10219f00)
    wr16(self + rd16(self + 0x258u) * 2u + 0x25au, 0xffffu);
    t96 = rd16(self + 0x250u);
    t97 = rd16(self + 0x38u);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t98 = t97 + (uint32_t)(int16_t)t96 + rd16(self + 0x254u) + rd16(self + 0x48u);
    wr32(sp0 - 0x34u, t98);
    g->eax = rd16(self + 0x254u);
    g->edx = t98;
    t99 = rd16(self + 0x254u);
    g->esp = sp0 - 0x30u;
    t100 = cow_thiscall(g, COW_IMG(0x10218020u), self, 1, t98);
    t101 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
    {
        eax = t100;
        edx = t101;
    COW_AT(10219f4c)
        if ((rd8(self + 0x4bu) & 0xfu) != 0u)
        {
    COW_AT(10219f52)
            if ((uint16_t)ebx == 0u)
            {
    COW_AT(10219f57)
                g->esp = sp0 - 0x30u;
                cow_stdcall(g, COW_IMG(0x10218550u), 0);
                wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
            }
        }
    }
    COW_AT(10219f62)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10219b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10219bdbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x10219c0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10219d31u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219d3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219dbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = self + 0x22eu;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219e1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219e26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219e40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x52u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219ef5u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219f00u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219f4cu:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219f52u:
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219f57u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10219f62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10219b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10219b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
