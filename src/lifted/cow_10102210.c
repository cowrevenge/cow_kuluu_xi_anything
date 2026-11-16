/* f_0x10102210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=8 */
uint32_t cow_fn_10102210(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg7 + (uint8_t)arg1 * 2u) > (uint8_t)arg2) goto L_1010226f;
    if ((arg6 & 0x20u) == 0u) goto L_10102243;
    g->edx = arg7;
    return (uint8_t)arg1 == 0x15u;
L_10102243: ;
    if ((uint8_t)arg1 != 0x14u) goto L_101022ce;
    if ((arg6 & 8u) == 0u) goto L_1010225d;
    g->edx = arg7;
    return ((uint8_t)arg8 >> 2u & 0xffffff00u) | (arg8 >> 2u & 1u);
L_1010225d: ;
    if ((arg6 & 4u) == 0u) goto L_101022ce;
    if ((uint8_t)arg5 != 1u) goto L_101022a0;
    if (((uint8_t)arg5 & (uint8_t)arg8) != 0u) goto L_101022a9;
L_1010226f: ;
    if (rd16(arg7 + (uint8_t)arg3 * 2u) > (uint8_t)arg4) goto L_101022c0;
    if ((arg6 & 0x20u) != 0u) goto L_101022c0;
    if ((uint8_t)arg3 != 0x14u) goto L_101022ce;
    if ((arg6 & 8u) == 0u) goto L_101022ae;
    g->edx = arg7;
    return ((uint8_t)arg8 >> 2u & 0xffffff00u) | (arg8 >> 2u & 1u);
L_101022a0: ;
    if ((uint8_t)arg5 != 2u) goto L_1010226f;
    if (((uint8_t)arg5 & (uint8_t)arg8) == 0u) goto L_1010226f;
L_101022a9: ;
    g->edx = arg7;
    return 1u;
L_101022ae: ;
    if ((arg6 & 4u) == 0u) goto L_101022ce;
    if ((uint8_t)arg5 != 1u) goto L_101022c5;
    if (((uint8_t)arg5 & (uint8_t)arg8) != 0u) goto L_101022ce;
L_101022c0: ;
    g->edx = arg7;
    return 0u;
L_101022c5: ;
    if ((uint8_t)arg5 != 2u) goto L_101022c0;
    if (((uint8_t)arg5 & (uint8_t)arg8) == 0u) goto L_101022c0;
L_101022ce: ;
    g->edx = arg7;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10102210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10102210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
