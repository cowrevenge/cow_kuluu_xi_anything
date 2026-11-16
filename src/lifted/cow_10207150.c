/* f_0x10207150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10207150(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10207194;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_102071d8;
    }
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t1 = g->edx;
    g->eax = rd32(COW_IMG(0x10664420u));
    t2 = rd32(COW_IMG(0x10664420u));
    t3 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t2);
    t4 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t5 = cow_call_regs(g, COW_IMG(0x101f7080u), t3, rd32(COW_IMG(0x10663740u)), t4, 0, 2, t4, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_10207194: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = in_edx;
    t7 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x101f2600u), t7, 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x30u);
    t12 = g->edx;
    g->eax = arg4;
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), t13, 7, COW_IMG(0x102070c0u), arg4, t11, 0u, 0u, 1u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    t17 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x53u);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_102071d8: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207150(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
