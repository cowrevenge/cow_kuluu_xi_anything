/* f_0x1010a420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1010a420(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x8f0u) == 0u)
    {
        edx = in_edx;
        goto L_1010a464;
    }
    ecx = rd32(self + 0x8f0u);
    if ((uint16_t)arg1 == 0u)
    {
        edx = in_edx;
        goto L_1010a464;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1010f140u), ecx, 1, arg1 - 1u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1010a464;
    }
    eax = t1;
    edx = t2;
    t3 = rd32(eax + 4u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1010d560u), rd32(self + 0x8f0u), 2, t3, 0u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        edx = t5;
        goto L_1010a464;
    }
    wr32(self + 0x8e8u, 3u);
    return;
L_1010a464: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1010a470u), self, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010a420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
