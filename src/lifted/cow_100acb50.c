/* f_0x100acb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100acb50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
    t2 = g->edx;
    if ((int32_t)arg1 <= (int32_t)t1)
    {
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        ecx = 0u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100ad300u), self, 2, ecx, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    cow_call_regs(g, COW_IMG(0x100274b0u), t3, g->ecx, g->edx, 1, 1, arg2);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x100274b0u), arg2 + 0x10u, g->ecx, g->edx, 1, 1, arg2 + 0x10u);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x100274b0u), t8, g->ecx, g->edx, 1, 1, arg2 + 0x20u);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100acb50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
