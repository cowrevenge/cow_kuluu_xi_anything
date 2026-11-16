/* f_0x10131770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10131770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->ecx = self;
    t2 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t4 = g->ecx;
    if ((int16_t)t3 < 0) goto L_101317aa;
    eax = (uint32_t)(int16_t)t3;
    ecx = t4;
    if (rd8(eax + self + 0x22u) == 0u) goto L_101317a5;
    ecx = (ecx & 0xffffff00u) | rd8(eax + self + 0x22u);
    t5 = rd32(eax * 4u + self + 0x34u);
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t5, ecx);
    return t6;
L_101317a5: ;
    return 0u;
L_101317aa: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
