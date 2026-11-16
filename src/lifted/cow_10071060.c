/* f_0x10071060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10071060(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100741e0u), rd32(COW_IMG(0x1047d128u)), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_10071077;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax;
L_10071077: ;
    if (rd32(self) != 0u)
    {
        eax = rd32(self);
        goto L_10071081;
    }
    eax = rd32(self);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10071081: ;
    if (rd32(eax) != 0u)
    {
        eax = rd32(eax);
        goto L_1007108b;
    }
    eax = rd32(eax);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1007108b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10071f80u), eax, 0);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | t4 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10071060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
