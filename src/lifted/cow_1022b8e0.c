/* f_0x1022b8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1022b8e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_4;
    int64_t q50;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(arg6, 0u);
    wr8(arg2, 0u);
    wr8(arg3, 0u);
    wr8(arg4, 0u);
    wr16(arg5, 0u);
    wr8(arg7, 0u);
    wr8(arg8, 0u);
    g->edx = arg7;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t2;
        wr32(sp0 - 0x34u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t3 = cow_thiscall(g, COW_IMG(0x1022c770u), rd32(COW_IMG(0x10667a70u)), 1, arg1);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            ebx = in_ebx;
            ebp = in_ebp;
        }
        else
        {
            esi = t3;
            t5 = rd8(esi + 0x47u);
            wr32(sp0 - 0x24u, t5);
            t6 = rd8(esi + 0x46u);
            wr32(sp0 - 0x28u, t6);
            wr32(sp0 - 0x34u, in_ebp);
            wr32(sp0 - 0x38u, 0x199u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x1cu, 0x40u);
            t7 = rd8(esi + 0x48u);
            wr32(sp0 - 0x18u, t7);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->edx = (t6 & 0xffffff00u) | rd16(esi + 2u) == 7u;
            t8 = rd8(esi + 0x44u);
            t9 = rd16(esi + 2u);
            g->esp = sp0 - 0x34u;
            t10 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), t7, 1, 0x199u);
            t11 = g->ecx;
            t12 = g->edx;
            if ((uint8_t)t10 == 0u)
            {
                ecx = t11;
                edx = t12;
            }
            else
            {
                eax = t10;
                ecx = t11;
                edx = t12;
                if (rd16(esi + 2u) == 5u)
                {
                    if (rd8(esi + 0x48u) == 2u) goto L_1022b9e0;
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x48u);
                    if ((uint8_t)eax != 3u) goto L_1022b9e4;
L_1022b9e0: ;
                    wr32(sp0 - 0x24u, 0u);
                }
            }
L_1022b9e4: ;
            wr32(sp0 - 0x38u, 0x163u);
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t13 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x163u);
            t14 = g->ecx;
            t15 = g->edx;
            if ((uint8_t)t13 == 0u)
            {
                ecx = t14;
                edx = t15;
            }
            else
            {
                ecx = t14;
                edx = t15;
                if (rd16(esi + 2u) == 6u)
                {
                    if ((rd32(esi + 0x4cu) & 7u) == 0u)
                    {
                        eax = rd32(esi + 0x4cu);
                        if ((eax & 0x78u) <= 0x38u)
                        {
                            wr32(sp0 - 0x24u, 0u);
                        }
                    }
                }
            }
            wr32(sp0 - 0x38u, in_ebx);
            wr32(sp0 - 0x3cu, 0x4eu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t16 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x4eu);
            t17 = g->ecx;
            t18 = g->edx;
            if ((uint8_t)t16 == 0u)
            {
                ecx = t17;
                edx = t18;
                goto L_1022ba5b;
            }
            ecx = t17;
            edx = t18;
            wr32(sp0 - 0x3cu, 0x445u);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t19 = cow_thiscall_cdecl(g, COW_IMG(0x10223360u), ecx, 1, 0x445u);
            t20 = g->ecx;
            t21 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                ecx = t20;
                edx = t21;
                goto L_1022ba5b;
            }
            ecx = t20;
            edx = t21;
            if (rd16(esi + 2u) != 1u) goto L_1022ba5b;
            if (rd16(esi) == 0x8fu) goto L_1022ba4c;
            if ((rd32(esi + 0x4cu) & 0x7fff80u) != 0x200u)
            {
                ecx = rd32(esi + 0x4cu) & 0x7fff80u;
                goto L_1022ba5b;
            }
            ecx = rd32(esi + 0x4cu) & 0x7fff80u;
L_1022ba4c: ;
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 8u);
L_1022ba60: ;
            wr32(sp0 - 0x3cu, 0x164u);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t22 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x164u);
            t23 = g->ecx;
            t24 = g->edx;
            if ((uint8_t)t22 == 0u)
            {
                ecx = t23;
                edx = t24;
            }
            else
            {
                eax = t22;
                ecx = t23;
                edx = t24;
                if (rd8(esi + 0x47u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x47u);
                    if (rd16(esi + 2u) == 6u)
                    {
                        if (rd16(esi) != 0x225u)
                        {
                            eax = (eax & 0xffff0000u) | rd16(esi);
                            if ((uint16_t)eax != 0x2c7u)
                            {
                                if (rd8(esi + 0x48u) == 1u)
                                {
                                    wr32(sp0 - 0x24u, 1u);
                                    wr32(sp0 - 0x28u, 8u);
                                }
                            }
                        }
                    }
                }
            }
            wr32(sp0 - 0x3cu, 0x16eu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t25 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x16eu);
            t26 = g->ecx;
            t27 = g->edx;
            if ((uint8_t)t25 == 0u)
            {
                ecx = t26;
                edx = t27;
            }
            else
            {
                ecx = t26;
                edx = t27;
                if ((rd32(esi + 0x4cu) & 0x800000u) != 0u)
                {
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                }
            }
            wr32(sp0 - 0x3cu, 0x16fu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t28 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x16fu);
            t29 = g->ecx;
            t30 = g->edx;
            if ((uint8_t)t28 == 0u)
            {
                ecx = t29;
                edx = t30;
            }
            else
            {
                ecx = t29;
                edx = t30;
                if ((rd32(esi + 0x4cu) & 0x1000000u) != 0u)
                {
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                }
            }
            wr32(sp0 - 0x3cu, 0x207u);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t31 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x207u);
            t32 = g->ecx;
            t33 = g->edx;
            if ((uint8_t)t31 == 0u)
            {
                ecx = t32;
                edx = t33;
                loc_28 = 8u;
            }
            else
            {
                ecx = t32;
                edx = t33;
                if ((rd32(esi + 0x4cu) & 0x20000000u) != 0u)
                {
                    t34 = rd32(sp0 - 0x28u) - 4u;
                    wr32(sp0 - 0x28u, t34);
                    if ((int32_t)(rd32(sp0 - 0x28u) - 4u) >= 1)
                    {
                        loc_28 = t34;
                    }
                    else
                    {
                        wr32(sp0 - 0x28u, 1u);
                        loc_28 = 1u;
                    }
                }
            }
            wr32(sp0 - 0x3cu, 0x4fu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t35 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x4fu);
            t36 = g->ecx;
            t37 = g->edx;
            if ((uint8_t)t35 == 0u)
            {
                ecx = t36;
                edx = t37;
            }
            else
            {
                ecx = t36;
                edx = t37;
                if (rd16(esi) == 0xdau)
                {
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
                }
            }
            wr32(sp0 - 0x3cu, 0x26du);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t38 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x26du);
            t39 = g->ecx;
            t40 = g->edx;
            if ((uint8_t)t38 == 0u)
            {
                ecx = t39;
                edx = t40;
            }
            else
            {
                eax = t38;
                ecx = t39;
                edx = t40;
                if ((int16_t)rd16(esi) < 1)
                {
                    eax = (eax & 0xffff0000u) | rd16(esi);
                    goto L_1022bb49;
                }
                eax = (eax & 0xffff0000u) | rd16(esi);
                if ((int16_t)eax <= 6) goto L_1022bb55;
L_1022bb49: ;
                if ((int16_t)eax < 43) goto L_1022bb5d;
                if ((int16_t)eax > 47) goto L_1022bb5d;
L_1022bb55: ;
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 8u);
                loc_28 = 8u;
            }
L_1022bb5d: ;
            wr32(sp0 - 0x3cu, 0x1fcu);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t41 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x1fcu);
            t42 = g->ecx;
            t43 = g->edx;
            if ((uint8_t)t41 == 0u)
            {
                ecx = t42;
                edx = t43;
            }
            else
            {
                ecx = t42;
                edx = t43;
                loc_4 = (rd32(sp0 - 4u) & 0xff00ffffu) | 0x10000u;
            }
            if (rd32(COW_IMG(0x105781acu)) == 0u)
            {
                eax = rd32(COW_IMG(0x105781acu));
            }
            else
            {
                eax = rd32(COW_IMG(0x105781acu));
                ebx = 0u;
                edi = 0u;
L_1022bb84: ;
                if ((uint8_t)ebx != 0u) goto L_1022bc92;
                wr32(sp0 - 0x3cu, edi);
                g->edx = edx;
                t44 = rd32(COW_IMG(0x105781acu));
                g->esp = sp0 - 0x38u;
                t45 = cow_thiscall(g, COW_IMG(0x101304a0u), t44, 1, edi);
                t46 = g->ecx;
                t47 = g->edx;
                if (t45 == 0u)
                {
                    eax = t45;
                    ecx = t46;
                    edx = t47;
                }
                else
                {
                    eax = t45;
                    ecx = t46;
                    t48 = rd8(eax + 9u);
                    if (t48 == 1u)
                    {
                        eax = t48 - 1u;
                        edx = t48;
                        goto L_1022bc5e;
                    }
                    eax = t48 - 1u;
                    edx = t48;
                    if (eax == 3u)
                    {
                        eax = eax - 3u;
                        goto L_1022bbe5;
                    }
                    eax = eax - 3u;
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        goto L_1022bc88;
                    }
                    eax = eax - 1u;
                    if (rd16(esi + 2u) != 4u) goto L_1022bc88;
                    if (rd16(esi) == 0x152u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(esi);
                        goto L_1022bc7a;
                    }
                    eax = (eax & 0xffff0000u) | rd16(esi);
                    if ((uint16_t)eax == 0x153u) goto L_1022bc7a;
                    zf = (uint16_t)((uint16_t)eax - 0x154u) == 0u;
L_1022bc78: ;
                    if (!zf) goto L_1022bc88;
L_1022bc7a: ;
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_28 = 8u;
L_1022bc86: ;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
L_1022bc88: ;
                if ((int32_t)(edi + 1u) < 16)
                {
                    edi = edi + 1u;
                    goto L_1022bb84;
                }
            }
L_1022bc92: ;
            if ((uint8_t)loc_4 == 0u)
            {
                ebx = rd32(sp0 - 0x38u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)loc_4;
                ebx = rd32(sp0 - 0x38u);
                if ((uint8_t)(loc_4 >> 8u) == 0u)
                {
                    wr32(sp0 - 0x38u, 0x248u);
                    g->esp = sp0 - 0x34u;
                    t54 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x248u);
                    t55 = g->ecx;
                    if ((uint8_t)t54 == 0u)
                    {
                        ecx = t55;
                    }
                    else
                    {
                        ecx = t55;
                        wr32(sp0 - 0x18u, 6u);
                    }
                }
                else
                {
                    loc_4 = (loc_4 & 0xffffffu) | 0x1000000u;
                }
                if ((uint8_t)(loc_4 >> 0x10u) == 0u)
                {
                    eax = rd8(esi + 0x53u);
                }
                else
                {
                    eax = rd8(esi + 0x53u);
                    eax = eax * 3u;
                }
                ecx = eax * 3u + 3u;
                eax = 0u;
L_1022bcd9: ;
                if ((int32_t)rd16(COW_IMG(0x10364488u) + eax * 2u) > (int32_t)ecx)
                {
                    edx = rd16(COW_IMG(0x10364488u) + eax * 2u);
                    goto L_1022bced;
                }
                edx = rd16(COW_IMG(0x10364488u) + eax * 2u);
                if (eax + 1u < 0x10u)
                {
                    eax = eax + 1u;
                    goto L_1022bcd9;
                }
                eax = eax + 1u;
L_1022bced: ;
                if (eax != 0u)
                {
                    eax = eax - 1u;
                }
                wr32(sp0 - 0x10u, eax);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x24u, 1u);
                loc_28 = eax;
            }
            wr32(sp0 - 0x38u, sp0 - 0x28u);
            g->ebx = ebx;
            g->esp = sp0 - 0x24u;
            t56 = cow_call_regs(g, COW_IMG(0x1022d370u), g->eax, ecx, edx, 1, 5, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28);
            t57 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            g->esp = sp0 - 0x28u;
            cow_call_regs(g, COW_IMG(0x1022d510u), t56, sp0 - 0x28u, t57, 1, 5, sp0 - 0x28u, sp0 - 0x28u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            wr32(sp0 - 0x40u, arg8);
            wr32(sp0 - 0x44u, arg7);
            wr32(sp0 - 0x48u, arg6);
            wr32(sp0 - 0x4cu, arg5);
            wr32(sp0 - 0x50u, arg4);
            wr32(sp0 - 0x54u, arg3);
            wr32(sp0 - 0x58u, arg2);
            wr32(sp0 - 0x5cu, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = arg2;
            g->esp = sp0 - 0x3cu;
            t58 = cow_thiscall_cdecl(g, COW_IMG(0x1022d290u), arg3, 8, sp0 - 0x28u, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            t59 = g->edx;
            eax = t58;
            edx = t59;
            ebp = rd32(sp0 - 0x34u);
        }
    }
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1022ba5b: ;
    goto L_1022ba60;
L_1022bbe5: ;
    if (rd16(esi + 2u) != 5u) goto L_1022bc88;
    if (rd32(COW_IMG(0x10667a78u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10667a78u));
        goto L_1022bc88;
    }
    eax = rd32(COW_IMG(0x10667a78u));
    t49 = rd16(esi + 0x22u);
    q50 = (int64_t)cow_muls(0x66666667u, rd16(eax + t49 * 2u));
    t51 = (uint32_t)((int32_t)cow_qhi(q50) >> 2u);
    if ((int16_t)(t51 + (t51 >> 0x1fu)) <= 0)
    {
        ecx = rd16(eax + t49 * 2u);
        eax = t51 >> 0x1fu;
        edx = t51 + (t51 >> 0x1fu);
        goto L_1022bc88;
    }
    eax = t51 >> 0x1fu;
    edx = t51 + (t51 >> 0x1fu);
    t52 = cow_divs(g, (rd16(COW_IMG(0x104856f6u)) & 0x7fffu) << 8u, (uint32_t)(int16_t)edx);
    t53 = cow_mods(g, (rd16(COW_IMG(0x104856f6u)) & 0x7fffu) << 8u, (uint32_t)(int16_t)edx);
    if ((int16_t)(t52 - 0x100u) >= 0)
    {
        eax = t52 - 0x100u;
        ecx = (uint32_t)(int16_t)edx;
        if ((int16_t)eax > 256)
        {
            eax = 0x100u;
        }
        wr16(arg5, (uint16_t)eax);
        edx = arg5;
    }
    else
    {
        ecx = (uint32_t)(int16_t)edx;
        wr16(arg5, 0u);
        eax = 0u;
        edx = arg5;
    }
    goto L_1022bc86;
L_1022bc5e: ;
    if (rd16(esi + 2u) != 1u) goto L_1022bc88;
    if (rd16(esi) == 0x8fu) goto L_1022bc7a;
    eax = rd32(esi + 0x4cu) & 0x7fff80u;
    zf = (rd32(esi + 0x4cu) & 0x7fff80u) == 0x200u;
    goto L_1022bc78;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
