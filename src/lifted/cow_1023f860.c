/* f_0x1023f860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1023f860(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 1u)
    {
        eax = rd32(self + 0x14u);
        edx = 1u;
        goto L_1023f893;
    }
    if ((uint32_t)(int16_t)arg1 == 2u) goto L_1023f87e;
    if ((uint32_t)(int16_t)arg1 - 2u == 3u) goto L_1023f896;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = 1u;
        goto L_1023f893;
    }
L_1023f87e: ;
    t4 = rd32(self + 8u);
    wr8(t4 + 0x5du, 1u);
    wr32(self + 0x14u, 1u);
    wr32(self + 0x18u, 0u);
    g->eax = t4;
    g->edx = 1u;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1023f893: ;
    g->edx = edx;
    return eax;
L_1023f896: ;
    t1 = rd32(self + 8u);
    wr8(t1 + 0x5du, 1u);
    wr32(self + 0x14u, 1u);
    wr32(self + 0x18u, 1u);
    g->eax = t1;
    g->edx = 1u;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f860(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
