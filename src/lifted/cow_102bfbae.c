/* f_0x102bfbae - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102bfbae(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd8(rd32(sp0 + 4u) + 8u) == 3u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        esi = rd32(sp0 + 4u);
        wr32(sp0 + 4u, 0u);
        if ((eax & 2u) == 0u)
        {
            eax = rd32(sp0 + 0xcu);
            edi = rd32(esi);
            edx = rd8(esi + 9u) - rd8(eax + 3u);
            ebx = 1u;
        }
        else
        {
            eax = rd32(sp0 + 0xcu);
            edi = rd32(esi);
            t1 = rd8(esi + 9u);
            wr32(sp0 - 0x24u, 3u);
            t2 = t1 - rd8(eax + 1u);
            wr32(sp0 - 0x10u, t2);
            t3 = rd8(esi + 9u) - rd8(eax + 2u);
            wr32(sp0 - 0xcu, t3);
            edx = t1 - rd8(eax);
            ebx = 3u;
        }
        wr32(sp0 - 0x14u, edx);
        if ((rd8(esi + 8u) & 4u) == 0u)
        {
            loc_14 = edx;
        }
        else
        {
            loc_14 = edx;
            t4 = rd8(esi + 9u) - rd8(eax + 4u);
            wr32(ebx * 4u + sp0 - 0x14u, t4);
            eax = t4;
            edx = loc_14;
            ebx = ebx + 1u;
        }
        if ((int32_t)ebx <= 0) goto L_102bfd24;
        ecx = 0u;
L_102bfc2a: ;
        if ((int32_t)rd32(ecx * 4u + sp0 - 0x14u) > 0)
        {
            eax = ecx * 4u + sp0 - 0x14u;
            wr32(sp0 + 4u, 1u);
        }
        else
        {
            eax = ecx * 4u + sp0 - 0x14u;
            wr32(eax, 0u);
            edx = loc_14;
        }
        if ((int32_t)(ecx + 1u) < (int32_t)ebx)
        {
            ecx = ecx + 1u;
            goto L_102bfc2a;
        }
        if (rd16(sp0 + 4u) != 0u)
        {
            if (rd8(esi + 9u) == 2u)
            {
                if (rd32(esi + 4u) == 0u)
                {
                    eax = rd32(sp0 + 8u);
                    goto L_102bfd24;
                }
                eax = rd32(sp0 + 8u);
                ecx = 0u;
                esi = rd32(esi + 4u);
L_102bfd17: ;
                t16 = rd8(eax);
                wr8(eax, t16 >> 1u & 0x55u);
                if (esi != 1u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | (t16 >> 1u & 0x55u);
                    esi = esi - 1u;
                    goto L_102bfd17;
                }
                eax = eax + 1u;
            }
            else
            {
                eax = rd8(esi + 9u) - 2u;
                if (eax == 2u)
                {
                    pf = PARITY((uint8_t)(eax - 2u));
                    zf = eax == 2u;
                    sf = (int32_t)(eax - 2u) < 0;
                    of = eax - 1u == 0x80000000u;
                    wr32(sp0 - 0x24u, 0xfu);
                    if (rd32(esi + 4u) == 0u)
                    {
                        eax = ((uint32_t)((int32_t)0xf0u >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)(((uint32_t)((int32_t)0xf0u >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)) & 0xf0u) | (uint32_t)((int32_t)0xfu >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)));
                        goto L_102bfd24;
                    }
                    eax = ((uint32_t)((int32_t)0xf0u >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)(((uint32_t)((int32_t)0xf0u >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)) & 0xf0u) | (uint32_t)((int32_t)0xfu >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu)));
                    ecx = edx;
                    ebx = (uint32_t)((int32_t)0xfu >> ((edx & 0x1fu) < 0x20u ? edx & 0x1fu : 0x1fu));
                    edi = rd32(sp0 + 8u);
                    pf = PARITY((uint8_t)rd32(esi + 4u));
                    zf = rd32(esi + 4u) == 0u;
                    sf = (int32_t)rd32(esi + 4u) < 0;
                    esi = rd32(esi + 4u);
                    of = 0u;
L_102bfcfd: ;
                    t15 = rd8(edi);
                    wr8(edi, (uint8_t)((edx & 0x1fu) != 0u ? t15 >> (edx & 0x1fu) : t15) & (uint8_t)eax);
                    if (esi != 1u)
                    {
                        ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
                        ebx = (ebx & 0xffffff00u) | ((uint8_t)((edx & 0x1fu) != 0u ? t15 >> (edx & 0x1fu) : t15) & (uint8_t)eax);
                        edi = edi + 1u;
                        pf = PARITY((uint8_t)(esi - 1u));
                        zf = esi == 1u;
                        sf = (int32_t)(esi - 1u) < 0;
                        of = esi == 0x80000000u;
                        esi = esi - 1u;
                        goto L_102bfcfd;
                    }
                }
                else
                {
                    eax = eax - 2u;
                    if (eax == 4u)
                    {
                        eax = eax - 4u;
                        t11 = rd32(sp0 + 8u);
                        wr32(sp0 + 8u, edi * ebx);
                        if (rd32(sp0 + 8u) == 0u) goto L_102bfd24;
                        ecx = 0u;
                        esi = t11;
                        edi = 0u;
L_102bfccc: ;
                        t12 = cow_divu(g, edi, ebx);
                        t13 = cow_modu(g, edi, ebx);
                        t14 = rd8(sp0 + t13 * 4u - 0x14u);
                        wr8(esi, (uint8_t)((t14 & 0x1fu) != 0u ? rd8(esi) >> (t14 & 0x1fu) : rd8(esi)));
                        if (edi + 1u < rd32(sp0 + 8u))
                        {
                            ecx = (ecx & 0xffffff00u) | t14;
                            esi = esi + 1u;
                            edi = edi + 1u;
                            goto L_102bfccc;
                        }
                        eax = t12;
                    }
                    else
                    {
                        eax = eax - 4u;
                        if (eax != 8u)
                        {
                            eax = eax - 8u;
                        }
                        else
                        {
                            eax = eax - 8u;
                            t5 = rd32(sp0 + 8u);
                            wr32(sp0 + 0xcu, edi * ebx);
                            wr32(sp0 + 8u, 0u);
                            if (edi * ebx == 0u) goto L_102bfd24;
                            ecx = 0u;
                            esi = t5;
L_102bfc85: ;
                            t6 = cow_divu(g, rd32(sp0 + 8u), ebx);
                            t7 = cow_modu(g, rd32(sp0 + 8u), ebx);
                            t8 = (rd16(sp0 + t7 * 4u - 0x14u) & 0x1fu) != 0u ? (uint16_t)(((t6 & 0xffff0000u) | rd8(esi)) * 0x100u + ((ecx & 0xffff0000u) | rd8(esi + 1u))) >> (rd16(sp0 + t7 * 4u - 0x14u) & 0x1fu) : (uint16_t)(((t6 & 0xffff0000u) | rd8(esi)) * 0x100u + ((ecx & 0xffff0000u) | rd8(esi + 1u)));
                            t9 = rd8(esi);
                            t10 = rd8(esi + 1u);
                            wr8(esi, (uint8_t)(t8 >> 8u));
                            wr8(esi + 1u, (uint8_t)t8);
                            wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
                            if (rd32(sp0 + 8u) < rd32(sp0 + 0xcu))
                            {
                                ecx = (uint8_t)(t8 >> 8u);
                                esi = esi + 2u;
                                goto L_102bfc85;
                            }
                            eax = rd32(sp0 + 8u);
                        }
                    }
                }
            }
        }
    }
L_102bfd24: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bfbae(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102bfbae(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
