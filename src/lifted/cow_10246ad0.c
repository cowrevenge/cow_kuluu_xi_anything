/* f_0x10246ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10246ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 4u) >= 2)
    {
        ecx = rd32(sp0 + 4u);
        esi = rd32(sp0 + 0x14u);
        goto L_10246bb8;
    }
    esi = rd32(sp0 + 0x14u);
    t1 = rd32(sp0 + 8u);
    t2 = (uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u);
    wr32(sp0 + 4u, t2);
    eax = t2;
    ebx = arg3;
    ebp = arg4;
    loc_8 = t1 * 2u;
L_10246b0b: ;
    wr32(sp0 + 8u, eax);
    t3 = rd8(ebx) & 0xfu;
    t4 = rd8(ebx);
    wr32(sp0 + 0x14u, t3);
    ebx = ebx + 1u;
    edi = COW_IMG(0x10388bf0u) + (uint32_t)((int32_t)t4 >> 4u) * 8u;
L_10246b27: ;
    t5 = rd32(edi);
    t6 = rd32(esi);
    t7 = rd32(edi + 4u);
    t8 = rd32(esi + 4u);
    t9 = rd8(ebx);
    t10 = rd8(sp0 + 0x14u);
    wr32(esi + 4u, t6);
    t11 = (uint32_t)((int32_t)(t5 * t6 + t7 * t8) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)(t9 << 0xcu) >> ((t10 & 0x1fu) < 0x20u ? t10 & 0x1fu : 0x1fu));
    wr32(esi, t11);
    wr16(ebp, (uint16_t)t11);
    t12 = rd32(edi);
    t13 = rd32(esi);
    t14 = rd32(edi + 4u);
    t15 = rd32(esi + 4u);
    t16 = rd8(ebx);
    t17 = rd8(sp0 + 0x14u);
    wr32(esi + 4u, t13);
    t18 = (uint32_t)((int32_t)(t12 * t13 + t14 * t15) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)((t16 & 0xf0u) << 8u) >> ((t17 & 0x1fu) < 0x20u ? t17 & 0x1fu : 0x1fu));
    t19 = rd32(sp0 + 8u);
    wr32(esi, t18);
    wr16(ebp + 2u, (uint16_t)t18);
    wr32(sp0 + 8u, t19 - 1u);
    if (t19 != 1u)
    {
        ebx = ebx + 1u;
        ebp = ebp + 4u;
        goto L_10246b27;
    }
    ebx = ebx + 1u;
    ebp = ebp + 4u;
    t20 = rd32(sp0 + 0x18u) - loc_8;
    t21 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x18u, t20);
    if ((int32_t)(t21 - loc_8) > 0) goto L_10246b07;
    return;
L_10246b07: ;
    eax = rd32(sp0 + 4u);
    goto L_10246b0b;
L_10246bb8: ;
    t22 = rd32(sp0 + 8u);
    t23 = rd32(sp0 + 8u) * 4u;
    t24 = t22 - (uint32_t)((int32_t)t22 >> 0x1fu);
    t25 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, (uint32_t)((int32_t)t24 >> 1u));
    t26 = ecx * t25 * 2u;
    edx = (uint32_t)((int32_t)t24 >> 1u);
    ebp = arg3;
    edi = arg4;
    loc_8 = t23;
    loc_4 = t26;
L_10246beb: ;
    wr32(sp0 + 8u, edx);
    t27 = rd8(ebp) & 0xfu;
    t28 = rd8(ebp);
    wr32(sp0 + 0x14u, t27);
    eax = COW_IMG(0x10388bf0u) + (uint32_t)((int32_t)t28 >> 4u) * 8u;
    ebp = ebp + 1u;
L_10246c08: ;
    t29 = rd32(eax);
    t30 = rd32(esi);
    t31 = rd32(eax + 4u);
    t32 = rd32(esi + 4u);
    t33 = rd8(ebp);
    t34 = rd8(sp0 + 0x14u);
    wr32(esi + 4u, t30);
    t35 = (uint32_t)((int32_t)(t29 * t30 + t31 * t32) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)(t33 << 0xcu) >> ((t34 & 0x1fu) < 0x20u ? t34 & 0x1fu : 0x1fu));
    wr32(esi, t35);
    wr16(edi, (uint16_t)t35);
    t36 = rd32(eax);
    t37 = rd32(esi);
    t38 = rd32(eax + 4u);
    t39 = rd32(esi + 4u);
    t40 = rd8(ebp);
    t41 = rd8(sp0 + 0x14u);
    wr32(esi + 4u, t37);
    t42 = (uint32_t)((int32_t)(t36 * t37 + t38 * t39) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)((t40 & 0xf0u) << 8u) >> ((t41 & 0x1fu) < 0x20u ? t41 & 0x1fu : 0x1fu));
    t43 = rd32(sp0 + 8u);
    wr32(esi, t42);
    wr16(edi + 4u, (uint16_t)t42);
    wr32(sp0 + 8u, t43 - 1u);
    if (t43 != 1u)
    {
        ebp = ebp + 1u;
        edi = edi + 8u;
        goto L_10246c08;
    }
    ebp = ebp + 1u;
    edi = edi + 8u;
    t44 = rd32(sp0 + 4u);
    t45 = rd8(ebp);
    wr32(sp0 + 8u, t44);
    wr32(sp0 + 0x14u, t45 & 0xfu);
    eax = COW_IMG(0x10388bf0u) + (uint32_t)((int32_t)t45 >> 4u) * 8u;
    ecx = t45 & 0xfu;
    ebp = ebp + 1u;
    edi = edi - loc_8 + 2u;
L_10246cb2: ;
    t46 = rd32(esi + 8u);
    t47 = rd32(eax);
    t48 = rd32(esi + 8u);
    t49 = rd32(eax + 4u);
    t50 = rd32(esi + 0xcu);
    t51 = rd8(ebp);
    wr32(esi + 0xcu, t46);
    t52 = (uint32_t)((int32_t)(t47 * t48 + t49 * t50) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)(t51 << 0xcu) >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
    wr32(esi + 8u, t52);
    wr16(edi, (uint16_t)t52);
    t53 = rd32(esi + 8u);
    t54 = rd32(eax);
    t55 = rd32(esi + 8u);
    t56 = rd32(eax + 4u);
    t57 = rd32(esi + 0xcu);
    t58 = rd8(ebp);
    t59 = rd8(sp0 + 0x14u);
    wr32(esi + 0xcu, t53);
    t60 = (uint32_t)((int32_t)(t54 * t55 + t56 * t57) >> 6u) + (uint32_t)((int32_t)(uint32_t)(int16_t)((t58 & 0xf0u) << 8u) >> ((t59 & 0x1fu) < 0x20u ? t59 & 0x1fu : 0x1fu));
    t61 = rd32(sp0 + 8u);
    wr32(esi + 8u, t60);
    wr16(edi + 4u, (uint16_t)t60);
    wr32(sp0 + 8u, t61 - 1u);
    if (t61 != 1u)
    {
        ebp = ebp + 1u;
        edi = edi + 8u;
        goto L_10246cae;
    }
    ebp = ebp + 1u;
    edi = edi + 8u;
    t62 = rd32(sp0 + 0x18u) - loc_4;
    t63 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x18u, t62);
    if ((int32_t)(t63 - loc_4) > 0)
    {
        edi = edi - 2u;
        goto L_10246be7;
    }
    return;
L_10246be7: ;
    edx = rd32(sp0 + 4u);
    goto L_10246beb;
L_10246cae: ;
    ecx = rd32(sp0 + 0x14u);
    goto L_10246cb2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10246ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
