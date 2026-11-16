/* f_0x10324ca2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10324ca2(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103290b8u)), 2, arg1, arg2);   /* kernel32.dll!IsBadWritePtr */
    if (t1 == 0u)
    {
        esi = 1u;
    }
    else
    {
        esi = 0u;
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324ca2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324ca2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
