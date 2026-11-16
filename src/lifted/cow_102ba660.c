/* f_0x102ba660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ba660(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(arg1) + 4u);
    g->ecx = t1;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t1, COW_IMG(0x103c24e0u), 0xa6u);
    t2 = g->ecx;
    g->edx = rd32(arg1);
    t3 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(t3), COW_IMG(0x103c24e0u), 0xa7u);
    t4 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(arg1), COW_IMG(0x103c24e0u), 0xa8u);
    wr32(arg1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ba660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
