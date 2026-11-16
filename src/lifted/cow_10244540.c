/* f_0x10244540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10244540(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, sp0 - 0x68u);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    wr32(sp0 - 0x74u, arg2 - 0x18u);
    wr32(sp0 - 0x78u, arg1 + 0x18u);
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    g->eax = sp0 - 0x68u;
    g->edx = arg1 + 0x18u;
    g->esp = sp0 - 0x70u;
    t1 = cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, arg1 + 0x18u, arg2 - 0x18u);
    t2 = g->edx;
    wr32(sp0 - 0x80u, sp0 - 0x68u);
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x100ddf60u), 1, sp0 - 0x68u);
    t3 = rd32(sp0 - 0x10u);
    t4 = rd32(sp0 - 0xcu);
    t5 = rd32(sp0 - 8u);
    wr32(arg1 + 8u, t3);
    t6 = rd32(sp0 - 4u);
    wr32(arg1 + 0xcu, t4);
    wr32(arg1 + 0x10u, t5);
    wr32(arg1 + 0x14u, t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10244540(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
