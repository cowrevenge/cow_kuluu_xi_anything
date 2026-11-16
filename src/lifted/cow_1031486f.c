/* f_0x1031486f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031486f(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1) goto L_10314889;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 2, arg1, 0x157u);
    return t1;
L_10314889: ;
    return rd16(arg1 * 2u + rd32(COW_IMG(0x103d0030u))) & 0x157u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031486f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031486f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
