/* f_0x10069a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10069a50(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) > 4u) goto L_10069aaa;
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10069ab0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10069a5fu: goto L_10069a5f;
    case 0x10069a7au: goto L_10069a7a;
    case 0x10069a9au: goto L_10069a9a;
    case 0x10069aa7u: goto L_10069aa7;
    default: rt_fatal(g, COW_IMG(0x10069a58u), "switch");
    }
    return 0;
L_10069a5f: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 3, COW_IMG(0x1047bf64u), COW_IMG(0x10352ff0u), rd32(self));
    return COW_IMG(0x1047bf64u);
L_10069a7a: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 4, COW_IMG(0x1047bf64u), COW_IMG(0x10353bacu), cow_dlo((double)rdf32(self)), cow_dhi((double)rdf32(self)));
    return COW_IMG(0x1047bf64u);
L_10069a9a: ;
    wr8(COW_IMG(0x1047bf64u), 0u);
    return COW_IMG(0x1047bf64u);
L_10069aa7: ;
    return rd32(self);
L_10069aaa: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069a50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
