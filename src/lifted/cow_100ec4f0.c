/* f_0x100ec4f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec4f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    t2 = rd32(COW_IMG(0x104dfd98u));
    t3 = rd8(arg3 + 8u);
    t4 = rd8(arg3 + 9u);
    t5 = rd32(arg3 + 4u);
    wr32(t2 + t3 * 0xdecu + t4 * 0x2cu + 0x986cu, t1);
    t6 = rd8(arg3 + 0xau);
    wr8(t2 + t3 * 0xdecu + t4 * 0x2cu + 0x9870u, (uint8_t)t6);
    if (t5 != 0u)
    {
        ecx = (arg3 & 0xffffff00u) | t6;
        edx = t2;
    }
    else
    {
        edx = t2;
        edi = t2 + t3 * 0xdecu + t4 * 0x2cu + 0x9868u;
        eax = 0u;
        ecx = 0xbu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x800u);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec4f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec4f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
