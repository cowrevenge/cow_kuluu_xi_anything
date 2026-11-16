/* f_0x1026a2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026a2d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == self) goto L_1026a2f7;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x1026a710u), self, in_edx, 1, self);
    t2 = g->ecx;
    t3 = g->edx;
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    t4 = cow_call_regs(g, COW_IMG(0x1026a6a0u), g->eax, g->ecx, t3, 0, 2, self, arg1);
    if ((int32_t)t4 >= 0) goto L_1026a2f7;
    return 0x8007000eu;
L_1026a2f7: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a2d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
