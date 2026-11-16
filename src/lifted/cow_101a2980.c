/* f_0x101a2980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a2980(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 0) goto L_101a29e8;
    if ((int32_t)arg1 >= 40) goto L_101a29e8;
    if (rd8(arg2) != 0u) goto L_101a29c8;
    g->eax = arg1 + 1u;
    g->ecx = self;
    g->edx = arg1 << 4u;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6cu);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = arg1 * 0x10u + self + 0x1dc6u;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, t4, t1);
    wr8(arg1 * 0x10u + self + 0x1dd5u, 0u);
    return;
L_101a29c8: ;
    t5 = arg1 * 0x10u + self + 0x1dc6u;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1 << 4u, g->ecx, g->edx, 1, 3, t5, arg2, 0xfu);
    wr8(arg1 * 0x10u + self + 0x1dd5u, 0u);
L_101a29e8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a2980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
