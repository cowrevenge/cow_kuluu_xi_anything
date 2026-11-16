/* f_0x100a37a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a37a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 < 0xcu) goto L_100a37ab;
    return arg2 & 0xffffff00u;
L_100a37ab: ;
    if ((uint8_t)arg2 > 3u) goto L_100a37d7;
    t1 = (uint8_t)arg2 + 0x1b2u;
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x1034f7e0u), t2, 0xcu, t1);
    return (t5 & 0xffffff00u) | 1u;
L_100a37d7: ;
    g->eax = (uint8_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1b6u);
    t7 = g->edx;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 2, arg1, t6);
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a37a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a37a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
