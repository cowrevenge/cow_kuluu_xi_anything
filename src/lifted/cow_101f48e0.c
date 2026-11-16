/* f_0x101f48e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f48e0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101f49db;
    }
    ecx = rd32(COW_IMG(0x106631d4u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101f49db;
    }
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x101d30f0u), in_eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101d3ef0u), rd32(COW_IMG(0x106631d4u)), 1, t1);
    t4 = g->edx;
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = t3;
        edx = t4;
        goto L_101f49cc;
    }
    eax = t3;
    edx = t4;
    t5 = rd32(COW_IMG(0x101f49e0u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t5 - RD)
    {
    case 0x101f4921u: goto L_101f4921;
    case 0x101f494eu: goto L_101f494e;
    case 0x101f4977u: goto L_101f4977;
    case 0x101f4995u: goto L_101f4995;
    case 0x101f49bbu: goto L_101f49bb;
    default: rt_fatal(g, COW_IMG(0x101f491au), "switch");
    }
    return 0;
L_101f4921: ;
    if (eax == 0u) goto L_101f49cc;
    t22 = rd32(eax + 0x10u);
    t23 = (edx & 0xffffff00u) | rd8(eax + 5u);
    g->eax = eax;
    g->edx = t23;
    g->esp = sp0;
    t24 = cow_thiscall(g, COW_IMG(0x10134670u), rd32(COW_IMG(0x105781b8u)), 2, t23, t22);
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eca8u));
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_101f494e: ;
    if (eax == 0u) goto L_101f49cc;
    t16 = rd32(eax + 0x10u);
    t17 = (edx & 0xffffff00u) | rd8(eax + 5u);
    g->eax = eax;
    g->edx = t17;
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x101d37e0u), rd32(COW_IMG(0x106631d4u)), 2, t17, t16);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eca8u));
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101f4977: ;
    if (eax == 0u) goto L_101f49db;
    t12 = rd32(eax + 0x10u);
    t13 = (edx & 0xffffff00u) | rd8(eax + 5u);
    g->eax = eax;
    g->edx = t13;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x101d3c40u), rd32(COW_IMG(0x106631d4u)), 4, t13, t12, 1u, 1u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101f4995: ;
    if (rd32(COW_IMG(0x106631e4u)) == 0u) goto L_101f49cc;
    ecx = rd32(COW_IMG(0x106631e4u));
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x101d6c90u), ecx, 1, COW_IMG(0x101f4aa0u));
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eca8u));
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101f49bb: ;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101d3cc0u), eax, rd32(COW_IMG(0x106631d4u)), g->edx, 0, 3, 1u, 1u, 1u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_101f49cc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t28 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eca8u));
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_101f49db: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f48e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f48e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
