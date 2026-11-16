/* f_0x10122d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10122d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 5u) goto L_10122dce;
    t1 = rd32(COW_IMG(0x10122dd4u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10122d14u: goto L_10122d14;
    case 0x10122d24u: goto L_10122d24;
    case 0x10122d35u: goto L_10122d35;
    case 0x10122d6au: goto L_10122d6a;
    case 0x10122da2u: goto L_10122da2;
    case 0x10122db0u: goto L_10122db0;
    default: rt_fatal(g, COW_IMG(0x10122d0du), "switch");
    }
    return 0;
L_10122d14: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu);
    edx = in_edx;
L_10122dbc: ;
    if ((ecx & 0x10u) == 0u) goto L_10122dcb;
    g->edx = edx;
    return 1u;
L_10122d24: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
    edx = in_edx;
    goto L_10122dbc;
L_10122d35: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 0x10u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 0x10u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 0x10u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = (eax & 0xffffff00u) | 1u;
    }
    t2 = rd32(ecx + 0x22cu);
    wr32(ecx + 0x228u, 0u);
    wr32(ecx + 0x22cu, t2 & 0x10u);
    g->edx = t2 & 0x10u;
    return eax;
L_10122d6a: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 0x10u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 0x10u;
        ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 0x10u;
        edx = rd32(COW_IMG(0x104e1d44u));
        goto L_10122d92;
    }
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 0x10u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 0x10u;
    edx = rd32(COW_IMG(0x104e1d44u));
    wr32(edx + 0x228u, 0u);
    wr32(edx + 0x22cu, ecx);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10122d92: ;
    wr32(edx + 0x228u, 0u);
    wr32(edx + 0x22cu, ecx);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10122da2: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    edx = in_edx;
    goto L_10122dbc;
L_10122db0: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x234u);
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_10122dbc;
L_10122dcb: ;
    g->edx = edx;
    return 0u;
L_10122dce: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10122d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10122d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
