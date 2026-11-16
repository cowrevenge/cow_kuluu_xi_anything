/* f_0x10141ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_10141ed0(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, arg1);
    t2 = g->edx;
    if (t1 == 0u) goto L_10141f03;
    edx = t2;
    esi = t1;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1015b190u), esi, 0);
    if ((uint8_t)t3 == 0u) goto L_10141f03;
    if (rd32(esi + 0x152cu) == 0u) goto L_10141f03;
    esi = rd32(esi + 0x152cu);
    return rd16(esi);
L_10141f03: ;
    return 0xffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10141ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
