/* f_0x1025aeb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025aeb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x18u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = t1;
        wr32(esi + 4u, 0u);
        wr32(esi + 8u, 1u);
        wr32(esi, COW_IMG(0x1033cee0u));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_fastcall(g, COW_IMG(0x1018d2d0u), esi + 0xcu, edx, 1, 0u);
        t4 = g->edx;
        wr32(esi, COW_IMG(0x1033cedcu));
        eax = t3;
        edx = t4;
    }
    wr32(esi + 8u, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1025a880u), self, 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x1025aab0u), t5, t6, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025aeb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025aeb0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
