/* f_0x1010a1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1010a1c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 2064u);

    wr32(sp0 - 0x804u, sp0 + 0xcu);
    wr32(sp0 - 0x808u, arg2);
    wr32(sp0 - 0x80cu, sp0 - 0x800u);
    g->edx = sp0 - 0x800u;
    g->esp = sp0 - 0x7f8u;
    cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x800u, arg2, sp0 + 0xcu, rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu));
    t1 = g->edx;
    wr32(sp0 - 0x804u, sp0 - 0x800u);
    g->eax = sp0 - 0x800u;
    g->edx = t1;
    g->esp = sp0 - 0x800u;
    t2 = cow_thiscall(g, COW_IMG(0x101093b0u), arg1, 1, sp0 - 0x800u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
