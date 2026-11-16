/* f_0x10140fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10140fc0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u) goto L_10140fe8;
    if ((uint8_t)arg1 != 1u)
    {
        eax = (uint8_t)arg1 - 1u;
        edx = in_edx;
        goto L_10141014;
    }
    t1 = rd32(COW_IMG(0x1057876cu));
    wr8(t1 + 0x74u, rd8(t1 + 0x74u) | 1u);
    wr8(self + 0x3cu, 1u);
    g->edx = (in_edx & 0xffffff00u) | 1u;
    return t1;
L_10140fe8: ;
    t2 = rd32(COW_IMG(0x1057876cu));
    wr8(t2 + 0x74u, rd8(t2 + 0x74u) & 0xfeu);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 0u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_10141014: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140fc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
