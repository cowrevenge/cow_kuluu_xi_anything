/* f_0x101eb980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101eb980(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = (self & 0xffff0000u) | (uint16_t)(rd16(self + 0x5eu) + 6u);
    t2 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x5cu) + 2u);
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x6cu, t2, t1, self + 0x14u, 0x80808080u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t3 & 0xffff0000u) | (uint16_t)(rd16(self + 0x5eu) + 0x12u);
    t6 = (t4 & 0xffff0000u) | (uint16_t)(rd16(self + 0x5cu) + 2u);
    g->eax = self + 0x28u;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t6, t5, self + 0x28u, 0x80808080u, 0x6cu, t2, t1, self + 0x14u, 0x80808080u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
