/* f_0x1018bfa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018bfa0(Guest* g)
{
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    q1 = (int64_t)cow_muls(0x1b9de7afu, rd32(self));
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 0x18u);
    t3 = cow_divs(g, rd32(self), 0x4f1a00u);
    t4 = cow_mods(g, rd32(self), 0x4f1a00u);
    t5 = t4 + ((arg1 * 0x278du + t2 * 0x4a286u + (t2 >> 0x1fu) * 0x4a286u) << 9u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018bc40u), self, 1, t5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bfa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018bfa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
