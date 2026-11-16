/* f_0x1009f7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009f7c0(Guest* g)
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 0x30u) - 1u > 3u)
    {
        eax = rd16(arg3 + 0x30u) - 1u;
        edx = in_edx;
        goto L_1009f8c3;
    }
    eax = rd16(arg3 + 0x30u) - 1u;
    t1 = rd32(COW_IMG(0x1009f8d0u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1009f7dcu: goto L_1009f7dc;
    case 0x1009f836u: goto L_1009f836;
    case 0x1009f874u: goto L_1009f874;
    default: rt_fatal(g, COW_IMG(0x1009f7d5u), "switch");
    }
    return 0;
L_1009f7dc: ;
    t12 = rd16(arg3 + 4u);
    wr32(COW_IMG(0x104888f8u), t12);
    t13 = rd16(arg3 + 6u);
    wr32(COW_IMG(0x104888fcu), t13);
    t14 = rd16(arg3 + 8u);
    wr32(COW_IMG(0x10488900u), t14);
    t15 = rd16(arg3 + 0xau);
    wr32(COW_IMG(0x10488904u), t15);
    t16 = rd16(arg3 + 0xcu);
    wr32(COW_IMG(0x10488908u), t16);
    g->eax = t15;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x1009f960u), 1, arg3);
    t18 = rd16(arg3 + 0xeu);
    wr8(COW_IMG(0x10480a90u), 0u);
    wr32(COW_IMG(0x1048894cu), t18);
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
L_1009f836: ;
    eax = 0u;
    ecx = arg3 + 0x20u;
L_1009f83b: ;
    t9 = rd16(ecx - 0x10u);
    wr32(COW_IMG(0x104887fcu) + eax + 4u, t9);
    t10 = rd16(ecx);
    wr32(COW_IMG(0x1048897cu) + eax + 4u, t10);
    if ((int32_t)(eax + 4u) < 32)
    {
        eax = eax + 4u;
        ecx = ecx + 2u;
        goto L_1009f83b;
    }
    edx = t10;
    t11 = rd16(arg3 + 0x32u);
    wr8(COW_IMG(0x10480a90u), 0u);
    wr32(COW_IMG(0x104889a0u), t11);
    g->edx = edx;
    return (t11 & 0xffffff00u) | 1u;
L_1009f874: ;
    t2 = rd16(arg3 + 4u);
    wr32(COW_IMG(0x104888f8u), t2);
    t3 = rd16(arg3 + 6u);
    wr32(COW_IMG(0x104888fcu), t3);
    t4 = rd16(arg3 + 8u);
    wr32(COW_IMG(0x10488900u), t4);
    t5 = rd16(arg3 + 0xau);
    wr32(COW_IMG(0x10488904u), t5);
    t6 = rd16(arg3 + 0xcu);
    wr32(COW_IMG(0x10488908u), t6);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1009f8e0u), g->eax, g->ecx, t6, 1, 1, arg3);
    t7 = g->edx;
    t8 = rd16(arg3 + 0xeu);
    wr32(COW_IMG(0x1048894cu), t8);
    eax = t8;
    edx = t7;
L_1009f8c3: ;
    wr8(COW_IMG(0x10480a90u), 0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009f7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
