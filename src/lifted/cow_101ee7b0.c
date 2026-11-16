/* f_0x101ee7b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101ee7b0(Guest* g)
{
    double d10;
    double d15;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101eeba2;
    }
    ebp = rd32(sp0 + 4u);
    t1 = (rd8(ebp + 5u) << 0x18u) + 0x808080u;
    t2 = rd16(ebp) & 0x100u;
    if ((rd16(ebp) & 0x100u) == 0u)
    {
        loc_c = t1;
        loc_4 = t2;
        t4 = (uint32_t)(int8_t)rd8(ebp + 2u);
        loc_20 = t4;
    }
    else
    {
        loc_c = t1;
        loc_4 = t2;
        t3 = (uint32_t)(int8_t)rd8(ebp + 3u);
        loc_20 = t3;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_thiscall(g, COW_IMG(0x101ee5f0u), self, 1, loc_20);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t7;
        goto L_101eeba2;
    }
    ecx = t6;
    esi = t5;
    t8 = (uint32_t)(int16_t)rd16(ebp + 6u) - (uint32_t)(int16_t)rd16(self + 0x6cu);
    t9 = rd16(self + 0x6cu);
    wr32(sp0 + 4u, t8);
    d10 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x24u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d10);
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t12 = rd16(self + 0x6eu);
    t13 = rd16(ebp + 8u);
    wr32(sp0 + 4u, t11);
    t14 = (uint32_t)(int16_t)t13 - (uint32_t)(int16_t)t12;
    d15 = fr(g, fr(g, fr(g, (double)(int32_t)t14 - (double)rdf32(self + 0x28u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d15);
    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    if ((rd8(ebp) & 0x10u) != 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(ebp);
        ebx = t16;
        loc_8 = t16;
    }
    else
    {
        ebx = t16;
        t17 = rd32(sp0 + 4u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu)) >> 1u);
        t18 = rd16(esi + 0x26u);
        wr32(sp0 + 4u, t17);
        t19 = ebx - (uint32_t)((int32_t)((uint32_t)(int16_t)t18 - (uint32_t)(int16_t)rd16(esi + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)t18 - (uint32_t)(int16_t)rd16(esi + 0x24u)) >> 0x1fu)) >> 1u);
        eax = -(uint32_t)((int32_t)((uint32_t)(int16_t)t18 - (uint32_t)(int16_t)rd16(esi + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)t18 - (uint32_t)(int16_t)rd16(esi + 0x24u)) >> 0x1fu)) >> 1u);
        ebx = t19;
        loc_8 = t19;
    }
    if ((uint16_t)loc_4 != 0u)
    {
        t20 = (uint32_t)(int8_t)rd8(ebp + 4u);
        t21 = (uint32_t)(int8_t)rd8(ebp + 3u);
        t22 = rd32(sp0 + 4u);
        g->eax = t20;
        g->esp = sp0 - 0x1cu;
        t23 = cow_thiscall(g, COW_IMG(0x101ee650u), self, 6, t22, ebx, t21, t20, ebp, 0u);
        eax = t23;
    }
    if ((rd16(ebp) & 0x200u) == 0u)
    {
        t27 = (uint32_t)(int8_t)rd8(ebp + 4u);
        t28 = (uint32_t)(int8_t)rd8(ebp + 2u);
        t29 = rd32(sp0 + 4u);
        eax = t28;
        edx = t27;
        loc_20 = loc_c;
        loc_24 = ebp;
        loc_28 = t27;
        loc_2c = t28;
        loc_30 = ebx;
        loc_34 = t29;
    }
    else
    {
        t24 = (uint32_t)(int8_t)rd8(ebp + 4u);
        t25 = (uint32_t)(int8_t)rd8(ebp + 2u);
        t26 = rd32(sp0 + 4u);
        eax = t26;
        edx = t25;
        loc_20 = 0u;
        loc_24 = ebp;
        loc_28 = t24;
        loc_2c = t25;
        loc_30 = ebx;
        loc_34 = t26;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t30 = cow_thiscall(g, COW_IMG(0x101ee650u), self, 6, loc_34, loc_30, loc_2c, loc_28, loc_24, loc_20);
    t31 = g->ecx;
    t32 = g->edx;
    if (rd8(ebp + 5u) == 0u)
    {
        eax = (t30 & 0xffffff00u) | rd8(ebp + 5u);
        edx = t32;
        goto L_101eeba2;
    }
    eax = (t30 & 0xffffff00u) | rd8(ebp + 5u);
    ecx = t31;
    edx = t32;
    if ((rd16(ebp) & 8u) != 0u) goto L_101eeba2;
    ecx = (ecx & 0xffff0000u) | rd16(ebp);
    if (rd32(ebp + 0x18u) == 0u)
    {
        edx = rd32(ebp + 0x18u);
        goto L_101eeba2;
    }
    if ((ecx & 0x800u) == 0u)
    {
        eax = (uint8_t)eax;
    }
    else
    {
        eax = (uint8_t)eax;
        eax = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
    }
    t33 = (eax << 0x18u) + rd32(COW_IMG(0x10382084u) + (uint32_t)(int16_t)rd16(ebp + 0x10u) * 4u);
    if ((ecx & 0x40u) == 0u)
    {
        edx = (uint32_t)(int16_t)rd16(ebp + 0x10u);
        loc_c = t33;
        goto L_101eeb2c;
    }
    loc_c = t33;
    t34 = (uint32_t)(int16_t)rd16(ebp + 0xeu);
    t35 = rd32(ebp + 0x18u);
    g->eax = t35;
    g->esp = sp0 - 0x1cu;
    t36 = cow_thiscall(g, rd32(rd32(self) + 0x48u), self, 1, t35);
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        ecx = t36;
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        loc_8 = t34;
        goto L_101ee972;
    }
    ecx = t36;
    edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    loc_8 = t34;
    if (edx == 2u) goto L_101ee981;
    if (edx == 3u) goto L_101ee981;
L_101ee972: ;
    if (edx != 0u) goto L_101ee981;
    eax = (uint8_t)loc_8;
L_101ee98b: ;
    if (eax > 7u) goto L_101eeb16;
    t38 = rd32(COW_IMG(0x101eebacu) + eax * 4u);
    switch (t38 - RD)
    {
    case 0x101ee99bu: goto L_101ee99b;
    case 0x101ee9d2u: goto L_101ee9d2;
    case 0x101eea0du: goto L_101eea0d;
    case 0x101eea23u: goto L_101eea23;
    case 0x101eea3cu: goto L_101eea3c;
    case 0x101eea7au: goto L_101eea7a;
    case 0x101eea9bu: goto L_101eea9b;
    case 0x101eeadau: goto L_101eeada;
    default: rt_fatal(g, COW_IMG(0x101ee994u), "switch");
    }
    return 0;
L_101ee981: ;
    t37 = (uint8_t)(loc_8 >> 8u);
    eax = t37;
    goto L_101ee98b;
L_101ee99b: ;
    t59 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
    eax = (uint32_t)((int32_t)(ecx - (uint32_t)((int32_t)ecx >> 0x1fu)) >> 1u);
    edx = (uint32_t)((int32_t)ecx >> 0x1fu);
    esi = (uint32_t)((int32_t)t59 >> 1u);
L_101ee9b3: ;
    t60 = esi + rd32(sp0 + 4u) - eax;
    wr32(sp0 + 4u, t60);
    g->eax = rd32(self);
    t61 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t62 = cow_thiscall(g, rd32(t61 + 0x4cu), self, 0);
    t63 = g->ecx;
    ebx = ebx - t62 - 1u;
L_101eeb42: ;
    t66 = (((loc_c & 0xff0000u) * (loc_c >> 0x18u) & 0x7f800000u) | ((uint8_t)loc_c * (loc_c >> 0x18u) & 0x7f80u) | ((loc_c & 0xff00u) * (loc_c >> 0x18u) & 0x7f8000u)) >> 7u | (loc_c & 0xff000000u);
    t67 = rd32(ebp + 0x18u);
    t68 = rd32(sp0 + 4u);
    g->eax = t67;
    g->edx = rd32(self);
    t69 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t70 = cow_thiscall(g, rd32(t69 + 0x44u), self, 4, t68, ebx, t67, t66);
    t71 = g->edx;
    eax = t70;
    edx = t71;
L_101eeba2: ;
    g->edx = edx;
    return eax;
L_101ee9d2: ;
    t55 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu)) >> 1u);
    t56 = t55 + rd32(sp0 + 4u) - (uint32_t)((int32_t)(ecx - (uint32_t)((int32_t)ecx >> 0x1fu)) >> 1u);
    t57 = rd16(esi + 0x26u);
    t58 = rd16(esi + 0x24u);
    wr32(sp0 + 4u, t56);
    ebx = ebx + (((uint32_t)((int32_t)(ecx - (uint32_t)((int32_t)ecx >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(t57 - t58)) + 1u;
    goto L_101eeb42;
L_101eea0d: ;
    t54 = rd32(sp0 + 4u) - ecx - 3u;
    wr32(sp0 + 4u, t54);
    goto L_101eeb42;
L_101eea23: ;
    t53 = rd32(sp0 + 4u) + ((eax & 0xffff0000u) | (uint16_t)(rd16(esi + 0x22u) - rd16(esi + 0x20u))) + 2u;
    wr32(sp0 + 4u, t53);
    goto L_101eeb42;
L_101eea3c: ;
    t48 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
    t49 = (uint32_t)((int32_t)t48 >> 1u) + rd32(sp0 + 4u) - (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u) * 3u;
    t50 = rd32(self);
    wr32(sp0 + 4u, t49);
    g->eax = t49;
    g->esp = sp0 - 0x1cu;
    t51 = cow_thiscall(g, rd32(t50 + 0x4cu), self, 0);
    t52 = g->ecx;
    ebx = ebx - t51 - 1u;
    goto L_101eeb42;
L_101eea7a: ;
    t47 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu);
    eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
    edx = (uint32_t)((int32_t)ecx >> 0x1fu) & 3u;
    esi = (uint32_t)((int32_t)t47 >> 1u);
    goto L_101ee9b3;
L_101eea9b: ;
    t43 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu)) >> 1u);
    t44 = t43 + rd32(sp0 + 4u) - (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u) * 3u;
    t45 = rd16(esi + 0x26u);
    t46 = rd16(esi + 0x24u);
    wr32(sp0 + 4u, t44);
    ebx = ebx + ((t43 - (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u) * 3u & 0xffff0000u) | (uint16_t)(t45 - t46)) + 1u;
    goto L_101eeb42;
L_101eeada: ;
    t39 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u)) >> 0x1fu)) >> 1u);
    t40 = t39 + rd32(sp0 + 4u) - (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
    t41 = rd16(esi + 0x26u);
    t42 = rd16(esi + 0x24u);
    wr32(sp0 + 4u, t40);
    ebx = ebx + (((uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u) & 0xffff0000u) | (uint16_t)(t41 - t42)) + 1u;
    goto L_101eeb42;
L_101eeb16: ;
    t64 = rd32(sp0 + 4u) + ((ecx & 0xffff0000u) | (uint16_t)(rd16(esi + 0x22u) - rd16(esi + 0x20u))) + 2u;
    wr32(sp0 + 4u, t64);
    goto L_101eeb42;
L_101eeb2c: ;
    t65 = rd16(ebp + 0xcu);
    wr16(sp0 + 4u, (uint16_t)(rd16(ebp + 0xau) + rd16(sp0 + 4u)));
    ebx = (loc_8 & 0xffff0000u) | (uint16_t)((uint16_t)loc_8 + (uint16_t)t65);
    goto L_101eeb42;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ee7b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
