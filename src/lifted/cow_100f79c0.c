/* f_0x100f79c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f79c0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0)
    {
        edx = in_edx;
        goto L_100f79f5;
    }
    if (rd8(rd32(COW_IMG(0x104df90cu)) + 0x34u) != 0u)
    {
        edi = rd32(COW_IMG(0x104df90cu));
        goto L_100f79e0;
    }
    edi = rd32(COW_IMG(0x104df90cu));
    wr8(rd32(edi + 0x30u) + 1u, 0u);
    return 1u;
L_100f79e0: ;
    esi = edi + 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(COW_IMG(0x104df90cu));
    wr8(t1 + 0x34u, 0u);
    edx = t1;
L_100f79f5: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f79c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f79c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
