/* f_0x1012dfa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012dfa0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t2 = g->edx;
    if (rd32(self + 0x1cu) <= t1)
    {
        eax = t1;
        ecx = rd32(self + 0x1cu);
        edx = t2;
        goto L_1012dfc1;
    }
    eax = t1;
    ecx = rd32(self + 0x1cu);
    edx = t2;
    t3 = ecx * 0x3cu - eax * 0x3cu;
    wr32(self + 0x20u, t3);
    g->edx = edx;
    return t3;
L_1012dfc1: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1012dfdc;
    }
    eax = t4;
    edx = t5;
    wr32(self + 0x20u, 0x1eu);
    g->edx = edx;
    return eax;
L_1012dfdc: ;
    wr8(self + 0x24u, 1u);
    wr32(self + 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1012e180u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012dfa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012dfa0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
