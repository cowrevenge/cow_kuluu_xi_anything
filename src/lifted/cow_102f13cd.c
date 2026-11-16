/* f_0x102f13cd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f13cd(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(rd32(sp0 + 4u) + 8u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u));
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        esi = rd32(sp0 + 4u);
        goto L_102f15f1;
    }
    eax = rd32(rd32(sp0 + 4u));
    esi = rd32(sp0 + 4u);
    if (arg3 == 0u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = rd16(arg3 + 8u);
    }
    if (rd8(esi + 9u) >= 8u)
    {
        ecx = (arg3 & 0xffffff00u) | rd8(esi + 9u);
        edx = in_edx;
        loc_c = ebx;
    }
    else
    {
        ecx = (arg3 & 0xffffff00u) | rd8(esi + 9u);
        loc_c = ebx;
        if ((uint8_t)ecx == 1u)
        {
            t5 = arg2 + eax - 1u;
            t6 = 7u - (eax - 1u & 7u);
            wr32(sp0 + 4u, t6);
            if (eax == 0u)
            {
                ecx = t6;
                edx = arg2 + ((eax - 1u) >> 3u);
                loc_c = ebx * 0xffu;
            }
            else
            {
                ecx = t6;
                edx = arg2 + ((eax - 1u) >> 3u);
                pf = PARITY((uint8_t)eax);
                zf = eax == 0u;
                sf = (int32_t)eax < 0;
                loc_c = ebx * 0xffu;
                ebx = eax - 1u & 7u;
                loc_8 = t5;
                cf = 0u;
                of = 0u;
                loc_10 = eax;
L_102f1512: ;
                t7 = rd8(edx);
                wr8(loc_8, (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u));
                if (rd32(sp0 + 4u) != 7u)
                {
                    ebx = (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u);
                    ecx = rd32(sp0 + 4u);
                    cf = rd32(sp0 + 4u) < 7u;
                    ecx = ecx + 1u;
                }
                else
                {
                    ebx = (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u);
                    ecx = 0u;
                    edx = edx - 1u;
                    cf = 0u;
                }
                wr32(sp0 + 4u, ecx);
                if (loc_10 != 1u)
                {
                    pf = PARITY((uint8_t)(loc_10 - 1u));
                    zf = loc_10 == 1u;
                    sf = (int32_t)(loc_10 - 1u) < 0;
                    of = loc_10 == 0x80000000u;
                    loc_8 = loc_8 - 1u;
                    loc_10 = loc_10 - 1u;
                    goto L_102f1512;
                }
            }
        }
        else
        {
            ecx = (uint8_t)ecx - 1u;
            if (ecx == 1u)
            {
                t3 = arg2 + eax - 1u;
                t4 = -((eax - 1u & 3u) * 2u) + 6u;
                wr32(sp0 + 4u, t4);
                if (eax == 0u)
                {
                    ecx = t4;
                    edx = arg2 + ((eax - 1u) >> 2u);
                    loc_c = ebx * 0x55u;
                }
                else
                {
                    ecx = t4;
                    edx = arg2 + ((eax - 1u) >> 2u);
                    pf = PARITY((uint8_t)eax);
                    zf = eax == 0u;
                    sf = (int32_t)eax < 0;
                    loc_c = ebx * 0x55u;
                    loc_8 = t3;
                    cf = 0u;
                    of = 0u;
                    loc_10 = eax;
L_102f14ab: ;
                    wr8(loc_8, (uint8_t)(((rd8(edx) >> (ecx & 0x1fu) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)));
                    if (rd32(sp0 + 4u) != 6u)
                    {
                        ecx = rd32(sp0 + 4u);
                        cf = rd32(sp0 + 4u) < 6u;
                        ecx = ecx + 2u;
                    }
                    else
                    {
                        ecx = 0u;
                        edx = edx - 1u;
                        cf = 0u;
                    }
                    wr32(sp0 + 4u, ecx);
                    if (loc_10 != 1u)
                    {
                        pf = PARITY((uint8_t)(loc_10 - 1u));
                        zf = loc_10 == 1u;
                        sf = (int32_t)(loc_10 - 1u) < 0;
                        of = loc_10 == 0x80000000u;
                        loc_8 = loc_8 - 1u;
                        loc_10 = loc_10 - 1u;
                        goto L_102f14ab;
                    }
                }
            }
            else
            {
                ecx = ecx - 1u;
                if (ecx != 2u)
                {
                    ecx = ecx - 2u;
                    edx = in_edx;
                }
                else
                {
                    t1 = arg2 + eax - 1u;
                    t2 = (eax - 1u & 1u) << 2u;
                    wr32(sp0 + 4u, 4u - t2);
                    if (eax == 0u)
                    {
                        ecx = 4u - t2;
                        edx = arg2 + ((eax - 1u) >> 1u);
                        loc_c = ebx * 0x11u;
                    }
                    else
                    {
                        ecx = 4u - t2;
                        edx = arg2 + ((eax - 1u) >> 1u);
                        pf = PARITY((uint8_t)eax);
                        zf = eax == 0u;
                        sf = (int32_t)eax < 0;
                        loc_c = ebx * 0x11u;
                        loc_8 = t1;
                        cf = 0u;
                        of = 0u;
                        loc_10 = eax;
L_102f144c: ;
                        wr8(loc_8, (uint8_t)(rd8(edx) >> (ecx & 0x1fu) << 4u | (rd8(edx) >> (ecx & 0x1fu) & 0xfu)));
                        if (rd32(sp0 + 4u) != 4u)
                        {
                            ecx = 4u;
                            cf = rd32(sp0 + 4u) < 4u;
                        }
                        else
                        {
                            ecx = 0u;
                            edx = edx - 1u;
                            cf = 0u;
                        }
                        wr32(sp0 + 4u, ecx);
                        if (loc_10 != 1u)
                        {
                            pf = PARITY((uint8_t)(loc_10 - 1u));
                            zf = loc_10 == 1u;
                            sf = (int32_t)(loc_10 - 1u) < 0;
                            of = loc_10 == 0x80000000u;
                            loc_8 = loc_8 - 1u;
                            loc_10 = loc_10 - 1u;
                            goto L_102f144c;
                        }
                    }
                }
            }
        }
        wr8(esi + 9u, 8u);
        wr8(esi + 0xbu, 8u);
        wr32(esi + 4u, eax);
        ebx = loc_c;
    }
    if (arg3 == 0u) goto L_102f171a;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        if ((uint8_t)ecx == 0x10u)
        {
            if (eax == 0u)
            {
                ecx = arg2 + rd32(esi + 4u) - 1u;
                edx = rd32(esi + 4u);
            }
            else
            {
                ecx = arg2 + rd32(esi + 4u) - 1u;
                edi = arg2 + rd32(esi + 4u) * 2u - 1u;
                wr32(sp0 + 4u, eax);
                loc_10 = (uint16_t)ebx;
L_102f15aa: ;
                if ((rd8(ecx - 1u) << 8u | rd8(ecx)) != loc_10)
                {
                    edx = ecx - 1u;
                    loc_c = ecx - 1u;
                    wr8(edi, rd8(edi) | 0xffu);
                    wr8(edi - 1u, rd8(edi - 1u) | 0xffu);
                    edi = edi - 1u;
                }
                else
                {
                    edx = ecx - 1u;
                    loc_c = ecx - 1u;
                    wr8(edi, 0u);
                    wr8(edi - 1u, 0u);
                    edi = edi - 1u;
                }
                wr8(edi - 1u, rd8(ecx));
                t9 = rd8(loc_c);
                wr8(edi - 2u, (uint8_t)t9);
                wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                if (rd32(sp0 + 4u) != 1u)
                {
                    ecx = loc_c - 1u;
                    edi = edi - 3u;
                    goto L_102f15aa;
                }
                ecx = loc_c - 1u;
                edx = (edx & 0xffffff00u) | t9;
            }
        }
    }
    else
    {
        if (eax == 0u)
        {
            ecx = arg2 + eax - 1u;
        }
        else
        {
            ecx = arg2 + eax - 1u;
            edi = arg2 + eax * 2u - 1u;
            edx = eax;
L_102f156f: ;
            if (rd8(ecx) != (uint16_t)loc_c)
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx);
                wr8(edi, rd8(edi) | 0xffu);
            }
            else
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx);
                wr8(edi, 0u);
            }
            t8 = rd8(ecx);
            wr8(edi - 1u, (uint8_t)t8);
            if (edx != 1u)
            {
                ecx = ecx - 1u;
                edx = edx - 1u;
                ebx = (ebx & 0xffffff00u) | t8;
                edi = edi - 2u;
                goto L_102f156f;
            }
            ecx = ecx - 1u;
            edx = edx - 1u;
        }
    }
    t10 = rd8(esi + 9u);
    wr8(esi + 8u, 4u);
    wr8(esi + 0xau, 2u);
    ecx = ((ecx | t10) & 0xffffff00u) | (uint8_t)(t10 << 1u);
L_102f170b: ;
    wr8(esi + 0xbu, (uint8_t)ecx);
    t21 = (uint8_t)ecx * eax >> 3u;
    wr32(esi + 4u, t21);
L_102f171a: ;
    g->edx = edx;
    return;
L_102f15f1: ;
    if ((uint8_t)ecx != 2u)
    {
        edx = in_edx;
        goto L_102f171a;
    }
    if (arg3 == 0u)
    {
        edx = arg3;
        goto L_102f171a;
    }
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        if ((uint8_t)ecx != 0x10u)
        {
            edx = arg3;
        }
        else
        {
            if (eax == 0u)
            {
                ecx = arg2 + rd32(esi + 4u) - 1u;
                edx = arg3;
            }
            else
            {
                ecx = arg2 + rd32(esi + 4u) - 1u;
                edi = arg2 + eax * 8u - 1u;
                wr32(sp0 + 4u, eax);
L_102f168e: ;
                if ((rd8(ecx - 5u) << 8u | rd8(ecx - 4u)) != rd16(arg3 + 2u))
                {
                    edx = rd16(arg3 + 2u);
                    goto L_102f16cc;
                }
                if ((rd8(ecx - 3u) << 8u | rd8(ecx - 2u)) != rd16(arg3 + 4u))
                {
                    edx = rd8(ecx - 3u) << 8u | rd8(ecx - 2u);
                    goto L_102f16cc;
                }
                if ((rd8(ecx - 1u) << 8u | rd8(ecx)) != rd16(arg3 + 6u))
                {
                    edx = rd8(ecx - 1u) << 8u | rd8(ecx);
                    goto L_102f16cc;
                }
                edx = rd8(ecx - 1u) << 8u | rd8(ecx);
                wr8(edi, 0u);
                wr8(edi - 1u, 0u);
                edi = edi - 1u;
L_102f16d3: ;
                t14 = rd8(ecx);
                wr8(edi - 1u, (uint8_t)t14);
                t15 = rd8(ecx - 1u);
                wr8(edi - 2u, (uint8_t)t15);
                t16 = rd8(ecx - 2u);
                wr8(edi - 3u, (uint8_t)t16);
                t17 = rd8(ecx - 3u);
                wr8(edi - 4u, (uint8_t)t17);
                t18 = rd8(ecx - 4u);
                wr8(edi - 5u, (uint8_t)t18);
                t19 = rd8(ecx - 5u);
                wr8(edi - 6u, (uint8_t)t19);
                wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                if (rd32(sp0 + 4u) != 1u)
                {
                    ecx = ecx - 6u;
                    edi = edi - 7u;
                    goto L_102f168b;
                }
                ecx = ecx - 6u;
                edx = ((edx | t14 | t15 | t16 | t17 | t18) & 0xffffff00u) | t19;
            }
        }
    }
    else
    {
        if (eax == 0u)
        {
            ecx = arg2 + rd32(esi + 4u) - 1u;
            edx = arg3;
        }
        else
        {
            ecx = arg2 + rd32(esi + 4u) - 1u;
            edi = arg2 + eax * 4u - 1u;
            wr32(sp0 + 4u, eax);
            ebx = in_ebx;
L_102f1626: ;
            if (rd8(ecx - 2u) != rd16(arg3 + 2u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx - 2u);
                goto L_102f164b;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx - 2u);
            if (rd8(ecx - 1u) != rd16(arg3 + 4u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx - 1u);
                goto L_102f164b;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx - 1u);
            if (rd8(ecx) != rd16(arg3 + 6u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx);
                goto L_102f164b;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx);
            wr8(edi, 0u);
L_102f164e: ;
            t11 = rd8(ecx);
            wr8(edi - 1u, (uint8_t)t11);
            t12 = rd8(ecx - 1u);
            wr8(edi - 2u, (uint8_t)t12);
            t13 = rd8(ecx - 2u);
            wr8(edi - 3u, (uint8_t)t13);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            if (rd32(sp0 + 4u) != 1u)
            {
                ecx = ecx - 3u;
                ebx = ((ebx | t11 | t12) & 0xffffff00u) | t13;
                edi = edi - 4u;
                goto L_102f1626;
            }
            ecx = ecx - 3u;
            edx = arg3;
        }
    }
    t20 = rd8(esi + 9u);
    wr8(esi + 8u, 6u);
    wr8(esi + 0xau, 4u);
    ecx = ((ecx | t20) & 0xffffff00u) | (uint8_t)(t20 << 2u);
    goto L_102f170b;
L_102f164b: ;
    wr8(edi, rd8(edi) | 0xffu);
    goto L_102f164e;
L_102f168b: ;
    goto L_102f168e;
L_102f16cc: ;
    wr8(edi, rd8(edi) | 0xffu);
    wr8(edi - 1u, rd8(edi - 1u) | 0xffu);
    edi = edi - 1u;
    goto L_102f16d3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f13cd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f13cd(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
