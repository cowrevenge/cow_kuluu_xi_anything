/* f_0x10206dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206dd0(Guest* g)
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

    if ((uint16_t)arg1 == 6u) goto L_10206e44;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_10206e7c;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10206e6d;
    }
    t1 = rd32(COW_IMG(0x10206e80u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10206df7u: goto L_10206df7;
    case 0x10206dffu: goto L_10206dff;
    case 0x10206e16u: goto L_10206e16;
    case 0x10206e2du: goto L_10206e2d;
    case 0x10206e44u: goto L_10206e44;
    default: rt_fatal(g, COW_IMG(0x10206df0u), "switch");
    }
    return 0;
L_10206df7: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10206830u), g->eax, g->ecx, in_edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10206dff: ;
    if (rd32(COW_IMG(0x106631e4u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10206e7c;
    }
    ecx = rd32(COW_IMG(0x106631e4u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x101d6c90u), ecx, 1, COW_IMG(0x10206ea0u));
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10206e16: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x10206a90u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10206e2d: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x10206ad0u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10206e44: ;
    g->eax = rd32(COW_IMG(0x10664420u));
    t14 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t15 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t14);
    t16 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    g->edx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x101f7080u), t15, rd32(COW_IMG(0x10663740u)), g->edx, 0, 2, t16, 0u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_10206e6d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_10206e7c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206dd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
