/* f_0x10029150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10029150(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 6u) goto L_100291ea;
    t1 = rd32(COW_IMG(0x10029200u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10029164u: goto L_10029164;
    case 0x1002917au: goto L_1002917a;
    case 0x10029190u: goto L_10029190;
    case 0x100291a7u: goto L_100291a7;
    case 0x100291bdu: goto L_100291bd;
    case 0x100291d3u: goto L_100291d3;
    case 0x100291eau: goto L_100291ea;
    default: rt_fatal(g, COW_IMG(0x1002915du), "switch");
    }
    return;
L_10029164: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, rd32(COW_IMG(0x104570b4u)), rd32(COW_IMG(0x104570b8u)));
    t11 = g->edx;
    g->edx = t11;
    return;
L_1002917a: ;
    g->edx = rd32(COW_IMG(0x104570b8u));
    t9 = rd32(COW_IMG(0x104570b8u));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, rd32(COW_IMG(0x104570b4u)), t9);
    t10 = g->edx;
    g->edx = t10;
    return;
L_10029190: ;
    g->edx = rd32(COW_IMG(0x104570bcu));
    t7 = rd32(COW_IMG(0x104570bcu));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, t7, rd32(COW_IMG(0x104570c0u)));
    t8 = g->edx;
    g->edx = t8;
    return;
L_100291a7: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, rd32(COW_IMG(0x104570bcu)), rd32(COW_IMG(0x104570c0u)));
    t6 = g->edx;
    g->edx = t6;
    return;
L_100291bd: ;
    g->edx = rd32(COW_IMG(0x104570d0u));
    t4 = rd32(COW_IMG(0x104570d0u));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, rd32(COW_IMG(0x104570ccu)), t4);
    t5 = g->edx;
    g->edx = t5;
    return;
L_100291d3: ;
    g->edx = rd32(COW_IMG(0x104570d4u));
    t2 = rd32(COW_IMG(0x104570d4u));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, t2, rd32(COW_IMG(0x104570d8u)));
    t3 = g->edx;
    g->edx = t3;
    return;
L_100291ea: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100289f0u), 2, rd32(COW_IMG(0x104570c4u)), rd32(COW_IMG(0x104570c8u)));
    t12 = g->edx;
    g->edx = t12;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10029150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
