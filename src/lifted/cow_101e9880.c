/* f_0x101e9880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9880(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = t1;
    ecx = 0x5bcu;
L_101e9896: ;
    t2 = rd32(ecx + rd32(eax));
    wr32(ecx + self - 0x5a4u, t2);
    if ((int32_t)(ecx + 4u) < 1480)
    {
        ecx = ecx + 4u;
        goto L_101e9896;
    }
    ecx = 0x5e4u;
L_101e98b3: ;
    t3 = rd32(ecx + rd32(eax));
    wr32(ecx + self - 0x5c0u, t3);
    if ((int32_t)(ecx + 4u) < 1532)
    {
        ecx = ecx + 4u;
        goto L_101e98b3;
    }
    edx = t3;
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t4 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t4, g->edx, 0, 1, sp0 - 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    wr16(self + 0x14u, rd16(sp0 - 0xau));
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        goto L_101e9911;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (eax == 2u) goto L_101e9915;
    if (eax == 3u) goto L_101e9915;
L_101e9911: ;
    if (eax == 0u) goto L_101e9966;
L_101e9915: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    t7 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x24u, t7);
    wr32(sp0 - 0x28u, 0x88u);
    t8 = rd32(sp0 - 0xau);
    t9 = rd32(self + 8u);
    wr16(self + 0x16u, 0x88u);
    wr32(sp0 - 0x2cu, t8);
    t10 = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)) - 0x98u;
    wr32(sp0 - 0x30u, t10);
    g->eax = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x1011a5a0u), t9, 7, t10, t8, 0x88u, t7, 1u, 0u, 0u);
    wr32(sp0 - 0x18u, 1u);
    t12 = 0x1f0u - (uint32_t)(int16_t)rd16(self + 0x16u);
    wr32(sp0 - 0x1cu, t12);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101e8d20u), self, 2, t12, 1u);
    t14 = g->edx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t14;
    return t13;
L_101e9966: ;
    wr32(sp0 - 0x18u, 0u);
    t15 = rd32(sp0 - 0xau);
    t16 = rd32(sp0 - 6u);
    wr16(self + 0x16u, 0x78u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, t16 - t15);
    wr32(sp0 - 0x28u, 0x78u);
    wr32(sp0 - 0x2cu, t15);
    t17 = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)) - 0x88u;
    wr32(sp0 - 0x30u, t17);
    g->edx = t17;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t17, t15, 0x78u, t16 - t15, 1u, 0u, 0u);
    t18 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    t19 = 0x1f0u - (uint32_t)(int16_t)rd16(self + 0x16u);
    wr32(sp0 - 0x1cu, t19);
    g->eax = (uint32_t)(int16_t)rd16(self + 0x16u);
    g->edx = t18;
    t20 = rd16(self + 0x16u);
    t21 = cow_thiscall(g, COW_IMG(0x101e8d20u), self, 2, t19, 1u);
    t22 = g->edx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
