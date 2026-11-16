/* f_0x1031c03e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031c03e(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    t2 = (t1 - rd32(arg1 + 0xcu)) >> 0xfu;
    t3 = t2 * 0x204u + rd32(arg1 + 0x10u) + 0x144u;
    t4 = rd32(t1 - 4u) - 1u;
    t5 = rd32(arg1 + 0x10u);
    t6 = rd32(sp0 + 0xcu);
    t7 = rd32(t1 - 4u);
    wr32(sp0 + 0xcu, t4);
    t8 = rd32(t1 + t4 - 4u);
    if ((int32_t)(t6 + 0x17u & 0xfffffff0u) <= (int32_t)(t7 - 1u))
    {
        eax = t5;
        edx = t2;
        esi = t6 + 0x17u & 0xfffffff0u;
        edi = t1 + t4 - 4u;
        sf = (int32_t)((t6 + 0x17u & 0xfffffff0u) - (t7 - 1u)) < 0;
        of = (((t6 + 0x17u & 0xfffffff0u) ^ t7 - 1u) & ((t6 + 0x17u & 0xfffffff0u) ^ (t6 + 0x17u & 0xfffffff0u) - (t7 - 1u))) >> 0x1fu;
        loc_10 = t3;
        loc_8 = t8;
        goto L_1031c1ec;
    }
    eax = t5;
    ecx = t4;
    edx = t2;
    ebx = t8;
    esi = t6 + 0x17u & 0xfffffff0u;
    edi = t1 + t4 - 4u;
    loc_10 = t3;
    loc_8 = t8;
    if (ebx & 1u) goto L_1031c1e5;
    if ((int32_t)esi > (int32_t)(ebx + ecx)) goto L_1031c1e5;
    t9 = (uint32_t)((int32_t)loc_8 >> 4u) - 1u;
    if ((uint32_t)((int32_t)loc_8 >> 4u) - 1u <= 0x3fu)
    {
        ecx = t9;
        loc_c = t9;
    }
    else
    {
        ecx = 0x3fu;
        loc_c = 0x3fu;
    }
    if (rd32(edi + 4u) == rd32(edi + 8u))
    {
        if (ecx >= 0x20u)
        {
            wr32(eax + edx * 4u + 0xc4u, rd32(eax + edx * 4u + 0xc4u) & ~(0x80000000u >> (ecx - 0x20u & 0x1fu)));
            t11 = rd32(eax + edx * 4u + 0xc4u);
            wr8(eax + loc_c + 4u, (uint8_t)(rd8(eax + loc_c + 4u) - 1u));
            if ((uint8_t)(rd8(eax + loc_c + 4u) - 1u) == 0u)
            {
                ebx = ~(0x80000000u >> (ecx - 0x20u & 0x1fu));
                wr32(arg1 + 4u, rd32(arg1 + 4u) & ebx);
            }
        }
        else
        {
            cf = ecx < 0x20u;
            pf = PARITY((uint8_t)(ecx - 0x20u));
            zf = ecx == 0x20u;
            sf = (int32_t)(ecx - 0x20u) < 0;
            of = ((ecx ^ 0x20u) & (ecx ^ ecx - 0x20u)) >> 0x1fu;
            wr32(eax + edx * 4u + 0x44u, rd32(eax + edx * 4u + 0x44u) & ~(0x80000000u >> (ecx & 0x1fu)));
            t10 = rd32(eax + edx * 4u + 0x44u);
            wr8(eax + loc_c + 4u, (uint8_t)(rd8(eax + loc_c + 4u) - 1u));
            if ((uint8_t)(rd8(eax + loc_c + 4u) - 1u) == 0u)
            {
                ebx = ~(0x80000000u >> (ecx & 0x1fu));
                wr32(arg1, rd32(arg1) & ebx);
            }
        }
    }
    t12 = rd32(edi + 4u);
    wr32(rd32(edi + 8u) + 4u, t12);
    t13 = rd32(edi + 8u);
    wr32(rd32(edi + 4u) + 8u, t13);
    t14 = loc_8 + rd32(sp0 + 0xcu) - esi;
    if ((int32_t)t14 <= 0)
    {
        edx = rd32(sp0 + 8u);
    }
    else
    {
        loc_8 = t14;
        if ((uint32_t)((int32_t)loc_8 >> 4u) - 1u <= 0x3fu)
        {
            ecx = esi + rd32(sp0 + 8u) - 4u;
            edi = (uint32_t)((int32_t)loc_8 >> 4u) - 1u;
        }
        else
        {
            ecx = esi + rd32(sp0 + 8u) - 4u;
            edi = 0x3fu;
        }
        t15 = edi * 8u + loc_10;
        wr32(sp0 + 0xcu, t15);
        t16 = rd32(t15 + 4u);
        wr32(ecx + 4u, t16);
        t17 = rd32(sp0 + 0xcu);
        wr32(ecx + 8u, t17);
        wr32(t17 + 4u, ecx);
        wr32(rd32(ecx + 4u) + 8u, ecx);
        if (rd32(ecx + 4u) == rd32(ecx + 8u))
        {
            t18 = rd8(eax + edi + 4u);
            wr8(sp0 + 0xfu, (uint8_t)t18);
            wr8(eax + edi + 4u, (uint8_t)((uint8_t)t18 + 1u));
            if (edi >= 0x20u)
            {
                if (rd8(sp0 + 0xfu) != 0u)
                {
                    pf = PARITY(rd8(sp0 + 0xfu));
                    zf = rd8(sp0 + 0xfu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xfu) < 0;
                }
                else
                {
                    pf = PARITY(rd8(sp0 + 0xfu));
                    zf = rd8(sp0 + 0xfu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xfu) < 0;
                    wr32(arg1 + 4u, rd32(arg1 + 4u) | 0x80000000u >> (edi - 0x20u & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(arg1 + 4u) | 0x80000000u >> (edi - 0x20u & 0x1fu)));
                    zf = (rd32(arg1 + 4u) | 0x80000000u >> (edi - 0x20u & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(arg1 + 4u) | 0x80000000u >> (edi - 0x20u & 0x1fu)) < 0;
                }
                eax = eax + edx * 4u + 0xc4u;
                ecx = edi - 0x20u;
            }
            else
            {
                if (rd8(sp0 + 0xfu) != 0u)
                {
                    pf = PARITY(rd8(sp0 + 0xfu));
                    zf = rd8(sp0 + 0xfu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xfu) < 0;
                }
                else
                {
                    pf = PARITY(rd8(sp0 + 0xfu));
                    zf = rd8(sp0 + 0xfu) == 0u;
                    sf = (int8_t)rd8(sp0 + 0xfu) < 0;
                    wr32(arg1, rd32(arg1) | 0x80000000u >> (edi & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(arg1) | 0x80000000u >> (edi & 0x1fu)));
                    zf = (rd32(arg1) | 0x80000000u >> (edi & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(arg1) | 0x80000000u >> (edi & 0x1fu)) < 0;
                }
                eax = eax + edx * 4u + 0x44u;
                ecx = edi;
            }
            wr32(eax, rd32(eax) | 0x80000000u >> (ecx & 0x1fu));
        }
        t19 = rd32(sp0 + 8u);
        wr32(esi + t19 - 4u, loc_8);
        wr32(esi + loc_8 + t19 - 8u, loc_8);
        edx = t19;
    }
    wr32(edx - 4u, esi + 1u);
    wr32(edx + esi - 8u, esi + 1u);
L_1031c32c: ;
    eax = 1u;
L_1031c32f: ;
    g->edx = edx;
    return eax;
L_1031c1e5: ;
    eax = 0u;
    goto L_1031c32f;
L_1031c1ec: ;
    if (sf != of)
    {
        t20 = rd32(sp0 + 8u);
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - esi);
        wr32(t20 - 4u, esi + 1u);
        t21 = esi + t20 - 4u;
        t22 = rd32(sp0 + 0xcu);
        wr32(sp0 + 8u, t21);
        wr32(t21 - 4u, esi + 1u);
        if ((uint32_t)((int32_t)t22 >> 4u) - 1u <= 0x3fu)
        {
            ebx = t21;
            esi = (uint32_t)((int32_t)t22 >> 4u) - 1u;
        }
        else
        {
            ebx = t21;
            esi = 0x3fu;
        }
        if (!(loc_8 & 1u))
        {
            if ((uint32_t)((int32_t)loc_8 >> 4u) - 1u <= 0x3fu)
            {
                esi = (uint32_t)((int32_t)loc_8 >> 4u) - 1u;
            }
            else
            {
                esi = 0x3fu;
            }
            if (rd32(edi + 4u) == rd32(edi + 8u))
            {
                if (esi >= 0x20u)
                {
                    cf = esi < 0x20u;
                    pf = PARITY((uint8_t)(esi - 0x20u));
                    zf = esi == 0x20u;
                    sf = (int32_t)(esi - 0x20u) < 0;
                    of = ((esi ^ 0x20u) & (esi ^ esi - 0x20u)) >> 0x1fu;
                    wr32(eax + edx * 4u + 0xc4u, rd32(eax + edx * 4u + 0xc4u) & ~(0x80000000u >> (esi - 0x20u & 0x1fu)));
                    t24 = rd32(eax + edx * 4u + 0xc4u);
                    wr8(eax + esi + 4u, (uint8_t)(rd8(eax + esi + 4u) - 1u));
                    if ((uint8_t)(rd8(eax + esi + 4u) - 1u) == 0u)
                    {
                        ebx = ~(0x80000000u >> (esi - 0x20u & 0x1fu));
                        wr32(arg1 + 4u, rd32(arg1 + 4u) & ebx);
                    }
                }
                else
                {
                    cf = esi < 0x20u;
                    pf = PARITY((uint8_t)(esi - 0x20u));
                    zf = esi == 0x20u;
                    sf = (int32_t)(esi - 0x20u) < 0;
                    of = ((esi ^ 0x20u) & (esi ^ esi - 0x20u)) >> 0x1fu;
                    wr32(eax + edx * 4u + 0x44u, rd32(eax + edx * 4u + 0x44u) & ~(0x80000000u >> (esi & 0x1fu)));
                    t23 = rd32(eax + edx * 4u + 0x44u);
                    wr8(eax + esi + 4u, (uint8_t)(rd8(eax + esi + 4u) - 1u));
                    if ((uint8_t)(rd8(eax + esi + 4u) - 1u) == 0u)
                    {
                        ebx = ~(0x80000000u >> (esi & 0x1fu));
                        wr32(arg1, rd32(arg1) & ebx);
                    }
                }
                ebx = rd32(sp0 + 8u);
            }
            t25 = rd32(edi + 4u);
            wr32(rd32(edi + 8u) + 4u, t25);
            t26 = rd32(edi + 8u);
            wr32(rd32(edi + 4u) + 8u, t26);
            t27 = loc_8 + rd32(sp0 + 0xcu);
            wr32(sp0 + 0xcu, t27);
            if ((uint32_t)((int32_t)t27 >> 4u) - 1u <= 0x3fu)
            {
                esi = (uint32_t)((int32_t)t27 >> 4u) - 1u;
            }
            else
            {
                esi = 0x3fu;
            }
        }
        t28 = rd32(esi * 8u + loc_10 + 4u);
        wr32(ebx + 4u, t28);
        t29 = esi * 8u + loc_10;
        wr32(ebx + 8u, t29);
        wr32(t29 + 4u, ebx);
        wr32(rd32(ebx + 4u) + 8u, ebx);
        if (rd32(ebx + 4u) == rd32(ebx + 8u))
        {
            ecx = rd32(ebx + 4u);
            t30 = rd8(eax + esi + 4u);
            wr8(sp0 + 0xbu, (uint8_t)t30);
            wr8(eax + esi + 4u, (uint8_t)((uint8_t)t30 + 1u));
            if (esi >= 0x20u)
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
                    wr32(arg1 + 4u, rd32(arg1 + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(arg1 + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)));
                    zf = (rd32(arg1 + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(arg1 + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)) < 0;
                }
                eax = eax + edx * 4u + 0xc4u;
                ecx = esi - 0x20u;
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
                    wr32(arg1, rd32(arg1) | 0x80000000u >> (esi & 0x1fu));
                    pf = PARITY((uint8_t)(rd32(arg1) | 0x80000000u >> (esi & 0x1fu)));
                    zf = (rd32(arg1) | 0x80000000u >> (esi & 0x1fu)) == 0u;
                    sf = (int32_t)(rd32(arg1) | 0x80000000u >> (esi & 0x1fu)) < 0;
                }
                eax = eax + edx * 4u + 0x44u;
                ecx = esi;
            }
            wr32(eax, rd32(eax) | 0x80000000u >> (ecx & 0x1fu));
            edx = 0x80000000u >> (ecx & 0x1fu);
        }
        t31 = rd32(sp0 + 0xcu);
        wr32(ebx, t31);
        wr32(ebx + t31 - 4u, t31);
    }
    goto L_1031c32c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c03e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031c03e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
