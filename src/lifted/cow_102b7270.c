/* f_0x102b7270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7270(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(t1 + 0x14u, arg2);
    g->eax = arg2;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x102a99a0u), 3, t1, 0u, 3u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x102a99a0u), 6, t1, 1u, 3u, t1, 0u, 3u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x102a99a0u), 6, t1, 2u, 2u, t1, 1u, 3u);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    t13 = cow_cdecl(g, COW_IMG(0x102a9a50u), 1, t1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(arg1 + 0x44u, t13);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102a99a0u), 6, t1, t13, 1u, t1, t1, 2u);
    wr32(arg1 + 0x34u, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7270(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
