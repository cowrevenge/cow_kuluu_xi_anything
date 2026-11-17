/* f_0x1025b6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_1025b6e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t sf;
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
    uint32_t t50;
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
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg4, 0u);
    if (arg1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        if (arg3 == 0u)
        {
            eax = 0u;
            edx = in_edx;
        }
        else
        {
            if (rd32(sp0 + 0x20u) == 0u)
            {
                eax = 0u;
                edx = in_edx;
            }
            else
            {
                ecx = rd32(sp0 + 0x20u);
                if (arg9 == 0u)
                {
                    eax = 0u;
                    edx = arg9;
                }
                else
                {
                    wr8(sp0 + 0x20u, 0u);
                    g->eax = arg5;
                    g->edx = arg9;
                    g->esp = sp0 - 0x28u;
                    t1 = cow_thiscall_cdecl(g, ecx, ecx, 2, arg3, arg5);
                    t2 = g->ecx;
                    t3 = g->edx;
                    if (rd8(arg3 + t1) != 0u)
                    {
                        eax = arg3 + t1;
                        ecx = (t2 & 0xffffff00u) | rd8(arg3 + t1);
                        edx = t3;
                        ebx = t1;
                        loc_14 = t1;
                        goto L_1025b7c7;
                    }
                    eax = arg3 + t1;
                    ecx = (t2 & 0xffffff00u) | rd8(arg3 + t1);
                    edx = t3;
                    ebx = t1;
                    wr8(sp0 + 0x18u, 0u);
                    if (ebx == 0u)
                    {
                        edi = 0u;
                        loc_18 = ebx;
                        goto L_1025b78b;
                    }
                    edi = 0u;
                    loc_18 = ebx;
L_1025b751: ;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x28u;
                    t4 = cow_cdecl(g, COW_IMG(0x1025be40u), 1, arg3 + edi);
                    t5 = g->ecx;
                    t6 = g->edx;
                    if (t4 != 0u)
                    {
                        eax = t4;
                        ecx = t5;
                        goto L_1025b779;
                    }
                    eax = t4;
                    ecx = t5;
                    edx = t6;
                    ebp = arg3 + edi;
                    t7 = rd8(ebp);
                    wr8(sp0 + 0x18u, (uint8_t)t7);
                    g->eax = eax;
                    g->ecx = (ecx & 0xffffff00u) | t7;
                    g->edx = edx;
                    g->esp = sp0 - 0x28u;
                    t8 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, ebp);
                    t9 = g->ecx;
                    t10 = g->edx;
                    if (edi + t8 < ebx)
                    {
                        eax = t8;
                        ecx = t9;
                        edx = t10;
                        edi = edi + t8;
                        goto L_1025b751;
                    }
                    ecx = t9;
                    edx = t10;
                    edi = edi + t8;
L_1025b78b: ;
                    g->eax = arg2 - 1u;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t14 = cow_thiscall_cdecl(g, COW_IMG(0x1025b600u), ecx, 9, arg1, arg2 - 1u, arg3, edi, in_ebp, in_ebx, in_edi, in_esi, loc_18);
                    t15 = g->ecx;
                    t16 = g->edx;
                    if (rd8(sp0 + 0x18u) != 0x15u)
                    {
                        eax = t14;
                        edx = t16;
                        goto L_1025ba4d;
                    }
                    eax = t14;
                    ecx = COW_IMG(0x10353e04u);
                    edx = eax - COW_IMG(0x10353e04u);
                    esi = arg1 + eax - COW_IMG(0x10353e04u);
L_1025b7b8: ;
                    t17 = rd8(ecx);
                    wr8(ecx + esi, (uint8_t)t17);
                    if ((uint8_t)t17 != 0u)
                    {
                        ecx = ecx + 1u;
                        edx = (edx & 0xffffff00u) | t17;
                        goto L_1025b7b8;
                    }
                    edx = (edx & 0xffffff00u) | t17;
L_1025ba4c: ;
                    eax = eax + 1u;
L_1025ba4d: ;
                    if (rd32(arg4) == 0u)
                    {
                        wr32(arg4, loc_18);
                        edx = loc_18;
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_1025b779: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg3 + edi;
    g->esp = sp0 - 0x28u;
    t11 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg3 + edi);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    loc_18 = edi + t11;
    goto L_1025b78b;
L_1025b7c7: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t18 = cow_cdecl(g, COW_IMG(0x1025be40u), 1, eax);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1025b7ee;
    }
    ecx = t19;
    wr32(arg4, ebx + 1u);
    edi = rd32(sp0 + 0x18u);
    loc_18 = ebx;
L_1025b891: ;
    if (loc_18 == 0u) goto L_1025b813;
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x1025b600u), ecx, 9, arg1, arg2, arg3, edi, in_ebp, in_ebx, in_edi, in_esi, loc_18);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    goto L_1025ba4d;
L_1025b7ee: ;
    if (ebx == 0u)
    {
        loc_18 = 0u;
        goto L_1025b813;
    }
    edi = 0u;
L_1025b7f4: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_cdecl(g, COW_IMG(0x1025be40u), 1, arg3 + edi);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        edx = t23;
        goto L_1025b87f;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    ebp = arg3 + edi;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t24 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, ebp);
    t25 = g->ecx;
    t26 = g->edx;
    if (edi + t24 < ebx)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        edi = edi + t24;
        goto L_1025b7f4;
    }
    loc_18 = 0u;
L_1025b813: ;
    t31 = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (!(rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        ecx = t31;
        edx = t31;
        loc_c = t31;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        ecx = t31;
        edx = t31;
        loc_c = t31;
        if (edx == 2u) goto L_1025b836;
        if (edx != 3u) goto L_1025b842;
L_1025b836: ;
        edx = 1u;
        loc_c = 1u;
    }
L_1025b842: ;
    if (eax == 0u) goto L_1025b852;
    if (ecx == 2u) goto L_1025b869;
    if (ecx == 3u) goto L_1025b869;
L_1025b852: ;
    if (ecx == 0u) goto L_1025baca;
    zf = ecx == 0u;
    sf = (int32_t)ecx < 0;
    if (zf || sf) goto L_1025ba17;
    if ((int32_t)ecx > 3) goto L_1025ba17;
L_1025b869: ;
    if (rd8(arg3) == 0u)
    {
        ebp = 0u;
        edi = 0u;
        loc_18 = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3);
        ebp = 0u;
        esi = arg3;
        edi = 0u;
        loc_18 = 0u;
L_1025b8ba: ;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t32 = cow_call_regs(g, COW_IMG(0x1025bc00u), eax, ebx - ebp, g->edx, 1, 7, edx, esi, ebx - ebp, in_ebp, in_ebx, in_edi, in_esi);
        t33 = g->ecx;
        t34 = g->edx;
        if ((int32_t)t32 <= 0)
        {
            ecx = t33;
            edx = t34;
            goto L_1025b906;
        }
        eax = t32;
        edx = t34;
        if (ebx < eax + ebp)
        {
            ecx = eax + ebp;
            goto L_1025b906;
        }
        ecx = eax + ebp;
        loc_8 = eax + ebp;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t35 = cow_thiscall_cdecl(g, COW_IMG(0x1025b6a0u), ecx, 4, esi, eax, in_ebp, in_ebx);
        t36 = g->edx;
        if (arg2 <= edi + t35)
        {
            ecx = arg2;
            edx = t36;
            goto L_1025b906;
        }
        eax = edi + t35;
        if (rd8(arg3 + loc_8) != 0u)
        {
            ebp = loc_8;
            esi = arg3 + loc_8;
            edi = eax;
            eax = (eax & 0xffffff00u) | rd8(arg3 + loc_8);
            loc_18 = loc_8;
            goto L_1025b8b6;
        }
        ecx = loc_8;
        edx = arg3;
        ebp = loc_8;
        edi = eax;
        loc_18 = loc_8;
L_1025b906: ;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x1025b600u), ecx, 9, arg1, 0u, arg3, ebp, in_ebp, in_ebx, in_edi, in_esi, loc_18);
    t37 = g->edx;
    if (rd8(arg3 + ebp) == 0u)
    {
        ecx = (arg3 & 0xffffff00u) | rd8(arg3 + ebp);
        loc_10 = 0u;
        goto L_1025b9f9;
    }
    eax = arg3 + ebp;
    ecx = (arg3 & 0xffffff00u) | rd8(arg3 + ebp);
    edx = t37;
    esi = ebp;
    ebp = eax;
    loc_10 = 0u;
L_1025b937: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t38 = cow_call_regs(g, COW_IMG(0x1025be00u), eax, ecx, g->edx, 1, 7, ebp, ebx - esi, in_ebp, in_ebx, in_edi, in_esi, loc_18);
    t39 = g->ecx;
    t40 = g->edx;
    if ((int32_t)t38 <= 0)
    {
        ecx = t39;
        goto L_1025b9e9;
    }
    ecx = t39;
    edx = t40;
    ebx = t38;
    t41 = ebx + esi + 1u;
    if (loc_14 < ebx + esi + 1u) goto L_1025b9e9;
    eax = loc_14;
    ebx = ebx + 1u;
    loc_c = t41;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x1025b6a0u), ecx, 4, ebp, ebx, in_ebp, in_ebx);
    t43 = edi + t42 + 1u;
    if (arg2 <= edi + t42 + 1u)
    {
        ecx = arg2;
        goto L_1025b9e9;
    }
    esi = t42;
    loc_8 = t43;
    loc_4 = t42;
    g->edx = esi + 1u;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x1025b600u), arg2, 9, arg1 + edi, esi + 1u, ebp, ebx, in_ebp, in_ebx, in_edi, in_esi, loc_18);
    t44 = g->ecx;
    t45 = g->edx;
    t46 = arg1 + edi + esi;
    eax = COW_IMG(0x10353e04u);
    ecx = t44;
    edx = t45;
    ebx = t46;
    esi = t46 - COW_IMG(0x10353e04u);
L_1025b9a4: ;
    t47 = rd8(eax);
    wr8(eax + esi, (uint8_t)t47);
    if ((uint8_t)t47 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t47;
        goto L_1025b9a4;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t47;
    wr8(ebx + 1u, (uint8_t)ecx);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t48 = cow_thiscall(g, arg9, loc_8, 0);
    t49 = g->ecx;
    if ((int16_t)arg5 < (int32_t)t48)
    {
        ecx = t49;
        goto L_1025b9e9;
    }
    wr8(ebx, 0u);
    if (rd8(arg3 + loc_c) != 0u)
    {
        eax = loc_4;
        ebp = arg3 + loc_c;
        esi = loc_c;
        edi = edi + loc_4;
        loc_10 = loc_c;
        goto L_1025b933;
    }
    ecx = arg3;
    loc_10 = loc_c;
L_1025b9e9: ;
    if (loc_10 != 0u)
    {
        ebx = loc_14;
        ebp = loc_18;
        goto L_1025b9ff;
    }
    ebx = loc_14;
    ebp = loc_18;
L_1025b9f9: ;
    eax = ebx - ebp;
L_1025ba09: ;
    if (eax < arg7) goto L_1025ba64;
L_1025ba13: ;
    loc_18 = ebx;
L_1025ba17: ;
    g->eax = arg2;
    g->edx = loc_18;
    g->esp = sp0 - 0x14u;
    t57 = cow_thiscall_cdecl(g, COW_IMG(0x1025b600u), ecx, 9, arg1, arg2, arg3, loc_18, in_ebp, in_ebx, in_edi, in_esi, loc_18);
    t58 = g->ecx;
    t59 = g->edx;
    if (rd8(sp0 + 0x20u) == 0u)
    {
        eax = t57;
        edx = t59;
        goto L_1025ba4d;
    }
    eax = t57;
    ecx = COW_IMG(0x10353e04u);
    edx = eax - COW_IMG(0x10353e04u);
    esi = arg1 + eax - COW_IMG(0x10353e04u);
L_1025ba42: ;
    t60 = rd8(ecx);
    wr8(ecx + esi, (uint8_t)t60);
    if ((uint8_t)t60 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t60;
        goto L_1025ba42;
    }
    edx = (edx & 0xffffff00u) | t60;
    goto L_1025ba4c;
L_1025b87f: ;
    g->eax = eax;
    g->ecx = arg3 + edi;
    g->esp = sp0 - 0x28u;
    t27 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg3 + edi);
    t28 = g->ecx;
    ecx = t28;
    loc_18 = edi + t27;
    goto L_1025b891;
L_1025b8b6: ;
    edx = loc_c;
    goto L_1025b8ba;
L_1025b933: ;
    ecx = arg3;
    edx = (uint32_t)(int16_t)arg5;
    ebx = loc_14;
    goto L_1025b937;
L_1025b9ff: ;
    eax = loc_14 - loc_10;
    ecx = loc_10;
    goto L_1025ba09;
L_1025ba64: ;
    if (ebp == 0u) goto L_1025baac;
    if (loc_10 == 0u) goto L_1025ba9f;
    esi = loc_10;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t50 = cow_thiscall(g, arg9, ecx, 0);
    if ((int32_t)(t50 + (uint32_t)(int16_t)rd16(sp0 + 0x18u)) >= (int16_t)arg5)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 + 0x18u);
        goto L_1025ba9f;
    }
    ecx = (uint32_t)(int16_t)rd16(sp0 + 0x18u);
    wr8(sp0 + 0x20u, 1u);
    loc_18 = esi;
    goto L_1025ba17;
L_1025ba9f: ;
    loc_18 = ebp;
    goto L_1025ba17;
L_1025baac: ;
    if (loc_10 == 0u) goto L_1025ba13;
    eax = loc_10;
    wr8(sp0 + 0x20u, 1u);
    loc_18 = eax;
    goto L_1025ba17;
L_1025baca: ;
    g->eax = arg3 + ebx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x1025bb20u), ecx, 3, arg3 + ebx, in_ebp, in_ebx);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 == 0u)
    {
        ecx = t52;
        goto L_1025ba13;
    }
    ecx = t52;
    edx = t53;
    if (ebx == 0u)
    {
        loc_18 = 0u;
        goto L_1025bafc;
    }
    edi = 0u;
L_1025bae6: ;
    g->eax = arg3 + edi;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t54 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg3 + edi);
    t55 = g->ecx;
    t56 = g->edx;
    if (edi + t54 < ebx)
    {
        ecx = t55;
        edx = t56;
        edi = edi + t54;
        goto L_1025bae6;
    }
    loc_18 = edi;
L_1025bafc: ;
    if (rd8(arg3 + loc_18) != 4u)
    {
        ecx = loc_18;
    }
    else
    {
        ecx = loc_18;
        loc_18 = ecx + 1u;
    }
    goto L_1025ba17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025b6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
