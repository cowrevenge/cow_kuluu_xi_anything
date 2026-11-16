/* f_0x10121a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10121a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 5u) goto L_10121b67;
    t1 = rd32(COW_IMG(0x10121b6cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10121a94u: goto L_10121a94;
    case 0x10121aa4u: goto L_10121aa4;
    case 0x10121ab5u: goto L_10121ab5;
    case 0x10121aefu: goto L_10121aef;
    case 0x10121b2au: goto L_10121b2a;
    case 0x10121b47u: goto L_10121b47;
    default: rt_fatal(g, COW_IMG(0x10121a8du), "switch");
    }
    return 0;
L_10121a94: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u);
    edx = in_edx;
L_10121b53: ;
    if ((eax & 0x10000000u) == 0u) goto L_10121b64;
    g->edx = edx;
    return 1u;
L_10121aa4: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u);
    edx = in_edx;
    goto L_10121b53;
L_10121ab5: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x10000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x10000000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x10000000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = (eax & 0xffffff00u) | 1u;
    }
    t3 = rd32(ecx + 0x228u);
    wr32(ecx + 0x22cu, 0u);
    wr32(ecx + 0x228u, t3 & 0x10000000u);
    g->edx = t3 & 0x10000000u;
    return eax;
L_10121aef: ;
    t2 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) & 0x10000000u;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t2;
        edx = rd32(COW_IMG(0x104e1d44u));
        goto L_10121b1a;
    }
    eax = t2;
    ecx = t2;
    edx = rd32(COW_IMG(0x104e1d44u));
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10121b1a: ;
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10121b2a: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) & 0x10000000u) == 0u)
    {
        edx = in_edx;
        goto L_10121b64;
    }
    return 1u;
L_10121b47: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x230u);
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_10121b53;
L_10121b64: ;
    g->edx = edx;
    return 0u;
L_10121b67: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10121a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10121a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
