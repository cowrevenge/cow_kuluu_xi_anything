/* f_0x1013f2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f2e0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1013f305;
    if ((uint32_t)(int16_t)arg1 == 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_1013f2f5;
    }
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_1013f319;
    }
    eax = (uint32_t)(int16_t)arg1 - 8u;
L_1013f2f5: ;
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1013f320u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10037e90u), t2, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1013f305: ;
    if ((uint32_t)(int16_t)arg2 != 1u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t6 = cow_stdcall(g, COW_IMG(0x100ebd70u), 0);
        t7 = g->edx;
        t8 = cow_call_regs(g, COW_IMG(0x1013f320u), g->eax, g->ecx, t7, 1, 0);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
L_1013f319: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f2e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
