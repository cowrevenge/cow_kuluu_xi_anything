/* f_0x102c69ef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c69ef(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 0x14u) != 0u)
    {
        eax = rd32(sp0 + 0x14u);
        if (eax == 1u)
        {
            if ((uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u) < rd32(rd32(sp0 + 8u) + 4u))
            {
                eax = (uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u);
                ecx = rd32(rd32(sp0 + 8u) + 4u);
                esi = rd32(sp0 + 0xcu) + (uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u);
                ecx = ecx - eax;
                edx = esi - eax;
L_102c6b5a: ;
                t17 = rd8(edx);
                wr8(esi, (uint8_t)(t17 + rd8(esi)));
                if (ecx != 1u)
                {
                    eax = (eax & 0xffffff00u) | t17;
                    ecx = ecx - 1u;
                    edx = edx + 1u;
                    esi = esi + 1u;
                    goto L_102c6b5a;
                }
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                if (rd32(rd32(sp0 + 8u) + 4u) == 0u) goto L_102c6b63;
                eax = rd32(sp0 + 0xcu);
                ecx = 0u;
                esi = rd32(rd32(sp0 + 8u) + 4u);
L_102c6b2a: ;
                wr8(eax, (uint8_t)(rd8(eax) + rd8(ecx + rd32(sp0 + 0x10u))));
                if (ecx + 1u < esi)
                {
                    eax = eax + 1u;
                    ecx = ecx + 1u;
                    goto L_102c6b2a;
                }
            }
            else
            {
                eax = eax - 1u;
                if (eax == 1u)
                {
                    t15 = rd32(sp0 + 0xcu);
                    if ((uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u) == 0u)
                    {
                        ecx = rd32(rd32(sp0 + 8u) + 4u) - (uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u);
                        ebx = t15;
                        esi = t15;
                        edi = rd32(sp0 + 0x10u);
                        goto L_102c6b00;
                    }
                    eax = (uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u);
                    ecx = rd32(rd32(sp0 + 8u) + 4u) - (uint32_t)((int32_t)(rd8(rd32(sp0 + 8u) + 0xbu) + 7u) >> 3u);
                    edx = in_edx;
                    ebx = t15;
                    esi = t15;
                    edi = rd32(sp0 + 0x10u);
L_102c6af5: ;
                    t16 = rd8(edi);
                    wr8(esi, (uint8_t)(rd8(esi) + (t16 >> 1u)));
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        edx = (edx & 0xffffff00u) | t16 >> 1u;
                        esi = esi + 1u;
                        edi = edi + 1u;
                        goto L_102c6af5;
                    }
                    esi = esi + 1u;
                    edi = edi + 1u;
L_102c6b00: ;
                    if (ecx == 0u) goto L_102c6b63;
L_102c6b04: ;
                    wr8(esi, (uint8_t)(rd8(esi) + (uint8_t)(uint32_t)((int32_t)(rd8(ebx) + rd8(edi) - (uint32_t)((int32_t)(rd8(ebx) + rd8(edi)) >> 0x1fu)) >> 1u)));
                    if (ecx != 1u)
                    {
                        ecx = ecx - 1u;
                        ebx = ebx + 1u;
                        esi = esi + 1u;
                        edi = edi + 1u;
                        goto L_102c6b04;
                    }
                }
                else
                {
                    eax = eax - 1u;
                    if (eax == 1u)
                    {
                        t2 = rd32(sp0 + 0xcu);
                        t3 = rd32(sp0 + 8u);
                        t4 = rd32(sp0 + 0x10u);
                        wr32(sp0 + 0x14u, t2);
                        t5 = rd8(t3 + 0xbu);
                        t6 = rd32(t3 + 4u);
                        wr32(sp0 + 0xcu, t2);
                        wr32(sp0 + 0x10u, t4);
                        if ((uint32_t)((int32_t)(t5 + 7u) >> 3u) == 0u)
                        {
                            ecx = t6 - (uint32_t)((int32_t)(t5 + 7u) >> 3u);
                            edi = t4;
                        }
                        else
                        {
                            eax = (uint32_t)((int32_t)(t5 + 7u) >> 3u);
                            ecx = t6 - (uint32_t)((int32_t)(t5 + 7u) >> 3u);
                            edx = t2;
                            edi = t4;
                            esi = eax;
L_102c6a5b: ;
                            t7 = rd8(edi);
                            wr8(edx, (uint8_t)(t7 + rd8(edx)));
                            if (esi != 1u)
                            {
                                eax = (eax & 0xffffff00u) | t7;
                                edx = edx + 1u;
                                esi = esi - 1u;
                                edi = edi + 1u;
                                goto L_102c6a5b;
                            }
                            edx = edx + 1u;
                            edi = edi + 1u;
                            wr32(sp0 + 0x14u, edx);
                        }
                        if (ecx != 0u)
                        {
                            wr32(sp0 + 4u, ecx);
L_102c6a72: ;
                            t8 = rd32(sp0 + 0xcu);
                            t9 = rd32(sp0 + 0x10u);
                            wr32(sp0 + 0xcu, t8 + 1u);
                            t10 = rd8(edi);
                            t11 = rd8(t8);
                            t12 = rd8(t9);
                            wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 1u);
                            if ((int32_t)(t10 - t12) >= 0)
                            {
                                eax = t10 - t12;
                                ecx = t11;
                                edx = t11 - t12;
                                esi = t12;
                                edi = edi + 1u;
                                loc_8 = t10;
                                wr32(sp0 + 8u, eax);
                            }
                            else
                            {
                                eax = t10 - t12;
                                ecx = t11;
                                edx = t11 - t12;
                                esi = t12;
                                edi = edi + 1u;
                                loc_8 = t10;
                                wr32(sp0 + 8u, -eax);
                            }
                            if ((int32_t)edx >= 0)
                            {
                                ebx = edx;
                            }
                            else
                            {
                                ebx = edx;
                                ebx = -ebx;
                            }
                            if ((int32_t)(eax + edx) >= 0)
                            {
                                eax = eax + edx;
                            }
                            else
                            {
                                eax = eax + edx;
                                eax = -eax;
                            }
                            if ((int32_t)rd32(sp0 + 8u) > (int32_t)ebx) goto L_102c6abb;
                            if ((int32_t)rd32(sp0 + 8u) <= (int32_t)eax) goto L_102c6ac4;
L_102c6abb: ;
                            if ((int32_t)ebx <= (int32_t)eax)
                            {
                                ecx = loc_8;
                            }
                            else
                            {
                                ecx = esi;
                            }
L_102c6ac4: ;
                            t13 = rd32(sp0 + 0x14u);
                            wr8(t13, (uint8_t)((uint8_t)ecx + rd8(t13)));
                            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
                            t14 = rd32(sp0 + 4u);
                            wr32(sp0 + 0x14u, t13 + 1u);
                            if (t14 != 1u) goto L_102c6a72;
                        }
                    }
                    else
                    {
                        eax = eax - 1u;
                        t1 = rd32(sp0 + 4u);
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x102bca0au), 2, t1, COW_IMG(0x103c9498u));
                        wr8(rd32(sp0 + 0xcu), 0u);
                    }
                }
            }
        }
    }
L_102c6b63: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c69ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c69ef(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
