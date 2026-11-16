/* f_0x102f7cc9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102f7cc9(Guest* g)
{
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
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 0x14u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x14u);
        if (eax == 1u)
        {
            if ((uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u) >= rd32(arg2 + 4u))
            {
                edx = arg3;
            }
            else
            {
                eax = (uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u);
                ecx = rd32(arg2 + 4u);
                esi = arg3 + (uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u);
                ecx = ecx - eax;
                edx = esi - eax;
L_102f7e36: ;
                t12 = rd8(edx);
                wr8(esi, (uint8_t)(t12 + rd8(esi)));
                if (ecx != 1u)
                {
                    eax = (eax & 0xffffff00u) | t12;
                    ecx = ecx - 1u;
                    edx = edx + 1u;
                    esi = esi + 1u;
                    goto L_102f7e36;
                }
                edx = edx + 1u;
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                if (rd32(arg2 + 4u) == 0u)
                {
                    edx = in_edx;
                    goto L_102f7e3f;
                }
                eax = arg3;
                ecx = 0u;
                esi = rd32(arg2 + 4u);
L_102f7e06: ;
                t11 = rd8(arg4 + ecx);
                wr8(eax, (uint8_t)(rd8(eax) + t11));
                if (ecx + 1u < esi)
                {
                    eax = eax + 1u;
                    ecx = ecx + 1u;
                    goto L_102f7e06;
                }
                edx = (arg4 & 0xffffff00u) | t11;
            }
            else
            {
                eax = eax - 1u;
                if (eax == 1u)
                {
                    if ((uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u) == 0u)
                    {
                        ecx = rd32(arg2 + 4u) - (uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u);
                        edx = in_edx;
                        esi = arg3;
                        edi = arg4;
                        goto L_102f7ddc;
                    }
                    eax = (uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u);
                    ecx = rd32(arg2 + 4u) - (uint32_t)((int32_t)(rd8(arg2 + 0xbu) + 7u) >> 3u);
                    edx = in_edx;
                    esi = arg3;
                    edi = arg4;
L_102f7dd1: ;
                    t8 = rd8(edi);
                    wr8(esi, (uint8_t)(rd8(esi) + (t8 >> 1u)));
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        edx = (edx & 0xffffff00u) | t8 >> 1u;
                        esi = esi + 1u;
                        edi = edi + 1u;
                        goto L_102f7dd1;
                    }
                    edx = (edx & 0xffffff00u) | t8 >> 1u;
                    esi = esi + 1u;
                    edi = edi + 1u;
L_102f7ddc: ;
                    if (ecx == 0u) goto L_102f7e3f;
                    ebx = arg3;
L_102f7de0: ;
                    t9 = rd8(ebx);
                    t10 = rd8(edi);
                    wr8(esi, (uint8_t)(rd8(esi) + (uint8_t)(uint32_t)((int32_t)(t9 + t10 - (uint32_t)((int32_t)(t9 + t10) >> 0x1fu)) >> 1u)));
                    if (ecx != 1u)
                    {
                        ecx = ecx - 1u;
                        ebx = ebx + 1u;
                        esi = esi + 1u;
                        edi = edi + 1u;
                        goto L_102f7de0;
                    }
                    edx = (uint32_t)((int32_t)(t9 + t10) >> 0x1fu);
                }
                else
                {
                    eax = eax - 1u;
                    if (eax == 1u)
                    {
                        t2 = rd8(arg2 + 0xbu);
                        t3 = rd32(arg2 + 4u);
                        wr32(sp0 + 0x14u, arg3);
                        if ((uint32_t)((int32_t)(t2 + 7u) >> 3u) == 0u)
                        {
                            ecx = t3 - (uint32_t)((int32_t)(t2 + 7u) >> 3u);
                            edx = arg3;
                            edi = arg4;
                            loc_10 = arg3;
                        }
                        else
                        {
                            eax = (uint32_t)((int32_t)(t2 + 7u) >> 3u);
                            ecx = t3 - (uint32_t)((int32_t)(t2 + 7u) >> 3u);
                            edx = arg3;
                            esi = eax;
                            edi = arg4;
L_102f7d37: ;
                            t4 = rd8(edi);
                            wr8(edx, (uint8_t)(t4 + rd8(edx)));
                            if (esi != 1u)
                            {
                                eax = (eax & 0xffffff00u) | t4;
                                edx = edx + 1u;
                                esi = esi - 1u;
                                edi = edi + 1u;
                                goto L_102f7d37;
                            }
                            edx = edx + 1u;
                            edi = edi + 1u;
                            loc_10 = edx;
                        }
                        if (ecx != 0u)
                        {
                            loc_8 = arg4;
                            loc_14 = ecx;
L_102f7d4e: ;
                            t5 = rd8(edi);
                            t6 = rd8(rd32(sp0 + 0x14u));
                            t7 = rd8(loc_8);
                            wr32(sp0 + 0x14u, rd32(sp0 + 0x14u) + 1u);
                            if ((int32_t)(t5 - t7) >= 0)
                            {
                                eax = t5 - t7;
                                ecx = t6;
                                edx = t6 - t7;
                                esi = t7;
                                edi = edi + 1u;
                                loc_8 = loc_8 + 1u;
                                loc_18 = t5;
                                loc_c = eax;
                            }
                            else
                            {
                                eax = t5 - t7;
                                ecx = t6;
                                edx = t6 - t7;
                                esi = t7;
                                edi = edi + 1u;
                                loc_8 = loc_8 + 1u;
                                loc_18 = t5;
                                loc_c = -eax;
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
                            if ((int32_t)loc_c > (int32_t)ebx) goto L_102f7d97;
                            if ((int32_t)loc_c <= (int32_t)eax) goto L_102f7da0;
L_102f7d97: ;
                            if ((int32_t)ebx <= (int32_t)eax)
                            {
                                ecx = loc_18;
                            }
                            else
                            {
                                ecx = esi;
                            }
L_102f7da0: ;
                            wr8(loc_10, (uint8_t)(rd8(loc_10) + (uint8_t)ecx));
                            if (loc_14 != 1u)
                            {
                                loc_10 = loc_10 + 1u;
                                loc_14 = loc_14 - 1u;
                                goto L_102f7d4e;
                            }
                        }
                    }
                    else
                    {
                        eax = eax - 1u;
                        g->esp = sp0 - 0x24u;
                        cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348998u));
                        t1 = g->edx;
                        wr8(arg3, 0u);
                        edx = t1;
                    }
                }
            }
        }
L_102f7e3f: ;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f7cc9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f7cc9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
