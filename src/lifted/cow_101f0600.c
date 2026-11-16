/* f_0x101f0600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f0600(Guest* g)
{
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;

    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
    {
        loc_c = COW_IMG(0x1037f018u);
    }
    else
    {
        loc_c = COW_IMG(0x103820d0u);
    }
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_c, 1u, 0u);
    t2 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t2, 2, t2, 0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0600(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
