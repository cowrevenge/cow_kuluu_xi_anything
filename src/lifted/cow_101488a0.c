/* f_0x101488a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101488a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x2cu, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x40u, 2u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x24u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            loc_24 = t4;
            wr32(sp0 - 0x40u, in_ebx);
            wr32(sp0 - 0x44u, in_esi);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, COW_IMG(0x10485704u));
            wr32(sp0 - 0x28u, 0x400u);
            t7 = (((ecx & 0xffff0000u) | rd16(self + 0x14u)) + 0x7du & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x13u);
            wr32(sp0 - 0x38u, t7);
            wr32(sp0 - 0x48u, in_edi);
            edx = 0x400u;
            ebx = in_ebx;
            ebp = self;
            loc_30 = 0u;
            loc_34 = COW_IMG(0x10485704u);
            loc_20 = (uint16_t)(((ecx & 0xffff0000u) | rd16(self + 0x14u)) + 0xau) | (uint16_t)(((ecx & 0xffff0000u) | rd16(self + 0x14u)) + 0xf5u) << 0x10u;
            ecx = t7;
            loc_28 = 0x400u;
            loc_38 = t7;
L_10148929: ;
            if (rd16(loc_34) == 0xffffu)
            {
                ebx = (ebx & 0xffff0000u) | rd16(loc_34);
            }
            else
            {
                ebx = (ebx & 0xffff0000u) | rd16(loc_34);
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, 0x80808080u);
                wr32(sp0 - 0x58u, (uint32_t)(int16_t)ecx);
                wr32(sp0 - 0x5cu, (uint32_t)(int16_t)loc_20);
                g->edx = edx;
                t8 = rd32(edx + rd32(eax));
                g->esp = sp0 - 0x48u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), t8, 5, (uint32_t)(int16_t)loc_20, (uint32_t)(int16_t)ecx, 0x80808080u, 0u, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                if ((ebx & 0x1fu) >= 0x10u)
                {
                    ecx = (t9 & 0xffffff00u) | (ebx & 0x1fu);
                }
                else
                {
                    edx = t10;
                    esi = (-((ebx & 0x8000u) != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
                    edi = (uint32_t)(int16_t)ecx;
                    ecx = (t9 & 0xffffff00u) | (ebx & 0x1fu);
                    wr32(sp0 - 0x4cu, 0u);
                    wr32(sp0 - 0x50u, 1u);
                    g->edx = edx;
                    g->esp = sp0 - 0x48u;
                    t11 = cow_cdecl(g, COW_IMG(0x101d29c0u), 2, 1u, 0u);
                    t12 = g->edx;
                    if ((uint8_t)t11 != 0u)
                    {
                        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t12 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
                        if ((int8_t)edx < 0)
                        {
                            if (eax == 2u) goto L_101489ca;
                            if (eax != 3u) goto L_101489cf;
L_101489ca: ;
                            eax = 1u;
                        }
L_101489cf: ;
                        wr32(sp0 - 0x4cu, 0u);
                        wr32(sp0 - 0x50u, 0u);
                        wr32(sp0 - 0x54u, esi);
                        wr32(sp0 - 0x58u, edi);
                        t14 = (uint32_t)(int16_t)rd16(eax * 2u + sp0 - 0x18u);
                        wr32(sp0 - 0x5cu, t14);
                        g->edx = edx;
                        g->esp = sp0 - 0x5cu;
                        t15 = cow_stdcall(g, COW_IMG(0x103149e0u), 0);
                        t16 = g->edx;
                        if ((int32_t)(t15 & 0x8000000fu) >= 0)
                        {
                            eax = t15 & 0x8000000fu;
                            edx = t16;
                        }
                        else
                        {
                            eax = t15 & 0x8000000fu;
                            edx = t16;
                            eax = (eax - 1u | 0xfffffff0u) + 1u;
                        }
                    }
                    else
                    {
                        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t12 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
                        if ((int8_t)edx < 0)
                        {
                            if (eax == 2u) goto L_101489a4;
                            if (eax != 3u) goto L_101489a9;
L_101489a4: ;
                            eax = 1u;
                        }
L_101489a9: ;
                        wr32(sp0 - 0x4cu, 0u);
                        wr32(sp0 - 0x50u, 0u);
                        wr32(sp0 - 0x54u, esi);
                        wr32(sp0 - 0x58u, edi);
                        t13 = (uint32_t)(int16_t)rd16(eax * 2u + sp0 - 0x18u);
                        wr32(sp0 - 0x5cu, t13);
                        eax = ebx & 0x1fu;
                        edx = t13;
                        loc_54 = esi;
                        loc_58 = edi;
                        loc_5c = t13;
                    }
                    t17 = rd32(eax * 4u + rd32(sp0 - 0x2cu) + 0x1cu);
                    t18 = rd32(sp0 - 0x2cu);
                    g->esp = sp0 - 0x48u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), t17, 5, loc_5c, loc_58, loc_54, 0u, 0u);
                    t19 = g->ecx;
                    ecx = t19;
                    ebp = t18;
                }
                t20 = ebx >> 5u & 0x3ffu;
                wr32(sp0 - 0x4cu, t20);
                wr32(sp0 - 0x50u, COW_IMG(0x103718bcu));
                wr32(sp0 - 0x54u, sp0 - 0x10u);
                g->edx = sp0 - 0x10u;
                g->esp = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x103718bcu), t20, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                t21 = g->edx;
                wr32(sp0 - 0x58u, 0x3f800000u);
                wr32(sp0 - 0x5cu, 0x3f800000u);
                wr32(sp0 - 0x60u, 1u);
                wr32(sp0 - 0x64u, 0x80808080u);
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                t22 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x6cu, t22);
                t23 = rd32(sp0 - 0x1eu);
                wr32(sp0 - 0x70u, t23);
                g->esp = sp0 - 0x54u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t23, 7, t23, t22, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                wr32(sp0 - 0x38u, t22 + 0xeu);
                t24 = rd32(sp0 - 0x30u) + 1u;
                wr32(sp0 - 0x30u, t24);
                eax = rd32(sp0 - 0x24u);
                ecx = t22 + 0xeu;
                edx = rd32(sp0 - 0x28u);
                ebx = t20;
                loc_30 = t24;
                loc_38 = t22 + 0xeu;
            }
            wr32(sp0 - 0x28u, edx + 4u);
            wr32(sp0 - 0x34u, loc_34 + 2u);
            if ((int32_t)(edx + 4u) < 1084)
            {
                loc_34 = loc_34 + 2u;
                loc_28 = edx + 4u;
                edx = edx + 4u;
                goto L_10148929;
            }
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, 0u);
            t25 = (uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) * 0xeu + 0x16u;
            wr32(sp0 - 0x58u, t25);
            t26 = ((uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) * 8u - (uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(ebp + 0x18u) - rd16(ebp + 0x14u));
            wr32(sp0 - 0x5cu, t26);
            t27 = (t25 & 0xffff0000u) | rd16(ebp + 0x16u);
            wr32(sp0 - 0x60u, t27);
            t28 = (ecx & 0xffff0000u) | rd16(ebp + 0x14u);
            wr32(sp0 - 0x64u, t28);
            g->eax = t27;
            g->edx = t26;
            g->esp = sp0 - 0x48u;
            t29 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(ebp + 8u), 7, t28, t27, t26, t25, 0u, 0u, 0u);
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101488a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101488a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
