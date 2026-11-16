/* f_0x1023f700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023f700(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) == 1u)
    {
        eax = rd32(self + 0x18u);
        edx = 1u;
        goto L_1023f771;
    }
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = 1u;
        goto L_1023f771;
    }
    t1 = rd32(COW_IMG(0x1023f774u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1023f720u: goto L_1023f720;
    case 0x1023f73bu: goto L_1023f73b;
    case 0x1023f755u: goto L_1023f755;
    case 0x1023f771u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = 1u; goto L_1023f771;
    default: rt_fatal(g, COW_IMG(0x1023f719u), "switch");
    }
    return 0;
L_1023f720: ;
    t9 = (uint32_t)(int16_t)arg2 - 1u;
    t10 = rd32(self + 0x30u);
    wr32(self + 0x2cu, t9);
    if ((uint32_t)(int16_t)arg2 - 1u == t10)
    {
        eax = t9;
        edx = t10;
        goto L_1023f771;
    }
    eax = t9;
    edx = t10;
    wr32(self + 0x30u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1023f73b: ;
    t5 = rd32(self + 8u);
    wr32(self + 0x18u, 1u);
    wr8(t5 + 0x5du, 1u);
    t6 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x2cu, t6);
    g->eax = t5;
    g->edx = t6;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1023f755: ;
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        edx = 1u;
    }
    else
    {
        t2 = rd32(self + 8u);
        wr32(self + 0x18u, 1u);
        wr8(t2 + 0x5du, 1u);
        wr32(self + 0x2cu, 0xffffffffu);
        g->eax = t2;
        g->edx = 1u;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_1023f771: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
