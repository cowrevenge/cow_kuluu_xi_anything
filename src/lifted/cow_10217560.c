/* f_0x10217560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10217560(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1033bd58u));
    eax = in_eax;
    edx = in_edx;
    esi = self + 0x2c4u;
    edi = 0x20u;
L_10217576: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = rd32(ecx);
        g->edx = edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(t1 + 0xcu), ecx, 1, 1u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    wr32(esi, 0u);
    if (edi != 1u)
    {
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_10217576;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10217560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10217560(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
