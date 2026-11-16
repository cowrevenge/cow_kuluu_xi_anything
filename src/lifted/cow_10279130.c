/* f_0x10279130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10279130(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_1027915e;
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3cd0u), COW_IMG(0x103b379cu));
    return t4 & 0xffffff00u;
L_1027915e: ;
    if ((int32_t)arg2 > 0) goto L_1027918c;
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3c9cu), arg2);
    return t8 & 0xffffff00u;
L_1027918c: ;
    if (arg3 == 0u) goto L_102791ba;
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t10 = g->ecx;
    t11 = g->edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3c74u), arg3);
    return t12 & 0xffffff00u;
L_102791ba: ;
    return (arg1 & 0xffffff00u) | (uint8_t)(arg1 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10279130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
