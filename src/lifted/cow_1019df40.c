/* f_0x1019df40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1019df40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, arg1, 1u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x48u), 5, 0u, 4u, 0x80808080u, 0u, 0u);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019df40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019df40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
