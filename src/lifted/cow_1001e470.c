/* f_0x1001e470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001e470(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x118u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x1001e600u), eax, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    wr32(COW_IMG(0x10456d6cu), eax);
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1001e590u), eax, 0);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x10456d6cu));
    cow_cdecl(g, COW_IMG(0x10015100u), 1, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001e470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
