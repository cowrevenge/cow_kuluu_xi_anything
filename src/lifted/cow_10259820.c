/* f_0x10259820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10259820(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0xffffffffu) goto L_10259832;
    return 0u;
L_10259832: ;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10259020u), 3, arg1, arg2, arg3);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x10259410u), self, 1, t1);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10259820(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
