/* f_0x1012a360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1012a360(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr32(self, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x14u, 0u);
    wr16(self + 0x18u, 0u);
    wr16(self + 0x1au, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    g->eax = 0u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1011d990u), 1, COW_IMG(0x1036f120u));
    t2 = g->ecx;
    t3 = g->edx;
    wr16(self + 4u, (uint16_t)t1);
    g->edx = t3;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10128680u), t1, g->ecx, g->edx, 1, 3, COW_IMG(0x1036f120u), COW_IMG(0x1036f120u), in_esi);
    t5 = g->edx;
    wr16(self + 6u, (uint16_t)t4);
    wr8(self + 8u, 0x1eu);
    wr8(self + 9u, 1u);
    g->edx = t5;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
