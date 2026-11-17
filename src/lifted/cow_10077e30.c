/* f_0x10077e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10077e30(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1056u);

    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, sp0 + 8u);
    wr32(sp0 - 0x410u, arg1);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    wr8(sp0 - 0x404u, 0x9du);
    wr8(sp0 - 0x403u, 0u);
    wr8(sp0 - 0x402u, 0u);
    g->eax = sp0 + 8u;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x400u;
    t1 = cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x400u, arg1, sp0 + 8u, in_esi, rd32(sp0 - 0x404u));
    t2 = g->edx;
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, 1u);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, sp0 - 0x404u);
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->esp = sp0 - 0x408u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
