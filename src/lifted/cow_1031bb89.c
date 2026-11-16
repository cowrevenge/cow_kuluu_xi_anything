/* f_0x1031bb89 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031bb89(Guest* g)
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
    uint32_t loc_18;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(COW_IMG(0x109f83f8u)) * 0x14u + rd32(COW_IMG(0x109f83fcu));
    t2 = rd32(sp0 + 4u) + 0x17u & 0xfffffff0u;
    if ((int32_t)((uint32_t)((int32_t)t2 >> 4u) - 1u) >= 32)
    {
        eax = rd32(sp0 + 4u);
        ecx = (uint32_t)((int32_t)t2 >> 4u) - 1u;
        edx = rd32(COW_IMG(0x109f83fcu));
        edi = t1;
        loc_8 = t1;
        loc_14 = t2;
        t4 = 0xffffffffu >> (ecx - 0x20u & 0x1fu);
        ecx = ecx - 0x20u;
        esi = 0u;
        loc_c = t4;
        loc_10 = 0u;
    }
    else
    {
        ecx = (uint32_t)((int32_t)t2 >> 4u) - 1u;
        edx = rd32(COW_IMG(0x109f83fcu));
        edi = t1;
        loc_8 = t1;
        loc_14 = t2;
        t3 = 0xffffffffu >> (ecx & 0x1fu);
        esi = t3;
        loc_c = 0xffffffffu;
        loc_10 = t3;
    }
    t5 = rd32(COW_IMG(0x109f83ecu));
    wr32(sp0 + 4u, t5);
    if (t5 >= edi)
    {
        eax = t5;
        ebx = t5;
        goto L_1031bc00;
    }
    eax = t5;
    ebx = t5;
L_1031bbe7: ;
    if (((rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi)) != 0u)
    {
        ecx = (rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi);
        goto L_1031bc00;
    }
    ecx = (rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi);
    wr32(sp0 + 4u, ebx + 0x14u);
    if (ebx + 0x14u < loc_8)
    {
        ebx = ebx + 0x14u;
        goto L_1031bbe7;
    }
    ebx = ebx + 0x14u;
L_1031bc00: ;
    if (ebx != loc_8) goto L_1031bc7e;
    ebx = edx;
L_1031bc07: ;
    wr32(sp0 + 4u, ebx);
    if (ebx >= eax)
    {
        zf = ebx == eax;
        goto L_1031bc23;
    }
    if (((rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi)) != 0u)
    {
        ecx = (rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi);
        goto L_1031bc21;
    }
    ecx = (rd32(ebx + 4u) & loc_c) | (rd32(ebx) & esi);
    ebx = ebx + 0x14u;
    goto L_1031bc07;
L_1031bc21: ;
    zf = ebx == eax;
L_1031bc23: ;
    if (!zf) goto L_1031bc7e;
L_1031bc25: ;
    if (ebx >= loc_8)
    {
        zf = ebx == loc_8;
        goto L_1031bc3b;
    }
    if (rd32(ebx + 8u) != 0u) goto L_1031bc38;
    wr32(sp0 + 4u, ebx + 0x14u);
    ebx = ebx + 0x14u;
    goto L_1031bc25;
L_1031bc38: ;
    zf = ebx == loc_8;
L_1031bc3b: ;
    if (!zf) goto L_1031bc63;
    ebx = edx;
L_1031bc3f: ;
    wr32(sp0 + 4u, ebx);
    if (ebx >= eax)
    {
        zf = ebx == eax;
        goto L_1031bc53;
    }
    if (rd32(ebx + 8u) != 0u) goto L_1031bc51;
    ebx = ebx + 0x14u;
    goto L_1031bc3f;
L_1031bc51: ;
    zf = ebx == eax;
L_1031bc53: ;
    if (!zf) goto L_1031bc63;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x24u;
    t6 = cow_call_regs(g, COW_IMG(0x1031be92u), g->eax, g->ecx, edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 + 4u, t6);
    if (t6 == 0u)
    {
        edx = t8;
        goto L_1031bc77;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = t6;
L_1031bc63: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1031bf43u), ecx, 3, ebx, in_edi, in_esi);
    t10 = g->edx;
    wr32(rd32(ebx + 0x10u), t9);
    if (rd32(rd32(ebx + 0x10u)) != 0xffffffffu) goto L_1031bc7e;
    edx = t10;
L_1031bc77: ;
    eax = 0u;
L_1031be8d: ;
    g->edx = edx;
    return eax;
L_1031bc7e: ;
    wr32(COW_IMG(0x109f83ecu), ebx);
    t11 = rd32(rd32(ebx + 0x10u));
    if (rd32(rd32(ebx + 0x10u)) == 0xffffffffu)
    {
        eax = rd32(ebx + 0x10u);
        loc_8 = t11;
        goto L_1031bca5;
    }
    eax = rd32(ebx + 0x10u);
    edx = t11;
    loc_8 = t11;
    if (((rd32(eax + edx * 4u + 0xc4u) & loc_c) | (rd32(eax + edx * 4u + 0x44u) & esi)) != 0u) goto L_1031bcdc;
L_1031bca5: ;
    if (((rd32(eax + 0xc4u) & loc_c) | (rd32(eax + 0x44u) & loc_10)) != 0u)
    {
        esi = loc_10;
        loc_8 = 0u;
        goto L_1031bcd9;
    }
    ecx = eax + 0x44u;
    esi = loc_10;
    loc_8 = 0u;
L_1031bcc2: ;
    if (((rd32(ecx + 0x84u) & loc_c) | (esi & rd32(ecx + 4u))) == 0u)
    {
        ecx = ecx + 4u;
        loc_8 = loc_8 + 1u;
        goto L_1031bcc2;
    }
    loc_8 = loc_8 + 1u;
L_1031bcd9: ;
    edx = loc_8;
L_1031bcdc: ;
    t12 = eax + edx * 0x204u + 0x144u;
    if ((rd32(eax + edx * 4u + 0x44u) & esi) != 0u)
    {
        ecx = rd32(eax + edx * 4u + 0x44u) & esi;
        edi = 0u;
        loc_10 = t12;
    }
    else
    {
        loc_10 = t12;
        ecx = rd32(eax + edx * 4u + 0xc4u) & loc_c;
        edi = 0x20u;
    }
L_1031bd05: ;
    if ((int32_t)ecx < 0) goto L_1031bd0e;
    ecx = ecx << 1u;
    edi = edi + 1u;
    goto L_1031bd05;
L_1031bd0e: ;
    t13 = rd32(rd32(edi * 8u + loc_10 + 4u)) - loc_14;
    if ((int32_t)((uint32_t)((int32_t)t13 >> 4u) - 1u) <= 63)
    {
        ecx = t13;
        edx = rd32(edi * 8u + loc_10 + 4u);
        esi = (uint32_t)((int32_t)t13 >> 4u) - 1u;
        loc_c = t13;
    }
    else
    {
        ecx = t13;
        edx = rd32(edi * 8u + loc_10 + 4u);
        loc_c = t13;
        esi = 0x3fu;
    }
    if (esi == edi) goto L_1031be40;
    if (rd32(edx + 4u) == rd32(edx + 8u))
    {
        if ((int32_t)edi >= 32)
        {
            cf = edi < 0x20u;
            pf = PARITY((uint8_t)(edi - 0x20u));
            zf = edi == 0x20u;
            sf = (int32_t)(edi - 0x20u) < 0;
            of = ((edi ^ 0x20u) & (edi ^ edi - 0x20u)) >> 0x1fu;
            goto L_1031bd6b;
        }
        cf = edi < 0x20u;
        pf = PARITY((uint8_t)(edi - 0x20u));
        zf = edi == 0x20u;
        sf = (int32_t)(edi - 0x20u) < 0;
        of = ((edi ^ 0x20u) & (edi ^ edi - 0x20u)) >> 0x1fu;
        t14 = ~(0x80000000u >> (edi & 0x1fu));
        t15 = t14 & rd32(eax + loc_8 * 4u + 0x44u);
        wr32(eax + loc_8 * 4u + 0x44u, t15);
        t16 = rd32(eax + loc_8 * 4u + 0x44u);
        wr8(eax + edi + 4u, (uint8_t)(rd8(eax + edi + 4u) - 1u));
        if ((uint8_t)(rd8(eax + edi + 4u) - 1u) != 0u) goto L_1031bd99;
        loc_18 = t14;
        t17 = rd32(sp0 + 4u);
        wr32(t17, rd32(t17) & loc_18);
        ebx = t17;
    }
L_1031bd9c: ;
    t21 = rd32(edx + 4u);
    wr32(rd32(edx + 8u) + 4u, t21);
    t22 = rd32(edx + 8u);
    wr32(rd32(edx + 4u) + 8u, t22);
    if (loc_c == 0u) goto L_1031be4c;
    t23 = rd32(esi * 8u + loc_10 + 4u);
    wr32(edx + 4u, t23);
    t24 = esi * 8u + loc_10;
    wr32(edx + 8u, t24);
    wr32(t24 + 4u, edx);
    wr32(rd32(edx + 4u) + 8u, edx);
    if (rd32(edx + 4u) == rd32(edx + 8u))
    {
        ecx = rd32(edx + 4u);
        t25 = rd8(eax + esi + 4u);
        wr8(sp0 + 7u, (uint8_t)t25);
        if ((int32_t)esi >= 32)
        {
            ecx = (ecx & 0xffffff00u) | t25;
            t27 = rd8(sp0 + 7u);
            wr8(eax + esi + 4u, (uint8_t)((uint8_t)ecx + 1u));
            if ((uint8_t)t27 != 0u)
            {
                pf = PARITY((uint8_t)t27);
                zf = (uint8_t)t27 == 0u;
                sf = (int8_t)t27 < 0;
            }
            else
            {
                pf = PARITY((uint8_t)t27);
                zf = (uint8_t)t27 == 0u;
                sf = (int8_t)t27 < 0;
                wr32(ebx + 4u, rd32(ebx + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu));
                pf = PARITY((uint8_t)(rd32(ebx + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)));
                zf = (rd32(ebx + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)) == 0u;
                sf = (int32_t)(rd32(ebx + 4u) | 0x80000000u >> (esi - 0x20u & 0x1fu)) < 0;
            }
            wr32(eax + loc_8 * 4u + 0xc4u, rd32(eax + loc_8 * 4u + 0xc4u) | 0x80000000u >> (esi - 0x20u & 0x1fu));
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | t25;
            t26 = rd8(sp0 + 7u);
            wr8(eax + esi + 4u, (uint8_t)((uint8_t)ecx + 1u));
            if ((uint8_t)t26 != 0u)
            {
                pf = PARITY((uint8_t)t26);
                zf = (uint8_t)t26 == 0u;
                sf = (int8_t)t26 < 0;
            }
            else
            {
                pf = PARITY((uint8_t)t26);
                zf = (uint8_t)t26 == 0u;
                sf = (int8_t)t26 < 0;
                wr32(ebx, rd32(ebx) | 0x80000000u >> (esi & 0x1fu));
                pf = PARITY((uint8_t)(rd32(ebx) | 0x80000000u >> (esi & 0x1fu)));
                zf = (rd32(ebx) | 0x80000000u >> (esi & 0x1fu)) == 0u;
                sf = (int32_t)(rd32(ebx) | 0x80000000u >> (esi & 0x1fu)) < 0;
            }
            wr32(eax + loc_8 * 4u + 0x44u, rd32(eax + loc_8 * 4u + 0x44u) | 0x80000000u >> (esi & 0x1fu));
        }
    }
    ecx = loc_c;
L_1031be40: ;
    if (ecx != 0u)
    {
        wr32(edx, ecx);
        wr32(ecx + edx - 4u, ecx);
    }
L_1031be4f: ;
    wr32(ecx + edx, loc_14 + 1u);
    wr32(ecx + edx + loc_14 - 4u, loc_14 + 1u);
    t28 = rd32(loc_10) + 1u;
    t29 = rd32(loc_10);
    wr32(loc_10, t28);
    if (t29 != 0u)
    {
        edx = ecx + edx;
    }
    else
    {
        edx = ecx + edx;
        if (ebx == rd32(COW_IMG(0x109f83f4u)))
        {
            if (loc_8 == rd32(COW_IMG(0x109f83e8u)))
            {
                wr32(COW_IMG(0x109f83f4u), 0u);
            }
        }
    }
    wr32(eax, loc_8);
    eax = edx + 4u;
    goto L_1031be8d;
L_1031bd6b: ;
    wr32(eax + loc_8 * 4u + 0xc4u, rd32(eax + loc_8 * 4u + 0xc4u) & ~(0x80000000u >> (edi - 0x20u & 0x1fu)));
    t18 = rd32(eax + loc_8 * 4u + 0xc4u);
    wr8(eax + edi + 4u, (uint8_t)(rd8(eax + edi + 4u) - 1u));
    t19 = ~(0x80000000u >> (edi - 0x20u & 0x1fu));
    if ((uint8_t)(rd8(eax + edi + 4u) - 1u) != 0u) goto L_1031bd99;
    loc_18 = t19;
    t20 = rd32(sp0 + 4u);
    wr32(t20 + 4u, rd32(t20 + 4u) & loc_18);
    ebx = t20;
    goto L_1031bd9c;
L_1031bd99: ;
    ebx = rd32(sp0 + 4u);
    goto L_1031bd9c;
L_1031be4c: ;
    ecx = loc_c;
    goto L_1031be4f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031bb89(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031bb89(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
