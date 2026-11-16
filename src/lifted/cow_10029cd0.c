/* f_0x10029cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10029cd0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    t1 = rd32(self + 8u);
    wr32(self, COW_IMG(0x1032a6e0u));
    if (t1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t2 = g->edx;
        edx = t2;
    }
    t3 = rd32(self + 8u);
    wr32(sp0 - 4u, t3);
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10071050u), sp0 - 4u, 0);
    t5 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        ecx = rd32(self + 4u);
        wr32(sp0 - 0xcu, 1u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t6 = rd32(ecx);
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 1, 1u);
        t8 = g->edx;
        wr32(self + 4u, 0u);
        eax = t7;
        edx = t8;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10029c00u), self + 0x10u, 0);
    g->esi = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10029cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
