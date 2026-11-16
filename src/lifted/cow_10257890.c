/* f_0x10257890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10257890(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 < rd32(rd32(self + 4u) + 0x28u))
    {
        eax = rd32(self + 4u);
        goto L_102578a3;
    }
    g->edx = arg1;
    return 0u;
L_102578a3: ;
    if (rd32(eax + 0x1cu) == 0u) goto L_102578b9;
    g->edx = rd32(self + 0xcu);
    return rd32(self + 0xcu) + rd32(arg1 * 8u + rd32(self + 8u));
L_102578b9: ;
    g->edx = arg1;
    return rd32(self + 0xcu) + rd32(eax + 0x20u) * arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257890(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
