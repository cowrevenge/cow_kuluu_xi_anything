/* f_0x1020a740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020a740(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(arg2 + 0x34u) >> 8u & 0x40u) == 0u)
    {
        eax = rd32(arg2 + 0x34u);
        if ((eax >> 8u & 4u) == 0u)
        {
            if ((eax >> 8u & 8u) == 0u)
            {
                if ((eax & 0xe0000u) == 0u)
                {
                    if (!(eax >> 8u & 1u))
                    {
                        if ((eax & 0x20u) == 0u)
                        {
                            if ((int8_t)(eax >> 8u) >= 0)
                            {
                                if ((eax & 0x10000000u) == 0u)
                                {
                                    t1 = (-(eax & 1u) & 7u) + 1u;
                                    edx = t1;
                                    ebx = t1;
                                    loc_4 = 1u;
                                }
                                else
                                {
                                    edx = in_edx;
                                    ebx = 9u;
                                    loc_4 = 1u;
                                }
                            }
                            else
                            {
                                edx = in_edx;
                                ebx = 3u;
                                loc_4 = 1u;
                            }
                        }
                        else
                        {
                            edx = in_edx;
                            ebx = 4u;
                            loc_4 = 1u;
                        }
                    }
                    else
                    {
                        edx = in_edx;
                        ebx = 6u;
                        loc_4 = 1u;
                    }
                }
                else
                {
                    if ((eax & 0x20u) == 0u)
                    {
                        if ((int8_t)(eax >> 8u) >= 0)
                        {
                            if ((eax & 0x10000000u) == 0u)
                            {
                                edx = in_edx;
                                ebx = 0x16u;
                                loc_4 = 1u;
                            }
                            else
                            {
                                edx = in_edx;
                                ebx = 0x16u;
                                loc_4 = 9u;
                            }
                        }
                        else
                        {
                            edx = in_edx;
                            ebx = 0x16u;
                            loc_4 = 3u;
                        }
                    }
                    else
                    {
                        edx = in_edx;
                        ebx = 0x16u;
                        loc_4 = 4u;
                    }
                }
            }
            else
            {
                edx = in_edx;
                ebx = 2u;
                loc_4 = 1u;
            }
        }
        else
        {
            edx = in_edx;
            ebx = 5u;
            loc_4 = 1u;
        }
    }
    else
    {
        eax = rd32(arg2 + 0x34u);
        edx = in_edx;
        ebx = 7u;
        loc_4 = 1u;
    }
    if ((eax & 0x10u) != 0u)
    {
        t2 = rd32(arg2 + 0x38u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x1020b4b0u), self, 1, t2);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t5 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 3u, 0xeu, eax, 0x80808080u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 4u, 0x29u, arg2 + 4u, 0x80808080u);
    t7 = g->edx;
    t8 = rd32(arg2 + 0x34u);
    if ((t8 & 0xe0000u) > 0x80000u)
    {
        eax = t8 & 0xe0000u;
        ecx = t8;
        edx = t7;
        goto L_1020a88a;
    }
    eax = t8 & 0xe0000u;
    ecx = t8;
    edx = t7;
    zf = (t8 & 0xe0000u) == 0x80000u;
    if (zf) goto L_1020a8a6;
    if (eax == 0x20000u) goto L_1020a882;
    if (eax == 0x40000u) goto L_1020a870;
    if (eax != 0x60000u) goto L_1020a89f;
    if (ebx != 0x16u)
    {
        edi = rd32(COW_IMG(0x104e1be8u));
    }
    else
    {
        edi = rd32(COW_IMG(0x104e1be8u));
        ebx = 0x18u;
    }
L_1020a8c8: ;
    if ((ecx & 0x10000u) == 0u)
    {
        if (eax == 0u)
        {
            loc_1c = 0x80808080u;
        }
        else
        {
            loc_1c = 0xffffffffu;
        }
    }
    else
    {
        loc_1c = 0xfffffffeu;
    }
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x1020b4a0u), self, 1, ebx);
    t10 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t10, 4, 0u, 0xeu, t9, loc_1c);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0x1cu;
    t12 = cow_thiscall(g, COW_IMG(0x1020b4a0u), self, 1, loc_4);
    t13 = g->edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t13, 4, 1u, 0xfu, t12, 0x80808080u);
    t15 = g->edx;
    t16 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t15, 4, 2u, 0x10u, arg2 + 4u, edi);
    t17 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = t16;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = t17;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x2cu))
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t18 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, in_edi);
            t19 = g->edx;
            g->esp = sp0 - 0x14u;
            t20 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t19, 4, 6u, 0x23u, t18, 0x80808080u);
            t21 = g->ecx;
            t22 = g->edx;
            eax = t20;
            ecx = t21;
            edx = t22;
        }
    }
    if ((rd32(arg2 + 0x34u) & 0x10008021u) != 0u)
    {
        t23 = rd16(arg2 + 0x30u);
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t23, 4, 5u, 0x14u, t23, 0x80808080u);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    if (rd32(self + 0x58u) != 2u)
    {
        eax = self;
    }
    else
    {
        t26 = rd16(arg2 + 0x30u);
        g->eax = self;
        g->esp = sp0 - 0x14u;
        t27 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 5u, 0x14u, t26, 0x80808080u);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    if (ebx == 8u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x259u);
        t31 = g->edx;
        wr32(arg1 + 0x4cu, t30);
        eax = t30;
        edx = t31;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1020a870: ;
    if (ebx != 0x16u)
    {
        edi = rd32(COW_IMG(0x104e1be4u));
    }
    else
    {
        edi = rd32(COW_IMG(0x104e1be4u));
        ebx = 0x17u;
    }
    goto L_1020a8c8;
L_1020a882: ;
    edi = rd32(COW_IMG(0x104e1be0u));
    goto L_1020a8c8;
L_1020a88a: ;
    if (eax == 0xa0000u) goto L_1020a8b8;
    if (eax == 0xc0000u) goto L_1020a8a6;
    if (eax == 0xe0000u) goto L_1020a8b8;
L_1020a89f: ;
    edi = 0x80808080u;
    goto L_1020a8c8;
L_1020a8a6: ;
    if (ebx != 0x16u)
    {
        edi = rd32(COW_IMG(0x104e1becu));
    }
    else
    {
        edi = rd32(COW_IMG(0x104e1becu));
        ebx = 0xbu;
    }
    goto L_1020a8c8;
L_1020a8b8: ;
    if (ebx != 0x16u)
    {
        edi = rd32(COW_IMG(0x104e1bf0u));
    }
    else
    {
        edi = rd32(COW_IMG(0x104e1bf0u));
        ebx = 0xau;
    }
    goto L_1020a8c8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a740(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
