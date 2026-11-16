/* f_0x10154460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10154460(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10154481;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1015447a;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10154484;
    }
L_1015447a: ;
    eax = 1u;
L_10154486: ;
    t1 = rd32(COW_IMG(0x101544e0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1015448du: goto L_1015448d;
    case 0x1015449fu: goto L_1015449f;
    case 0x101544b1u: goto L_101544b1;
    case 0x101544c3u: goto L_101544c3;
    default: rt_fatal(g, COW_IMG(0x10154486u), "switch");
    }
    return 0;
L_10154481: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10154484: ;
    if (!cf && !zf) goto L_101544d5;
    goto L_10154486;
L_1015448d: ;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg1, 2u);
    return t5;
L_1015449f: ;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg1, 6u);
    return t4;
L_101544b1: ;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg1, 8u);
    return t3;
L_101544c3: ;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg1, 0xau);
    return t2;
L_101544d5: ;
    return COW_IMG(0x103d3c84u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10154460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10154460(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
