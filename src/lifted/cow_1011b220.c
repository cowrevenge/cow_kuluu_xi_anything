/* f_0x1011b220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011b220(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(self + 0x18u) <= (int32_t)((uint32_t)(int16_t)arg1 - 1u))
    {
        eax = (uint32_t)(int16_t)arg1;
        goto L_1011b280;
    }
    if ((uint16_t)arg1 == 0u)
    {
        eax = (uint32_t)(int16_t)arg1;
        goto L_1011b280;
    }
    if (rd16(rd32((uint32_t)(int16_t)arg1 * 0x14u + rd32(self + 4u) - 0x14u) + 0x12u) != (uint16_t)arg1)
    {
        eax = rd32((uint32_t)(int16_t)arg1 * 0x14u + rd32(self + 4u) - 0x14u);
        goto L_1011b280;
    }
    eax = rd32((uint32_t)(int16_t)arg1 * 0x14u + rd32(self + 4u) - 0x14u);
    if ((uint32_t)(int16_t)arg2 - 1u > 3u) goto L_1011b280;
    t1 = rd32(COW_IMG(0x1011b288u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1011b260u: goto L_1011b260;
    case 0x1011b268u: goto L_1011b268;
    case 0x1011b270u: goto L_1011b270;
    case 0x1011b278u: goto L_1011b278;
    default: rt_fatal(g, COW_IMG(0x1011b259u), "switch");
    }
    return 0;
L_1011b260: ;
    return (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0x18u);
L_1011b268: ;
    return (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0x17u);
L_1011b270: ;
    return (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0x1au);
L_1011b278: ;
    return (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0x19u);
L_1011b280: ;
    return eax & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011b220(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
