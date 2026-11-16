/* f_0x101d7080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d7080(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = self;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101d6e00u), self, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_101d709a;
    }
    return 1u;
L_101d709a: ;
    if (arg1 != rd32(edx + 4u) - 1u)
    {
        ecx = rd32(edx + 4u);
        t3 = ecx * 8u - arg1 * 8u - 8u;
        esi = arg1 * 8u + edx + 0x10u;
        edi = arg1 * 8u + edx + 8u;
        ecx = t3 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t3 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(edx + rd32(edx + 4u) * 8u + 4u, 0xffffffffu);
    }
    t4 = rd32(edx + 4u) - 1u;
    wr32(edx + 4u, t4);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7080(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
