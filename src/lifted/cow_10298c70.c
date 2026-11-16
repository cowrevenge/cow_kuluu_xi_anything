/* f_0x10298c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10298c70(Guest* g)
{
    uint32_t esi;
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

    if (rd32(sp0 + 4u) == 0u) goto L_10298c92;
    esi = rd32(sp0 + 4u);
    t1 = rd32(esi + 0x14u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t1);
    t3 = g->edx;
    t4 = rd32(esi + 0x18u);
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x10281d80u), t2, t4, t3);
    return;
L_10298c92: ;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 + 4u, 0xffffffffu);
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x10281d80u), t5, t6, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10298c70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
