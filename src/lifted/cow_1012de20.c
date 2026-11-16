/* f_0x1012de20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012de20(Guest* g)
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

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1012de3c;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_1012de40;
    if (ecx == 3u) goto L_1012de40;
L_1012de3c: ;
    if (ecx == 0u) goto L_1012de48;
L_1012de40: ;
    g->eax = eax;
    g->edx = edx;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1011ad50u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
L_1012de48: ;
    wr8(self + 0x25u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
    }
    else
    {
        ecx = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
        t9 = g->edx;
        t10 = rd32(rd32(t8) + 0x868u);
        g->eax = rd32(t8);
        g->edx = t9;
        t11 = rd32(t8);
        t12 = rd32(self + 8u);
        t13 = cow_thiscall(g, COW_IMG(0x1011ae50u), t12, 2, 1u, t10);
        t14 = g->ecx;
        t15 = g->edx;
        g->edx = t15;
        t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0xf0u);
        t17 = g->edx;
        t18 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, t16);
        wr8(self + 0x25u, 1u);
        eax = t18;
    }
    g->edx = self + 0x14u;
    t19 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t19, g->edx, 0, 1, self + 0x14u);
    t21 = g->ecx;
    t22 = g->edx;
    wr8(self + 0x24u, 0u);
    eax = t20;
    ecx = t21;
    edx = t22;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t23 = cow_call_regs(g, COW_IMG(0x10080d00u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    t26 = (t23 & 0xffffff00u) | (uint8_t)(t23 | 0x20u);
    g->edx = t25;
    t27 = cow_call_regs(g, COW_IMG(0x10080d10u), t26, g->ecx, g->edx, 1, 1, t26);
    t28 = g->edx;
    g->edx = t28;
    return t27;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012de20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012de20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
