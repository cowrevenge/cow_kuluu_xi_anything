/* f_0x1015e850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1015e850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x54u) != arg1)
    {
        ecx = rd32(self + 0x54u);
        if (ecx == 0u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10119200u), ecx, 1, 0u);
            t1 = g->edx;
            t2 = rd32(self + 0x54u);
            wr8(t2 + 0x98u, 0u);
            eax = t2;
            edx = t1;
        }
        t3 = rd32(self + 0x54u);
        wr32(self + 0x54u, arg1);
        wr32(self + 0x58u, t3);
        if (arg1 != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x10119200u), arg1, 1, 1u);
            t5 = g->edx;
            cow_thiscall(g, COW_IMG(0x10124b70u), rd32(COW_IMG(0x104e1d4cu)), 0);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015e850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
