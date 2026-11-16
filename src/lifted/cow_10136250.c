/* f_0x10136250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10136250(Guest* g)
{
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0xfu) goto L_101362ad;
    t1 = rd32(COW_IMG(0x101362b4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10136262u: goto L_10136262;
    case 0x10136267u: goto L_10136267;
    case 0x1013626cu: goto L_1013626c;
    case 0x10136271u: goto L_10136271;
    case 0x10136276u: goto L_10136276;
    case 0x1013627bu: goto L_1013627b;
    case 0x10136280u: goto L_10136280;
    case 0x10136285u: goto L_10136285;
    case 0x1013628au: goto L_1013628a;
    case 0x1013628fu: goto L_1013628f;
    case 0x10136294u: goto L_10136294;
    case 0x10136299u: goto L_10136299;
    case 0x1013629eu: goto L_1013629e;
    case 0x101362a3u: goto L_101362a3;
    case 0x101362a8u: goto L_101362a8;
    case 0x101362adu: goto L_101362ad;
    default: rt_fatal(g, COW_IMG(0x1013625bu), "switch");
    }
    return 0;
L_10136262: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 1u;
L_10136267: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 9u;
L_1013626c: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 2u;
L_10136271: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 4u;
L_10136276: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 5u;
L_1013627b: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 6u;
L_10136280: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 7u;
L_10136285: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 8u;
L_1013628a: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xau;
L_1013628f: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xbu;
L_10136294: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xcu;
L_10136299: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xdu;
L_1013629e: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xeu;
L_101362a3: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0xfu;
L_101362a8: ;
    return ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | 0x10u;
L_101362ad: ;
    return (uint32_t)(int16_t)arg1 - 1u & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136250(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
