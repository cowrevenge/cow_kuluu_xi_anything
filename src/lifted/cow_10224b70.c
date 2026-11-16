/* f_0x10224b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10224b70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q28;
    int64_t q30;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1066714cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x1066714cu));
        goto L_10224b88;
    }
    return 1u;
L_10224b88: ;
    g->eax = arg1 * 0x30u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = arg1 * 0x30u + esi;
        edi = t1;
        goto L_10224baf;
    }
    return 1u;
L_10224baf: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x101cbe70u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10224bc2;
    }
    return 8u;
L_10224bc2: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_10224ec3;
    eax = t7;
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u) goto L_10224ec3;
    eax = t10;
    ecx = t11;
    edx = t12;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x101cbe90u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_10224bef;
    }
    return 9u;
L_10224bef: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x101cbec0u), eax, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_10224c02;
    }
    return 0xbu;
L_10224c02: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if (!(t19 >> 8u & 1u))
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_10224c16;
    }
    return 6u;
L_10224c16: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x19au);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_10224c2d;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    if (rd8(esi + 0xeu) == 0xcu) goto L_10224c44;
L_10224c2d: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x19bu);
    t26 = g->ecx;
    if ((uint8_t)t25 == 0u)
    {
        ecx = t26;
        goto L_10224c4e;
    }
    ecx = t26;
    if (rd8(esi + 0xeu) != 0xbu) goto L_10224c4e;
L_10224c44: ;
    return 0xcu;
L_10224c4e: ;
    if (rd8(COW_IMG(0x1038615au) + arg2 * 3u) - 2u > 7u) goto L_10224ebc;
    eax = rd8(COW_IMG(0x1038615au) + arg2 * 3u) - 2u;
    t27 = rd32(COW_IMG(0x10224ed0u) + eax * 4u);
    switch (t27 - RD)
    {
    case 0x10224c6eu: goto L_10224c6e;
    case 0x10224cb3u: goto L_10224cb3;
    case 0x10224cd4u: goto L_10224cd4;
    case 0x10224d21u: goto L_10224d21;
    case 0x10224d50u: goto L_10224d50;
    case 0x10224d92u: goto L_10224d92;
    case 0x10224ebcu: goto L_10224ebc;
    default: rt_fatal(g, COW_IMG(0x10224c67u), "switch");
    }
    return 0;
L_10224c6e: ;
    if ((int32_t)rd32(edi + 0x28u) >= (int32_t)rd16(esi + 0xcu))
    {
        ecx = rd16(esi + 0xcu);
        goto L_10224c85;
    }
    return 4u;
L_10224c85: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = 1u;
        goto L_10224ec8;
    }
    if (rd8(COW_IMG(0x10485641u)) >= rd8(esi + 0xfu)) goto L_10224ebc;
    return 0xdu;
L_10224cb3: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t43 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, arg1, 0u, 0u);
    if (t43 == 0u) goto L_10224ebc;
    return 2u;
L_10224cd4: ;
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, COW_IMG(0x10225120u), COW_IMG(0x10666ec0u), 3, arg1, 0u, 0u);
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 == 0u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_10224cf1;
    }
    return 2u;
L_10224cf1: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x178u);
    if ((uint8_t)t42 != 0u) goto L_10224ebc;
    if ((int32_t)rd16(esi + 0xcu) <= (int32_t)rd32(edi + 0x28u)) goto L_10224ebc;
    return 4u;
L_10224d21: ;
    g->esp = sp0 - 0x10u;
    t38 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    if ((uint8_t)t38 != 0u) goto L_10224d39;
    return 0xau;
L_10224d39: ;
    if ((int32_t)rd32(edi + 0x28u) >= 1000) goto L_10224ebc;
    return 4u;
L_10224d50: ;
    t33 = (ecx & 0xffff0000u) | rd16(esi + 6u);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x10101d00u), t33, 4, t33, 0x63u, 0u, COW_IMG(0x10485a30u));
    t35 = g->ecx;
    t36 = g->edx;
    g->esp = sp0 - 0x20u;
    t37 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), t35, 1, 0x2fu);
    if ((uint8_t)t37 != 0u) goto L_10224ebc;
    esi = t34;
    if ((int32_t)(uint16_t)esi <= (int32_t)rd32(edi + 0x24u)) goto L_10224ebc;
    return 5u;
L_10224d92: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = 1u;
        goto L_10224ec8;
    }
    if (arg2 == 9u) goto L_10224e6a;
    if (arg2 == 0xfu) goto L_10224e0c;
    if (arg2 == 0x12u) goto L_10224dc6;
    return 3u;
L_10224dc6: ;
    if (rd8(COW_IMG(0x10485640u)) != 9u)
    {
        if (rd8(COW_IMG(0x10485642u)) != 9u)
        {
            eax = 0u;
            ecx = 0u;
            edx = arg2;
        }
        else
        {
            eax = ((-(rd8(COW_IMG(0x10485643u)) < 0x19u) & 0xffffff00u) | (-(rd8(COW_IMG(0x10485643u)) < 0x19u) & 0xfdu)) + 3u;
            ecx = 0x5au;
            edx = arg2;
        }
    }
    else
    {
        eax = ((-(rd8(COW_IMG(0x10485641u)) < 0x19u) & 0xffffff00u) | (-(rd8(COW_IMG(0x10485641u)) < 0x19u) & 0xfdu)) + 3u;
        ecx = 0x5au;
        edx = arg2;
    }
L_10224e9b: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x10225220u), COW_IMG(0x10666ec0u), 3, arg1, eax, ecx);
    if (t32 >= rd16(esi + 6u)) goto L_10224ebc;
    return 2u;
L_10224e0c: ;
    if (rd8(COW_IMG(0x10485640u)) != 0x14u)
    {
        if (rd8(COW_IMG(0x10485642u)) != 0x14u)
        {
            eax = 0u;
            ecx = 0u;
            edx = (arg2 & 0xffffff00u) | 0x14u;
        }
        else
        {
            q30 = (int64_t)cow_muls(0x66666667u, rd8(COW_IMG(0x10485643u)) - 0xau);
            t31 = (uint32_t)((int32_t)cow_qhi(q30) >> 3u);
            eax = t31 + (t31 >> 0x1fu) + 1u;
            ecx = 0xf0u;
            edx = t31;
        }
    }
    else
    {
        q28 = (int64_t)cow_muls(0x66666667u, rd8(COW_IMG(0x10485641u)) - 0xau);
        t29 = (uint32_t)((int32_t)cow_qhi(q28) >> 3u);
        eax = t29 + (t29 >> 0x1fu) + 1u;
        ecx = 0xf0u;
        edx = t29;
    }
    goto L_10224e9b;
L_10224e6a: ;
    if (rd8(COW_IMG(0x10485640u)) != 0x11u)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        goto L_10224e7e;
    }
    ebx = (in_ebx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
L_10224e8c: ;
    eax = ((-((uint8_t)ebx < 0x28u) & 0xffffff00u) | (-((uint8_t)ebx < 0x28u) & 0xfeu)) + 2u;
    ecx = 0x78u;
    edx = (arg2 & 0xffffff00u) | 0x11u;
    goto L_10224e9b;
L_10224e7e: ;
    if (rd8(COW_IMG(0x10485642u)) != 0x11u)
    {
        eax = 0u;
        ecx = 0u;
        edx = (arg2 & 0xffffff00u) | 0x11u;
        goto L_10224e9b;
    }
    ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    goto L_10224e8c;
L_10224ebc: ;
    return 0u;
L_10224ec3: ;
    eax = 7u;
L_10224ec8: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
