/* f_0x1002c800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1002c800(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) != 0u)
    {
        edx = rd32(self + 8u);
        goto L_1002c82e;
    }
    edx = rd32(self + 8u);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_1002c817;
    }
    wr32(arg1, edx);
    g->edx = edx;
    return arg1;
L_1002c817: ;
    if (edx != 0u) goto L_1002c82e;
    t1 = rd32(self + 4u);
    wr32(arg1, t1);
    wr32(t1 + 8u, 0u);
    g->edx = arg1;
    return eax;
L_1002c82e: ;
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_1002c83b;
    }
    eax = rd32(self + 4u);
    wr32(edx + 4u, eax);
    g->edx = edx;
    return eax;
L_1002c83b: ;
    wr32(edx + 4u, eax);
    t2 = rd32(self + 8u);
    wr32(eax + 8u, t2);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002c800(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
