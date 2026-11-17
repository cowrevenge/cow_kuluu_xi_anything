/* f_0x10075c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10075c40(Guest* g)
{
    uint32_t cf;
    double d32;
    double d34;
    double d36;
    double d38;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t33;
    uint32_t t35;
    uint32_t t37;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        loc_c = in_edi;
        goto L_10075f73;
    }
    ecx = rd32(self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if ((int32_t)rd32(COW_IMG(0x1047d14cu)) <= 0)
    {
        edx = rd32(COW_IMG(0x1047d14cu));
        cf = 0u;
        pf = PARITY((uint8_t)rd32(COW_IMG(0x1047d14cu)));
        zf = rd32(COW_IMG(0x1047d14cu)) == 0u;
        sf = (int32_t)rd32(COW_IMG(0x1047d14cu)) < 0;
        of = 0u;
        goto L_10075c7c;
    }
    eax = rd16(ecx + 0x24u);
    edx = rd32(COW_IMG(0x1047d14cu));
    esi = 0u;
    cf = 0u;
    pf = PARITY((uint8_t)rd32(COW_IMG(0x1047d14cu)));
    zf = rd32(COW_IMG(0x1047d14cu)) == 0u;
    sf = (int32_t)rd32(COW_IMG(0x1047d14cu)) < 0;
    of = 0u;
L_10075c64: ;
    if ((int32_t)eax < (int32_t)(0x20u << (esi & 0x1fu))) goto L_10075c78;
    if ((int32_t)(esi + 1u) < (int32_t)edx)
    {
        cf = esi + 1u < edx;
        pf = PARITY((uint8_t)(esi + 1u - edx));
        zf = esi + 1u == edx;
        sf = (int32_t)(esi + 1u - edx) < 0;
        of = ((esi + 1u ^ edx) & (esi + 1u ^ esi + 1u - edx)) >> 0x1fu;
        esi = esi + 1u;
        goto L_10075c64;
    }
    cf = esi + 1u < edx;
    pf = PARITY((uint8_t)(esi + 1u - edx));
    zf = esi + 1u == edx;
    sf = (int32_t)(esi + 1u - edx) < 0;
    of = ((esi + 1u ^ edx) & (esi + 1u ^ esi + 1u - edx)) >> 0x1fu;
L_10075c7c: ;
    esi = edx - 1u;
L_10075c7f: ;
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, 0u);
    t1 = 0x20u << (esi & 0x1fu);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x24u, 5u);
    t2 = rd32(COW_IMG(0x1047d15cu) + esi * 4u);
    wr32(sp0 - 0x28u, t2);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(t2) + 0x3cu), rd32(t2), 4, t2, 5u, 0u, sp0 - 8u);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1047d168u) + esi * 4u);
    wr32(sp0 - 0x1cu, t4);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->ebx = COW_IMG(0x1047d15cu) + esi * 4u;
    g->eax = t4;
    t5 = rd32(COW_IMG(0x1047bfa8u));
    t6 = cow_fastcall(g, COW_IMG(0x1006a070u), t5, t3, 3, 0u, 0u, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd8(COW_IMG(0x1047d148u)) & 1u)
    {
        eax = (t6 & 0xffffff00u) | 1u;
        edx = t8;
        ebx = COW_IMG(0x1047d15cu) + esi * 4u;
        ebp = COW_IMG(0x1047d168u) + esi * 4u;
    }
    else
    {
        eax = (t6 & 0xffffff00u) | 1u;
        ecx = (t7 & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
        edx = t8;
        ebx = COW_IMG(0x1047d15cu) + esi * 4u;
        ebp = COW_IMG(0x1047d168u) + esi * 4u;
        wr8(COW_IMG(0x1047d148u), (uint8_t)(ecx | eax));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d1f0u), 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1cu, COW_IMG(0x10075fa0u));
        g->edx = t11;
        t12 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075fa0u));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    wr32(sp0 - 0x1cu, COW_IMG(0x103548a8u));
    wr32(sp0 - 0x20u, COW_IMG(0x10354944u));
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047d1f0u), edx, 2, COW_IMG(0x10354944u), COW_IMG(0x103548a8u));
    t14 = rd32(sp0 + 8u);
    wr32(sp0 - 0x1cu, t14);
    wr32(sp0 - 0x20u, 0x3cu);
    t15 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x24u, t15);
    g->eax = t15;
    g->edx = rd32(t15);
    t16 = rd32(t15);
    t17 = cow_thiscall(g, rd32(t16 + 0xc8u), t14, 3, t15, 0x3cu, t14);
    t18 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    cow_thiscall(g, COW_IMG(0x10075960u), self, 1, 0u);
    t19 = g->ecx;
    wr32(sp0 - 0x1cu, 0x144u);
    t20 = rd32(COW_IMG(0x1047bfa8u));
    t21 = rd32(sp0 - 4u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t21);
    wrf32(COW_IMG(0x103549c4u), (float)(double)(int32_t)t21);
    wrf32(COW_IMG(0x1035498cu), (float)(double)(int32_t)t21);
    wrf32(COW_IMG(0x103549c8u), (float)(double)(int32_t)t21);
    wrf32(COW_IMG(0x103549acu), (float)(double)(int32_t)t21);
    t22 = rd32(t20 + 0xebcu);
    wr32(sp0 - 0x20u, t22);
    g->eax = t22;
    g->edx = rd32(t22);
    t23 = rd32(t22);
    t24 = cow_thiscall(g, rd32(t23 + 0x130u), t19, 2, t22, 0x144u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x1cu, 0x144u);
    g->edx = t26;
    t27 = rd32(t20 + 0xdc8u);
    t28 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x144u);
    t29 = g->edx;
    wr32(sp0 - 0x1cu, t28);
    wr32(sp0 - 0x20u, COW_IMG(0x10354970u));
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 5u);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1000cd00u), t27, 4, 5u, 2u, COW_IMG(0x10354970u), t28);
    esi = 0u;
L_10075d95: ;
    if (esi > 3u) goto L_10075e66;
    t30 = rd32(COW_IMG(0x10075f7cu) + esi * 4u);
    switch (t30 - RD)
    {
    case 0x10075da5u: goto L_10075da5;
    case 0x10075dd1u: goto L_10075dd1;
    case 0x10075e08u: goto L_10075e08;
    case 0x10075e3eu: goto L_10075e3e;
    default: rt_fatal(g, COW_IMG(0x10075d9eu), "switch");
    }
    return 0;
L_10075c78: ;
    if ((int32_t)esi < (int32_t)edx)
    {
        cf = esi < edx;
        pf = PARITY((uint8_t)(esi - edx));
        zf = esi == edx;
        sf = (int32_t)(esi - edx) < 0;
        of = ((esi ^ edx) & (esi ^ esi - edx)) >> 0x1fu;
        goto L_10075c7f;
    }
    cf = esi < edx;
    pf = PARITY((uint8_t)(esi - edx));
    zf = esi == edx;
    sf = (int32_t)(esi - edx) < 0;
    of = ((esi ^ edx) & (esi ^ esi - edx)) >> 0x1fu;
    goto L_10075c7c;
L_10075da5: ;
    t37 = rd32(sp0 + 8u);
    d38 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a378u)));
    wr32(COW_IMG(0x10354a48u), t37);
    wr32(COW_IMG(0x10354a2cu), t37);
    wrf32(COW_IMG(0x10354a44u), (float)d38);
    wrf32(COW_IMG(0x10354a0cu), (float)d38);
L_10075e66: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    t39 = rd32(COW_IMG(0x103549e0u) + esi * 4u);
    wr32(sp0 - 0x24u, t39);
    wr32(sp0 - 0x28u, rd32(ebx));
    g->edx = t39;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(ebx)) + 0x3cu), rd32(rd32(ebx)), 4, rd32(ebx), t39, 0u, sp0 - 8u);
    t40 = g->edx;
    wr32(sp0 - 0x1cu, rd32(ebp));
    wr32(sp0 - 0x20u, 0u);
    t41 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t41);
    g->ebx = ebx;
    t42 = rd32(COW_IMG(0x1047bfa8u));
    cow_fastcall(g, COW_IMG(0x1006a070u), t42, t40, 3, t41, 0u, rd32(ebp));
    t43 = g->ecx;
    wr32(sp0 - 0x1cu, 0x144u);
    t44 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x20u, t44);
    g->eax = t44;
    g->edx = rd32(t44);
    t45 = rd32(t44);
    t46 = rd32(COW_IMG(0x1047bfa8u));
    t47 = cow_thiscall(g, rd32(t45 + 0x130u), t43, 2, t44, 0x144u);
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x1cu, 0x144u);
    g->edx = t49;
    t50 = rd32(t46 + 0xdc8u);
    t51 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x144u);
    t52 = g->edx;
    wr32(sp0 - 0x1cu, t51);
    t53 = COW_IMG(0x103549f0u) + esi * 0x70u;
    wr32(sp0 - 0x20u, t53);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 5u);
    g->ebx = ebx;
    g->eax = t53;
    g->edx = t52;
    t54 = cow_thiscall(g, COW_IMG(0x1000cd00u), t50, 4, 5u, 2u, t53, t51);
    t55 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), t55, 2, 0u, 0u);
    t56 = g->edx;
    t57 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t57);
    g->eax = t57;
    g->edx = t56;
    t58 = cow_thiscall(g, rd32(rd32(t57) + 8u), rd32(t57), 1, t57);
    t59 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        goto L_10075d95;
    }
    eax = t58;
    edx = t59;
    if ((rd8(COW_IMG(0x1047d148u)) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
        ebp = rd32(sp0 - 0x18u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d148u));
        ebp = rd32(sp0 - 0x18u);
        wr8(COW_IMG(0x1047d148u), (uint8_t)(eax | 2u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 0x14u;
        t60 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d204u), 0);
        t61 = g->ecx;
        t62 = g->edx;
        wr32(sp0 - 0x18u, COW_IMG(0x10075f90u));
        g->edx = t62;
        t63 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075f90u));
        t64 = g->edx;
        eax = t63;
        edx = t64;
    }
    wr32(sp0 - 0x18u, COW_IMG(0x10354bb0u));
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t65 = cow_fastcall(g, COW_IMG(0x1006af00u), COW_IMG(0x1047d204u), edx, 1, COW_IMG(0x10354bb0u));
    t66 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t67 = rd32(COW_IMG(0x1047bfa8u));
    cow_fastcall(g, COW_IMG(0x1006a0e0u), t67, t66, 2, 0u, 0u);
    t68 = g->ecx;
    t69 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t69);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(t69) + 8u), t68, 0);
    wr32(sp0 - 0x1cu, rd32(ebx));
    wr32(sp0 - 0x20u, rd32(sp0));
    t70 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x24u, t70);
    g->eax = t70;
    g->edx = rd32(sp0);
    t71 = rd32(sp0);
    g->esp = sp0 - 0x14u;
    t72 = cow_thiscall(g, rd32(rd32(t70) + 0xf4u), rd32(t70), 4, t70, t71, rd32(ebx), rd32(sp0 - 0x18u));
    t73 = g->edx;
    eax = t72;
    edx = t73;
    ebx = rd32(sp0 - 0x10u);
    esi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
L_10075f73: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_c;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10075dd1: ;
    t35 = rd32(sp0 + 8u);
    d36 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032c9a4u)));
    wr32(COW_IMG(0x10354ab8u), t35);
    wr32(COW_IMG(0x10354a9cu), t35);
    wrf32(COW_IMG(0x10354a98u), (float)d36);
    wrf32(COW_IMG(0x10354a60u), (float)d36);
    wr32(COW_IMG(0x10354ab4u), t35);
    wr32(COW_IMG(0x10354a7cu), t35);
    goto L_10075e66;
L_10075e08: ;
    t33 = rd32(sp0 + 8u);
    d34 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032c9a4u)));
    wr32(COW_IMG(0x10354b24u), t33);
    wr32(COW_IMG(0x10354aecu), t33);
    wrf32(COW_IMG(0x10354af0u), (float)d34);
    wrf32(COW_IMG(0x10354ad4u), (float)d34);
    wr32(COW_IMG(0x10354b28u), t33);
    wr32(COW_IMG(0x10354b0cu), t33);
    goto L_10075e66;
L_10075e3e: ;
    t31 = rd32(sp0 + 8u);
    d32 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a378u)));
    wr32(COW_IMG(0x10354b94u), t31);
    wr32(COW_IMG(0x10354b5cu), t31);
    wrf32(COW_IMG(0x10354b98u), (float)d32);
    wrf32(COW_IMG(0x10354b7cu), (float)d32);
    goto L_10075e66;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10075c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10075c40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
