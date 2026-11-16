/* f_0x1003ef20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003ef20(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd8(self + 0x1dcu);
    wr32(self, COW_IMG(0x1032ac10u));
    if ((uint8_t)t1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | t1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10043f00u), self + 0x1ddu, 0);
        t2 = g->ecx;
        t3 = g->edx;
        t4 = rd32(self + 0x22du);
        g->eax = t4;
        g->edx = t3;
        t5 = cow_cdecl(g, COW_IMG(0x10028700u), 1, t4);
        t6 = g->edx;
        wr8(self + 0x1dcu, 0u);
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10043e40u), self + 0x1ddu, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10063c60u), self + 0x194u, 0);
    t10 = g->edx;
    g->esp = sp0;
    g->edx = t10;
    cow_tailcall(g, COW_IMG(0x10044970u), t9, self, t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ef20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003ef20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
