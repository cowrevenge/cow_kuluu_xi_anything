/* f_0x102c1a72 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c1a72(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(rd32(sp0 + 4u) + 8u) == 3u)
    {
        eax = rd32(rd32(sp0 + 4u));
        esi = rd32(sp0 + 4u);
        if (rd8(esi + 9u) >= 8u)
        {
            edi = rd32(sp0 + 8u);
        }
        else
        {
            ecx = (self & 0xffffff00u) | rd8(esi + 9u);
            edi = rd32(sp0 + 8u);
            if ((uint8_t)ecx == 1u)
            {
                t7 = eax + edi - 1u;
                wr32(sp0 + 8u, t7);
                t8 = 7u - (eax - 1u & 7u);
                wr32(sp0 + 4u, t8);
                if (eax != 0u)
                {
                    ecx = t8;
                    edx = edi + ((eax - 1u) >> 3u);
                    ebx = eax - 1u & 7u;
                    pf = PARITY((uint8_t)eax);
                    zf = eax == 0u;
                    sf = (int32_t)eax < 0;
                    cf = 0u;
                    of = 0u;
                    loc_8 = eax;
L_102c1b6e: ;
                    t9 = rd8(edx);
                    wr8(rd32(sp0 + 8u), ((ecx & 0x1fu) != 0u ? t9 >> (ecx & 0x1fu) : t9) & 1u);
                    if (rd32(sp0 + 4u) != 7u)
                    {
                        ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t9 >> (ecx & 0x1fu) : t9) & 1u);
                        ecx = rd32(sp0 + 4u);
                        cf = rd32(sp0 + 4u) < 7u;
                        ecx = ecx + 1u;
                    }
                    else
                    {
                        ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t9 >> (ecx & 0x1fu) : t9) & 1u);
                        ecx = 0u;
                        edx = edx - 1u;
                        cf = 0u;
                    }
                    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                    wr32(sp0 + 4u, ecx);
                    if (loc_8 != 1u)
                    {
                        pf = PARITY((uint8_t)(loc_8 - 1u));
                        zf = loc_8 == 1u;
                        sf = (int32_t)(loc_8 - 1u) < 0;
                        of = loc_8 == 0x80000000u;
                        loc_8 = loc_8 - 1u;
                        goto L_102c1b6e;
                    }
                }
            }
            else
            {
                ecx = (uint8_t)ecx - 1u;
                if (ecx == 1u)
                {
                    t4 = eax + edi - 1u;
                    wr32(sp0 + 8u, t4);
                    t5 = -((eax - 1u & 3u) * 2u) + 6u;
                    wr32(sp0 + 4u, t5);
                    if (eax != 0u)
                    {
                        ecx = t5;
                        edx = edi + ((eax - 1u) >> 2u);
                        ebx = eax - 1u & 3u;
                        pf = PARITY((uint8_t)eax);
                        zf = eax == 0u;
                        sf = (int32_t)eax < 0;
                        cf = 0u;
                        of = 0u;
                        loc_8 = eax;
L_102c1b22: ;
                        t6 = rd8(edx);
                        wr8(rd32(sp0 + 8u), ((ecx & 0x1fu) != 0u ? t6 >> (ecx & 0x1fu) : t6) & 3u);
                        if (rd32(sp0 + 4u) != 6u)
                        {
                            ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t6 >> (ecx & 0x1fu) : t6) & 3u);
                            ecx = rd32(sp0 + 4u);
                            cf = rd32(sp0 + 4u) < 6u;
                            ecx = ecx + 2u;
                        }
                        else
                        {
                            ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t6 >> (ecx & 0x1fu) : t6) & 3u);
                            ecx = 0u;
                            edx = edx - 1u;
                            cf = 0u;
                        }
                        wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                        wr32(sp0 + 4u, ecx);
                        if (loc_8 != 1u)
                        {
                            pf = PARITY((uint8_t)(loc_8 - 1u));
                            zf = loc_8 == 1u;
                            sf = (int32_t)(loc_8 - 1u) < 0;
                            of = loc_8 == 0x80000000u;
                            loc_8 = loc_8 - 1u;
                            goto L_102c1b22;
                        }
                    }
                }
                else
                {
                    ecx = ecx - 1u;
                    if (ecx == 2u)
                    {
                        t1 = eax + edi - 1u;
                        wr32(sp0 + 8u, t1);
                        t2 = (eax & 1u) << 2u;
                        wr32(sp0 + 4u, t2);
                        if (eax != 0u)
                        {
                            ecx = t2;
                            edx = edi + ((eax - 1u) >> 1u);
                            pf = PARITY((uint8_t)eax);
                            zf = eax == 0u;
                            sf = (int32_t)eax < 0;
                            ebx = in_ebx;
                            cf = 0u;
                            of = 0u;
                            loc_8 = eax;
L_102c1ad0: ;
                            t3 = rd8(edx);
                            wr8(rd32(sp0 + 8u), ((ecx & 0x1fu) != 0u ? t3 >> (ecx & 0x1fu) : t3) & 0xfu);
                            if (rd32(sp0 + 4u) != 4u)
                            {
                                ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t3 >> (ecx & 0x1fu) : t3) & 0xfu);
                                ecx = rd32(sp0 + 4u);
                                cf = ecx + 4u < ecx;
                                ecx = ecx + 4u;
                            }
                            else
                            {
                                ebx = (ebx & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? t3 >> (ecx & 0x1fu) : t3) & 0xfu);
                                ecx = 0u;
                                edx = edx - 1u;
                                cf = 0u;
                            }
                            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
                            wr32(sp0 + 4u, ecx);
                            if (loc_8 != 1u)
                            {
                                pf = PARITY((uint8_t)(loc_8 - 1u));
                                zf = loc_8 == 1u;
                                sf = (int32_t)(loc_8 - 1u) < 0;
                                of = loc_8 == 0x80000000u;
                                loc_8 = loc_8 - 1u;
                                goto L_102c1ad0;
                            }
                        }
                    }
                }
            }
            wr8(esi + 9u, 8u);
            wr8(esi + 0xbu, 8u);
            wr32(esi + 4u, eax);
        }
        if (rd8(esi + 9u) == 8u)
        {
            if (rd32(sp0 + 0x10u) == 0u)
            {
                edx = eax + edi - 1u;
                wr32(sp0 + 4u, eax * 3u);
                if (eax == 0u)
                {
                    ebx = eax * 3u;
                }
                else
                {
                    ecx = eax * 3u + edi - 1u;
                    wr32(sp0 + 0x10u, eax);
L_102c1c32: ;
                    wr8(ecx, rd8(arg3 + rd8(edx) * 3u + 2u));
                    wr8(ecx - 1u, rd8(arg3 + rd8(edx) * 3u + 1u));
                    wr8(ecx - 2u, rd8(arg3 + rd8(edx) * 3u));
                    wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) - 1u);
                    if (rd32(sp0 + 0x10u) != 1u)
                    {
                        ecx = ecx - 3u;
                        edx = edx - 1u;
                        goto L_102c1c32;
                    }
                    ebx = rd32(sp0 + 4u);
                }
                wr8(esi + 0xbu, 0x18u);
                wr8(esi + 8u, 2u);
                wr8(esi + 0xau, 3u);
            }
            else
            {
                edx = eax + edi - 1u;
                wr32(sp0 + 8u, eax << 2u);
                if (eax == 0u)
                {
                    ebx = eax << 2u;
                }
                else
                {
                    ecx = eax * 4u + edi - 1u;
                    wr32(sp0 + 4u, eax);
L_102c1bc8: ;
                    if ((int32_t)rd8(edx) < (int32_t)arg5)
                    {
                        wr8(ecx, rd8(rd8(edx) + rd32(sp0 + 0x10u)));
                    }
                    else
                    {
                        wr8(ecx, rd8(ecx) | 0xffu);
                    }
                    wr8(ecx - 1u, rd8(arg3 + rd8(edx) * 3u + 2u));
                    wr8(ecx - 2u, rd8(arg3 + rd8(edx) * 3u + 1u));
                    wr8(ecx - 3u, rd8(arg3 + rd8(edx) * 3u));
                    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                    if (rd32(sp0 + 4u) != 1u)
                    {
                        ecx = ecx - 4u;
                        edx = edx - 1u;
                        goto L_102c1bc8;
                    }
                    ebx = rd32(sp0 + 8u);
                }
                wr8(esi + 0xbu, 0x20u);
                wr8(esi + 8u, 6u);
                wr8(esi + 0xau, 4u);
            }
            wr8(esi + 9u, 8u);
            wr32(esi + 4u, ebx);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1a72(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c1a72(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
