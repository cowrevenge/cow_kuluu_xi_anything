/* f_0x102d13f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d13f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);

    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, t1);
    t3 = arg4 + t2 * 0x218u + rd32(sp0 + 8u) * 0x20u;
    wr32(sp0 + 4u, t3);
    eax = t2 * 0x218u;
    ecx = t2;
    edx = 0u;
    ebx = 0xffffffffu;
    ebp = t3 + 0x12cu;
L_102d142b: ;
    if ((int32_t)rd32(sp0 + 0xcu) > (int32_t)rd32(rd32(ebp) + 0x14u))
    {
        edi = rd32(rd32(ebp) + 0x14u);
        wr32(sp0 + 0xcu, edi);
        ebx = edx;
    }
    if ((int32_t)(edx + 1u) < 7)
    {
        edx = edx + 1u;
        ebp = ebp + 4u;
        goto L_102d142b;
    }
    if ((int32_t)ebx >= 0) goto L_102d1451;
    return 0u;
L_102d1451: ;
    t4 = rd32(arg4 + eax + 0x120u);
    t5 = rd32(arg4 + eax + 0x124u);
    t6 = rd32(arg4 + ebx * 4u + ecx * 0x218u + rd32(sp0 + 8u) * 0x20u + 0x12cu);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t6);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102d14d0u), 4, t6, t5, t4, arg4);
    if ((int32_t)ebx < 6)
    {
        ebp = arg4 + ebx * 4u + ecx * 0x218u + t7 * 0x20u + 0x12cu;
        edi = ebx + ecx * 0x86u + t7 * 8u;
        esi = arg4 + edi * 4u + 0x130u;
        edi = ebp;
        ecx = 6u - ebx;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    t8 = rd32(rd32(sp0 + 4u) + 0x128u) - 1u;
    wr32(rd32(sp0 + 4u) + 0x128u, t8);
    return rd32(sp0 + 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d13f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d13f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
