/* f_0x102507b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102507b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1) & 1u)
    {
        if ((int32_t)rd32(arg1 + 4u) > 1)
        {
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10270a00u), 1, arg2 + 1u);
        }
        wr32(arg1 + 0x14u, arg2);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102507b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102507b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
