/* f_0x1032335b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1032335b(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x98u, 0x94u);
    wr32(sp0 - 0x9cu, sp0 - 0x98u);
    g->eax = sp0 - 0x98u;
    g->esp = sp0 - 0x94u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103291a8u)), self, 2, sp0 - 0x98u, 0x94u);
    if (t1 == 0u) goto L_1032338d;
    if (rd32(sp0 - 0x88u) != 2u) goto L_1032338d;
    wr32(sp0 - 0x98u, 1u);
    return 1u;
L_1032338d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032335b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032335b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
