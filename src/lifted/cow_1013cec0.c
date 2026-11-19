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
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
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
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 224u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013ced4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xa8u); goto E_1013ced4;
    case 0x1013cee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); in_esi = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xa8u); goto E_1013cee6;
    case 0x1013ceebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); in_esi = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xa8u); goto E_1013ceeb;
    case 0x1013cef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); in_esi = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xa8u); goto E_1013cef0;
    case 0x1013cef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); in_esi = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xa8u); goto E_1013cef5;
    case 0x1013cf3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013cf3c;
    case 0x1013cf49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013cf49;
    case 0x1013cf58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013cf58;
    case 0x1013cf99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013cf99;
    case 0x1013d000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1013d000;
    case 0x1013d007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1013d007;
    case 0x1013d02au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d02a;
    case 0x1013d02eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1013d02e;
    case 0x1013d08au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d08a;
    case 0x1013d094u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d094;
    case 0x1013d0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d0a6;
    case 0x1013d0c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d0c6;
    case 0x1013d0d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d0d3;
    case 0x1013d0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d0e5;
    case 0x1013d105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d105;
    case 0x1013d114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d114;
    case 0x1013d11eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d11e;
    case 0x1013d130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d130;
    case 0x1013d150u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d150;
    case 0x1013d15du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d15d;
    case 0x1013d16fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d16f;
    case 0x1013d18fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013d18f;
    case 0x1013d19du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1013d19d;
    case 0x1013d1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1013d1a2;
    case 0x1013d1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1013d1dd;
    case 0x1013d1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); goto E_1013d1e8;
    default: break;
    }
#endif

    COW_AT(1013cec0)
    wr32(sp0 - 0xa8u, in_esi);
    if (rd32(self + 0x1cu) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_a8 = in_esi;
    }
    else
    {
        ecx = rd32(self + 0x1cu);
    COW_AT(1013ced4)
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
    COW_AT(1013cee6)
            if (eax == 2u) goto L_1013cef0;
    COW_AT(1013ceeb)
            if (eax != 3u) goto L_1013cef5;
L_1013cef0: ;
    COW_AT(1013cef0)
            eax = 1u;
        }
