/* f_0x10098e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10098e90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100878b0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (!(rd8(arg3 + 0x24u) & 1u))
    {
        eax = (t2 & 0xffffff00u) | rd8(arg3 + 0x24u);
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_call_regs(g, COW_IMG(0x10087910u), eax, g->ecx, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        t5 = rd32(arg3 + 0x10u);
        t6 = rd32(arg3 + 0xcu);
        t7 = rd32(arg3 + 8u);
        g->ecx = t5;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x100878d0u), t7, g->ecx, t6, 1, 3, t7, t6, t5);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if ((rd8(arg3 + 0x24u) & 2u) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_call_regs(g, COW_IMG(0x10087970u), eax, g->ecx, g->edx, 1, 0);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    else
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x10087930u), arg3 + 0x28u, 1, arg3 + 0x28u);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if ((rd8(arg3 + 0x24u) & 4u) != 0u)
    {
        t20 = (edx & 0xffff0000u) | rd16(arg3 + 0xaau);
        t21 = (eax & 0xffff0000u) | rd16(arg3 + 0xa8u);
        g->edx = t20;
        g->esp = sp0 - 4u;
        t22 = cow_call_regs(g, COW_IMG(0x100879e0u), t21, ecx, g->edx, 1, 2, t21, t20);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    if ((rd8(arg3 + 0x24u) & 8u) != 0u)
    {
        t25 = (ecx & 0xffffff00u) | rd8(arg3 + 0x26u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10087a20u), eax, g->ecx, g->edx, 1, 1, t25);
    }
    t26 = rd32(arg3 + 0x20u);
    t27 = rd32(arg3 + 0x1cu);
    t28 = rd32(arg3 + 0x18u);
    t29 = rd32(arg3 + 0x14u);
    t30 = (t27 & 0xffffff00u) | rd8(arg3 + 0x25u);
    g->eax = t30;
    g->edx = t29;
    g->esp = sp0;
    t31 = cow_cdecl(g, COW_IMG(0x10087990u), 6, t30, t29, t28, t27, t26, in_esi);
    t32 = g->edx;
    g->edx = t32;
    return (t31 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
