/* f_0x101fedd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101fedd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_101feded;
    if (arg1 == 0u || (int32_t)arg1 < 0)
    {
        eax = arg1;
        edx = in_edx;
        goto L_101fedfa;
    }
    if ((int32_t)arg1 > 2)
    {
        eax = arg1;
        edx = in_edx;
        goto L_101fedfa;
    }
    g->eax = rd32(arg3);
    g->edx = in_edx;
    t1 = rd32(arg3);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), arg3, 2, 6u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_101feded: ;
    g->eax = arg1;
    g->edx = rd32(arg3);
    t4 = rd32(arg3);
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), arg3, 2, 0x11u, 0u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_101fedfa: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fedd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fedd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
