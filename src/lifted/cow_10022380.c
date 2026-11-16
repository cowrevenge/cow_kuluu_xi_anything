/* f_0x10022380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10022380(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 0x24u) != 0xffu)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x24u);
        goto L_10022390;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10022390: ;
    fpush(g, fr(g, (double)(int32_t)(uint8_t)eax * (double)rdf32(COW_IMG(0x10329a18u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10022380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
