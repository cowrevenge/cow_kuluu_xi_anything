/* f_0x10285760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10285760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(rd32(sp0 + 4u)) + 0xcu) == 0u)
    {
        eax = rd32(rd32(rd32(sp0 + 4u)) + 0xcu);
        ecx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u));
        goto L_10285775;
    }
    eax = rd32(rd32(rd32(sp0 + 4u)) + 0xcu);
    ecx = rd32(sp0 + 4u);
    wr32(sp0 + 4u, ecx);
    g->esp = sp0;
    cow_tailcall(g, eax, eax, ecx, in_edx);
    return;
L_10285775: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7c6cu));
    t1 = g->ecx;
    t2 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7c98u), esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10285760(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
