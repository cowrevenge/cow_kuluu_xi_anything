/* f_0x101d3200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d3200(Guest* g)
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
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    t1 = rd8(COW_IMG(0x10485641u));
    t2 = rd8(COW_IMG(0x10485643u));
    wr8(sp0 - 0x14u, (uint8_t)t1);
    t3 = rd8(COW_IMG(0x10485642u));
    t4 = rd8(COW_IMG(0x10485640u));
    wr8(sp0 - 3u, (uint8_t)t3);
    wr8(sp0 - 2u, (uint8_t)t3 != 0u);
    t5 = rd32(COW_IMG(0x106631d4u));
    wr8(sp0 - 0x13u, (uint8_t)t2);
    wr8(sp0 - 4u, (uint8_t)t4);
    if (t5 == 0u)
    {
        eax = t5;
        edx = (in_edx & 0xffffff00u) | t4;
    }
    else
    {
        eax = t5;
        edx = (in_edx & 0xffffff00u) | t4;
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, in_edi);
        wr8(eax + 0x810u, 1u);
        esi = sp0 - 0x18u;
        edi = eax + 0x7f8u;
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d3200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
