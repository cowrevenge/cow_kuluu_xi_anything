/* f_0x1018fa80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1018fa80(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 != 0xfdu) goto L_1018fa8e;
    return 6u;
L_1018fa8e: ;
    if ((uint8_t)arg1 != 0x7fu) goto L_1018faae;
    if ((uint8_t)arg2 < 0x34u) goto L_1018faeb;
    if ((uint8_t)arg2 <= 0x36u) goto L_1018faa8;
    if ((uint8_t)arg2 != 0x38u) goto L_1018faeb;
    return 4u;
L_1018faa8: ;
    return 3u;
L_1018faae: ;
    if ((uint8_t)arg1 == 0x1eu) goto L_1018faeb;
    if ((uint8_t)arg1 == 0x1fu) goto L_1018faeb;
    if ((uint8_t)arg1 == 0xefu) goto L_1018faeb;
    if ((uint8_t)arg1 != 0u) goto L_1018fac1;
    return 0u;
L_1018fac1: ;
    if ((uint8_t)arg1 == 0u) goto L_1018fad5;
    if ((uint8_t)arg1 >= 0x20u) goto L_1018fad5;
    if ((uint8_t)arg1 == 0xau) goto L_1018fad5;
    if ((uint8_t)arg1 == 0xdu) goto L_1018fad5;
    return 1u;
L_1018fad5: ;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x1011da30u), 1, (uint8_t)arg1);
    t2 = g->edx;
    g->edx = t2;
    return (t1 != 0u) + 1u;
L_1018faeb: ;
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fa80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fa80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
