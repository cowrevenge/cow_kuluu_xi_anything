/* f_0x1025a5c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025a5c0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 1u) goto L_1025a5f6;
    if (arg2 == 0u) goto L_1025a5de;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 3u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1025a5de: ;
    if (arg3 != 0u) goto L_1025a5ee;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1025a5ee: ;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 2u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1025a5f6: ;
    if (arg1 != 2u) goto L_1025a628;
    if (arg2 == 0u) goto L_1025a610;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 6u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1025a610: ;
    if (arg3 != 0u) goto L_1025a620;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 4u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1025a620: ;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 5u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1025a628: ;
    return COW_IMG(0x103d3c84u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a5c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025a5c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
