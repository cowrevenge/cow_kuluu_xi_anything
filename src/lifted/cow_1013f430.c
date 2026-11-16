/* f_0x1013f430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013f430(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    g->edx = self;
    t1 = rd32(COW_IMG(0x10578214u));
    t2 = cow_call_regs(g, COW_IMG(0x1013f000u), in_eax, t1, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd16(t4 + 0x22u) != (uint16_t)t2)
    {
        eax = t2;
        edx = t4;
        goto L_1013f44e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x1013f030u), eax, ecx, g->edx, 1, 0);
    t6 = g->edx;
    if (rd16(t6 + 0x1cu) == (uint16_t)t5)
    {
        eax = t5;
        edx = t6;
        goto L_1013f455;
    }
    eax = t5;
    edx = t6;
L_1013f44e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x1013f3a0u), edx, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1013f455: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f430(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
