/* f_0x1002b550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002b550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    t1 = rd32(self + 0x44u);
    wr32(self, COW_IMG(0x1032a75cu));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t2 = rd32(ecx);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t2 + 0x18u), ecx, 1, 1u);
        t4 = g->edx;
        wr32(self + 0x44u, 0u);
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10038a60u), self + 0x9cu, 0);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x100252f0u), self + 0x90u, t6, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10025c30u), self + 0x8cu, 0);
    t10 = g->edx;
    t11 = cow_fastcall(g, COW_IMG(0x1001d1f0u), self + 0x74u, t10, 0);
    t12 = g->edx;
    g->esp = sp0;
    g->edx = t12;
    cow_tailcall(g, COW_IMG(0x100337c0u), t11, self + 0x48u, t12);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002b550(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
