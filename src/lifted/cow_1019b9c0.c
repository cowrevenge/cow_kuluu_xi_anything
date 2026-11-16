/* f_0x1019b9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019b9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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

    if ((uint16_t)arg1 != 5u) goto L_1019bae8;
    if ((uint32_t)(int16_t)arg2 - 1u > 0xdu)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        edx = in_edx;
        goto L_1019bafd;
    }
    t1 = rd32(COW_IMG(0x1019bb04u) + rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1019b9f1u: edx = rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019b9f1;
    case 0x1019ba0cu: goto L_1019ba0c;
    case 0x1019ba6bu: edx = rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019ba6b;
    case 0x1019ba86u: edx = rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019ba86;
    case 0x1019ba9cu: edx = rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019ba9c;
    case 0x1019bab7u: goto L_1019bab7;
    case 0x1019bad2u: edx = rd8(COW_IMG(0x1019bb20u) + (uint32_t)(int16_t)arg2 - 1u); goto L_1019bad2;
    default: rt_fatal(g, COW_IMG(0x1019b9eau), "switch");
    }
    return 0;
L_1019b9f1: ;
    t29 = (uint16_t)arg2 != 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x10193830u), (in_eax & 0xffff0000u) | (uint16_t)arg2, g->ecx, g->edx, 1, 2, 0xbeu, t29);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_1019ba0c: ;
    t17 = (uint16_t)arg2 == 4u;
    g->ecx = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = t17;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10193850u), (in_eax & 0xffff0000u) | (uint16_t)arg2, g->ecx, g->edx, 1, 1, 0xbfu);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), t18, g->ecx, g->edx, 1, 2, 0xbfu, t17);
    t21 = g->ecx;
    t22 = g->edx;
    if (t17 != 1u)
    {
        ecx = t21;
        edx = t22;
        goto L_1019ba5d;
    }
    ecx = t21;
    edx = t22;
    edi = t18;
    if (edi == 1u) goto L_1019ba4f;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 4u, 0u, 0u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_1019ba4f: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 1u, 0u, 0u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_1019ba5d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 0u, 0u, 0u);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_1019ba6b: ;
    t14 = (uint16_t)arg2 == 5u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10193830u), (in_eax & 0xffff0000u) | (uint16_t)arg2, g->ecx, g->edx, 1, 2, 0xc0u, t14);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1019ba86: ;
    t11 = (edx & 0xffffff00u) | (uint16_t)arg2 != 7u;
    g->eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
    g->edx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 7u, t11);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_1019ba9c: ;
    t8 = (uint16_t)arg2 == 9u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), (in_eax & 0xffff0000u) | (uint16_t)arg2, g->ecx, g->edx, 1, 2, 0xc2u, t8);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1019bab7: ;
    t5 = (uint16_t)arg2 == 0xbu;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), (in_eax & 0xffff0000u) | (uint16_t)arg2, g->ecx, g->edx, 1, 2, 0xc3u, t5);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1019bad2: ;
    t2 = (((in_eax & 0xffff0000u) | (uint16_t)arg2) & 0xffffff00u) | (uint16_t)arg2 != 0xdu;
    g->eax = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 6u, t2);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1019bae8: ;
    if ((uint16_t)arg1 != 6u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
    }
    else
    {
        g->eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a6e0u));
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
L_1019bafd: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019b9c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
