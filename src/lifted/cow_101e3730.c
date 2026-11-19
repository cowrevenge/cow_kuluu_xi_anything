/* f_0x101e3730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e3730(Guest* g)
{
    uint32_t eax;
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
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
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
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e3749u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_101e3749;
    case 0x101e3750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_101e3750;
    case 0x101e375au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e375a;
    case 0x101e3763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3763;
    case 0x101e376au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e376a;
    case 0x101e3771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3771;
    case 0x101e3777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3777;
    case 0x101e377bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e377b;
    case 0x101e377du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e377d;
    case 0x101e3780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_101e3780;
    case 0x101e3789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_101e3789;
    case 0x101e3793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e3793;
    case 0x101e3799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_101e3799;
    case 0x101e37a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e37a0;
    case 0x101e37d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e37d0;
    case 0x101e37d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e37d8;
    case 0x101e37fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e37fd;
    case 0x101e3804u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101e3804;
    case 0x101e3813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_101e3813;
    case 0x101e3817u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_101e3817;
    case 0x101e381du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e381d;
    case 0x101e382eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101e382e;
    case 0x101e3838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101e3838;
    case 0x101e3843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3843;
    case 0x101e384eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e384e;
    case 0x101e385cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_101e385c;
    case 0x101e3866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3866;
    case 0x101e3871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_101e3871;
    case 0x101e38f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101e38f5;
    case 0x101e3901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101e3901;
    case 0x101e3909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_101e3909;
    case 0x101e3913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3913;
    case 0x101e394eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e394e;
    case 0x101e3963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3963;
    case 0x101e3977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3977;
    case 0x101e3994u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3994;
    case 0x101e399au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e399a;
    case 0x101e39b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e39b4;
    case 0x101e39d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e39d1;
    case 0x101e39dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101e39da;
    case 0x101e39ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_101e39eb;
    case 0x101e39f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_101e39f9;
    case 0x101e3a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101e3a0b;
    default: break;
    }
#endif

    COW_AT(101e3730)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr8(self + 0x64u, 1u);
    wr32(self + 0x50u, 0u);
    g->esp = sp0 - 0x50u;
    cow_fastcall(g, COW_IMG(0x101e35b0u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(101e3749)
    if (rd32(self + 0x54u) != 0u)
    {
        ebx = in_ebx;
        loc_44 = in_ebx;
        loc_48 = in_ebp;
        loc_4c = in_esi;
        loc_50 = in_edi;
    }
    else
    {
        eax = rd32(self + 0x54u);
    COW_AT(101e3750)
        wr32(sp0 - 0x54u, 0x1a94u);
        g->eax = eax;
        g->esp = sp0 - 0x48u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1a94u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(101e375a)
        if (eax == 0u)
        {
            ebx = eax;
    COW_AT(101e377b)
            eax = 0u;
        }
        else
        {
            ebx = eax;
    COW_AT(101e3763)
            esi = ebx;
            edi = 0x51u;
L_101e376a: ;
    COW_AT(101e376a)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t6 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7;
            edx = t8;
    COW_AT(101e3771)
            if (edi != 1u)
            {
                esi = esi + 0x54u;
                edi = edi - 1u;
                goto L_101e376a;
            }
    COW_AT(101e3777)
            eax = ebx;
        }
    COW_AT(101e377d)
        wr32(self + 0x54u, eax);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
    COW_AT(101e3780)
    if (rd32(self + 0x58u) != 0u)
    {
        eax = rd32(self + 0x58u);
    }
    else
    {
        eax = rd32(self + 0x58u);
    COW_AT(101e3789)
        wr32(sp0 - 0x54u, 0x747u);
        g->eax = eax;
        g->esp = sp0 - 0x48u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x747u, loc_50, loc_4c);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(101e3793)
        wr32(self + 0x58u, eax);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
    COW_AT(101e3799)
    wr32(sp0 - 0x54u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t12 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    eax = t12;
    COW_AT(101e37a0)
    wr32(sp0 - 0x54u, 0x80808080u);
    t13 = rd32(rd32(eax) + 0xb38u);
    wr32(sp0 - 0x58u, t13);
    wr32(sp0 - 0x5cu, 0x20u);
    wr32(sp0 - 0x60u, 0u);
    t14 = rd32(self + 0x50u) * 0x54u + rd32(self + 0x54u);
    g->eax = rd32(eax);
    t15 = rd32(eax);
    t16 = rd32(self + 0x54u);
    g->esp = sp0 - 0x50u;
    t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), t14, t16, 4, 0u, 0x20u, t13, 0x80808080u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    esi = t14;
    COW_AT(101e37d0)
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0xeu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0u);
    t21 = g->ecx;
    eax = t20;
    ecx = t21;
    COW_AT(101e37d8)
    wr32(esi + 0x4cu, eax);
    wr32(sp0 - 0x5cu, 1u);
    t22 = rd32(self + 0x50u) + 1u;
    wr32(self + 0x50u, t22);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, sp0 - 0x3du);
    wr32(sp0 - 0x68u, sp0 - 0x2cu);
    wr8(sp0 - 0x3eu, 0u);
    wr32(sp0 - 0x3cu, 0u);
    g->eax = sp0 - 0x2cu;
    g->edx = sp0 - 0x3du;
    g->esp = sp0 - 0x58u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 - 0x2cu, sp0 - 0x3du, 0u, 1u);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(101e37fd)
    if ((uint8_t)eax == 0u)
    {
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
    COW_AT(101e3804)
        t26 = rd32(sp0 - 0x2cu);
        wr8(sp0 - 0x3eu, 1u);
        wr32(sp0 - 0x3cu, rd32(t26));
        ecx = t26;
        edx = rd32(t26);
        loc_3c = rd32(t26);
    }
    COW_AT(101e3813)
    wr32(sp0 - 0x30u, 0u);
    edi = 0u;
    loc_30 = 0u;
L_101e3817: ;
    COW_AT(101e3817)
    wr32(sp0 - 0x54u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t27 = cow_cdecl(g, COW_IMG(0x10087cb0u), 1, edi);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(101e381d)
    wr32(sp0 - 0x28u, eax);
    if (eax == 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
        loc_28 = eax;
    COW_AT(101e382e)
        if (rd16(esi) != 0u)
        {
    COW_AT(101e3838)
            wr32(sp0 - 0x54u, esi);
            wr32(sp0 - 0x58u, sp0 - 0x18u);
            g->eax = sp0 - 0x18u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t30 = cow_cdecl(g, COW_IMG(0x10087d10u), 3, sp0 - 0x18u, esi, rd32(sp0 - 0x50u));
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
    COW_AT(101e3843)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(101e384e)
                t33 = rd32(esi + 0x1cu);
                wr32(sp0 - 0x34u, t33);
                if (rd8(self + 0x78u) == 0u)
                {
                    loc_34 = t33;
                    goto L_101e3871;
                }
                ecx = t33;
                ebx = (ebx & 0xffffff00u) | rd8(self + 0x78u);
                loc_34 = t33;
    COW_AT(101e385c)
                wr32(sp0 - 0x54u, sp0 - 0x34u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = sp0 - 0x34u;
                g->esp = sp0 - 0x50u;
                t34 = cow_cdecl(g, COW_IMG(0x101e3650u), 1, sp0 - 0x34u);
                t35 = g->ecx;
                t36 = g->edx;
                eax = t34;
                ecx = t35;
                edx = t36;
    COW_AT(101e3866)
                if ((uint8_t)ebx != (uint8_t)eax) goto L_101e39eb;
                loc_34 = rd32(sp0 - 0x34u);
L_101e3871: ;
    COW_AT(101e3871)
                wr32(sp0 - 0x38u, 0x80808080u);
                t37 = rd32(self + 0x50u) * 0x54u + rd32(self + 0x54u);
                wr32(sp0 - 0x24u, t37);
                t38 = (uint16_t)rd32(sp0 - 0x12u);
                t39 = (t38 >> 4u & 0xfu) * 0xd00u + 0x3800u | (t38 >> 8u & 0xfu) * 0xdu + 0x38u | ((t38 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
                wr32(sp0 - 0x20u, t39);
                if (rd8(sp0 - 0x3eu) == 0u)
                {
                    eax = (((t38 & 0xfu) * 0xdu << 0x10u) + 0x380000u & 0xffffff00u) | rd8(sp0 - 0x3eu);
                    ecx = (t38 & 0xfu) * 3u;
                    ebx = rd32(self + 0x50u) * 0x17u + rd32(self + 0x58u);
                    loc_38 = 0x80808080u;
                    loc_24 = t37;
                    loc_20 = t39;
                }
                else
                {
                    ebx = rd32(self + 0x50u) * 0x17u + rd32(self + 0x58u);
                    loc_24 = t37;
                    loc_20 = t39;
    COW_AT(101e38f5)
                    if (rd32(sp0 - 0x3cu) != rd32(sp0 - 0x18u))
                    {
                        eax = rd32(sp0 - 0x18u);
                        ecx = rd32(sp0 - 0x3cu);
                        loc_38 = 0x80808080u;
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x18u);
                        ecx = rd32(sp0 - 0x3cu);
    COW_AT(101e3901)
                        wr32(sp0 - 0x38u, 0x80509050u);
                        loc_38 = 0x80509050u;
                    }
                }
    COW_AT(101e3909)
                wr32(sp0 - 0x54u, sp0 - 0xfu);
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t40 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ecx, 1, sp0 - 0xfu);
                eax = t40;
    COW_AT(101e3913)
                wr32(sp0 - 0x1cu, ebx + 3u);
                t41 = rd32(sp0 - 0x28u);
                esi = eax;
                edi = ebx + 3u;
                ecx = 5u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t42 = rd32(sp0 - 0x20u);
                t43 = rd32(sp0 - 0x24u);
                wr8(ebx, 0u);
                wr8(ebx + 2u, 0u);
                wr32(t43 + 0x48u, t41);
                wr32(sp0 - 0x54u, t42);
                wr32(sp0 - 0x58u, rd16(t41));
                wr32(sp0 - 0x5cu, 0x45u);
                wr32(sp0 - 0x60u, 0u);
                t44 = rd16(t41);
                g->esp = sp0 - 0x50u;
                cow_fastcall(g, COW_IMG(0x101f4b20u), t43, t44, 4, 0u, 0x45u, t44, t42);
                t45 = g->edx;
                edx = t45;
                esi = t43;
    COW_AT(101e394e)
                t46 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x54u, t46);
                t47 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x58u, t47);
                wr32(sp0 - 0x5cu, 0x27u);
                wr32(sp0 - 0x60u, 1u);
                g->esp = sp0 - 0x50u;
                cow_fastcall(g, COW_IMG(0x101f4b20u), esi, edx, 4, 1u, 0x27u, t47, t46);
    COW_AT(101e3963)
                t48 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x54u, t48);
                t49 = rd32(self + 0x74u) + rd32(self + 0x50u) * 4u;
                wr32(sp0 - 0x58u, t49);
                g->ebx = ebx;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x101e36b0u), 3, t49, t48, rd32(sp0 - 0x50u));
                edi = t48;
    COW_AT(101e3977)
                wr32(sp0 - 0x54u, 0x80808080u);
                t50 = rd32(self + 0x74u) + rd32(self + 0x50u) * 4u;
                wr32(sp0 - 0x58u, t50);
                wr32(sp0 - 0x5cu, 1u);
                wr32(sp0 - 0x60u, 2u);
                g->eax = rd32(self + 0x74u);
                t51 = rd32(self + 0x74u);
                t52 = rd32(self + 0x50u);
                g->esp = sp0 - 0x50u;
                t53 = cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t52, 4, 2u, 1u, t50, 0x80808080u);
                t54 = g->ecx;
                t55 = g->edx;
                eax = t53;
                ecx = t54;
                edx = t55;
    COW_AT(101e3994)
                wr32(sp0 - 0x54u, edi);
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t56 = cow_cdecl(g, COW_IMG(0x101e36a0u), 1, edi);
                eax = t56;
    COW_AT(101e399a)
                wr32(sp0 - 0x58u, (uint8_t)eax);
                wr32(sp0 - 0x5cu, COW_IMG(0x10352ff0u));
                t57 = rd32(self + 0x70u) + rd32(self + 0x50u) * 4u;
                wr32(sp0 - 0x60u, t57);
                g->ebx = ebx;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, t57, COW_IMG(0x10352ff0u), (uint8_t)eax, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    COW_AT(101e39b4)
                wr32(sp0 - 0x54u, 0x80808080u);
                t58 = rd32(self + 0x70u) + rd32(self + 0x50u) * 4u;
                wr32(sp0 - 0x58u, t58);
                wr32(sp0 - 0x5cu, 1u);
                wr32(sp0 - 0x60u, 3u);
                g->eax = rd32(self + 0x70u);
                t59 = rd32(self + 0x70u);
                t60 = rd32(self + 0x50u);
                g->esp = sp0 - 0x50u;
                t61 = cow_fastcall(g, COW_IMG(0x101f4b20u), esi, t60, 4, 3u, 1u, t58, 0x80808080u);
                t62 = g->ecx;
                t63 = g->edx;
                eax = t61;
                ecx = t62;
                edx = t63;
    COW_AT(101e39d1)
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x58u, 0xeu);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t64 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0u);
                t65 = g->ecx;
                t66 = g->edx;
                eax = t64;
                ecx = t65;
                edx = t66;
    COW_AT(101e39da)
                t67 = rd32(sp0 - 0x30u);
                wr32(esi + 0x4cu, eax);
                t68 = rd32(self + 0x50u) + 1u;
                wr32(self + 0x50u, t68);
                eax = t68;
                edi = t67;
            }
        }
    }
L_101e39eb: ;
    COW_AT(101e39eb)
    wr32(sp0 - 0x30u, edi + 1u);
    if ((int32_t)(edi + 1u) < 16)
    {
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = edi + 1u;
        edi = edi + 1u;
        goto L_101e3817;
    }
    edi = edi + 1u;
    COW_AT(101e39f9)
    wr32(sp0 - 0x54u, 1u);
    t69 = (edx & 0xffff0000u) | rd16(self + 0x50u);
    wr32(sp0 - 0x58u, t69);
    t70 = rd32(self + 0x54u);
    wr32(sp0 - 0x5cu, t70);
    g->esi = esi;
    g->edi = edi;
    g->esp = sp0 - 0x50u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, t69, 3, t70, t69, 1u);
    COW_AT(101e3a0b)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e3730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e3749u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e3750u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e375au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101e3763u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e376au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e3771u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e3777u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e377bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e377du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e3780u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x101e3789u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e3793u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e3799u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e37a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x54u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e37d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e37d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e37fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3804u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3813u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3817u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e381du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e382eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3838u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3843u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e384eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e385cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e3866u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x54u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x101e3871u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e38f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x38u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101e3901u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e3909u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101e3913u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x54u, sp0 - 0xfu);
        (void)sp0;
        return 1;
    }
    case 0x101e394eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3963u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3977u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3994u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e399au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e39b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e39d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e39dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e39ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e39f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    case 0x101e3a0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x68u, sp0 - 0x2cu);
        wr32(sp0 - 0x64u, sp0 - 0x3du);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e3730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
