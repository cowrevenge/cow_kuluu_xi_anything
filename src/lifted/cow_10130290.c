/* f_0x10130290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10130290(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x10578158u)) == 0u) goto L_101302f6;
    ecx = rd32(COW_IMG(0x10578158u));
    if (rd32(sp0 + 4u) + 0x47u > 0x46u) goto L_101302f6;
    eax = rd32(sp0 + 4u) + 0x47u;
    t1 = rd32(COW_IMG(0x101302fcu) + rd8(COW_IMG(0x10130314u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101302b5u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302b5;
    case 0x101302c2u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302c2;
    case 0x101302cfu: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302cf;
    case 0x101302dcu: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302dc;
    case 0x101302e9u: edx = rd8(COW_IMG(0x10130314u) + eax); goto L_101302e9;
    case 0x101302f6u: goto L_101302f6;
    default: rt_fatal(g, COW_IMG(0x101302aeu), "switch");
    }
    return;
L_101302b5: ;
    wr32(sp0 + 4u, 0x86u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302c2: ;
    wr32(sp0 + 4u, 0x87u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302cf: ;
    wr32(sp0 + 4u, 0x88u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302dc: ;
    wr32(sp0 + 4u, 0x89u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302e9: ;
    wr32(sp0 + 4u, 0xb9u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e30u), eax, ecx, edx);
    return;
L_101302f6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10130290(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
