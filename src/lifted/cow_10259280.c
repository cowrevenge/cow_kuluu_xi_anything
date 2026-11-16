/* f_0x10259280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10259280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
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
        wr32(eax + 4u, 0u);
        wr32(eax + 8u, 4u);
        wr32(eax + 0xcu, 0u);
        wr32(eax + 0x10u, 0u);
        wr32(eax, COW_IMG(0x1033ceb4u));
        esi = eax;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10259120u), self, 1, esi);
    t4 = g->edx;
    if (rd32(self) != 1u)
    {
        eax = t3;
        edx = t4;
        goto L_102592fe;
    }
    edx = t4;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10259304;
    }
    eax = rd32(self + 4u);
L_102592ce: ;
    if (rd32(eax + 8u) == 2u) goto L_102592db;
    ecx = rd32(eax + 8u);
    if (ecx != 3u) goto L_102592e2;
L_102592db: ;
    if (rd32(eax + 0x10u) == 0u) goto L_102592f2;
L_102592e2: ;
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_102592ce;
    }
    eax = rd32(eax + 4u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10259150u), eax, self, edx);
    return;
L_102592f2: ;
    wr32(esi + 0xcu, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10259150u), eax, self, edx);
    return;
L_102592fe: ;
    wr32(self, 1u);
L_10259304: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10259150u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10259280(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
