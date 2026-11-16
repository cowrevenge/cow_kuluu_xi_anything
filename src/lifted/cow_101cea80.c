/* f_0x101cea80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101cea80(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        cow_thiscall(g, rd32(t5 + 0x30u), t4, 1, arg1);
        t6 = g->edx;
        if (rd32(self + 0x64u) != 0u)
        {
            ecx = rd32(self + 0x64u);
            edx = t6;
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x30u), ecx, 1, arg1);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cea80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cea80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
