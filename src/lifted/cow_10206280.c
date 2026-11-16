/* f_0x10206280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10206280(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_102062a2;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_102062a7;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10205270u), 0);
    t2 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x1038544cu));
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1015e910u), t1, COW_IMG(0x10621838u), t2);
L_102062a2: ;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10205230u), eax, g->ecx, in_edx, 1, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_102062a7: ;
    wr32(sp0 + 4u, COW_IMG(0x1038544cu));
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206280(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
