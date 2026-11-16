/* f_0x1022aa40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1022aa40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint16_t)rd32(sp0 + 4u) == 6u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1022aa5e;
    }
    eax = rd32(sp0 + 4u);
    t1 = rd32(sp0 + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, eax, t1);
L_1022aa5a: ;
    return;
L_1022aa5e: ;
    t2 = rd32(self + 8u);
    g->edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    wr8(self + 0x88u, 0u);
    if (rd32(COW_IMG(0x1057847cu)) == 0u) goto L_1022aa5a;
    eax = t3;
    ecx = rd32(COW_IMG(0x1057847cu));
    edx = t4;
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10150cc0u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022aa40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022aa40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
