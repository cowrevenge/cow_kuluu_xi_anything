/* f_0x10311cba - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10311cba(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (self & 0xffff0000u) | (uint16_t)g->fcw;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10311d30u), 3, t1, in_esi, (self & 0xffff0000u) | (uint16_t)g->fcw);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t2 & ~rd32(sp0 + 8u)) | (arg1 & rd32(sp0 + 8u));
    t6 = rd32(sp0 + 8u);
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10311dc2u), 3, t5, t1, in_esi);
    wr32(sp0 + 8u, t7);
    g->fcw = rd16(sp0 + 8u);
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311cba(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311cba(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
