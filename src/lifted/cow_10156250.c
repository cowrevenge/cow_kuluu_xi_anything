/* f_0x10156250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10156250(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 < rd32(self + 0x34u))
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101562f0;
    }
    if (rd32(self + 4u) != 0u) goto L_10156299;
    t1 = rd32(self + 0x20u);
    t2 = rd32(self + 0x24u);
    t3 = rd32(self + 0x30u);
    t4 = rd32(self + 0x2cu);
    t5 = rd32(self + 0x28u);
    g->eax = t4;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x101557c0u), 10, t5, t4, t3, arg1, arg2, arg3, arg4, t2, t1, in_edi);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10156299: ;
    t8 = rd32(self + 8u);
    t9 = rd32(self + 0xcu);
    t10 = rd32(self + 0x18u);
    t11 = rd32(self + 0x14u);
    t12 = rd32(self + 0x10u);
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x10155970u), t11, g->ecx, g->edx, 1, 10, t12, t11, t10, 1u, arg1, arg2, arg3, arg4, t9, t8);
    t14 = rd32(self + 0x20u);
    t15 = rd32(self + 0x24u);
    t16 = rd32(self + 0x30u);
    t17 = rd32(self + 0x2cu);
    t18 = rd32(self + 0x28u);
    g->eax = t16;
    g->edx = t18;
    g->esp = sp0 - 0x34u;
    t19 = cow_cdecl(g, COW_IMG(0x101557c0u), 10, t18, t17, t16, arg1 + t13, arg2 - t13, arg3, arg4, t15, t14, t12);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_101562f0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156250(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
