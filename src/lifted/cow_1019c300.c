/* f_0x1019c300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019c300(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1019c372;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg2;
        edx = in_edx;
        goto L_1019c372;
    }
    t1 = rd32(COW_IMG(0x1019c378u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019c323u: goto L_1019c323;
    case 0x1019c334u: goto L_1019c334;
    case 0x1019c345u: goto L_1019c345;
    case 0x1019c364u: goto L_1019c364;
    default: rt_fatal(g, COW_IMG(0x1019c31cu), "switch");
    }
    return 0;
L_1019c323: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0x18u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1019c334: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0x18u, 1u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1019c345: ;
    t4 = (uint32_t)(int16_t)arg2 * 0x258u - 0x4b0u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x1019c510u), t4, g->ecx, g->edx, 1, 1, t4);
    t6 = g->edx;
    wr16(self + 0x22u, (uint16_t)arg2);
    g->edx = t6;
    return t5;
L_1019c364: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1019c510u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 1, 0u);
    t3 = g->edx;
    wr16(self + 0x22u, (uint16_t)arg2);
    eax = t2;
    edx = t3;
L_1019c372: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c300(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
