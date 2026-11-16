/* f_0x1007c8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007c8e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int8_t)arg2 == 0u) goto L_1007c90f;
    if ((uint32_t)(int8_t)arg2 == 1u) goto L_1007c901;
    if ((uint32_t)(int8_t)arg2 != 2u)
    {
        eax = (uint32_t)(int8_t)arg2 - 2u;
        edx = in_edx;
        goto L_1007c91c;
    }
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1007c901: ;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x76u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1007c90f: ;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x74u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1007c91c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
