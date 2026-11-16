/* f_0x101d7210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d7210(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 4u) goto L_101d7263;
    t1 = rd32(COW_IMG(0x101d7268u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101d7222u: goto L_101d7222;
    case 0x101d7240u: goto L_101d7240;
    case 0x101d725eu: goto L_101d725e;
    case 0x101d7263u: goto L_101d7263;
    default: rt_fatal(g, COW_IMG(0x101d721bu), "switch");
    }
    return 0;
L_101d7222: ;
    t4 = rd16(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 2u + 0x18u);
    wr16(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 2u + 0x1cu, (uint16_t)t4);
    t5 = rd16(self + 0x16u);
    wr16(self + (uint32_t)(int16_t)t5 * 2u + 0x18u, (uint16_t)(rd16(self + (uint32_t)(int16_t)t5 * 2u + 0x18u) + 1u));
    g->edx = (in_edx & 0xffff0000u) | t4;
    return self + (uint32_t)(int16_t)t5 * 2u + 0x18u;
L_101d7240: ;
    t2 = rd16(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 2u + 0x18u);
    wr16(self + (uint32_t)(int16_t)rd16(self + 0x16u) * 2u + 0x1cu, (uint16_t)t2);
    t3 = rd16(self + 0x16u);
    wr16(self + (uint32_t)(int16_t)t3 * 2u + 0x18u, (uint16_t)(rd16(self + (uint32_t)(int16_t)t3 * 2u + 0x18u) - 1u));
    g->edx = (in_edx & 0xffff0000u) | t2;
    return self + (uint32_t)(int16_t)t3 * 2u + 0x18u;
L_101d725e: ;
    wr16(self + 0x16u, rd16(self + 0x16u) ^ 1u);
L_101d7263: ;
    return (uint32_t)(int16_t)arg1 - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7210(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
