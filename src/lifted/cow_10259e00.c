/* f_0x10259e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10259e00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
        goto L_10259e21;
    }
    ecx = rd32(self + 4u);
    edx = in_edx;
L_10259e0a: ;
    t1 = rd32(ecx + 4u);
    wr32(self + 4u, t1);
    if (ecx != 0u)
    {
        eax = t1;
        g->edx = rd32(ecx);
        t2 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t2), ecx, 1, 1u);
        t3 = g->edx;
        edx = t3;
    }
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        goto L_10259e0a;
    }
L_10259e21: ;
    wr32(self + 8u, 0u);
    wr32(self, 0u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10259e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
