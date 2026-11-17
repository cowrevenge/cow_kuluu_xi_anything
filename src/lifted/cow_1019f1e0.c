/* f_0x1019f1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019f1e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 2u, 1u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x14u, COW_IMG(0x103798f4u));
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798f4u));
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1019f375;
    }
    eax = t4;
    edx = t5;
    wr32(sp0 - 0x14u, COW_IMG(0x10379908u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x10379908u));
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_1019f375;
    }
    eax = t6;
    edx = t7;
    wr32(sp0 - 0x14u, COW_IMG(0x1037a898u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a898u));
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
        goto L_1019f2a1;
    }
    edx = t9;
    if (rd32(rd32(self + 0x2cu) + 0x2cu) > 4u) goto L_1019f31c;
    eax = rd32(rd32(self + 0x2cu) + 0x2cu);
    ecx = rd32(self + 0x2cu);
    t10 = rd32(COW_IMG(0x1019f470u) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x1019f267u: goto L_1019f267;
    case 0x1019f284u: goto L_1019f284;
    case 0x1019f31cu: goto L_1019f31c;
    default: rt_fatal(g, COW_IMG(0x1019f260u), "switch");
    }
    return 0;
L_1019f267: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x101aec20u), ecx, 0);
    eax = t13;
L_1019f26c: ;
    if ((uint8_t)eax == 0u)
    {
        ecx = rd32(rd32(rd32(self + 0x24u)) + 0x1cu);
    }
    else
    {
        ecx = rd32(rd32(rd32(self + 0x24u)) + 0x3cu);
    }
L_1019f2cb: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t21 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t21);
    t22 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t22);
    eax = t22;
    edx = t21;
    loc_20 = t21;
    loc_24 = t22;
L_1019f2de: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_24, loc_20, 0x80808080u, 0u, 0u);
    t24 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t25 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t25);
    t26 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t26);
    g->eax = t26;
    g->edx = rd32(rd32(self + 0x24u));
    t27 = rd32(rd32(self + 0x24u));
    t28 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t27 + 0x14u), 5, t26, t25, 0x80808080u, 0u, 0u);
    t29 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t29;
    return t28;
L_1019f284: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t12);
    eax = rd32(rd32(self + 0x24u));
    ecx = rd32(rd32(rd32(self + 0x24u)) + 0x18u);
    edx = rd32(self + 0x24u);
    loc_20 = t11;
    loc_24 = t12;
    goto L_1019f2de;
L_1019f2a1: ;
    g->eax = rd32(rd32(self + 0x14u));
    t14 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, rd32(t14 + 0x48u), rd32(self + 0x14u), 0);
    if ((uint8_t)t15 == 0u) goto L_1019f31c;
    eax = t15;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t16 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, rd32(t16 + 0x50u), rd32(self + 0x14u), 0);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u) goto L_1019f2c3;
    edx = t18;
    g->eax = rd32(rd32(self + 0x14u));
    t19 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, rd32(t19 + 0x4cu), rd32(self + 0x14u), 0);
    eax = t20;
    goto L_1019f26c;
L_1019f2c3: ;
    ecx = rd32(rd32(rd32(self + 0x24u)) + 0x18u);
    goto L_1019f2cb;
L_1019f31c: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t30 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t30);
    t31 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t31);
    g->eax = rd32(rd32(self + 0x24u));
    g->edx = rd32(self + 0x24u);
    t32 = rd32(rd32(self + 0x24u));
    t33 = rd32(self + 0x24u);
    g->esp = sp0 - 0x10u;
    t34 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t32 + 0x18u), 5, t31, t30, 0x80808080u, 0u, 0u);
    t35 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t36 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t36);
    t37 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t37);
    g->eax = t37;
    g->edx = rd32(rd32(self + 0x24u));
    t38 = rd32(rd32(self + 0x24u));
    t39 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t38 + 0x10u), 5, t37, t36, 0x80808080u, 0u, 0u);
    t40 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t40;
    return t39;
L_1019f375: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x10191a40u), rd32(self + 0x28u), 0);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u) goto L_1019f417;
    eax = t41;
    edx = t42;
    if (rd32(rd32(self + 0x28u) + 4u) != 0xeu)
    {
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        t46 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x20u, t46);
        t47 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x24u, t47);
        eax = rd32(self + 0x24u);
        ecx = rd32(rd32(rd32(self + 0x24u)) + 0x18u);
        edx = t47;
        loc_20 = t46;
        loc_24 = t47;
    }
    else
    {
        ecx = rd32(self + 0x28u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t43 = cow_thiscall(g, COW_IMG(0x10191aa0u), ecx, 0);
        if ((uint8_t)t43 == 0u)
        {
            ecx = rd32(rd32(rd32(self + 0x24u)) + 0x1cu);
        }
        else
        {
            ecx = rd32(rd32(rd32(self + 0x24u)) + 0x3cu);
        }
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        t44 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x20u, t44);
        t45 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x24u, t45);
        eax = t45;
        edx = t44;
        loc_20 = t44;
        loc_24 = t45;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_24, loc_20, 0x80808080u, 0u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t49 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t49);
    t50 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t50);
    g->eax = rd32(rd32(self + 0x24u));
    g->edx = rd32(self + 0x24u);
    t51 = rd32(rd32(self + 0x24u));
    t52 = rd32(self + 0x24u);
    t53 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t51 + 0x14u), 5, t50, t49, 0x80808080u, 0u, 0u);
    t54 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t54;
    return t53;
L_1019f417: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t55 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t55);
    t56 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t56);
    g->eax = rd32(self + 0x24u);
    t57 = rd32(self + 0x24u);
    g->esp = sp0 - 0x10u;
    t58 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(t57) + 0x18u), 5, t56, t55, 0x80808080u, 0u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t59 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t59);
    t60 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t60);
    g->eax = rd32(rd32(self + 0x24u));
    g->edx = rd32(self + 0x24u);
    t61 = rd32(rd32(self + 0x24u));
    t62 = rd32(self + 0x24u);
    t63 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t61 + 0x10u), 5, t60, t59, 0x80808080u, 0u, 0u);
    t64 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t64;
    return t63;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f1e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
