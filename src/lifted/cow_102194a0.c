/* f_0x102194a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102194a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10219504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; loc_38 = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_10219504;
    case 0x10219534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10219534;
    case 0x102195a8u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_102195a8;
    case 0x102195adu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_102195ad;
    case 0x102195afu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_102195af;
    case 0x1021961cu: eax = g->eax; edx = g->edx; self = g->esi; goto E_1021961c;
    case 0x10219623u: eax = g->eax; edx = g->edx; self = g->esi; goto E_10219623;
    case 0x10219628u: eax = g->eax; edx = g->edx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_10219628;
    case 0x1021967bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1021967b;
    case 0x10219686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_10219686;
    case 0x1021974cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1021974c;
    case 0x10219757u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); goto E_10219757;
    case 0x102197a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_102197a3;
    case 0x102197a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_102197a9;
    case 0x102197aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_102197ae;
    case 0x102197b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102197b9;
    default: break;
    }
#endif

    COW_AT(102194a0)
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
    wr32(sp0 - 0x18u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x38u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x44u, 0x7cu);
    wr32(sp0 - 0x48u, 9u);
    wr32(sp0 - 0x14u, t4);
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
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x50u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7eu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x5cu, 0x7bu);
    wr32(sp0 - 0x60u, 9u);
    g->edx = t15;
    g->esp = sp0 - 0x58u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x7bu);
    t17 = g->edx;
    wr32(sp0 - 4u, t16);
    g->edx = t17;
    t18 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x30u;
    t19 = cow_thiscall(g, COW_IMG(0x1010a4d0u), t18, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = t20;
        edx = t21;
        ebx = t19;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ebx = t19;
    COW_AT(10219504)
        t22 = rd32(eax + 4u);
        wr32(sp0 - 0x20u, t22);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        t23 = rd32(eax + 8u);
        wr32(sp0 - 0x1cu, t23);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x30u;
        t24 = cow_fastcall(g, COW_IMG(0x10218560u), self, t23, 1, sp0 - 0x20u);
        t25 = g->edx;
        t26 = rd16(self + 0x4au);
        wr16(self + 0x4au, (uint16_t)(((t24 << 8u ^ t26) & 0xf00u) ^ t26));
        eax = t24;
        ecx = ((t24 << 8u ^ t26) & 0xf00u) ^ ((in_edi & 0xffff0000u) | t26);
        edx = t25;
    }
    COW_AT(10219534)
    t27 = rd16(self + 0x50u);
    t28 = rd16(self + 0x48u);
    wr16(self + 0x26u, (uint16_t)t28);
    t29 = rd16(self + 0x44u);
    wr16(self + 0x64u, (uint16_t)t29);
    wr16(self + 0x66u, (uint16_t)((uint16_t)t27 + (uint16_t)t28));
    t30 = rd16(self + 0x52u);
    wr16(self + 0x60u, (uint16_t)((uint16_t)t29 + t30));
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + (uint16_t)((uint16_t)t27 + (uint16_t)t28)));
    t31 = rd16(self + 0x5au);
    t32 = rd16(self + 0x46u);
    t33 = rd16(self + 0x44u);
    wr16(self + 0x6au, 0u);
    wr16(self + 0x68u, (uint16_t)((uint16_t)(t31 - t32) - t33));
    wr16(self + 0x72u, 0u);
    wr16(self + 0x74u, 0u);
    t34 = rd16(self + 0x60u);
    wr16(self + 0x6eu, (uint16_t)t34);
    t35 = rd16(self + 0x62u);
    wr16(self + 0x70u, (uint16_t)t35);
    wr16(self + 0x76u, rd16(self + 0x68u));
    wr16(self + 0x78u, 0u);
    if (rd32(ebx + 0x14u) == 0u)
    {
        edx = (edx & 0xffff0000u) | t35;
    COW_AT(102195ad)
        eax = 0u;
    }
    else
    {
        eax = rd32(ebx + 0x14u);
        edx = (edx & 0xffff0000u) | t35;
    COW_AT(102195a8)
        eax = rd32(eax + 4u);
    }
    COW_AT(102195af)
    wr32(sp0 - 0x34u, self + 0x52u);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t36 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x6eu, 3, self, eax, self + 0x52u);
    t37 = g->ecx;
    t38 = g->edx;
    t39 = rd16(self + 0x74u);
    t40 = rd16(self + 0x42u);
    t41 = rd16(self + 0x3cu);
    wr16(self + 0x258u, 0u);
    t42 = rd16(self + 0x78u);
    wr16(self + 0x232u, (uint16_t)t41);
    wr16(self + 0x234u, (uint16_t)(t42 + (uint16_t)(t39 + t40)));
    t43 = rd16(self + 0x60u);
    wr16(self + 0x22eu, (uint16_t)((uint16_t)t41 + t43));
    wr16(self + 0x230u, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t42 + (uint16_t)(t39 + t40))));
    t44 = rd32(sp0 + 4u);
    t45 = rd16(self + 0x68u);
    t46 = rd16(self + 0x3cu);
    wr16(self + 0x238u, 0u);
    t47 = rd16(self + 0x3eu);
    wr16(self + 0x236u, (uint16_t)((uint16_t)(t45 - t46) - t47));
    g->eax = (t36 & 0xffff0000u) | (uint16_t)(t42 + (uint16_t)(t39 + t40));
    g->edx = (t38 & 0xffff0000u) | (uint16_t)((uint16_t)(t45 - t46) - t47);
    t48 = cow_thiscall(g, COW_IMG(0x1010a4f0u), t44, 0);
    t49 = g->edx;
    wr32(sp0 - 0x34u, self + 0x52u);
    if ((uint16_t)t48 == 0u)
    {
        eax = t48;
    COW_AT(10219623)
        t51 = rd32(sp0 - 4u);
        wr32(sp0 - 0x38u, t51);
        edx = t51;
        loc_38 = t51;
    }
    else
    {
        edx = t49;
    COW_AT(1021961c)
        t50 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x38u, t50);
        eax = t50;
        loc_38 = t50;
    }
    COW_AT(10219628)
    wr32(sp0 - 0x3cu, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t52 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x22eu, 3, self, loc_38, self + 0x52u);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    t55 = rd16(self + 0x234u);
    wr16(self + 0x242u, (uint16_t)t55);
    wr16(self + 0x240u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr16(self + 0x23cu, rd16(self + 0x60u));
    wr32(sp0 - 0x40u, self + 0x23cu);
    wr32(sp0 - 0x44u, self + 0x22eu);
    t56 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t55 + t56));
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    wr16(self + 0x246u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr16(self + 0x244u, 0x64u);
    g->eax = sp0 - 0x20u;
    g->edx = (t54 & 0xffff0000u) | (uint16_t)((uint16_t)t55 + t56);
    t57 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, 0u, sp0 - 0x20u, self + 0x22eu, self + 0x23cu, 0u, 0u, 0u);
    t58 = g->edx;
    t59 = rd16(self + 0x14u);
    wr32(sp0 + 4u, t57);
    if ((uint16_t)t59 != 0u)
    {
        eax = t57;
        edx = t58;
    }
    else
    {
        eax = t57;
        edx = t58;
    COW_AT(1021967b)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, self + 0x23cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t60 = cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
        t61 = g->edx;
        eax = t60;
        edx = t61;
    }
    COW_AT(10219686)
    t62 = rd16(self + 0x258u);
    wr16(self + t62 * 2u + 0x25au, 0u);
    t63 = rd16(self + 0x234u);
    t64 = rd16(self + 0x42u);
    t65 = rd16(self + 0x3cu);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t66 = rd16(self + 0x238u);
    wr16(self + 0x24eu, (uint16_t)t65);
    wr16(self + 0x250u, (uint16_t)(t66 + (uint16_t)(t63 + t64)));
    t67 = rd16(self + 0x60u);
    wr16(self + 0x24au, (uint16_t)((uint16_t)t65 + t67));
    wr16(self + 0x24cu, (uint16_t)(rd16(self + 0x62u) + (uint16_t)(t66 + (uint16_t)(t63 + t64))));
    wr32(sp0 - 0x34u, self + 0x52u);
    t68 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x38u, t68);
    wr32(sp0 - 0x3cu, self);
    t69 = rd16(self + 0x68u);
    t70 = rd16(self + 0x3cu);
    t71 = rd16(self + 0x3eu);
    wr16(self + 0x254u, 0u);
    wr16(self + 0x252u, (uint16_t)((uint16_t)(t69 - t70) - t71));
    g->eax = t68;
    g->edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t69 - t70) - t71);
    g->esp = sp0 - 0x30u;
    t72 = cow_thiscall(g, COW_IMG(0x1021ba80u), self + 0x24au, 3, self, t68, self + 0x52u);
    t73 = g->ecx;
    t74 = g->edx;
    t75 = rd16(self + 0x250u);
    wr16(self + 0x240u, 0u);
    wr16(self + 0x242u, (uint16_t)t75);
    wr16(self + 0x23cu, rd16(self + 0x60u));
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0xffffffffu);
    wr32(sp0 - 0x40u, self + 0x23cu);
    wr32(sp0 - 0x44u, self + 0x24au);
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    t76 = rd32(sp0 + 4u);
    wr32(sp0 - 0x4cu, t76);
    t77 = rd16(self + 0x62u);
    wr16(self + 0x23eu, (uint16_t)((uint16_t)t75 + t77));
    wr16(self + 0x244u, 0x64u);
    wr16(self + 0x246u, 0u);
    g->eax = sp0 - 0x20u;
    g->edx = (t74 & 0xffff0000u) | (uint16_t)((uint16_t)t75 + t77);
    t78 = cow_thiscall(g, COW_IMG(0x10218340u), self, 7, t76, sp0 - 0x20u, self + 0x24au, self + 0x23cu, 0xffffffffu, 0u, 0u);
    t79 = g->edx;
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        ebx = t78;
    }
    else
    {
        eax = t78;
        edx = t79;
        ebx = t78;
    COW_AT(1021974c)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, self + 0x23cu);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x10218180u), self, 3, self + 0x23cu, 1u, 0u);
    }
    COW_AT(10219757)
    wr16(self + rd16(self + 0x258u) * 2u + 0x25au, 0xffffu);
    t80 = rd16(self + 0x38u);
    t81 = rd16(self + 0x48u);
    wr16(self + 0x258u, (uint16_t)(rd16(self + 0x258u) + 1u));
    t82 = t80 + t81 + rd16(self + 0x254u) + (uint32_t)(int16_t)rd16(self + 0x250u);
    wr32(sp0 - 0x34u, t82);
    g->eax = t82;
    g->edx = (uint32_t)(int16_t)rd16(self + 0x250u);
    t83 = rd16(self + 0x250u);
    g->esp = sp0 - 0x30u;
    t84 = cow_thiscall(g, COW_IMG(0x10218020u), self, 1, t82);
    t85 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
    {
        eax = t84;
        edx = t85;
    COW_AT(102197a3)
        if ((rd8(self + 0x4bu) & 0xfu) != 0u)
        {
    COW_AT(102197a9)
            if ((uint16_t)ebx == 0u)
            {
    COW_AT(102197ae)
                g->esp = sp0 - 0x30u;
                cow_stdcall(g, COW_IMG(0x10218550u), 0);
                wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
            }
        }
    }
    COW_AT(102197b9)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102194a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10219504u:
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
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x30u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10219534u:
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
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102195a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_38;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ecx = self + 0x6eu;
        g->ebp = 0u;
        g->edi = self + 0x52u;
        (void)sp0;
        return 1;
    }
    case 0x102195adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_38;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ecx = self + 0x6eu;
        g->ebp = 0u;
        g->edi = self + 0x52u;
        (void)sp0;
        return 1;
    }
    case 0x102195afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_38;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ecx = self + 0x6eu;
        g->ebp = 0u;
        g->edi = self + 0x52u;
        (void)sp0;
        return 1;
    }
    case 0x1021961cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->ecx = self + 0x22eu;
        g->ebx = self + 0x22eu;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, self + 0x52u);
        (void)sp0;
        return 1;
    }
    case 0x10219623u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->ecx = self + 0x22eu;
        g->ebx = self + 0x22eu;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, self + 0x52u);
        (void)sp0;
        return 1;
    }
    case 0x10219628u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        g->ecx = self + 0x22eu;
        g->ebx = self + 0x22eu;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, self + 0x52u);
        (void)sp0;
        return 1;
    }
    case 0x1021967bu:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10219686u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        g->edi = self + 0x23cu;
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1021974cu:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10219757u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102197a3u:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102197a9u:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102197aeu:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102197b9u:
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
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102194a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102194a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
