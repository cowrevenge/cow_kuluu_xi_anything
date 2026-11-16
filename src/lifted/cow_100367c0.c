/* f_0x100367c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100367c0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + 0x1e4u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_100367d8;
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    return (eax & 0xffffff00u) | 1u;
L_100367d8: ;
    t2 = rd32(self + 0x1e0u);
    g->eax = t2;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100367f0u), 1, t2);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100367c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100367c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
