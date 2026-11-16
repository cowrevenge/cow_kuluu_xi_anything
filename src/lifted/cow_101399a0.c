/* f_0x101399a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101399a0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f718u));
    t2 = g->edx;
    if (rd32(COW_IMG(0x10663740u)) == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10663740u));
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x101f2600u), ecx, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x1057847cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x1013a910u), rd32(COW_IMG(0x10578200u)), 0);
    t8 = g->edx;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x10140e40u), t7, rd32(COW_IMG(0x1057824cu)), t8);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101399a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101399a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
