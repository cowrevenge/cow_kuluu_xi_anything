/* f_0x1019f4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019f4a0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1019f4d6;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_1019f4da;
    if (ecx == 3u) goto L_1019f4da;
L_1019f4d6: ;
    if (ecx == 0u) goto L_1019f4f0;
L_1019f4da: ;
    wr32(sp0 - 0x14u, 1u);
    t1 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t1);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1019f4f0: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x1062193cu)), 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        edx = t5;
        wr32(sp0 - 0x14u, sp0 - 8u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t6 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x14u, t6);
        t7 = (uint32_t)(int16_t)rd16(sp0 - 8u) + (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x44u) - (uint32_t)(int16_t)rd16(sp0 - 4u) + 3u;
        wr32(sp0 - 0x18u, t7);
        g->edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        t8 = rd16(sp0 - 8u);
        t9 = cow_call_regs(g, COW_IMG(0x10119110u), t7, rd32(self + 8u), g->edx, 0, 2, t7, t6);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 1u, 0u);
    t12 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 1u);
    t14 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
    t16 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 2u);
    t18 = g->edx;
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t19 = g->edx;
    t20 = rd32(self + 8u);
    t21 = rd32(sp0 - 0x10u);
    wr8(t20 + 0x86u, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t21;
    g->edx = t19;
    return t20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f4a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
