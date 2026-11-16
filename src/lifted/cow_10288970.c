/* f_0x10288970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10288970(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = rd32(COW_IMG(0x109a2788u));
        esi = rd32(sp0 + 8u);
    }
    else
    {
        edx = rd32(COW_IMG(0x109a2788u));
        esi = rd32(sp0 + 8u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t3, COW_IMG(0x103b90b0u), t1, esi, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, esi, in_edi, in_esi);
    t7 = g->edx;
    t8 = rd32(arg1 + 0x38u);
    t9 = rd32(arg1 + 0x34u);
    t10 = rd32(arg1 + 0x38u);
    wr32(sp0 + 8u, t8);
    if ((int32_t)t10 > (int32_t)t9)
    {
        ecx = t9;
        edx = t7;
        esi = t6;
    }
    else
    {
        ecx = t9;
        edx = t7;
        esi = t6;
        wr32(sp0 + 8u, ecx);
    }
    if ((int32_t)rd32(sp0 + 8u) <= 0) goto L_10288b73;
    ebx = 0u;
L_102889c5: ;
    wr32(ebx * 4u + rd32(arg1 + 0x2cu), esi);
    if (rd32(esi) == 0xf0001u) goto L_10288aa1;
    eax = rd32(esi) - 0xf0001u;
    if (eax == 1u) goto L_10288a41;
    eax = eax - 1u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        goto L_10288b79;
    }
    t11 = rd32(esi + 0x60u);
    wr32(esi + 8u, COW_IMG(0x10299300u));
    wr32(esi + 0xcu, COW_IMG(0x10299310u));
    wr32(esi + 0x10u, COW_IMG(0x102993b0u));
    g->ecx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t11, in_edi, in_esi);
    t13 = g->ecx;
    t14 = rd32(esi + 0x64u);
    wr32(esi + 0x60u, t12);
    g->ecx = t13;
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t14, arg1, t11);
    t16 = g->ecx;
    wr32(esi + 0x64u, t15);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = t16;
        edx = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        ecx = t16;
        edx = rd32(COW_IMG(0x109a2788u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t18 = g->ecx;
        t19 = g->edx;
        g->ebx = ebx;
        g->ecx = t18;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, t19, COW_IMG(0x103b9094u), t17, ebx, in_edi);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    esi = esi + 0x6cu;
L_10288b66: ;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 + 8u))
    {
        ebx = ebx + 1u;
        goto L_102889c5;
    }
L_10288b73: ;
    g->ebx = in_ebx;
    return esi;
L_10288a41: ;
    t22 = rd32(esi + 0x50u);
    wr32(esi + 8u, COW_IMG(0x10298ef0u));
    wr32(esi + 0xcu, COW_IMG(0x10298f00u));
    wr32(esi + 0x10u, COW_IMG(0x10298fc0u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t22, in_edi, in_esi);
    t24 = g->edx;
    t25 = rd32(esi + 0x54u);
    wr32(esi + 0x50u, t23);
    g->ecx = t25;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t25, arg1, t22);
    t27 = g->ecx;
    wr32(esi + 0x54u, t26);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = t27;
        edx = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        ecx = t27;
        edx = rd32(COW_IMG(0x109a2788u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t28 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t29 = g->ecx;
        t30 = g->edx;
        g->ebx = ebx;
        g->ecx = t29;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t30, 1, 5, t30, COW_IMG(0x103b9074u), t28, ebx, in_edi);
        t31 = g->ecx;
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    }
    esi = esi + 0x16cu;
    goto L_10288b66;
L_10288aa1: ;
    t33 = rd32(esi + 0x4cu);
    wr32(esi + 8u, COW_IMG(0x102908f0u));
    wr32(esi + 0xcu, COW_IMG(0x10290900u));
    wr32(esi + 0x10u, COW_IMG(0x10290aa0u));
    g->ecx = ecx;
    g->edx = t33;
    g->esp = sp0 - 4u;
    t34 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t33, in_edi, in_esi);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(esi + 0x4cu, t34);
    t37 = rd32(esi + 0x50u);
    g->edx = t36;
    g->esp = sp0 - 0xcu;
    t38 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t37, arg1, t33);
    t39 = g->edx;
    t40 = rd32(esi + 0x54u);
    wr32(esi + 0x50u, t38);
    g->ecx = t40;
    g->esp = sp0 - 0x14u;
    t41 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t40, arg1, t37);
    t42 = g->ecx;
    t43 = rd32(esi + 0x58u);
    wr32(esi + 0x54u, t41);
    g->ecx = t42;
    g->edx = t43;
    g->esp = sp0 - 0x1cu;
    t44 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t43, arg1, t40);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(esi + 0x58u, t44);
    t47 = rd32(esi + 0x5cu);
    g->edx = t46;
    g->esp = sp0 - 0x24u;
    t48 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t47, arg1, t43);
    t49 = g->edx;
    t50 = rd32(esi + 0x60u);
    wr32(esi + 0x5cu, t48);
    g->ecx = t50;
    g->esp = sp0 - 0x2cu;
    t51 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t50, arg1, t47);
    t52 = g->ecx;
    t53 = rd32(esi + 0x64u);
    wr32(esi + 0x60u, t51);
    g->ecx = t52;
    g->edx = t53;
    g->esp = sp0 - 0x34u;
    t54 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t53, arg1, t50);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(esi + 0x64u, t54);
    t57 = rd32(esi + 0xacu);
    g->edx = t56;
    g->esp = sp0 - 0x3cu;
    t58 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t57, arg1, t53);
    t59 = g->edx;
    t60 = rd32(esi + 0xb0u);
    wr32(esi + 0xacu, t58);
    g->ecx = t60;
    g->esp = sp0 - 4u;
    t61 = cow_cdecl(g, COW_IMG(0x10288b90u), 4, arg1, t60, in_edi, in_esi);
    t62 = g->ecx;
    wr32(esi + 0xb0u, t61);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = t62;
        edx = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        ecx = t62;
        edx = rd32(COW_IMG(0x109a2788u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t63 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t64 = g->ecx;
        t65 = g->edx;
        g->ebx = ebx;
        g->ecx = t64;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t65, 1, 5, t65, COW_IMG(0x103b9058u), t63, ebx, in_edi);
        t66 = g->ecx;
        t67 = g->edx;
        ecx = t66;
        edx = t67;
    }
    esi = esi + 0x180u;
    goto L_10288b66;
L_10288b79: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9028u), in_edi);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10288970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10288970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
