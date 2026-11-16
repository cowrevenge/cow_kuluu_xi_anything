/* f_0x102c1c79 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c1c79(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;

    if (rd8(rd32(sp0 + 4u) + 8u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u));
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        esi = rd32(sp0 + 4u);
        goto L_102c1e9e;
    }
    eax = rd32(rd32(sp0 + 4u));
    esi = rd32(sp0 + 4u);
    if (rd32(sp0 + 0xcu) == 0u)
    {
        ecx = rd32(sp0 + 0xcu);
        ebx = 0u;
    }
    else
    {
        ecx = rd32(sp0 + 0xcu);
        ebx = (in_ebx & 0xffff0000u) | rd16(ecx + 8u);
    }
    if (rd8(esi + 9u) >= 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        edi = rd32(sp0 + 8u);
        loc_8 = ebx;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        edi = rd32(sp0 + 8u);
        loc_8 = ebx;
        if ((uint8_t)ecx == 1u)
        {
            t5 = eax + edi - 1u;
            wr32(sp0 + 4u, t5);
            t6 = 7u - (eax - 1u & 7u);
            wr32(sp0 + 8u, t6);
            if (eax == 0u)
            {
                ecx = t6;
                loc_8 = ebx * 0xffu;
            }
            else
            {
                ecx = t6;
                edx = edi + ((eax - 1u) >> 3u);
                pf = PARITY((uint8_t)eax);
                zf = eax == 0u;
                sf = (int32_t)eax < 0;
                loc_8 = ebx * 0xffu;
                ebx = eax - 1u & 7u;
                cf = 0u;
                of = 0u;
                loc_c = eax;
L_102c1dbf: ;
                t7 = rd8(edx);
                wr8(rd32(sp0 + 4u), (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u));
                if (rd32(sp0 + 8u) != 7u)
                {
                    ebx = (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u);
                    ecx = rd32(sp0 + 8u);
                    cf = rd32(sp0 + 8u) < 7u;
                    ecx = ecx + 1u;
                }
                else
                {
                    ebx = (uint8_t)-(((ecx & 0x1fu) != 0u ? t7 >> (ecx & 0x1fu) : t7) & 1u);
                    ecx = 0u;
                    edx = edx - 1u;
                    cf = 0u;
                }
                wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                wr32(sp0 + 8u, ecx);
                if (loc_c != 1u)
                {
                    pf = PARITY((uint8_t)(loc_c - 1u));
                    zf = loc_c == 1u;
                    sf = (int32_t)(loc_c - 1u) < 0;
                    of = loc_c == 0x80000000u;
                    loc_c = loc_c - 1u;
                    goto L_102c1dbf;
                }
            }
        }
        else
        {
            ecx = (uint8_t)ecx - 1u;
            if (ecx == 1u)
            {
                t3 = eax + edi - 1u;
                wr32(sp0 + 4u, t3);
                t4 = -((eax - 1u & 3u) * 2u) + 6u;
                wr32(sp0 + 8u, t4);
                if (eax == 0u)
                {
                    ecx = t4;
                    loc_8 = ebx * 0x55u;
                }
                else
                {
                    ecx = t4;
                    edx = edi + ((eax - 1u) >> 2u);
                    pf = PARITY((uint8_t)eax);
                    zf = eax == 0u;
                    sf = (int32_t)eax < 0;
                    loc_8 = ebx * 0x55u;
                    cf = 0u;
                    of = 0u;
                    loc_c = eax;
L_102c1d58: ;
                    wr8(rd32(sp0 + 4u), (uint8_t)(((rd8(edx) >> (ecx & 0x1fu) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)) << 2u | (rd8(edx) >> (ecx & 0x1fu) & 3u)));
                    if (rd32(sp0 + 8u) != 6u)
                    {
                        ecx = rd32(sp0 + 8u);
                        cf = rd32(sp0 + 8u) < 6u;
                        ecx = ecx + 2u;
                    }
                    else
                    {
                        ecx = 0u;
                        edx = edx - 1u;
                        cf = 0u;
                    }
                    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                    wr32(sp0 + 8u, ecx);
                    if (loc_c != 1u)
                    {
                        pf = PARITY((uint8_t)(loc_c - 1u));
                        zf = loc_c == 1u;
                        sf = (int32_t)(loc_c - 1u) < 0;
                        of = loc_c == 0x80000000u;
                        loc_c = loc_c - 1u;
                        goto L_102c1d58;
                    }
                }
            }
            else
            {
                ecx = ecx - 1u;
                if (ecx != 2u)
                {
                    ecx = ecx - 2u;
                }
                else
                {
                    t1 = eax + edi - 1u;
                    wr32(sp0 + 4u, t1);
                    t2 = (eax - 1u & 1u) << 2u;
                    wr32(sp0 + 8u, 4u - t2);
                    if (eax == 0u)
                    {
                        ecx = 4u - t2;
                        loc_8 = ebx * 0x11u;
                    }
                    else
                    {
                        ecx = 4u - t2;
                        edx = edi + ((eax - 1u) >> 1u);
                        pf = PARITY((uint8_t)eax);
                        zf = eax == 0u;
                        sf = (int32_t)eax < 0;
                        loc_8 = ebx * 0x11u;
                        cf = 0u;
                        of = 0u;
                        loc_c = eax;
L_102c1cf9: ;
                        wr8(rd32(sp0 + 4u), (uint8_t)(rd8(edx) >> (ecx & 0x1fu) << 4u | (rd8(edx) >> (ecx & 0x1fu) & 0xfu)));
                        if (rd32(sp0 + 8u) != 4u)
                        {
                            ecx = 4u;
                            cf = rd32(sp0 + 8u) < 4u;
                        }
                        else
                        {
                            ecx = 0u;
                            edx = edx - 1u;
                            cf = 0u;
                        }
                        wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                        wr32(sp0 + 8u, ecx);
                        if (loc_c != 1u)
                        {
                            pf = PARITY((uint8_t)(loc_c - 1u));
                            zf = loc_c == 1u;
                            sf = (int32_t)(loc_c - 1u) < 0;
                            of = loc_c == 0x80000000u;
                            loc_c = loc_c - 1u;
                            goto L_102c1cf9;
                        }
                    }
                }
            }
        }
        wr8(esi + 9u, 8u);
        wr8(esi + 0xbu, 8u);
        wr32(esi + 4u, eax);
        ebx = loc_8;
    }
    if (rd32(sp0 + 0xcu) == 0u) goto L_102c1fc7;
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        if ((uint8_t)ecx == 0x10u)
        {
            if (eax == 0u)
            {
                ecx = edi + rd32(esi + 4u) - 1u;
            }
            else
            {
                ecx = edi + rd32(esi + 4u) - 1u;
                edi = edi + rd32(esi + 4u) * 2u - 1u;
                wr32(sp0 + 8u, (uint16_t)ebx);
                wr32(sp0 + 0xcu, eax);
L_102c1e57: ;
                wr32(sp0 + 4u, ecx - 1u);
                if ((rd8(ecx - 1u) << 8u | rd8(ecx)) != rd32(sp0 + 8u))
                {
                    edx = ecx - 1u;
                    wr8(edi, rd8(edi) | 0xffu);
                    wr8(edi - 1u, rd8(edi - 1u) | 0xffu);
                    edi = edi - 1u;
                }
                else
                {
                    edx = ecx - 1u;
                    wr8(edi, 0u);
                    wr8(edi - 1u, 0u);
                    edi = edi - 1u;
                }
                wr8(edi - 1u, rd8(ecx));
                t9 = rd32(sp0 + 4u);
                wr8(edi - 2u, rd8(t9));
                wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
                if (rd32(sp0 + 0xcu) != 1u)
                {
                    ecx = t9 - 1u;
                    edi = edi - 3u;
                    goto L_102c1e57;
                }
                ecx = t9 - 1u;
            }
        }
    }
    else
    {
        if (eax == 0u)
        {
            ecx = eax + edi - 1u;
        }
        else
        {
            ecx = eax + edi - 1u;
            edi = eax * 2u + edi - 1u;
            edx = eax;
L_102c1e1c: ;
            if (rd8(ecx) != (uint16_t)loc_8)
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
                goto L_102c1e1c;
            }
            ecx = ecx - 1u;
        }
    }
    t10 = rd8(esi + 9u);
    wr8(esi + 8u, 4u);
    wr8(esi + 0xau, 2u);
    ecx = ((ecx | t10) & 0xffffff00u) | (uint8_t)((uint8_t)t10 * 2u);
L_102c1fb8: ;
    wr8(esi + 0xbu, (uint8_t)ecx);
    t20 = (uint8_t)ecx * eax >> 3u;
    wr32(esi + 4u, t20);
L_102c1fc7: ;
    return;
L_102c1e9e: ;
    if ((uint8_t)ecx != 2u) goto L_102c1fc7;
    if (rd32(sp0 + 0xcu) == 0u) goto L_102c1fc7;
    edx = rd32(sp0 + 0xcu);
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        if ((uint8_t)ecx == 0x10u)
        {
            if (eax == 0u)
            {
                ecx = rd32(esi + 4u) + rd32(sp0 + 8u) - 1u;
            }
            else
            {
                ecx = rd32(esi + 4u) + rd32(sp0 + 8u) - 1u;
                edi = eax * 8u + rd32(sp0 + 8u) - 1u;
                wr32(sp0 + 8u, eax);
L_102c1f3b: ;
                if ((rd8(ecx - 5u) << 8u | rd8(ecx - 4u)) != rd16(edx + 2u))
                {
                    edx = rd16(edx + 2u);
                    goto L_102c1f79;
                }
                if ((rd8(ecx - 3u) << 8u | rd8(ecx - 2u)) != rd16(rd32(sp0 + 0xcu) + 4u))
                {
                    edx = rd8(ecx - 3u) << 8u | rd8(ecx - 2u);
                    goto L_102c1f79;
                }
                if ((rd8(ecx - 1u) << 8u | rd8(ecx)) != rd16(rd32(sp0 + 0xcu) + 6u))
                {
                    edx = rd8(ecx - 1u) << 8u | rd8(ecx);
                    goto L_102c1f79;
                }
                edx = rd8(ecx - 1u) << 8u | rd8(ecx);
                wr8(edi, 0u);
                wr8(edi - 1u, 0u);
                edi = edi - 1u;
L_102c1f80: ;
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
                wr8(edi - 6u, rd8(ecx - 5u));
                wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                if (rd32(sp0 + 8u) != 1u)
                {
                    ecx = ecx - 6u;
                    edi = edi - 7u;
                    goto L_102c1f38;
                }
                ecx = ecx - 6u;
            }
        }
    }
    else
    {
        if (eax == 0u)
        {
            ecx = rd32(esi + 4u) + rd32(sp0 + 8u) - 1u;
        }
        else
        {
            ecx = rd32(esi + 4u) + rd32(sp0 + 8u) - 1u;
            edi = eax * 4u + rd32(sp0 + 8u) - 1u;
            wr32(sp0 + 0xcu, eax);
            ebx = in_ebx;
L_102c1ed3: ;
            if (rd8(ecx - 2u) != rd16(edx + 2u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx - 2u);
                goto L_102c1ef8;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx - 2u);
            if (rd8(ecx - 1u) != rd16(edx + 4u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx - 1u);
                goto L_102c1ef8;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx - 1u);
            if (rd8(ecx) != rd16(edx + 6u))
            {
                ebx = (ebx & 0xffff0000u) | rd8(ecx);
                goto L_102c1ef8;
            }
            ebx = (ebx & 0xffff0000u) | rd8(ecx);
            wr8(edi, 0u);
L_102c1efb: ;
            t11 = rd8(ecx);
            wr8(edi - 1u, (uint8_t)t11);
            t12 = rd8(ecx - 1u);
            wr8(edi - 2u, (uint8_t)t12);
            t13 = rd8(ecx - 2u);
            wr8(edi - 3u, (uint8_t)t13);
            wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
            if (rd32(sp0 + 0xcu) != 1u)
            {
                ecx = ecx - 3u;
                ebx = ((ebx | t11 | t12) & 0xffffff00u) | t13;
                edi = edi - 4u;
                goto L_102c1ed3;
            }
            ecx = ecx - 3u;
        }
    }
    t19 = rd8(esi + 9u);
    wr8(esi + 8u, 6u);
    wr8(esi + 0xau, 4u);
    ecx = ((ecx | t19) & 0xffffff00u) | (uint8_t)(t19 << 2u);
    goto L_102c1fb8;
L_102c1ef8: ;
    wr8(edi, rd8(edi) | 0xffu);
    goto L_102c1efb;
L_102c1f38: ;
    edx = rd32(sp0 + 0xcu);
    goto L_102c1f3b;
L_102c1f79: ;
    wr8(edi, rd8(edi) | 0xffu);
    wr8(edi - 1u, rd8(edi - 1u) | 0xffu);
    edi = edi - 1u;
    goto L_102c1f80;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1c79(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c1c79(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
