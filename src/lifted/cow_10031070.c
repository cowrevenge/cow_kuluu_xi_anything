/* f_0x10031070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10031070(Guest* g)
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

    wr32(self, COW_IMG(0x1032a81cu));
    eax = in_eax;
    edx = in_edx;
    esi = self + 0x4058u;
    edi = 0x101u;
L_10031086: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t2 = g->edx;
    if (edi != 1u)
    {
        eax = t1;
        edx = t2;
        esi = esi - 0x40u;
        edi = edi - 1u;
        goto L_10031086;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10030c60u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10031070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10031070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
