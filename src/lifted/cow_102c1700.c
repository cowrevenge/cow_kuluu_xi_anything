/* f_0x102c1700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c1700(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 9u) > 8u)
    {
        eax = rd32(sp0 + 0xcu);
        ecx = (self & 0xffffff00u) | rd8(arg1 + 9u);
        edx = rd32(arg1);
        esi = rd32(sp0 + 0x10u);
        loc_10 = rd32(arg1);
        goto L_102c1723;
    }
    eax = rd32(sp0 + 0xcu);
    ecx = (self & 0xffffff00u) | rd8(arg1 + 9u);
    edx = rd32(arg1);
    esi = rd32(sp0 + 0x10u);
    loc_10 = rd32(arg1);
    if (eax != 0u) goto L_102c1734;
L_102c1723: ;
    if ((uint8_t)ecx != 0x10u) goto L_102c1a6d;
    if (esi == 0u) goto L_102c1a6d;
L_102c1734: ;
    if (rd8(arg1 + 8u) == 0u)
    {
        if ((uint8_t)ecx == 2u)
        {
            t15 = rd32(sp0 + 8u);
            wr32(sp0 + 0x10u, t15);
            if (edx == 0u)
            {
                ecx = t15;
            }
            else
            {
                t16 = ((edx - 1u) >> 2u) + 1u;
                wr32(sp0 + 0xcu, t16);
L_102c192a: ;
                t17 = rd8(rd32(sp0 + 0x10u));
                t18 = (rd8(eax + (((t17 & 0xcu) << 2u | (t17 & 0xcu)) << 2u | (uint32_t)((int32_t)(t17 & 0xcu) >> 2u) | (t17 & 0xcu))) & 0xcfu) | rd8(eax + ((((t17 & 3u) << 2u | (t17 & 3u)) << 2u | (t17 & 3u)) << 2u | (t17 & 3u))) >> 2u;
                t19 = ((uint8_t)t18 >> 2u | (rd8(eax + ((uint32_t)((int32_t)((uint32_t)((int32_t)(t17 & 0x30u) >> 2u) | (t17 & 0x30u)) >> 2u) | (t17 & 0x30u) << 2u | (t17 & 0x30u))) & 0xc3u)) >> 2u | (rd8(eax + ((uint32_t)((int32_t)((uint32_t)((int32_t)((uint32_t)((int32_t)(t17 & 0xc0u) >> 2u) | (t17 & 0xc0u)) >> 2u) | (t17 & 0xc0u)) >> 2u) | (t17 & 0xc0u))) & 0xc0u);
                t20 = rd32(sp0 + 0x10u);
                wr32(sp0 + 0x10u, t20 + 1u);
                t21 = rd32(sp0 + 0x10u);
                wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
                t22 = rd32(sp0 + 0xcu);
                wr8(t20, (uint8_t)t19);
                if (t22 != 1u) goto L_102c192a;
                ecx = t20;
                edx = loc_10;
            }
        }
        if (rd8(arg1 + 9u) != 4u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(arg1 + 9u);
            if ((uint8_t)ecx != 8u)
            {
                if ((uint8_t)ecx == 0x10u)
                {
                    if (edx != 0u)
                    {
                        eax = rd32(sp0 + 8u);
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
                        edi = edx;
                        of = 0u;
L_102c1a4d: ;
                        t25 = rd8(eax);
                        t26 = rd16(rd8(eax) * 2u + rd32(esi + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        wr8(eax + 1u, (uint8_t)t26);
                        wr8(eax, (uint8_t)(t26 >> 8u));
                        if (edi != 1u)
                        {
                            eax = eax + 2u;
                            ecx = (t25 & 0xffff0000u) | t26;
                            pf = PARITY((uint8_t)(edi - 1u));
                            zf = edi == 1u;
                            sf = (int32_t)(edi - 1u) < 0;
                            of = edi == 0x80000000u;
                            edi = edi - 1u;
                            goto L_102c1a4d;
                        }
                    }
                }
            }
            else
            {
                if (edx != 0u)
                {
                    ecx = rd32(sp0 + 8u);
                    esi = edx;
L_102c1a2d: ;
                    wr8(ecx, rd8(eax + rd8(ecx)));
                    if (esi != 1u)
                    {
                        ecx = ecx + 1u;
                        esi = esi - 1u;
                        goto L_102c1a2d;
                    }
                }
            }
        }
        else
        {
            if (edx != 0u)
            {
                esi = rd32(sp0 + 8u);
                edi = ((edx - 1u) >> 1u) + 1u;
L_102c19ed: ;
                t23 = rd8(esi) & 0xf0u;
                t24 = rd8(esi) & 0xfu;
                wr8(esi, (rd8(eax + ((uint32_t)((int32_t)t23 >> 4u) | t23)) & 0xf0u) | rd8(eax + (t24 << 4u | t24)) >> 4u);
                if (edi != 1u)
                {
                    esi = esi + 1u;
                    edi = edi - 1u;
                    goto L_102c19ed;
                }
            }
        }
    }
    else
    {
        ebx = rd8(arg1 + 8u);
        if (ebx == 2u)
        {
            if ((uint8_t)ecx != 8u)
            {
                if (edx != 0u)
                {
                    eax = rd32(sp0 + 8u);
                    pf = PARITY((uint8_t)edx);
                    zf = edx == 0u;
                    sf = (int32_t)edx < 0;
                    wr32(sp0 + 8u, edx);
                    cf = 0u;
                    of = 0u;
L_102c18a8: ;
                    t9 = rd8(eax);
                    t10 = rd16(rd8(eax) * 2u + rd32(esi + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 1u, (uint8_t)t10);
                    wr8(eax, (uint8_t)(t10 >> 8u));
                    t11 = rd8(eax + 2u);
                    t12 = rd16(rd8(eax + 2u) * 2u + rd32(esi + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 3u, (uint8_t)t12);
                    wr8(eax + 2u, (uint8_t)(t12 >> 8u));
                    t13 = rd8(eax + 4u);
                    t14 = rd16(rd8(eax + 4u) * 2u + rd32(esi + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 5u, (uint8_t)t14);
                    wr8(eax + 4u, (uint8_t)(t14 >> 8u));
                    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                    if (rd32(sp0 + 8u) != 1u)
                    {
                        ecx = (t13 & 0xffff0000u) | t14;
                        cf = eax + 6u < eax + 4u;
                        eax = eax + 6u;
                        pf = PARITY((uint8_t)(rd32(sp0 + 8u) - 1u));
                        zf = rd32(sp0 + 8u) == 1u;
                        sf = (int32_t)(rd32(sp0 + 8u) - 1u) < 0;
                        of = rd32(sp0 + 8u) == 0x80000000u;
                        goto L_102c18a8;
                    }
                }
            }
            else
            {
                if (edx != 0u)
                {
                    ecx = rd32(sp0 + 8u);
                    esi = edx;
L_102c1873: ;
                    wr8(ecx, rd8(eax + rd8(ecx)));
                    wr8(ecx + 1u, rd8(eax + rd8(ecx + 1u)));
                    wr8(ecx + 2u, rd8(eax + rd8(ecx + 2u)));
                    if (esi != 1u)
                    {
                        ecx = ecx + 3u;
                        esi = esi - 1u;
                        goto L_102c1873;
                    }
                }
            }
        }
        else
        {
            ebx = ebx - 2u;
            if (ebx == 2u)
            {
                if ((uint8_t)ecx != 8u)
                {
                    if (edx != 0u)
                    {
                        eax = rd32(sp0 + 8u);
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
                        edi = edx;
                        cf = 0u;
                        of = 0u;
L_102c183b: ;
                        t7 = rd8(eax);
                        t8 = rd16(rd8(eax) * 2u + rd32(esi + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        wr8(eax + 1u, (uint8_t)t8);
                        wr8(eax, (uint8_t)(t8 >> 8u));
                        if (edi != 1u)
                        {
                            ecx = (t7 & 0xffff0000u) | t8;
                            cf = eax + 4u < eax;
                            eax = eax + 4u;
                            pf = PARITY((uint8_t)(edi - 1u));
                            zf = edi == 1u;
                            sf = (int32_t)(edi - 1u) < 0;
                            of = edi == 0x80000000u;
                            edi = edi - 1u;
                            goto L_102c183b;
                        }
                    }
                }
                else
                {
                    if (edx != 0u)
                    {
                        ecx = rd32(sp0 + 8u);
                        esi = edx;
L_102c1818: ;
                        wr8(ecx, rd8(eax + rd8(ecx)));
                        if (esi != 1u)
                        {
                            ecx = ecx + 2u;
                            esi = esi - 1u;
                            goto L_102c1818;
                        }
                    }
                }
            }
            else
            {
                ebx = ebx - 2u;
                if (ebx == 2u)
                {
                    if ((uint8_t)ecx != 8u)
                    {
                        if (edx != 0u)
                        {
                            eax = rd32(sp0 + 8u);
                            pf = PARITY((uint8_t)edx);
                            zf = edx == 0u;
                            sf = (int32_t)edx < 0;
                            wr32(sp0 + 8u, edx);
                            cf = 0u;
                            of = 0u;
L_102c17a4: ;
                            t1 = rd8(eax);
                            t2 = rd16(rd8(eax) * 2u + rd32(esi + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 1u, (uint8_t)t2);
                            wr8(eax, (uint8_t)(t2 >> 8u));
                            t3 = rd8(eax + 2u);
                            t4 = rd16(rd8(eax + 2u) * 2u + rd32(esi + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 3u, (uint8_t)t4);
                            wr8(eax + 2u, (uint8_t)(t4 >> 8u));
                            t5 = rd8(eax + 4u);
                            t6 = rd16(rd8(eax + 4u) * 2u + rd32(esi + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 5u, (uint8_t)t6);
                            wr8(eax + 4u, (uint8_t)(t6 >> 8u));
                            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                            if (rd32(sp0 + 8u) != 1u)
                            {
                                ecx = (t5 & 0xffff0000u) | t6;
                                cf = eax + 8u < eax + 4u;
                                eax = eax + 8u;
                                pf = PARITY((uint8_t)(rd32(sp0 + 8u) - 1u));
                                zf = rd32(sp0 + 8u) == 1u;
                                sf = (int32_t)(rd32(sp0 + 8u) - 1u) < 0;
                                of = rd32(sp0 + 8u) == 0x80000000u;
                                goto L_102c17a4;
                            }
                        }
                    }
                    else
                    {
                        if (edx != 0u)
                        {
                            ecx = rd32(sp0 + 8u);
                            esi = edx;
L_102c176e: ;
                            wr8(ecx, rd8(eax + rd8(ecx)));
                            wr8(ecx + 1u, rd8(eax + rd8(ecx + 1u)));
                            wr8(ecx + 2u, rd8(eax + rd8(ecx + 2u)));
                            if (esi != 1u)
                            {
                                ecx = ecx + 4u;
                                esi = esi - 1u;
                                goto L_102c176e;
                            }
                        }
                    }
                }
            }
        }
    }
L_102c1a6d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c1700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
