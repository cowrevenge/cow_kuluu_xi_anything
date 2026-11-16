/* f_0x102b93e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102b93e0(Guest* g)
{
    double d10;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
    t2 = g->ecx;
    if ((t1 & 0x20000u) != 0u)
    {
        ecx = t2;
        edx = 0u;
    }
    else
    {
        t3 = arg5 + rd32(arg5) * 0xcu + 0x254u;
        g->eax = rd32(arg5) * 3u;
        g->ecx = arg2;
        g->edx = arg1;
        t4 = rd32(arg5);
        g->esp = sp0 - 0x10u;
        t5 = cow_cdecl(g, COW_IMG(0x102b9460u), 6, arg1, arg2, arg3, arg4, t3, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, t3);
        t8 = g->ecx;
        t9 = g->edx;
        d10 = cow_take_float(g);
        ecx = t8;
        edx = t9;
    }
    g->esp = sp0 - 0xcu;
    t11 = cow_stdcall(g, COW_IMG(0x10284ef0u), 0);
    if ((t11 & 4u) != 0u)
    {
        t12 = arg5 + rd32(arg5) * 8u + 0x4a0u;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102b9460u), 6, arg1, arg2, arg3, arg4, t12, 2u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b93e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b93e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
