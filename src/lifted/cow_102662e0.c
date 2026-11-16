/* f_0x102662e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=8 */
uint32_t cow_fn_102662e0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < 0)
    {
        ebp = rd32(sp0 + 4u);
        goto L_10266301;
    }
    ebp = rd32(sp0 + 4u);
    if (arg2 != 0u && (int32_t)arg2 >= 0) goto L_102662f9;
    if (0u) goto L_10266301;
L_102662f9: ;
    ebx = ebp;
    loc_24 = arg2;
L_10266310: ;
    if ((int32_t)rd32(sp0 + 0x10u) < 0)
    {
        edx = rd32(sp0 + 0x10u);
        esi = rd32(sp0 + 0xcu);
        goto L_1026632c;
    }
    edx = rd32(sp0 + 0x10u);
    esi = rd32(sp0 + 0xcu);
    zf = rd32(sp0 + 0x10u) == 0u;
    sf = (int32_t)rd32(sp0 + 0x10u) < 0;
    if (!zf && !sf) goto L_10266322;
    if (0u) goto L_1026632c;
L_10266322: ;
    loc_30 = esi;
    loc_2c = edx;
L_1026633f: ;
    if ((int32_t)arg6 < 0) goto L_10266357;
    if (arg6 != 0u && (int32_t)arg6 >= 0) goto L_10266351;
    if (0u) goto L_10266357;
L_10266351: ;
    eax = arg6;
    ecx = rd32(sp0 + 0x14u);
L_10266362: ;
    wr32(sp0 + 0xcu, ecx);
    wr32(sp0 + 0x10u, eax);
    if ((int32_t)arg2 > 0) goto L_1026637b;
    if ((int32_t)arg2 < 0) goto L_10266374;
    if (1u) goto L_1026637b;
L_10266374: ;
    ecx = 1u;
L_1026637d: ;
    if ((int32_t)edx > 0) goto L_1026638e;
    sf = (int32_t)edx < 0;
    if (sf) goto L_10266387;
    if (1u) goto L_1026638e;
L_10266387: ;
    eax = 1u;
L_10266390: ;
    wr32(sp0 + 4u, eax ^ ecx);
    g->ecx = ecx;
    g->edx = loc_30;
    g->esp = sp0 - 0x40u;
    t3 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, ebx, 0u, loc_30, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_2c, 0u, ebx, 0u);
    t7 = g->edx;
    g->edx = loc_24;
    t8 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_24, 0u, loc_30, 0u);
    t9 = g->edx;
    g->edx = 0u;
    t10 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_2c, 0u, loc_24, 0u);
    t11 = g->edx;
    t12 = rd32(sp0 + 0x1cu);
    if ((t12 | rd32(sp0 + 0x20u)) == 0u)
    {
        edx = t11 + (t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8) < t10);
        ebp = t3;
        esi = t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8);
        edi = t5 + t6 + t8;
    }
    else
    {
        ecx = rd32(sp0 + 0x20u);
        edx = t11 + (t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8) < t10);
        ebx = t12;
        ebp = t3;
        esi = t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8);
        edi = t5 + t6 + t8;
        if (rd32(sp0 + 4u) == 0u) goto L_10266438;
        if ((int32_t)ecx < 0)
        {
            eax = -(ecx + (ebx != 0u));
            loc_20 = -ebx;
            goto L_1026644d;
        }
        eax = -(ecx + (ebx != 0u));
        zf = ecx == 0u;
        sf = (int32_t)ecx < 0;
        loc_20 = -ebx;
        if (!zf && !sf) goto L_10266433;
        if (ebx == 0u) goto L_1026644d;
L_10266433: ;
        ecx = 0xffffffffu;
L_1026644f: ;
        wr32(sp0 + 0x20u, 0u);
        t13 = ebp + loc_20 < ebp;
        wr32(sp0 + 0x1cu, t13);
        t14 = ecx + edx + (ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)) < esi) + (ecx + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)) < (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)));
        if ((int32_t)t14 >= 0)
        {
            edx = t14;
            ebp = ebp + loc_20;
            esi = ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu));
            edi = eax + edi + rd32(sp0 + 0x1cu);
        }
        else
        {
            edx = t14;
            ebp = ebp + loc_20;
            esi = ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu));
            edi = eax + edi + rd32(sp0 + 0x1cu);
            t15 = rd32(sp0 + 4u) == 0u;
            wr32(sp0 + 4u, t15);
            t16 = ~ebp + 1u;
            if ((t16 | ~edi + (~ebp + 1u < ~ebp)) != 0u)
            {
                edx = ~edx;
                esi = ~esi;
                edi = ~edi + (~ebp + 1u < ~ebp);
                ebp = t16;
                eax = 0u;
            }
            else
            {
                edx = ~edx;
                esi = ~esi;
                edi = ~edi + (~ebp + 1u < ~ebp);
                ebp = t16;
                eax = 1u;
            }
            edx = edx + (eax + esi < esi);
            esi = eax + esi;
        }
    }
    if ((int32_t)arg6 <= 0)
    {
        if ((int32_t)arg6 < 0) goto L_102664d3;
        if (1u) goto L_102664e2;
L_102664d3: ;
        t17 = rd32(sp0 + 4u) == 0u;
        wr32(sp0 + 4u, t17);
    }
