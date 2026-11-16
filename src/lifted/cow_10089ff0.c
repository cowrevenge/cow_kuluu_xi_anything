/* f_0x10089ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10089ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(self + 0x13cu) & 0x3f000u) != 0u)
    {
        ecx = rd32(self + 0x13cu);
        t1 = (((ecx & 0xfffff000u) - 1u ^ ecx) & 0x3f000u) ^ ecx;
        wr32(self + 0x13cu, t1);
        if ((((ecx & 0xfffff000u) - 1u ^ ecx ^ ecx) & 0x3f000u) == 0u)
        {
            eax = t1;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t2 = cow_call_regs(g, COW_IMG(0x1008a080u), eax, self, g->edx, 0, 1, 2u);
            t3 = g->edx;
            g->edx = t3;
            t4 = cow_call_regs(g, COW_IMG(0x1008a080u), t2, self, g->edx, 0, 1, 5u);
            t5 = g->edx;
            g->edx = t5;
            t6 = cow_call_regs(g, COW_IMG(0x1008a080u), t4, self, g->edx, 0, 1, 8u);
            t7 = g->edx;
            cow_call_regs(g, COW_IMG(0x1008a080u), t6, self, g->edx, 0, 1, 0xbu);
            t8 = g->ecx;
            t9 = rd32(self + 0x13cu) & 0xfffc0fffu;
            wr32(self + 0x13cu, t9);
            if ((uint8_t)arg1 != 0u)
            {
                eax = t9;
                t10 = (eax & 0xfffdefffu) | 0x1e000u;
                wr32(self + 0x13cu, t10);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10089ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10089ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
