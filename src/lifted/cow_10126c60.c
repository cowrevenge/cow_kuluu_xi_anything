/* f_0x10126c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10126c60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_228;
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
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 592u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10126c86u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_10126c86;
    case 0x10126c95u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_10126c95;
    case 0x10126c9au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_10126c9a;
    case 0x10126ca9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_10126ca9;
    case 0x10126cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126cd8;
    case 0x10126cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126cdc;
    case 0x10126ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126ce4;
    case 0x10126d1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10126d1f;
    case 0x10126d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126d3a;
    case 0x10126d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126d4b;
    case 0x10126d52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10126d52;
    case 0x10126d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_228 = rd32(sp0 - 0x228u); goto E_10126d9f;
    case 0x10126db7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126db7;
    case 0x10126ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126dde;
    case 0x10126de0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126de0;
    case 0x10126decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126dec;
    case 0x10126df2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126df2;
    case 0x10126e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126e0c;
    case 0x10126e33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126e33;
    case 0x10126e5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10126e5b;
    case 0x10126e8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126e8d;
    case 0x10126edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10126eda;
    case 0x10126f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10126f21;
    case 0x10126f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10126f29;
    case 0x10126f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10126f98;
    case 0x10126fd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10126fd9;
    case 0x1012704du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012704d;
    case 0x101270c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101270c1;
    case 0x1012711fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1012711f;
    default: break;
    }
#endif

    COW_AT(10126c60)
    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, in_ebp);
    wr32(sp0 - 0x238u, in_esi);
    wr32(sp0 - 0x23cu, in_edi);
    wr8(COW_IMG(0x104e1d50u), 0u);
    wr32(sp0 - 0x22cu, self);
    if (rd32(arg1) != 0u)
    {
        eax = rd32(arg1);
        goto L_10126c95;
    }
    COW_AT(10126c86)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10126c95: ;
    COW_AT(10126c95)
    if (rd8(eax) != 0u) goto L_10126ca9;
    COW_AT(10126c9a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10126ca9: ;
    COW_AT(10126ca9)
    wr32(sp0 - 0x228u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1012a360u), sp0 - 0x224u, 0);
    t1 = g->edx;
    t2 = rd32(self + 0x83cu);
    wr32(t2 + 0x20u, 0x8000u);
    t3 = rd32(self + 0x83cu);
    wr32(t3 + 0x28u, 0u);
    wr32(t3 + 0x2cu, 0u);
    if (rd8(rd32(arg1)) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(rd32(arg1));
        edx = t1;
        ebp = rd32(arg1);
        goto L_10126ce4;
    }
    eax = (t2 & 0xffffff00u) | rd8(rd32(arg1));
    edx = t1;
    ebp = rd32(arg1);
L_10126cd8: ;
    COW_AT(10126cd8)
    if ((uint8_t)eax == 0x7fu) goto L_10126d3a;
    COW_AT(10126cdc)
    if (rd8(ebp + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + 1u);
        ebp = ebp + 1u;
        goto L_10126cd8;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp + 1u);
    ebp = ebp + 1u;
L_10126ce4: ;
    COW_AT(10126ce4)
    wr32(sp0 - 0x240u, 0x400u);
    wr32(sp0 - 0x244u, rd32(arg1));
    wr32(sp0 - 0x248u, COW_IMG(0x104e1d50u));
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x104e1d50u), rd32(arg1), 0x400u);
    wr8(COW_IMG(0x104e1d50u) + ebp - rd32(arg1), 0u);
    wr32(arg1, 0u);
    t91 = rd32(self + 0x83cu);
    wr32(t91 + 0x20u, 0x8003u);
    t92 = rd32(self + 0x83cu);
    wr32(t92 + 0x28u, 0u);
    wr32(t92 + 0x2cu, 0u);
    eax = t92;
    edx = t91;
L_10126d1f: ;
    COW_AT(10126d1f)
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1012a350u), sp0 - 0x224u, 0);
    t93 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t93;
    return COW_IMG(0x104e1d50u);
L_10126d3a: ;
    COW_AT(10126d3a)
    if (rd8(ebp + 1u) - 0x31u > 7u) goto L_1012711f;
    eax = rd8(ebp + 1u) - 0x31u;
    COW_AT(10126d4b)
    t4 = rd32(COW_IMG(0x1012716cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10126d52u: goto L_10126d52;
    case 0x10126e8du: goto L_10126e8d;
    case 0x10126edau: goto L_10126eda;
    case 0x10126f29u: goto L_10126f29;
    case 0x10126f98u: goto L_10126f98;
    case 0x10126fd9u: goto L_10126fd9;
    case 0x1012704du: goto L_1012704d;
    case 0x101270c1u: goto L_101270c1;
    default: rt_fatal(g, COW_IMG(0x10126d4bu), "switch");
    }
    return 0;
L_10126d52: ;
    COW_AT(10126d52)
    t53 = rd32(self + 0x83cu);
    wr32(t53 + 0x20u, 0x8001u);
    t54 = ebp - rd32(arg1);
    t55 = rd32(arg1);
    esi = t55;
    edi = COW_IMG(0x104e1d50u);
    ecx = t54 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t54 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x240u, arg2);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, COW_IMG(0x104e1d50u));
    t56 = rd32(arg1);
    wr8(COW_IMG(0x104e1d50u) + ebp - t56, 0u);
    g->eax = t56;
    g->edx = t53;
    g->esp = sp0 - 0x23cu;
    t57 = cow_thiscall(g, COW_IMG(0x1012a420u), sp0 - 0x224u, 4, COW_IMG(0x104e1d50u), 1u, 0u, arg2);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    loc_228 = rd32(sp0 - 0x228u);
L_10126d9f: ;
    COW_AT(10126d9f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t59 = cow_thiscall(g, COW_IMG(0x1012a400u), sp0 - 0x224u, 0);
    t60 = g->edx;
    g->edx = t60;
    t61 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x224u, 0);
    t62 = g->edx;
    if (t61 != 0u)
    {
        eax = t61;
        edx = t62;
        goto L_10126df2;
    }
    edi = t59;
    COW_AT(10126db7)
    t63 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
    wr32(sp0 - 0x240u, t63);
    wr32(sp0 - 0x244u, 0x200u);
    wr32(sp0 - 0x248u, sp0 - 0x200u);
    g->ebx = arg1;
    g->edx = rd32(COW_IMG(0x1062193cu));
    t64 = rd32(COW_IMG(0x1062193cu));
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1012a4f0u), sp0 - 0x224u, 3, sp0 - 0x200u, 0x200u, t63);
    t65 = g->edx;
    if ((int32_t)rd32(sp0 - 0x228u) > 3) goto L_10126e0c;
    eax = rd32(sp0 - 0x228u);
    edx = t65;
    zf = rd32(sp0 - 0x228u) == 3u;
    COW_AT(10126dde)
    if (zf)
    {
    COW_AT(10126de0)
        g->edx = edx;
        g->esp = sp0 - 0x23cu;
        t66 = cow_call_regs(g, COW_IMG(0x1012a410u), eax, sp0 - 0x224u, g->edx, 1, 0);
        t67 = g->edx;
        wr8(arg2 + 1u, (uint8_t)t66);
        eax = t66;
        edx = t67;
    }
    COW_AT(10126dec)
    t68 = rd32(sp0 - 0x228u) + 1u;
    wr32(sp0 - 0x228u, t68);
    loc_228 = t68;
    goto L_10126d9f;
L_10126df2: ;
    COW_AT(10126df2)
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t84 = cow_call_regs(g, COW_IMG(0x1012a410u), eax, sp0 - 0x224u, g->edx, 1, 0);
    t85 = g->edx;
    wr8(arg2 + 1u, (uint8_t)t84);
    wr8(ebp, 0u);
    wr32(arg1, ebp + 2u);
    eax = t84;
    edx = t85;
    goto L_10126d1f;
L_10126e0c: ;
    COW_AT(10126e0c)
    t69 = rd32(sp0 - 0x22cu);
    wr32(rd32(t69 + 0x83cu) + 0x20u, 1u);
    t70 = rd32(t69 + 0x83cu);
    wr32(t70 + 0x28u, 0u);
    wr32(t70 + 0x2cu, 0u);
    if (rd8(t69 + 4u) != 0x97u)
    {
    COW_AT(10126e5b)
        t77 = edi + rd32(arg1) - 4u;
        wr32(arg1, t77);
        wr8(t77, 0x20u);
        wr8(rd32(arg1) + 1u, 0x20u);
        t78 = rd32(arg1);
        t79 = rd8(arg2);
        wr8(t78 + 2u, (uint8_t)t79);
        t80 = rd8(arg2 + 1u);
        t81 = rd32(arg1);
        wr8(t81 + 3u, (uint8_t)t80);
        wr8(COW_IMG(0x104e1d50u) + edi, 0u);
        g->eax = (t78 & 0xffffff00u) | t80;
        g->edx = t81;
        g->esp = sp0 - 0x23cu;
        t82 = cow_stdcall(g, COW_IMG(0x1012a340u), 0);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    }
    else
    {
    COW_AT(10126e33)
        t71 = edi + rd32(arg1) - 2u;
        wr32(arg1, t71);
        t72 = rd8(arg2);
        wr8(t71, (uint8_t)t72);
        t73 = rd8(arg2 + 1u);
        t74 = rd32(arg1);
        wr8(t74 + 1u, (uint8_t)t73);
        wr8(COW_IMG(0x104e1d50u) + edi, 0u);
        g->eax = (t71 & 0xffffff00u) | t73;
        g->edx = t74;
        g->esp = sp0 - 0x23cu;
        t75 = cow_stdcall(g, COW_IMG(0x1012a340u), 0);
        t76 = g->edx;
        eax = t75;
        edx = t76;
    }
    goto L_10126d1f;
L_10126e8d: ;
    COW_AT(10126e8d)
    wr32(rd32(self + 0x83cu) + 0x20u, 0x4002u);
    t49 = rd32(self + 0x83cu);
    wr32(t49 + 0x28u, 0u);
    wr32(t49 + 0x2cu, 0u);
    t50 = ebp - rd32(arg1);
    t51 = rd32(arg1);
    esi = t51;
    edi = COW_IMG(0x104e1d50u);
    ecx = t50 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t50 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t52 = rd32(arg1);
    wr8(COW_IMG(0x104e1d50u) + ebp - t52, 0u);
    wr8(ebp, 0u);
    wr32(arg1, ebp + 2u);
    eax = t52;
    edx = t49;
    goto L_10126d1f;
L_10126eda: ;
    COW_AT(10126eda)
    wr32(rd32(self + 0x83cu) + 0x20u, 0x4001u);
    t46 = ebp - rd32(arg1);
    t47 = rd32(arg1);
    esi = t47;
    edi = COW_IMG(0x104e1d50u);
    ecx = t46 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t46 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t48 = rd32(arg1);
    wr8(COW_IMG(0x104e1d50u) + ebp - t48, 0u);
    wr8(ebp, 0u);
    wr32(arg1, ebp + 2u);
    if (rd8(ebp + 2u) != 7u)
    {
        eax = (t46 & 0xffffff00u) | rd8(ebp + 2u);
        edx = t48;
    }
    else
    {
        eax = (t46 & 0xffffff00u) | rd8(ebp + 2u);
        edx = t48;
        ebp = ebp + 2u;
    COW_AT(10126f21)
        wr32(arg1, ebp + 1u);
    }
    goto L_10126d1f;
L_10126f29: ;
    COW_AT(10126f29)
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 0x3cu);
    wr32(rd32(self + 0x83cu) + 0x20u, 0x8003u);
    t35 = rd8(ebp + 2u);
    t36 = rd32(self + 0x83cu);
    t37 = rd8(ebp + 2u);
    wr32(t36 + 0x28u, t35);
    wr32(t36 + 0x2cu, (uint32_t)((int32_t)t37 >> 0x1fu));
    t38 = rd32(rd32(self + 0x83cu) + 0x2cu);
    wr32(sp0 - 0x248u, t38);
    t39 = rd32(rd32(self + 0x83cu) + 0x28u);
    wr32(sp0 - 0x24cu, t39);
    g->eax = t39;
    g->edx = t38;
    t40 = rd32(self + 0x83cu);
    g->esp = sp0 - 0x23cu;
    t41 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, t39, t38, 0x3cu, 0u);
    t42 = g->edx;
    wr32(t40 + 0x28u, t41);
    wr32(t40 + 0x2cu, t42);
    t43 = ebp - rd32(arg1);
    t44 = rd32(arg1);
    esi = t44;
    edi = COW_IMG(0x104e1d50u);
    ecx = t43 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t43 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t45 = rd32(arg1);
    wr8(COW_IMG(0x104e1d50u) + ebp - t45, 0u);
    wr8(ebp, 0u);
    wr32(arg1, ebp + 3u);
    eax = ebp - t45;
    edx = t43;
    goto L_10126d1f;
L_10126f98: ;
    COW_AT(10126f98)
    wr32(rd32(self + 0x83cu) + 0x20u, 1u);
    t32 = ebp - rd32(arg1);
    t33 = rd32(arg1);
    esi = t33;
    edi = COW_IMG(0x104e1d50u);
    ecx = t32 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t32 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t34 = rd32(arg1);
    wr8(COW_IMG(0x104e1d50u) + ebp - t34, 0u);
    wr8(ebp, 0u);
    wr32(arg1, ebp + 2u);
    eax = ebp - t34;
    edx = t32;
    goto L_10126d1f;
L_10126fd9: ;
    COW_AT(10126fd9)
    wr32(sp0 - 0x240u, 0u);
    wr32(rd32(self + 0x83cu) + 0x20u, 2u);
    wr32(sp0 - 0x244u, 0x3cu);
    t22 = ebp - rd32(arg1);
    t23 = rd32(arg1);
    esi = t23;
    edi = COW_IMG(0x104e1d50u);
    ecx = t22 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t22 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t24 = rd32(sp0 - 0x22cu);
    wr8(COW_IMG(0x104e1d50u) + ebp - rd32(arg1), 0u);
    t25 = rd8(ebp + 2u);
    wr8(ebp, 0u);
    t26 = rd32(t24 + 0x83cu);
    wr32(t26 + 0x28u, t25);
    wr32(t26 + 0x2cu, (uint32_t)((int32_t)t25 >> 0x1fu));
    t27 = rd32(rd32(t24 + 0x83cu) + 0x2cu);
    wr32(sp0 - 0x248u, t27);
    t28 = rd32(rd32(t24 + 0x83cu) + 0x28u);
    wr32(sp0 - 0x24cu, t28);
    g->eax = t25;
    g->edx = t28;
    t29 = rd32(t24 + 0x83cu);
    g->esp = sp0 - 0x23cu;
    t30 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, t28, t27, 0x3cu, 0u);
    t31 = g->edx;
    wr32(t29 + 0x28u, t30);
    wr32(t29 + 0x2cu, t31);
    wr32(arg1, ebp + 3u);
    eax = t30;
    edx = t31;
    goto L_10126d1f;
L_1012704d: ;
    COW_AT(1012704d)
    wr32(sp0 - 0x240u, 0u);
    wr32(rd32(self + 0x83cu) + 0x20u, 0x8002u);
    t12 = ebp - rd32(arg1);
    wr32(sp0 - 0x244u, 0x3cu);
    t13 = rd32(arg1);
    esi = t13;
    edi = COW_IMG(0x104e1d50u);
    ecx = t12 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t12 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t14 = rd32(sp0 - 0x22cu);
    wr8(COW_IMG(0x104e1d50u) + ebp - rd32(arg1), 0u);
    t15 = rd8(ebp + 2u);
    wr8(ebp, 0u);
    t16 = rd32(t14 + 0x83cu);
    wr32(t16 + 0x28u, t15);
    wr32(t16 + 0x2cu, (uint32_t)((int32_t)t15 >> 0x1fu));
    t17 = rd32(rd32(t14 + 0x83cu) + 0x2cu);
    wr32(sp0 - 0x248u, t17);
    t18 = rd32(rd32(t14 + 0x83cu) + 0x28u);
    wr32(sp0 - 0x24cu, t18);
    g->eax = t15;
    g->edx = t18;
    t19 = rd32(t14 + 0x83cu);
    g->esp = sp0 - 0x23cu;
    t20 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, t18, t17, 0x3cu, 0u);
    t21 = g->edx;
    wr32(t19 + 0x28u, t20);
    wr32(t19 + 0x2cu, t21);
    wr32(arg1, ebp + 3u);
    eax = t20;
    edx = t21;
    goto L_10126d1f;
L_101270c1: ;
    COW_AT(101270c1)
    wr32(rd32(self + 0x83cu) + 0x20u, 0x8002u);
    t5 = ebp - rd32(arg1);
    t6 = rd32(arg1);
    esi = t6;
    edi = COW_IMG(0x104e1d50u);
    ecx = t5 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t5 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(COW_IMG(0x104e1d50u) + ebp - rd32(arg1), 0u);
    t7 = rd8(ebp + 2u);
    wr8(ebp, 0u);
    t8 = (uint32_t)rd8(ebp + 3u) << 8u | t7;
    t9 = rd32(rd32(sp0 - 0x22cu) + 0x83cu);
    t10 = rd8(ebp + 3u);
    wr32(t9 + 0x28u, t8);
    t11 = (uint32_t)((int32_t)(t10 << 8u | t7) >> 0x1fu);
    wr32(t9 + 0x2cu, t11);
    wr32(arg1, ebp + 4u);
    eax = t8;
    edx = t11;
    goto L_10126d1f;
L_1012711f: ;
    COW_AT(1012711f)
    t86 = ebp - rd32(arg1);
    t87 = rd32(arg1);
    esi = t87;
    edi = COW_IMG(0x104e1d50u);
    ecx = t86 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t86 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t88 = rd32(sp0 - 0x22cu);
    wr8(COW_IMG(0x104e1d50u) + ebp - rd32(arg1), 0u);
    wr32(arg1, 0u);
    t89 = rd32(t88 + 0x83cu);
    wr32(t89 + 0x20u, 0x8003u);
    t90 = rd32(t88 + 0x83cu);
    wr32(t90 + 0x28u, 0u);
    wr32(t90 + 0x2cu, 0u);
    eax = t90;
    edx = t89;
    goto L_10126d1f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10126c60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10126c86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10126c95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x22cu, self);
        (void)sp0;
        return 1;
    }
    case 0x10126c9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10126ca9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x22cu, self);
        (void)sp0;
        return 1;
    }
    case 0x10126cd8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126cdcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126ce4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126d1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10126d3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126d4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126d52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10126d9fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_228;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10126db7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10126ddeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126de0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126decu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126df2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10126e0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126e33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126e5bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->esi = arg2;
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10126e8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126edau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10126f21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10126f29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10126f98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10126fd9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012704du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101270c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012711fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x23cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10126c60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10126c60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
