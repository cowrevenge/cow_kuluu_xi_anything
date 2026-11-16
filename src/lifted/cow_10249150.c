/* f_0x10249150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10249150(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x104u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102494da;
    }
    ebp = arg2;
    loc_8 = 0u;
    loc_10 = t1;
L_1024917e: ;
    if ((int32_t)(((rd8(ebp + 3u) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp)) > 1296912195)
    {
        eax = ((rd8(ebp + 3u) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp);
        ecx = rd8(ebp + 1u);
        edx = rd8(ebp);
        ebp = ebp + 4u;
        goto L_10249412;
    }
    eax = ((rd8(ebp + 3u) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp);
    ecx = rd8(ebp + 1u);
    zf = (((rd8(ebp + 3u) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp)) == 0x4d4d4f43u;
    ebp = ebp + 4u;
    if (zf) goto L_1024938c;
    if (eax == 0x444e5353u) goto L_10249335;
    if (eax != 0x4b52414du) goto L_1024945e;
    t3 = ((rd8(ebp) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 3u);
    if (rd8(ebp + 4u) * 0x100u + rd8(ebp + 5u) == 0u)
    {
        ecx = rd8(ebp + 5u);
        edx = ebp + 6u;
        ebp = ebp + 4u;
        loc_c = t3;
        ebp = ebp + loc_c;
    }
    else
    {
        eax = rd8(ebp + 4u) * 0x100u + rd8(ebp + 5u);
        edx = ebp + 6u;
        ebp = ebp + 4u;
        loc_c = t3;
        loc_4 = eax;
L_10249203: ;
        t4 = rd8(edx + 6u) + 1u;
        t5 = rd8(edx + 2u);
        t6 = rd8(edx + 3u);
        t7 = rd8(edx + 4u);
        t8 = rd8(edx + 5u);
        edi = loc_10;
        eax = 0u;
        ecx = t4 >> 2u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t4 & 3u;
        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t9 = rd8(edx + 6u);
        esi = edx + 7u;
        edi = loc_10;
        ecx = t9 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t9 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        if ((int32_t)rd32(arg1 + 0x10u) >= 0)
        {
            edx = edx + 6u;
            ebx = t5 * 0x1000000u + t6 * 0x10000u + t7 * 0x100u + t8;
            goto L_102492ad;
        }
        edx = edx + 6u;
        ebx = t5 * 0x1000000u + t6 * 0x10000u + t7 * 0x100u + t8;
        esi = loc_10;
        edi = COW_IMG(0x10388c84u);
        ecx = 5u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (zf) goto L_102492a4;
        esi = loc_10;
        edi = COW_IMG(0x10388c78u);
        ecx = 9u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (zf) goto L_102492a4;
        esi = loc_10;
        edi = COW_IMG(0x10388c6cu);
        ecx = 9u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102492fc;
L_102492a4: ;
        wr32(arg1 + 0x10u, ebx);
        ecx = arg1;
L_102492fc: ;
L_10249300: ;
        if (loc_4 != 1u)
        {
            edx = edx + rd8(edx) + 2u;
            loc_4 = loc_4 - 1u;
            goto L_10249203;
        }
        edx = edx + rd8(edx) + 2u;
        ebp = ebp + loc_c;
    }
L_1024948e: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_102494cb;
    eax = rd32(sp0 + 0xcu);
    t27 = eax - loc_c - 8u;
    wr32(sp0 + 0xcu, t27);
    if ((int32_t)(eax - loc_c - 8u) > 0) goto L_1024917e;
    ecx = 0xfffffff8u - loc_c;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_10);
    t28 = g->edx;
    edx = t28;
L_102494de: ;
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        zf = rd32(arg1 + 0x1cu) == 0u;
    }
    else
    {
        edi = rd32(arg1 + 0x1cu);
        t30 = rd32(arg1 + 8u) + ((uint32_t)((int32_t)rd32(arg1 + 8u) >> 0x1fu) & 7u);
        t31 = cow_divs(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t30 >> 3u) * rd32(arg1 + 4u));
        t32 = cow_mods(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t30 >> 3u) * rd32(arg1 + 4u));
        t33 = rd32(arg1 + 0x14u);
        wr32(arg1 + 0x18u, t31);
        if ((int32_t)t33 >= (int32_t)rd32(arg1 + 0x10u))
        {
            edx = t33;
        }
        else
        {
            eax = rd32(arg1 + 0x10u);
            edx = t33;
            wr32(arg1 + 0x14u, 0xffffffffu);
            wr32(arg1 + 0x10u, 0xffffffffu);
        }
        if ((int32_t)rd32(arg1 + 0x14u) > 0)
        {
            eax = rd32(arg1 + 0x14u);
            if ((int32_t)rd32(arg1 + 0x18u) >= (int32_t)(eax + 1u))
            {
                zf = rd32(arg1 + 0x18u) == eax + 1u;
                sf = (int32_t)(rd32(arg1 + 0x18u) - (eax + 1u)) < 0;
                of = ((rd32(arg1 + 0x18u) ^ eax + 1u) & (rd32(arg1 + 0x18u) ^ rd32(arg1 + 0x18u) - (eax + 1u))) >> 0x1fu;
                eax = eax + 1u;
                if (!(zf || sf != of))
                {
                    wr32(arg1 + 0x18u, eax);
                }
            }
            else
            {
                ecx = rd32(arg1 + 0x18u);
                wr32(arg1 + 0x14u, ecx - 1u);
            }
        }
        zf = edi == 0u;
    }
    if (zf) goto L_102495dd;
    if (rd8(arg2 + 8u) != 0x41u) goto L_102495dd;
    if (rd8(arg2 + 9u) != 0x49u) goto L_102495dd;
    if (rd8(arg2 + 0xau) != 0x46u) goto L_102495dd;
    if (rd8(arg2 + 0xbu) != 0x46u) goto L_102495dd;
    wr8(arg2 + 0xbu, 0x40u);
    if (rd32(arg1 + 8u) == 0x10u) goto L_102495ab;
    eax = rd32(arg1 + 8u);
    if (eax != 0x18u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_102495e0;
    }
    eax = rd32(arg1 + 0x1cu);
    ecx = eax + 2u;
    ebx = arg2;
    edi = rd32(arg1 + 0x18u) * rd32(arg1 + 4u);
L_1024957b: ;
    t34 = rd8(ecx);
    t35 = rd8(eax);
    wr8(eax, (uint8_t)(t35 ^ t34));
    t36 = rd8(ecx);
    wr8(ecx, (uint8_t)(t36 ^ t35 ^ t34));
    t37 = rd8(eax);
    wr8(eax, (uint8_t)(t37 ^ t36 ^ t35 ^ t34));
    if (edi != 1u)
    {
        eax = eax + 3u;
        ecx = ecx + 3u;
        edx = ((edx | t34) & 0xffffff00u) | (uint8_t)(t36 ^ t35 ^ t34);
        ebx = ((ebx | (t35 ^ t34)) & 0xffffff00u) | (uint8_t)(t37 ^ t36 ^ t35 ^ t34);
        edi = edi - 1u;
        goto L_1024957b;
    }
    return rd32(arg1 + 0x1cu);
L_102492ad: ;
    if ((int32_t)rd32(arg1 + 0x14u) >= 0) goto L_102492b9;
    wr32(arg1 + 0x14u, ebx);
    goto L_10249300;
L_102492b9: ;
    esi = loc_10;
    edi = COW_IMG(0x10388c84u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102492f5;
    esi = loc_10;
    edi = COW_IMG(0x10388c60u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102492f5;
    esi = loc_10;
    edi = COW_IMG(0x10388c54u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102492fc;
L_102492f5: ;
    wr32(arg1 + 0x14u, ebx);
    ecx = arg1;
    goto L_102492fc;
L_10249335: ;
    t10 = ((rd8(ebp) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 3u);
    t11 = t10 - (((rd8(ebp + 4u) << 8u | rd8(ebp + 5u)) << 8u | rd8(ebp + 8u)) << 8u | rd8(ebp + 7u)) - 8u;
    t12 = rd8(ebp + 4u);
    t13 = rd8(ebp + 5u);
    t14 = rd8(ebp + 8u);
    t15 = rd8(ebp + 7u);
    wr32(arg1 + 0x18u, t11);
    t16 = ebp + (((t12 << 8u | t13) << 8u | t14) << 8u | t15) + 0xcu;
    wr32(arg1 + 0x1cu, t16);
    eax = t10;
    ecx = t16;
    edx = arg1;
    ebp = ebp + t10 + 4u;
L_10249486: ;
    loc_c = eax;
L_1024948a: ;
    goto L_1024948e;
L_1024938c: ;
    t17 = ((rd8(ebp) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 3u);
    t18 = rd8(ebp + 4u) << 8u;
    wr32(arg1 + 4u, t18);
    t19 = t18 + rd8(ebp + 5u);
    wr32(arg1 + 4u, t19);
    t20 = rd8(ebp + 0xau) << 8u;
    wr32(arg1 + 8u, t20);
    t21 = t20 + rd8(ebp + 0xbu);
    wr32(arg1 + 8u, t21);
    t22 = rd8(ebp + 0xeu) << 8u;
    wr32(arg1 + 0xcu, t22);
    t23 = t22 + rd8(ebp + 0xfu);
    wr32(arg1 + 0xcu, t23);
    t24 = ((t22 & 0xffffff00u) | rd8(ebp + 0xcu)) << 8u;
    t25 = (uint32_t)((int32_t)t23 >> ((0x400eu - t24 - ((t24 & 0xffffff00u) | rd8(ebp + 0xdu)) & 0x1fu) < 0x20u ? 0x400eu - t24 - ((t24 & 0xffffff00u) | rd8(ebp + 0xdu)) & 0x1fu : 0x1fu));
    t26 = rd8(ebp + 0xdu);
    wr32(arg1 + 0xcu, t25);
    ecx = 0x400eu - t24 - ((t24 & 0xffffff00u) | t26);
    edx = (t24 & 0xffffff00u) | t26;
    ebp = ebp + t17 + 4u;
    loc_c = t17;
    goto L_1024948a;
L_10249412: ;
    if (eax != 0x4d524f46u) goto L_1024945e;
    if (rd8(ebp + 4u) != 0x41u) goto L_1024945e;
    eax = (eax & 0xffffff00u) | rd8(ebp + 4u);
    if (rd8(ebp + 5u) != 0x49u) goto L_1024943a;
    if (rd8(ebp + 6u) != 0x46u) goto L_1024943a;
    if (rd8(ebp + 7u) == 0x46u) goto L_10249450;
L_1024943a: ;
    if ((uint8_t)eax != 0x41u) goto L_1024945e;
    if (rd8(ebp + 5u) != 0x49u) goto L_1024945e;
    if (rd8(ebp + 6u) != 0x46u) goto L_1024945e;
    if (rd8(ebp + 7u) != 0x40u) goto L_1024945e;
L_10249450: ;
    ebp = ebp + 8u;
    loc_8 = loc_8 + 1u;
    loc_c = 4u;
    goto L_1024948a;
L_1024945e: ;
    if (loc_8 == 0u) goto L_102494be;
    eax = ((rd8(ebp) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 3u);
    ecx = rd8(ebp + 2u);
    edx = rd8(ebp + 3u);
    ebp = ebp + (((rd8(ebp) << 8u | rd8(ebp + 1u)) << 8u | rd8(ebp + 2u)) << 8u | rd8(ebp + 3u)) + 4u;
    goto L_10249486;
L_102494be: ;
    wr32(arg1 + 0x1cu, 0u);
    edx = arg1;
L_102494cb: ;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_10);
    t29 = g->edx;
    edx = t29;
    goto L_102494de;
L_102494da: ;
    goto L_102494de;
L_102495ab: ;
    eax = rd32(arg1 + 0x1cu);
    ecx = rd32(arg1 + 0x1cu) + 1u;
    ebx = arg2;
    edi = rd32(arg1 + 0x18u) * rd32(arg1 + 4u);
L_102495b8: ;
    t38 = rd8(ecx);
    t39 = rd8(eax);
    wr8(eax, (uint8_t)(t39 ^ t38));
    t40 = rd8(ecx);
    wr8(ecx, (uint8_t)(t40 ^ t39 ^ t38));
    t41 = rd8(eax);
    wr8(eax, (uint8_t)(t41 ^ t40 ^ t39 ^ t38));
    if (edi != 1u)
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = ((edx | t38) & 0xffffff00u) | (uint8_t)(t40 ^ t39 ^ t38);
        ebx = ((ebx | (t39 ^ t38)) & 0xffffff00u) | (uint8_t)(t41 ^ t40 ^ t39 ^ t38);
        edi = edi - 1u;
        goto L_102495b8;
    }
L_102495dd: ;
    eax = rd32(arg1 + 0x1cu);
L_102495e0: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10249150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10249150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
