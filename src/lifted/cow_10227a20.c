/* f_0x10227a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10227a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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

    g->eax = rd32(rd32(COW_IMG(0x106671bcu)));
    g->edx = in_edx;
    t1 = rd32(rd32(COW_IMG(0x106671bcu)));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 4u), rd32(COW_IMG(0x106671bcu)), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    esi = self + 0x68u;
    edi = 0x20u;
L_10227a38: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x102270e0u), esi, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t7 = cow_fastcall(g, COW_IMG(0x102270b0u), ecx, edx, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (edi != 1u)
    {
        esi = esi + 0x10u;
        edi = edi - 1u;
        goto L_10227a38;
    }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10227910u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10227a20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
