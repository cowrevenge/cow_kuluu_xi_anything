/* f_0x10279470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10279470(Guest* g)
{
    uint32_t ebx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 0x24u) < (int32_t)rd32(arg1 + 0x28u))
    {
        ebx = rd32(arg1 + 0x24u);
    }
    else
    {
        ebx = rd32(arg1 + 0x24u);
        t1 = ebx * 4u + 4u;
        t2 = rd32(arg1 + 0x20u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), self, 4, t2, t1, COW_IMG(0x103b37ecu), 0x514u);
        t4 = g->edx;
        t5 = rd32(arg1 + 0x1cu);
        wr32(arg1 + 0x20u, t3);
        g->esp = sp0 - 8u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t5, 9, t5, t1, COW_IMG(0x103b37ecu), 0x516u, t2, t1, COW_IMG(0x103b37ecu), 0x514u, in_edi);
        wr32(arg1 + 0x1cu, t6);
    }
    wr32(ebx * 4u + rd32(arg1 + 0x20u), 0u);
    wr32(ebx * 4u + rd32(arg1 + 0x1cu), arg2);
    t7 = rd32(arg1 + 0x24u) + 1u;
    wr32(arg1 + 0x24u, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10279470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
