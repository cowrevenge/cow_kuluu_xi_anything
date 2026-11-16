/* f_0x101a1470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a1470(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, self + 0x9bu, self + 4u, 0x54fu, in_edi, in_ebp);
    t1 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, self + 0x5f0u, self + 0x5ecu, 0x24u, self + 0x9bu, self + 4u);
    if ((int32_t)arg2 > 150) goto L_101a14e8;
    esi = arg1;
    edi = self + 4u;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg2 + self + 4u, 0u);
    wr32(self + 0x5ecu, arg2);
    if ((int32_t)rd32(self + 0x614u) < 9)
    {
        eax = rd32(self + 0x614u);
        wr32(self + 0x614u, eax + 1u);
    }
    return 1u;
L_101a14e8: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
