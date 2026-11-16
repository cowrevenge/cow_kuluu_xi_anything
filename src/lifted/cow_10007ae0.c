/* f_0x10007ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10007ae0(Guest* g)
{
    double d24;
    double d31;
    double d32;
    double d33;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    int64_t q1;
    int64_t q16;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 96u);

    if (rd8(self + 0xc9au) == 0u) goto L_10007afc;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xc9au);
    if (rd8(self + 0xc99u) == 0u) goto L_10007af9;
    eax = (eax & 0xffffff00u) | rd8(self + 0xc99u);
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(COW_IMG(0x10455c39u)) == 0u) goto L_10007e0f;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c39u));
    wr32(COW_IMG(0x10455c2cu), 0u);
    wr32(sp0 - 4u, 0u);
    if (rd8(self + 0xdbcu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(self + 0xdb4u) > 0)
        {
            eax = rd32(self + 0xdb4u);
            wr32(COW_IMG(0x10455c2cu), eax);
        }
        if ((int32_t)rd32(self + 0xdb0u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0xdb0u);
            q1 = (int64_t)cow_muls(0x66666667u, ecx);
            t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 2u);
            t3 = t2 + (t2 >> 0x1fu) + rd32(COW_IMG(0x10455c2cu));
            wr32(COW_IMG(0x10455c2cu), t3);
            edx = t2 + (t2 >> 0x1fu);
        }
    }
    wr32(self + 0xdb0u, 0u);
    wr32(self + 0xdb4u, 0u);
    wr8(self + 0xdbcu, 0u);
    t4 = rd32(COW_IMG(0x10455c2cu)) * 2u;
    t5 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t4);
    if ((int32_t)(t5 * 2u) >= 10)
    {
        eax = t4;
        ecx = t5;
        if ((int32_t)eax > 256)
        {
            wr32(COW_IMG(0x10455c2cu), 0x100u);
        }
    }
    else
    {
        eax = t4;
        ecx = t5;
        wr32(COW_IMG(0x10455c2cu), 0u);
    }
    if ((int32_t)rd32(self + 0xdb8u) <= 0) goto L_10007d9c;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = cow_take_float(g);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = rd32(self + 0xdb8u) - (uint32_t)(int16_t)t10;
    t12 = rd32(self + 0xdb8u);
    wr32(self + 0xdb8u, t11);
    if ((int32_t)(t12 - (uint32_t)(int16_t)t10) <= 0) goto L_10007d9c;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    return 1u;
L_10007af9: ;
    return 0u;
L_10007afc: ;
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    if (rd32(COW_IMG(0x10455c28u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10455c28u));
        goto L_10007b2a;
    }
    return 0u;
L_10007b2a: ;
    wr32(COW_IMG(0x10455c2cu), 0u);
    if (rd8(self + 0xdbcu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(self + 0xdb4u) > 0)
        {
            eax = rd32(self + 0xdb4u);
            wr32(COW_IMG(0x10455c2cu), eax);
        }
        if ((int32_t)rd32(self + 0xdb0u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0xdb0u);
            q16 = (int64_t)cow_muls(0x66666667u, ecx);
            t17 = (uint32_t)((int32_t)cow_qhi(q16) >> 2u);
            t18 = t17 + (t17 >> 0x1fu) + rd32(COW_IMG(0x10455c2cu));
            wr32(COW_IMG(0x10455c2cu), t18);
            edx = t17 + (t17 >> 0x1fu);
        }
    }
    wr32(self + 0xdb0u, 0u);
    wr32(self + 0xdb4u, 0u);
    wr8(self + 0xdbcu, 0u);
    t19 = rd32(COW_IMG(0x10455c2cu)) * 2u;
    t20 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t19);
    if ((int32_t)(t20 * 2u) >= 10)
    {
        eax = t19;
        ecx = t20;
        if ((int32_t)eax > 256)
        {
            wr32(COW_IMG(0x10455c2cu), 0x100u);
        }
    }
    else
    {
        eax = t19;
        ecx = t20;
        wr32(COW_IMG(0x10455c2cu), 0u);
    }
    if ((int32_t)rd32(self + 0xdb8u) <= 0) goto L_10007be0;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    d24 = cow_take_float(g);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t26 = rd32(self + 0xdb8u) - (uint32_t)(int16_t)t25;
    t27 = rd32(self + 0xdb8u);
    wr32(self + 0xdb8u, t26);
    if ((int32_t)(t27 - (uint32_t)(int16_t)t25) <= 0) goto L_10007be0;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x4cu);
    return 1u;
L_10007be0: ;
    wr32(self + 0xdb8u, 5u);
    wr32(sp0 - 0x3cu, 0u);
    t28 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u + (uint8_t)(uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u) >> 0x1fu)) >> 8u);
    t29 = rd32(COW_IMG(0x10455c24u));
    t30 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t28);
    wr32(COW_IMG(0x10455c30u), t28);
    if (t29 != 1u)
    {
        eax = t28;
        ecx = t29;
        edx = (uint8_t)(uint32_t)((int32_t)(t30 * 0x2710u) >> 0x1fu);
        wr32(sp0 - 0x40u, eax);
        wr32(sp0 - 0x3cu, eax);
        d31 = (double)(int32_t)rd32(COW_IMG(0x10455c2cu));
        d32 = fr(g, d31 * d31);
        d33 = fr(g, sqrt(fr(g, d32 + d32)));
        fpush(g, d33);
        g->esp = sp0 - 0x4cu;
        t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t34;
    }
    else
    {
        eax = t28;
        wr32(sp0 - 0x40u, 0u);
    }
    wr32(sp0 - 0x44u, eax);
    if (eax != 0u) goto L_10007c5c;
    if (rd32(self + 0xdc0u) != 0u) goto L_10007c5c;
    return 0u;
L_10007c5c: ;
    wr32(sp0 - 0x50u, in_edi);
    wr32(self + 0xdc0u, eax);
    edi = sp0 - 0x38u;
    eax = 0u;
    ecx = 0xeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x10455c24u)));
    wr32(sp0 - 8u, sp0 - 0x44u);
    wr32(sp0 - 0x38u, 0x38u);
    wr32(sp0 - 0x34u, 0x12u);
    wr32(sp0 - 0x14u, sp0 - 0x40u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x54u, 0x20000140u);
    wr32(sp0 - 0x58u, sp0 - 0x38u);
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x10455c28u)));
    g->eax = rd32(COW_IMG(0x10455c28u));
    t35 = rd32(COW_IMG(0x10455c28u));
    g->esp = sp0 - 0x50u;
    t36 = cow_thiscall(g, rd32(rd32(t35) + 0x18u), rd32(t35), 3, t35, sp0 - 0x38u, 0x20000140u);
    return t36;
L_10007d9c: ;
    wr32(self + 0xdb8u, 5u);
    t13 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u + (uint8_t)(uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u) >> 0x1fu)) >> 8u);
    t14 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t13);
    wr32(COW_IMG(0x10455c30u), t13);
    if ((int32_t)(t13 * 4u) <= 65535)
    {
        eax = t13 * 4u;
        ecx = t13 * 4u;
        edx = (uint8_t)(uint32_t)((int32_t)(t14 * 0x2710u) >> 0x1fu);
    }
    else
    {
        ecx = t13 * 4u;
        edx = (uint8_t)(uint32_t)((int32_t)(t14 * 0x2710u) >> 0x1fu);
        eax = 0xffffu;
    }
    if ((int32_t)ecx > 65535)
    {
        ecx = 0xffffu;
    }
    wr16(sp0 - 4u, (uint16_t)eax);
    wr16(sp0 - 2u, (uint16_t)ecx);
    wr32(sp0 - 0x10u, sp0 - 4u);
    t15 = rd32(self + 0xc9cu);
    wr32(sp0 - 0x14u, t15);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10008ed0u), 2, t15, sp0 - 4u);
L_10007e0f: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10007ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10007ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
