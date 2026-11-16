/* f_0x101ba030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ba030(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) != 0u)
    {
        esi = rd32(self + 4u);
        goto L_101ba043;
    }
    return 1u;
L_101ba043: ;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101b9bc0u), esi, 1, 0u);
    t2 = g->edx;
    if (rd32(esi + 0x120u) == 0u) goto L_101ba069;
    eax = t1;
    edx = t2;
    esi = rd32(esi + 0x120u);
L_101ba056: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101b9bc0u), esi, 1, 0u);
    t4 = g->edx;
    if (rd32(esi + 0x120u) != 0u)
    {
        eax = t3;
        edx = t4;
        esi = rd32(esi + 0x120u);
        goto L_101ba056;
    }
L_101ba069: ;
    wr8(self + 8u, 1u);
    wr8(self + 9u, 1u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
