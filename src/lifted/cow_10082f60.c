/* f_0x10082f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10082f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(COW_IMG(0x1047d4f8u), 0u);
    if (rd32(self + 0x70u) == 0u) goto L_10082f98;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        t3 = rd32(self + 0x70u);
        g->esp = sp0 - 4u;
        t4 = cow_fastcall(g, COW_IMG(0x100979b0u), t3, edx, 0);
        t5 = g->ecx;
        eax = t4;
        ecx = t5;
        edx = COW_IMG(0x1047d4f8u);
L_10082f87: ;
        t6 = rd8(eax);
        wr8(edx, (uint8_t)t6);
        if ((uint8_t)t6 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t6;
            edx = edx + 1u;
            goto L_10082f87;
        }
        edx = edx + 1u;
    }
    g->edx = edx;
    return COW_IMG(0x1047d4f8u);
L_10082f98: ;
    return self + 0xb8u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10082f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
