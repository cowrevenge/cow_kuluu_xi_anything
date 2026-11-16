/* f_0x101b95d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b95d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 4u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), self, 1, t1);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        goto L_101b95e8;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return 0xffffffffu;
L_101b95e8: ;
    t4 = rd32(self + 4u);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), arg1, 2, t4, arg1);
    t6 = g->edx;
    t7 = (t5 != 0xffffffffu) * 2u - 1u;
    g->edx = t6;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b95d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b95d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
