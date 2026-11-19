/* f_0x10225f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10225f40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10225c70u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225c70;
    case 0x10225c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225c85;
    case 0x10225c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225c94;
    case 0x10225ca1u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_10225ca1;
    case 0x10225cabu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_10225cab;
    case 0x10225cbfu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_10225cbf;
    case 0x10225cd7u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; goto E_10225cd7;
    case 0x10225ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10225ce9;
    case 0x10225d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10225d26;
    case 0x10225d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225d37;
    case 0x10225d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10225d42;
    case 0x10225d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10225d57;
    case 0x10225d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225d63;
    case 0x10225d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225d93;
    case 0x10225db1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225db1;
    case 0x10225db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225db9;
    case 0x10225e00u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225e00;
    case 0x10225e13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e13;
    case 0x10225e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e22;
    case 0x10225e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e34;
    case 0x10225e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e6b;
    case 0x10225e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e73;
    case 0x10225e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225e80;
    case 0x10225ec0u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225ec0;
    case 0x10225ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225ed3;
    case 0x10225ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225ee2;
    case 0x10225ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225ee9;
    case 0x10225ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225ef5;
    case 0x10225efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225efd;
    case 0x10225f0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10225f0a;
    case 0x10225f48u: eax = g->eax; self = g->ecx; in_esi = g->esi; in_edi = g->edi; goto E_10225f48;
    case 0x10225f4bu: eax = g->eax; self = g->ecx; in_esi = g->esi; in_edi = g->edi; goto E_10225f4b;
    case 0x10225f4eu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225f4e;
    case 0x10225f63u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225f63;
    case 0x10225f78u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10225f78;
    case 0x10225f8du: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; goto E_10225f8d;
    default: break;
    }
#endif

    COW_AT(10225f40)
    if (rd32(self + 0x6cu) == 0u) goto L_10225f78;
    eax = rd32(self + 0x6cu);
    COW_AT(10225f48)
    if (eax == 1u) goto L_10225f63;
    eax = eax - 1u;
    COW_AT(10225f4b)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10225f8d;
    }
    COW_AT(10225f4e)
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    edx = t2;
    COW_AT(10225ec0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 5u > 0x14u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
        edi = rd32(sp0 + 4u);
        goto L_10225efd;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edi = rd32(sp0 + 4u);
    COW_AT(10225ed3)
    t3 = rd32(COW_IMG(0x10225f10u) + rd8(COW_IMG(0x10225f24u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x10225ee2u: goto L_10225ee2;
    case 0x10225ee9u: goto L_10225ee9;
    case 0x10225ef5u: goto L_10225ef5;
    case 0x10225efdu: goto L_10225efd;
    case 0x10225f0au: goto L_10225f0a;
    default: rt_fatal(g, COW_IMG(0x10225edbu), "switch");
    }
    return 0;
L_10225c70: ;
    COW_AT(10225c70)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 1u > 0x18u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10225db9;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 1u;
    edi = rd32(sp0 + 4u);
    COW_AT(10225c85)
    t24 = rd32(COW_IMG(0x10225dccu) + rd8(COW_IMG(0x10225de4u) + eax) * 4u);
    switch (t24 - RD)
    {
    case 0x10225c94u: goto L_10225c94;
    case 0x10225d37u: goto L_10225d37;
    case 0x10225d63u: goto L_10225d63;
    case 0x10225d93u: goto L_10225d93;
    case 0x10225db1u: goto L_10225db1;
    case 0x10225db9u: goto L_10225db9;
    default: rt_fatal(g, COW_IMG(0x10225c8du), "switch");
    }
    return 0;
L_10225c94: ;
    COW_AT(10225c94)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, COW_IMG(0x10225b30u), self, 0);
    t48 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        eax = t47;
        edx = t48;
        goto L_10225cab;
    }
    eax = t47;
    edx = t48;
    COW_AT(10225ca1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_thiscall(g, COW_IMG(0x10225aa0u), self, 0);
    t50 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t50;
    return t49;
L_10225cab: ;
    COW_AT(10225cab)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0xcu, t51);
    g->edx = t53;
    t54 = cow_cdecl(g, COW_IMG(0x102253e0u), 1, t51);
    t55 = g->edx;
    if ((uint8_t)t54 == 0u)
    {
        eax = t54;
        edx = t55;
        goto L_10225cd7;
    }
    eax = t54;
    edx = t55;
    COW_AT(10225cbf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t56 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0xcu, t56);
    g->edx = t58;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x10225b90u), t57, 1, t56);
    t60 = g->ecx;
    t61 = g->edx;
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x10037c50u), t60, 0);
    t63 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t63;
    return t62;
L_10225cd7: ;
    COW_AT(10225cd7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t64 = cow_thiscall(g, COW_IMG(0x10225650u), self, 0);
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0xcu, t64);
    g->ecx = t65;
    g->edx = t66;
    t67 = cow_cdecl(g, COW_IMG(0x10225430u), 1, t64);
    t68 = g->ecx;
    t69 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        edx = t69;
        goto L_10225d26;
    }
    ecx = t68;
    COW_AT(10225ce9)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, 0xc2u);
    wr32(sp0 - 0x20u, 7u);
    wr8(sp0 + 8u, 0x7bu);
    wr8(sp0 + 9u, 0u);
    wr8(sp0 + 0xau, 0u);
    g->eax = 0u;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 0x18u;
    t70 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0xc2u);
    t71 = g->edx;
    wr32(sp0 - 0x1cu, t70);
    g->edx = t71;
    t72 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 8u;
    t73 = cow_thiscall(g, COW_IMG(0x10127c00u), t72, 5, t70, sp0 + 8u, 0u, 1u, 0u);
    t74 = g->ecx;
    t75 = g->edx;
    g->edx = t75;
    t76 = cow_thiscall(g, COW_IMG(0x10037c50u), t74, 0);
    t77 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t77;
    return t76;
L_10225d26: ;
    COW_AT(10225d26)
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t78 = cow_call_regs(g, COW_IMG(0x10225c10u), eax, g->ecx, g->edx, 1, 0);
    t79 = g->ecx;
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_thiscall(g, COW_IMG(0x10037b90u), t79, 0);
    t82 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t82;
    return t81;
L_10225d37: ;
    COW_AT(10225d37)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_call_regs(g, COW_IMG(0x10225b80u), eax, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        eax = t40;
        edx = t41;
        goto L_10225d57;
    }
    edx = t41;
    COW_AT(10225d42)
    wr32(sp0 - 0xcu, 1u);
    t42 = rd32(self + 8u);
    wr32(sp0 - 0x10u, t42);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x1015e790u), t42, COW_IMG(0x10621838u), g->edx, 0, 2, t42, 1u);
    t44 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t44;
    return t43;
L_10225d57: ;
    COW_AT(10225d57)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_call_regs(g, COW_IMG(0x10225b00u), eax, self, g->edx, 1, 0);
    t46 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t46;
    return t45;
L_10225d63: ;
    COW_AT(10225d63)
    wr32(sp0 - 0xcu, 2u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    wr32(sp0 - 0xcu, 0u);
    t33 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
    wr32(sp0 - 0x10u, t33);
    g->eax = t33;
    t34 = rd32(COW_IMG(0x10667144u));
    t35 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t34, 2, t33, 0u);
    t36 = g->ecx;
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x10037e90u), t36, 0);
    t39 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t39;
    return t38;
L_10225d93: ;
    COW_AT(10225d93)
    t26 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t26);
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t26);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = (t29 & 0xffffff00u) | rd8(self + 0x30u);
    wr32(sp0 - 0xcu, t30);
    g->edx = t30;
    t31 = cow_cdecl(g, COW_IMG(0x10225370u), 1, t30);
    t32 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t32;
    return t31;
L_10225db1: ;
    COW_AT(10225db1)
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    t25 = g->edx;
    edx = t25;
L_10225db9: ;
    COW_AT(10225db9)
    t83 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t83);
    wr32(sp0 - 0x10u, edi);
    g->eax = t83;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t84 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t83);
    t85 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t85;
    return t84;
L_10225e00: ;
    COW_AT(10225e00)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 5u > 0x14u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10225e73;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edi = rd32(sp0 + 4u);
    COW_AT(10225e13)
    t12 = rd32(COW_IMG(0x10225e88u) + rd8(COW_IMG(0x10225e9cu) + eax) * 4u);
    switch (t12 - RD)
    {
    case 0x10225e22u: goto L_10225e22;
    case 0x10225e34u: goto L_10225e34;
    case 0x10225e6bu: goto L_10225e6b;
    case 0x10225e73u: goto L_10225e73;
    case 0x10225e80u: goto L_10225e80;
    default: rt_fatal(g, COW_IMG(0x10225e1bu), "switch");
    }
    return 0;
L_10225e22: ;
    COW_AT(10225e22)
    t18 = rd32(self + 0x30u);
    wr32(self + 0x6cu, 2u);
    wr32(self + 0x70u, t18);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t18;
    return eax;
L_10225e34: ;
    COW_AT(10225e34)
    wr32(self + 0x6cu, 0u);
    wr32(sp0 - 0xcu, 2u);
    g->eax = rd32(COW_IMG(0x105781f8u));
    t14 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x102211b0u), t14 + 0x20u, 1, 2u);
    t16 = rd32(COW_IMG(0x10667144u));
    wr32(sp0 + 8u, 0u);
    t17 = rd32(t16 + 8u);
    wr32(sp0 + 4u, t17);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t17;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t15, COW_IMG(0x10621838u), t17);
L_10225e6b: ;
    COW_AT(10225e6b)
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    t13 = g->edx;
    edx = t13;
L_10225e73: ;
    COW_AT(10225e73)
    t19 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t19);
    wr32(sp0 - 0x10u, edi);
    g->eax = t19;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t19);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_10225e80: ;
    COW_AT(10225e80)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10225ee2: ;
    COW_AT(10225ee2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x102258d0u), self, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_10225ee9: ;
    COW_AT(10225ee9)
    wr32(self + 0x6cu, 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10225ef5: ;
    COW_AT(10225ef5)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101c86e0u), rd32(self + 0x68u), 0);
    eax = t4;
L_10225efd: ;
    COW_AT(10225efd)
    t7 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t7);
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, edi, t7);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_10225f0a: ;
    COW_AT(10225f0a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10225f63: ;
    COW_AT(10225f63)
    t10 = rd32(sp0 + 8u);
    t11 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t10);
    wr32(sp0 + 4u, t11);
    edx = t11;
    goto L_10225e00;
L_10225f78: ;
    COW_AT(10225f78)
    t22 = rd32(sp0 + 8u);
    t23 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t22);
    wr32(sp0 + 4u, t23);
    edx = t23;
    goto L_10225c70;
L_10225f8d: ;
    COW_AT(10225f8d)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10225f40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10225c70u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225c85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225c94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225ca1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225cabu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10225cbfu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225cd7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10225ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d26u:
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
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d42u:
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
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d57u:
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
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225d93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225db1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225db9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e00u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225e13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225e80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225ec0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225ed3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225ee2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225ee9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225ef5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225efdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225f0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225f48u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225f4bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225f4eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225f63u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225f78u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10225f8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10225f40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10225f40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
