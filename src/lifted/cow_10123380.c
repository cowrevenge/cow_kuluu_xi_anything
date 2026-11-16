/* f_0x10123380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10123380(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), rd32(COW_IMG(0x10662d40u)), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101233bb;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10124110u), COW_IMG(0x104e1c40u), 1, 0x45u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_101233bb;
    }
    edx = t4;
    if (arg1 - 0x47u > 0xbu) goto L_101233bb;
    t5 = rd32(COW_IMG(0x10123420u) + rd8(COW_IMG(0x10123428u) + arg1 - 0x47u) * 4u);
    switch (t5 - RD)
    {
    case 0x101233bbu: goto L_101233bb;
    case 0x10123419u: eax = arg1 - 0x47u; goto L_10123419;
    default: rt_fatal(g, COW_IMG(0x101233b4u), "switch");
    }
    return 0;
L_101233bb: ;
    if (arg2 > 5u)
    {
        eax = arg2;
        goto L_10123419;
    }
    t6 = rd32(COW_IMG(0x10123434u) + arg2 * 4u);
    switch (t6 - RD)
    {
    case 0x101233cbu: goto L_101233cb;
    case 0x101233d8u: goto L_101233d8;
    case 0x101233e5u: goto L_101233e5;
    case 0x101233f2u: goto L_101233f2;
    case 0x101233ffu: goto L_101233ff;
    case 0x1012340cu: goto L_1012340c;
    default: rt_fatal(g, COW_IMG(0x101233c4u), "switch");
    }
    return 0;
L_101233cb: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x101240d0u), COW_IMG(0x104e1c40u), 1, arg1);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_101233d8: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, arg1);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101233e5: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x101240f0u), COW_IMG(0x104e1c40u), 1, arg1);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101233f2: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10124090u), COW_IMG(0x104e1c40u), 1, arg1);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_101233ff: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101240b0u), COW_IMG(0x104e1c40u), 1, arg1);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1012340c: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, arg1);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10123419: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
