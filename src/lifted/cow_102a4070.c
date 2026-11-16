/* f_0x102a4070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a4070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        esi = rd32(sp0 + 4u);
        if (rd32(esi + 0x38u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = rd32(esi + 0x38u);
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bd8d4u), 0x14au);
            t5 = g->edx;
            edx = t5;
        }
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        esi = rd32(sp0 + 4u);
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda70u), COW_IMG(0x103b379cu));
        t4 = g->edx;
        edx = t4;
    }
    if (rd32(esi + 0x3cu) != 0u)
    {
        eax = esi + 0x3cu;
        ecx = rd32(esi + 0x3cu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10294020u), 1, eax);
        t6 = g->edx;
        edx = t6;
    }
    if ((int32_t)rd32(esi + 0x24u) <= -1) goto L_102a40e1;
    eax = esi + 0x24u;
    ecx = rd32(esi + 0x24u);
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1027d9a0u), eax, ecx, edx);
    return;
L_102a40e1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a4070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
