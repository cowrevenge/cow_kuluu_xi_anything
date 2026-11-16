/* f_0x1019bdd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019bdd0(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
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

    if ((uint16_t)arg1 != 5u) goto L_1019be7f;
    if ((uint32_t)(int16_t)arg2 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1019be94;
    }
    t1 = rd32(COW_IMG(0x1019be98u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019bdf8u: goto L_1019bdf8;
    case 0x1019be0bu: goto L_1019be0b;
    case 0x1019be1eu: goto L_1019be1e;
    case 0x1019be31u: goto L_1019be31;
    case 0x1019be4bu: goto L_1019be4b;
    case 0x1019be65u: goto L_1019be65;
    default: rt_fatal(g, COW_IMG(0x1019bdf1u), "switch");
    }
    return 0;
L_1019bdf8: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xc9u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1019be0b: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xc9u, 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1019be1e: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xc9u, 2u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1019be31: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xceu, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1019bfa0u), self, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_1019be4b: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xceu, 2u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1019bfa0u), self, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1019be65: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xceu, 0u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1019bfa0u), self, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1019be7f: ;
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
        t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a6ccu));
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
L_1019be94: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019bdd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019bdd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
