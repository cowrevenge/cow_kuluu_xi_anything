/* f_0x101aec30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101aec30(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) goto L_101aec7f;
    if ((int32_t)arg1 < 346) goto L_101aec53;
    if ((int32_t)arg1 > 369) goto L_101aec53;
    return (arg1 & 0xffffff00u) | 1u;
L_101aec53: ;
    if ((int32_t)arg1 < 375) goto L_101aec66;
    if ((int32_t)arg1 > 397) goto L_101aec66;
    return (arg1 & 0xffffff00u) | 1u;
L_101aec66: ;
    if (arg1 - 0x172u > 0x3eu)
    {
        eax = arg1 - 0x172u;
        goto L_101aecc5;
    }
    t1 = rd32(COW_IMG(0x101aecccu) + rd8(COW_IMG(0x101aecd4u) + arg1 - 0x172u) * 4u);
    eax = arg1 - 0x172u;
    switch (t1 - RD)
    {
    case 0x101aecc0u: goto L_101aecc0;
    case 0x101aecc5u: goto L_101aecc5;
    default: rt_fatal(g, COW_IMG(0x101aec78u), "switch");
    }
    return 0;
L_101aec7f: ;
    if ((int32_t)arg1 < 346) goto L_101aec92;
    if ((int32_t)arg1 > 369) goto L_101aec92;
    return (arg1 & 0xffffff00u) | 1u;
L_101aec92: ;
    if ((int32_t)arg1 < 375) goto L_101aeca5;
    if ((int32_t)arg1 > 397) goto L_101aeca5;
    return (arg1 & 0xffffff00u) | 1u;
L_101aeca5: ;
    if (arg1 - 0x114u > 0x9cu)
    {
        eax = arg1 - 0x114u;
        goto L_101aecc5;
    }
    t2 = rd32(COW_IMG(0x101aed14u) + rd8(COW_IMG(0x101aed1cu) + arg1 - 0x114u) * 4u);
    eax = arg1 - 0x114u;
    switch (t2 - RD)
    {
    case 0x101aecc0u: goto L_101aecc0;
    case 0x101aecc5u: goto L_101aecc5;
    default: rt_fatal(g, COW_IMG(0x101aecb9u), "switch");
    }
    return 0;
L_101aecc0: ;
    return (eax & 0xffffff00u) | 1u;
L_101aecc5: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aec30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101aec30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
