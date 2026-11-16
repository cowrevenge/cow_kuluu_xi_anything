/* f_0x101354e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101354e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_101354ed;
    g->edx = arg1;
    return in_eax & 0xffffff00u;
L_101354ed: ;
    if ((uint32_t)(int16_t)arg2 == 0u) goto L_10135514;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1013550b;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_10135502;
    g->edx = arg1;
    return (uint32_t)(int16_t)arg2 - 2u & 0xffffff00u;
L_10135502: ;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x10135470u), self, arg1, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1013550b: ;
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x10135400u), self, arg1, 1, arg1);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10135514: ;
    g->esp = sp0;
    t5 = cow_fastcall(g, COW_IMG(0x10135300u), self, arg1, 1, arg1);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101354e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101354e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
