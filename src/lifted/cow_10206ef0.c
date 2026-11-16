/* f_0x10206ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206ef0(Guest* g)
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
    uint32_t t22;
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

    if ((uint16_t)arg1 == 6u) goto L_10206f64;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_10206f9c;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10206f8d;
    }
    t1 = rd32(COW_IMG(0x10206fa0u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10206f17u: goto L_10206f17;
    case 0x10206f1fu: goto L_10206f1f;
    case 0x10206f36u: goto L_10206f36;
    case 0x10206f4du: goto L_10206f4d;
    case 0x10206f64u: goto L_10206f64;
    default: rt_fatal(g, COW_IMG(0x10206f10u), "switch");
    }
    return 0;
L_10206f17: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10206830u), g->eax, g->ecx, in_edx, 1, 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10206f1f: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_stdcall(g, COW_IMG(0x10206a50u), 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10206f36: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x10206a90u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10206f4d: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x10206ad0u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10206f64: ;
    g->eax = rd32(COW_IMG(0x10664420u));
    t16 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t16);
    t18 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101f7080u), t17, rd32(COW_IMG(0x10663740u)), g->edx, 0, 2, t18, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_10206f8d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_10206f9c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206ef0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
