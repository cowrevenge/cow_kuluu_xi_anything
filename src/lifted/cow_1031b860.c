/* f_0x1031b860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1031b860(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(sp0 + 8u);
    t2 = (t1 - rd32(rd32(sp0 + 4u) + 0xcu)) >> 0xfu;
    t3 = t2 * 0x204u + rd32(rd32(sp0 + 4u) + 0x10u) + 0x144u;
    t4 = rd32(t1 - 4u) - 1u;
    if (rd32(t1 - 4u) - 1u & 1u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x10u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x10u);
        ecx = t4;
        esi = t1 - 4u;
        edi = t2;
        loc_14 = t3;
        loc_8 = t4;
        t5 = rd32(ecx + esi);
        t6 = rd32(esi - 4u);
        wr32(sp0 + 8u, ecx + esi);
        if (t5 & 1u)
        {
            loc_c = t6;
        }
        else
        {
            edx = t5;
            ebx = ecx + esi;
            loc_10 = t5;
            loc_c = t6;
            if ((uint32_t)((int32_t)edx >> 4u) - 1u <= 0x3fu)
            {
                edx = (uint32_t)((int32_t)edx >> 4u) - 1u;
            }
            else
            {
                edx = 0x3fu;
            }
            if (rd32(ebx + 4u) != rd32(ebx + 8u))
            {
                ecx = loc_8;
            }
            else
            {
                if (edx >= 0x20u)
                {
                    cf = edx < 0x20u;
                    pf = PARITY((uint8_t)(edx - 0x20u));
                    zf = edx == 0x20u;
                    sf = (int32_t)(edx - 0x20u) < 0;
                    of = ((edx ^ 0x20u) & (edx ^ edx - 0x20u)) >> 0x1fu;
                    wr32(eax + edi * 4u + 0xc4u, rd32(eax + edi * 4u + 0xc4u) & ~(0x80000000u >> (edx - 0x20u & 0x1fu)));
                    t8 = rd32(eax + edi * 4u + 0xc4u);
                    wr8(eax + edx + 4u, (uint8_t)(rd8(eax + edx + 4u) - 1u));
                    if ((uint8_t)(rd8(eax + edx + 4u) - 1u) == 0u)
                    {
                        ebx = ~(0x80000000u >> (edx - 0x20u & 0x1fu));
                        wr32(rd32(sp0 + 4u) + 4u, rd32(rd32(sp0 + 4u) + 4u) & ebx);
                    }
                }
                else
                {
                    cf = edx < 0x20u;
                    pf = PARITY((uint8_t)(edx - 0x20u));
                    zf = edx == 0x20u;
                    sf = (int32_t)(edx - 0x20u) < 0;
                    of = ((edx ^ 0x20u) & (edx ^ edx - 0x20u)) >> 0x1fu;
                    wr32(eax + edi * 4u + 0x44u, rd32(eax + edi * 4u + 0x44u) & ~(0x80000000u >> (edx & 0x1fu)));
                    t7 = rd32(eax + edi * 4u + 0x44u);
                    wr8(eax + edx + 4u, (uint8_t)(rd8(eax + edx + 4u) - 1u));
                    if ((uint8_t)(rd8(eax + edx + 4u) - 1u) == 0u)
                    {
                        ebx = ~(0x80000000u >> (edx & 0x1fu));
                        wr32(rd32(sp0 + 4u), rd32(rd32(sp0 + 4u)) & ebx);
                    }
                }
                ecx = loc_8;
                ebx = rd32(sp0 + 8u);
            }
            t9 = rd32(ebx + 4u);
            wr32(rd32(ebx + 8u) + 4u, t9);
            t10 = rd32(rd32(sp0 + 8u) + 8u);
            wr32(rd32(rd32(sp0 + 8u) + 4u) + 8u, t10);
            loc_8 = ecx + loc_10;
            ecx = ecx + loc_10;
        }
        if ((uint32_t)((int32_t)ecx >> 4u) - 1u <= 0x3fu)
        {
            edx = (uint32_t)((int32_t)ecx >> 4u) - 1u;
        }
        else
        {
            edx = 0x3fu;
        }
        if (loc_c & 1u)
        {
            loc_10 = loc_c & 1u;
            ebx = rd32(sp0 + 4u);
        }
        else
        {
            loc_10 = loc_c & 1u;
            wr32(sp0 + 8u, esi - loc_c);
            if ((uint32_t)((int32_t)loc_c >> 4u) - 1u <= 0x3fu)
            {
                ebx = (uint32_t)((int32_t)loc_c >> 4u) - 1u;
            }
            else
            {
                ebx = 0x3fu;
            }
            if ((uint32_t)((int32_t)(ecx + loc_c) >> 4u) - 1u <= 0x3fu)
            {
                edx = (uint32_t)((int32_t)(ecx + loc_c) >> 4u) - 1u;
                loc_8 = ecx + loc_c;
            }
            else
            {
                loc_8 = ecx + loc_c;
                edx = 0x3fu;
            }
            if (ebx != edx)
            {
                if (rd32(rd32(sp0 + 8u) + 4u) == rd32(rd32(sp0 + 8u) + 8u))
                {
                    if (ebx >= 0x20u)
                    {
                        cf = ebx < 0x20u;
                        pf = PARITY((uint8_t)(ebx - 0x20u));
                        zf = ebx == 0x20u;
                        sf = (int32_t)(ebx - 0x20u) < 0;
                        of = ((ebx ^ 0x20u) & (ebx ^ ebx - 0x20u)) >> 0x1fu;
                        wr32(eax + edi * 4u + 0xc4u, rd32(eax + edi * 4u + 0xc4u) & ~(0x80000000u >> (ebx - 0x20u & 0x1fu)));
                        t12 = rd32(eax + edi * 4u + 0xc4u);
                        wr8(eax + ebx + 4u, (uint8_t)(rd8(eax + ebx + 4u) - 1u));
                        if ((uint8_t)(rd8(eax + ebx + 4u) - 1u) == 0u)
                        {
                            esi = ~(0x80000000u >> (ebx - 0x20u & 0x1fu));
                            wr32(rd32(sp0 + 4u) + 4u, rd32(rd32(sp0 + 4u) + 4u) & esi);
                        }
                    }
                    else
                    {
                        cf = ebx < 0x20u;
                        pf = PARITY((uint8_t)(ebx - 0x20u));
                        zf = ebx == 0x20u;
                        sf = (int32_t)(ebx - 0x20u) < 0;
                        of = ((ebx ^ 0x20u) & (ebx ^ ebx - 0x20u)) >> 0x1fu;
                        wr32(eax + edi * 4u + 0x44u, rd32(eax + edi * 4u + 0x44u) & ~(0x80000000u >> (ebx & 0x1fu)));
                        t11 = rd32(eax + edi * 4u + 0x44u);
                        wr8(eax + ebx + 4u, (uint8_t)(rd8(eax + ebx + 4u) - 1u));
                        if ((uint8_t)(rd8(eax + ebx + 4u) - 1u) == 0u)
                        {
                            esi = ~(0x80000000u >> (ebx & 0x1fu));
                            wr32(rd32(sp0 + 4u), rd32(rd32(sp0 + 4u)) & esi);
                        }
                    }
                }
                t13 = rd32(rd32(sp0 + 8u) + 4u);
                wr32(rd32(rd32(sp0 + 8u) + 8u) + 4u, t13);
                t14 = rd32(rd32(sp0 + 8u) + 8u);
                wr32(rd32(rd32(sp0 + 8u) + 4u) + 8u, t14);
            }
            esi = rd32(sp0 + 8u);
        }
        if (loc_10 != 0u) goto L_1031b9f8;
        if (ebx == edx) goto L_1031ba79;
L_1031b9f8: ;
        t15 = rd32(edx * 8u + loc_14 + 4u);
        wr32(esi + 4u, t15);
        t16 = edx * 8u + loc_14;
        wr32(esi + 8u, t16);
        wr32(t16 + 4u, esi);
        wr32(rd32(esi + 4u) + 8u, esi);
        if (rd32(esi + 4u) == rd32(esi + 8u))
        {
            ecx = rd32(esi + 4u);
            t17 = rd8(eax + edx + 4u);
            wr8(sp0 + 0xbu, (uint8_t)t17);
            wr8(eax + edx + 4u, (uint8_t)((uint8_t)t17 + 1u));
            if (edx >= 0x20u)
            {
                if (rd8(sp0 + 0xbu) != 0u)
                {
                    pf = PARITY(rd8(sp0 + 0xbu));
                    zf = rd8(sp0 + 0xbu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xbu) < 0;
                }
                else
                {
                    pf = PARITY(rd8(sp0 + 0xbu));
                    zf = rd8(sp0 + 0xbu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xbu) < 0;
                    wr32(rd32(sp0 + 4u) + 4u, rd32(rd32(sp0 + 4u) + 4u) | 0x80000000u >> (edx - 0x20u & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(rd32(sp0 + 4u) + 4u) | 0x80000000u >> (edx - 0x20u & 0x1fu)));
                    zf = (rd32(rd32(sp0 + 4u) + 4u) | 0x80000000u >> (edx - 0x20u & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(rd32(sp0 + 4u) + 4u) | 0x80000000u >> (edx - 0x20u & 0x1fu)) < 0;
                }
                wr32(eax + edi * 4u + 0xc4u, rd32(eax + edi * 4u + 0xc4u) | 0x80000000u >> (edx - 0x20u & 0x1fu));
                edx = 0x80000000u >> (edx - 0x20u & 0x1fu);
            }
            else
            {
                if (rd8(sp0 + 0xbu) != 0u)
                {
                    pf = PARITY(rd8(sp0 + 0xbu));
                    zf = rd8(sp0 + 0xbu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xbu) < 0;
                }
                else
                {
                    pf = PARITY(rd8(sp0 + 0xbu));
                    zf = rd8(sp0 + 0xbu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xbu) < 0;
                    wr32(rd32(sp0 + 4u), rd32(rd32(sp0 + 4u)) | 0x80000000u >> (edx & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(rd32(sp0 + 4u)) | 0x80000000u >> (edx & 0x1fu)));
                    zf = (rd32(rd32(sp0 + 4u)) | 0x80000000u >> (edx & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(rd32(sp0 + 4u)) | 0x80000000u >> (edx & 0x1fu)) < 0;
                }
                wr32(eax + edi * 4u + 0x44u, rd32(eax + edi * 4u + 0x44u) | 0x80000000u >> (edx & 0x1fu));
            }
        }
L_1031ba79: ;
        wr32(esi, loc_8);
        wr32(esi + loc_8 - 4u, loc_8);
        wr32(loc_14, rd32(loc_14) - 1u);
        if (rd32(loc_14) != 1u)
        {
            eax = loc_14;
        }
        else
        {
            if (rd32(COW_IMG(0x109f83f4u)) != 0u)
            {
                eax = rd32(COW_IMG(0x109f83f4u));
                t18 = rd32(eax + 0xcu) + (rd32(COW_IMG(0x109f83e8u)) << 0xfu);
                t19 = rd32(COW_IMG(0x1032922cu));
                t20 = rd32(COW_IMG(0x109f83e8u));
                t21 = rd32(eax + 0xcu);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, t19, t18, 3, t18, 0x8000u, 0x4000u);
                t22 = rd32(COW_IMG(0x109f83e8u));
                wr32(rd32(COW_IMG(0x109f83f4u)) + 8u, rd32(rd32(COW_IMG(0x109f83f4u)) + 8u) | 0x80000000u >> (t22 & 0x1fu));
                wr32(rd32(COW_IMG(0x109f83e8u)) * 4u + rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u) + 0xc4u, 0u);
                wr8(rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u) + 0x43u, (uint8_t)(rd8(rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u) + 0x43u) - 1u));
                if (rd8(rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u) + 0x43u) != 0u)
                {
                    eax = rd32(COW_IMG(0x109f83f4u));
                    ecx = rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u);
                    edx = 0x80000000u >> (t22 & 0x1fu);
                    esi = t19;
                }
                else
                {
                    eax = rd32(COW_IMG(0x109f83f4u));
                    ecx = rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u);
                    edx = 0x80000000u >> (t22 & 0x1fu);
                    esi = t19;
                    wr32(eax + 4u, rd32(eax + 4u) & 0xfffffffeu);
                    eax = rd32(COW_IMG(0x109f83f4u));
                }
                if (rd32(eax + 8u) == 0xffffffffu)
                {
                    t23 = rd32(eax + 0xcu);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_thiscall(g, esi, ecx, 3, t23, 0u, 0x8000u);
                    t24 = g->ecx;
                    t25 = g->edx;
                    t26 = rd32(rd32(COW_IMG(0x109f83f4u)) + 0x10u);
                    cow_thiscall(g, rd32(COW_IMG(0x10329260u)), t24, 3, rd32(COW_IMG(0x109f8404u)), 0u, t26);
                    t27 = rd32(COW_IMG(0x109f83f8u)) * 0x14u;
                    t28 = t27 + rd32(COW_IMG(0x109f83fcu)) - rd32(COW_IMG(0x109f83f4u)) - 0x14u;
                    t29 = rd32(COW_IMG(0x109f83f4u)) + 0x14u;
                    g->edx = rd32(COW_IMG(0x109f83fcu));
                    t30 = rd32(COW_IMG(0x109f83fcu));
                    g->esp = sp0 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x10314a10u), 5, rd32(COW_IMG(0x109f83f4u)), t29, t28, in_edi, in_esi);
                    t31 = g->edx;
                    t32 = rd32(sp0 + 4u);
                    wr32(COW_IMG(0x109f83f8u), rd32(COW_IMG(0x109f83f8u)) - 1u);
                    if (t32 <= rd32(COW_IMG(0x109f83f4u)))
                    {
                        edx = t31;
                    }
                    else
                    {
                        edx = t31;
                        wr32(sp0 + 4u, rd32(sp0 + 4u) - 0x14u);
                    }
                    wr32(COW_IMG(0x109f83ecu), rd32(COW_IMG(0x109f83fcu)));
                }
            }
            t33 = rd32(sp0 + 4u);
            wr32(COW_IMG(0x109f83e8u), edi);
            wr32(COW_IMG(0x109f83f4u), t33);
            eax = t33;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
