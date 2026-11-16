/* f_0x1022f310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022f310(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    edx = in_edx;
    esi = COW_IMG(0x106689dcu);
    edi = 0xbu;
L_1022f31c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1022ee10u), esi - 0x94u, 0);
    t2 = g->edx;
    if (edi != 1u)
    {
        eax = t1;
        edx = t2;
        esi = esi - 0x94u;
        edi = edi - 1u;
        goto L_1022f31c;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022f310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
