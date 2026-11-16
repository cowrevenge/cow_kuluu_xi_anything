/* f_0x1025ca40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025ca40(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x18u) >= rd32(self + 0x1cu))
    {
        edx = rd32(self + 0x18u);
        goto L_1025ca7b;
    }
    edx = rd32(self + 0x18u);
    t1 = rd32(self + 0x14u);
    t2 = rd32(self + 0x20u);
    esi = arg1;
    edi = t1 * edx + t2;
    ecx = t1 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t1 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t3 = rd32(self + 0x18u) + 1u;
    wr32(self + 0x18u, t3);
    g->edx = t1;
    return (self & 0xffffff00u) | 1u;
L_1025ca7b: ;
    g->edx = edx;
    return self & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ca40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ca40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
