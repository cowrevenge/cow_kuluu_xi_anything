/* f_0x100977f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100977f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
        edx = in_edx;
        goto L_10097822;
    }
    eax = rd32(self + 0x120u);
    if ((rd8(self + 0x128u) & 8u) != 0u)
    {
        edx = in_edx;
        goto L_10097822;
    }
    if ((int8_t)eax >= 0)
    {
        edx = in_edx;
        goto L_10097825;
    }
    if (rd8(COW_IMG(0x104807f5u)) == 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
        goto L_10097825;
    }
    edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
    if (rd8(self + 0x12eu) & 1u) goto L_10097822;
    if ((eax & 0x20000u) == 0u) goto L_10097834;
L_10097822: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10097825: ;
    if ((eax >> 8u & 0xc0u) != 0u) goto L_10097822;
    if ((int8_t)rd8(self + 0x130u) < 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x130u);
        goto L_10097822;
    }
L_10097834: ;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x100973f0u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100977f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100977f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
