/* f_0x10120cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_10120cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;

    t1 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    t2 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u);
    if ((t2 & 0x40u) == 0u)
    {
        ecx = t2;
        goto L_10120cfd;
    }
    eax = t2 & 0x40u;
    g->edx = 0u;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return eax;
L_10120cfd: ;
    if ((ecx & 0x80u) == 0u) goto L_10120d13;
    g->edx = 0u;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return 0u;
L_10120d13: ;
    g->edx = 0u;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
