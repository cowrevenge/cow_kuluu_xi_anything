/* f_0x10269bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10269bd0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10269b60u), self, 0);
    t2 = g->ecx;
    if (t1 == 0u) goto L_10269bf9;
    ecx = t2;
    edx = t1;
L_10269be0: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, edx);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == arg1)
    {
        edx = t5;
        goto L_10269bff;
    }
    ecx = t4;
    edx = t5;
    if (edx != 0u)
    {
        edx = rd32(edx + 4u);
    }
    else
    {
        edx = rd32(ecx);
    }
    if (edx != 0u) goto L_10269be0;
L_10269bf9: ;
    return 0u;
L_10269bff: ;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269bd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
