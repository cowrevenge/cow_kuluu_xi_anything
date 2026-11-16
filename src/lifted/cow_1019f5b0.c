/* f_0x1019f5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019f5b0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1019f64e;
    }
    t1 = rd32(COW_IMG(0x1019f654u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1019f5cbu: goto L_1019f5cb;
    case 0x1019f5e3u: goto L_1019f5e3;
    case 0x1019f639u: goto L_1019f639;
    default: rt_fatal(g, COW_IMG(0x1019f5c4u), "switch");
    }
    return 0;
L_1019f5cb: ;
    t19 = rd32(rd32(self + 8u) + 0x34u) | 1u;
    wr32(rd32(self + 8u) + 0x34u, t19);
    g->eax = rd32(rd32(self + 0x14u));
    g->edx = in_edx;
    t20 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, rd32(t20 + 0x38u), rd32(self + 0x14u), 0);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_1019f5e3: ;
    if ((uint16_t)arg2 != 4u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1019f64e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_1019f630;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1019f630;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t13 = g->edx;
    cow_fastcall(g, COW_IMG(0x101b5800u), rd32(self + 0x14u), t13, 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371ae8u), 1u, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1019f630: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_1019f639: ;
    t2 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg1 - 3u, t2, g->edx, 0, 2, 4u, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101186a0u), t2, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1019f64e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f5b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
