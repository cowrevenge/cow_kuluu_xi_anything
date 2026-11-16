/* f_0x10218180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10218180(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0x2acu);
    if (rd32(self + 0x2acu) == 0u)
    {
        eax = t1;
        loc_4 = t1;
        goto L_102182ed;
    }
    loc_4 = t1;
    if (rd32(self + 0x2b0u) == 0u)
    {
        eax = rd32(self + 0x2b0u);
        goto L_102182ed;
    }
    eax = rd32(self + 0x2b0u);
    if ((uint8_t)arg2 == 0u)
    {
        ecx = (self & 0xffffff00u) | (uint8_t)arg2;
        goto L_102182bd;
    }
    if (rd8(self + 0x4au) != 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x4au);
        goto L_102182bd;
    }
    if ((int32_t)((uint32_t)(int16_t)rd16(arg1) + (rd16(arg1 + 8u) >> 1u)) < (int16_t)rd16(self + 0x52u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 2u);
        goto L_102182b1;
    }
    eax = (uint32_t)(int16_t)rd16(arg1 + 2u);
    edx = (uint32_t)(int16_t)rd16(arg1) + (rd16(arg1 + 8u) >> 1u);
    ebx = (uint32_t)(int16_t)rd16(arg1);
    ebp = (uint32_t)(int16_t)rd16(arg1 + 2u) + 0xeu;
    edi = (uint32_t)(int16_t)rd16(self + 0x52u);
    if ((int32_t)edx > (int32_t)(edi + rd16(self + 0x5au))) goto L_102182b1;
    if ((int32_t)eax < (int16_t)rd16(self + 0x54u)) goto L_102182b1;
    edi = (uint32_t)(int16_t)rd16(self + 0x54u);
    if ((int32_t)eax > (int32_t)(edi + rd16(self + 0x5cu))) goto L_102182b1;
    if ((int32_t)edx < (int16_t)rd16(self + 0x52u)) goto L_102182b1;
    edi = (uint32_t)(int16_t)rd16(self + 0x52u);
    if ((int32_t)edx > (int32_t)(edi + rd16(self + 0x5au))) goto L_102182b1;
    if ((int32_t)ebp < (int16_t)rd16(self + 0x54u)) goto L_102182b1;
    edx = (uint32_t)(int16_t)rd16(self + 0x54u);
    if ((int32_t)ebp > (int32_t)(edx + rd16(self + 0x5cu))) goto L_102182b1;
    if (rd32(self + 0x2a8u) == 0u)
    {
        loc_24 = eax;
        goto L_1021829f;
    }
    edi = rd32(self + 0x2a8u);
    loc_24 = eax;
    t2 = ebx + rd16(self + 0x3cu);
    t3 = cow_divs(g, rd16(self + 0x2c2u) >> 2u, 6u);
    t4 = cow_mods(g, rd16(self + 0x2c2u) >> 2u, 6u);
    g->eax = rd32(edi);
    t5 = rd32(edi);
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t4 * 4u + t5), 5, t2, loc_24, 0x80808080u, 0u, 0u);
    t7 = cow_divs(g, (uint16_t)(rd16(self + 0x2c2u) + 1u), 0x18u);
    t8 = cow_mods(g, (uint16_t)(rd16(self + 0x2c2u) + 1u), 0x18u);
    wr16(self + 0x2c2u, (uint16_t)t8);
    return t7;
L_1021829f: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x1011fb60u), loc_4, 5, ebx, loc_24, 0x80808080u, 0u, 0u);
    return t9;
L_102182b1: ;
    wr8(self + 0x4au, 1u);
    return eax;
L_102182bd: ;
    if ((uint8_t)arg3 == 0u) goto L_10218332;
    t10 = (uint32_t)(int16_t)rd16(arg1 + 2u) + 4u;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, (uint32_t)(int16_t)rd16(arg1), t10, 0x80808080u, 0u, 0u);
    return t11;
L_102182ed: ;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_10218317;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    if (rd8(self + 0x4au) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
        goto L_10218317;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x1021ba80u), arg1, 3, self, COW_IMG(0x10353dfcu), self + 0x52u);
    return t12;
L_10218317: ;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    }
    else
    {
        g->eax = self + 0x52u;
        g->esp = sp0 - 0x14u;
        t13 = cow_thiscall(g, COW_IMG(0x1021ba80u), arg1, 3, self, COW_IMG(0x103718b8u), self + 0x52u);
        eax = t13;
    }
L_10218332: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10218180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10218180(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
