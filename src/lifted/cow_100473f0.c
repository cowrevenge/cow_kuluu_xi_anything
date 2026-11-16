/* f_0x100473f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100473f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x108u) != 0u)
    {
        eax = rd32(self + 0x108u);
        edx = in_edx;
        goto L_1004744e;
    }
    if (rd32(self + 0x100u) == 0u)
    {
        edx = rd32(self + 0x100u);
        eax = rd32(self + 0xfcu);
    }
    else
    {
        edx = rd32(self + 0x100u);
        eax = edx;
    }
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if (rd32(eax + 0xa4u) == 0u) goto L_1004744c;
    if (edx == 0u)
    {
        ecx = rd32(self + 0xfcu);
    }
    else
    {
        ecx = rd32(self + 0x100u);
    }
    if (ecx == 0u) goto L_10047443;
    g->edx = edx;
    return rd32(rd32(ecx) + 0xa4u);
L_10047443: ;
    g->edx = edx;
    return rd32(0xa4u);
L_1004744c: ;
    eax = 0u;
L_1004744e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100473f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100473f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
