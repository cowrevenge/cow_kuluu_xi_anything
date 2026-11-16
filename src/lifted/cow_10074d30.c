/* f_0x10074d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10074d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    edx = in_edx;
L_10074d38: ;
    ecx = rd32(self + 0xd50u);
L_10074d3e: ;
    if (ecx == 0u) goto L_10074d53;
    if (rd32(ecx + 0x1cu) == arg1) goto L_10074d4c;
    ecx = rd32(ecx + 0xcu);
    goto L_10074d3e;
L_10074d4c: ;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10074ab0u), eax, ecx, edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    goto L_10074d38;
L_10074d53: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074d30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
