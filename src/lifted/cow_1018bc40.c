/* f_0x1018bc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018bc40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 1866240000)
    {
        eax = in_eax;
        edx = in_edx;
        esi = arg1;
    }
    else
    {
        q1 = (uint64_t)cow_mulu(0x934a28fbu, arg1 - 0x6f3c9001u);
        eax = (-((cow_qhi(q1) >> 0x1eu) * 0x6f3c9u) - 0x6f3c9u) << 0xcu;
        edx = cow_qhi(q1) >> 0x1eu;
        esi = arg1 + ((-((cow_qhi(q1) >> 0x1eu) * 0x6f3c9u) - 0x6f3c9u) << 0xcu);
    }
    wr32(self, esi);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018bc40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
