/* f_0x102913b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102913b0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10289f70u), 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(arg1, 0xb0002u);
    wr32(arg1 + 8u, COW_IMG(0x10291440u));
    wr32(arg1 + 0xcu, COW_IMG(0x10291450u));
    wr32(arg1 + 0x10u, COW_IMG(0x10291490u));
    wr8(arg1 + 0x14u, 0xffu);
    wr32(arg1 + 0x18u, COW_IMG(0x10291af0u));
    g->eax = arg1 + 0x5cu;
    g->edx = t2;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x10274660u), 1, arg1 + 0x5cu);
    t4 = g->edx;
    g->ecx = arg1 + 0x68u;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1027a710u), 1, arg1 + 0x68u);
    t6 = g->ecx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10274690u), 4, arg1 + 0x78u, 0x3f800000u, 0x3f800000u, 0x3f800000u);
    wr32(arg1 + 0x84u, 0u);
    wr32(arg1 + 0x88u, 0u);
    wr32(arg1 + 0x8cu, 0u);
    wr32(arg1 + 0x90u, 0u);
    wr32(arg1 + 0x94u, 0u);
    wr32(arg1 + 0x98u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102913b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102913b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
