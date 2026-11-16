/* f_0x1025d3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025d3d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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

    if ((int32_t)(rd32(self + 0x38u) * rd32(self + 0x38u)) <= 0)
    {
        eax = rd32(self + 0x38u) * rd32(self + 0x38u);
        ebp = rd32(sp0 + 4u);
        goto L_1025d407;
    }
    eax = rd32(self + 0x38u) * rd32(self + 0x38u);
    ebp = rd32(sp0 + 4u);
    ecx = rd32(self + 0x44u) + 8u;
    ebx = 0u;
L_1025d3ef: ;
    if ((uint16_t)ebp == rd16(ecx)) goto L_1025d3fe;
    if ((int32_t)(ebx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 0x24u;
        ebx = ebx + 1u;
        goto L_1025d3ef;
    }
L_1025d407: ;
    if ((int32_t)eax <= 0)
    {
        ebx = 0u;
        goto L_1025d42c;
    }
    ecx = rd32(self + 0x44u) + 8u;
    ebx = 0u;
L_1025d413: ;
    if (rd16(ecx) == 0u) goto L_1025d423;
    if ((int32_t)(ebx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 0x24u;
        ebx = ebx + 1u;
        goto L_1025d413;
    }
    ebx = ebx + 1u;
L_1025d42c: ;
    t1 = rd32(self + 0x4cu);
    wr32(sp0 + 4u, t1);
    if ((int32_t)eax <= 0)
    {
        ebx = 0xffffffffu;
    }
    else
    {
        ecx = 0u;
        ebx = 0xffffffffu;
        edi = rd32(self + 0x44u) + 0x1cu;
L_1025d442: ;
        if ((int32_t)rd32(edi) < (int32_t)rd32(sp0 + 4u))
        {
            edx = rd32(edi);
            wr32(sp0 + 4u, edx);
            ebx = ecx;
        }
        if ((int32_t)(ecx + 1u) < (int32_t)eax)
        {
            ecx = ecx + 1u;
            edi = edi + 0x24u;
            goto L_1025d442;
        }
    }
    loc_c = ebx;
L_1025d45c: ;
    if ((int32_t)ebx < 0) goto L_1025d5ea;
    wr16(ebx * 0x24u + rd32(self + 0x44u) + 8u, (uint16_t)ebp);
    t2 = ebx * 0x24u + rd32(self + 0x44u) + 0xau;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x2cu)) + 0x18u), rd32(self + 0x2cu), 2, ebp, t2);
    t3 = rd32(self + 0x30u);
    t4 = rd32(self + 0x2cu);
    cow_thiscall(g, rd32(rd32(t4) + 0x1cu), t4, 2, ebp, t3);
    t5 = g->ecx;
    t6 = rd32(self + 0x44u);
    t7 = rd16(self + 0x34u);
    wr32(sp0 + 4u, 0u);
    t8 = rd16(ebx * 0x24u + t6);
    wr16(ebx * 0x24u + t6 + 0x18u, (uint16_t)((uint16_t)t7 * t8));
    t9 = rd16(ebx * 0x24u + rd32(self + 0x44u) + 4u);
    t10 = rd16(self + 0x34u);
    wr16(ebx * 0x24u + rd32(self + 0x44u) + 0x1au, (uint16_t)(t9 * t10));
    t11 = rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xcu);
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x13u, (uint8_t)t11);
    t12 = rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xdu);
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x14u, (uint8_t)t12);
    t13 = rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xeu);
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x15u, (uint8_t)t13);
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x16u, rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xfu));
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x11u, (uint8_t)(rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xau) + (uint8_t)(uint32_t)((int32_t)((uint32_t)(int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xcu) - (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xcu) >> 0x1fu)) >> 1u)));
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x12u, (uint8_t)(rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xbu) + (uint8_t)(uint32_t)((int32_t)((uint32_t)(int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xdu) - (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xdu) >> 0x1fu)) >> 1u)));
    wr8(ebx * 0x24u + rd32(self + 0x44u) + 0x20u, 1u);
    t14 = (uint32_t)(int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xcu);
    if ((int8_t)rd8(ebx * 0x24u + rd32(self + 0x44u) + 0xdu) > 0)
    {
        eax = ebx * 0x24u + rd32(self + 0x44u);
        edx = t14;
        ebp = rd32(self + 0x30u);
        edi = rd32(self + 0x48u) + rd16(ebx * 0x24u + rd32(self + 0x44u) + 0x18u) * 2u + rd16(ebx * 0x24u + rd32(self + 0x44u) + 0x1au) * rd32(self + 0x3cu) * 2u;
        loc_4 = t14;
        t15 = rd32(self + 0x3cu) * 2u;
        loc_8 = t15;
L_1025d564: ;
        if ((int32_t)edx <= 0) goto L_1025d58e;
        ecx = 0u;
L_1025d56a: ;
        t16 = rd16(ecx * 2u + edi);
        t17 = rd8(ebp + ecx);
        wr16(ecx * 2u + edi, (uint16_t)((t16 & 0xfffu) ^ t17 << 0xcu));
        if ((int32_t)(ecx + 1u) < (int8_t)rd8(eax + 0xcu))
        {
            ecx = ecx + 1u;
            ebx = (t16 & 0xfffu) ^ ((edx & 0xffff0000u) | t17) << 0xcu;
            edx = (uint32_t)(int8_t)rd8(eax + 0xcu);
            goto L_1025d56a;
        }
        edx = (uint32_t)(int8_t)rd8(eax + 0xcu);
L_1025d58e: ;
        t18 = rd32(sp0 + 4u) + 1u;
        t19 = rd8(eax + 0xdu);
        t20 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t18);
        if ((int32_t)(t20 + 1u) < (int8_t)t19)
        {
            ebx = (uint32_t)(int8_t)t19;
            ebp = ebp + loc_4;
            edi = edi + loc_8;
            goto L_1025d564;
        }
        ebx = loc_c;
    }
    wr8(self + 0x40u, 1u);
L_1025d5b3: ;
    t21 = rd32(ebx * 0x24u + rd32(self + 0x44u) + 0x10u);
    t22 = rd32(self + 0x44u);
    wr32(arg2, t21);
    t23 = rd32(ebx * 0x24u + t22 + 0x14u);
    wr32(arg2 + 4u, t23);
    t24 = rd32(ebx * 0x24u + t22 + 0x18u);
    wr32(arg2 + 8u, t24);
    t25 = rd32(self + 0x4cu);
    wr32(ebx * 0x24u + rd32(self + 0x44u) + 0x1cu, t25);
    return (ebx * 0x24u & 0xffffff00u) | 1u;
L_1025d3fe: ;
    if (ebx != 0xffffffffu) goto L_1025d5b3;
    goto L_1025d407;
L_1025d423: ;
    if (ebx != 0xffffffffu)
    {
        loc_c = ebx;
        goto L_1025d45c;
    }
    goto L_1025d42c;
L_1025d5ea: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025d3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025d3d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
