/* f_0x102652a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102652a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        edx = self;
        goto L_102652ce;
    }
    eax = rd32(self);
    edx = self;
L_102652ad: ;
    if (eax == arg1) goto L_102652bf;
    if (rd32(eax + 0x1cu) != 0u)
    {
        edx = eax + 0x1cu;
        eax = rd32(eax + 0x1cu);
        goto L_102652ad;
    }
    edx = eax + 0x1cu;
    eax = rd32(eax + 0x1cu);
    g->edx = edx;
    return eax;
L_102652bf: ;
    t1 = rd32(arg1 + 0x1cu);
    wr32(edx, t1);
    wr32(arg1 + 0x1cu, 0u);
    wr32(self + 4u, rd32(self + 4u) - 1u);
    eax = t1;
L_102652ce: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102652a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102652a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
