/* f_0x100e7010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100e7010(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int8_t)rd8(sp0 + 4u) > 7u)
    {
        eax = (uint32_t)(int8_t)rd8(sp0 + 4u);
        goto L_100e7089;
    }
    eax = (uint32_t)(int8_t)rd8(sp0 + 4u);
    t1 = rd32(COW_IMG(0x100e708cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100e7021u: goto L_100e7021;
    case 0x100e702eu: goto L_100e702e;
    case 0x100e703bu: goto L_100e703b;
    case 0x100e7048u: goto L_100e7048;
    case 0x100e7055u: goto L_100e7055;
    case 0x100e7062u: goto L_100e7062;
    case 0x100e706fu: goto L_100e706f;
    case 0x100e707cu: goto L_100e707c;
    default: rt_fatal(g, COW_IMG(0x100e701au), "switch");
    }
    return 0;
L_100e7021: ;
    wr32(sp0 + 4u, COW_IMG(0x100e70b0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e702e: ;
    wr32(sp0 + 4u, COW_IMG(0x100e7120u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e703b: ;
    wr32(sp0 + 4u, COW_IMG(0x100e70d0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e7048: ;
    wr32(sp0 + 4u, COW_IMG(0x100e7140u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e7055: ;
    wr32(sp0 + 4u, COW_IMG(0x100e71b0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e7062: ;
    wr32(sp0 + 4u, COW_IMG(0x100e71f0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e706f: ;
    wr32(sp0 + 4u, COW_IMG(0x100e71d0u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e707c: ;
    wr32(sp0 + 4u, COW_IMG(0x100e7240u));
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e6da0u), eax, self, in_edx);
L_100e7089: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7010(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
