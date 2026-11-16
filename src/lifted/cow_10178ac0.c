/* f_0x10178ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10178ac0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 * 0x78u + self + 0x6cu) == 0u)
    {
        eax = arg1 * 0x78u + self + 0x60u;
        edx = in_edx;
    }
    else
    {
        t1 = arg1 * 0x78u + self + 0x60u;
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x101679a0u), self + 0x178u, 1, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x1017b110u), self, edx, 1, arg1);
    wr32(self + 0x50u, 0u);
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10178ac0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
