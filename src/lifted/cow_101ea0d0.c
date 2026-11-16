/* f_0x101ea0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    t1 = cow_thiscall(g, COW_IMG(0x101ea070u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        t6 = rd32(rd32(eax) + 0x248u);
        wr32(self + 0x34u, t6);
        t7 = rd32(rd32(eax) + 0x264u);
        wr32(self + 0x38u, t7);
        t8 = rd32(rd32(eax) + 0x268u);
        wr32(self + 0x3cu, t8);
        t9 = rd32(rd32(eax) + 0x234u);
        wr32(self + 0x40u, t9);
        ecx = self + 0x44u;
        edx = 1u;
L_101ea12b: ;
        if ((int32_t)edx <= 3)
        {
            ebp = rd32(eax);
            esi = ecx - self + 0x1f4u;
        }
        else
        {
            ebp = rd32(eax);
            esi = ecx - self + 0x21cu;
        }
        t10 = rd32(ebp + esi);
        wr32(ecx, t10);
        if ((int32_t)(edx + 1u) < 8)
        {
            ecx = ecx + 4u;
            edx = edx + 1u;
            goto L_101ea12b;
        }
        edx = edx + 1u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea0d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
