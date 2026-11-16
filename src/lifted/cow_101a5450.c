/* f_0x101a5450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101a5450(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = rd32(arg3 + 0x20u);
        goto L_101a5474;
    }
    edx = rd32(arg3 + 0x20u);
    if (arg1 == 0u || (int32_t)arg1 < 0)
    {
        eax = arg1;
        goto L_101a5482;
    }
    if ((int32_t)arg1 > 2)
    {
        eax = arg1;
        goto L_101a5482;
    }
L_101a5466: ;
    g->eax = rd32(arg3);
    g->edx = edx;
    t4 = rd32(arg3);
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), arg3, 2, 6u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    return cow_tailcall(g, COW_IMG(0x10037bf0u), t5, t6, t7);
L_101a5474: ;
    if ((int32_t)edx >= 9) goto L_101a5466;
    g->eax = arg1;
    g->edx = rd32(arg3);
    t1 = rd32(arg3);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), arg3, 2, 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_101a5482: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5450(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
