/* f_0x10248e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10248e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, COW_IMG(0x1034f2d0u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, t1, COW_IMG(0x1034f2d0u), in_ebx, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        ebx = t2;
        goto L_10248e71;
    }
    eax = t2;
    return eax;
L_10248e71: ;
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
L_10248e7f: ;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xcu, 1u, 4u, ebx, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)rd32(sp0 - 0xcu) > 1179011410)
    {
        eax = rd32(sp0 - 0xcu);
        ecx = t4;
        edx = t5;
        goto L_10249054;
    }
    eax = rd32(sp0 - 0xcu);
    ecx = t4;
    edx = t5;
    zf = rd32(sp0 - 0xcu) == 0x46464952u;
    if (zf) goto L_1024900f;
    if (eax == 0x20657563u) goto L_10248f57;
    if (eax != 0x20746d66u) goto L_1024905b;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 + 8u, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t8);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x20u;
    t9 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t8, sp0 + 8u, 1u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_102490d6;
    }
    edx = t11;
    esi = t9;
    wr32(sp0 - 0x1cu, ebx);
    t12 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t12);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, esi, 1u, t12, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t13 = rd8(esi + 3u) << 8u;
    wr32(arg1 + 4u, t13);
    t14 = t13 + rd8(esi + 2u);
    wr32(arg1 + 4u, t14);
    t15 = rd8(esi + 0xfu) << 8u;
    wr32(arg1 + 8u, t15);
    t16 = t15 + rd8(esi + 0xeu);
    wr32(arg1 + 8u, t16);
    t17 = rd8(esi + 7u) << 8u;
    wr32(arg1 + 0xcu, t17);
    t18 = t17 * 0x100u + rd8(esi + 6u) * 0x100u;
    wr32(arg1 + 0xcu, t18);
    wr32(sp0 - 0x2cu, esi);
    t19 = t18 * 0x100u + rd8(esi + 5u) * 0x100u;
    wr32(arg1 + 0xcu, t19);
    t20 = t19 + rd8(esi + 4u);
    wr32(arg1 + 0xcu, t20);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    ecx = t21;
    edx = t22;
L_102490b3: ;
    if (rd32(sp0 - 8u) == 0u) goto L_102490e5;
    eax = rd32(sp0 - 8u);
    t58 = eax - rd32(sp0 + 8u) - 8u;
    wr32(sp0 - 8u, t58);
    if ((int32_t)(eax - rd32(sp0 + 8u) - 8u) > 0)
    {
        loc_8 = t58;
        goto L_10248e7f;
    }
    ecx = 0xfffffff8u - rd32(sp0 + 8u);
L_102490e5: ;
    wr32(sp0 - 0x1cu, ebx);
    g->edi = arg1;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        esi = rd32(arg1 + 0x1cu);
        goto L_10249144;
    }
    esi = rd32(arg1 + 0x1cu);
    t59 = rd32(arg1 + 8u) + ((uint32_t)((int32_t)rd32(arg1 + 8u) >> 0x1fu) & 7u);
    t60 = cow_divs(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t59 >> 3u) * rd32(arg1 + 4u));
    t61 = cow_mods(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t59 >> 3u) * rd32(arg1 + 4u));
    t62 = rd32(arg1 + 0x14u);
    wr32(arg1 + 0x18u, t60);
    if ((int32_t)t62 < (int32_t)rd32(arg1 + 0x10u))
    {
        eax = rd32(arg1 + 0x10u);
        wr32(arg1 + 0x14u, 0xffffffffu);
        wr32(arg1 + 0x10u, 0xffffffffu);
    }
    if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_10249144;
    eax = rd32(arg1 + 0x14u);
    if ((int32_t)rd32(arg1 + 0x18u) >= (int32_t)(eax + 1u))
    {
        zf = rd32(arg1 + 0x18u) == eax + 1u;
        sf = (int32_t)(rd32(arg1 + 0x18u) - (eax + 1u)) < 0;
        of = ((rd32(arg1 + 0x18u) ^ eax + 1u) & (rd32(arg1 + 0x18u) ^ rd32(arg1 + 0x18u) - (eax + 1u))) >> 0x1fu;
        eax = eax + 1u;
        goto L_1024913f;
    }
    ecx = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x14u, ecx - 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return esi;
L_10248f57: ;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t23 = g->edx;
    t24 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t24);
    g->ecx = t24;
    g->edx = t23;
    g->esp = sp0 - 0x20u;
    t25 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t24, sp0 + 8u, 1u);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u)
    {
        ecx = t26;
        edx = t27;
        goto L_102490d6;
    }
    ecx = t26;
    esi = t25;
    wr32(sp0 - 0x1cu, ebx);
    t28 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t28);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t28, 1, 6, esi, 1u, t28, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t29 = rd8(esi + 0xbu) << 8u;
    wr32(sp0 - 0xcu, t29);
    t30 = t29 * 0x100u + rd8(esi + 0xau) * 0x100u;
    wr32(sp0 - 0xcu, t30);
    t31 = t30 * 0x100u + rd8(esi + 9u) * 0x100u;
    wr32(sp0 - 0xcu, t31);
    t32 = t31 + rd8(esi + 8u);
    wr32(sp0 - 0xcu, t32);
    t33 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x10u, t32);
    if (t33 == 0u)
    {
        eax = t32;
        wr32(arg1 + 0x14u, eax + 0x1cu);
    }
    t34 = rd8(esi + 0x23u) << 8u;
    wr32(sp0 - 0xcu, t34);
    t35 = t34 * 0x100u + rd8(esi + 0x22u) * 0x100u;
    wr32(sp0 - 0xcu, t35);
    wr32(sp0 - 0x1cu, esi);
    t36 = t35 * 0x100u + rd8(esi + 0x21u) * 0x100u;
    wr32(sp0 - 0xcu, t36);
    t37 = t36 + rd8(esi + 0x20u);
    wr32(sp0 - 0xcu, t37);
    t38 = rd8(esi + 0x20u);
    wr32(arg1 + 0x14u, t37);
    g->ecx = t35;
    g->edx = t38;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
    t39 = g->ecx;
    t40 = g->edx;
    ecx = t39;
    edx = t40;
    goto L_102490b3;
L_1024900f: ;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    t41 = rd32(sp0 - 8u) + 8u;
    wr32(sp0 - 8u, t41);
    wr32(sp0 + 8u, 4u);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t41, 1, 6, sp0 - 0xcu, 1u, 4u, ebx, sp0 - 8u, 1u);
    t42 = g->ecx;
    t43 = g->edx;
    if (rd32(sp0 - 0xcu) != 0x45564157u)
    {
        ecx = t42;
        edx = t43;
        goto L_1024905b;
    }
    ecx = t42;
    edx = t43;
    t44 = rd32(sp0 - 4u) + 1u;
    wr32(sp0 - 4u, t44);
    loc_4 = t44;
    goto L_102490b3;
L_10249054: ;
    if (eax == 0x61746164u) goto L_10249084;
L_1024905b: ;
    if (rd32(sp0 - 4u) == 0u) goto L_102490d6;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 + 8u, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    t47 = rd32(sp0 + 8u);
    wr32(sp0 - 0x30u, t47);
    wr32(sp0 - 0x34u, ebx);
    g->ecx = t45;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t46, 1, 3, ebx, t47, 1u);
    t48 = g->ecx;
    t49 = g->edx;
    ecx = t48;
    edx = t49;
    goto L_102490b3;
L_10249084: ;
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = sp0 + 8u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t50 = g->ecx;
    wr32(sp0 - 0x2cu, ebx);
    t51 = rd32(sp0 + 8u);
    wr32(arg1 + 0x18u, t51);
    g->ecx = t50;
    g->esp = sp0 - 0x20u;
    t52 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t51, 1, 3, ebx, sp0 + 8u, 1u);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(arg1 + 0x1cu, t52);
    wr32(sp0 - 0x30u, 1u);
    t55 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t55);
    wr32(sp0 - 0x38u, ebx);
    g->ecx = t53;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t54, 1, 3, ebx, t55, 1u);
    t56 = g->ecx;
    t57 = g->edx;
    ecx = t56;
    edx = t57;
    goto L_102490b3;
L_102490d6: ;
    wr32(sp0 - 8u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    goto L_102490e5;
L_1024913f: ;
    if (!(zf || sf != of))
    {
        wr32(arg1 + 0x18u, eax);
    }
L_10249144: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10248e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10248e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