L_1013cef5: ;
    COW_AT(1013cef5)
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
            eax = (t4 & 0xffffff00u) | rd8(self + 0x370u);
        }
        else
        {
            edx = t5;
            ebx = t3;
            ebp = t2;
            edi = COW_IMG(0x1036fa28u) + eax * 0x12u;
    COW_AT(1013cf3c)
            if (rd32(rd32(self + 0x1cu) + 0x14c0u) == 0u)
            {
                eax = rd32(rd32(self + 0x1cu) + 0x14c0u);
            }
            else
            {
                eax = rd32(rd32(self + 0x1cu) + 0x14c0u);
                ecx = rd32(self + 0x1cu);
    COW_AT(1013cf49)
                if (1u >= rd16(eax))
                {
                    eax = 1u < rd16(eax);
                    edx = (edx & 0xffff0000u) | 1u;
                }
                else
                {
    COW_AT(1013cf58)
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
                    g->eax = sp0 - 0x90u;
                    g->edx = t8;
                    g->esp = sp0 - 0xc0u;
                    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t7, 7, ebx + 0x22u, ebp + 0x16u, sp0 - 0x90u, 0x80909040u, 1u, 0x3f800000u, 0x3f800000u);
                    t10 = g->edx;
                    eax = t9;
                    edx = t10;
                    ebx = ebx + 0x22u;
                    ebp = ebp + 0x16u;
                }
            }
        }
    COW_AT(1013cf99)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t11 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x9cu, 0);
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_thiscall(g, COW_IMG(0x1015b270u), rd32(self + 0x1cu), 0);
        t14 = g->edx;
        wr32(sp0 - 0xb8u, t13);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        g->ebx = ebx;
        g->edx = t14;
        t15 = cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0x9cu, t13);
        t16 = g->edx;
        t17 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x9cu, 0);
        t18 = g->ecx;
        wr32(sp0 - 0xb8u, t17);
        wr32(sp0 - 0xbcu, 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->esp = sp0 - 0xacu;
        t19 = cow_call_regs(g, COW_IMG(0x1025c110u), g->eax, t18, sp0 - 0x80u, 1, 5, sp0 - 0x80u, 0x80u, t17, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u));
        t20 = g->ecx;
        t21 = g->edx;
        t22 = (t19 & 0xffff0000u) | (uint16_t)(rd16(edi + 6u) + rd16(self + 0x350u));
        wr32(sp0 - 0xa4u, t22);
        wr32(sp0 - 0xa0u, 0x80808080u);
        if (rd8(self + 0x370u) == 0u)
        {
            ecx = (t20 & 0xffffff00u) | rd8(self + 0x370u);
            edx = t21;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 4u) + rd16(self + 0x34eu));
            loc_a4 = t22;
    COW_AT(1013d007)
            t23 = rd32(self + 0x340u);
            wr32(sp0 - 0xb8u, t23);
            t24 = (ecx & 0xffffff00u) | rd8(self + 0x26u);
            wr32(sp0 - 0xbcu, t24);
            g->ebx = ebx;
            g->eax = t23;
            g->esp = sp0 - 0xb4u;
            t25 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), edx, 2, t24, t23);
            if ((uint8_t)t25 != 0u)
            {
                eax = rd32(sp0 - 0xa4u);
                ecx = 0x80509050u;
                loc_a4 = rd32(sp0 - 0xa4u);
                loc_a0 = 0x80808080u;
            }
            else
            {
                eax = rd32(sp0 - 0xa4u);
    COW_AT(1013d02a)
                ecx = rd32(sp0 - 0xa0u);
                loc_a4 = rd32(sp0 - 0xa4u);
                loc_a0 = rd32(sp0 - 0xa0u);
            }
        }
        else
        {
            eax = t22;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 4u) + rd16(self + 0x34eu));
            loc_a4 = t22;
    COW_AT(1013d000)
            ecx = 0x80909040u;
            loc_a0 = 0x80808080u;
        }
    COW_AT(1013d02e)
        wr32(sp0 - 0xb8u, ecx);
        wr32(sp0 - 0xbcu, 0u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)eax);
        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
        g->eax = (uint32_t)(int16_t)eax;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        t26 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)eax, sp0 - 0x80u, 0u, ecx, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), loc_a4, loc_a0);
        t27 = g->edx;
        t28 = (t27 & 0xffff0000u) | (uint16_t)(rd16(edi + 0xau) + rd16(self + 0x350u));
        wr32(sp0 - 0xb8u, t28);
        t29 = (t26 & 0xffff0000u) | (uint16_t)(rd16(edi + 8u) + rd16(self + 0x34eu));
        wr32(sp0 - 0xbcu, t29);
        g->ebx = ebx;
        g->ebp = ebp;
        g->edx = t28;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1013cc50u), self, 2, t29, t28);
        t30 = g->edx;
        if (rd16(rd32(rd32(self + 0x1cu) + 0x14b4u)) != 4u)
        {
            edx = t30;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0xcu) + rd16(self + 0x34eu));
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(edi + 0xeu) + rd16(self + 0x350u));
        }
        else
        {
            eax = rd32(self + 0x1cu);
            ecx = rd32(rd32(self + 0x1cu) + 0x14b4u);
            edx = t30;
            ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(edi + 0xcu) + rd16(self + 0x34eu));
            edi = (edi & 0xffff0000u) | (uint16_t)(rd16(edi + 0xeu) + rd16(self + 0x350u));
    COW_AT(1013d08a)
            if (rd32(eax + 0x14e4u) != 0u)
            {
                eax = rd32(eax + 0x14e4u);
    COW_AT(1013d094)
                t31 = (edx & 0xffff0000u) | rd16(eax);
                wr32(sp0 - 0xb8u, t31);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t31;
                g->esp = sp0 - 0xb4u;
                t32 = cow_cdecl(g, COW_IMG(0x1015aab0u), 1, t31);
                t33 = g->ecx;
                t34 = g->edx;
                if (t32 == 0u)
                {
                    ecx = t33;
                }
                else
                {
                    edx = t34;
                    ebp = t32;
    COW_AT(1013d0a6)
                    wr32(sp0 - 0xb8u, 0x80808080u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, ebp);
                    wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                    wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                    g->eax = (uint32_t)(int16_t)edi;
                    g->ecx = (uint32_t)(int16_t)ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t35 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                    t36 = g->ecx;
                    t37 = g->edx;
                    wr32(sp0 - 0xccu, ebp);
                    g->ecx = t36;
                    g->esp = sp0 - 0xc8u;
                    t38 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                    t39 = g->ecx;
                    ecx = t39;
                    ebx = ebx + t38;
                }
    COW_AT(1013d0c6)
                if (rd32(rd32(self + 0x1cu) + 0x14d8u) == 0u)
                {
                    edx = rd32(self + 0x1cu);
                }
                else
                {
                    eax = rd32(rd32(self + 0x1cu) + 0x14d8u);
                    edx = rd32(self + 0x1cu);
    COW_AT(1013d0d3)
                    t40 = (eax & 0xffff0000u) | rd16(eax);
                    wr32(sp0 - 0xb8u, t40);
                    g->eax = t40;
                    g->edx = edx;
                    g->esp = sp0 - 0x4cu;
                    t41 = cow_bridge_indirect(g, COW_IMG(0x1015ade0u), 0u, 27u, (const uint32_t[]){t40, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u)}, g->ecx, g->edx, g->eax, 108u);
                    t42 = g->edx;
                    if (t41 == 0u)
                    {
                        edx = t42;
                    }
                    else
                    {
                        eax = t41;
                        ebp = t41;
    COW_AT(1013d0e5)
                        wr32(sp0 - 0xb8u, 0x80808080u);
                        wr32(sp0 - 0xbcu, 0u);
                        wr32(sp0 - 0xc0u, ebp);
                        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                        g->eax = eax;
                        g->ecx = (uint32_t)(int16_t)edi;
                        g->edx = (uint32_t)(int16_t)ebx;
                        g->esp = sp0 - 0x9cu;
                        t43 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                        t44 = g->ecx;
                        t45 = g->edx;
                        wr32(sp0 - 0xccu, ebp);
                        g->edx = t45;
                        g->esp = sp0 - 0xc8u;
                        t46 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                        t47 = g->edx;
                        edx = t47;
                        ebx = ebx + t46;
                    }
                }
            }
        }
    COW_AT(1013d105)
        if (rd16(rd32(rd32(self + 0x1cu) + 0x14b4u)) == 5u)
        {
            eax = rd32(self + 0x1cu);
            ecx = rd32(rd32(self + 0x1cu) + 0x14b4u);
    COW_AT(1013d114)
            if (rd32(eax + 0x14d4u) != 0u)
            {
                eax = rd32(eax + 0x14d4u);
    COW_AT(1013d11e)
                t48 = (edx & 0xffff0000u) | rd16(eax);
                wr32(sp0 - 0xb8u, t48);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t48;
                g->esp = sp0 - 0x64u;
                t49 = cow_bridge_indirect(g, COW_IMG(0x1015acd0u), 0u, 21u, (const uint32_t[]){t48, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u)}, g->ecx, g->edx, g->eax, 84u);
                t50 = g->ecx;
                t51 = g->edx;
                if (t49 == 0u)
                {
                    ecx = t50;
                }
                else
                {
                    edx = t51;
                    ebp = t49;
    COW_AT(1013d130)
                    wr32(sp0 - 0xb8u, 0x80808080u);
                    wr32(sp0 - 0xbcu, 0u);
                    wr32(sp0 - 0xc0u, ebp);
                    wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                    wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                    g->eax = (uint32_t)(int16_t)edi;
                    g->ecx = (uint32_t)(int16_t)ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t52 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                    t53 = g->ecx;
                    t54 = g->edx;
                    wr32(sp0 - 0xccu, ebp);
                    g->ecx = t53;
                    g->esp = sp0 - 0xc8u;
                    t55 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                    t56 = g->ecx;
                    ecx = t56;
                    ebx = ebx + t55;
                }
    COW_AT(1013d150)
                if (rd32(rd32(self + 0x1cu) + 0x14d8u) == 0u)
                {
                    edx = rd32(self + 0x1cu);
                }
                else
                {
                    eax = rd32(rd32(self + 0x1cu) + 0x14d8u);
                    edx = rd32(self + 0x1cu);
    COW_AT(1013d15d)
                    t57 = (eax & 0xffff0000u) | rd16(eax);
                    wr32(sp0 - 0xb8u, t57);
                    g->eax = t57;
                    g->edx = edx;
                    g->esp = sp0 - 0x4cu;
                    t58 = cow_bridge_indirect(g, COW_IMG(0x1015ade0u), 0u, 27u, (const uint32_t[]){t57, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u)}, g->ecx, g->edx, g->eax, 108u);
                    t59 = g->edx;
                    if (t58 == 0u)
                    {
                        edx = t59;
                    }
                    else
                    {
                        eax = t58;
                        ebp = t58;
    COW_AT(1013d16f)
                        wr32(sp0 - 0xb8u, 0x80808080u);
                        wr32(sp0 - 0xbcu, 0u);
                        wr32(sp0 - 0xc0u, ebp);
                        wr32(sp0 - 0xc4u, (uint32_t)(int16_t)edi);
                        wr32(sp0 - 0xc8u, (uint32_t)(int16_t)ebx);
                        g->eax = eax;
                        g->ecx = (uint32_t)(int16_t)edi;
                        g->edx = (uint32_t)(int16_t)ebx;
                        g->esp = sp0 - 0x9cu;
                        t60 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, ebp, 0u, 0x80808080u, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                        t61 = g->ecx;
                        t62 = g->edx;
                        wr32(sp0 - 0xccu, ebp);
                        g->edx = t62;
                        g->esp = sp0 - 0xc8u;
                        t63 = cow_cdecl(g, COW_IMG(0x1011d000u), 1, ebp);
                        t64 = g->edx;
                        edx = t64;
                        ebx = ebx + t63;
                    }
                }
            }
        }
    COW_AT(1013d18f)
        if (rd32(rd32(self + 0x1cu) + 0x14e0u) == 0u)
        {
            eax = rd32(rd32(self + 0x1cu) + 0x14e0u);
            ebp = rd32(sp0 - 0xb4u);
        }
        else
        {
            eax = rd32(rd32(self + 0x1cu) + 0x14e0u);
            ebp = rd32(sp0 - 0xb4u);
    COW_AT(1013d19d)
            if (rd8(eax) != 0u)
            {
    COW_AT(1013d1a2)
                wr32(sp0 - 0xb4u, rd8(eax));
                wr32(sp0 - 0xb8u, 0x1bcu);
                wr32(sp0 - 0xbcu, 0xcu);
                g->eax = eax;
                g->ecx = rd8(eax);
                t65 = rd8(eax);
                g->esp = sp0 - 0xb4u;
                t66 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1bcu);
                t67 = g->ecx;
                wr32(sp0 - 0xb8u, t66);
                wr32(sp0 - 0xbcu, sp0 - 0x90u);
                g->ebx = ebx;
                g->esp = sp0 - 0xa8u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x90u, t66, rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
                wr32(sp0 - 0xc0u, 0x80808080u);
                wr32(sp0 - 0xc4u, 0u);
                wr32(sp0 - 0xc8u, sp0 - 0x90u);
                wr32(sp0 - 0xccu, (uint32_t)(int16_t)edi);
                wr32(sp0 - 0xd0u, (uint32_t)(int16_t)ebx);
                g->eax = sp0 - 0x90u;
                g->edx = (uint32_t)(int16_t)ebx;
                g->esp = sp0 - 0xa4u;
                t68 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, sp0 - 0x90u, 0u, 0x80808080u, sp0 - 0x90u, rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u));
                t69 = g->edx;
                eax = t68;
                edx = t69;
            }
        }
    COW_AT(1013d1dd)
        g->esp = sp0 - 0xb0u;
        cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0x9cu, edx, 0);
        ebx = rd32(sp0 - 0xacu);
        edi = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
    }
    COW_AT(1013d1e8)
    g->ebx = ebx;
    g->esi = loc_a8;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013cec0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013ced4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x1013cee6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        in_esi = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013ceebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        in_esi = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013cef0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        in_esi = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013cef5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        in_esi = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013cf3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013cf49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013cf58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013cf99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d000u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x1013d007u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x1013d02au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1013d02eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1013d08au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1013d094u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1013d0a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1013d0c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d0d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d0e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d105u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d114u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d11eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d130u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d150u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d15du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d16fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d18fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x1013d19du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013d1a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013d1ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1013d1e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cec0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1013cec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
