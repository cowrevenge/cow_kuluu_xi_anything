/* f_0x1023c4f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023c4f0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1cu) == 1u)
    {
        eax = rd32(self + 0x1cu);
        edx = 1u;
        goto L_1023c539;
    }
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = 1u;
        goto L_1023c539;
    }
    t1 = rd32(COW_IMG(0x1023c540u) + rd8(COW_IMG(0x1023c54cu) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x1023c519u: goto L_1023c519;
    case 0x1023c522u: goto L_1023c522;
    case 0x1023c539u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = 1u; goto L_1023c539;
    default: rt_fatal(g, COW_IMG(0x1023c512u), "switch");
    }
    return 0;
L_1023c519: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1023c522: ;
    t2 = rd32(self + 8u);
    wr32(self + 0x1cu, 1u);
    wr8(t2 + 0x5du, 1u);
    t3 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x18u, t3);
    g->eax = t2;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_1023c539: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c4f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023c4f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
