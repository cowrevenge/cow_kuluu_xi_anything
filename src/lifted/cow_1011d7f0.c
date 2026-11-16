/* f_0x1011d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1011d7f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, sp0 + 0xcu);
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->edi = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1011d640u), 5, sp0 + 8u, sp0 + 0xcu, arg1, arg2, arg3);
    t1 = g->edx;
    wr32(sp0 - 0x24u, arg3);
    t2 = (uint32_t)(int16_t)(rd16(arg2 + 4u) - rd16(arg2));
    wr32(sp0 - 0x28u, t2);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1011d6e0u), 5, arg2, arg3, arg1, t2, arg3);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011d7f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
