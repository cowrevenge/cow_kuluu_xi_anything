/* f_0x1027dba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027dba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0xbcu) == 0u)
    {
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u) + 0xbcu;
        ecx = rd32(rd32(sp0 + 4u) + 0xbcu);
        esi = rd32(sp0 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10285760u), 1, eax);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(esi + 0xb8u) != 0u)
    {
        eax = esi + 0xb8u;
        ecx = rd32(esi + 0xb8u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10285760u), 1, eax);
        t2 = g->edx;
        edx = t2;
    }
    if (rd32(esi + 0xb4u) == 0u) goto L_1027dbf4;
    eax = esi + 0xb4u;
    if ((rd32(esi) >> 8u & 2u) == 0u)
    {
        ecx = rd32(esi);
        goto L_1027dbf6;
    }
    wr32(eax, 0u);
L_1027dbf4: ;
    return;
L_1027dbf6: ;
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10285760u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027dba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027dba0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
