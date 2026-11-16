/* f_0x10053860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10053860(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 4u);

    if (rd32(rd32(sp0 + 4u)) == 1u)
    {
        eax = rd32(rd32(sp0 + 4u)) - 1u;
        goto L_1005386e;
    }
    eax = rd32(rd32(sp0 + 4u)) - 1u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = in_edx;
        goto L_1005387e;
    }
    eax = eax - 3u;
L_1005386e: ;
    t1 = rd32(self + 0x14u);
    wr32(sp0 + 4u, t1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10071050u), sp0 + 4u, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1005387e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10053860(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
