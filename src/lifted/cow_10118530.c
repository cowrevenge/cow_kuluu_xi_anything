/* f_0x10118530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10118530(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x88u) != 0u)
    {
        eax = rd32(self + 0x88u);
        ecx = self;
        edx = in_edx;
        goto L_10118551;
    }
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x2cu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0x88u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101185b1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_10118551: ;
    if ((uint16_t)arg2 != 0xffffu)
    {
        eax = (uint32_t)(int16_t)(rd16(self + 0x3eu) - 8u);
        ecx = (uint32_t)(int16_t)rd16(self + 0x3cu);
        edx = (edx & 0xffff0000u) | (uint16_t)arg2;
        goto L_10118591;
    }
    eax = (uint32_t)(int16_t)(rd16(self + 0x3eu) - 8u);
    ecx = (uint32_t)(int16_t)rd16(self + 0x3cu);
    t4 = (uint32_t)(int16_t)rd16(self + 0x58u);
    t5 = (uint32_t)(int16_t)rd16(self + 0x40u) - ecx;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10234630u), rd32(self + 0x88u), 5, eax, ecx, t5, t4, (uint32_t)(int16_t)arg1);
    return t6;
L_10118591: ;
    t7 = (uint32_t)(int16_t)rd16(self + 0x40u) - ecx;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10234630u), rd32(self + 0x88u), 5, eax, ecx, t7, (uint32_t)(int16_t)edx, (uint32_t)(int16_t)arg1);
    eax = t8;
L_101185b1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118530(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
