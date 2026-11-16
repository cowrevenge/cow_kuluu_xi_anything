/* f_0x101fbac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fbac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101fb400u), rd32(COW_IMG(0x10663894u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
            wr8(eax, rd8(eax) | 4u);
        }
        if (rd32(COW_IMG(0x10663888u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10663888u));
            if (rd8(ecx + 0x10au) != 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(ecx + 0x10au);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(ecx + 0x10au);
                wr8(rd32(self + 8u) + 0x30u, rd8(rd32(self + 8u) + 0x30u) & 0xfbu);
            }
        }
        if (eax == 0u) goto L_101fbaff;
        if ((rd8(eax) & 0x20u) == 0u) goto L_101fbb0b;
L_101fbaff: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_101fbb0b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fbac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
