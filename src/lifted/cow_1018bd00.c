/* f_0x1018bd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018bd00(Guest* g)
{
    int64_t q3;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    const uint32_t self = g->ecx;

    t1 = cow_divs(g, rd32(self), 0x4f1a00u);
    t2 = cow_mods(g, rd32(self), 0x4f1a00u);
    q3 = (int64_t)cow_muls(0x9b583739u, t2);
    t4 = (uint32_t)((int32_t)(t2 + cow_qhi(q3)) >> 0x11u);
    return t4 + (t4 >> 0x1fu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bd00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018bd00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
