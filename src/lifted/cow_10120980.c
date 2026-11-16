/* f_0x10120980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10120980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = in_eax;
        goto L_10120a02;
    }
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if (arg1 > 5u)
    {
        eax = arg1;
        goto L_10120a02;
    }
    t1 = rd32(COW_IMG(0x10120a08u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x1012099bu: goto L_1012099b;
    case 0x101209a3u: goto L_101209a3;
    case 0x101209abu: goto L_101209ab;
    case 0x101209cfu: goto L_101209cf;
    case 0x101209f3u: goto L_101209f3;
    case 0x101209fbu: goto L_101209fb;
    default: rt_fatal(g, COW_IMG(0x10120994u), "switch");
    }
    return 0;
L_1012099b: ;
    return rd32(ecx + 0x5cu) & 1u;
L_101209a3: ;
    return rd32(ecx + 0x60u) & 1u;
L_101209ab: ;
    t6 = rd32(ecx + 0x60u) & 0xfffffffeu;
    t7 = rd8(ecx + 0x5cu);
    wr32(ecx + 0x60u, t6);
    t8 = rd32(ecx + 0x64u) & 0xfffffffeu;
    wr32(ecx + 0x64u, t8);
    t9 = rd32(ecx + 0x5cu) & 0xfffffffeu;
    wr32(ecx + 0x5cu, t9);
    g->edx = 0xfffffffeu;
    return ((arg1 | t7) & 0xffffff00u) | (t7 & 1u);
L_101209cf: ;
    t2 = rd32(ecx + 0x60u) & 0xfffffffeu;
    t3 = rd8(ecx + 0x60u);
    wr32(ecx + 0x60u, t2);
    t4 = rd32(ecx + 0x64u) & 0xfffffffeu;
    wr32(ecx + 0x64u, t4);
    t5 = rd32(ecx + 0x5cu) & 0xfffffffeu;
    wr32(ecx + 0x5cu, t5);
    g->edx = 0xfffffffeu;
    return (arg1 & 0xffffff00u) | (t3 & 1u);
L_101209f3: ;
    return rd32(ecx + 0x58u) & 1u;
L_101209fb: ;
    return (arg1 & 0xffffff00u) | (rd8(ecx + 0x64u) & 1u);
L_10120a02: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
