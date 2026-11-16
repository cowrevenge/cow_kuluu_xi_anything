/* f_0x1025a710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025a710(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_1025a73f;
    if (arg1 == 1u) goto L_1025a732;
    if (arg1 == 2u) goto L_1025a725;
    return COW_IMG(0x103d3c84u);
L_1025a725: ;
    g->eax = arg1 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 0xbu);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1025a732: ;
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 0xau);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1025a73f: ;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10257970u), COW_IMG(0x10669454u), 1, 9u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025a710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
