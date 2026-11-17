/* f_0x1018f080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1018f080(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(rd32(self + 8u) + 0x56u) > 0)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_1018f2a9;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0x1du)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_1018f2a9;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1018f2b0u) + rd8(COW_IMG(0x1018f2dcu) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x1018f0afu: goto L_1018f0af;
    case 0x1018f0c7u: goto L_1018f0c7;
    case 0x1018f103u: goto L_1018f103;
    case 0x1018f12fu: goto L_1018f12f;
    case 0x1018f1adu: goto L_1018f1ad;
    case 0x1018f1d9u: ecx = rd8(COW_IMG(0x1018f2dcu) + eax); goto L_1018f1d9;
    case 0x1018f20eu: ecx = rd8(COW_IMG(0x1018f2dcu) + eax); goto L_1018f20e;
    case 0x1018f243u: goto L_1018f243;
    case 0x1018f257u: goto L_1018f257;
    case 0x1018f299u: goto L_1018f299;
    case 0x1018f2a9u: edx = in_edx; goto L_1018f2a9;
    default: rt_fatal(g, COW_IMG(0x1018f0a8u), "switch");
    }
    return 0;
L_1018f0af: ;
    t62 = rd32(self + 0x14u);
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = rd32(rd32(self + 0x14u));
    t63 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, rd32(t63 + 0xcu), t62, 3, 5u, 0u, (uint32_t)(int16_t)arg2);
    t65 = g->edx;
    g->edx = t65;
    return t64;
L_1018f0c7: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1018f0e9;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1018f2a9;
    if (eax == 3u) goto L_1018f2a9;
L_1018f0e9: ;
    if (eax != 0u) goto L_1018f2a9;
    g->eax = arg2;
    g->edx = rd32(self);
    t59 = rd32(self);
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, rd32(t59 + 0x18u), self, 2, 5u, arg2);
    t61 = g->edx;
    g->edx = t61;
    return t60;
L_1018f103: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t53 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0xc8u);
    t54 = g->edx;
    if ((uint8_t)t53 != 0u)
    {
        eax = t53;
        edx = t54;
        goto L_1018f2a9;
    }
    eax = t53;
    t55 = rd32(self + 0x14u);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t56 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t57 = cow_thiscall(g, rd32(t56 + 0xcu), t55, 3, 1u, 0u, 0u);
    t58 = g->edx;
    g->edx = t58;
    return t57;
L_1018f12f: ;
    if (rd8(self + 0x2201u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2201u);
        edx = in_edx;
        goto L_1018f2a9;
    }
    g->eax = rd32(rd32(self + 0x14u));
    g->edx = in_edx;
    t41 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x10u;
    t42 = cow_thiscall(g, rd32(t41 + 0x1cu), rd32(self + 0x14u), 0);
    t43 = g->edx;
    t44 = cow_thiscall(g, COW_IMG(0x101b4b70u), self + 0x18u, 0);
    wr32(sp0 + 4u, t44);
    t45 = cow_divs(g, t42, 7u);
    t46 = cow_mods(g, t42, 7u);
    if ((int32_t)(t46 + 2u) >= (int16_t)arg2)
    {
        eax = t45;
        edx = t46;
        edi = t46 + 2u;
        zf = t46 + 2u == (uint32_t)(int16_t)arg2;
        sf = (int32_t)(t46 + 2u - (uint32_t)(int16_t)arg2) < 0;
        of = ((t46 + 2u ^ (uint32_t)(int16_t)arg2) & (t46 + 2u ^ t46 + 2u - (uint32_t)(int16_t)arg2)) >> 0x1fu;
        goto L_1018f18a;
    }
    eax = t45;
    edx = t46;
    ebx = t42;
    edi = t46 + 2u;
L_1018f16e: ;
    if ((int32_t)ebx >= (int32_t)rd32(sp0 + 4u)) goto L_1018f188;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t47 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall(g, rd32(t47 + 0xcu), rd32(self + 0x14u), 3, 2u, 0u, 0u);
    t49 = g->edx;
    if ((int32_t)(edi + 1u) < (int16_t)arg2)
    {
        eax = t48;
        edx = t49;
        ebx = ebx + 1u;
        edi = edi + 1u;
        goto L_1018f16e;
    }
    eax = t48;
    edx = t49;
    edi = edi + 1u;
L_1018f188: ;
    zf = edi == (uint32_t)(int16_t)arg2;
    sf = (int32_t)(edi - (uint32_t)(int16_t)arg2) < 0;
    of = ((edi ^ (uint32_t)(int16_t)arg2) & (edi ^ edi - (uint32_t)(int16_t)arg2)) >> 0x1fu;
L_1018f18a: ;
    if (!(zf || sf != of))
    {
        edi = edi - (uint32_t)(int16_t)arg2;
L_1018f18e: ;
        g->eax = rd32(rd32(self + 0x14u));
        g->edx = edx;
        t50 = rd32(rd32(self + 0x14u));
        g->esp = sp0 - 0x10u;
        t51 = cow_thiscall(g, rd32(t50 + 0xcu), rd32(self + 0x14u), 3, 1u, 0u, 0u);
        t52 = g->edx;
        if (edi != 1u)
        {
            edx = t52;
            edi = edi - 1u;
            goto L_1018f18e;
        }
        eax = t51;
        edx = t52;
    }
    wr8(self + 0x2201u, 1u);
    g->edx = edx;
    return eax;
L_1018f1ad: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t35 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0xd0u);
    t36 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        edx = t36;
        goto L_1018f2a9;
    }
    eax = t35;
    t37 = rd32(self + 0x14u);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t38 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t39 = cow_thiscall(g, rd32(t38 + 0xcu), t37, 3, 2u, 0u, 0u);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_1018f1d9: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 1, 0x3eu);
    t27 = g->edx;
    t28 = rd32(self + 0x14u);
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        ecx = t28;
        esi = t28;
        goto L_1018f201;
    }
    ecx = t28;
    edx = t27;
    esi = t28;
    g->eax = rd32(esi);
    g->edx = edx;
    t29 = rd32(esi);
    g->esp = sp0 - 4u;
    t30 = cow_thiscall(g, rd32(t29 + 0xcu), ecx, 3, 3u, 1u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_1018f201: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t32 = rd32(esi);
    g->esp = sp0 - 4u;
    t33 = cow_thiscall(g, rd32(t32 + 0xcu), ecx, 3, 3u, 0u, 0u);
    t34 = g->edx;
    g->edx = t34;
    return t33;
L_1018f20e: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 1, 0x3eu);
    t18 = g->edx;
    t19 = rd32(self + 0x14u);
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        ecx = t19;
        esi = t19;
        goto L_1018f236;
    }
    ecx = t19;
    edx = t18;
    esi = t19;
    g->eax = rd32(esi);
    g->edx = edx;
    t20 = rd32(esi);
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, rd32(t20 + 0xcu), ecx, 3, 4u, 1u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_1018f236: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t23 = rd32(esi);
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, rd32(t23 + 0xcu), ecx, 3, 4u, 0u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_1018f243: ;
    t13 = rd32(self + 0x14u);
    g->eax = rd32(rd32(self + 0x14u));
    g->edx = in_edx;
    t14 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, rd32(t14 + 0xcu), t13, 3, 6u, 0u, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1018f257: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1018f271;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1018f287;
    if (eax == 3u) goto L_1018f287;
L_1018f271: ;
    if (eax != 0u) goto L_1018f287;
    t6 = rd32(self + 0x14u);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t7 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, rd32(t7 + 0xcu), t6, 3, 8u, eax, eax);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1018f287: ;
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, rd32(t10 + 0x18u), self, 2, 5u, arg2);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1018f299: ;
    t2 = rd32(self + 0x14u);
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t3 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0xcu), t2, 3, 7u, 0u, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_1018f2a9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f080(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
