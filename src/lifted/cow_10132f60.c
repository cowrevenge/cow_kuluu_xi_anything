/* f_0x10132f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10132f60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10132f90u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10132f90;
    case 0x10132f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10132f91;
    case 0x10132fa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10132fa8;
    case 0x10132fcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10132fcd;
    case 0x10132fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10132fe5;
    case 0x10132ffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10132ffe;
    case 0x10133008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10133008;
    case 0x10133017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10133017;
    case 0x1013303fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1013303f;
    case 0x10133066u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10133066;
    case 0x10133073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10133073;
    case 0x101330a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101330a8;
    case 0x101330bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101330bc;
    case 0x101330ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101330dd;
    case 0x101330edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_101330ed;
    case 0x101330f0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_101330f0;
    case 0x101330fau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_101330fa;
    case 0x10133101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10133101;
    case 0x1013310cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1013310c;
    case 0x10133123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_10133123;
    default: break;
    }
#endif

    COW_AT(10132f60)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((int16_t)rd16(t1 + 0x58u) < 1)
    {
        edx = in_edx;
        ebx = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        edi = t1;
    COW_AT(10132f90)
        wr32(sp0 - 0x20u, in_ebx);
        eax = 0u;
        edx = in_edx;
        ebp = 1u;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        loc_20 = in_ebx;
L_10132f91: ;
    COW_AT(10132f91)
        wr32(sp0 - 0x24u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_stdcall(g, COW_IMG(0x10131680u), 1, ebp);
        t3 = g->edx;
        wr32(sp0 - 0xcu, (uint32_t)(int16_t)t2);
        if ((int16_t)t2 < 0)
        {
            eax = t2;
        }
        else
        {
            edx = t3;
            ebx = (uint32_t)(int16_t)t2;
            loc_c = (uint32_t)(int16_t)t2;
    COW_AT(10132fa8)
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, ebp);
            wr32(sp0 - 0x30u, sp0 - 8u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = sp0 - 8u;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t4 = cow_thiscall(g, COW_IMG(0x10118900u), edi, 4, sp0 - 8u, ebp, 1u, 1u);
            t5 = g->ecx;
            t6 = g->edx;
            t7 = rd8(ebx + self + 0x22u);
            t8 = rd32(ebx * 4u + self + 0x34u);
            wr8(sp0 - 0x10u, (uint8_t)t7);
            if ((uint8_t)t7 == 0u)
            {
                eax = (t4 & 0xffffff00u) | t7;
                ecx = t5;
                edx = t6;
            }
            else
            {
                eax = (t4 & 0xffffff00u) | t7;
                edx = t6;
                ebx = t8;
    COW_AT(10132fcd)
                t9 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x24u, t9);
                wr32(sp0 - 0x28u, ebx);
                g->eax = eax;
                g->ecx = t9;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t10 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, ebx, t9);
                t11 = g->ecx;
                t12 = g->edx;
                if (t10 == 0u)
                {
                    eax = t10;
                    ecx = t11;
                    edx = t12;
                }
                else
                {
                    eax = t10;
                    edi = t10;
    COW_AT(10132fe5)
                    wr32(sp0 - 0x24u, rd16(edi));
                    g->eax = eax;
                    g->edx = rd16(edi);
                    t13 = rd32(COW_IMG(0x10621808u));
                    t14 = rd16(edi);
                    g->esp = sp0 - 0x20u;
                    t15 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t13, 1, t14);
                    t16 = g->ecx;
                    t17 = g->edx;
                    if (t15 == 0u)
                    {
                        eax = t15;
                        ecx = t16;
                        edx = t17;
                    }
                    else
                    {
                        eax = t15;
                        ecx = t16;
    COW_AT(10132ffe)
                        if (rd32(eax + 0x14c0u) == 0u) goto L_1013303f;
                        eax = rd32(eax + 0x14c0u);
    COW_AT(10133008)
                        if (1u >= rd16(eax))
                        {
                            ecx = (ecx & 0xffff0000u) | 1u;
                            goto L_1013303f;
                        }
    COW_AT(10133017)
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0x80808080u);
                        t18 = rd32(edi + 4u);
                        wr32(sp0 - 0x2cu, t18);
                        wr32(sp0 - 0x30u, 0x3f800000u);
                        t19 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x34u, t19);
                        t20 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x38u, t20);
                        wr32(sp0 - 0x3cu, edi);
                        g->eax = t19;
                        g->edx = t18;
                        t21 = rd32(COW_IMG(0x10621808u));
                        g->esp = sp0 - 0x20u;
                        t22 = cow_thiscall(g, COW_IMG(0x1015bdb0u), t21, 7, edi, t20, t19, 0x3f800000u, t18, 0x80808080u, 0u);
                        t23 = g->ecx;
                        t24 = g->edx;
                        eax = t22;
                        ecx = t23;
                        edx = t24;
L_10133066: ;
    COW_AT(10133066)
                        wr32(sp0 - 0x24u, ebx);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t32 = cow_cdecl(g, COW_IMG(0x10132db0u), 1, ebx);
                        t33 = g->ecx;
                        t34 = g->edx;
                        if (t32 == 0u)
                        {
                            eax = t32;
                            ecx = t33;
                            edx = t34;
                        }
                        else
                        {
                            eax = t32;
    COW_AT(10133073)
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 0u);
                            wr32(sp0 - 0x2cu, 0x80808080u);
                            t35 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                            wr32(sp0 - 0x30u, t35);
                            t36 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x10u;
                            wr32(sp0 - 0x34u, t36);
                            g->esp = sp0 - 0x20u;
                            cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t36, t35, 0x80808080u, 0u, 0u);
                            t37 = rd32(sp0 - 6u);
                            wr32(sp0 - 0x24u, t37);
                            t38 = rd32(sp0 - 8u);
                            wr32(sp0 - 0x28u, t38);
                            wr32(sp0 - 0x2cu, ebx);
                            wr32(sp0 - 0x30u, ebp - 1u);
                            g->eax = t38;
                            g->ecx = self;
                            g->edx = t37;
                            t39 = cow_stdcall(g, COW_IMG(0x10132e60u), 4, ebp - 1u, ebx, t38, t37);
                            t40 = g->ecx;
                            t41 = g->edx;
                            eax = t39;
                            ecx = t40;
                            edx = t41;
                        }
                    }
                }
            }
    COW_AT(101330a8)
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t42 = cow_stdcall(g, COW_IMG(0x100fd350u), 0);
            if ((1u << (rd32(sp0 - 0xcu) & 0x1fu) & t42) == 0u)
            {
                eax = t42;
            }
            else
            {
                edx = 1u << (rd32(sp0 - 0xcu) & 0x1fu);
    COW_AT(101330bc)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x80808080u);
                t43 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                wr32(sp0 - 0x30u, t43);
                t44 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 1u;
                wr32(sp0 - 0x34u, t44);
                g->eax = t43;
                g->esp = sp0 - 0x20u;
                t45 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x1c8u), 5, t44, t43, 0x80808080u, 0u, 0u);
                eax = t45;
            }
        }
    COW_AT(101330dd)
        if ((int32_t)(ebp + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
        {
            edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
            ebp = ebp + 1u;
            edi = rd32(self + 8u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_10132f91;
        }
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    COW_AT(101330ed)
        ebx = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(101330f0)
    if (rd32(COW_IMG(0x105783e4u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105783e4u));
    COW_AT(101330fa)
        if (rd8(ecx + 0x1fu) == 0u)
        {
            eax = rd8(ecx + 0x1fu);
        }
        else
        {
            eax = rd8(ecx + 0x1fu);
    COW_AT(10133101)
            esi = self + 0x88u;
            edi = 0xau;
L_1013310c: ;
    COW_AT(1013310c)
            wr32(sp0 - 0x20u, 0x80808080u);
            t46 = (eax & 0xffff0000u) | rd16(esi + 0x1eu);
            wr32(sp0 - 0x24u, t46);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t47 = cow_call_regs(g, COW_IMG(0x10131440u), t46, esi, g->edx, 0, 2, t46, 0x80808080u);
            t48 = g->edx;
            if (edi != 1u)
            {
                eax = t47;
                edx = t48;
                esi = esi + 0x20u;
                edi = edi - 1u;
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                goto L_1013310c;
            }
            eax = t47;
            edx = t48;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    COW_AT(10133123)
    g->ebx = ebx;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    g->edx = edx;
    return eax;
L_1013303f: ;
    COW_AT(1013303f)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t25 = rd32(sp0 - 6u);
    wr32(sp0 - 0x34u, t25);
    t26 = rd32(sp0 - 8u);
    wr32(sp0 - 0x38u, t26);
    t27 = (ecx & 0xffff0000u) | rd16(edi);
    wr32(sp0 - 0x3cu, t27);
    g->eax = t26;
    g->edx = t25;
    t28 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x20u;
    t29 = cow_thiscall(g, COW_IMG(0x1015bd70u), t28, 7, t27, t26, t25, 0x3f800000u, 0u, 0x80808080u, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    goto L_10133066;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10132f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10132f90u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10132f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10132fa8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10132fcdu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10132fe5u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10132ffeu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10133008u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10133017u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1013303fu:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10133066u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10133073u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101330a8u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101330bcu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101330ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101330edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101330f0u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101330fau:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10133101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1013310cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10133123u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10132f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10132f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
