/* f_0x10265ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10265ac0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), self, 1, arg1 + 8u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_10265ae9;
    }
    t3 = rd32(arg1 + 8u) + 1u;
    wr32(arg1 + 8u, t3);
    g->edx = rd32(arg1);
    t4 = rd32(arg1);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t4 + 0xcu), arg1, 1, 1u);
    t5 = g->edx;
    g->edx = t5;
    return 0u;
L_10265ae9: ;
    t6 = rd32(arg1 + 8u);
    if (rd32(arg1 + 8u) > 1u)
    {
        eax = t6;
    }
    else
    {
        eax = 1u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265ac0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
