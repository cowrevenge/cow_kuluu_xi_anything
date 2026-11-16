/* f_0x1022b680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1022b680(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg2 == 0u) goto L_1022b698;
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1022b6b0u), g->eax, arg3, in_edx, 1, 1, arg2);
    return t1;
L_1022b698: ;
    g->eax = arg1;
    g->esp = sp0;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1022b6e0u), self, 2, arg1, arg3);
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
