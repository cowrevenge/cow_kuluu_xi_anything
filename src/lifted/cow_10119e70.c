/* f_0x10119e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10119e70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10119ef5;
    }
    eax = rd32(self + 0x14u);
    wr32(sp0 - 0x20u, rd32(eax));
    t1 = rd32(eax + 4u);
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(eax + 8u);
    wr32(sp0 - 0x18u, t2);
    t3 = rd32(eax + 0xcu);
    wr32(sp0 - 0x14u, t3);
    if (rd32(self + 4u) != 0u) goto L_10119eba;
    edx = t3;
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, sp0 - 0x20u);
    wr32(self + 4u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        goto L_10119ef5;
    }
L_10119eba: ;
    if (rd16(rd32(self + 0x14u) + 0x20u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10119edc;
    }
    eax = rd32(self + 0x14u);
    t5 = rd32(self + 4u);
    wr8(self + 0x30u, 1u);
    t6 = rd32(rd32(t5) + (uint32_t)(int16_t)rd16(eax + 0x20u) * 4u);
    t7 = rd32(t5);
    wr32(self + 0xcu, t6);
    return t7;
L_10119edc: ;
    wr8(self + 0x30u, 0u);
    wr16(self + 0x2eu, 0u);
    t8 = rd32(rd32(rd32(self + 4u)) + (uint32_t)(int16_t)rd16(eax + 0x20u) * 4u);
    t9 = rd32(self + 4u);
    wr32(self + 0xcu, t8);
    eax = t9;
L_10119ef5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119e70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
