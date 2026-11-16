/* f_0x101e8880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e8880(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10663644u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663644u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663644u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 6u);
        t2 = g->edx;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 2u);
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
