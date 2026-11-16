/* f_0x101d89c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101d89c0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg2 + 8u);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, in_edx, 4, 0u, 4u, t1, 0x80808080u);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t3, 4, 1u, 0x22u, arg2 + 0xcu, 0x80808080u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x3bu);
    t8 = g->edx;
    g->esp = sp0 - 8u;
    t9 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t8, 4, 2u, 3u, t7, 0x80808080u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, arg2 + 0x1cu, 4, 3u, 0x22u, arg2 + 0x1cu, 0x80808080u);
    t10 = g->edx;
    t11 = rd32(arg2 + 4u) + 1u;
    g->eax = t11;
    t12 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t10, 4, 4u, 0xau, t11, 0x80808080u);
    t13 = g->edx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d89c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d89c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
