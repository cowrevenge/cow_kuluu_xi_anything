/* f_0x101b53c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b53c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    wr8(self + 0xef22u, 0u);
    if (t1 - 1u > 9u) goto L_101b53e6;
    eax = t1 - 1u;
    t2 = rd32(COW_IMG(0x101b5444u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x101b53d8u: goto L_101b53d8;
    case 0x101b53e9u: goto L_101b53e9;
    case 0x101b53f6u: goto L_101b53f6;
    case 0x101b5403u: goto L_101b5403;
    case 0x101b5410u: goto L_101b5410;
    case 0x101b541du: goto L_101b541d;
    case 0x101b542au: goto L_101b542a;
    case 0x101b5437u: goto L_101b5437;
    default: rt_fatal(g, COW_IMG(0x101b53d1u), "switch");
    }
    return;
L_101b53d8: ;
    if (rd32(self + 0xf0f8u) == 1u)
    {
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x101b70a0u), self, 0);
    }
L_101b53e6: ;
    return;
L_101b53e9: ;
    wr32(sp0 + 4u, 0xfu);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b53f6: ;
    wr32(sp0 + 4u, 0xc8u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b5403: ;
    wr32(sp0 + 4u, 0xd0u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b5410: ;
    wr32(sp0 + 4u, 0xcbu);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b541d: ;
    wr32(sp0 + 4u, 0xcdu);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b542a: ;
    wr32(sp0 + 4u, 0x1cu);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
L_101b5437: ;
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x101b5d10u), eax, self, in_edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b53c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b53c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
