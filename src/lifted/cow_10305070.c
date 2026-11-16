/* f_0x10305070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10305070(Guest* g)
{
    double d11;
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
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    t1 = rd32(rd32(sp0 + 4u) + 0x198u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(rd32(sp0 + 4u) + 0xc4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x20u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t4 <= 0)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        esi = t2;
        edi = t3;
        edx = in_edx;
        ebx = eax + 0x2cu;
        edi = edi + 0x24u;
        loc_8 = 0u;
        loc_10 = 0u;
        loc_14 = eax + 0x2cu;
L_103050a9: ;
        if (rd32(edi) == 1u) goto L_10305124;
        eax = rd32(edi) - 1u;
        if (eax == 1u) goto L_1030511b;
        eax = eax - 1u;
        if (eax == 2u) goto L_10305112;
        eax = eax - 2u;
        if (eax == 4u) goto L_103050cf;
        wr32(rd32(esi) + 0x14u, 6u);
        t5 = rd32(edi);
        wr32(rd32(esi) + 0x18u, t5);
        ecx = t5;
L_103050e5: ;
        g->edx = 2u;
        g->esp = sp0 - 0x28u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
        t6 = g->edx;
        ecx = esi;
        edx = t6;
L_1030512e: ;
        t7 = rd32(sp0 + 4u);
        wr32(ebx - 0x28u, t7);
        if (rd8(edi + 0xcu) != 0u)
        {
            if (rd32(ebx) != loc_8)
            {
                eax = loc_8;
                t8 = rd32(edi + 0x28u);
                if (rd32(edi + 0x28u) == 0u)
                {
                    edx = t8;
                }
                else
                {
                    edx = t8;
                    loc_18 = t8;
                    wr32(ebx, eax);
                    if (eax == 0u)
                    {
                        eax = rd32(edi + 0x2cu);
                        ecx = edx - rd32(edi + 0x2cu);
                        edx = 0x40u;
L_103051fb: ;
                        t14 = rd16(eax + ecx);
                        wr16(eax, (uint16_t)t14);
                        if (edx != 1u)
                        {
                            eax = eax + 2u;
                            edx = edx - 1u;
                            ebx = (ebx & 0xffff0000u) | t14;
                            goto L_103051fb;
                        }
                        edx = edx - 1u;
                    }
                    else
                    {
                        if (eax == 1u)
                        {
                            t12 = rd32(edi + 0x2cu);
                            t13 = t12 - COW_IMG(0x10349390u);
                            eax = COW_IMG(0x10349390u);
                            edx = edx - COW_IMG(0x10349390u);
                            loc_c = t13;
L_103051cc: ;
                            wr16(eax + loc_c, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)rd16(eax + edx) * (uint32_t)(int16_t)rd16(eax) + 0x800u) >> 0xcu));
                            if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10349410u))
                            {
                                eax = eax + 2u;
                                goto L_103051cc;
                            }
                        }
                        else
                        {
                            eax = eax - 1u;
                            if (eax == 1u)
                            {
                                eax = 0u;
                                edx = rd32(edi + 0x2cu);
                                loc_c = COW_IMG(0x10349410u);
L_10305188: ;
                                ecx = COW_IMG(0x10349410u);
L_1030518d: ;
                                t10 = rd16(eax * 2u + loc_18);
                                d11 = fr(g, fr(g, (double)(int32_t)t10 * rdf64(ecx)) * rdf64(loc_c));
                                wrf32(eax * 4u + edx, (float)d11);
                                if ((int32_t)(ecx + 8u) < (int32_t)COW_IMG(0x10349450u))
                                {
                                    eax = eax + 1u;
                                    ecx = ecx + 8u;
                                    goto L_1030518d;
                                }
                                eax = eax + 1u;
                                if ((int32_t)(loc_c + 8u) < (int32_t)COW_IMG(0x10349450u))
                                {
                                    loc_c = loc_c + 8u;
                                    goto L_10305188;
                                }
                            }
                            else
                            {
                                wr32(rd32(esi) + 0x14u, 0x2fu);
                                g->edx = edx;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
                                t9 = g->edx;
                                edx = t9;
                            }
                        }
                    }
                }
            }
        }
        if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            ebx = loc_14 + 4u;
            edi = edi + 0x54u;
            loc_10 = loc_10 + 1u;
            loc_14 = loc_14 + 4u;
            goto L_103050a7;
        }
        eax = loc_10 + 1u;
    }
    g->edx = edx;
    return eax;
L_103050a7: ;
    goto L_103050a9;
L_103050cf: ;
    if (rd32(esi + 0x44u) == 0u) goto L_10305109;
    eax = rd32(esi + 0x44u);
    if (eax == 1u) goto L_103050f9;
    eax = eax - 1u;
    if (eax == 1u) goto L_103050ed;
    wr32(rd32(esi) + 0x14u, 0x2fu);
    ecx = 0u;
    goto L_103050e5;
L_103050ed: ;
    wr32(sp0 + 4u, COW_IMG(0x1030b0a0u));
    ecx = 0u;
    edx = 2u;
    loc_8 = 2u;
    goto L_1030512e;
L_103050f9: ;
    wr32(sp0 + 4u, COW_IMG(0x1030b054u));
    ecx = 0u;
    edx = 2u;
    loc_8 = 1u;
    goto L_1030512e;
L_10305109: ;
    wr32(sp0 + 4u, COW_IMG(0x1030b008u));
    edx = 2u;
L_1030512b: ;
    ecx = 0u;
    loc_8 = 0u;
    goto L_1030512e;
L_10305112: ;
    wr32(sp0 + 4u, COW_IMG(0x1030aaf8u));
    edx = 2u;
    goto L_1030512b;
L_1030511b: ;
    wr32(sp0 + 4u, COW_IMG(0x1030ae0du));
    goto L_1030512b;
L_10305124: ;
    wr32(sp0 + 4u, COW_IMG(0x1030afcbu));
    goto L_1030512b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
