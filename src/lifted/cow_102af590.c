/* f_0x102af590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102af590(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1, 0x150002u);
    wr32(arg1 + 8u, COW_IMG(0x102af5f0u));
    wr32(arg1 + 0xcu, COW_IMG(0x102af600u));
    wr32(arg1 + 0x10u, COW_IMG(0x102af650u));
    wr8(arg1 + 0x14u, 0xffu);
    wr32(arg1 + 0x18u, COW_IMG(0x102af920u));
    g->eax = arg1 + 0x1cu;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102af190u), 1, arg1 + 0x1cu);
    t2 = g->edx;
    wr32(arg1 + 0x58u, 0u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, arg1 + 0x5cu);
    wr32(arg1 + 0x9cu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102af590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
