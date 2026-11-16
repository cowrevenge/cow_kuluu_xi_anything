/* f_0x10269eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10269eb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10269b60u), arg2, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10269ef0;
    }
    eax = t1;
    esi = t1;
    edx = arg1;
L_10269eca: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, esi);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x10269e30u), self, 2, t4, t3);
    if (t5 == 0u)
    {
        edx = t5;
        goto L_10269efb;
    }
    eax = t5;
    edx = t5;
    if (esi != 0u)
    {
        esi = rd32(esi + 4u);
    }
    else
    {
        esi = rd32(arg2);
    }
    if (esi != 0u) goto L_10269eca;
L_10269ef0: ;
    g->edx = edx;
    return 1u;
L_10269efb: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269eb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
