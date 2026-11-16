/* f_0x102a3e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a3e70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x2cu) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x2cu);
        goto L_102a3e9f;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x2cu);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bd8d4u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bd954u));
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x102858b0u), t1, t2, t3);
    return;
L_102a3e9f: ;
    if (rd32(eax + 0x34u) != 0u)
    {
        ecx = rd32(eax + 0x34u);
        goto L_102a3eca;
    }
    ecx = rd32(eax + 0x34u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bd8d4u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bd910u));
    g->esp = sp0;
    g->edx = t6;
    cow_tailcall(g, COW_IMG(0x102858b0u), t4, t5, t6);
    return;
L_102a3eca: ;
    wr32(eax + 0x34u, ecx - 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a3e70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
