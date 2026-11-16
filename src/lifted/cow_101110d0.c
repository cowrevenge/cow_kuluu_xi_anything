/* f_0x101110d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101110d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t32;
    uint32_t t33;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfccu));
    wr32(sp0 - 0x24u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfccu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_10111105;
    }
    edx = t2;
    wr32(sp0 - 0x30u, arg2 + 8u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 8u, 1, arg2 + 8u);
    return 0u;
L_10111105: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfc4u));
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfc4u));
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        goto L_10111146;
    }
    edx = t4;
    if ((int32_t)(uint16_t)arg3 > (int32_t)((uint8_t)arg1 + 1u))
    {
        eax = arg2 + (uint8_t)arg1 * 8u + 8u;
    }
    else
    {
        eax = arg2 + 8u;
    }
    wr32(sp0 - 0x30u, eax);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0x10u, 1, eax);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 0u;
L_10111146: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfbcu));
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfbcu));
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        goto L_1011116c;
    }
    edx = t6;
    wr32(sp0 - 0x30u, arg2 + 8u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0x18u, 1, arg2 + 8u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 0u;
L_1011116c: ;
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t7 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
        goto L_10111192;
    }
    edx = t8;
    wr32(sp0 - 0x38u, COW_IMG(0x1036bfacu));
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfacu));
    t10 = g->edx;
    if (t9 != 0u) goto L_1011143e;
    edx = t10;
L_10111192: ;
    if ((uint16_t)arg3 >= 2u)
    {
        wr32(sp0 - 0x38u, 0x2eu);
        g->esp = sp0 - 0x34u;
        t11 = cow_fastcall(g, COW_IMG(0x10109830u), arg2 + 8u, edx, 1, 0x2eu);
        if ((int16_t)t11 > 0)
        {
            ebp = t11;
            wr32(sp0 - 0x38u, ebp);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->esi = arg2 + 8u;
            g->esp = sp0 - 0x34u;
            t12 = cow_thiscall(g, COW_IMG(0x10109430u), arg2 + 8u, 3, sp0 - 0x20u, 0u, ebp);
            if (rd32(t12 + 4u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(t12 + 4u);
                eax = rd32(eax + 4u);
            }
            ecx = sp0 - 0x18u;
            edx = eax;
            ebx = 3u;
            esi = arg2 + 8u;
L_101111dd: ;
            wr32(ecx, 0u);
            if (edx != 0u)
            {
                if (rd8(edx) != 0u)
                {
                    edi = 5u;
L_101111f1: ;
                    t13 = rd32(ecx) << 6u;
                    wr32(ecx, t13);
                    if (rd8(edx) == 0u)
                    {
                        eax = (t13 & 0xffffff00u) | rd8(edx);
                        esi = t13;
                    }
                    else
                    {
                        eax = (t13 & 0xffffff00u) | rd8(edx);
                        esi = t13;
                        if ((uint8_t)eax <= 0x60u)
                        {
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (uint8_t)eax - 0x40u;
                        }
                        t14 = (eax & 0x3fu) | esi;
                        wr32(ecx, t14);
                        eax = t14;
                        edx = edx + 1u;
                    }
                    if (edi != 1u)
                    {
                        edi = edi - 1u;
                        goto L_101111f1;
                    }
                }
            }
            if (ebx != 1u)
            {
                ecx = ecx + 4u;
                ebx = ebx - 1u;
                goto L_101111dd;
            }
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
            t15 = g->edx;
            wr32(sp0 - 0x38u, 0xffffffffu);
            wr32(sp0 - 0x3cu, ebp + 1u);
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->esi = esi;
            t16 = cow_thiscall(g, COW_IMG(0x10109430u), arg2 + 8u, 3, sp0 - 0x20u, ebp + 1u, 0xffffffffu);
            if (rd32(t16 + 4u) == 0u)
            {
                ebx = ebp + 1u;
                eax = 0u;
            }
            else
            {
                eax = rd32(t16 + 4u);
                ebx = ebp + 1u;
                eax = rd32(eax + 4u);
            }
            ecx = sp0 - 0xcu;
            edx = eax;
            ebp = 3u;
L_10111260: ;
            wr32(ecx, 0u);
            if (edx != 0u)
            {
                if (rd8(edx) != 0u)
                {
                    edi = 5u;
L_10111274: ;
                    t17 = rd32(ecx) << 6u;
                    wr32(ecx, t17);
                    if (rd8(edx) == 0u)
                    {
                        eax = (t17 & 0xffffff00u) | rd8(edx);
                    }
                    else
                    {
                        eax = (t17 & 0xffffff00u) | rd8(edx);
                        esi = t17;
                        if ((uint8_t)eax <= 0x60u)
                        {
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (uint8_t)eax - 0x40u;
                        }
                        t18 = (eax & 0x3fu) | esi;
                        wr32(ecx, t18);
                        eax = t18;
                        edx = edx + 1u;
                    }
                    if (edi != 1u)
                    {
                        edi = edi - 1u;
                        goto L_10111274;
                    }
                }
            }
            if (ebp != 1u)
            {
                ecx = ecx + 4u;
                ebp = ebp - 1u;
                goto L_10111260;
            }
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
            t19 = g->edx;
            wr32(sp0 - 0x38u, ebx);
            g->edx = t19;
            t20 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 8u, 1, ebx);
            t21 = g->edx;
            if ((uint8_t)t20 != 0x2au)
            {
                edx = t21;
            }
            else
            {
                edx = t21;
                wr32(sp0 - 0xcu, 0u);
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                loc_c = 0u;
            }
            if (rd32(sp0 - 0x18u) != 0u)
            {
                wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
                g->ebx = ebx;
                g->esp = sp0 - 0x34u;
                t22 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
                t23 = g->ecx;
                if (t22 == 0u)
                {
                    ecx = t23;
                    goto L_101112fa;
                }
                ecx = t23;
                if (rd32(sp0 - 0xcu) == 0u) goto L_1011143e;
L_101112fa: ;
                edx = rd32(sp0 - 0x24u);
                ebp = rd32(rd32(sp0 - 0x24u) + 0x54u);
L_10111301: ;
                if (rd32(ebp + 4u) == 0u) goto L_101113cf;
                if (rd32(ebp + 8u) == 0u)
                {
                    ebx = rd32(ebp + 8u);
                    goto L_1011137e;
                }
                ebx = rd32(ebp + 8u);
                eax = 0u;
                esi = rd32(ebp) - (sp0 - 0x18u);
                edi = rd32(ebp);
L_10111320: ;
                if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u)) goto L_1011133b;
                ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
                edx = rd32(eax * 4u + sp0 - 0x18u);
                cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
                if (cf) goto L_101113c8;
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111320;
                }
L_1011133b: ;
                eax = 0u;
                esi = edi - (sp0 - 0x18u);
L_10111345: ;
                if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u))
                {
                    ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
                    edx = rd32(eax * 4u + sp0 - 0x18u);
                    goto L_1011137e;
                }
                cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
                if (cf) goto L_1011135c;
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111345;
                }
L_1011135c: ;
                eax = 0u;
                esi = edi + 0xcu - (sp0 - 0xcu);
L_10111367: ;
                if (rd32(eax * 4u + esi + sp0 - 0xcu) > rd32(eax * 4u + sp0 - 0xcu))
                {
                    ecx = rd32(eax * 4u + esi + sp0 - 0xcu);
                    edx = rd32(eax * 4u + sp0 - 0xcu);
                    goto L_1011137e;
                }
                ecx = rd32(eax * 4u + esi + sp0 - 0xcu);
                edx = rd32(eax * 4u + sp0 - 0xcu);
                cf = rd32(eax * 4u + esi + sp0 - 0xcu) < rd32(eax * 4u + sp0 - 0xcu);
                if (cf) goto L_101113c8;
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111367;
                }
L_1011137e: ;
                if (rd32(ebp + 4u) == 0u) goto L_101113cf;
                if (rd32(ebp + 8u) == 0u) goto L_101113cf;
                eax = 0u;
                ecx = rd32(ebp) - (sp0 - 0x18u);
                esi = rd32(ebp);
L_10111399: ;
                if (rd32(eax * 4u + ecx + sp0 - 0x18u) != rd32(eax * 4u + sp0 - 0x18u))
                {
                    edx = rd32(eax * 4u + ecx + sp0 - 0x18u);
                    goto L_101113cf;
                }
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111399;
                }
                eax = 0u;
                ecx = esi + 0xcu;
L_101113b3: ;
                if (rd32(ecx) != rd32(eax * 4u + sp0 - 0xcu))
                {
                    edx = rd32(ecx);
                    goto L_101113cf;
                }
                edx = rd32(ecx);
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    ecx = ecx + 4u;
                    goto L_101113b3;
                }
L_10111428: ;
                wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
                g->ebx = ebx;
                g->esp = sp0 - 0x34u;
                t33 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
                wr8(esi + 0x18u, t33 == 0u);
            }
        }
    }
L_1011143e: ;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x34u);
    return 0u;
L_101113c8: ;
    ebp = ebx;
    goto L_10111301;
L_101113cf: ;
    wr32(sp0 - 0x38u, 0x1cu);
    g->esp = sp0 - 0x2cu;
    t24 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t25 = g->edx;
    if (t24 == 0u) goto L_1011143e;
    eax = t24;
    edx = t25;
    esi = t24;
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t26 = cow_thiscall(g, COW_IMG(0x1010e040u), esi, 1, sp0 - 0x18u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x1010e040u), esi + 0xcu, 1, sp0 - 0xcu);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x38u, 0xcu);
    wr8(esi + 0x18u, 1u);
    g->edx = t29;
    t30 = cow_cdecl(g, COW_IMG(0x101085e0u), 1, 0xcu);
    t31 = g->edx;
    if (t30 == 0u)
    {
        edx = t31;
        eax = 0u;
    }
    else
    {
        eax = t30;
        edx = t31;
        wr32(eax, esi);
        wr32(eax + 8u, 0u);
        wr32(eax + 4u, 0u);
    }
    wr32(sp0 - 0x38u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10112190u), eax, 1, ebp);
    t32 = g->edx;
    wr16(rd32(sp0 - 0x24u) + 0x4au, (uint16_t)(rd16(rd32(sp0 - 0x24u) + 0x4au) + 1u));
    edx = t32;
    goto L_10111428;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101110d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101110d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
