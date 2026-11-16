/* f_0x1026df20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026df20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10289f70u), 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(arg1, 0xc0003u);
    wr32(arg1 + 8u, COW_IMG(0x1026dfa0u));
    wr32(arg1 + 0xcu, COW_IMG(0x1026dfb0u));
    wr32(arg1 + 0x10u, COW_IMG(0x1026e060u));
    wr8(arg1 + 0x14u, 0xffu);
    wr32(arg1 + 0x18u, COW_IMG(0x1026e210u));
    g->eax = arg1 + 0x5cu;
    g->edx = t2;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x10274660u), 1, arg1 + 0x5cu);
    t4 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a710u), 1, arg1 + 0x68u);
    wr32(arg1 + 0x78u, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026df20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026df20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
