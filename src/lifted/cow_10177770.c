/* f_0x10177770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10177770(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10631f24u)) == 0u) goto L_10177794;
    ecx = rd32(COW_IMG(0x10631f24u));
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101819b0u), ecx, 4, arg1, arg2, arg3, arg4);
    return t1;
L_10177794: ;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10177770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
