/* f_0x10121970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10121970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 5u) goto L_10121a57;
    t1 = rd32(COW_IMG(0x10121a5cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10121984u: goto L_10121984;
    case 0x10121994u: goto L_10121994;
    case 0x101219a5u: goto L_101219a5;
    case 0x101219dfu: goto L_101219df;
    case 0x10121a1au: goto L_10121a1a;
    case 0x10121a37u: goto L_10121a37;
    default: rt_fatal(g, COW_IMG(0x1012197du), "switch");
    }
    return 0;
L_10121984: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u);
    edx = in_edx;
L_10121a43: ;
    if ((eax & 0x8000000u) == 0u) goto L_10121a54;
    g->edx = edx;
    return 1u;
L_10121994: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u);
    edx = in_edx;
    goto L_10121a43;
L_101219a5: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x8000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x8000000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x8000000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = (eax & 0xffffff00u) | 1u;
    }
    t3 = rd32(ecx + 0x228u);
    wr32(ecx + 0x22cu, 0u);
    wr32(ecx + 0x228u, t3 & 0x8000000u);
    g->edx = t3 & 0x8000000u;
    return eax;
L_101219df: ;
    t2 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) & 0x8000000u;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t2;
        edx = rd32(COW_IMG(0x104e1d44u));
        goto L_10121a0a;
    }
    eax = t2;
    ecx = t2;
    edx = rd32(COW_IMG(0x104e1d44u));
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10121a0a: ;
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10121a1a: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) & 0x8000000u) == 0u)
    {
        edx = in_edx;
        goto L_10121a54;
    }
    return 1u;
L_10121a37: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x230u);
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_10121a43;
L_10121a54: ;
    g->edx = edx;
    return 0u;
L_10121a57: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10121970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10121970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
