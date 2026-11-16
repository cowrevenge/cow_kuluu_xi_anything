/* f_0x1030dcbd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1030dcbd(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 0x18u));
    t2 = rd32(rd32(sp0 + 0x18u) + 4u);
    t3 = rd32(arg5 + 0x34u);
    t4 = rd32(arg5 + 0x30u);
    t5 = rd32(arg5 + 0x1cu);
    t6 = rd32(arg5 + 0x20u);
    t7 = rd32(sp0 + 0x18u);
    t8 = rd32(arg5 + 0x34u);
    wr32(sp0 + 0x18u, t3);
    if (t8 >= t4)
    {
        ecx = t3;
        edx = t5;
        ebx = t6;
        esi = t7;
        loc_c = t1;
        loc_8 = t2;
        eax = rd32(arg5 + 0x2cu) - ecx;
    }
    else
    {
        eax = t4;
        ecx = t3;
        edx = t5;
        ebx = t6;
        esi = t7;
        loc_c = t1;
        loc_8 = t2;
        eax = eax - ecx - 1u;
    }
    t9 = rd32(COW_IMG(0x103cff60u) + rd32(sp0 + 4u) * 4u);
    t10 = rd32(COW_IMG(0x103cff60u) + rd32(sp0 + 8u) * 4u);
    loc_14 = eax;
    loc_18 = t9;
    loc_1c = t10;
L_1030dd28: ;
    if (edx < 0x14u)
    {
        cf = edx < 0x14u;
        goto L_1030dd13;
    }
    t11 = rd8(arg3 + (loc_18 & ebx) * 8u);
    wr32(sp0 + 8u, t11);
    eax = arg3 + (loc_18 & ebx) * 8u;
    pf = PARITY((uint8_t)t11);
    zf = t11 == 0u;
    sf = (int32_t)t11 < 0;
L_1030dd62: ;
    if (zf)
    {
        ecx = rd8(eax + 1u);
        goto L_1030deab;
    }
    ecx = rd8(eax + 1u);
    if ((rd32(sp0 + 8u) & 0x10u) == 0u)
    {
        edx = edx - rd8(eax + 1u);
        ebx = ebx >> (ecx & 0x1fu);
        ecx = rd32(sp0 + 8u);
        goto L_1030dd42;
    }
    edx = edx - rd8(eax + 1u);
    ebx = ebx >> (ecx & 0x1fu);
    ecx = rd32(sp0 + 8u);
    wr32(sp0 + 8u, ecx & 0xfu);
    t12 = rd32(eax + 4u) + (rd32(COW_IMG(0x103cff60u) + (ecx & 0xfu) * 4u) & ebx);
    t13 = ebx >> (rd32(sp0 + 8u) & 0x1fu);
    t14 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t13);
    if (edx - t14 >= 0xfu)
    {
        edx = edx - t14;
        ebx = t13;
        loc_10 = t12;
        goto L_1030ddbd;
    }
    ebx = t13;
    cf = edx - t14 < 0xfu;
    edx = edx - t14;
    loc_10 = t12;
L_1030dda0: ;
    if (edx + 8u < 0xfu)
    {
        ebx = ebx | rd8(loc_c) << (edx & 0x1fu);
        cf = edx + 8u < 0xfu;
        edx = edx + 8u;
        loc_c = loc_c + 1u;
        loc_8 = loc_8 - 1u;
        goto L_1030dda0;
    }
    ebx = ebx | rd8(loc_c) << (edx & 0x1fu);
    edx = edx + 8u;
    loc_c = loc_c + 1u;
    loc_8 = loc_8 - 1u;
    wr32(sp0 + 4u, ebx);
L_1030ddbd: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> (rd8(arg4 + (loc_1c & ebx) * 8u + 1u) & 0x1fu));
    eax = arg4 + (loc_1c & ebx) * 8u;
    edx = edx - rd8(arg4 + (loc_1c & ebx) * 8u + 1u);
L_1030ddfc: ;
    if ((rd8(eax) & 0x10u) == 0u)
    {
        ebx = rd8(eax);
        goto L_1030ddd7;
    }
    ebx = rd8(eax);
    ebx = ebx & 0xfu;
L_1030de1f: ;
    if (edx < ebx)
    {
        cf = edx < ebx;
        goto L_1030de09;
    }
    t15 = rd32(eax + 4u) + (rd32(COW_IMG(0x103cff60u) + ebx * 4u) & rd32(sp0 + 4u));
    t16 = rd32(arg5 + 0x28u);
    wr32(sp0 + 8u, t15);
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> (ebx & 0x1fu));
    if (rd32(sp0 + 0x18u) - t16 < rd32(sp0 + 8u))
    {
        eax = t16;
        edx = edx - ebx;
        loc_14 = loc_14 - loc_10;
        t21 = eax + rd32(sp0 + 8u) - rd32(sp0 + 0x18u);
        t22 = rd32(arg5 + 0x2cu);
        wr32(sp0 + 8u, t21);
        if (loc_10 <= t21)
        {
            eax = t22 - t21;
        }
        else
        {
            eax = t22 - t21;
            ecx = t21;
            loc_10 = loc_10 - ecx;
L_1030de82: ;
            t23 = rd8(eax);
            t24 = rd32(sp0 + 0x18u);
            wr32(sp0 + 0x18u, t24 + 1u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            t25 = rd32(sp0 + 8u);
            wr8(t24, (uint8_t)t23);
            if (t25 != 1u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t23;
                goto L_1030de82;
            }
            ebx = t24;
            eax = rd32(arg5 + 0x28u);
        }
        ecx = rd32(sp0 + 0x18u);
    }
    else
    {
        edx = edx - ebx;
        loc_14 = loc_14 - loc_10;
        t17 = rd32(sp0 + 0x18u);
        t18 = rd32(sp0 + 8u);
        t19 = rd8(t17 - rd32(sp0 + 8u));
        wr8(t17, (uint8_t)t19);
        t20 = rd8(t17 - t18 + 1u);
        wr8(t17 + 1u, (uint8_t)t20);
        eax = t17 - t18 + 2u;
        ecx = t17 + 2u;
        ebx = ((ebx | t19) & 0xffffff00u) | t20;
        loc_10 = loc_10 - 2u;
    }
L_1030de98: ;
    t26 = rd8(eax);
    wr8(ecx, (uint8_t)t26);
    if (loc_10 != 1u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        ebx = (ebx & 0xffffff00u) | t26;
        loc_10 = loc_10 - 1u;
        goto L_1030de98;
    }
    ecx = ecx + 1u;
    t27 = rd32(sp0 + 4u);
    wr32(sp0 + 0x18u, ecx);
    ebx = t27;
L_1030dec1: ;
    if (loc_14 < 0x102u) goto L_1030ded4;
    if (loc_8 >= 0xau) goto L_1030dd28;
L_1030ded4: ;
    if (edx >> 3u >= rd32(esi + 4u) - loc_8)
    {
        ecx = rd32(esi + 4u) - loc_8;
    }
    else
    {
        eax = edx >> 3u;
        ecx = eax;
    }
    wr32(sp0 + 8u, 0u);
L_1030df41: ;
    wr32(arg5 + 0x20u, ebx);
    t39 = edx - (ecx << 3u);
    wr32(arg5 + 0x1cu, t39);
    wr32(esi + 4u, ecx + loc_8);
    t40 = rd32(esi);
    wr32(esi, loc_c - ecx);
    t41 = rd32(sp0 + 0x18u);
    wr32(esi + 8u, loc_c + rd32(esi + 8u) - ecx - t40);
    wr32(arg5 + 0x34u, t41);
    g->edx = loc_8;
    return rd32(sp0 + 8u);
L_1030dd13: ;
    ebx = ebx | rd8(loc_c) << (edx & 0x1fu);
    edx = edx + 8u;
    loc_c = loc_c + 1u;
    loc_8 = loc_8 - 1u;
    goto L_1030dd28;
L_1030dd42: ;
    if ((ecx & 0x40u) != 0u) goto L_1030df0b;
    t33 = rd8(eax + rd32(eax + 4u) * 8u + (rd32(COW_IMG(0x103cff60u) + ecx * 4u) & ebx) * 8u);
    t34 = rd32(eax + 4u);
    t35 = rd32(COW_IMG(0x103cff60u) + ecx * 4u);
    wr32(sp0 + 8u, t33);
    eax = eax + t34 * 8u + (t35 & ebx) * 8u;
    pf = PARITY((uint8_t)t33);
    zf = t33 == 0u;
    sf = (int32_t)t33 < 0;
    goto L_1030dd62;
L_1030ddd7: ;
    if ((ebx & 0x40u) != 0u) goto L_1030deeb;
    t28 = rd32(eax + 4u);
    t29 = rd32(COW_IMG(0x103cff60u) + ebx * 4u);
    t30 = rd32(sp0 + 4u);
    t31 = rd8(eax + rd32(eax + 4u) * 8u + (rd32(COW_IMG(0x103cff60u) + ebx * 4u) & rd32(sp0 + 4u)) * 8u + 1u);
    wr32(sp0 + 4u, t30 >> (t31 & 0x1fu));
    wr32(sp0 + 8u, t31);
    eax = eax + t28 * 8u + (t29 & t30) * 8u;
    edx = edx - t31;
    goto L_1030ddfc;
L_1030de09: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) | rd8(loc_c) << (edx & 0x1fu));
    edx = edx + 8u;
    loc_c = loc_c + 1u;
    loc_8 = loc_8 - 1u;
    goto L_1030de1f;
L_1030deab: ;
    t36 = rd8(eax + 4u);
    t37 = rd32(sp0 + 0x18u);
    t38 = rd8(eax + 1u);
    wr32(sp0 + 0x18u, t37 + 1u);
    wr8(t37, (uint8_t)t36);
    edx = edx - t38;
    ebx = ebx >> (ecx & 0x1fu);
    loc_14 = loc_14 - 1u;
    goto L_1030dec1;
L_1030deeb: ;
    t32 = rd32(esi + 4u);
    wr32(esi + 0x18u, COW_IMG(0x103496acu));
    if (edx >> 3u >= t32 - loc_8)
    {
        ecx = t32 - loc_8;
    }
    else
    {
        eax = edx >> 3u;
        ecx = eax;
    }
    ebx = rd32(sp0 + 4u);
L_1030df3a: ;
    wr32(sp0 + 8u, 0xfffffffdu);
    goto L_1030df41;
L_1030df0b: ;
    if ((ecx & 0x20u) == 0u)
    {
        eax = edx >> 3u;
        ecx = rd32(esi + 4u);
        goto L_1030df2a;
    }
    eax = edx >> 3u;
    ecx = rd32(esi + 4u);
    if (eax >= ecx - loc_8)
    {
        ecx = ecx - loc_8;
    }
    else
    {
        ecx = eax;
    }
    wr32(sp0 + 8u, 1u);
    goto L_1030df41;
L_1030df2a: ;
    wr32(esi + 0x18u, COW_IMG(0x103496c4u));
    if (eax >= ecx - loc_8)
    {
        ecx = ecx - loc_8;
    }
    else
    {
        ecx = eax;
    }
    goto L_1030df3a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030dcbd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030dcbd(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
