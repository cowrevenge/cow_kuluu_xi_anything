/* f_0x102ee482 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ee482(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_30;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 336u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x138u, in_esi);
    wr32(sp0 - 0x13cu, in_edi);
    t1 = rd32(in_ebx + 0x14u);
    wr32(sp0 - 0x30u, t1);
    t2 = rd32(rd32(in_ebx + 0x14u) + 4u);
    wr32(sp0 - 8u, t2);
    if (rd32(rd32(in_ebx + 0x14u) + 4u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = t1;
        edi = rd32(rd32(in_ebx + 0x14u));
        loc_4 = in_ebp;
        loc_138 = in_esi;
        loc_13c = in_edi;
        loc_30 = t1;
        loc_8 = t2;
        goto L_102ee4ba;
    }
    eax = t2;
    esi = t1;
    loc_30 = t1;
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x140u;
    t3 = cow_thiscall(g, rd32(esi + 0xcu), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_102ee712;
    }
    edx = t4;
    wr32(sp0 - 0xcu, rd32(esi));
    t5 = rd32(esi + 4u);
    wr32(sp0 - 8u, t5);
    ecx = in_ebx;
    edi = rd32(esi);
    loc_4 = rd32(sp0 - 4u);
    loc_138 = rd32(sp0 - 0x138u);
    loc_13c = rd32(sp0 - 0x13cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = t5;
L_102ee4ba: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    t6 = rd8(edi) << 8u;
    wr32(sp0 - 0x10u, t6);
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_10 = t6;
        goto L_102ee4e6;
    }
    eax = t6;
    loc_10 = t6;
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x140u;
    t7 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_102ee712;
    }
    edx = t8;
    wr32(sp0 - 0xcu, rd32(esi));
    t9 = rd32(esi + 4u);
    wr32(sp0 - 8u, t9);
    ecx = in_ebx;
    edi = rd32(esi);
    loc_4 = rd32(sp0 - 4u);
    loc_138 = rd32(sp0 - 0x138u);
    loc_13c = rd32(sp0 - 0x13cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = t9;
    loc_10 = rd32(sp0 - 0x10u);
L_102ee4e6: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    t10 = loc_10 + rd8(edi);
    wr32(sp0 - 0x10u, t10);
    wr32(sp0 - 0x10u, t10 - 2u);
    eax = rd8(edi);
    edi = edi + 1u;
    loc_8 = loc_8 - 1u;
    loc_10 = t10 - 2u;
L_102ee6fa: ;
    if ((int32_t)loc_10 > 0) goto L_102ee4f9;
    wr32(esi + 4u, loc_8);
    wr32(esi, edi);
    eax = (loc_8 & 0xffffff00u) | 1u;
L_102ee70e: ;
    g->esi = loc_138;
    g->edi = loc_13c;
    g->ebp = loc_4;
    return eax;
L_102ee4f9: ;
    if (loc_8 != 0u) goto L_102ee51a;
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x140u;
    t11 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        goto L_102ee712;
    }
    edx = t12;
    wr32(sp0 - 0xcu, rd32(esi));
    t13 = rd32(esi + 4u);
    wr32(sp0 - 8u, t13);
    edi = rd32(esi);
    loc_4 = rd32(sp0 - 4u);
    loc_138 = rd32(sp0 - 0x138u);
    loc_13c = rd32(sp0 - 0x13cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = t13;
    loc_10 = rd32(sp0 - 0x10u);
L_102ee51a: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    t14 = rd8(edi);
    wr32(rd32(in_ebx) + 0x14u, 0x4fu);
    wr32(sp0 - 0x34u, t14);
    t15 = rd32(in_ebx);
    wr32(t15 + 0x18u, t14);
    wr32(sp0 - 0x140u, 1u);
    wr32(sp0 - 0x144u, in_ebx);
    g->eax = rd32(in_ebx);
    g->edx = edx;
    t16 = rd32(in_ebx);
    g->esp = sp0 - 0x144u;
    t17 = cow_thiscall(g, rd32(t16 + 4u), t15, 0);
    t18 = g->edx;
    wr8(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 1u);
    eax = t17;
    ecx = 1u;
    edx = t18;
    edi = edi + 1u;
    loc_18 = 0u;
    loc_14 = 1u;
    loc_8 = rd32(sp0 - 8u);
L_102ee54b: ;
    if (loc_8 != 0u) goto L_102ee56c;
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x140u;
    t19 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        goto L_102ee712;
    }
    edx = t20;
    wr32(sp0 - 0xcu, rd32(esi));
    t21 = rd32(esi + 4u);
    wr32(sp0 - 8u, t21);
    ecx = in_ebx;
    edi = rd32(esi);
    loc_18 = rd32(sp0 - 0x18u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_8 = t21;
L_102ee56c: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    t22 = rd8(edi);
    wr8(loc_14 + sp0 - 0x2cu, (uint8_t)t22);
    t23 = loc_18 + (uint8_t)t22;
    wr32(sp0 - 0x18u, t23);
    wr32(sp0 - 0x14u, loc_14 + 1u);
    wr32(sp0 - 0xcu, edi + 1u);
    if ((int32_t)(loc_14 + 1u) <= 16)
    {
        eax = (uint8_t)t22;
        ecx = (ecx & 0xffffff00u) | t22;
        edi = edi + 1u;
        loc_18 = t23;
        loc_14 = loc_14 + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102ee54b;
    }
    loc_18 = t23;
    loc_c = edi + 1u;
    loc_8 = loc_8 - 1u;
    t24 = rd8(sp0 - 0x2bu);
    t25 = rd32(in_ebx);
    wr32(t25 + 0x18u, t24);
    t26 = rd8(sp0 - 0x2au);
    wr32(t25 + 0x1cu, t26);
    t27 = rd8(sp0 - 0x29u);
    wr32(t25 + 0x20u, t27);
    t28 = rd32(sp0 - 0x10u) - 0x11u;
    wr32(sp0 - 0x10u, t28);
    t29 = rd8(sp0 - 0x28u);
    wr32(t25 + 0x24u, t29);
    t30 = rd8(sp0 - 0x27u);
    wr32(t25 + 0x28u, t30);
    t31 = rd8(sp0 - 0x26u);
    wr32(t25 + 0x2cu, t31);
    t32 = rd8(sp0 - 0x25u);
    wr32(t25 + 0x30u, t32);
    wr32(sp0 - 0x140u, 0x55u);
    t33 = rd8(sp0 - 0x24u);
    wr32(t25 + 0x34u, t33);
    wr32(rd32(in_ebx) + 0x14u, 0x55u);
    wr32(sp0 - 0x140u, 2u);
    wr32(sp0 - 0x144u, in_ebx);
    g->edx = edx;
    g->esp = sp0 - 0x144u;
    cow_thiscall(g, rd32(rd32(in_ebx) + 4u), t33, 0);
    t34 = g->edx;
    t35 = rd8(sp0 - 0x23u);
    t36 = rd32(in_ebx);
    wr32(t36 + 0x18u, t35);
    t37 = rd8(sp0 - 0x22u);
    wr32(t36 + 0x1cu, t37);
    t38 = rd8(sp0 - 0x21u);
    wr32(t36 + 0x20u, t38);
    t39 = rd8(sp0 - 0x20u);
    wr32(t36 + 0x24u, t39);
    t40 = rd8(sp0 - 0x1fu);
    wr32(t36 + 0x28u, t40);
    t41 = rd8(sp0 - 0x1eu);
    wr32(t36 + 0x2cu, t41);
    t42 = rd8(sp0 - 0x1du);
    wr32(t36 + 0x30u, t42);
    t43 = rd8(sp0 - 0x1cu);
    wr32(t36 + 0x34u, t43);
    wr32(rd32(in_ebx) + 0x14u, 0x55u);
    wr32(sp0 - 0x148u, 2u);
    wr32(sp0 - 0x14cu, in_ebx);
    g->edx = t34;
    g->esp = sp0 - 0x14cu;
    cow_thiscall(g, rd32(rd32(in_ebx) + 4u), t43, 0);
    t44 = g->ecx;
    t45 = g->edx;
    if ((int32_t)rd32(sp0 - 0x18u) > 256)
    {
        ecx = t44;
        edx = t45;
        goto L_102ee638;
    }
    eax = rd32(sp0 - 0x18u);
    ecx = t44;
    edx = t45;
    if ((int32_t)eax <= (int32_t)rd32(sp0 - 0x10u)) goto L_102ee647;
L_102ee638: ;
    wr32(rd32(in_ebx) + 0x14u, 0x1cu);
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = rd32(in_ebx);
    g->edx = edx;
    t46 = rd32(in_ebx);
    g->esp = sp0 - 0x140u;
    t47 = cow_thiscall(g, rd32(t46), ecx, 0);
    t48 = g->edx;
    eax = t47;
    ecx = in_ebx;
    edx = t48;
L_102ee647: ;
    if ((int32_t)rd32(sp0 - 0x18u) <= 0)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        goto L_102ee684;
    }
    edi = 0u;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
L_102ee64e: ;
    if (loc_8 != 0u) goto L_102ee66c;
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x140u;
    t49 = cow_thiscall(g, rd32(esi + 0xcu), ecx, 0);
    t50 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        eax = t49;
        goto L_102ee712;
    }
    edx = t50;
    wr32(sp0 - 0xcu, rd32(esi));
    t51 = rd32(esi + 4u);
    wr32(sp0 - 8u, t51);
    ecx = in_ebx;
    loc_c = rd32(esi);
    loc_8 = t51;
L_102ee66c: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 - 0xcu, loc_c + 1u);
    t52 = rd8(loc_c);
    wr8(edi + sp0 - 0x134u, (uint8_t)t52);
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x18u))
    {
        eax = (loc_c & 0xffffff00u) | t52;
        edi = edi + 1u;
        loc_c = loc_c + 1u;
        loc_8 = loc_8 - 1u;
        goto L_102ee64e;
    }
    loc_c = loc_c + 1u;
    loc_8 = loc_8 - 1u;
L_102ee684: ;
    t53 = rd32(sp0 - 0x10u) - rd32(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t53);
    if ((rd32(sp0 - 0x34u) & 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x34u);
        loc_10 = t53;
        t55 = eax * 4u + in_ebx + 0xa0u;
        wr32(sp0 - 0x14u, t55);
        ecx = t55;
        edi = t55;
        loc_14 = t55;
    }
    else
    {
        eax = rd32(sp0 - 0x34u);
        loc_10 = t53;
        t54 = eax * 4u + in_ebx + 0x70u;
        wr32(sp0 - 0x14u, t54);
        eax = eax - 0x10u;
        edi = t54;
        loc_14 = t54;
    }
    if ((int32_t)eax < 0) goto L_102ee6b5;
    if ((int32_t)eax < 4) goto L_102ee6c9;
L_102ee6b5: ;
    wr32(rd32(in_ebx) + 0x14u, 0x1du);
    t56 = rd32(in_ebx);
    wr32(t56 + 0x18u, eax);
    wr32(sp0 - 0x140u, in_ebx);
    g->eax = rd32(in_ebx);
    g->edx = edx;
    t57 = rd32(in_ebx);
    g->esp = sp0 - 0x140u;
    t58 = cow_thiscall(g, rd32(t57), t56, 0);
    t59 = g->edx;
    eax = t58;
    ecx = in_ebx;
    edx = t59;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102ee6c9: ;
    if (rd32(edi) == 0u)
    {
        wr32(sp0 - 0x140u, in_ebx);
        g->eax = eax;
        g->esp = sp0 - 0x13cu;
        t60 = cow_call_regs(g, COW_IMG(0x102f6946u), g->eax, g->ecx, edx, 1, 1, in_ebx);
        t61 = g->edx;
        wr32(edi, t60);
        edx = t61;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    t62 = rd32(edi);
    esi = sp0 - 0x2cu;
    edi = t62;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x140u, 0x40u);
    esi = sp0 - 0x134u;
    edi = rd32(loc_14) + 0x11u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = loc_14;
    esi = rd32(sp0 - 0x30u);
    edi = loc_c;
    loc_4 = rd32(sp0 - 4u);
    loc_138 = rd32(sp0 - 0x138u);
    loc_13c = rd32(sp0 - 0x13cu);
    loc_30 = rd32(sp0 - 0x30u);
    goto L_102ee6fa;
L_102ee712: ;
    eax = eax & 0xffffff00u;
    loc_4 = rd32(sp0 - 4u);
    loc_138 = rd32(sp0 - 0x138u);
    loc_13c = rd32(sp0 - 0x13cu);
    goto L_102ee70e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ee482(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ee482(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
