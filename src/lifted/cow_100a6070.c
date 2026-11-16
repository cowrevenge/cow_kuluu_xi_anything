/* f_0x100a6070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a6070(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    t1 = rd8(sp0 + 4u);
    wr8(COW_IMG(0x10487f81u), (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_100a60d6;
    }
    t2 = rd32(COW_IMG(0x1035bbacu));
    t3 = rd32(COW_IMG(0x1035bbb0u));
    wr32(COW_IMG(0x10487f64u), rd32(COW_IMG(0x1035bba8u)));
    t4 = rd32(COW_IMG(0x1035bbb4u));
    wr32(COW_IMG(0x10487f68u), t2);
    wr32(COW_IMG(0x10487f6cu), t3);
    wr32(COW_IMG(0x10487f70u), t4);
    g->edx = t3;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        edx = t6;
        g->edx = edx;
        g->esp = sp0;
        t7 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x41u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100814f0u), eax, COW_IMG(0x10487f74u), edx);
L_100a60d6: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a6070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a6070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
