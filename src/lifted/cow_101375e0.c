/* f_0x101375e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101375e0(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 0x140u) <= 0)
    {
        eax = rd32(self + 0x140u);
        goto L_10137625;
    }
    eax = rd32(self + 0x140u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = rd32(self + 0x140u) - (uint32_t)(int16_t)t5;
    wr32(self + 0x140u, t6);
    if ((int32_t)t6 > 0)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        wr32(self + 0x140u, 0u);
        wr16(self + 0x14au, 2u);
    }
    return (eax & 0xffffff00u) | 1u;
L_10137625: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101375e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101375e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
