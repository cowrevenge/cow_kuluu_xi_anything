/* f_0x10264b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10264b30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xd4u) == 0u) goto L_10264b5f;
    eax = rd32(self + 0xd4u);
    if (rd32(self + 0xd0u) == 0u) goto L_10264b5f;
    edx = rd32(self + 0xd0u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(rd32(eax) + 0xcu), self + 0xcu, 7, eax, self + 0xcu, 0u, arg1, 0u, edx, 2u);
    return t1;
L_10264b5f: ;
    return 0x80004005u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264b30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
