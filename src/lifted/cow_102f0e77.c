/* f_0x102f0e77 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102f0e77(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u));
    if (rd8(rd32(sp0 + 4u) + 9u) > 8u)
    {
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 9u);
        edx = t1;
        edi = rd32(sp0 + 4u);
        loc_18 = t1;
        goto L_102f0e99;
    }
    ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 9u);
    edx = t1;
    edi = rd32(sp0 + 4u);
    loc_18 = t1;
    if (arg3 != 0u) goto L_102f0eaa;
L_102f0e99: ;
    if ((uint8_t)ecx != 0x10u) goto L_102f11c1;
    if (arg4 == 0u) goto L_102f11c1;
L_102f0eaa: ;
    if (rd8(edi + 8u) == 0u)
    {
        if ((uint8_t)ecx == 2u)
        {
            if (edx == 0u)
            {
                ecx = arg2;
            }
            else
            {
                t24 = ((edx - 1u) >> 2u) + 1u;
                loc_8 = arg2;
                loc_c = t24;
L_102f1083: ;
                t25 = rd8(loc_8) & 0xc0u;
                t26 = rd8(loc_8) & 3u;
                t27 = rd8(loc_8) & 0xcu;
                t28 = rd8(loc_8) & 0x30u;
                t29 = ((rd8(arg3 + ((t27 << 2u | t27) << 2u | (uint32_t)((int32_t)t27 >> 2u) | t27)) & 0xcfu) | rd8(arg3 + (((t26 << 2u | t26) << 2u | t26) << 2u | t26)) >> 2u) >> 2u | (rd8(arg3 + ((uint32_t)((int32_t)((uint32_t)((int32_t)t28 >> 2u) | t28) >> 2u) | t28 << 2u | t28)) & 0xc3u);
                wr8(loc_8, (uint8_t)t29 >> 2u | (rd8(arg3 + ((uint32_t)((int32_t)((uint32_t)((int32_t)((uint32_t)((int32_t)t25 >> 2u) | t25) >> 2u) | t25) >> 2u) | t25)) & 0xc0u));
                if (loc_c != 1u)
                {
                    loc_8 = loc_8 + 1u;
                    loc_c = loc_c - 1u;
                    goto L_102f1083;
                }
                ecx = loc_8;
                edx = loc_18;
                edi = rd32(sp0 + 4u);
            }
        }
        if (rd8(edi + 9u) != 4u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(edi + 9u);
            if ((uint8_t)ecx != 8u)
            {
                if ((uint8_t)ecx == 0x10u)
                {
                    if (edx != 0u)
                    {
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
                        eax = arg2;
                        cf = 0u;
                        of = 0u;
L_102f11a4: ;
                        t36 = rd8(eax);
                        t37 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        t38 = rd8(eax + 1u);
                        wr8(eax, (uint8_t)(t37 >> 8u));
                        wr8(eax + 1u, (uint8_t)t37);
                        if (edx != 1u)
                        {
                            eax = eax + 2u;
                            ecx = (t36 & 0xffff0000u) | t37;
                            cf = (arg5 & 0x1fu) != 0u ? t38 >> (arg5 & 0x1fu) - 1u & 1u : cf;
                            pf = PARITY((uint8_t)(edx - 1u));
                            zf = edx == 1u;
                            sf = (int32_t)(edx - 1u) < 0;
                            of = edx == 0x80000000u;
                            edx = edx - 1u;
                            goto L_102f11a4;
                        }
                        edx = edx - 1u;
                    }
                }
            }
            else
            {
                if (edx != 0u)
                {
                    ecx = arg2;
                    esi = edx;
L_102f1186: ;
                    t34 = rd8(ecx);
                    t35 = rd8(arg3 + rd8(ecx));
                    wr8(ecx, (uint8_t)t35);
                    if (esi != 1u)
                    {
                        ecx = ecx + 1u;
                        esi = esi - 1u;
                        goto L_102f1186;
                    }
                    edx = (t34 & 0xffffff00u) | t35;
                }
            }
        }
        else
        {
            if (edx != 0u)
            {
                esi = arg2;
                edi = ((edx - 1u) >> 1u) + 1u;
L_102f1146: ;
                t30 = rd8(esi) & 0xf0u;
                t31 = rd8(esi) & 0xfu;
                t32 = rd8(arg3 + ((uint32_t)((int32_t)t30 >> 4u) | t30));
                t33 = rd8(arg3 + (t31 << 4u | t31));
                wr8(esi, (uint8_t)((t32 & 0xf0u) | t33 >> 4u));
                if (edi != 1u)
                {
                    esi = esi + 1u;
                    edi = edi - 1u;
                    goto L_102f1146;
                }
                edx = (t30 & 0xffffff00u) | (t32 & 0xf0u) | t33 >> 4u;
            }
        }
    }
    else
    {
        ebx = rd8(edi + 8u);
        if (ebx == 2u)
        {
            if ((uint8_t)ecx != 8u)
            {
                if (edx != 0u)
                {
                    pf = PARITY((uint8_t)edx);
                    zf = edx == 0u;
                    sf = (int32_t)edx < 0;
                    wr32(sp0 + 4u, edx);
                    eax = arg2;
                    cf = 0u;
                    of = 0u;
L_102f100d: ;
                    t17 = rd8(eax);
                    t18 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 1u, (uint8_t)t18);
                    wr8(eax, (uint8_t)(t18 >> 8u));
                    t19 = rd8(eax + 2u);
                    t20 = rd16(rd8(eax + 2u) * 2u + rd32(arg4 + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 3u, (uint8_t)t20);
                    wr8(eax + 2u, (uint8_t)(t20 >> 8u));
                    t21 = rd8(eax + 4u);
                    t22 = rd16(rd8(eax + 4u) * 2u + rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                    t23 = rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u);
                    wr8(eax + 4u, (uint8_t)(t22 >> 8u));
                    wr8(eax + 5u, (uint8_t)t22);
                    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                    if (rd32(sp0 + 4u) != 1u)
                    {
                        ecx = (t21 & 0xffff0000u) | t22;
                        cf = eax + 6u < eax + 4u;
                        eax = eax + 6u;
                        pf = PARITY((uint8_t)(rd32(sp0 + 4u) - 1u));
                        zf = rd32(sp0 + 4u) == 1u;
                        sf = (int32_t)(rd32(sp0 + 4u) - 1u) < 0;
                        of = rd32(sp0 + 4u) == 0x80000000u;
                        goto L_102f100d;
                    }
                    edx = t23;
                }
            }
            else
            {
                if (edx != 0u)
                {
                    ecx = arg2;
                    esi = edx;
L_102f0fd8: ;
                    wr8(ecx, rd8(arg3 + rd8(ecx)));
                    wr8(ecx + 1u, rd8(arg3 + rd8(ecx + 1u)));
                    t15 = rd8(ecx + 2u);
                    t16 = rd8(arg3 + rd8(ecx + 2u));
                    wr8(ecx + 2u, (uint8_t)t16);
                    if (esi != 1u)
                    {
                        ecx = ecx + 3u;
                        esi = esi - 1u;
                        goto L_102f0fd8;
                    }
                    edx = (t15 & 0xffffff00u) | t16;
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
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
                        eax = arg2;
                        cf = 0u;
                        of = 0u;
L_102f0fa4: ;
                        t13 = rd8(eax);
                        t14 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        wr8(eax, (uint8_t)(t14 >> 8u));
                        wr8(eax + 1u, (uint8_t)t14);
                        if (edx != 1u)
                        {
                            ecx = (t13 & 0xffff0000u) | t14;
                            cf = eax + 4u < eax;
                            eax = eax + 4u;
                            pf = PARITY((uint8_t)(edx - 1u));
                            zf = edx == 1u;
                            sf = (int32_t)(edx - 1u) < 0;
                            of = edx == 0x80000000u;
                            edx = edx - 1u;
                            goto L_102f0fa4;
                        }
                        edx = edx - 1u;
                    }
                }
                else
                {
                    if (edx != 0u)
                    {
                        ecx = arg2;
                        esi = edx;
L_102f0f83: ;
                        t11 = rd8(ecx);
                        t12 = rd8(arg3 + rd8(ecx));
                        wr8(ecx, (uint8_t)t12);
                        if (esi != 1u)
                        {
                            ecx = ecx + 2u;
                            esi = esi - 1u;
                            goto L_102f0f83;
                        }
                        edx = (t11 & 0xffffff00u) | t12;
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
                            pf = PARITY((uint8_t)edx);
                            zf = edx == 0u;
                            sf = (int32_t)edx < 0;
                            wr32(sp0 + 4u, edx);
                            eax = arg2;
                            cf = 0u;
                            of = 0u;
L_102f0f1b: ;
                            t4 = rd8(eax);
                            t5 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 1u, (uint8_t)t5);
                            wr8(eax, (uint8_t)(t5 >> 8u));
                            t6 = rd8(eax + 2u);
                            t7 = rd16(rd8(eax + 2u) * 2u + rd32(arg4 + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 3u, (uint8_t)t7);
                            wr8(eax + 2u, (uint8_t)(t7 >> 8u));
                            t8 = rd8(eax + 4u);
                            t9 = rd16(rd8(eax + 4u) * 2u + rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                            t10 = rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u);
                            wr8(eax + 4u, (uint8_t)(t9 >> 8u));
                            wr8(eax + 5u, (uint8_t)t9);
                            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                            if (rd32(sp0 + 4u) != 1u)
                            {
                                ecx = (t8 & 0xffff0000u) | t9;
                                cf = eax + 8u < eax + 4u;
                                eax = eax + 8u;
                                pf = PARITY((uint8_t)(rd32(sp0 + 4u) - 1u));
                                zf = rd32(sp0 + 4u) == 1u;
                                sf = (int32_t)(rd32(sp0 + 4u) - 1u) < 0;
                                of = rd32(sp0 + 4u) == 0x80000000u;
                                goto L_102f0f1b;
                            }
                            edx = t10;
                        }
                    }
                    else
                    {
                        if (edx != 0u)
                        {
                            ecx = arg2;
                            esi = edx;
L_102f0ee5: ;
                            wr8(ecx, rd8(arg3 + rd8(ecx)));
                            wr8(ecx + 1u, rd8(arg3 + rd8(ecx + 1u)));
                            t2 = rd8(ecx + 2u);
                            t3 = rd8(arg3 + rd8(ecx + 2u));
                            wr8(ecx + 2u, (uint8_t)t3);
                            if (esi != 1u)
                            {
                                ecx = ecx + 4u;
                                esi = esi - 1u;
                                goto L_102f0ee5;
                            }
                            edx = (t2 & 0xffffff00u) | t3;
                        }
                    }
                }
            }
        }
    }
L_102f11c1: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0e77(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f0e77(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
