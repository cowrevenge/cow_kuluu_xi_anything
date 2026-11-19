/* f_0x101540a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101540a0(Guest* g)
{
    uint32_t cf;
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
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101540b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540b2;
    case 0x101540b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540b7;
    case 0x101540bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540bc;
    case 0x101540c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540c3;
    case 0x101540c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540c6;
    case 0x101540ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540cc;
    case 0x101540d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540d3;
    case 0x101540efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101540ef;
    case 0x10154105u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10154105;
    case 0x10154139u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10154139;
    case 0x1015413du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015413d;
    case 0x10154142u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10154142;
    case 0x10154176u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10154176;
    case 0x101541b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101541b9;
    case 0x1015421du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015421d;
    case 0x1015429cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1015429c;
    default: break;
    }
#endif

    COW_AT(101540a0)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101540c3;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(101540b2)
    if (eax == 2u) goto L_101540bc;
    COW_AT(101540b7)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_101540c6;
    }
L_101540bc: ;
    COW_AT(101540bc)
    eax = 1u;
L_101540cc: ;
    COW_AT(101540cc)
    t1 = rd32(COW_IMG(0x101542a0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101540d3u: goto L_101540d3;
    case 0x101540efu: goto L_101540ef;
    case 0x101541b9u: goto L_101541b9;
    case 0x1015421du: goto L_1015421d;
    default: rt_fatal(g, COW_IMG(0x101540ccu), "switch");
    }
    return 0;
L_101540c3: ;
    COW_AT(101540c3)
    cf = eax < 3u;
    zf = eax == 3u;
L_101540c6: ;
    COW_AT(101540c6)
    if (!cf && !zf) goto L_1015429c;
    goto L_101540cc;
L_101540d3: ;
    COW_AT(101540d3)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t85 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 1u);
    t86 = g->edx;
    t87 = cow_fastcall(g, COW_IMG(0x101555b0u), arg1, t86, 1, t85);
    t88 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t88;
    return t87;
L_101540ef: ;
    COW_AT(101540ef)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 1u);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 != 4u)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        edi = t53;
        goto L_10154139;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    edi = t53;
    COW_AT(10154105)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t56 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, eax);
    t57 = g->ecx;
    t58 = g->edx;
    g->ecx = t57;
    g->edx = t58;
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x102589b0u), t56, g->ecx, g->edx, 1, 1, t56);
    t60 = g->ecx;
    t61 = g->edx;
    g->edx = t61;
    g->esp = sp0 - 0xcu;
    t62 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, edi);
    t63 = g->edx;
    g->esp = sp0 - 8u;
    t64 = cow_fastcall(g, COW_IMG(0x101551c0u), arg1, t63, 5, 2u, COW_IMG(0x103d3c84u), COW_IMG(0x103d3c84u), t62, t59);
    t65 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t65;
    return t64;
L_10154139: ;
    COW_AT(10154139)
    if (edi == 0u) goto L_10154176;
    COW_AT(1015413d)
    if (edi == 1u) goto L_10154176;
    COW_AT(10154142)
    g->eax = eax;
    g->ecx = edi == 3u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t66 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 5u);
    t67 = g->ecx;
    t68 = g->edx;
    g->edx = t68;
    g->esp = sp0 - 0x14u;
    t69 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t70 = g->edx;
    g->esp = sp0 - 8u;
    t71 = cow_fastcall(g, COW_IMG(0x101551c0u), arg1, t70, 5, 3u, t69, t66, COW_IMG(0x103d3c84u), edi == 3u);
    t72 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t72;
    return t71;
L_10154176: ;
    COW_AT(10154176)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t73 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t74 = g->ecx;
    t75 = g->edx;
    g->ecx = t74;
    g->edx = t75;
    g->esp = sp0 - 0x10u;
    t76 = cow_call_regs(g, COW_IMG(0x102589b0u), t73, g->ecx, g->edx, 1, 1, t73);
    t77 = g->ecx;
    t78 = g->edx;
    g->ecx = t77;
    g->edx = t78;
    t79 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 5u);
    t80 = g->ecx;
    t81 = g->edx;
    g->esp = sp0 - 0x14u;
    t82 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    g->esp = sp0 - 8u;
    t83 = cow_fastcall(g, COW_IMG(0x101551c0u), arg1, edi != 0u, 5, edi != 0u, t82, t79, COW_IMG(0x103d3c84u), t76);
    t84 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t84;
    return t83;
L_101541b9: ;
    COW_AT(101541b9)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 7u);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0xcu;
    t34 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 6u);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 5u);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x14u;
    t40 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 4u);
    t41 = g->ecx;
    t42 = g->edx;
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0x18u;
    t43 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 3u);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0x1cu;
    t46 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 2u);
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    g->esp = sp0 - 0x20u;
    t49 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 1u);
    t50 = g->edx;
    g->esp = sp0 - 8u;
    t51 = cow_fastcall(g, COW_IMG(0x10154e30u), arg1, t50, 7, t49, t46, t43, t40, t37, t34, t31);
    t52 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t52;
    return t51;
L_1015421d: ;
    COW_AT(1015421d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 9u);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 8u);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 7u);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 2u);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = -(t11 != 1u) + 1u;
    g->eax = t14;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 6u);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x1cu;
    t18 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 5u);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x20u;
    t21 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 4u);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x24u;
    t24 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 3u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    g->esp = sp0 - 0x28u;
    t27 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 1u);
    t28 = g->edx;
    g->esp = sp0 - 8u;
    t29 = cow_fastcall(g, COW_IMG(0x10155400u), arg1, t28, 9, t27, t24, t21, t18, t15, t14, t8, t5, t2);
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_1015429c: ;
    COW_AT(1015429c)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101540a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101540b2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540bcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540c3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540c6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540ccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540d3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101540efu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10154105u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10154139u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015413du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10154142u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10154176u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101541b9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015421du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015429cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101540a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101540a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
