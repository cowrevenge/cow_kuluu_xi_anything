/* f_0x10197470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10197470(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x20u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
        ecx = self;
        goto L_10197612;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
    if (rd8(self + 0x21u) != 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x21u);
        goto L_10197612;
    }
    ecx = (self & 0xffffff00u) | rd8(self + 0x21u);
    if (rd8(self + 0x48u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x48u);
        goto L_10197612;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x48u);
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101974bc;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101976ab;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a6b8u));
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101974bc: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 0xau)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101976ab;
    }
    t3 = rd32(COW_IMG(0x10197848u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x101974d2u: goto L_101974d2;
    case 0x101974e4u: goto L_101974e4;
    case 0x101974f6u: goto L_101974f6;
    case 0x1019751eu: goto L_1019751e;
    case 0x10197546u: goto L_10197546;
    case 0x1019756eu: goto L_1019756e;
    case 0x10197596u: goto L_10197596;
    case 0x101975beu: goto L_101975be;
    case 0x101975d3u: goto L_101975d3;
    case 0x101975e8u: goto L_101975e8;
    case 0x101975fdu: goto L_101975fd;
    default: rt_fatal(g, COW_IMG(0x101974cbu), "switch");
    }
    return 0;
L_101974d2: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 7u, 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_101974e4: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 7u, 1u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_101974f6: ;
    t28 = rd32(self + 0x40u);
    wr8(self + 0x20u, 1u);
    wr32(self + 0x24u, t28);
    t29 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t30 = rd32(self + 8u);
    wr32(self + 0x28u, t29);
    wr8(t30 + 0x62u, 0u);
    t31 = rd32(self + 8u);
    wr8(t31 + 0x85u, 0u);
    g->edx = t31;
    return t30;
L_1019751e: ;
    t24 = rd32(self + 0x44u);
    wr8(self + 0x21u, 1u);
    wr32(self + 0x24u, t24);
    t25 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t26 = rd32(self + 8u);
    wr32(self + 0x28u, t25);
    wr8(t26 + 0x62u, 0u);
    t27 = rd32(self + 8u);
    wr8(t27 + 0x85u, 0u);
    g->edx = t27;
    return t26;
L_10197546: ;
    t20 = rd32(self + 0x4cu);
    wr8(self + 0x48u, 1u);
    wr32(self + 0x24u, t20);
    t21 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t22 = rd32(self + 8u);
    wr32(self + 0x28u, t21);
    wr8(t22 + 0x62u, 0u);
    t23 = rd32(self + 8u);
    wr8(t23 + 0x85u, 0u);
    g->edx = t23;
    return t22;
L_1019756e: ;
    t16 = rd32(self + 0x50u);
    wr8(self + 0x48u, 2u);
    wr32(self + 0x24u, t16);
    t17 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t18 = rd32(self + 8u);
    wr32(self + 0x28u, t17);
    wr8(t18 + 0x62u, 0u);
    t19 = rd32(self + 8u);
    wr8(t19 + 0x85u, 0u);
    g->edx = t19;
    return t18;
L_10197596: ;
    t12 = rd32(self + 0x54u);
    wr8(self + 0x48u, 3u);
    wr32(self + 0x24u, t12);
    t13 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t14 = rd32(self + 8u);
    wr32(self + 0x28u, t13);
    wr8(t14 + 0x62u, 0u);
    t15 = rd32(self + 8u);
    wr8(t15 + 0x85u, 0u);
    g->edx = t15;
    return t14;
L_101975be: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9au, 1u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101975d3: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x9au, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101975e8: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xcau, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101975fd: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xcau, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10197612: ;
    if ((uint8_t)eax != 1u) goto L_101976b1;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101976ab;
    }
    t36 = rd32(COW_IMG(0x10197874u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t36 - RD)
    {
    case 0x10197632u: goto L_10197632;
    case 0x10197659u: goto L_10197659;
    case 0x1019767cu: goto L_1019767c;
    case 0x101977deu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101977de;
    default: rt_fatal(g, COW_IMG(0x1019762bu), "switch");
    }
    return 0;
L_10197632: ;
    t40 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    t41 = cow_call_regs(g, COW_IMG(0x10193830u), t40, g->ecx, g->edx, 1, 2, 9u, t40);
    t42 = rd32(self + 8u);
    wr8(self + 0x20u, 0u);
    wr8(t42 + 0x62u, 1u);
    t43 = rd32(self + 8u);
    wr8(t43 + 0x85u, 1u);
    g->edx = t43;
    return t41;
L_10197659: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_1019783b;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 9u, eax - 1u);
    t38 = g->edx;
    t39 = (t37 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t39;
    edx = t38;
    loc_14 = t39;
L_1019769a: ;
    t80 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t81 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t80, g->edx, 0, 2, loc_14, 0u);
    t82 = g->edx;
    g->edi = t80;
    g->edx = t82;
    t83 = cow_thiscall(g, COW_IMG(0x101186a0u), t80, 0);
    t84 = g->edx;
    eax = t83;
    edx = t84;
L_101976ab: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019767c: ;
    if ((int32_t)rd32(self + 0x24u) >= 100)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_10197693;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 1u);
    loc_10 = eax + 1u;
    eax = eax + 1u;
    loc_14 = 9u;
L_1019768b: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t45 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, loc_14, loc_10);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
L_10197693: ;
    t79 = (ecx & 0xffff0000u) | rd16(self + 0x28u);
    loc_14 = t79;
    goto L_1019769a;
L_101976b1: ;
    if (rd8(self + 0x21u) != 1u) goto L_1019772a;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101976ab;
    }
    t44 = rd32(COW_IMG(0x1019788cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t44 - RD)
    {
    case 0x101976c8u: goto L_101976c8;
    case 0x101976efu: goto L_101976ef;
    case 0x10197712u: goto L_10197712;
    case 0x101977deu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_101977de;
    default: rt_fatal(g, COW_IMG(0x101976c1u), "switch");
    }
    return 0;
L_101976c8: ;
    t51 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x10193830u), t51, g->ecx, g->edx, 1, 2, 0xau, t51);
    t53 = rd32(self + 8u);
    wr8(self + 0x21u, 0u);
    wr8(t53 + 0x62u, 1u);
    t54 = rd32(self + 8u);
    wr8(t54 + 0x85u, 1u);
    g->edx = t54;
    return t52;
L_101976ef: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_1019783b;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t48 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0xau, eax - 1u);
    t49 = g->edx;
    t50 = (t48 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t50;
    edx = t49;
    loc_14 = t50;
    goto L_1019769a;
L_10197712: ;
    if ((int32_t)rd32(self + 0x24u) >= 100)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
        goto L_10197693;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 1u);
    loc_10 = eax + 1u;
    eax = eax + 1u;
    loc_14 = 0xau;
    goto L_1019768b;
L_1019772a: ;
    if ((int8_t)rd8(self + 0x48u) <= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x48u);
        edx = in_edx;
        goto L_101976ab;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x48u);
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        edx = in_edx;
        goto L_101976ab;
    }
    t55 = rd32(COW_IMG(0x101978a4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t55 - RD)
    {
    case 0x10197693u: ecx = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10197693;
    case 0x1019774bu: goto L_1019774b;
    case 0x1019778eu: goto L_1019778e;
    case 0x101977eau: goto L_101977ea;
    default: rt_fatal(g, COW_IMG(0x10197744u), "switch");
    }
    return 0;
L_1019774b: ;
    if ((uint8_t)eax != 1u) goto L_10197757;
    t74 = rd32(self + 0x24u);
    eax = t74;
    ecx = (uint32_t)(int16_t)arg1 - 1u;
    edx = in_edx;
    loc_10 = t74;
    loc_14 = 0x37u;
L_1019776d: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, loc_14, loc_10);
    t77 = g->edx;
    edx = t77;
L_10197775: ;
    t78 = rd32(self + 8u);
    wr8(self + 0x48u, 0u);
    wr8(t78 + 0x62u, 1u);
    wr8(rd32(self + 8u) + 0x85u, 1u);
    g->edx = edx;
    return t78;
L_10197757: ;
    if ((uint8_t)eax != 2u) goto L_10197763;
    t75 = rd32(self + 0x24u);
    ecx = t75;
    edx = in_edx;
    loc_10 = t75;
    loc_14 = 0x38u;
    goto L_1019776d;
L_10197763: ;
    if ((uint8_t)eax != 3u)
    {
        edx = in_edx;
        goto L_10197775;
    }
    t76 = rd32(self + 0x24u);
    ecx = (uint32_t)(int16_t)arg1 - 1u;
    edx = t76;
    loc_10 = t76;
    loc_14 = 0x39u;
    goto L_1019776d;
L_1019778e: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        edx = in_edx;
        goto L_101977de;
    }
    ecx = rd32(self + 0x24u);
    wr32(self + 0x24u, ecx - 1u);
    if ((uint8_t)eax != 1u)
    {
        ecx = ecx - 1u;
        goto L_101977b4;
    }
    ecx = ecx - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t65 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x37u, ecx);
    t66 = g->edx;
    t67 = (t66 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t65;
    edx = t67;
    loc_14 = t67;
    goto L_1019769a;
L_101977b4: ;
    if ((uint8_t)eax != 2u) goto L_101977cf;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x38u, ecx);
    t69 = g->edx;
    t70 = (t69 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t68;
    edx = t70;
    loc_14 = t70;
    goto L_1019769a;
L_101977cf: ;
    if ((uint8_t)eax != 3u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t71 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x39u, ecx);
        t72 = g->edx;
        eax = t71;
        edx = t72;
    }
L_101977de: ;
    t73 = (edx & 0xffff0000u) | rd16(self + 0x28u);
    edx = t73;
    loc_14 = t73;
    goto L_1019769a;
L_101977ea: ;
    if ((int32_t)rd32(self + 0x24u) >= 100)
    {
        edx = in_edx;
        goto L_1019783b;
    }
    ecx = rd32(self + 0x24u);
    wr32(self + 0x24u, ecx + 1u);
    if ((uint8_t)eax != 1u)
    {
        ecx = ecx + 1u;
        goto L_10197811;
    }
    ecx = ecx + 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t56 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x37u, ecx);
    t57 = g->edx;
    t58 = (t56 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t58;
    edx = t57;
    loc_14 = t58;
    goto L_1019769a;
L_10197811: ;
    if ((uint8_t)eax != 2u) goto L_1019782c;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t59 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x38u, ecx);
    t60 = g->edx;
    t61 = (t59 & 0xffff0000u) | rd16(self + 0x28u);
    eax = t61;
    edx = t60;
    loc_14 = t61;
    goto L_1019769a;
L_1019782c: ;
    if ((uint8_t)eax != 3u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t62 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x39u, ecx);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    }
L_1019783b: ;
    t64 = (eax & 0xffff0000u) | rd16(self + 0x28u);
    eax = t64;
    loc_14 = t64;
    goto L_1019769a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
