/* f_0x103171ff - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_103171ff(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 < COW_IMG(0x103d03a0u)) goto L_10317223;
    if (arg1 > COW_IMG(0x103d0600u)) goto L_10317223;
    t1 = (uint32_t)((int32_t)(arg1 - COW_IMG(0x103d03a0u)) >> 5u) + 0x1cu;
    g->eax = t1;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, COW_IMG(0x103d03a0u), in_edx, 1, 1, t1);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10317223: ;
    g->eax = arg1 + 0x20u;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), COW_IMG(0x103d03a0u), 1, arg1 + 0x20u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103171ff(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103171ff(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
