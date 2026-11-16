/* f_0x100196e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100196e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032a160u));
    edx = in_edx;
    esi = self + 0x60u;
    edi = 4u;
L_100196f3: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (edi != 1u)
    {
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_100196f3;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1001b510u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100196e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100196e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
