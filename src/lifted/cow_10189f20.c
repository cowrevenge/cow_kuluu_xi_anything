/* f_0x10189f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10189f20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t loc_50;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10189f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10189f66;
    case 0x10189f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189f7f;
    case 0x10189f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189f81;
    case 0x10189fafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189faf;
    case 0x10189fb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fb1;
    case 0x10189fb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fb5;
    case 0x10189fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fbc;
    case 0x10189fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fc0;
    case 0x10189fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fc2;
    case 0x10189fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fcc;
    case 0x10189fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fda;
    case 0x10189fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fde;
    case 0x10189fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fe2;
    case 0x10189fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fe6;
    case 0x10189fe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fe8;
    case 0x10189fecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189fec;
    case 0x10189ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189ffa;
    case 0x1018a00au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a00a;
    case 0x1018a01eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a01e;
    case 0x1018a036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a036;
    case 0x1018a04au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a04a;
    case 0x1018a074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a074;
    case 0x1018a0a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1018a0a4;
    case 0x1018a0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1018a0a6;
    case 0x1018a0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018a0bb;
    case 0x1018a0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); goto E_1018a0c3;
    case 0x1018a0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); goto E_1018a0c9;
    case 0x1018a0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); goto E_1018a0d9;
    default: break;
    }
#endif

    COW_AT(10189f20)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, sp0 - 0x4cu);
    wr32(sp0 - 0x3cu, self);
    g->eax = sp0 - 0x4cu;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x4cu);
    t2 = g->edx;
    wr32(sp0 - 0x60u, 0x6f3c9000u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x44u, 1, 0x6f3c9000u);
    t4 = g->edx;
    wr32(sp0 - 0x60u, 0x6f3c9000u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x48u, 1, 0x6f3c9000u);
    t6 = g->edx;
    wr32(sp0 - 0x40u, 0u);
    if (rd32(self + 0xcu) == 0u)
    {
        edi = 0u;
        loc_50 = in_ebx;
        loc_54 = in_ebp;
        loc_58 = in_esi;
        loc_5c = in_edi;
        goto L_1018a0c3;
    }
    eax = t5;
    edx = t6;
    esi = rd32(self + 0xcu);
    COW_AT(10189f66)
    wr32(sp0 - 0x60u, 0x6f646e69u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t7 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, esi, g->edx, 0, 3, sp0 - 0x34u, 1u, 0x6f646e69u);
    t8 = g->edx;
    if (rd32(t7) == 0u)
    {
        eax = rd32(t7);
        edx = t8;
        ebx = 0u;
    }
    else
    {
        eax = rd32(t7);
        edx = t8;
    COW_AT(10189f7f)
        ebx = rd32(eax);
    }
    COW_AT(10189f81)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t9 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t10 = g->edx;
    wr32(sp0 - 0x60u, 0xffffffffu);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x3du);
    wr32(sp0 - 0x6cu, esi);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, esi, 0x3du, 0u, 0xffffffffu);
    t12 = g->edx;
    wr32(sp0 - 0x60u, 0u);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t14 = g->edx;
    if (t13 == 0u)
    {
        edi = 0u;
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_1018a0c3;
    }
    edx = t14;
    esi = t13;
    COW_AT(10189faf)
    ebp = self;
    edi = 0u;
L_10189fb5: ;
    COW_AT(10189fb5)
    if (rd32(esi + 0x28u) == 0u)
    {
        eax = rd32(esi + 0x28u);
    COW_AT(10189fc0)
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi + 0x28u);
    COW_AT(10189fbc)
        ecx = rd32(eax);
    }
    COW_AT(10189fc2)
    if (ecx != ebx)
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        goto L_10189fda;
    }
    ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(10189fcc)
    if (rd32(ecx + 0x1bcu) == 0u)
    {
        edx = rd32(ecx + 0x1bcu);
        loc_40 = rd32(sp0 - 0x40u);
        goto L_1018a0a6;
    }
    edx = rd32(ecx + 0x1bcu);
L_10189fda: ;
    COW_AT(10189fda)
    if (ebx == 0u) goto L_10189ffa;
    COW_AT(10189fde)
    if (eax == 0u)
    {
    COW_AT(10189fe6)
        eax = 0u;
    }
    else
    {
    COW_AT(10189fe2)
        eax = rd32(eax);
    }
    COW_AT(10189fe8)
    if (eax == ebx) goto L_10189ffa;
    COW_AT(10189fec)
    if (rd32(ecx + 0x1bcu) != 0u)
    {
        eax = rd32(ecx + 0x1bcu);
        loc_40 = rd32(sp0 - 0x40u);
        goto L_1018a0a6;
    }
    eax = rd32(ecx + 0x1bcu);
L_10189ffa: ;
    COW_AT(10189ffa)
    wr32(sp0 - 0x60u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t15 = cow_call_regs(g, COW_IMG(0x10189bd0u), eax, g->ecx, g->edx, 0, 1, esi);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        loc_40 = rd32(sp0 - 0x40u);
    }
    else
    {
        eax = t15;
    COW_AT(1018a00a)
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        g->eax = eax;
        g->edx = sp0 - 0x30u;
        t17 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x5cu;
        t18 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x30u);
        t19 = g->edx;
        if ((int32_t)rd32(t18) >= (int32_t)t17)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            edx = t19;
    COW_AT(1018a01e)
            wr32(sp0 - 0x60u, sp0 - 0x2cu);
            g->eax = sp0 - 0x2cu;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t20 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x2cu);
            t21 = g->edx;
            wr32(sp0 - 0x60u, rd32(t20));
            g->eax = rd32(t20);
            g->edx = t21;
            t22 = rd32(t20);
            t23 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x48u, 1, t22);
            t24 = g->edx;
            eax = t23;
            edx = t24;
        }
    COW_AT(1018a036)
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        g->eax = eax;
        g->edx = edx;
        t25 = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x5cu;
        t26 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
        t27 = g->edx;
        if ((int32_t)rd32(t26) <= (int32_t)t25)
        {
            eax = t26;
            edx = t27;
            loc_40 = rd32(sp0 - 0x40u);
        }
        else
        {
            eax = t26;
    COW_AT(1018a04a)
            wr32(sp0 - 0x60u, sp0 - 0x24u);
            g->eax = eax;
            g->esp = sp0 - 0x5cu;
            t28 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
            t29 = rd32(t28) - rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x60u, t29);
            g->edx = rd32(sp0 - 0x4cu);
            t30 = rd32(sp0 - 0x4cu);
            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x38u, 1, t29);
            t31 = g->edx;
            if ((int32_t)rd32(sp0 - 0x38u) >= (int32_t)rd32(sp0 - 0x44u))
            {
                eax = rd32(sp0 - 0x44u);
                edx = t31;
                loc_40 = rd32(sp0 - 0x40u);
            }
            else
            {
                eax = rd32(sp0 - 0x44u);
    COW_AT(1018a074)
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                t32 = rd32(sp0 - 0x4cu);
                g->esp = sp0 - 0x5cu;
                t33 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
                t34 = g->edx;
                t35 = rd32(t33) - t32;
                wr32(sp0 - 0x60u, t35);
                g->eax = t35;
                g->edx = t34;
                t36 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x34u, 1, t35);
                t37 = g->edx;
                t38 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x60u, t38);
                g->edx = t37;
                t39 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x44u, 1, t38);
                t40 = g->edx;
                wr32(sp0 - 0x40u, esi);
                eax = t39;
                edx = t40;
                loc_40 = esi;
            }
        }
    COW_AT(1018a0a4)
        edi = esi;
    }
L_1018a0a6: ;
    COW_AT(1018a0a6)
    wr32(sp0 - 0x60u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t41 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t42 = g->edx;
    if (t41 != 0u)
    {
        edx = t42;
        esi = t41;
        goto L_10189fb1;
    }
    COW_AT(1018a0bb)
    if (rd32(sp0 - 0x40u) != 0u)
    {
        eax = rd32(sp0 - 0x40u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        goto L_1018a0d9;
    }
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
L_1018a0c3: ;
    COW_AT(1018a0c3)
    if (edi != 0u)
    {
        eax = edi;
        goto L_1018a0d9;
    }
    COW_AT(1018a0c9)
    wr32(arg1, edi);
    g->ebx = loc_50;
    g->esi = loc_58;
    g->edi = loc_5c;
    g->ebp = loc_54;
    return;
L_10189fb1: ;
    COW_AT(10189fb1)
    ebp = rd32(sp0 - 0x3cu);
    goto L_10189fb5;
L_1018a0d9: ;
    COW_AT(1018a0d9)
    t43 = rd32(eax + 0x14u);
    wr32(arg1, t43);
    g->ebx = loc_50;
    g->esi = loc_58;
    g->edi = loc_5c;
    g->ebp = loc_54;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10189f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10189f66u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x3cu, self);
        (void)sp0;
        return 1;
    }
    case 0x10189f7fu:
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
        g->esp = sp0 - 0x5cu;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x10189f81u:
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
        g->esp = sp0 - 0x5cu;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x10189fafu:
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
        g->esp = sp0 - 0x5cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10189fb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fdau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fe2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fe8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189fecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10189ffau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a00au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a01eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1018a036u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a04au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1018a074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1018a0d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10189f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10189f20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
