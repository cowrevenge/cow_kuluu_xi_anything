/* f_0x101dc690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101dc690(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10338d88u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101dc1d0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x1066346cu)) == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x1066346cu));
        ecx = t1;
        edx = t2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(COW_IMG(0x1066346cu), 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x10663470u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663470u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x10663470u), 0u);
        ecx = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10663474u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663474u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663474u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t8 = g->edx;
        wr32(COW_IMG(0x10663474u), 0u);
        eax = t7;
        edx = t8;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dc690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dc690(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
