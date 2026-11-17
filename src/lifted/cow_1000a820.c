/* f_0x1000a820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1000a820(Guest* g)
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10009920u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg2 == 0x80808080u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        if ((arg2 & 0xff000000u) != 0x80000000u)
        {
            edi = arg2;
        }
        else
        {
            t4 = (arg2 >> 7u & 0x1fe0000u) * (uint8_t)arg2 & 0xff000000u;
            ecx = t4;
            edi = t4;
        }
        if ((edi & 0xff000000u) <= 0x80000000u)
        {
            eax = rd32(self + 0xcu);
            edx = rd32(rd32(self + 0xcu));
            ebx = edi & 0xff000000u;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(edx + 0xc8u), ecx, 3, eax, 0x13u, 6u);
            t9 = g->edx;
            t10 = rd32(self + 0xcu);
            g->eax = t10;
            g->edx = t9;
            t11 = cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x14u, 5u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
            edi = ebx;
        }
        else
        {
            eax = rd32(self + 0xcu);
            edx = rd32(rd32(self + 0xcu));
            ebx = edi & 0xff000000u;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(edx + 0xc8u), ecx, 3, eax, 0x13u, 5u);
            t5 = g->edx;
            t6 = rd32(self + 0xcu);
            g->eax = t6;
            g->edx = t5;
            t7 = cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 0x14u, 2u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        wr32(COW_IMG(0x1034fe00u), edi);
        wr32(COW_IMG(0x1034fe14u), edi);
        wr32(COW_IMG(0x1034fe28u), edi);
        wr32(COW_IMG(0x1034fe3cu), edi);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t13 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t14 = g->ecx;
        t15 = rd32(t13);
        wrf32(COW_IMG(0x1034fdf0u), (float)(double)(int64_t)cow_i64(t15, 0u));
        g->edx = t15;
        t16 = cow_thiscall(g, COW_IMG(0x10009e00u), t14, 0);
        t17 = g->ecx;
        t18 = g->edx;
        t19 = rd32(t16);
        wrf32(COW_IMG(0x1034fe18u), (float)(double)(int64_t)cow_i64(t19, 0u));
        g->eax = t19;
        g->edx = t18;
        t20 = cow_thiscall(g, COW_IMG(0x10009e00u), t17, 0);
        t21 = g->edx;
        t22 = rd32(t20 + 8u);
        wrf32(COW_IMG(0x1034fe04u), (float)(double)(int64_t)cow_i64(t22, 0u));
        t23 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t24 = g->ecx;
        t25 = rd32(t23 + 8u);
        wrf32(COW_IMG(0x1034fe2cu), (float)(double)(int64_t)cow_i64(t25, 0u));
        g->edx = t25;
        t26 = cow_thiscall(g, COW_IMG(0x10009e00u), t24, 0);
        t27 = g->ecx;
        t28 = g->edx;
        t29 = rd32(t26 + 4u);
        wrf32(COW_IMG(0x1034fdf4u), (float)(double)(int64_t)cow_i64(t29, 0u));
        g->eax = t29;
        g->edx = t28;
        t30 = cow_thiscall(g, COW_IMG(0x10009e00u), t27, 0);
        t31 = g->edx;
        t32 = rd32(t30 + 4u);
        wrf32(COW_IMG(0x1034fe08u), (float)(double)(int64_t)cow_i64(t32, 0u));
        t33 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t34 = g->ecx;
        t35 = rd32(t33 + 0xcu);
        wrf32(COW_IMG(0x1034fe1cu), (float)(double)(int64_t)cow_i64(t35, 0u));
        g->edx = t35;
        t36 = cow_thiscall(g, COW_IMG(0x10009e00u), t34, 0);
        t37 = g->edx;
        t38 = rd32(t36 + 0xcu);
        wrf32(COW_IMG(0x1034fe30u), (float)(double)(int64_t)cow_i64(t38, 0u));
        t39 = rd32(self + 0xcu);
        t40 = rd32(t39);
        cow_thiscall(g, rd32(t40 + 0xc8u), t40, 3, t39, 7u, 0u);
        t41 = g->ecx;
        t42 = rd32(self + 0xcu);
        g->edx = rd32(t42);
        t43 = rd32(t42);
        cow_thiscall(g, rd32(t43 + 0xc8u), t41, 3, t42, 0xeu, 0u);
        t44 = g->edx;
        t45 = rd32(self + 0xcu);
        t46 = rd32(t45);
        cow_thiscall(g, rd32(t46 + 0xc8u), t46, 3, t45, 0x89u, 0u);
        t47 = g->ecx;
        t48 = rd32(self + 0xcu);
        g->edx = rd32(t48);
        t49 = rd32(t48);
        cow_thiscall(g, rd32(t49 + 0xc8u), t47, 3, t48, 0x1cu, 0u);
        t50 = g->edx;
        t51 = rd32(self + 0xcu);
        t52 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t52 + 0xc8u), t52, 3, t51, 0x1bu, 1u);
        t53 = g->ecx;
        t54 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t55 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t55 + 0xfcu), t53, 4, t54, 0u, 1u, 2u);
        t56 = g->edx;
        t57 = rd32(self + 0xcu);
        t58 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t58 + 0xfcu), t58, 4, t57, 0u, 2u, 0u);
        t59 = g->ecx;
        t60 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t61 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t61 + 0xfcu), t59, 4, t60, 0u, 3u, 1u);
        t62 = g->edx;
        t63 = rd32(self + 0xcu);
        t64 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t64 + 0xfcu), t64, 4, t63, 0u, 4u, 2u);
        t65 = g->ecx;
        t66 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t67 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t67 + 0xfcu), t65, 4, t66, 0u, 5u, 0u);
        t68 = g->edx;
        t69 = rd32(self + 0xcu);
        t70 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t70 + 0xfcu), t70, 4, t69, 0u, 6u, 1u);
        t71 = g->ecx;
        t72 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t73 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t73 + 0xfcu), t71, 4, t72, 1u, 1u, 1u);
        t74 = g->edx;
        t75 = rd32(self + 0xcu);
        t76 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t76 + 0xfcu), t76, 4, t75, 1u, 4u, 1u);
        t77 = g->ecx;
        t78 = rd32(self + 0xcu);
        g->eax = t78;
        g->edx = rd32(t78);
        t79 = rd32(t78);
        t80 = cow_thiscall(g, rd32(t79 + 0x130u), t77, 2, t78, 0x44u);
        t81 = g->edx;
        g->ebx = ebx;
        g->edx = t81;
        t82 = cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x1034fdf0u), 0x14u);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    }
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10009920u), eax, self, g->edx, 1, 0);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000a820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
