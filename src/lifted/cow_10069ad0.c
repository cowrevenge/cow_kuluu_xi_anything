/* f_0x10069ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10069ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr8(COW_IMG(0x1047bf84u), 0u);
    if (rd32(self + 4u) > 4u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
        goto L_10069b2a;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10069b44u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10069ae6u: goto L_10069ae6;
    case 0x10069afdu: goto L_10069afd;
    case 0x10069b19u: goto L_10069b19;
    case 0x10069b2au: edx = in_edx; goto L_10069b2a;
    default: rt_fatal(g, COW_IMG(0x10069adfu), "switch");
    }
    return 0;
L_10069ae6: ;
    wr32(sp0 - 4u, rd32(self));
    wr32(sp0 - 8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xcu, COW_IMG(0x1047bf84u));
    g->eax = rd32(self);
    g->edx = in_edx;
    t5 = rd32(self);
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x10312031u), 3, COW_IMG(0x1047bf84u), COW_IMG(0x10352ff0u), t5);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10069b2a: ;
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, COW_IMG(0x1047bf84u));
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10067990u), arg1, edx, 1, COW_IMG(0x1047bf84u));
    t8 = g->edx;
    g->edx = t8;
    return arg1;
L_10069afd: ;
    wrf64(sp0 - 8u, (double)rdf32(self));
    wr32(sp0 - 0xcu, COW_IMG(0x10353bacu));
    wr32(sp0 - 0x10u, COW_IMG(0x1047bf84u));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 4, COW_IMG(0x1047bf84u), COW_IMG(0x10353bacu), cow_dlo((double)rdf32(self)), cow_dhi((double)rdf32(self)));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    goto L_10069b2a;
L_10069b19: ;
    ecx = rd32(self);
    edx = COW_IMG(0x1047bf84u);
L_10069b20: ;
    t2 = rd8(ecx);
    wr8(edx, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = (eax & 0xffffff00u) | t2;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10069b20;
    }
    eax = (eax & 0xffffff00u) | t2;
    edx = edx + 1u;
    goto L_10069b2a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069ad0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
