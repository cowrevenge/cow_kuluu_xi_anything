/* f_0x100f1410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 0xbu) goto L_100f14d6;
    t1 = rd32(COW_IMG(0x100f14dcu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f1424u: goto L_100f1424;
    case 0x100f1434u: goto L_100f1434;
    case 0x100f1444u: goto L_100f1444;
    case 0x100f1454u: goto L_100f1454;
    case 0x100f1464u: goto L_100f1464;
    case 0x100f1480u: eax = arg1; goto L_100f1480;
    case 0x100f1486u: goto L_100f1486;
    case 0x100f1496u: goto L_100f1496;
    case 0x100f14a6u: goto L_100f14a6;
    case 0x100f14b6u: goto L_100f14b6;
    case 0x100f14c6u: goto L_100f14c6;
    default: rt_fatal(g, COW_IMG(0x100f141du), "switch");
    }
    return 0;
L_100f1424: ;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 0u);
    return (t14 & 0xffffff00u) | (uint8_t)t14 == 0u;
L_100f1434: ;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 1u);
    return (t13 & 0xffffff00u) | (uint8_t)t13 == 0u;
L_100f1444: ;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 2u);
    return (t12 & 0xffffff00u) | (uint8_t)t12 == 0u;
L_100f1454: ;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 3u);
    return (t11 & 0xffffff00u) | (uint8_t)t11 == 0u;
L_100f1464: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 4u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        goto L_100f1483;
    }
    ecx = t8;
    edx = t9;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 5u);
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        goto L_100f1483;
    }
    eax = t10;
L_100f1480: ;
    return (eax & 0xffffff00u) | 1u;
L_100f1483: ;
    return eax & 0xffffff00u;
L_100f1486: ;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 6u);
    return (t6 & 0xffffff00u) | (uint8_t)t6 == 0u;
L_100f1496: ;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 7u);
    return (t5 & 0xffffff00u) | (uint8_t)t5 == 0u;
L_100f14a6: ;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 8u);
    return (t4 & 0xffffff00u) | (uint8_t)t4 == 0u;
L_100f14b6: ;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 9u);
    return (t3 & 0xffffff00u) | (uint8_t)t3 == 0u;
L_100f14c6: ;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, 0xbu);
    return (t2 & 0xffffff00u) | (uint8_t)t2 == 0u;
L_100f14d6: ;
    return (arg1 & 0xffffff00u) | (uint8_t)arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
