/* f_0x10013ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10013ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x28u, in_edi);
    if ((uint32_t)(int16_t)rd16(self + 4u) > 3u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        esi = in_esi;
        goto L_10013dce;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    ecx = (self & 0xffff0000u) | rd16(self + 4u);
    t1 = rd32(COW_IMG(0x10013dd8u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10013aedu: goto L_10013aed;
    case 0x10013c7au: goto L_10013c7a;
    case 0x10013d40u: goto L_10013d40;
    case 0x10013d76u: goto L_10013d76;
    default: rt_fatal(g, COW_IMG(0x10013ae6u), "switch");
    }
    return 0;
L_10013aed: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t32 = cow_stdcall(g, COW_IMG(0x1008a0d0u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    cow_call_regs(g, COW_IMG(0x101ab6d0u), g->eax, g->ecx, t34, 1, 0);
    t35 = g->edx;
    g->edx = t35;
    t36 = rd32(COW_IMG(0x103601bcu));
    t37 = cow_thiscall(g, COW_IMG(0x100db100u), t36, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if ((int32_t)t37 < 3)
    {
        eax = t37;
        goto L_10013d95;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t40 = cow_stdcall(g, COW_IMG(0x1001e470u), 0);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    cow_stdcall(g, COW_IMG(0x10081a50u), 0);
    t43 = g->edx;
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, 0x22u);
    t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t44);
    t45 = rd32(t44);
    cow_thiscall(g, rd32(t45 + 0xc8u), t45, 3, t44, 0x22u, 0x80808080u);
    t46 = g->ecx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t46 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
        goto L_10013c1c;
    }
    eax = rd32(COW_IMG(0x1045666cu));
    ecx = (t46 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x8cu);
    t47 = rd32(eax + 0xcu);
    wr32(sp0 - 0x34u, t47);
    g->edx = rd32(t47);
    t48 = rd32(t47);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(t48 + 0xc8u), ecx, 3, t47, 0x8cu, 0u);
    t49 = g->edx;
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, 0x23u);
    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t50);
    cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(t50), 3, t50, 0x23u, 3u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_10013b71: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x30u);
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
L_10013b7e: ;
    eax = rd32(COW_IMG(0x1045666cu));
L_10013b83: ;
    wr32(sp0 - 0x24u, 0x42a00000u);
    wr32(sp0 - 0x20u, 0x42c80000u);
    wr32(sp0 - 0x2cu, 0x42a00000u);
    wr32(sp0 - 0x30u, 0x24u);
    t58 = rd32(eax + 0xcu);
    wr32(sp0 - 0x34u, t58);
    wr32(sp0 - 0x1cu, 0u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xc8u), 0x42a00000u, 3, t58, 0x24u, 0x42a00000u);
    wr32(sp0 - 0x2cu, 0x42c80000u);
    wr32(sp0 - 0x30u, 0x25u);
    t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t59);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t59, 0x25u, 0x42c80000u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x26u);
    t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t60);
    g->eax = t60;
    g->edx = 0u;
    t61 = cow_thiscall(g, rd32(rd32(t60) + 0xc8u), rd32(t60), 3, t60, 0x26u, 0u);
    t62 = g->edx;
    wr32(sp0 - 0x2cu, 0x80000000u);
    g->edx = t62;
    t63 = rd32(COW_IMG(0x1045666cu));
    t64 = cow_thiscall(g, COW_IMG(0x10009670u), t63, 1, 0x80000000u);
    t65 = g->ecx;
    t66 = g->edx;
    g->edi = self;
    cow_fastcall(g, COW_IMG(0x10163640u), t65, t66, 0);
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1045694cu)));
    g->edx = t68;
    t69 = rd32(COW_IMG(0x1045694cu));
    t70 = cow_cdecl(g, COW_IMG(0x10245620u), 1, t69);
    t71 = g->edx;
    wr32(COW_IMG(0x1045694cu), 1u);
    t72 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->edi = rd32(sp0 - 0x28u);
    return t72 & 0xffffff00u;
L_10013c1c: ;
    if (rd8(eax + 0x92eu) == 0u) goto L_10013b83;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x92eu);
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, 0x8cu);
    t51 = rd32(eax + 0xcu);
    wr32(sp0 - 0x34u, t51);
    g->edx = rd32(t51);
    t52 = rd32(t51);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(t52 + 0xc8u), ecx, 3, t51, 0x8cu, 3u);
    t53 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x23u);
    t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t54);
    g->edx = t53;
    t55 = rd32(t54);
    cow_thiscall(g, rd32(t55 + 0xc8u), t55, 3, t54, 0x23u, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t57;
        goto L_10013b71;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (t56 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x30u);
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    goto L_10013b7e;
L_10013c7a: ;
    if (rd32(self + 0x50u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x50u);
        if (rd32(COW_IMG(0x10631f24u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x10631f24u));
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x2cu, eax + 0x44u);
            wr32(sp0 - 0x30u, sp0 - 0x18u);
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x18u, eax + 0x44u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, 0x42c80000u);
            t7 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x34u, t7);
            t8 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x38u, t8);
            t9 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x3cu, t9);
            g->eax = t7;
            g->edx = t9;
            t10 = cow_thiscall(g, COW_IMG(0x101813f0u), rd32(COW_IMG(0x10631f24u)), 5, t9, t8, t7, 0x42c80000u, sp0 - 8u);
            t11 = g->edx;
            g->edx = t11;
            t12 = cow_thiscall(g, COW_IMG(0x10179390u), rd32(COW_IMG(0x10631f24u)), 0);
            t13 = g->edx;
            g->edx = t13;
            t14 = rd32(COW_IMG(0x10631f24u));
            cow_thiscall(g, COW_IMG(0x10179410u), t14, 0);
            t15 = g->ecx;
            t16 = g->edx;
            ecx = t15;
            edx = t16;
        }
    }
    wr32(sp0 - 0x2cu, in_esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t17 = cow_stdcall(g, COW_IMG(0x10245b80u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t19;
        zf = t17 == 0u;
        sf = (int32_t)t17 < 0;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        esi = t17;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t20 = cow_stdcall(g, COW_IMG(0x101ab720u), 0);
        t21 = g->ecx;
        t22 = g->edx;
        g->edx = t22;
        t23 = cow_stdcall(g, COW_IMG(0x10245bc0u), 0);
        t24 = g->edx;
        if ((int32_t)esi >= 0)
        {
            eax = t23;
            edx = t24;
            zf = esi == 0u;
            sf = (int32_t)esi < 0;
        }
        else
        {
            eax = t23;
            edx = t24;
            wr32(COW_IMG(0x10669014u), 0u);
            if (esi == 0xfffffffeu)
            {
                wr32(sp0 - 0x30u, 0u);
                g->edx = edx;
                t25 = rd32(COW_IMG(0x103601bcu));
                g->esp = sp0 - 0x2cu;
                t26 = cow_thiscall(g, COW_IMG(0x100dbb50u), t25, 1, 0u);
                t27 = g->ecx;
                t28 = g->edx;
                wr32(sp0 - 0x30u, 2u);
                g->edx = t28;
                t29 = cow_cdecl(g, COW_IMG(0x10016400u), 1, 2u);
                t30 = g->edx;
                eax = t29;
                edx = t30;
            }
            wr32(self + 0x44u, 0xdu);
            zf = esi == 0u;
            sf = (int32_t)esi < 0;
        }
    }
    if (zf || sf)
    {
        esi = rd32(sp0 - 0x2cu);
        goto L_10013dce;
    }
    esi = rd32(sp0 - 0x2cu);
    wr32(COW_IMG(0x10669014u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t31 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x28u);
    return t31 & 0xffffff00u;
L_10013d40: ;
    wr32(self + 0x334u, 0x80808080u);
    wr32(COW_IMG(0x10456978u), 0x3cu);
    g->eax = 0x80808080u;
    g->esp = sp0 - 0x28u;
    t6 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return t6 & 0xffffff00u;
L_10013d76: ;
    if (rd32(COW_IMG(0x10456978u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456978u));
        goto L_10013dc8;
    }
    eax = rd32(COW_IMG(0x10456978u));
    if (rd32(self + 0x31cu) != 0x80808080u) goto L_10013dba;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t2 = cow_call_regs(g, COW_IMG(0x1001e4b0u), g->eax, g->ecx, in_edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = cow_call_regs(g, COW_IMG(0x10164b80u), g->eax, g->ecx, t4, 1, 0);
    eax = t5;
L_10013d95: ;
    wr32(self + 0x334u, 0x80808080u);
    g->edi = rd32(sp0 - 0x28u);
    return (eax & 0xffffff00u) | 1u;
L_10013dba: ;
    wr16(self + 4u, (uint16_t)(ecx - 1u));
    return eax & 0xffffff00u;
L_10013dc8: ;
    wr32(COW_IMG(0x10456978u), rd32(COW_IMG(0x10456978u)) - 1u);
    esi = in_esi;
L_10013dce: ;
    g->esi = esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10013ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10013ad0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
