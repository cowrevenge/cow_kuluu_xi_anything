/* f_0x101921f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101921f0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) goto L_1019223f;
    if ((int32_t)arg1 < 346) goto L_10192213;
    if ((int32_t)arg1 > 369) goto L_10192213;
    return (arg1 & 0xffffff00u) | 1u;
L_10192213: ;
    if ((int32_t)arg1 < 375) goto L_10192226;
    if ((int32_t)arg1 > 397) goto L_10192226;
    return (arg1 & 0xffffff00u) | 1u;
L_10192226: ;
    if (arg1 - 0x172u > 0x3eu)
    {
        eax = arg1 - 0x172u;
        goto L_10192285;
    }
    t1 = rd32(COW_IMG(0x1019228cu) + rd8(COW_IMG(0x10192294u) + arg1 - 0x172u) * 4u);
    eax = arg1 - 0x172u;
    switch (t1 - RD)
    {
    case 0x10192280u: goto L_10192280;
    case 0x10192285u: goto L_10192285;
    default: rt_fatal(g, COW_IMG(0x10192238u), "switch");
    }
    return 0;
L_1019223f: ;
    if ((int32_t)arg1 < 346) goto L_10192252;
    if ((int32_t)arg1 > 369) goto L_10192252;
    return (arg1 & 0xffffff00u) | 1u;
L_10192252: ;
    if ((int32_t)arg1 < 375) goto L_10192265;
    if ((int32_t)arg1 > 397) goto L_10192265;
    return (arg1 & 0xffffff00u) | 1u;
L_10192265: ;
    if (arg1 - 0x114u > 0x9cu)
    {
        eax = arg1 - 0x114u;
        goto L_10192285;
    }
    t2 = rd32(COW_IMG(0x101922d4u) + rd8(COW_IMG(0x101922dcu) + arg1 - 0x114u) * 4u);
    eax = arg1 - 0x114u;
    switch (t2 - RD)
    {
    case 0x10192280u: goto L_10192280;
    case 0x10192285u: goto L_10192285;
    default: rt_fatal(g, COW_IMG(0x10192279u), "switch");
    }
    return 0;
L_10192280: ;
    return (eax & 0xffffff00u) | 1u;
L_10192285: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101921f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101921f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
