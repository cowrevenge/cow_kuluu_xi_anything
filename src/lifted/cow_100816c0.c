/* f_0x100816c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100816c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    if (rd32(COW_IMG(0x10480af0u) + rd32(self + 4u) * 4u) == 0u) goto L_10081707;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(self + 4u) * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        edx = rd32(eax + 0x120u) >> 9u;
        goto L_100816f5;
    }
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(eax + 0x78u) != rd32(self + 8u))
    {
        edx = rd32(eax + 0x78u);
        goto L_100816f5;
    }
    return rd32(eax + 0xa0u);
L_100816f5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100814a0u), sp0 - 0xcu, 0);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x100814e0u), sp0 - 0xcu, 0);
L_10081707: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100816c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100816c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
