/* f_0x1027d100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1027d100(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 > 0) goto L_1027d10f;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_1027d10f: ;
    if ((int32_t)arg1 < (int32_t)rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        goto L_1027d11e;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_1027d11e: ;
    wr32(sp0 + 8u, eax - 1u);
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) / (double)(int32_t)arg1));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027d100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
