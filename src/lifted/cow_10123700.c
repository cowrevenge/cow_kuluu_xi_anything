/* f_0x10123700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_10123700(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        edx = in_edx;
        goto L_1012371d;
    }
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1012395c;
    edx = t2;
L_1012371d: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_1012395c;
    if (rd32(COW_IMG(0x10662770u)) == 0u) goto L_10123742;
    ecx = rd32(COW_IMG(0x10662770u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u) goto L_1012395c;
    edx = t4;
L_10123742: ;
    if (rd32(COW_IMG(0x10662774u)) == 0u) goto L_10123759;
    ecx = rd32(COW_IMG(0x10662774u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u) goto L_1012395c;
    edx = t6;
L_10123759: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x10120bb0u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    t13 = rd32(sp0 - 0xcu);
    t14 = cow_stdcall(g, COW_IMG(0x10120b80u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x10120be0u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_stdcall(g, COW_IMG(0x101b7ee0u), 0);
    t21 = g->edx;
    if ((rd32(COW_IMG(0x1036e0f8u)) | rd32(COW_IMG(0x1036e0fcu))) == 0u)
    {
        loc_8 = 0u;
        loc_4 = 0u;
    }
    else
    {
        eax = t20;
        ecx = rd32(COW_IMG(0x1036e0f8u)) | rd32(COW_IMG(0x1036e0fcu));
        edx = t21;
        ebx = ((in_ebx & 0xffffff00u) | (uint8_t)-((uint8_t)t7 != 0u)) + 6u;
        loc_c = (((((t10 & 0xffff00ffu) | t14 << 8u) & 0xffffffu) | t17 << 0x18u) & 0xff00ffffu) | (uint8_t)t20 << 0x10u;
        esi = COW_IMG(0x1036e0f1u);
        edi = COW_IMG(0x1036e0f8u);
        loc_8 = 0u;
        loc_4 = 0u;
L_101237b6: ;
        if ((rd8(esi + 1u) & (uint8_t)ebx) != rd8(esi + 1u))
        {
            edx = (edx & 0xffffff00u) | (rd8(esi + 1u) & (uint8_t)ebx);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            edx = (edx & 0xffffff00u) | (rd8(esi + 1u) & (uint8_t)ebx);
            if ((uint8_t)(loc_c >> 0x10u) != 0u)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(loc_c >> 0x10u);
                if (rd8(esi - 1u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi - 1u);
                    if ((uint8_t)(loc_c >> 8u) != 0u)
                    {
                        ecx = (ecx & 0xffffff00u) | (uint8_t)loc_c;
                        goto L_10123821;
                    }
                    ecx = (ecx & 0xffffff00u) | (uint8_t)loc_c;
                    if ((uint8_t)ecx == 0u) goto L_1012382a;
                    zf = (uint8_t)(rd8(esi) - 1u) == 0u;
L_101237ef: ;
                    if (zf) goto L_1012383e;
L_101237f1: ;
                    if (rd8(esi) != 0u) goto L_10123803;
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t22 = cow_cdecl(g, COW_IMG(0x1019cdc0u), 1, eax);
                    t23 = g->edx;
                    if ((uint8_t)t22 == 0u)
                    {
                        eax = t22;
                        edx = t23;
                        goto L_1012383e;
                    }
                    eax = t22;
                    edx = t23;
L_10123803: ;
                    if ((uint8_t)(loc_c >> 8u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)(loc_c >> 8u);
                        goto L_10123835;
                    }
                    eax = (eax & 0xffffff00u) | (uint8_t)(loc_c >> 8u);
L_1012380b: ;
                    if ((uint8_t)loc_c != 0u)
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)loc_c;
                        goto L_10123835;
                    }
                    eax = (eax & 0xffffff00u) | (uint8_t)loc_c;
                    if (loc_c >> 0x18u == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        zf = (uint8_t)((uint8_t)eax - 8u) == 0u;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi);
                        zf = (uint8_t)((uint8_t)eax - 4u) == 0u;
                    }
                    if (zf) goto L_1012383e;
L_10123835: ;
                    if (rd8(esi) != 7u) goto L_10123939;
L_1012383e: ;
                    t24 = (eax & 0xffffff00u) | rd8(esi - 1u);
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t25 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, t24);
                    t26 = g->edx;
                    if ((uint8_t)t25 == 0u)
                    {
                        edx = t26;
                    }
                    else
                    {
                        t27 = loc_8 | rd32(edi);
                        t28 = loc_4 | rd32(edi + 4u);
                        if (rd32(edi + 4u) != 0u)
                        {
                            edx = t27;
                            loc_8 = t27;
                            loc_4 = t28;
                        }
                        else
                        {
                            eax = rd32(edi);
                            edx = t27;
                            loc_8 = t27;
                            loc_4 = t28;
                            if (0u) goto L_10123882;
                            if (eax > 0x1000000u) goto L_10123939;
L_10123882: ;
                            if (eax > 0x200000u)
                            {
                                if (eax == 0x400000u)
                                {
                                    t31 = rd32(COW_IMG(0x104e1d44u));
                                    wr8(t31 + 0x252u, 0u);
                                    edx = t31;
                                }
                                else
                                {
                                    if (eax == 0x800000u)
                                    {
                                        wr8(rd32(COW_IMG(0x104e1d44u)) + 0x253u, 0u);
                                    }
                                    else
                                    {
                                        if (eax == 0x1000000u)
                                        {
                                            wr8(rd32(COW_IMG(0x104e1d44u)) + 0x253u, 0xffu);
                                        }
                                    }
                                }
                            }
                            else
                            {
                                zf = eax == 0x200000u;
                                if (zf)
                                {
                                    t30 = rd32(COW_IMG(0x104e1d44u));
                                    wr8(t30 + 0x252u, 0xffu);
                                    edx = t30;
                                }
                                else
                                {
                                    if (eax > 0x80000u)
                                    {
                                        if (eax == 0x100000u)
                                        {
                                            wr8(rd32(COW_IMG(0x104e1d44u)) + 0x251u, 0xffu);
                                        }
                                    }
                                    else
                                    {
                                        zf = eax == 0x80000u;
                                        if (zf)
                                        {
                                            wr8(rd32(COW_IMG(0x104e1d44u)) + 0x251u, 0u);
                                        }
                                        else
                                        {
                                            if (eax == 0x20000u)
                                            {
                                                t29 = rd32(COW_IMG(0x104e1d44u));
                                                wr8(t29 + 0x250u, 0xffu);
                                                edx = t29;
                                            }
                                            else
                                            {
                                                if (eax == 0x40000u)
                                                {
                                                    wr8(rd32(COW_IMG(0x104e1d44u)) + 0x250u, 0u);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
L_10123939: ;
        if ((rd32(esi + 0x17u) | rd32(esi + 0x1bu)) != 0u)
        {
            eax = rd32(esi + 0x17u) | rd32(esi + 0x1bu);
            ecx = rd32(esi + 0x1bu);
            edi = esi + 0x17u;
            esi = esi + 0x10u;
            goto L_101237b6;
        }
    }
    g->ebx = in_ebx;
    g->edx = loc_4;
    return loc_8;
L_10123821: ;
    if ((uint8_t)ecx != 0u) goto L_101237f1;
    zf = (uint8_t)(rd8(esi) - 2u) == 0u;
    goto L_101237ef;
L_1012382a: ;
    if (rd8(esi) == 0u) goto L_1012383e;
    goto L_1012380b;
L_1012395c: ;
    g->ebx = in_ebx;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
