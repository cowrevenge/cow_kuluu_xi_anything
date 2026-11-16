/* f_0x1019a470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019a470(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        ecx = self;
        edx = in_edx;
        ebx = rd32(self + 0x34u);
        goto L_1019a4c2;
    }
    ebx = rd32(self + 0x34u);
    t1 = rd32(COW_IMG(0x1019a668u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019a48au: goto L_1019a48a;
    case 0x1019a4c2u: eax = (uint32_t)(int16_t)arg1 - 1u; ecx = self; edx = in_edx; goto L_1019a4c2;
    case 0x1019a4d2u: goto L_1019a4d2;
    case 0x1019a4e4u: goto L_1019a4e4;
    case 0x1019a510u: goto L_1019a510;
    case 0x1019a53cu: goto L_1019a53c;
    case 0x1019a5adu: goto L_1019a5ad;
    case 0x1019a5e2u: goto L_1019a5e2;
    default: rt_fatal(g, COW_IMG(0x1019a483u), "switch");
    }
    return 0;
L_1019a48a: ;
    if ((uint32_t)(int16_t)arg2 == 0xfu)
    {
        eax = (uint32_t)(int16_t)arg2 - 0xfu;
        edx = in_edx;
        goto L_1019a533;
    }
    if ((uint32_t)(int16_t)arg2 == 0x10u)
    {
        eax = (uint32_t)(int16_t)arg2 - 0x10u;
        edx = in_edx;
        goto L_1019a507;
    }
    t57 = rd32((uint32_t)(int16_t)arg2 * 8u + rd32(self + 0x3cu) - 8u);
    g->eax = rd32(self + 0x3cu);
    g->ecx = t57;
    g->edx = in_edx;
    t58 = rd32(self + 0x3cu);
    g->esp = sp0 - 0xcu;
    t59 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t57);
    t60 = g->ecx;
    t61 = g->edx;
    if (t59 == 0u)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
    }
    else
    {
        t62 = rd32((uint32_t)(int16_t)arg2 * 8u + rd32(self + 0x3cu) - 4u);
        g->eax = t62;
        g->edx = rd32(self + 0x3cu);
        t63 = rd32(self + 0x3cu);
        g->esp = sp0 - 0xcu;
        t64 = cow_thiscall(g, COW_IMG(0x1019a810u), self, 1, t62);
        t65 = g->ecx;
        t66 = g->edx;
        eax = t64;
        ecx = t65;
        edx = t66;
    }
L_1019a4c2: ;
    if (ebx != rd32(self + 0x34u))
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t73 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t74 = g->edx;
        eax = t73;
        edx = t74;
    }
L_1019a4cc: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019a4d2: ;
    t53 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t54 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 1u, COW_IMG(0x10621838u), g->edx, 0, 2, t53, 1u);
    t55 = g->ecx;
    t56 = g->edx;
    eax = t54;
    ecx = t55;
    edx = t56;
    goto L_1019a4c2;
L_1019a4e4: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x62u, 1u);
        t47 = (in_edx & 0xffff0000u) | rd16(self + 0x4cu);
        t48 = rd32(self + 8u);
        g->edx = t47;
        g->esp = sp0 - 0xcu;
        t49 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t48, g->edx, 0, 2, t47, 0u);
        t50 = g->edx;
        g->edi = t48;
        g->edx = t50;
        t51 = cow_thiscall(g, COW_IMG(0x101186a0u), t48, 0);
        t52 = g->edx;
        eax = t51;
        edx = t52;
    }
L_1019a507: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t67 = cow_thiscall(g, COW_IMG(0x1019a690u), self, 0);
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    goto L_1019a4c2;
L_1019a510: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x62u, 1u);
        t41 = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        t42 = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t43 = cow_call_regs(g, COW_IMG(0x10118db0u), t41, t42, g->edx, 0, 2, t41, 0u);
        t44 = g->edx;
        g->edi = t42;
        g->edx = t44;
        t45 = cow_thiscall(g, COW_IMG(0x101186a0u), t42, 0);
        t46 = g->edx;
        eax = t45;
        edx = t46;
    }
L_1019a533: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t70 = cow_thiscall(g, COW_IMG(0x1019a6c0u), self, 0);
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
    goto L_1019a4c2;
L_1019a53c: ;
    if (rd32(self + 8u) == 0u) goto L_1019a54e;
    eax = rd32(self + 8u);
    if (rd8(eax + 0x62u) == 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(eax + 0x62u);
        edx = in_edx;
        goto L_1019a4c2;
    }
L_1019a54e: ;
    t24 = rd32(rd32(self + 0x3cu) + rd32(self + 0x40u) * 8u + 8u);
    g->eax = t24;
    g->ecx = rd32(self + 0x40u);
    g->edx = rd32(self + 0x3cu);
    t25 = rd32(self + 0x40u);
    t26 = rd32(self + 0x3cu);
    g->esp = sp0 - 0xcu;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t24);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_1019a583;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t30 = g->ecx;
    t31 = rd32(self + 0x40u) + 1u;
    t32 = rd32(self + 8u);
    wr32(self + 0x40u, t31);
    t33 = rd16(t32 + 0x4cu);
    wr16(self + 0x4cu, (uint16_t)t33);
    eax = (t31 & 0xffff0000u) | t33;
    ecx = t30;
    edx = t32;
    goto L_1019a4c2;
L_1019a583: ;
    edi = rd32(self + 8u);
L_1019a586: ;
    t34 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x40u) + 1u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t35 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, t34, 0u);
    t36 = g->edx;
    g->edi = edi;
    t37 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t38 = g->ecx;
    t39 = rd16(rd32(self + 8u) + 0x4cu);
    t40 = rd32(self + 8u);
    wr16(self + 0x4cu, (uint16_t)t39);
    eax = (t37 & 0xffff0000u) | t39;
    ecx = t38;
    edx = t40;
    goto L_1019a4c2;
L_1019a5ad: ;
    if (rd32(self + 8u) == 0u)
    {
        edi = rd32(self + 8u);
        goto L_1019a5bf;
    }
    edi = rd32(self + 8u);
    if (rd8(edi + 0x62u) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(edi + 0x62u);
        ecx = self;
        edx = in_edx;
        goto L_1019a4c2;
    }
L_1019a5bf: ;
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = rd32(self + 0x40u);
        ecx = self;
        edx = in_edx;
        goto L_1019a586;
    }
    eax = rd32(self + 0x40u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t20 = g->ecx;
    t21 = rd32(self + 0x40u) - 1u;
    t22 = rd32(self + 8u);
    wr32(self + 0x40u, t21);
    t23 = rd16(t22 + 0x4cu);
    wr16(self + 0x4cu, (uint16_t)t23);
    eax = (t21 & 0xffff0000u) | t23;
    ecx = t20;
    edx = t22;
    goto L_1019a4c2;
L_1019a5e2: ;
    if ((uint16_t)arg2 == 0xfu) goto L_1019a64a;
    if ((uint16_t)arg2 == 0x10u) goto L_1019a64a;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x62u, 1u);
    }
    t2 = rd32((uint32_t)(int16_t)arg2 * 8u + rd32(self + 0x3cu) - 8u);
    g->eax = eax;
    g->ecx = rd32(self + 0x3cu);
    g->edx = t2;
    t3 = rd32(self + 0x3cu);
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t2);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        t11 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x40u) + 1u);
        t12 = rd32(self + 8u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t13 = cow_call_regs(g, COW_IMG(0x10118db0u), t11, t12, g->edx, 0, 2, t11, 0u);
        t14 = g->edx;
        g->edi = t12;
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x101186a0u), t12, 0);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    else
    {
        ecx = t5;
        edx = t6;
        if (rd32(self + 0x40u) == (uint32_t)(int16_t)arg2 - 1u)
        {
            eax = rd32(self + 0x40u);
        }
        else
        {
            eax = rd32(self + 0x40u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t7 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
            t8 = g->ecx;
            t9 = g->edx;
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        t10 = (uint32_t)(int16_t)arg2 - 1u;
        wr32(self + 0x40u, t10);
    }
    goto L_1019a4c2;
L_1019a64a: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = arg2;
        goto L_1019a4cc;
    }
    ecx = rd32(self + 8u);
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x10118e90u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 0, 1, arg2);
    t19 = g->edx;
    wr8(rd32(self + 8u) + 0x62u, 0u);
    g->edi = in_edi;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019a470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019a470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
