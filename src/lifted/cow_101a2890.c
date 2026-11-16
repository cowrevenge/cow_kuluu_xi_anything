/* f_0x101a2890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a2890(Guest* g)
{
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1dbcu) != arg1 + rd32(self + 0x1dc0u) * 0x14u)
    {
        if ((int32_t)arg1 < 20) goto L_101a28b8;
        edi = arg1 - 0x14u;
L_101a28bf: ;
        if ((int32_t)edi < 0) goto L_101a28c8;
L_101a28c3: ;
        if ((int32_t)edi < 20) goto L_101a28ca;
L_101a28c8: ;
        edi = 0u;
L_101a28ca: ;
        t1 = (uint32_t)((int32_t)(rd32(self + 0x1dbcu) - (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu)) >> 1u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101a2660u), self, 2, t1, COW_IMG(0x103d3c84u));
        t2 = rd32(self + 0x1dc0u);
        wr32(self + 0x1db8u, edi);
        t3 = edi + t2 * 0x14u;
        wr32(self + 0x1dbcu, t3);
        t4 = (uint32_t)((int32_t)(t3 - (uint32_t)((int32_t)t3 >> 0x1fu)) >> 1u);
        cow_thiscall(g, COW_IMG(0x101a26c0u), self, 2, t4, COW_IMG(0x103d3c84u));
    }
    return rd32(self + 0x1db8u);
L_101a28b8: ;
    if ((int32_t)arg1 >= 0)
    {
        edi = arg1;
        goto L_101a28c3;
    }
    edi = arg1 + 0x14u;
    goto L_101a28bf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2890(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
