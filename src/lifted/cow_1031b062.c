/* f_0x1031b062 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1031b062(Guest* g)
{
    double x0;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebp = g->ebp;
    const double xin0 = ST(0);

    wrf80(in_ebp - 0x9eu, xin0);
    if ((rd8(in_ebp - 0x97u) & 0x40u) == 0u)
    {
        x0 = rdf80(in_ebp - 0x9eu);
        goto L_1031b07f;
    }
    x0 = rdf80(in_ebp - 0x9eu);
    wr8(in_ebp - 0x90u, 7u);
    g->top = (g->top + 1u) & 7u;
    fpush(g, x0);
    return in_eax;
L_1031b07f: ;
    wr8(in_ebp - 0x90u, 1u);
    g->top = (g->top + 1u) & 7u;
    fpush(g, fr(g, x0 + rdf64(COW_IMG(0x103d0994u))));
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b062(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b062(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
