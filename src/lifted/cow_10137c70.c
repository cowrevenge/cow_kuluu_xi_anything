/* f_0x10137c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10137c70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10137c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_10137c94;
    case 0x10137caau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_10137caa;
    case 0x10137cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137cc4;
    case 0x10137ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137ccd;
    case 0x10137cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137cdc;
    case 0x10137ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137ce6;
    case 0x10137d28u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137d28;
    case 0x10137d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137d48;
    case 0x10137d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137d4f;
    case 0x10137d58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10137d58;
    case 0x10137dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10137dd0;
    case 0x10137dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10137dd4;
    case 0x10137df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_10137df3;
    case 0x10137e19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e19;
    case 0x10137e45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e45;
    case 0x10137e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e61;
    case 0x10137e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e74;
    case 0x10137e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e83;
    case 0x10137e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e89;
    case 0x10137e94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137e94;
    case 0x10137eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137eaa;
    case 0x10137eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137eae;
    case 0x10137eb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137eb9;
    case 0x10137ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137ec9;
    case 0x10137eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137ecc;
    case 0x10137edbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137edb;
    case 0x10137eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137eea;
    case 0x10137ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137ef0;
    case 0x10137ef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10137ef4;
    case 0x10137effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10137eff;
    default: break;
    }
#endif

    COW_AT(10137c70)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr8(self + 0x26u, 0u);
    wr8(self + 0x2cu, 0u);
    wr8(self + 0x2du, 0u);
    wr16(self + 0x2eu, 0xffffu);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x10138000u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = rd32(self + 8u);
        edx = t2;
        goto L_10137caa;
    }
    eax = t1;
    ecx = rd32(self + 8u);
    edx = t2;
    COW_AT(10137c94)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 1u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101192b0u), ecx, 2, 1u, 0u);
    wr8(rd32(self + 8u) + 0x62u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10137caa: ;
    COW_AT(10137caa)
    wr32(sp0 - 0x2cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_thiscall(g, COW_IMG(0x101192e0u), ecx, 1, 1u);
    t4 = g->edx;
    t5 = rd8(sp0 + 4u);
    wr8(rd32(self + 8u) + 0x62u, 1u);
    if ((uint8_t)t5 == 0u)
    {
        eax = (t3 & 0xffffff00u) | t5;
        edx = t4;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | t5;
        edx = t4;
    COW_AT(10137cc4)
        if (rd32(self + 8u) != 0u)
        {
    COW_AT(10137ccd)
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t6 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t7 = g->edx;
            if ((uint8_t)t6 == 0u)
            {
                eax = t6;
                edx = t7;
            }
            else
            {
                edx = t7;
    COW_AT(10137cdc)
                if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4eu) == 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                }
                else
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(10137ce6)
                    wr32(sp0 - 0x10u, 0u);
                    wr32(sp0 - 0xcu, 0u);
                    t8 = rd32(eax + 4u);
                    wr32(sp0 - 0x10u, t8);
                    wr32(sp0 - 0x2cu, sp0 - 8u);
                    wr32(sp0 - 0x30u, sp0 - 0x10u);
                    t9 = rd32(eax + 8u);
                    wr32(sp0 - 0xcu, t9);
                    t10 = rd32(self + 8u);
                    wr16(sp0 - 8u, 0u);
                    wr16(sp0 - 6u, 0u);
                    wr16(sp0 - 4u, 0xfff0u);
                    wr16(sp0 - 2u, 0u);
                    g->eax = t9;
                    g->esp = sp0 - 0x28u;
                    t11 = cow_thiscall(g, COW_IMG(0x10118c50u), t10, 2, sp0 - 0x10u, sp0 - 8u);
                    if ((uint8_t)t11 == 0u)
                    {
                        eax = t11;
                    }
                    else
                    {
    COW_AT(10137d28)
                        t12 = (uint32_t)(int16_t)rd16(self + 0x1au) + ((uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x1au) - rd32(sp0 - 0xcu)) >> 0x1fu) & 0xfu) - rd32(sp0 - 0xcu);
                        t13 = rd32(self + 0x58u) - (uint32_t)((int32_t)t12 >> 4u);
                        t14 = rd32(self + 0x58u);
                        wr32(self + 0x1cu, t13);
                        if ((int32_t)(t14 - (uint32_t)((int32_t)t12 >> 4u)) >= 1)
                        {
                            eax = t13;
                        }
                        else
                        {
                            eax = t13;
    COW_AT(10137d48)
                            wr32(self + 0x1cu, 1u);
                        }
                    }
    COW_AT(10137d4f)
                    t15 = rd32(COW_IMG(0x104e1d4cu));
                    wr8(t15 + 0x4cu, 0u);
                    edx = t15;
                }
            }
        }
    }
    COW_AT(10137d58)
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_edi);
    t16 = rd16(self + 0x14u);
    t17 = rd16(self + 0x1cu);
    t18 = rd16(self + 0x58u);
    t19 = rd16(self + 0x1au);
    wr16(sp0 - 0x18u, (uint16_t)(((eax & 0xffff0000u) | t16) + 3u));
    wr32(sp0 - 0x34u, 1u);
    t20 = rd16(self + 0x18u);
    wr16(sp0 - 0x16u, (uint16_t)(((((edx & 0xffff0000u) | (uint16_t)(t17 - t18)) << 4u & 0xffff0000u) | (uint16_t)(t19 + (uint16_t)(t17 * 0x10u - t18 * 0x10u))) - 0xfu));
    t21 = rd32(sp0 - 0x18u);
    wr16(sp0 - 0x14u, (uint16_t)(t21 + ((((eax & 0xffff0000u) | t16) + 3u & 0xffff0000u) | (uint16_t)(t20 - (uint16_t)t16)) - 0x10u));
    wr16(sp0 - 0x12u, (uint16_t)(rd32(sp0 - 0x16u) + 0x10u));
    g->eax = t21 + ((((eax & 0xffff0000u) | t16) + 3u & 0xffff0000u) | (uint16_t)(t20 - (uint16_t)t16)) - 0x10u;
    g->esp = sp0 - 0x30u;
    t22 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 1u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    t23 = cow_thiscall(g, COW_IMG(0x10118980u), rd32(self + 8u), 2, sp0 - 0x18u, 1u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_call_regs(g, COW_IMG(0x10129c60u), t23, rd32(COW_IMG(0x10578158u)), g->edx, 1, 0);
    t26 = g->edx;
    wr32(sp0 - 0x1cu, t25);
    if ((uint16_t)t25 == 0xffffu)
    {
        edx = t26;
        ebp = 0u;
        goto L_10137df3;
    }
    edx = t26;
    ebp = 0u;
    edi = rd32(self + 0x20u);
    loc_1c = t25;
L_10137dd0: ;
    COW_AT(10137dd0)
    if ((int32_t)edi <= 0) goto L_10137df3;
    COW_AT(10137dd4)
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x20u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x1cu, sp0 - 0x20u);
    t27 = g->edx;
    if (rd16(sp0 - 0x1cu) != 0xffffu)
    {
        edx = t27;
        ebp = ebp + 1u;
        edi = edi - 1u;
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10137dd0;
    }
    edx = t27;
    ebp = ebp + 1u;
L_10137df3: ;
    COW_AT(10137df3)
    g->edx = edx;
    t28 = rd32(self + 0x1cu);
    t29 = rd32(COW_IMG(0x10578158u));
    t30 = rd32(self + 0x58u);
    g->esp = sp0 - 0x30u;
    t31 = cow_call_regs(g, COW_IMG(0x10129c60u), t28, t29, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 + 4u, t31);
    wr32(self + 0x28u, 0u);
    if ((uint16_t)t31 == 0xffffu)
    {
        ecx = t32;
        edx = t33;
        goto L_10137edb;
    }
    eax = t31;
    edi = ebp + t30 - t28;
L_10137e19: ;
    COW_AT(10137e19)
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, sp0 + 4u);
    g->edx = sp0 - 0x20u;
    t34 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x101292e0u), sp0 + 4u, t34, g->edx, 0, 2, sp0 + 4u, sp0 - 0x20u);
    t35 = g->ecx;
    t36 = g->edx;
    t37 = rd8(rd32(sp0 - 0x20u) + 0x15u);
    wr8(rd32(sp0 - 0x20u) + 0x15u, t37 & 0x7fu);
    if (edi != 0u)
    {
        ecx = (t35 & 0xffffff00u) | (t37 & 0x7fu);
        edx = t36;
        goto L_10137ecc;
    }
    ecx = (t35 & 0xffffff00u) | (t37 & 0x7fu);
    edx = t36;
    ebp = eax;
    COW_AT(10137e45)
    t38 = rd8(rd32(sp0 - 0x20u) + 0x15u);
    wr8(rd32(sp0 - 0x20u) + 0x15u, (uint8_t)(t38 | 0x80u));
    if ((rd8(rd32(sp0 - 0x20u) + 0x15u) & 0xfu) != 1u)
    {
        ecx = ((ecx | t38) & 0xffffff00u) | (rd8(rd32(sp0 - 0x20u) + 0x15u) & 0xfu);
        goto L_10137ecc;
    }
    eax = rd32(sp0 - 0x20u);
    ecx = ((ecx | t38) & 0xffffff00u) | (rd8(rd32(sp0 - 0x20u) + 0x15u) & 0xfu);
    COW_AT(10137e61)
    wr8(self + 0x26u, (uint8_t)ecx);
    wr32(self + 0x28u, eax);
    if (rd8(eax) - 1u > 0xddu)
    {
        ecx = rd8(eax) - 1u;
        goto L_10137eae;
    }
    ecx = rd8(eax) - 1u;
    COW_AT(10137e74)
    t39 = rd32(COW_IMG(0x10137f08u) + rd8(COW_IMG(0x10137f14u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x10137f14u) + ecx);
    switch (t39 - RD)
    {
    case 0x10137e83u: goto L_10137e83;
    case 0x10137e89u: goto L_10137e89;
    case 0x10137eaeu: goto L_10137eae;
    default: rt_fatal(g, COW_IMG(0x10137e7cu), "switch");
    }
    return;
L_10137e83: ;
    COW_AT(10137e83)
    wr8(self + 0x2du, 1u);
L_10137eaa: ;
    COW_AT(10137eaa)
    wr8(self + 0x2cu, 1u);
L_10137eae: ;
    COW_AT(10137eae)
    t43 = rd8(self + 0x2cu);
    wr16(self + 0x2eu, (uint16_t)ebp);
    if ((uint8_t)t43 != 0u)
    {
        ecx = (ecx & 0xffffff00u) | t43;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t43;
    COW_AT(10137eb9)
        wr32(sp0 - 0x34u, eax + 0x18u);
        g->ebx = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t44 = cow_call_regs(g, COW_IMG(0x1008a970u), eax + 0x18u, g->ecx, g->edx, 1, 1, eax + 0x18u);
        t45 = g->ecx;
        t46 = g->edx;
        if ((uint8_t)t44 != 1u)
        {
            ecx = t45;
            edx = t46;
        }
        else
        {
            ecx = t45;
            edx = t46;
    COW_AT(10137ec9)
            wr8(self + 0x26u, 0u);
        }
    }
L_10137ecc: ;
    COW_AT(10137ecc)
    if ((uint16_t)rd32(sp0 + 4u) != 0xffffu)
    {
        eax = rd32(sp0 + 4u);
        edi = edi - 1u;
        goto L_10137e19;
    }
L_10137edb: ;
    COW_AT(10137edb)
    if (rd8(self + 0x26u) == 0u)
    {
        eax = rd32(self + 0xd8u);
        ebp = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
    }
    else
    {
        ebp = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
    COW_AT(10137eea)
        eax = rd32(self + 0xdcu);
    }
    COW_AT(10137ef0)
    if (eax != 0u)
    {
    COW_AT(10137ef4)
        wr32(sp0 - 0x2cu, eax);
        wr32(sp0 - 0x30u, 1u);
        g->edi = edi;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x1011ae50u), rd32(self + 8u), 2, 1u, eax);
    }
    COW_AT(10137eff)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_10137e89: ;
    COW_AT(10137e89)
    wr8(self + 0x2du, 1u);
    if (rd8(eax) != 0xfu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10137eae;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    COW_AT(10137e94)
    wr32(sp0 - 0x34u, eax + 0x18u);
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t40 = cow_call_regs(g, COW_IMG(0x1008a970u), eax + 0x18u, g->ecx, g->edx, 1, 1, eax + 0x18u);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 1u)
    {
        eax = rd32(sp0 - 0x20u);
        ecx = t41;
        edx = t42;
        goto L_10137eae;
    }
    eax = rd32(sp0 - 0x20u);
    ecx = t41;
    edx = t42;
    goto L_10137eaa;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10137c70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10137c94u:
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
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137caau:
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
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137cc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137ccdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137cdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137ce6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137d28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10137d48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10137d4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10137d58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137dd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137dd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137df3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137e19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137e45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137e61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137e74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137e83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137e89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137e94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10137eaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10137eaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10137eb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10137ec9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10137eccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10137edbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137eeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137ef0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10137ef4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10137effu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10137c70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10137c70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
