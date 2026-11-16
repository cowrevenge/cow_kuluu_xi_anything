/* f_0x10158ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10158ff0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int16_t)rd16(self + 0x6au) > 0)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101590c0u), self, 1, 0u);
        t2 = g->edx;
        g->edx = t2;
        cow_call_regs(g, COW_IMG(0x10158590u), t1, self, g->edx, 1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    t5 = rd32(self + 0xc8u);
    wr32(self + 0xc4u, 0u);
    if (t5 == 0u)
    {
        eax = t5;
    }
    else
    {
        eax = t5;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall_cdecl(g, eax, ecx, 2, 0u, 0u);
        t7 = g->edx;
        wr32(self + 0xc8u, 0u);
        eax = t6;
        edx = t7;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10159040u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10158ff0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
