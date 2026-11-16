/* f_0x102dc53d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102dc53d(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 <= rd32(rd32(arg1 + 0x54u) + 4u))
    {
        edx = in_edx;
        ebx = rd32(arg1 + 0x54u);
    }
    else
    {
        ebx = rd32(arg1 + 0x54u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, self, in_edx, 1, 2, arg1, COW_IMG(0x10346120u));
        t1 = g->edx;
        edx = t1;
    }
    t2 = rd32(ebx);
    esi = t2;
    edi = arg2;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(ebx, arg3 + rd32(ebx));
    wr32(ebx + 4u, rd32(ebx + 4u) - arg3);
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dc53d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dc53d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
