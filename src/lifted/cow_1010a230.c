/* f_0x1010a230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010a230(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x8f0u);
    wr32(self, COW_IMG(0x10332e34u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        edi = t1;
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t2 = cow_fastcall(g, COW_IMG(0x1010cf30u), edi, in_edx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    wr32(self + 0x8f0u, 0u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_fastcall(g, COW_IMG(0x1010c950u), self, edx, 0);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, COW_IMG(0x1010c860u), t7, self, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010a230(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
