/* f_0x102db144 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102db144(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(sp0 + 8u) >= 0x28u)
    {
        if (rd32(rd32(sp0 + 4u)) >= 0x28u)
        {
            ebx = rd32(rd32(sp0 + 4u));
            edi = rd32(sp0 + 4u);
            goto L_102db176;
        }
        edx = in_edx;
L_102db16c: ;
        eax = 0x80004005u;
L_102db853: ;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
L_102db176: ;
    t1 = rd32(edi + 4u);
    if ((int32_t)rd32(edi + 8u) > 0)
    {
        eax = rd32(edi + 8u);
        loc_8 = t1;
    }
    else
    {
        eax = rd32(edi + 8u);
        loc_8 = t1;
        eax = -eax;
    }
    if (rd16(edi + 0xeu) > 8u)
    {
        edx = (in_edx & 0xffff0000u) | rd16(edi + 0xeu);
        loc_c = eax;
        eax = rd32(edi + 0x20u);
    }
    else
    {
        edx = (in_edx & 0xffff0000u) | rd16(edi + 0xeu);
        loc_c = eax;
        eax = rd32(edi + 0x20u);
        if (eax == 0u)
        {
            eax = (eax + 1u) << (edx & 0x1fu);
        }
    }
    t2 = eax * 4u + ebx;
    if (eax * 4u + ebx > rd32(sp0 + 8u)) goto L_102db16c;
    loc_1c = t2;
    if (rd16(edi + 0xcu) != 1u) goto L_102db16c;
    if ((int32_t)rd32(edi + 8u) >= 0) goto L_102db1c3;
    if (rd32(edi + 0x10u) == 0u) goto L_102db1c3;
    eax = rd32(edi + 0x10u);
    if (eax != 3u) goto L_102db16c;
L_102db1c3: ;
    if (rd32(edi + 0x10u) <= 2u) goto L_102db417;
    eax = rd32(edi + 0x10u);
    if (eax != 3u) goto L_102db84e;
    if (ebx >= 0x6cu)
    {
        t3 = rd32(edi + 0x34u);
        t4 = rd32(edi + 0x28u);
        t5 = rd32(edi + 0x2cu);
        t6 = rd32(edi + 0x30u);
        wr32(sp0 + 8u, t3);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    else
    {
        wr32(sp0 + 8u, 0u);
        eax = rd32(ebx + edi);
        ecx = rd32(ebx + edi + 4u);
        edx = rd32(ebx + edi + 8u);
    }
    t7 = rd16(edi + 0xeu);
    t8 = rd16(edi + 0xeu);
    wr32(sp0 + 4u, t7);
    if (t8 == 0x10u) goto L_102db306;
    ebx = t7;
    if (ebx == 0x18u) goto L_102db2cd;
    if (ebx != 0x20u) goto L_102db16c;
    if (edx != 0xffu) goto L_102db261;
    if (ecx != 0xff00u) goto L_102db16c;
    if (eax != 0xff0000u) goto L_102db16c;
    if (rd32(sp0 + 8u) == 0u) goto L_102db441;
    if (rd32(sp0 + 8u) != 0xff000000u) goto L_102db16c;
    wr32(sp0 + 8u, 0x15u);
L_102db45a: ;
    if (rd32(self + 0x40u) == 0u) goto L_102db51c;
    if (rd32(sp0 + 8u) != 0x29u) goto L_102db51c;
    t9 = rd32(edi + 0x20u);
    if (rd32(edi + 0x20u) != 0u)
    {
        ebx = t9;
        loc_20 = t9;
    }
    else
    {
        ebx = t9;
        t10 = (ebx + 1u) << (rd32(sp0 + 4u) & 0x1fu);
        ecx = rd32(sp0 + 4u);
        ebx = t10;
        loc_20 = t10;
    }
    wr32(self + 0x3cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t11 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x400u, in_edi, in_ebx);
    t12 = g->edx;
    wr32(self + 8u, t11);
    if (t11 != 0u) goto L_102db4a4;
    edx = t12;
L_102db49a: ;
    eax = 0x8007000eu;
    goto L_102db853;
L_102db261: ;
    if (edx != 0x3ff00000u) goto L_102db299;
    if (ecx != 0xffc00u) goto L_102db16c;
    if (eax != 0x3ffu) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0xc0000000u) goto L_102db16c;
    wr32(sp0 + 8u, 0x1fu);
    goto L_102db45a;
L_102db299: ;
    if (edx != 0u) goto L_102db16c;
    if (ecx != 0xffff0000u) goto L_102db16c;
    if (eax != 0xffffu) goto L_102db16c;
    if (rd32(sp0 + 8u) != edx) goto L_102db16c;
    wr32(sp0 + 8u, 0x22u);
    goto L_102db45a;
L_102db2cd: ;
    if (edx != 0xffu) goto L_102db16c;
    if (ecx != 0xff00u) goto L_102db16c;
    if (eax != 0xff0000u) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0u) goto L_102db16c;
L_102db2fa: ;
    wr32(sp0 + 8u, 0x14u);
    goto L_102db45a;
L_102db306: ;
    if (edx != 0xffu) goto L_102db338;
    if (ecx != 0xffu) goto L_102db16c;
    if (eax != 0xffu) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0xff00u) goto L_102db16c;
    wr32(sp0 + 8u, 0x33u);
    goto L_102db45a;
L_102db338: ;
    if (edx != 0x1fu) goto L_102db3a0;
    if (ecx != 0x7e0u) goto L_102db366;
    if (eax != 0xf800u) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0u) goto L_102db16c;
    wr32(sp0 + 8u, 0x17u);
    goto L_102db45a;
L_102db366: ;
    if (ecx != 0x3e0u) goto L_102db16c;
    if (eax != 0x7c00u) goto L_102db16c;
    if (rd32(sp0 + 8u) == 0u) goto L_102db44a;
    if (rd32(sp0 + 8u) != 0x8000u) goto L_102db16c;
    wr32(sp0 + 8u, 0x19u);
    goto L_102db45a;
L_102db3a0: ;
    if (edx != 0xfu) goto L_102db3d1;
    if (ecx != 0xf0u) goto L_102db16c;
    if (eax != 0xf00u) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0xf000u) goto L_102db404;
    wr32(sp0 + 8u, 0x1au);
    goto L_102db45a;
L_102db3d1: ;
    if (edx != 3u) goto L_102db16c;
    if (ecx != 0x1cu) goto L_102db16c;
    if (eax != 0xe0u) goto L_102db16c;
    if (rd32(sp0 + 8u) != 0xff00u) goto L_102db16c;
    wr32(sp0 + 8u, 0x1du);
    goto L_102db45a;
L_102db404: ;
    if (rd32(sp0 + 8u) != 0u) goto L_102db16c;
    wr32(sp0 + 8u, 0x1eu);
    goto L_102db45a;
L_102db417: ;
    wr32(sp0 + 4u, (uint16_t)edx);
    if ((uint16_t)edx == 1u)
    {
        ecx = (uint16_t)edx - 1u;
        goto L_102db453;
    }
    ecx = (uint16_t)edx - 1u;
    if (ecx == 3u)
    {
        ecx = ecx - 3u;
        goto L_102db453;
    }
    ecx = ecx - 3u;
    if (ecx == 4u)
    {
        ecx = ecx - 4u;
        goto L_102db453;
    }
    ecx = ecx - 4u;
    if (ecx == 8u)
    {
        ecx = ecx - 8u;
        goto L_102db44a;
    }
    ecx = ecx - 8u;
    if (ecx == 8u)
    {
        ecx = ecx - 8u;
        goto L_102db2fa;
    }
    ecx = ecx - 8u;
    if (ecx != 8u) goto L_102db16c;
    ecx = ecx - 8u;
L_102db441: ;
    wr32(sp0 + 8u, 0x16u);
    goto L_102db45a;
L_102db44a: ;
    wr32(sp0 + 8u, 0x18u);
    goto L_102db45a;
L_102db453: ;
    wr32(sp0 + 8u, 0x29u);
    goto L_102db45a;
L_102db4a4: ;
    t13 = rd32(edi);
    wr32(sp0 + 4u, 0u);
    if (ebx == 0u) goto L_102db4e8;
    eax = edi + t13;
L_102db4b0: ;
    t14 = rd32(sp0 + 4u);
    t15 = rd8(eax + 2u);
    wr8(rd32(self + 8u) + t14 * 4u, (uint8_t)t15);
    t16 = rd8(eax + 1u);
    wr8(t14 * 4u + rd32(self + 8u) + 1u, (uint8_t)t16);
    wr8(t14 * 4u + rd32(self + 8u) + 2u, rd8(eax));
    wr8(t14 * 4u + rd32(self + 8u) + 3u, rd8(t14 * 4u + rd32(self + 8u) + 3u) | 0xffu);
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    if (rd32(sp0 + 4u) < loc_20)
    {
        eax = eax + 4u;
        ebx = loc_20;
        goto L_102db4b0;
    }
    ebx = loc_20;
L_102db4e8: ;
    if (ebx >= 0x100u) goto L_102db51c;
    edx = ebx;
L_102db4f3: ;
    wr8(edx * 4u + rd32(self + 8u), rd8(edx * 4u + rd32(self + 8u)) | 0xffu);
    wr8(edx * 4u + rd32(self + 8u) + 1u, rd8(edx * 4u + rd32(self + 8u) + 1u) | 0xffu);
    wr8(edx * 4u + rd32(self + 8u) + 2u, rd8(edx * 4u + rd32(self + 8u) + 2u) | 0xffu);
    wr8(edx * 4u + rd32(self + 8u) + 3u, rd8(edx * 4u + rd32(self + 8u) + 3u) | 0xffu);
    if (edx + 1u < 0x100u)
    {
        edx = edx + 1u;
        goto L_102db4f3;
    }
L_102db51c: ;
    t17 = rd16(edi + 0xeu);
    if (t17 == 1u)
    {
        edx = loc_8;
        goto L_102db53f;
    }
    eax = t17;
    ecx = t17 - 1u;
    edx = loc_8;
    if (ecx == 3u) goto L_102db538;
    ecx = (eax >> 3u) * edx + 3u;
    eax = (eax >> 3u) * edx;
L_102db54a: ;
    t18 = rd32(sp0 + 8u);
    wr32(self, t18);
    t19 = rd32(self + 0x40u);
    wr32(self + 0xcu, edx);
    t20 = eax + 3u & 0xfffffffcu;
    wr32(self + 0x30u, t20);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x10u, loc_c);
    wr32(self + 0x14u, 1u);
    if (t19 == 0u)
    {
        edx = loc_c;
        goto L_102db592;
    }
    edx = loc_c;
    loc_20 = eax;
    eax = t20;
    loc_10 = ecx & 0xfffffffcu;
    if ((int32_t)rd32(edi + 8u) >= 0) goto L_102db599;
    if (rd16(edi + 0xeu) < 8u) goto L_102db599;
    wr32(self + 0x38u, 0u);
    wr32(self + 4u, edi + loc_1c);
L_102db592: ;
    eax = 0u;
    goto L_102db853;
L_102db538: ;
    ecx = (edx + 1u) >> 1u;
L_102db545: ;
    eax = edx;
    ecx = ecx + 3u;
    goto L_102db54a;
L_102db53f: ;
    ecx = (edx + 7u) >> 3u;
    goto L_102db545;
L_102db599: ;
    wr32(self + 0x38u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, eax * loc_c, in_edi, in_ebx);
    t22 = g->edx;
    wr32(sp0 + 8u, t21);
    wr32(self + 4u, t21);
    if (t21 == 0u)
    {
        edx = t22;
        goto L_102db49a;
    }
    ecx = t21;
    if ((int32_t)rd32(edi + 8u) >= 0)
    {
        eax = rd32(self + 0x30u);
        edx = edi + loc_1c;
        ebx = ecx + (loc_c - 1u) * eax;
        loc_1c = -eax;
    }
    else
    {
        eax = rd32(self + 0x30u);
        edx = edi + loc_1c;
        ebx = ecx;
        loc_1c = eax;
    }
    t23 = eax * loc_c + rd32(sp0 + 8u);
    t24 = rd32(edi + 0x10u);
    t25 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, ebx);
    if (t24 != 2u)
    {
        eax = t24;
        ecx = t25;
        loc_c = t23;
        loc_14 = ebx;
        if (eax != 1u)
        {
            if (rd16(edi + 0xeu) == 1u) goto L_102db7ef;
            edi = (edi & 0xffff0000u) | rd16(edi + 0xeu);
            if ((uint16_t)edi != 4u)
            {
                if (ebx < ecx) goto L_102db592;
L_102db820: ;
                if (ebx >= loc_c) goto L_102db592;
                esi = edx;
                edi = ebx;
                ecx = loc_20 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t33 = rd32(sp0 + 8u);
                ecx = loc_20 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                if (ebx + loc_1c >= t33)
                {
                    edx = edx + loc_10;
                    ebx = ebx + loc_1c;
                    goto L_102db820;
                }
                edx = edx + loc_10;
            }
            else
            {
                if (ebx < ecx) goto L_102db592;
L_102db78c: ;
                if (ebx >= loc_c) goto L_102db592;
                if (loc_8 == 0u) goto L_102db804;
                ecx = 0u;
L_102db79c: ;
                if (!(ecx & 1u))
                {
                    eax = rd8(edx + (ecx >> 1u));
                    eax = eax >> 4u;
                }
                else
                {
                    eax = rd8(edx + (ecx >> 1u));
                    eax = eax & 0xfu;
                }
                wr8(ebx + ecx, (uint8_t)eax);
                if (ecx + 1u < loc_8)
                {
                    ecx = ecx + 1u;
                    goto L_102db79c;
                }
L_102db804: ;
                if (ebx + loc_1c >= rd32(sp0 + 8u))
                {
                    edx = edx + loc_10;
                    ebx = ebx + loc_1c;
                    goto L_102db78c;
                }
                edx = edx + loc_10;
            }
        }
        else
        {
            if (ebx < ecx) goto L_102db592;
L_102db6ce: ;
            if (rd8(edx) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                goto L_102db72f;
            }
            t28 = rd8(edx + 1u);
            if (t28 == 0u)
            {
                eax = t28;
                goto L_102db724;
            }
            eax = t28;
            ecx = t28;
            if (eax == 1u)
            {
                eax = eax - 1u;
                goto L_102db71c;
            }
            eax = eax - 1u;
            if (eax == 1u) goto L_102db706;
            esi = edx + 2u;
            edi = ebx;
            ecx = ecx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ecx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            eax = rd8(edx + 1u) + 1u & 0xfffffffeu;
            ebx = ebx + rd8(edx + 1u);
            edx = edx + (rd8(edx + 1u) + 1u & 0xfffffffeu);
L_102db75a: ;
L_102db75d: ;
            t32 = rd32(sp0 + 8u);
            wr32(sp0 + 4u, ebx);
            if (ebx >= t32)
            {
                edx = edx + 2u;
                goto L_102db6ce;
            }
            edx = edx + 2u;
        }
    }
    else
    {
        eax = t24;
        ecx = t25;
        loc_14 = ebx;
        if (ebx < ecx) goto L_102db592;
L_102db603: ;
        if (rd8(edx) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(edx);
            if ((uint8_t)eax == 0u) goto L_102db6a8;
            ecx = 0u;
L_102db684: ;
            if (!(ecx & 1u))
            {
                eax = rd8(edx + 1u) >> 4u;
            }
            else
            {
                eax = rd8(edx + 1u) & 0xfu;
            }
            wr8(ebx + ecx, (uint8_t)eax);
            if ((int32_t)(ecx + 1u) < (int32_t)rd8(edx))
            {
                ecx = ecx + 1u;
                goto L_102db684;
            }
L_102db6a8: ;
            eax = rd8(edx);
            ebx = ebx + rd8(edx);
        }
        else
        {
            t26 = rd8(edx + 1u);
            if (t26 == 0u)
            {
                eax = t26;
                t27 = loc_14 - rd32(self + 0x30u);
                ebx = t27;
                loc_14 = t27;
            }
            else
            {
                eax = t26;
                ecx = t26;
                if (ecx == 1u)
                {
                    ebx = rd32(sp0 + 8u) - rd32(self + 0x30u);
                }
                else
                {
                    ecx = ecx - 1u;
                    if (ecx == 1u)
                    {
                        eax = edx + 2u;
                        ebx = ebx + rd8(edx + 2u) - rd8(edx + 3u) * rd32(self + 0x30u);
                        edx = edx + 2u;
                    }
                    else
                    {
                        if ((int32_t)eax <= 0) goto L_102db645;
                        ecx = 0u;
L_102db620: ;
                        if (!(ecx & 1u))
                        {
                            eax = rd8(edx + (uint32_t)((int32_t)ecx >> 1u) + 2u);
                            eax = eax >> 4u;
                        }
                        else
                        {
                            eax = rd8(edx + (uint32_t)((int32_t)ecx >> 1u) + 2u);
                            eax = eax & 0xfu;
                        }
                        wr8(ebx + ecx, (uint8_t)eax);
                        if ((int32_t)(ecx + 1u) < (int32_t)rd8(edx + 1u))
                        {
                            ecx = ecx + 1u;
                            goto L_102db620;
                        }
L_102db645: ;
                        eax = (rd8(edx + 1u) >> 1u) + 1u & 0xfffffffeu;
                        ebx = ebx + rd8(edx + 1u);
                        edx = edx + ((rd8(edx + 1u) >> 1u) + 1u & 0xfffffffeu);
                    }
                }
            }
        }
        if (ebx >= rd32(sp0 + 8u))
        {
            edx = edx + 2u;
            goto L_102db603;
        }
        edx = edx + 2u;
    }
    goto L_102db592;
L_102db706: ;
    eax = edx + 2u;
    ebx = ebx + rd8(edx + 2u) - rd8(edx + 3u) * rd32(self + 0x30u);
    edx = edx + 2u;
    goto L_102db75d;
L_102db71c: ;
    ebx = rd32(sp0 + 8u) - rd32(self + 0x30u);
    goto L_102db75d;
L_102db724: ;
    t29 = loc_14 - rd32(self + 0x30u);
    ebx = t29;
    loc_14 = t29;
    goto L_102db75d;
L_102db72f: ;
    t30 = (((ebx & 0xffffff00u) | rd8(edx + 1u)) & 0xffff00ffu) | rd8(edx + 1u) << 8u;
    t31 = rd32(sp0 + 4u);
    edi = ebx;
    eax = t30 << 0x10u | (uint16_t)t30;
    ecx = (uint8_t)eax >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = rd8(edx);
    ebx = t31 + rd8(edx);
    goto L_102db75a;
L_102db7ae: ;
    if (ebx >= loc_c) goto L_102db592;
    wr32(sp0 + 4u, 0u);
    if (loc_8 == 0u) goto L_102db7e9;
L_102db7c1: ;
    t34 = rd32(sp0 + 4u);
    t35 = rd8(sp0 + 4u);
    t36 = rd8(edx + (rd32(sp0 + 4u) >> 3u));
    wr8(ebx + t34, ((7u - (t35 & 7u) & 0x1fu) != 0u ? t36 >> (7u - (t35 & 7u) & 0x1fu) : t36) & 1u);
    wr32(sp0 + 4u, t34 + 1u);
    if (t34 + 1u < loc_8)
    {
        eax = (t34 >> 3u & 0xffffff00u) | (((7u - (t35 & 7u) & 0x1fu) != 0u ? t36 >> (7u - (t35 & 7u) & 0x1fu) : t36) & 1u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(7u - (t35 & 7u));
        goto L_102db7c1;
    }
    eax = (t34 >> 3u & 0xffffff00u) | (((7u - (t35 & 7u) & 0x1fu) != 0u ? t36 >> (7u - (t35 & 7u) & 0x1fu) : t36) & 1u);
    ecx = rd32(sp0 + 8u);
L_102db7e9: ;
    edx = edx + loc_10;
    ebx = ebx + loc_1c;
L_102db7ef: ;
    if (ebx >= ecx) goto L_102db7ae;
    goto L_102db592;
L_102db84e: ;
    eax = 0x80004001u;
    goto L_102db853;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102db144(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102db144(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
