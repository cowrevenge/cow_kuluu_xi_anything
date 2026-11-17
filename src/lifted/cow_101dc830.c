/* f_0x101dc830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101dc830(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x1057847cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
    }
    t1 = rd32(self + 8u);
    g->edx = t1;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x58u)) + 0x28u), rd32(self + 0x58u), 1, t1);
    t2 = g->edx;
    g->eax = rd32(rd32(self + 0x58u));
    g->edx = t2;
    t3 = rd32(rd32(self + 0x58u));
    t4 = cow_thiscall(g, rd32(t3 + 0x54u), rd32(self + 0x58u), 0);
    t5 = g->edx;
    if (t4 != 0x11u)
    {
        eax = t4;
        ecx = rd32(COW_IMG(0x10663740u));
        edx = t5;
        goto L_101dc872;
    }
    eax = t4;
    ecx = rd32(COW_IMG(0x10663740u));
    edx = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x101f2640u), ecx, 0);
    t7 = g->edx;
    g->esp = sp0;
    g->edx = t7;
    return cow_tailcall(g, COW_IMG(0x101dc1d0u), t6, self, t7);
L_101dc872: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101f2600u), ecx, 0);
    t9 = g->edx;
    g->esp = sp0;
    g->edx = t9;
    return cow_tailcall(g, COW_IMG(0x101dc1d0u), t8, self, t9);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dc830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dc830(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
