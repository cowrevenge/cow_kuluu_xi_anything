/* f_0x10122b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10122b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 5u) goto L_10122bee;
    t1 = rd32(COW_IMG(0x10122bf4u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10122b34u: goto L_10122b34;
    case 0x10122b44u: goto L_10122b44;
    case 0x10122b55u: goto L_10122b55;
    case 0x10122b8au: goto L_10122b8a;
    case 0x10122bc2u: goto L_10122bc2;
    case 0x10122bd0u: goto L_10122bd0;
    default: rt_fatal(g, COW_IMG(0x10122b2du), "switch");
    }
    return 0;
L_10122b34: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu);
    edx = in_edx;
L_10122bdc: ;
    if ((ecx & 2u) == 0u) goto L_10122beb;
    g->edx = edx;
    return 1u;
L_10122b44: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu);
    edx = in_edx;
    goto L_10122bdc;
L_10122b55: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 2u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 2u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x23cu) & 2u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = (eax & 0xffffff00u) | 1u;
    }
    t2 = rd32(ecx + 0x22cu);
    wr32(ecx + 0x228u, 0u);
    wr32(ecx + 0x22cu, t2 & 2u);
    g->edx = t2 & 2u;
    return eax;
L_10122b8a: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 2u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 2u;
        ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 2u;
        edx = rd32(COW_IMG(0x104e1d44u));
        goto L_10122bb2;
    }
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 2u;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x22cu) & 2u;
    edx = rd32(COW_IMG(0x104e1d44u));
    wr32(edx + 0x228u, 0u);
    wr32(edx + 0x22cu, ecx);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10122bb2: ;
    wr32(edx + 0x228u, 0u);
    wr32(edx + 0x22cu, ecx);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10122bc2: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x224u);
    edx = in_edx;
    goto L_10122bdc;
L_10122bd0: ;
    ecx = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x234u);
    edx = rd32(COW_IMG(0x104e1d44u));
    goto L_10122bdc;
L_10122beb: ;
    g->edx = edx;
    return 0u;
L_10122bee: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10122b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10122b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
