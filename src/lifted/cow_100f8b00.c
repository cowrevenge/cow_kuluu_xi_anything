/* f_0x100f8b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100f8b00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    int64_t q4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg3) >> 9u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100dddb0u), 2, 0x14u, t1);
    t3 = g->edx;
    q4 = (uint64_t)cow_mulu(0xaaaaaaabu, t2);
    if ((int32_t)((cow_qhi(q4) >> 3u) + 1u) <= 0)
    {
        edx = (cow_qhi(q4) >> 3u) + 1u;
        goto L_100f8bcd;
    }
    edx = (cow_qhi(q4) >> 3u) + 1u;
    eax = arg3 + 8u;
L_100f8b31: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(eax + 6u) * 0x38u + 0x464cu, rd32(eax));
    wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(eax + 6u) * 0x38u + 0x4658u, rd16(eax + 4u));
    wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(eax + 6u) * 0x38u + 0x4652u, rd16(eax + 8u));
    wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(eax + 6u) * 0x38u + 0x4654u, rd16(eax + 0xau));
    if (edx != 1u)
    {
        eax = eax + 0xcu;
        edx = edx - 1u;
        goto L_100f8b31;
    }
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(t5 + 0x57ccu, 1u);
    g->edx = t5;
    return 1u;
L_100f8bcd: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x57ccu, 1u);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8b00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
