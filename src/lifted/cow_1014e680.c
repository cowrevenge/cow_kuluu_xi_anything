/* f_0x1014e680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014e680(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1014e6b7;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1014e706;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
    t1 = g->edx;
    t2 = rd32(self + 8u);
    g->edx = t1;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1014e6b7: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1014e6eb;
    if ((uint32_t)(int16_t)arg2 - 1u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_1014e6f6;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
    t6 = g->edx;
    t7 = rd32(self + 8u);
    g->edx = t6;
    t8 = cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1014e6eb: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1014ce80u), rd32(COW_IMG(0x10578450u)), 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_1014e6f6: ;
    t12 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t12, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_1014e706: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e680(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
