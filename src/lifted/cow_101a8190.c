/* f_0x101a8190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a8190(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    unsigned of;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101a81ba;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101a82a5;
    }
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_101a81ba: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 7u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101a8295;
    }
    t4 = rd32(COW_IMG(0x101a8394u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t4 - RD)
    {
    case 0x101a81d0u: goto L_101a81d0;
    case 0x101a8209u: goto L_101a8209;
    case 0x101a8216u: goto L_101a8216;
    case 0x101a824fu: goto L_101a824f;
    case 0x101a82aau: goto L_101a82aa;
    case 0x101a82e7u: goto L_101a82e7;
    case 0x101a8327u: goto L_101a8327;
    case 0x101a835cu: goto L_101a835c;
    default: rt_fatal(g, COW_IMG(0x101a81c9u), "switch");
    }
    return 0;
L_101a81d0: ;
    t52 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
    t53 = rd32(COW_IMG(0x106627ccu));
    eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | t52;
    edx = (in_edx & 0xffffff00u) | 0x14u;
    cf = (uint32_t)(int16_t)arg2 - 1u < 7u;
    of = (((uint32_t)(int16_t)arg2 - 1u ^ 7u) & ((uint32_t)(int16_t)arg2 - 1u ^ (uint32_t)(int16_t)arg2 - 8u)) >> 0x1fu;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    t54 = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + rd8(t53 + 0x20u));
    g->edx = (edx & 0xffffff00u) | rd8(t53 + 0x20u);
    t55 = rd32(self + 0x14u);
    t56 = rd8(t53 + 0x20u);
    g->esp = sp0 - 8u;
    t57 = cow_thiscall(g, COW_IMG(0x101a8a60u), t55, 1, t54);
    t58 = g->ecx;
    t59 = g->edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10134d90u), g->eax, g->ecx, t59, 1, 3, t57, in_edi, in_esi);
    t60 = g->edx;
    t61 = rd32(self + 8u);
    g->edx = t60;
    g->esp = sp0 - 8u;
    t62 = cow_call_regs(g, COW_IMG(0x1015e790u), t61, COW_IMG(0x10621838u), g->edx, 0, 2, t61, 1u);
    t63 = g->edx;
    g->edx = t63;
    return t62;
L_101a8209: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 8u;
    t50 = cow_fastcall(g, COW_IMG(0x101a70a0u), rd32(COW_IMG(0x106627ccu)), in_edx, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
L_101a8295: ;
    t64 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t65 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t64, 1u);
    t66 = g->edx;
    eax = t65;
    edx = t66;
L_101a82a5: ;
    g->edx = edx;
    return eax;
L_101a8216: ;
    t38 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
    t39 = rd32(COW_IMG(0x106627ccu));
    eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | t38;
    edx = (in_edx & 0xffffff00u) | 0x14u;
    cf = (uint32_t)(int16_t)arg2 - 1u < 7u;
    of = (((uint32_t)(int16_t)arg2 - 1u ^ 7u) & ((uint32_t)(int16_t)arg2 - 1u ^ (uint32_t)(int16_t)arg2 - 8u)) >> 0x1fu;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    t40 = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + rd8(t39 + 0x20u));
    g->edx = (edx & 0xffffff00u) | rd8(t39 + 0x20u);
    t41 = rd32(self + 0x14u);
    t42 = rd8(t39 + 0x20u);
    g->esp = sp0 - 8u;
    t43 = cow_thiscall(g, COW_IMG(0x101a8a40u), t41, 1, t40);
    t44 = g->ecx;
    t45 = g->edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x101a7440u), g->eax, t44, t45, 1, 3, t43, in_edi, in_esi);
    t46 = g->edx;
    t47 = rd32(self + 8u);
    g->edx = t46;
    g->esp = sp0 - 8u;
    t48 = cow_call_regs(g, COW_IMG(0x1015e790u), t47, COW_IMG(0x10621838u), g->edx, 0, 2, t47, 1u);
    t49 = g->edx;
    g->edx = t49;
    return t48;
L_101a824f: ;
    g->eax = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    g->edx = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u) * 5u;
    t29 = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    t30 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
    g->esp = sp0 - 0x18u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x115u);
    t32 = g->edx;
    t33 = t29 + t30 * 0x14u;
    g->edx = t32;
    g->esp = sp0 - 0x1cu;
    t34 = cow_thiscall(g, COW_IMG(0x101a8a40u), rd32(self + 0x14u), 1, t33);
    t35 = g->edx;
    edx = t35;
    loc_1c = t31;
    loc_20 = t34;
    loc_24 = COW_IMG(0x101a7650u);
L_101a828a: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, loc_24, loc_20, loc_1c, 0u, 0u, 1u, 0u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    goto L_101a8295;
L_101a82aa: ;
    g->eax = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    g->edx = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u) * 5u;
    t22 = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    t23 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
    g->esp = sp0 - 0x18u;
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x116u);
    t25 = g->edx;
    t26 = t22 + t23 * 0x14u;
    g->edx = t25;
    g->esp = sp0 - 0x1cu;
    t27 = cow_thiscall(g, COW_IMG(0x101a8a40u), rd32(self + 0x14u), 1, t26);
    t28 = g->edx;
    edx = t28;
    loc_1c = t24;
    loc_20 = t27;
    loc_24 = COW_IMG(0x101a7690u);
    goto L_101a828a;
L_101a82e7: ;
    g->eax = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    g->edx = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u) * 5u;
    t15 = rd32(rd32(COW_IMG(0x106627ccu)) + 0x20u);
    t16 = rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u);
    g->esp = sp0 - 0x18u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x117u);
    t18 = g->edx;
    t19 = t15 + t16 * 0x14u;
    g->edx = t18;
    g->esp = sp0 - 0x1cu;
    t20 = cow_thiscall(g, COW_IMG(0x101a8a40u), rd32(self + 0x14u), 1, t19);
    t21 = g->edx;
    edx = t21;
    loc_1c = t17;
    loc_20 = t20;
    loc_24 = COW_IMG(0x101a7670u);
    goto L_101a828a;
L_101a8327: ;
    t10 = ((((uint32_t)(int16_t)arg2 - 1u & 0xffff0000u) | rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u)) * 0x14u & 0xffff0000u) | (uint16_t)(rd16(rd32(COW_IMG(0x106627ccu)) + 0x20u) + (uint16_t)((((uint32_t)(int16_t)arg2 - 1u & 0xffff0000u) | rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u)) * 0x14u));
    g->edx = t10;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101a7af0u), 2, t10, 1u);
    t11 = g->edx;
    t12 = rd32(self + 8u);
    g->edx = t11;
    t13 = cow_call_regs(g, COW_IMG(0x1015e790u), t12, COW_IMG(0x10621838u), g->edx, 0, 2, t12, 1u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101a835c: ;
    t5 = ((((uint32_t)(int16_t)arg2 - 1u & 0xffff0000u) | rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u)) * 0x14u & 0xffff0000u) | (uint16_t)(rd16(rd32(COW_IMG(0x106627ccu)) + 0x20u) + (uint16_t)((((uint32_t)(int16_t)arg2 - 1u & 0xffff0000u) | rd8(rd32(COW_IMG(0x106627ccu)) + 0x24u)) * 0x14u));
    g->edx = t5;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101a7df0u), 2, t5, 1u);
    t6 = g->edx;
    t7 = rd32(self + 8u);
    g->edx = t6;
    t8 = cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8190(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
