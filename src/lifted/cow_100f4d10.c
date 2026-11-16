/* f_0x100f4d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f4d10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f4db4;
    t1 = rd32(COW_IMG(0x100f4dbcu) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4d25u: goto L_100f4d25;
    case 0x100f4d2cu: goto L_100f4d2c;
    case 0x100f4d76u: goto L_100f4d76;
    case 0x100f4dadu: goto L_100f4dad;
    default: rt_fatal(g, COW_IMG(0x100f4d1eu), "switch");
    }
    return 0;
L_100f4d25: ;
    return 3u;
L_100f4d2c: ;
    if (rd8(arg1 + 0xcdu) != 0u)
    {
        edx = in_edx;
        goto L_100f4d6f;
    }
    t5 = rd32(arg1 + 0x40u);
    t6 = rd32(arg1 + 0x3cu);
    t7 = rd32(arg1 + 0x38u);
    g->edx = t6;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x100e69f0u), 6, 0u, 0u, t7, t6, t5, arg1 + 0x44u);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edx = t9;
        goto L_100f4d61;
    }
    edx = t9;
    g->edx = edx;
    return 0xcu;
L_100f4d61: ;
    wr16(arg1 + 0x10u, 0u);
    wr8(arg1 + 0x12u, 0u);
    wr8(arg1 + 0x13u, 0u);
L_100f4d6f: ;
    g->edx = edx;
    return 0x16u;
L_100f4d76: ;
    if (rd8(arg1 + 0xcdu) == 0u) goto L_100f4d8b;
    return 0x17u;
L_100f4d8b: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x100e7a50u), 0);
    t3 = g->edx;
    if ((int32_t)t2 <= 0)
    {
        eax = t2;
        goto L_100f4d9b;
    }
    edx = t3;
    g->edx = edx;
    return 0x17u;
L_100f4d9b: ;
    t4 = (((int32_t)eax >= 0) - 1u & 0xffffffefu) + 0x16u;
    g->edx = t4;
    return t4;
L_100f4dad: ;
    return 6u;
L_100f4db4: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f4d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
