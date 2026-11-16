/* f_0x10151340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10151340(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x70u) != 0u) goto L_10151350;
    if (rd32(self + 0x78u) == 0u)
    {
        eax = in_eax;
        goto L_10151375;
    }
L_10151350: ;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100eba10u), 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10151375;
    }
    eax = t1;
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x70u, 0u);
    wr8(self + 0x7cu, 0u);
    wr32(self + 0xc0u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10151375: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10151340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10151340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
