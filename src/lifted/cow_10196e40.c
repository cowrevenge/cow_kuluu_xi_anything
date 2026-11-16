/* f_0x10196e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10196e40(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10196f03;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10196f03;
    }
    t1 = rd32(COW_IMG(0x10196f08u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10196e62u: goto L_10196e62;
    case 0x10196e71u: goto L_10196e71;
    case 0x10196e80u: goto L_10196e80;
    case 0x10196e8fu: goto L_10196e8f;
    case 0x10196e9eu: goto L_10196e9e;
    case 0x10196eb4u: goto L_10196eb4;
    case 0x10196ecau: goto L_10196eca;
    default: rt_fatal(g, COW_IMG(0x10196e5bu), "switch");
    }
    return 0;
L_10196e62: ;
    g->edx = in_edx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 3u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10196e71: ;
    g->edx = in_edx;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 3u, 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10196e80: ;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10196e8f: ;
    g->edx = in_edx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 1u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10196e9e: ;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a730u), 1u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10196eb4: ;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a71cu), 1u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10196eca: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x8fu);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, COW_IMG(0x106626d8u), t2);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10196f30u), 0u, COW_IMG(0x106626d8u), 0u, 0u, 1u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10196f03: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196e40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
