/* f_0x1013cec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013cec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_a4;
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
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 224u);

    wr32(sp0 - 0xa8u, in_esi);
    if (rd32(self + 0x1cu) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ecx = rd32(self + 0x1cu);
        wr32(sp0 - 0xacu, in_ebx);
        wr32(sp0 - 0xb0u, in_edi);
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ebx = (in_ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ebx = (in_ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            if (eax == 2u) goto L_1013cef0;
            if (eax != 3u) goto L_1013cef5;
L_1013cef0: ;
            eax = 1u;
        }
L_1013cef5: ;
        wr32(sp0 - 0xb4u, in_ebp);
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xbcu, 0u);
        t1 = rd32(self + 0x28u);
        wr32(sp0 - 0xc0u, t1);
        wr32(sp0 - 0xc4u, 0x3f800000u);
        t2 = (in_ebp & 0xffff0000u) | (uint16_t)(rd16(self + 0x350u) + rd16(COW_IMG(0x1036fa2au) + eax * 0x12u));
        wr32(sp0 - 0xc8u, t2);
        t3 = (ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x34eu) + rd16(COW_IMG(0x1036fa28u) + eax * 0x12u));
        wr32(sp0 - 0xccu, t3);
        g->eax = eax * 9u;
        g->edx = t1;
        g->esp = sp0 - 0xb4u;
        t4 = cow_thiscall(g, COW_IMG(0x1015b580u), ecx, 6, t3, t2, 0x3f800000u, t1, 0u, 0u);
        t5 = g->edx;
        if (rd8(self + 0x370u) == 0u)
        {
            edx = t5;
            ebx = t3;
            ebp = t2;
            edi = COW_IMG(0x1036fa28u) + eax * 0x12u;
        }
        else
        {
            edx = t5;
            ebx = t3;
            ebp = t2;
            edi = COW_IMG(0x1036fa28u) + eax * 0x12u;
            if (rd32(rd32(self + 0x1cu) + 0x14c0u) != 0u)
            {
                eax = rd32(rd32(self + 0x1cu) + 0x14c0u);
                ecx = rd32(self + 0x1cu);
                if (1u >= rd16(eax))
                {
                    edx = (edx & 0xffff0000u) | 1u;
                }
                else
                {
                    t6 = rd16(rd32(ecx + 0x14c0u));
                    wr32(sp0 - 0xb8u, t6);
                    wr32(sp0 - 0xbcu, COW_IMG(0x10352ff0u));
                    wr32(sp0 - 0xc0u, sp0 - 0x90u);
                    g->ebx = ebx;
                    g->ecx = t6;
                    g->edx = sp0 - 0x90u;
                    g->esp = sp0 - 0xacu;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x90u, COW_IMG(0x10352ff0u), t6, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
                    t7 = g->ecx;
                    t8 = g->edx;
                    wr32(sp0 - 0xc4u, 0x3f800000u);
                    wr32(sp0 - 0xc8u, 0x3f800000u);
                    wr32(sp0 - 0xccu, 1u);
                    wr32(sp0 - 0xd0u, 0x80909040u);
                    wr32(sp0 - 0xd4u, sp0 - 0x90u);
                    wr32(sp0 - 0xd8u, ebp + 0x16u);
                    wr32(sp0 - 0xdcu, ebx + 0x22u);
                    g->edx = t8;
                    g->esp = sp0 - 0xc0u;
                    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t7, 7, ebx + 0x22u, ebp + 0x16u, sp0 - 0x90u, 0x80909040u, 1u, 0x3f800000u, 0x3f800000u);
                    t9 = g->edx;
                    edx = t9;
                    ebx = ebx + 0x22u;
                    ebp = ebp + 0x16u;
                }
            }
        }
        g->esp = sp0 - 0xb4u;
        cow_fastcall(g, COW_IMG(0x1018d2b0u), sp0 - 0x9cu, edx, 0);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x1015b270u), rd32(self + 0x1cu), 0);
        t12 = g->edx;
        wr32(sp0 - 0xb8u, t11);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        g->ebx = ebx;
        g->edx = t12;
        cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0x9cu, t11);
        t13 = g->edx;
        t14 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x9cu, 0);
        t15 = g->ecx;
        wr32(sp0 - 0xb8u, t14);
        wr32(sp0 - 0xbcu, 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->ecx = t15;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0xacu;
        t16 = cow_cdecl(g, COW_IMG(0x1025c110u), 5, sp0 - 0x80u, 0x80u, t14, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
        t17 = g->ecx;
        t18 = g->edx;
        t19 = (t16 & 0xffff0000u) | (uint16_t)(rd16(edi + 6u) + rd16(self + 0x350u));
        wr32(sp0 - 0xa4u, t19);
        wr32(sp0 - 0xa0u, 0x80808080u);
        if (rd8(self + 0x370u) == 0u)
        {
            ecx = (t17 & 0xffffff00u) | rd8(self + 0x370u);
            edx = t18;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 4u) + rd16(self + 0x34eu));
            loc_a4 = t19;
            t20 = rd32(self + 0x340u);
            wr32(sp0 - 0xb8u, t20);
            t21 = (ecx & 0xffffff00u) | rd8(self + 0x26u);
            wr32(sp0 - 0xbcu, t21);
            g->ebx = ebx;
            g->esp = sp0 - 0xb4u;
            t22 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), edx, 2, t21, t20);
            if ((uint8_t)t22 != 0u)
            {
                eax = rd32(sp0 - 0xa4u);
                ecx = 0x80509050u;
            }
            else
            {
                eax = rd32(sp0 - 0xa4u);
                ecx = rd32(sp0 - 0xa0u);
            }
        }
        else
        {
            eax = t19;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 4u) + rd16(self + 0x34eu));
            loc_a4 = t19;
            ecx = 0x80909040u;
        }
        wr32(sp0 - 0xb8u, ecx);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)eax);
        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
        g->eax = (uint32_t)(int16_t)eax;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        t23 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)eax, sp0 - 0x80u, 0u, ecx, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), loc_a4, 0x80808080u);
        t24 = g->edx;
        t25 = (t24 & 0xffff0000u) | (uint16_t)(rd16(edi + 0xau) + rd16(self + 0x350u));
        wr32(sp0 - 0xb8u, t25);
        t26 = (t23 & 0xffff0000u) | (uint16_t)(rd16(edi + 8u) + rd16(self + 0x34eu));
        wr32(sp0 - 0xbcu, t26);
        g->ebx = ebx;
        g->ebp = ebp;
        g->edx = t25;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1013cc50u), self, 2, t26, t25);
        t27 = g->edx;
        if (rd16(rd32(rd32(self + 0x1cu) + 0x14b4u)) != 4u)
        {
            edx = t27;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0xcu) + rd16(self + 0x34eu));
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(edi + 0xeu) + rd16(self + 0x350u));
        }
        else
        {
            eax = rd32(self + 0x1cu);
            ecx = rd32(rd32(self + 0x1cu) + 0x14b4u);
            edx = t27;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0xcu) + rd16(self + 0x34eu));
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(edi + 0xeu) + rd16(self + 0x350u));
            if (rd32(eax + 0x14e4u) != 0u)
            {
                eax = rd32(eax + 0x14e4u);
                t28 = (edx & 0xffff0000u) | rd16(eax);
                wr32(sp0 - 0xb8u, t28);
                g->ecx = ecx;
                g->edx = t28;
                g->esp = sp0 - 0xb4u;
                t29 = cow_cdecl(g, COW_IMG(0x1015aab0u), 1, t28);
                t30 = g->ecx;
                t31 = g->edx;
                if (t29 == 0u)
                {
                    ecx = t30;
                }
                else
                {
                    edx = t31;
                    ebp = t29;
                    wr32(sp0 - 0xb8u, 0x80808080u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, ebp);
                    wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                    wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                    g->eax = (uint32_t)(int16_t)edi;
                    g->ecx = (uint32_t)(int16_t)ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t32 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                    t33 = g->ecx;
                    t34 = g->edx;
                    wr32(sp0 - 0xccu, ebp);
                    g->ecx = t33;
                    g->esp = sp0 - 0xc8u;
                    t35 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                    t36 = g->ecx;
                    ecx = t36;
                    ebx = ebx + t35;
                }
                if (rd32(rd32(self + 0x1cu) + 0x14d8u) == 0u)
                {
                    edx = rd32(self + 0x1cu);
                }
                else
                {
                    eax = rd32(rd32(self + 0x1cu) + 0x14d8u);
                    edx = rd32(self + 0x1cu);
                    t37 = (eax & 0xffff0000u) | rd16(eax);
                    wr32(sp0 - 0xb8u, t37);
                    g->edx = edx;
                    g->esp = sp0 - 0x4cu;
                    t38 = cow_bridge_indirect(g, COW_IMG(0x1015ade0u), 0u, 27u, (const uint32_t[]){t37, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u)}, g->ecx, g->edx, g->eax, 108u);
                    t39 = g->edx;
                    if (t38 == 0u)
                    {
                        edx = t39;
                    }
                    else
                    {
                        eax = t38;
                        ebp = t38;
                        wr32(sp0 - 0xb8u, 0x80808080u);
                        wr32(sp0 - 0xbcu, 0u);
                        wr32(sp0 - 0xc0u, ebp);
                        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                        g->eax = eax;
                        g->ecx = (uint32_t)(int16_t)edi;
                        g->edx = (uint32_t)(int16_t)ebx;
                        g->esp = sp0 - 0x9cu;
                        t40 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                        t41 = g->ecx;
                        t42 = g->edx;
                        wr32(sp0 - 0xccu, ebp);
                        g->edx = t42;
                        g->esp = sp0 - 0xc8u;
                        t43 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                        t44 = g->edx;
                        edx = t44;
                        ebx = ebx + t43;
                    }
                }
            }
        }
        if (rd16(rd32(rd32(self + 0x1cu) + 0x14b4u)) == 5u)
        {
            eax = rd32(self + 0x1cu);
            ecx = rd32(rd32(self + 0x1cu) + 0x14b4u);
            if (rd32(eax + 0x14d4u) != 0u)
            {
                eax = rd32(eax + 0x14d4u);
                t45 = (edx & 0xffff0000u) | rd16(eax);
                wr32(sp0 - 0xb8u, t45);
                g->ecx = ecx;
                g->edx = t45;
                g->esp = sp0 - 0x64u;
                t46 = cow_bridge_indirect(g, COW_IMG(0x1015acd0u), 0u, 21u, (const uint32_t[]){t45, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u)}, g->ecx, g->edx, g->eax, 84u);
                t47 = g->ecx;
                t48 = g->edx;
                if (t46 == 0u)
                {
                    ecx = t47;
                }
                else
                {
                    edx = t48;
                    ebp = t46;
                    wr32(sp0 - 0xb8u, 0x80808080u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, ebp);
                    wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                    wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                    g->eax = (uint32_t)(int16_t)edi;
                    g->ecx = (uint32_t)(int16_t)ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t49 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                    t50 = g->ecx;
                    t51 = g->edx;
                    wr32(sp0 - 0xccu, ebp);
                    g->ecx = t50;
                    g->esp = sp0 - 0xc8u;
                    t52 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                    t53 = g->ecx;
                    ecx = t53;
                    ebx = ebx + t52;
                }
                if (rd32(rd32(self + 0x1cu) + 0x14d8u) == 0u)
                {
                    edx = rd32(self + 0x1cu);
                }
                else
                {
                    eax = rd32(rd32(self + 0x1cu) + 0x14d8u);
                    edx = rd32(self + 0x1cu);
                    t54 = (eax & 0xffff0000u) | rd16(eax);
                    wr32(sp0 - 0xb8u, t54);
                    g->edx = edx;
                    g->esp = sp0 - 0x4cu;
                    t55 = cow_bridge_indirect(g, COW_IMG(0x1015ade0u), 0u, 27u, (const uint32_t[]){t54, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u)}, g->ecx, g->edx, g->eax, 108u);
                    t56 = g->edx;
                    if (t55 == 0u)
                    {
                        edx = t56;
                    }
                    else
                    {
                        eax = t55;
                        ebp = t55;
                        wr32(sp0 - 0xb8u, 0x80808080u);
                        wr32(sp0 - 0xbcu, 0u);
                        wr32(sp0 - 0xc0u, ebp);
                        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                        g->eax = eax;
                        g->ecx = (uint32_t)(int16_t)edi;
                        g->edx = (uint32_t)(int16_t)ebx;
                        g->esp = sp0 - 0x9cu;
                        t57 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                        t58 = g->ecx;
                        t59 = g->edx;
                        wr32(sp0 - 0xccu, ebp);
                        g->edx = t59;
                        g->esp = sp0 - 0xc8u;
                        t60 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                        t61 = g->edx;
                        edx = t61;
                        ebx = ebx + t60;
                    }
                }
            }
        }
        if (rd32(rd32(self + 0x1cu) + 0x14e0u) == 0u)
        {
            eax = rd32(rd32(self + 0x1cu) + 0x14e0u);
            ebp = rd32(sp0 - 0xb4u);
        }
        else
        {
            eax = rd32(rd32(self + 0x1cu) + 0x14e0u);
            ebp = rd32(sp0 - 0xb4u);
            if (rd8(eax) != 0u)
            {
                wr32(sp0 - 0xb4u, rd8(eax));
                wr32(sp0 - 0xb8u, 0x1bcu);
                wr32(sp0 - 0xbcu, 0xcu);
                g->eax = eax;
                g->ecx = rd8(eax);
                t62 = rd8(eax);
                g->esp = sp0 - 0xb4u;
                t63 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1bcu);
                t64 = g->ecx;
                wr32(sp0 - 0xb8u, t63);
                wr32(sp0 - 0xbcu, sp0 - 0x90u);
                g->ebx = ebx;
                g->esp = sp0 - 0xa8u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x90u, t63, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
                wr32(sp0 - 0xc0u, 0x80808080u);
                wr32(sp0 - 0xc4u, 0u);
                wr32(sp0 - 0xc8u, sp0 - 0x90u);
                wr32(sp0 - 0xccu, (uint32_t)(int16_t)edi);
                wr32(sp0 - 0xd0u, (uint32_t)(int16_t)ebx);
                g->eax = sp0 - 0x90u;
                g->edx = (uint32_t)(int16_t)ebx;
                g->esp = sp0 - 0xa4u;
                t65 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, sp0 - 0x90u, 0u, 0x80808080u, sp0 - 0x90u, rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u));
                t66 = g->edx;
                eax = t65;
                edx = t66;
            }
        }
        g->esp = sp0 - 0xb0u;
        cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x9cu, edx, 0);
        ebx = rd32(sp0 - 0xacu);
        edi = rd32(sp0 - 0xb0u);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013cec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
