/* f_0x10112e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10112e20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(rd32(self + 0x8f8u) - rd32(self + 0x8fcu)) > 0)
    {
        esi = rd32(self + 0x8f8u) - rd32(self + 0x8fcu);
        goto L_10112e42;
    }
    return 2u;
L_10112e42: ;
    if (esi > 0x800u)
    {
        esi = 0x800u;
    }
    if ((int32_t)(uint16_t)arg2 < (int32_t)esi)
    {
        esi = (uint16_t)arg2;
    }
    if ((uint8_t)arg1 != 0u)
    {
        eax = rd32(self + 0x900u);
        goto L_10112f1e;
    }
    eax = rd32(self + 0x900u);
    if (eax == 0u) goto L_10112ecb;
    if (rd8(eax) == 0u) goto L_10112ecb;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101c4a40u), rd32(COW_IMG(0x10662dccu)), 2, eax, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_10112e97;
    }
    edx = t2;
    g->edx = edx;
    return 3u;
L_10112e97: ;
    t3 = rd32(self + 0x8fcu);
    t4 = rd32(self + 0x900u);
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x101c46f0u), rd32(COW_IMG(0x10662dccu)), 5, t4, COW_IMG(0x104e0f08u), esi, t3, 0u);
    t6 = g->edx;
    if ((int32_t)t5 >= 0)
    {
        edx = t6;
        goto L_10112f5b;
    }
    edx = t6;
    g->edx = edx;
    return 3u;
L_10112ecb: ;
    t7 = rd32(self + 0x8f4u);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x101c4a10u), rd32(COW_IMG(0x10662dccu)), 3, t7, 0u, 0u);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
        goto L_10112ef0;
    }
    edx = t9;
    g->edx = edx;
    return 3u;
L_10112ef0: ;
    t10 = rd32(self + 0x8fcu);
    t11 = rd32(self + 0x8f4u);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t11, COW_IMG(0x104e0f08u), esi, t10);
    t13 = g->edx;
    if ((int32_t)t12 >= 0)
    {
        edx = t13;
        goto L_10112f5b;
    }
    edx = t13;
    g->edx = edx;
    return 3u;
L_10112f1e: ;
    if (eax == 0u) goto L_10112f41;
    if (rd8(eax) == 0u) goto L_10112f41;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101c4a40u), rd32(COW_IMG(0x10662dccu)), 2, eax, 0u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        edx = t15;
        goto L_10112f63;
    }
    edx = t15;
    g->edx = edx;
    return 0u;
L_10112f41: ;
    t16 = rd32(self + 0x8f4u);
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x101c4a10u), rd32(COW_IMG(0x10662dccu)), 3, t16, 0u, 0u);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        edx = t18;
        goto L_10112f63;
    }
    edx = t18;
L_10112f5b: ;
    g->edx = edx;
    return 0u;
L_10112f63: ;
    t19 = rd32(self + 0x8fcu);
    wr32(self + 0x804u, esi);
    wr32(self + 0x8fcu, esi + t19);
    esi = COW_IMG(0x104e0f08u);
    edi = self + 4u;
    ecx = (uint16_t)arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112e20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
