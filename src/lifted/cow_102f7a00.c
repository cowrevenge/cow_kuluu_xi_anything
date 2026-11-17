/* f_0x102f7a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f7a00(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(sp0 + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(sp0 + 8u);
        wr32(sp0 - 0x20u, in_edi);
        if (arg1 == 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x24u, in_ebx);
            wr32(sp0 - 0x28u, in_esi);
            t1 = rd32(COW_IMG(0x10348928u) + arg3 * 4u);
            wr32(sp0 - 0x10u, t1);
            t2 = rd8(arg1 + 0xbu);
            if (t2 == 1u)
            {
                eax = rd32(arg1);
                edx = rd32(arg1) * rd32(COW_IMG(0x10348928u) + arg3 * 4u);
                loc_10 = t1;
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x2cu, 7u);
                t11 = 7u - (eax - 1u & 7u);
                wr32(sp0 - 0xcu, t11);
                wr32(sp0 - 0x2cu, 7u);
                t12 = 7u - (edx - 1u & 7u);
                wr32(sp0 - 8u, t12);
                if (eax == 0u) goto L_102f7caf;
                esi = ecx + ((edx - 1u) >> 3u);
                edi = ecx + ((eax - 1u) >> 3u);
                ecx = t12;
                cf = 0u;
                pf = PARITY((uint8_t)eax);
                zf = eax == 0u;
                sf = (int32_t)eax < 0;
                of = 0u;
                loc_14 = 0u;
                loc_c = t11;
                loc_8 = t12;
L_102f7c4b: ;
                t13 = rd8(edi);
                wr8(sp0 + 0xbu, ((loc_c & 0x1fu) != 0u ? t13 >> (loc_c & 0x1fu) : t13) & 1u);
                if ((int32_t)loc_10 > 0)
                {
                    eax = (eax & 0xffffff00u) | (((loc_c & 0x1fu) != 0u ? t13 >> (loc_c & 0x1fu) : t13) & 1u);
                    ecx = loc_10;
                    wr32(sp0 - 0x18u, ecx);
                    loc_18 = ecx;
L_102f7c66: ;
                    wr32(sp0 - 0x2cu, 7u);
                    wr8(esi, (uint8_t)(((uint8_t)(uint32_t)((int32_t)0x7f7fu >> ((7u - loc_8 & 0x1fu) < 0x20u ? 7u - loc_8 & 0x1fu : 0x1fu)) & rd8(esi)) | ((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax)));
                    if (loc_8 != 7u)
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                        wr32(sp0 - 8u, loc_8 + 1u);
                        loc_8 = loc_8 + 1u;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                        wr32(sp0 - 8u, 0u);
                        esi = esi - 1u;
                        loc_8 = 0u;
                    }
                    wr32(sp0 - 0x18u, loc_18 - 1u);
                    if (loc_18 != 1u)
                    {
                        loc_18 = loc_18 - 1u;
                        goto L_102f7c63;
                    }
                }
                if (loc_c != 7u)
                {
                    wr32(sp0 - 0xcu, loc_c + 1u);
                    loc_c = loc_c + 1u;
                }
                else
                {
                    wr32(sp0 - 0xcu, 0u);
                    edi = edi - 1u;
                    loc_c = 0u;
                }
                wr32(sp0 - 0x14u, loc_14 + 1u);
                if (loc_14 + 1u < rd32(arg1))
                {
                    eax = arg1;
                    ecx = loc_14 + 1u;
                    cf = loc_14 + 1u < rd32(arg1);
                    pf = PARITY((uint8_t)(loc_14 + 1u - rd32(arg1)));
                    zf = loc_14 + 1u == rd32(arg1);
                    sf = (int32_t)(loc_14 + 1u - rd32(arg1)) < 0;
                    of = ((loc_14 + 1u ^ rd32(arg1)) & (loc_14 + 1u ^ loc_14 + 1u - rd32(arg1))) >> 0x1fu;
                    loc_14 = loc_14 + 1u;
                    goto L_102f7c4b;
                }
            }
            else
            {
                eax = rd32(arg1);
                edx = rd32(arg1) * rd32(COW_IMG(0x10348928u) + arg3 * 4u);
                esi = t2;
                edi = t2 - 1u;
                loc_10 = t1;
                if (edi == 1u)
                {
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x2cu, 3u);
                    t8 = -((eax - 1u & 3u) * 2u) + 6u;
                    wr32(sp0 - 0xcu, t8);
                    wr32(sp0 - 0x2cu, 3u);
                    t9 = -((edx - 1u & 3u) * 2u) + 6u;
                    wr32(sp0 - 8u, t9);
                    if (eax == 0u) goto L_102f7caf;
                    esi = ecx + ((edx - 1u) >> 2u);
                    edi = ecx + ((eax - 1u) >> 2u);
                    ecx = t9;
                    cf = 0u;
                    pf = PARITY((uint8_t)eax);
                    zf = eax == 0u;
                    sf = (int32_t)eax < 0;
                    of = 0u;
                    loc_14 = 0u;
                    loc_c = t8;
                    loc_8 = t9;
L_102f7bac: ;
                    t10 = rd8(edi);
                    wr8(sp0 + 0xbu, ((loc_c & 0x1fu) != 0u ? t10 >> (loc_c & 0x1fu) : t10) & 3u);
                    if ((int32_t)loc_10 > 0)
                    {
                        eax = (eax & 0xffffff00u) | (((loc_c & 0x1fu) != 0u ? t10 >> (loc_c & 0x1fu) : t10) & 3u);
                        ecx = loc_10;
                        wr32(sp0 - 0x18u, ecx);
                        loc_18 = ecx;
L_102f7bc7: ;
                        wr32(sp0 - 0x2cu, 6u);
                        wr8(esi, (uint8_t)(((uint8_t)(uint32_t)((int32_t)0x3f3fu >> ((6u - loc_8 & 0x1fu) < 0x20u ? 6u - loc_8 & 0x1fu : 0x1fu)) & rd8(esi)) | ((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax)));
                        if (loc_8 != 6u)
                        {
                            eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                            wr32(sp0 - 8u, loc_8 + 2u);
                            loc_8 = loc_8 + 2u;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                            wr32(sp0 - 8u, 0u);
                            esi = esi - 1u;
                            loc_8 = 0u;
                        }
                        wr32(sp0 - 0x18u, loc_18 - 1u);
                        if (loc_18 != 1u)
                        {
                            loc_18 = loc_18 - 1u;
                            goto L_102f7bc4;
                        }
                    }
                    if (loc_c != 6u)
                    {
                        wr32(sp0 - 0xcu, loc_c + 2u);
                        loc_c = loc_c + 2u;
                    }
                    else
                    {
                        wr32(sp0 - 0xcu, 0u);
                        edi = edi - 1u;
                        loc_c = 0u;
                    }
                    wr32(sp0 - 0x14u, loc_14 + 1u);
                    if (loc_14 + 1u < rd32(arg1))
                    {
                        eax = arg1;
                        ecx = loc_14 + 1u;
                        cf = loc_14 + 1u < rd32(arg1);
                        pf = PARITY((uint8_t)(loc_14 + 1u - rd32(arg1)));
                        zf = loc_14 + 1u == rd32(arg1);
                        sf = (int32_t)(loc_14 + 1u - rd32(arg1)) < 0;
                        of = ((loc_14 + 1u ^ rd32(arg1)) & (loc_14 + 1u ^ loc_14 + 1u - rd32(arg1))) >> 0x1fu;
                        loc_14 = loc_14 + 1u;
                        goto L_102f7bac;
                    }
                }
                else
                {
                    edi = edi - 1u;
                    if (edi == 2u)
                    {
                        wr32(sp0 - 0x14u, 0u);
                        t5 = (eax - 1u & 1u) << 2u;
                        wr32(sp0 - 0x2cu, 4u);
                        wr32(sp0 - 0xcu, 4u - t5);
                        t6 = (edx - 1u & 1u) << 2u;
                        wr32(sp0 - 0x2cu, 4u);
                        wr32(sp0 - 8u, 4u - t6);
                        if (eax == 0u) goto L_102f7caf;
                        esi = ecx + ((edx - 1u) >> 1u);
                        edi = ecx + ((eax - 1u) >> 1u);
                        ecx = 4u - t6;
                        cf = 0u;
                        pf = PARITY((uint8_t)eax);
                        zf = eax == 0u;
                        sf = (int32_t)eax < 0;
                        of = 0u;
                        loc_14 = 0u;
                        loc_c = 4u - t5;
                        loc_8 = 4u - t6;
L_102f7b05: ;
                        t7 = rd8(edi);
                        wr8(sp0 + 0xbu, ((loc_c & 0x1fu) != 0u ? t7 >> (loc_c & 0x1fu) : t7) & 0xfu);
                        if ((int32_t)loc_10 > 0)
                        {
                            eax = (eax & 0xffffff00u) | (((loc_c & 0x1fu) != 0u ? t7 >> (loc_c & 0x1fu) : t7) & 0xfu);
                            ecx = loc_10;
                            wr32(sp0 - 0x18u, ecx);
                            loc_18 = ecx;
L_102f7b20: ;
                            wr32(sp0 - 0x2cu, 4u);
                            wr8(esi, (uint8_t)(((uint8_t)(uint32_t)((int32_t)0xf0fu >> ((4u - loc_8 & 0x1fu) < 0x20u ? 4u - loc_8 & 0x1fu : 0x1fu)) & rd8(esi)) | ((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax)));
                            if (loc_8 != 4u)
                            {
                                eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                                wr32(sp0 - 8u, loc_8 + 4u);
                                loc_8 = loc_8 + 4u;
                            }
                            else
                            {
                                eax = (eax & 0xffffff00u) | (uint8_t)((loc_8 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (loc_8 & 0x1fu)) : (uint8_t)eax);
                                wr32(sp0 - 8u, 0u);
                                esi = esi - 1u;
                                loc_8 = 0u;
                            }
                            wr32(sp0 - 0x18u, loc_18 - 1u);
                            if (loc_18 != 1u)
                            {
                                loc_18 = loc_18 - 1u;
                                goto L_102f7b1d;
                            }
                        }
                        if (loc_c != 4u)
                        {
                            wr32(sp0 - 0xcu, loc_c + 4u);
                            loc_c = loc_c + 4u;
                        }
                        else
                        {
                            wr32(sp0 - 0xcu, 0u);
                            edi = edi - 1u;
                            loc_c = 0u;
                        }
                        wr32(sp0 - 0x14u, loc_14 + 1u);
                        if (loc_14 + 1u < rd32(arg1))
                        {
                            eax = arg1;
                            ecx = loc_14 + 1u;
                            cf = loc_14 + 1u < rd32(arg1);
                            pf = PARITY((uint8_t)(loc_14 + 1u - rd32(arg1)));
                            zf = loc_14 + 1u == rd32(arg1);
                            sf = (int32_t)(loc_14 + 1u - rd32(arg1)) < 0;
                            of = ((loc_14 + 1u ^ rd32(arg1)) & (loc_14 + 1u ^ loc_14 + 1u - rd32(arg1))) >> 0x1fu;
                            loc_14 = loc_14 + 1u;
                            goto L_102f7b05;
                        }
                    }
                    else
                    {
                        wr32(sp0 - 8u, 0u);
                        wr32(sp0 - 0xcu, esi >> 3u);
                        t3 = rd32(sp0 + 8u) + (edx - 1u) * (esi >> 3u);
                        wr32(sp0 + 8u, t3);
                        if (eax == 0u) goto L_102f7caf;
                        ebx = ecx + (eax - 1u) * (esi >> 3u);
                        loc_8 = 0u;
                        loc_c = esi >> 3u;
L_102f7a71: ;
                        esi = ebx;
                        edi = sp0 - 0x1cu;
                        ecx = loc_c >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = loc_c & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        if ((int32_t)loc_10 > 0)
                        {
                            eax = loc_10;
                            wr32(sp0 - 0x14u, eax);
                            loc_14 = eax;
L_102f7a91: ;
                            t4 = rd32(sp0 + 8u);
                            wr32(sp0 + 8u, t4 - loc_c);
                            esi = sp0 - 0x1cu;
                            edi = t4;
                            ecx = loc_c >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            wr32(sp0 - 0x14u, loc_14 - 1u);
                            ecx = loc_c & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            if (loc_14 != 1u)
                            {
                                loc_14 = loc_14 - 1u;
                                goto L_102f7a91;
                            }
                        }
                        wr32(sp0 - 8u, loc_8 + 1u);
                        if (loc_8 + 1u < rd32(arg1))
                        {
                            ebx = ebx - loc_c;
                            loc_8 = loc_8 + 1u;
                            goto L_102f7a71;
                        }
                    }
                }
            }
L_102f7caf: ;
            t14 = rd8(arg1 + 0xbu);
            wr32(arg1, edx);
            t15 = (t14 * edx + 7u) >> 3u;
            wr32(arg1 + 4u, t15);
        }
    }
    g->edx = edx;
    return;
L_102f7b1d: ;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xbu);
    goto L_102f7b20;
L_102f7bc4: ;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xbu);
    goto L_102f7bc7;
L_102f7c63: ;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xbu);
    goto L_102f7c66;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f7a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f7a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
