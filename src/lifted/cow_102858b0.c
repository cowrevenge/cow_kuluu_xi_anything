/* f_0x102858b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102858b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 276u);

    wr32(sp0 - 0x104u, sp0 + 8u);
    wr32(sp0 - 0x108u, arg1);
    wr32(sp0 - 0x10cu, 0xffu);
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->ecx = arg1;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0xf8u;
    cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x100u, 0xffu, arg1, sp0 + 8u, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = t2;
    g->esp = sp0 - 0x100u;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x103291f0u)), t1, 1, sp0 - 0x100u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102858b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102858b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