L_102664e2: ;
    if (rd32(sp0 + 0x10u) > edx)
    {
        eax = rd32(sp0 + 0x10u);
        goto L_1026651f;
    }
    eax = rd32(sp0 + 0x10u);
    cf = rd32(sp0 + 0x10u) < edx;
    if (cf) goto L_102664f4;
    if (rd32(sp0 + 0xcu) > esi)
    {
        ecx = rd32(sp0 + 0xcu);
        goto L_10266523;
    }
L_102664f4: ;
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1026650d;
    }
    g->edx = 0x80000000u;
    return 0u;
L_10266301: ;
    t1 = -(arg2 + (ebp != 0u));
    ebx = -ebp;
    loc_24 = t1;
    goto L_10266310;
L_1026632c: ;
    t2 = -(edx + (esi != 0u));
    loc_30 = -esi;
    loc_2c = t2;
    goto L_1026633f;
L_10266357: ;
    eax = -(arg6 + (rd32(sp0 + 0x14u) != 0u));
    ecx = -rd32(sp0 + 0x14u);
    goto L_10266362;
L_1026637b: ;
    ecx = 0u;
    goto L_1026637d;
L_1026638e: ;
    eax = 0u;
    goto L_10266390;
L_10266438: ;
    if ((int32_t)ecx > 0)
    {
        eax = ecx;
        loc_20 = ebx;
        goto L_1026644d;
    }
    eax = ecx;
    sf = (int32_t)ecx < 0;
    loc_20 = ebx;
    if (sf) goto L_10266448;
    if (1u) goto L_1026644d;
L_10266448: ;
    ecx = 0xffffffffu;
    goto L_1026644f;
L_1026644d: ;
    ecx = 0u;
    goto L_1026644f;
L_1026650d: ;
    g->edx = 0x7fffffffu;
    return 0xffffffffu;
L_1026651f: ;
    ecx = rd32(sp0 + 0xcu);
L_10266523: ;
    if ((esi | edx) != 0u) goto L_1026654f;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t18 = cow_stdcall(g, COW_IMG(0x10316970u), 4, ebp, edi, ecx, eax);
    t19 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_10266600;
    }
    eax = t18;
    edx = t19;
    g->edx = -(edx + (eax != 0u));
    return -eax;
L_1026654f: ;
    if (eax != 0u) goto L_1026659f;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t20 = cow_stdcall(g, COW_IMG(0x10316970u), 4, edi, esi, ecx, eax);
    t21 = g->edx;
    t22 = rd32(sp0 + 0xcu);
    t23 = cow_stdcall(g, COW_IMG(0x103168f0u), 4, edi, esi, t22, 0u);
    t24 = rd32(sp0 + 0xcu);
    g->edx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x10316970u), 4, ebp, t23, t24, 0u);
    t26 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = t20 + t26;
        esi = t25;
    }
    else
    {
        ebx = t20 + t26;
        esi = t25;
        ebx = -(ebx + (esi != 0u));
        esi = -esi;
    }
    g->edx = ebx;
    return esi;
L_1026659f: ;
    wr32(sp0 + 0x14u, 0x40u);
    eax = 0u;
    ecx = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_102665ab: ;
    { /* shld ecx, eax, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = ecx, b = eax, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    { /* shld edx, esi, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edx, b = esi, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    if ((int32_t)edi >= 0)
    {
        eax = eax * 2u;
        esi = esi * 2u;
        pf = PARITY((uint8_t)edi);
        zf = edi == 0u;
        sf = (int32_t)edi < 0;
        of = 0u;
    }
    else
    {
        eax = eax * 2u;
        esi = esi * 2u;
        pf = PARITY((uint8_t)(esi + 1u));
        zf = esi + 1u == 0u;
        sf = (int32_t)(esi + 1u) < 0;
        of = esi + 1u == 0x80000000u;
        esi = esi + 1u;
    }
    t27 = rd32(sp0 + 0x10u);
    cf = 0u;
    { /* shld edi, ebp, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edi, b = ebp, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edi = (uint32_t)(r); } } }
    if (t27 > edx)
    {
        ebp = ebp * 2u;
        cf = t27 < edx;
    }
    else
    {
        ebp = ebp * 2u;
        cf = t27 < edx;
        if (cf) goto L_102665d2;
        if (rd32(sp0 + 0xcu) > esi)
        {
            cf = rd32(sp0 + 0xcu) < esi;
            goto L_102665e4;
        }
L_102665d2: ;
        edx = edx - rd32(sp0 + 0x10u) - (esi < rd32(sp0 + 0xcu));
        esi = esi - rd32(sp0 + 0xcu);
        cf = ecx + (eax + 1u < eax) < ecx || eax + 1u < eax && ecx + (eax + 1u < eax) == ecx;
        ecx = ecx + (eax + 1u < eax);
        eax = eax + 1u;
    }
L_102665e4: ;
    t28 = rd32(sp0 + 0x14u) - 1u;
    t29 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t28);
    if (t29 != 1u)
    {
        pf = PARITY((uint8_t)(t29 - 1u));
        zf = t29 == 1u;
        sf = (int32_t)(t29 - 1u) < 0;
        of = t29 == 0x80000000u;
        goto L_102665ab;
    }
    if (rd32(sp0 + 4u) != 0u)
    {
        ecx = -(ecx + (eax != 0u));
        eax = -eax;
    }
    edx = ecx;
L_10266600: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102662e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102662e0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
