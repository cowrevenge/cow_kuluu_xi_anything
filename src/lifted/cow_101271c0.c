/* f_0x101271c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101271c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10127250u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    wr8(self + 0x64020u, 0u);
    wr8(self + 0x64021u, 0u);
    wr8(self + 0x64022u, 0u);
    wr8(self + 0x64023u, 0u);
    wr8(self + 0x64024u, 0u);
    wr8(self + 0x64025u, 0u);
    wr8(self + 0x64026u, 0u);
    wr8(self + 0x64027u, 0u);
    wr8(self + 0x64028u, 0u);
    wr8(self + 0x64029u, 0u);
    wr8(self + 0x64050u, 0u);
    g->ecx = t1;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x1011d990u), 1, COW_IMG(0x1036f120u));
    t4 = g->ecx;
    t5 = g->edx;
    wr16(self + 0x64052u, (uint16_t)t3);
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10128680u), t3, g->ecx, g->edx, 1, 3, COW_IMG(0x1036f120u), COW_IMG(0x1036f120u), in_esi);
    wr16(self + 0x64054u, (uint16_t)t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101271c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101271c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
