/* f_0x100e5a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e5a80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd8(arg3 + 5u);
    wr8(arg1 + t1 * 8u + 0x19a58u, rd8(arg3 + 4u));
    t2 = rd8(arg3 + 5u);
    wr8(arg1 + t2 * 8u + 0x19a59u, rd8(arg3 + 6u));
    if (rd32(COW_IMG(0x104b1774u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104b1774u));
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x104b1774u));
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_thiscall(g, eax, arg1, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
