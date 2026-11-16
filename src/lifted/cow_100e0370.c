/* f_0x100e0370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e0370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = arg1 + rd8(arg3 + 0x10u) * 0x30u + 0x3aeb0u;
    edi = t1;
    eax = 0u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg3 + 0x11u;
    edi = t1 + 0x10u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(t1 + 2u, rd8(arg3 + 0x10u));
    wr16(t1, rd16(arg3 + 0xeu));
    wr8(t1 + 8u, 0u);
    t2 = rd32(arg3 + 8u);
    wr32(t1 + 4u, t2);
    t3 = rd32(arg3 + 4u);
    wr32(t1 + 0xcu, t3);
    wr16(t1 + 0x2cu, rd16(arg3 + 0xcu));
    if (rd32(arg3 + 8u) == 0u)
    {
        eax = (rd32(arg3 + 8u) & 0xffffff00u) | 1u;
        edx = t1;
    }
    else
    {
        eax = (rd32(arg3 + 8u) & 0xffffff00u) | 1u;
        edx = t1;
        t4 = rd16(arg3 + 0xcu);
        wr16(arg1 + 0x3bde6u, (uint16_t)t4);
        edx = (edx & 0xffff0000u) | t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
