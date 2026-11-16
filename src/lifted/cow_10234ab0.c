/* f_0x10234ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_10234ab0(Guest* g)
{
    double d2;
    double d6;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self) >> 1u;
    g->edx = in_edx;
    d2 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - fr(g, (double)(int64_t)cow_i64(t1, 0u) * fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(COW_IMG(0x1032961cu)))));
    fpush(g, d2);
    g->esp = sp0 - 0x18u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    t5 = rd32(self + 4u) >> 1u;
    g->ecx = t5;
    g->edx = t4;
    d6 = fr(g, (double)(int32_t)arg2 - fr(g, (double)(int64_t)cow_i64(t5, 0u) * fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(COW_IMG(0x1032961cu)))));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = -(rd8(self + 8u) != 0u) & 9u;
    t11 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, t10);
    t12 = rd32(self + 4u);
    g->ebx = arg5;
    g->edx = rd32(self);
    t13 = rd32(self);
    t14 = cow_thiscall(g, COW_IMG(0x10120000u), t11, 11, t3, t7, 0u, 0u, t13, t12, arg3, arg4, arg5, arg6, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    if (rd8(sp0 + 0x1cu) != 0u)
    {
        eax = (t14 & 0xffffff00u) | rd8(sp0 + 0x1cu);
    }
    else
    {
        ecx = t15;
        edx = t16;
        ebp = t7;
        edi = t3;
        t17 = rd32(self + 4u) - 5u;
        wr32(sp0 + 4u, t17);
        t18 = rd32(self) - 0x30u;
        wr32(sp0 + 0x1cu, t18);
        g->esp = sp0 - 0x18u;
        t19 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 2u);
        t20 = rd32(sp0 + 0x1cu);
        g->ebx = arg5;
        g->edx = arg3;
        cow_thiscall(g, COW_IMG(0x10120000u), t19, 11, edi, ebp, 0x18u, 0u, t20, 5u, arg3, arg4, arg5, 0u, 0u);
        t21 = g->ecx;
        t22 = g->edx;
        t23 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 7u);
        t24 = rd32(sp0 + 0x1cu);
        t25 = rd32(sp0 + 4u);
        g->ebx = arg5;
        g->edx = t24;
        cow_thiscall(g, COW_IMG(0x10120000u), t23, 11, edi, ebp, 0x18u, t25, t24, 5u, arg3, arg4, arg5, 0u, 0u);
        t26 = g->ecx;
        t27 = g->edx;
        if (rd32(self + 4u) <= 0x30u)
        {
            ecx = t26;
            edx = t27;
        }
        else
        {
            eax = rd32(self + 4u);
            edx = t27;
            t28 = rd32(self) - 5u;
            wr32(sp0 + 0x1cu, t28);
            wr32(sp0 + 4u, eax - 0x30u);
            g->esp = sp0 - 0x18u;
            t29 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 4u);
            t30 = rd32(sp0 + 4u);
            g->ebx = arg5;
            g->edx = t30;
            cow_thiscall(g, COW_IMG(0x10120000u), t29, 11, edi, ebp, 0u, 0x18u, 5u, t30, arg3, arg4, arg5, 0u, 0u);
            t31 = g->ecx;
            t32 = g->edx;
            t33 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 5u);
            t34 = rd32(sp0 + 4u);
            t35 = rd32(sp0 + 0x1cu);
            g->ebx = arg5;
            g->edx = t35;
            cow_thiscall(g, COW_IMG(0x10120000u), t33, 11, edi, ebp, t35, 0x18u, 5u, t34, arg3, arg4, arg5, 0u, 0u);
            t36 = g->ecx;
            t37 = g->edx;
            ecx = t36;
            edx = t37;
        }
        t38 = rd32(self) - 0x18u;
        t39 = rd32(self + 4u);
        wr32(sp0 + 0x1cu, t38);
        g->esp = sp0 - 0x18u;
        t40 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 1u);
        g->ebx = arg5;
        g->edx = arg3;
        cow_thiscall(g, COW_IMG(0x10120000u), t40, 11, edi, ebp, 0u, 0u, 0x18u, 0x18u, arg3, arg4, arg5, 0u, 0u);
        t41 = g->ecx;
        t42 = g->edx;
        t43 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 3u);
        t44 = rd32(sp0 + 0x1cu);
        g->ebx = arg5;
        g->edx = arg3;
        cow_thiscall(g, COW_IMG(0x10120000u), t43, 11, edi, ebp, t44, 0u, 0x18u, 0x18u, arg3, arg4, arg5, 0u, 0u);
        t45 = g->ecx;
        t46 = g->edx;
        t47 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 6u);
        g->ebx = arg5;
        g->edx = arg4;
        cow_thiscall(g, COW_IMG(0x10120000u), t47, 11, edi, ebp, 0u, t39 - 0x18u, 0x18u, 0x18u, arg3, arg4, arg5, 0u, 0u);
        t48 = g->ecx;
        t49 = g->edx;
        t50 = cow_cdecl(g, COW_IMG(0x10220d10u), 1, 8u);
        t51 = rd32(sp0 + 0x1cu);
        g->ebx = arg5;
        t52 = cow_thiscall(g, COW_IMG(0x10120000u), t50, 11, edi, ebp, t51, t39 - 0x18u, 0x18u, 0x18u, arg3, arg4, arg5, 0u, 0u);
        eax = t52;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10234ab0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
