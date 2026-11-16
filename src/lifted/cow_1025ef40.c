/* f_0x1025ef40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025ef40(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1025ef56;
    return 1u;
L_1025ef56: ;
    if (rd32(self + 0x64u) != 0u) goto L_1025ef67;
    return 1u;
L_1025ef67: ;
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x38u), self, 1, arg1);
    g->edx = rd32(self);
    t3 = rd32(self);
    cow_thiscall(g, rd32(t3 + 0xacu), self, 1, arg1);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, rd32(rd32(self) + 0x3cu), self, 1, arg1);
    t5 = g->edx;
    g->edx = t5;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ef40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ef40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
