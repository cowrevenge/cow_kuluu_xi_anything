/* f_0x101fdcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101fdcc0(Guest* g)
{
    double d13;
    double d18;
    double d22;
    double d23;
    double d27;
    double d29;
    double d31;
    double d42;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd8(rd32(sp0 + 4u));
    if (rd32((t1 & 0xfu) * 0x2cu + (t1 >> 4u) * 4u + rd32(rd32(self + 0x20u)) + 0xcu) == 0u) goto L_101fdfbd;
    edx = rd32(rd32(self + 0x20u));
    ebp = rd32((t1 & 0xfu) * 0x2cu + (t1 >> 4u) * 4u + rd32(rd32(self + 0x20u)) + 0xcu);
    t2 = rd32(sp0 + 0x10u) * 4u;
    t3 = rd32(sp0 + 0x10u);
    wr32(sp0 + 4u, t2);
    if (!(t3 & 1u))
    {
        eax = t3;
        ebx = t2;
        t11 = (uint32_t)(int16_t)rd16(ebp + 0x22u) - (uint32_t)(int16_t)rd16(ebp + 0x20u);
        t12 = rd16(ebp + 0x20u);
        wr32(sp0 + 0x10u, t11);
        g->edx = (uint32_t)(int16_t)t12;
        d13 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10385128u) + ebx));
        fpush(g, d13);
        g->esp = sp0 - 0x10u;
        t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t15 = g->edx;
        t16 = (uint32_t)(int16_t)rd16(ebp + 0x26u) - (uint32_t)(int16_t)rd16(ebp + 0x24u);
        t17 = rd16(ebp + 0x24u);
        wr32(sp0 + 0x10u, t16);
        eax = t16;
        ecx = (uint32_t)(int16_t)t17;
        edx = t15;
        edi = t14;
        x0 = (double)(int32_t)rd32(sp0 + 0x10u);
    }
    else
    {
        ebx = t2;
        t4 = (uint32_t)(int16_t)rd16(ebp + 0x26u) - (uint32_t)(int16_t)rd16(ebp + 0x24u);
        t5 = rd16(ebp + 0x24u);
        wr32(sp0 + 0x10u, t4);
        g->ecx = (uint32_t)(int16_t)t5;
        d6 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10385128u) + ebx));
        fpush(g, d6);
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
        t8 = g->ecx;
        t9 = (uint32_t)(int16_t)rd16(ebp + 0x22u) - (uint32_t)(int16_t)rd16(ebp + 0x20u);
        t10 = rd16(ebp + 0x20u);
        wr32(sp0 + 0x10u, t9);
        eax = (uint32_t)(int16_t)t10;
        ecx = t8;
        edx = t9;
        edi = t7;
        x0 = (double)(int32_t)rd32(sp0 + 0x10u);
    }
    d18 = fr(g, x0 * (double)rdf32(COW_IMG(0x10385138u) + ebx));
    fpush(g, d18);
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    if (rd32(sp0 + 0x14u) - 1u > 3u)
    {
        ebx = t19;
        goto L_101fdf82;
    }
    eax = rd32(sp0 + 0x14u) - 1u;
    edx = rd32(sp0 + 0x14u);
    ebx = t19;
    t20 = rd32(COW_IMG(0x101fdfc4u) + eax * 4u);
    switch (t20 - RD)
    {
    case 0x101fdd8au: goto L_101fdd8a;
    case 0x101fddd6u: goto L_101fddd6;
    case 0x101fde66u: goto L_101fde66;
    case 0x101fde7du: goto L_101fde7d;
    default: rt_fatal(g, COW_IMG(0x101fdd83u), "switch");
    }
    return;
L_101fdd8a: ;
    t61 = ((uint32_t)(int16_t)rd16(self + 0x1cu) << 0x18u) + 0x808080u;
    t62 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    t63 = ebx + rd32(sp0 + 0xcu) * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2eu) - 2u;
    t64 = edi + rd32(sp0 + 8u) * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2cu) - 2u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t64, t63, t62, t61, 0u);
    return;
L_101fddd6: ;
    t49 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    t50 = rd32(sp0 + 0xcu) * 0x18u;
    t51 = rd32(sp0 + 8u);
    t52 = rd32(sp0 + 0xcu);
    t53 = rd16(self + 0x2eu);
    wr32(sp0 + 0xcu, t50);
    t54 = ebx + t52 * 0x18u + (uint32_t)(int16_t)t53 + 3u;
    t55 = rd16(self + 0x2cu);
    wr32(sp0 + 8u, t51 * 0x18u);
    t56 = edi + t51 * 0x18u + (uint32_t)(int16_t)t55 + 3u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t56, t54, t49, 0x40303030u, 0u);
    t57 = ((uint32_t)(int16_t)rd16(self + 0x1cu) << 0x18u) + 0x808080u;
    t58 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    t59 = ebx + rd32(sp0 + 0xcu) + (uint32_t)(int16_t)rd16(self + 0x2eu) - 4u;
    t60 = edi + rd32(sp0 + 8u) + (uint32_t)(int16_t)rd16(self + 0x2cu) - 4u;
    cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t60, t59, t58, t57, 0u);
    return;
L_101fde66: ;
    t48 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    loc_18 = 0x50808080u;
    loc_1c = t48;
L_101fdf94: ;
    t66 = ebx + rd32(sp0 + 0xcu) * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2eu);
    t67 = edi + rd32(sp0 + 8u) * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2cu);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t67, t66, loc_1c, loc_18, 0u);
L_101fdfbd: ;
    return;
L_101fde7d: ;
    if ((int16_t)rd16(self + 0x1au) < 96) goto L_101fdf79;
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
    t21 = (uint32_t)(int16_t)eax - 0x60u;
    wr32(sp0 + 0x10u, t21);
    d22 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032b088u)));
    wrf32(sp0 + 0x10u, (float)d22);
    g->ecx = t21;
    g->edx = edx;
    d23 = fr(g, fr(g, d22 * (double)rdf32(COW_IMG(0x1032cfdcu))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d23);
    g->esp = sp0 - 0x10u;
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(sp0 + 0x14u, t24);
    t28 = rd32(sp0 + 0xcu) * 0x18u;
    d29 = fr(g, d27 - (double)rdf32(sp0 + 0x10u));
    wr32(sp0 + 0xcu, t28);
    t30 = rd32(sp0 + 8u) * 0x18u;
    d31 = fr(g, d29 * (double)rdf32(COW_IMG(0x1033aaf4u)));
    wr32(sp0 + 8u, t30);
    fpush(g, d31);
    g->esp = sp0 - 0x14u;
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
    t33 = 0x808080u - (t32 << 0x18u);
    t34 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    t35 = ebx + rd32(sp0 + 0xcu) + (uint32_t)(int16_t)rd16(self + 0x2eu) - rd32(sp0 + 0x14u);
    t36 = edi + rd32(sp0 + 8u) + (uint32_t)(int16_t)rd16(self + 0x2cu) - rd32(sp0 + 0x14u);
    g->eax = rd32(sp0 + 0x14u);
    g->edx = rd32(sp0 + 8u);
    t37 = rd32(sp0 + 0x14u);
    t38 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t36, t35, t34, t33, 0u);
    t40 = g->ecx;
    t41 = g->edx;
    d42 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1033aaf4u)));
    fpush(g, d42);
    g->esp = sp0 - 0x14u;
    t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), t39, g->ecx, g->edx, 1, 0);
    t44 = 0x808080u - (t43 << 0x18u);
    t45 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    t46 = ebx + rd32(sp0 + 0xcu) + (uint32_t)(int16_t)rd16(self + 0x2eu);
    t47 = edi + rd32(sp0 + 8u) + (uint32_t)(int16_t)rd16(self + 0x2cu);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011ff00u), ebp, 5, t47, t46, t45, t44, 0u);
    return;
L_101fdf79: ;
    loc_18 = 0x50808080u;
L_101fdf89: ;
    t65 = rd32(COW_IMG(0x10385118u) + rd32(sp0 + 4u));
    loc_1c = t65;
    goto L_101fdf94;
L_101fdf82: ;
    loc_18 = 0x80808080u;
    goto L_101fdf89;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fdcc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fdcc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
