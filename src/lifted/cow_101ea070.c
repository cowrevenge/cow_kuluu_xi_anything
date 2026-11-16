/* f_0x101ea070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ea070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101e8da0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t4;
        edx = t6;
        t7 = rd32(rd32(eax) + 0x250u);
        t8 = rd32(eax);
        wr32(self + 0x2cu, t7);
        eax = t8;
        ecx = t7;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    if (t9 != 0u)
    {
        eax = t9;
        ecx = COW_IMG(0x10381e16u);
        edx = self + 0x18u;
L_101ea0a8: ;
        t10 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t10);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381e20u))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_101ea0a8;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ea070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
