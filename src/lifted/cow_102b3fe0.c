/* f_0x102b3fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b3fe0(Guest* g)
{
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
    uint32_t t3;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 4, arg1, 4u, 1u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t3, 1, 11, arg1 + 4u, 4u, 1u, arg2, arg1, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t6, 1, 11, arg1 + 8u, 4u, 1u, arg2, arg1 + 4u, 4u, 1u, arg2, arg1, 4u, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd32(arg1 + 8u) != 1u)
    {
        ecx = t8;
        edx = t9;
        esi = t1 + t4 + t7;
    }
    else
    {
        edx = t9;
        esi = t1 + t4 + t7;
        g->ecx = arg1 + 0xcu;
        g->esp = sp0 - 0x10u;
        t10 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 4, arg1 + 0xcu, 4u, 1u, arg2);
        t11 = g->ecx;
        g->ecx = t11;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, arg1 + 0x10u, 1, 11, arg1 + 0x10u, 4u, 1u, arg2, arg1 + 0xcu, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
        t13 = g->ecx;
        t14 = g->edx;
        ecx = t13;
        edx = t14;
        esi = esi + t10 + t12;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t15 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 4, arg1 + 0x14u, 4u, 1u, arg2);
    t16 = g->ecx;
    t17 = g->edx;
    if (rd32(arg1 + 0x14u) != 1u)
    {
        edx = t17;
        esi = esi + t15;
    }
    else
    {
        ecx = t16;
        edx = t17;
        esi = esi + t15;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t18 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 4, arg1 + 0x18u, 4u, 1u, arg2);
        t19 = g->ecx;
        t20 = g->edx;
        g->esp = sp0 - 4u;
        t21 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t20, 1, 11, arg1 + 0x1cu, 4u, 1u, arg2, arg1 + 0x18u, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
        t22 = g->edx;
        edx = t22;
        esi = esi + t18 + t21;
    }
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
