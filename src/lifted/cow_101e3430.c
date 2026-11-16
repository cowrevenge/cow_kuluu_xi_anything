/* f_0x101e3430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e3430(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x1eu, COW_IMG(0x101e3460u));
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x1fu, COW_IMG(0x101e3460u));
    t3 = g->ecx;
    t4 = g->edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3a0u), 2, 0x20u, COW_IMG(0x101e3490u));
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
