/* f_0x101d9500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d9500(Guest* g)
{
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 <= 0) goto L_101d958d;
    wr32(COW_IMG(0x1066345cu), arg1);
    t1 = rd32(arg2) != 4u;
    t2 = rd32(arg2);
    wr32(COW_IMG(0x10663460u), t1);
    t3 = -(t1 != 0u) + 2u;
    t4 = rd16(arg2 + 4u);
    g->ecx = arg1;
    g->edx = t2;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x101c9440u), t4, g->ecx, g->edx, 1, 5, arg1, 0u, 1u, t4, t3);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10153180u), 6, COW_IMG(0x106631f0u), 0x200u, 0xau, 0x1eu, 1u, t5);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x12u);
    t12 = g->edx;
    t13 = rd16(arg2 + 4u);
    g->edx = t12;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d95b0u), t13, COW_IMG(0x106631f0u), 0u, t11, 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101d958d: ;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x1013e3b0u), in_eax, rd32(COW_IMG(0x10578204u)), in_edx, 0, 4, 0u, 1u, 0u, 0u);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f718u));
    t19 = g->edx;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
