/* f_0x102167d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102167d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0x1cu);
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = t1;
        goto L_1021690f;
    }
    loc_8 = t1;
    t2 = rd32(self + 0x20u);
    if (rd32(self + 0x20u) == 0u)
    {
        eax = t2;
        goto L_1021690f;
    }
    loc_4 = t2;
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(sp0 + 4u)) + (rd16(rd32(sp0 + 4u) + 8u) >> 1u)) < (int16_t)rd16(rd32(sp0 + 0x10u)))
    {
        eax = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u) + 2u);
        goto L_10216959;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u) + 2u);
    edx = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u)) + (rd16(rd32(sp0 + 4u) + 8u) >> 1u);
    ebx = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u));
    esi = rd32(sp0 + 0x10u);
    edi = (uint32_t)(int16_t)rd16(rd32(sp0 + 0x10u));
    t3 = edi + rd16(esi + 8u);
    t4 = rd16(esi + 8u);
    wr32(sp0 + 4u, t3);
    if ((int32_t)edx > (int32_t)(edi + t4)) goto L_10216959;
    t5 = (uint32_t)(int16_t)rd16(esi + 2u);
    t6 = rd16(esi + 2u);
    wr32(sp0 + 0x10u, t5);
    if ((int32_t)eax < (int16_t)t6) goto L_10216959;
    if ((int32_t)eax > (int32_t)(rd16(esi + 0xau) + rd32(sp0 + 0x10u))) goto L_10216959;
    esi = rd16(esi + 0xau) + rd32(sp0 + 0x10u);
    if ((int32_t)edx < (int32_t)edi) goto L_10216959;
    if ((int32_t)edx > (int32_t)rd32(sp0 + 4u)) goto L_10216959;
    if ((int32_t)(eax + 0xeu) < (int32_t)rd32(sp0 + 0x10u)) goto L_10216959;
    ecx = eax + 0xeu;
    edx = rd32(sp0 + 0x10u);
    if ((int32_t)ecx > (int32_t)esi) goto L_10216959;
    if ((uint8_t)arg2 == 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_102168e6;
    }
    if (rd32(self + 0x18u) == 0u)
    {
        loc_28 = eax;
        loc_2c = ebx;
        goto L_102168d3;
    }
    ecx = rd32(self + 0x18u);
    loc_28 = eax;
    loc_2c = ebx;
    t7 = cow_divs(g, rd16(self + 0x2cu) >> 2u, 6u);
    t8 = cow_mods(g, rd16(self + 0x2cu) >> 2u, 6u);
    g->eax = rd32(ecx);
    t9 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t8 * 4u + t9), 5, loc_2c, loc_28, 0x80808080u, 0u, 0u);
    t11 = cow_divs(g, (uint16_t)(rd16(self + 0x2cu) + 1u), 0x18u);
    t12 = cow_mods(g, (uint16_t)(rd16(self + 0x2cu) + 1u), 0x18u);
    wr16(self + 0x2cu, (uint16_t)t12);
    return t11;
L_102168d3: ;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, COW_IMG(0x1011fb60u), loc_8, 5, loc_2c, loc_28, 0x80808080u, 0u, 0u);
    return t13;
L_102168e6: ;
    if ((uint8_t)arg3 == 0u) goto L_10216959;
    g->eax = eax + 4u;
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x1011fb60u), loc_4, 5, ebx, eax + 4u, 0x80808080u, 0u, 0u);
    return t14;
L_1021690f: ;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_10216939;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    t15 = rd32(sp0 + 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, COW_IMG(0x102173e0u), rd32(sp0 + 4u), 3, COW_IMG(0x10353dfcu), t15, 0x80808080u);
    return t16;
L_10216939: ;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    }
    else
    {
        t17 = rd32(sp0 + 0x10u);
        g->eax = t17;
        g->esp = sp0 - 0x18u;
        t18 = cow_thiscall(g, COW_IMG(0x102173e0u), rd32(sp0 + 4u), 3, COW_IMG(0x103718b8u), t17, 0x80808080u);
        eax = t18;
    }
L_10216959: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102167d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102167d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
