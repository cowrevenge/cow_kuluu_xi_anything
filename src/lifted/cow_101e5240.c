/* f_0x101e5240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e5240(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->edx;
    t3 = rd32(rd32(t1) + 0x184u);
    t4 = rd32(t1);
    wr32(self + 0x18u, t3);
    g->eax = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t6 = rd32(rd32(t5) + 0x184u);
    t7 = rd32(t5);
    wr32(self + 0x1cu, t6);
    wr32(self + 0x14u, 0u);
    wr16(self + 0x30u, 0x707u);
    wr8(self + 0x32u, 7u);
    wr8(self + 0x34u, 0u);
    g->edx = t7;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
