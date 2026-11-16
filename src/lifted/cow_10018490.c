/* f_0x10018490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018490(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10329f8cu));
    eax = in_eax;
    edx = in_edx;
    esi = self + 0x19cu;
    edi = 2u;
L_100184a7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10018590u), esi - 0xcu, 0);
    t2 = g->edx;
    if (edi != 1u)
    {
        eax = t1;
        edx = t2;
        esi = esi - 0xcu;
        edi = edi - 1u;
        goto L_100184a7;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10018410u), eax, self + 0x18u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018490(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
