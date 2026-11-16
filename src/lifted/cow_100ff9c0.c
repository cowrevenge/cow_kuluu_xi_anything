/* f_0x100ff9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100ff9c0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd16(rd32(sp0 + 4u) + 2u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    t3 = -(t1 != 0u) + 5u;
    if ((int32_t)(-(t1 != 0u) + 5u) <= 0)
    {
        loc_4 = t3;
        goto L_10100070;
    }
    esi = t2;
    loc_4 = t3;
    ecx = 0u;
    edx = in_edx;
L_100ff9f0: ;
    t4 = (ecx & 0xffff0000u) | rd16(arg2 + ecx * 2u + 2u);
    if ((t4 & 0x7ffu) >= 0x80u)
    {
        eax = t4 & 0x7ffu;
        ecx = (t4 & 0xffff0000u) | (uint16_t)t4 >> 0xbu;
        goto L_100ffa2b;
    }
    eax = t4 & 0x7ffu;
    ecx = (t4 & 0xffff0000u) | (uint16_t)t4 >> 0xbu;
    if (rd32(COW_IMG(0x10362538u) + (uint16_t)eax * 4u) == 0u)
    {
        edx = rd32(COW_IMG(0x10362538u) + (uint16_t)eax * 4u);
    }
    else
    {
        edx = rd32(COW_IMG(0x10362538u) + (uint16_t)eax * 4u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, edx, ecx + 1u, 3, esi, eax, ecx + 1u);
        t5 = g->edx;
        edx = t5;
    }
L_10100056: ;
    t38 = rd32(sp0 + 4u) + 1u;
    t39 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t38);
    if ((int32_t)(t39 + 1u) < (int32_t)loc_4)
    {
        ecx = t38;
        goto L_100ff9f0;
    }
L_10100070: ;
    g->ebx = in_ebx;
    return;
L_100ffa2b: ;
    if ((uint16_t)eax > 0xffu) goto L_100ffa49;
    t6 = rd8(esi + (uint16_t)eax - 0x48u);
    wr8(esi + (uint16_t)eax - 0x48u, (uint8_t)((uint8_t)((uint8_t)ecx + 1u) + t6));
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)ecx + 1u) + t6);
    goto L_10100056;
L_100ffa49: ;
    if ((uint16_t)eax < 0x100u) goto L_100ffa60;
    if ((uint16_t)eax > 0x13fu) goto L_100ffa60;
    eax = (uint16_t)eax - 1u;
L_100fff9c: ;
    ecx = (uint16_t)ecx + 1u;
L_100fffa3: ;
    t32 = rd32(esi + 0xc0u);
    wr32(esi + t32 * 8u + 0xc4u, eax);
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, ecx);
    edx = t32;
L_10100050: ;
    wr32(esi + 0xc0u, rd32(esi + 0xc0u) + 1u);
    goto L_10100056;
L_100ffa60: ;
    if ((uint16_t)eax < 0x140u) goto L_100ffafe;
    if ((uint16_t)eax > 0x17fu) goto L_100ffafe;
    t7 = rd32(esi + 0xc0u);
    wr32(esi + t7 * 8u + 0xc4u, (uint16_t)eax);
    if ((uint16_t)eax - 0x153u > 0x15u)
    {
        edx = t7;
        goto L_100fffd9;
    }
    eax = (uint16_t)eax - 0x153u;
    t8 = rd32(COW_IMG(0x10100074u) + rd8(COW_IMG(0x10100084u) + eax) * 4u);
    switch (t8 - RD)
    {
    case 0x100ffaa3u: edx = rd8(COW_IMG(0x10100084u) + eax); goto L_100ffaa3;
    case 0x100ffabfu: goto L_100ffabf;
    case 0x100ffaddu: goto L_100ffadd;
    case 0x100fffd9u: edx = rd8(COW_IMG(0x10100084u) + eax); goto L_100fffd9;
    default: rt_fatal(g, COW_IMG(0x100ffa9cu), "switch");
    }
    return;
L_100ffaa3: ;
    t12 = (uint16_t)ecx * 5u + 5u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t12);
    goto L_10100050;
L_100ffabf: ;
    t11 = (uint16_t)ecx * 0xau + 0xau;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t11);
    edx = t11;
    goto L_10100050;
L_100ffadd: ;
    t9 = (uint16_t)ecx * 0x32u + 0x32u;
    t10 = rd32(esi + 0xc0u);
    wr32(esi + t10 * 8u + 0xc8u, t9);
    edx = t10;
    goto L_10100050;
L_100ffafe: ;
    if ((uint16_t)eax < 0x200u) goto L_100ffb20;
    if ((uint16_t)eax > 0x27fu) goto L_100ffb20;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10100cc0u), 3, esi, eax - 0x200u, ecx + 1u);
    t13 = g->edx;
    edx = t13;
    goto L_10100056;
L_100ffb20: ;
    if ((uint16_t)eax < 0x280u) goto L_100ffb5b;
    if ((uint16_t)eax > 0x2bfu) goto L_100ffb5b;
    t14 = rd16(COW_IMG(0x103319a8u) + (uint16_t)eax * 4u - 0xa00u);
    t15 = rd8(COW_IMG(0x103319aau) + (uint16_t)eax * 4u - 0xa00u);
    eax = ((uint32_t)(int16_t)(t14 - 0x80u) & 0xffffff00u) | t15;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
    cf = rd16(COW_IMG(0x103319a8u) + (uint16_t)eax * 4u - 0xa00u) < 0x80u;
    of = (uint8_t)((uint8_t)ecx + 1u) == 0x80u;
    { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(esi + (uint32_t)(int16_t)(t14 - 0x80u) + 0x38u, (uint8_t)((uint8_t)eax + rd8(esi + (uint32_t)(int16_t)(t14 - 0x80u) + 0x38u)));
    edx = (uint16_t)eax * 4u - 0xa00u;
    goto L_10100056;
L_100ffb5b: ;
    if ((uint16_t)eax < 0x2e4u) goto L_100ffc3a;
    if ((uint16_t)eax > 0x2ffu) goto L_100ffc3a;
    if ((uint16_t)eax >= 0x2e8u)
    {
        ecx = ecx + 1u;
        if ((uint16_t)eax >= 0x2eau)
        {
            if ((uint16_t)eax >= 0x2eeu)
            {
                if ((uint16_t)eax >= 0x2f0u)
                {
                    if ((uint16_t)eax >= 0x2f4u)
                    {
                        if ((uint16_t)eax >= 0x2f8u)
                        {
                            if ((uint16_t)eax >= 0x2fcu)
                            {
                                wr16(esi + 0x10u, (uint16_t)(rd16(esi + 0x10u) + (uint16_t)(-(eax * 0x20u) + 0x5f80u - ecx)));
                                edx = -(eax * 0x20u) + 0x5f80u - ecx;
                            }
                            else
                            {
                                wr16(esi + 0x10u, (uint16_t)(rd16(esi + 0x10u) + (uint16_t)(eax * 0x20u + ecx - 0x5f00u)));
                            }
                        }
                        else
                        {
                            wr16(esi + 0xeu, (uint16_t)(rd16(esi + 0xeu) + (uint16_t)(-(eax * 0x20u) + 0x5e80u - ecx)));
                            edx = -(eax * 0x20u) + 0x5e80u - ecx;
                        }
                    }
                    else
                    {
                        wr16(esi + 0xeu, (uint16_t)(rd16(esi + 0xeu) + (uint16_t)(eax * 0x20u + ecx - 0x5e00u)));
                    }
                }
                else
                {
                    wr16(esi + 0xcu, (uint16_t)(rd16(esi + 0xcu) + (uint16_t)(-(eax * 0x20u) + 0x5dc0u - ecx)));
                    edx = -(eax * 0x20u) + 0x5dc0u - ecx;
                }
            }
            else
            {
                wr16(esi + 0xcu, (uint16_t)(rd16(esi + 0xcu) + (uint16_t)(eax * 0x20u + ecx - 0x5d40u)));
            }
        }
        else
        {
            wr16(esi + 0xau, (uint16_t)(rd16(esi + 0xau) + (uint16_t)(-(eax * 0x20u) + 0x5d00u - ecx)));
            edx = -(eax * 0x20u) + 0x5d00u - ecx;
        }
    }
    else
    {
        ecx = ecx + 1u;
        wr16(esi + 0xau, (uint16_t)(rd16(esi + 0xau) + (uint16_t)(eax * 0x20u + ecx - 0x5c80u)));
    }
    goto L_10100056;
L_100ffc3a: ;
    if ((uint16_t)eax < 0x300u) goto L_100ffc5c;
    if ((uint16_t)eax > 0x33fu) goto L_100ffc5c;
    g->ebx = 1u;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10100df0u), g->eax, g->ecx, edx, 1, 8, esi, eax - 0x300u, ecx + 1u, in_edi, in_ebp, in_ebx, in_esi, loc_4);
    t16 = g->edx;
    edx = t16;
    goto L_10100056;
L_100ffc5c: ;
    if ((uint16_t)eax < 0x340u) goto L_100ffc8e;
    if ((uint16_t)eax > 0x347u) goto L_100ffc8e;
    if (rd16(esi) >= 0x4000u)
    {
        wr16(esi + 0x1c4u, (uint16_t)(eax - 0x17fu));
        wr16(esi + 0x1c6u, (uint16_t)(ecx + 5u));
    }
    goto L_10100056;
L_100ffc8e: ;
    if ((uint16_t)eax < 0x348u) goto L_100ffcbe;
    if ((uint16_t)eax > 0x359u) goto L_100ffcbe;
    if (rd16(esi) >= 0x4000u)
    {
        wr16(esi + 0x1c4u, (uint16_t)(eax - 0x17fu));
        wr16(esi + 0x1c6u, (uint16_t)(ecx + 1u));
    }
    goto L_10100056;
L_100ffcbe: ;
    if ((uint16_t)eax < 0x380u) goto L_100ffce4;
    if ((uint16_t)eax > 0x38fu) goto L_100ffce4;
    if (rd16(esi) < 0x4000u) goto L_10100056;
    eax = (uint16_t)eax - 0x180u;
    goto L_100fff9c;
L_100ffce4: ;
    if ((uint16_t)eax < 0x390u) goto L_100ffd17;
    if ((uint16_t)eax > 0x392u) goto L_100ffd17;
    t17 = (uint16_t)eax * 0x10u + (uint16_t)ecx - 0x36e0u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc4u, t17);
L_10100043: ;
    t37 = rd32(esi + 0xc0u);
    wr32(esi + t37 * 8u + 0xc8u, 1u);
    edx = t37;
    goto L_10100050;
L_100ffd17: ;
    if ((uint16_t)eax < 0x3a0u) goto L_100ffd38;
    if ((uint16_t)eax > 0x3b7u) goto L_100ffd38;
    eax = (uint16_t)eax - 0x150u;
    ecx = (uint16_t)ecx;
    goto L_100fffa3;
L_100ffd38: ;
    if ((uint16_t)eax < 0x3b8u) goto L_100ffd53;
    if ((uint16_t)eax > 0x3bfu) goto L_100ffd53;
    eax = (uint16_t)eax - 0x150u;
    goto L_100fff9c;
L_100ffd53: ;
    if ((uint16_t)eax < 0x3c0u) goto L_100ffdb9;
    if ((uint16_t)eax > 0x3cfu) goto L_100ffdb9;
    t18 = (uint16_t)eax - 0x168u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc4u, t18);
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, (uint16_t)ecx);
    t19 = rd32(esi + 0xc0u) + 1u;
    wr32(esi + 0xc0u, t19);
    t20 = (uint16_t)eax - 0x150u;
    wr32(esi + t19 * 8u + 0xc4u, t20);
    t21 = (uint16_t)ecx * 2u + 2u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t21);
    edx = t19;
    goto L_10100050;
L_100ffdb9: ;
    if ((uint16_t)eax < 0x3d0u) goto L_100ffdd4;
    if ((uint16_t)eax > 0x3d7u) goto L_100ffdd4;
    eax = (uint16_t)eax - 0xd0u;
    goto L_100fff9c;
L_100ffdd4: ;
    if ((uint16_t)eax < 0x3d8u) goto L_100ffe13;
    if ((uint16_t)eax > 0x3dfu) goto L_100ffe13;
L_100ffde0: ;
    t22 = (uint16_t)eax - 0x168u;
    t23 = rd32(esi + 0xc0u);
    wr32(esi + t23 * 8u + 0xc4u, t22);
    t24 = (uint16_t)ecx * 2u + 2u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t24);
    edx = t23;
    goto L_10100050;
L_100ffe13: ;
    if ((uint16_t)eax < 0x3e0u) goto L_100ffe1f;
    if ((uint16_t)eax <= 0x3e7u) goto L_100ffde0;
L_100ffe1f: ;
    if ((uint16_t)eax < 0x3e8u) goto L_100ffe64;
    if ((uint16_t)eax > 0x3efu) goto L_100ffe64;
    t25 = (uint16_t)eax - 0x190u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc4u, t25);
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, (uint16_t)ecx);
    eax = (uint16_t)eax - 0x170u;
    ecx = (uint16_t)ecx;
    edx = rd32(esi + 0xc0u) + 1u;
L_100ffea7: ;
    wr32(esi + 0xc0u, edx);
    wr32(edx * 8u + esi + 0xc4u, eax);
    t27 = ecx * 6u + 6u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t27);
    goto L_10100050;
L_100ffe64: ;
    if ((uint16_t)eax < 0x3f0u) goto L_100ffecc;
    if ((uint16_t)eax > 0x3f7u) goto L_100ffecc;
    t26 = (uint16_t)eax - 0x190u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc4u, t26);
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, (uint16_t)ecx);
    eax = (uint16_t)eax - 0x180u;
    ecx = (uint16_t)ecx;
    edx = rd32(esi + 0xc0u) + 1u;
    goto L_100ffea7;
L_100ffecc: ;
    if ((uint16_t)eax < 0x400u) goto L_100ffeee;
    if ((uint16_t)eax > 0x47fu) goto L_100ffeee;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10100e40u), 3, esi, eax - 0x400u, ecx + 1u);
    t28 = g->edx;
    edx = t28;
    goto L_10100056;
L_100ffeee: ;
    if ((uint16_t)eax < 0x600u) goto L_100fff10;
    if ((uint16_t)eax > 0x67fu) goto L_100fff10;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10100e40u), 3, esi, eax - 0x600u, ecx + 1u);
    t29 = g->edx;
    edx = t29;
    goto L_10100056;
L_100fff10: ;
    if ((uint16_t)eax < 0x480u) goto L_100fff5a;
    if ((uint16_t)eax > 0x4dfu) goto L_100fff5a;
    if (rd32(COW_IMG(0x10362538u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10331828u) + (uint16_t)eax * 4u - 0x1200u) * 4u) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(COW_IMG(0x10331828u) + (uint16_t)eax * 4u - 0x1200u);
    }
    else
    {
        edx = (edx & 0xffff0000u) | rd16(COW_IMG(0x10331828u) + (uint16_t)eax * 4u - 0x1200u);
        edi = rd32(COW_IMG(0x10362538u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10331828u) + (uint16_t)eax * 4u - 0x1200u) * 4u);
        eax = (uint16_t)eax * 4u - 0x1200u;
        t30 = (eax & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x1033182au) + eax) * (uint16_t)(ecx + 1u));
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, edi, ecx + 1u, 3, esi, edx, t30);
        t31 = g->edx;
        edx = t31;
    }
    goto L_10100056;
L_100fff5a: ;
    if ((uint16_t)eax < 0x4e0u) goto L_100fff7a;
    if ((uint16_t)eax >= 0x4f0u) goto L_100fff6d;
    eax = (uint16_t)eax;
    goto L_100fff9c;
L_100fff6d: ;
    if ((uint16_t)eax >= 0x500u) goto L_100fff80;
    eax = (uint16_t)eax;
    goto L_100fff9c;
L_100fff7a: ;
    if ((uint16_t)eax < 0x500u) goto L_100fff86;
L_100fff80: ;
    if ((uint16_t)eax <= 0x517u) goto L_100fff92;
L_100fff86: ;
    if ((uint16_t)eax < 0x530u) goto L_100fffc2;
    if ((uint16_t)eax > 0x5bfu) goto L_100fffc2;
L_100fff92: ;
    eax = (uint16_t)eax - 0x1e0u;
    goto L_100fff9c;
L_100fffc2: ;
    if ((uint16_t)eax != 0x5c0u) goto L_100fffef;
    t33 = rd32(esi + 0xc0u);
    wr32(esi + t33 * 8u + 0xc4u, 0x36u);
    edx = t33;
L_100fffd9: ;
    t34 = (uint16_t)ecx + 1u;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc8u, t34);
    goto L_10100050;
L_100fffef: ;
    if ((uint16_t)eax < 0x680u) goto L_1010000d;
    if ((uint16_t)eax > 0x690u) goto L_1010000d;
    t35 = (uint16_t)eax - 0x67fu;
    wr32(esi + 0x20cu, t35);
    goto L_10100056;
L_1010000d: ;
    if ((uint16_t)eax < 0x700u) goto L_1010002c;
    if ((uint16_t)eax > 0x71fu) goto L_1010002c;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10100d50u), 5, esi, eax - 0x700u, ecx + 1u, in_edi, in_ebp);
    t36 = g->edx;
    edx = t36;
    goto L_10100056;
L_1010002c: ;
    if ((uint16_t)eax != 0x7ffu) goto L_10100056;
    wr32(esi + rd32(esi + 0xc0u) * 8u + 0xc4u, 0x7feu);
    goto L_10100043;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ff9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ff9c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
