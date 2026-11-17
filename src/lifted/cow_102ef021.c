/* f_0x102ef021 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102ef021(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg1);
    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), self, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 8u, arg1);
    t5 = cow_call_regs(g, COW_IMG(0x102f690fu), g->eax, t3, t4, 1, 1, arg1);
    t6 = g->edx;
    wr32(sp0 - 4u, 1u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x103158eeu), 1, 1u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xd0u, sp0 - 0xccu);
    wr32(sp0 - 0xd4u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0xccu;
    g->esp = sp0 - 0xccu;
    t7 = cow_thiscall_cdecl(g, rd32(rd32(arg1) + 0xcu), rd32(arg1), 2, arg1, sp0 - 0xccu);
    t8 = g->edx;
    g->esi = 1u;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef021(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ef021(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
