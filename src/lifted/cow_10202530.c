/* f_0x10202530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10202530(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020254bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1020254b;
    case 0x10202563u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10202563;
    case 0x1020256eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1020256e;
    case 0x102025b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102025b6;
    case 0x102025c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102025c0;
    case 0x102025c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102025c8;
    case 0x102025d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_102025d1;
    case 0x10202623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_10202623;
    case 0x10202630u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10202630;
    case 0x10202649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_10202649;
    case 0x1020264du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_1020264d;
    case 0x10202688u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10202688;
    case 0x102026e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_102026e0;
    case 0x102026ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102026ff;
    case 0x1020270cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1020270c;
    default: break;
    }
#endif

    COW_AT(10202530)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x24u, self);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_34 = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1020254b)
        if (rd16(rd32(sp0 + 0xcu) + 0x32u) != rd32(ecx + 0x3c350u))
        {
            eax = rd16(rd32(sp0 + 0xcu) + 0x32u);
            edx = rd32(ecx + 0x3c350u);
            esi = rd32(sp0 + 0xcu);
            goto L_10202688;
        }
        eax = rd16(rd32(sp0 + 0xcu) + 0x32u);
        edx = rd32(ecx + 0x3c350u);
        esi = rd32(sp0 + 0xcu);
    COW_AT(10202563)
        if (rd16(esi + 0x34u) != 0u) goto L_10202688;
    COW_AT(1020256e)
        wr32(sp0 - 0x38u, esi);
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 0x34u;
        t1 = cow_stdcall(g, COW_IMG(0x102023b0u), 1, esi);
        t2 = g->ecx;
        t3 = rd8(esi + 0x30u);
        wr32(sp0 + 0xcu, t1);
        wr32(sp0 - 0x38u, esi + 0x78u);
        t4 = (t2 & 0xffffff00u) | t3;
        wr32(sp0 - 0x3cu, t4);
        wr32(sp0 - 0x40u, arg2 + 7u);
        wr32(sp0 - 0x44u, arg1 + 0x1au);
        g->ebx = arg2;
        g->edx = arg2 + 7u;
        cow_cdecl(g, COW_IMG(0x101cb090u), 4, arg1 + 0x1au, arg2 + 7u, t4, esi + 0x78u);
        t5 = g->edx;
        wr32(sp0 - 0x48u, esi + 0x79u);
        t6 = (t5 & 0xffffff00u) | rd8(esi + 0x31u);
        wr32(sp0 - 0x4cu, t6);
        wr32(sp0 - 0x50u, arg2 + 0x11u);
        wr32(sp0 - 0x54u, arg1 + 0x31u);
        g->ebx = arg2;
        g->eax = arg2 + 0x11u;
        g->ecx = arg1 + 0x31u;
        g->edx = t6;
        g->esp = sp0 - 0x44u;
        t7 = cow_cdecl(g, COW_IMG(0x101cb1b0u), 4, arg1 + 0x31u, arg2 + 0x11u, t6, esi + 0x79u);
        t8 = g->ecx;
        t9 = g->edx;
        if (rd16(esi + 0x50u) == 0u)
        {
            eax = t7;
            goto L_102025c8;
        }
        ecx = t8;
        edx = t9;
    COW_AT(102025b6)
        if (rd8(esi + 0x54u) == 0u)
        {
            eax = esi + 0x54u;
            goto L_102025c8;
        }
        eax = esi + 0x54u;
    COW_AT(102025c0)
        wr32(sp0 - 0x38u, 0x80808080u);
        wr32(sp0 - 0x3cu, eax);
        loc_3c = eax;
L_102025d1: ;
    COW_AT(102025d1)
        wr32(sp0 - 0x40u, arg2);
        wr32(sp0 - 0x44u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_stdcall(g, COW_IMG(0x10202380u), 4, arg1, arg2, loc_3c, 0x80808080u);
        t10 = g->edx;
        t11 = rd32(esi + 0x28u);
        wr32(sp0 - 0x38u, t11);
        wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->ebx = arg2;
        g->ecx = sp0 - 0x20u;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t11, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        t12 = g->ecx;
        wr32(sp0 - 0x44u, 0x3f800000u);
        wr32(sp0 - 0x48u, 0x3f800000u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0x80808080u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x58u, arg2 + 0xau);
        wr32(sp0 - 0x5cu, arg1 + 0x62u);
        g->eax = arg1 + 0x62u;
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x40u;
        t13 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t12, 7, arg1 + 0x62u, arg2 + 0xau, sp0 - 0x20u, 0x80808080u, 0u, 0x3f800000u, 0x3f800000u);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 0xaeu);
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0x60u;
        t16 = cow_cdecl(g, COW_IMG(0x101938b0u), 1, 0xaeu);
        t17 = g->ecx;
        t18 = g->edx;
        if ((uint8_t)t16 == 0u)
        {
            edx = t18;
            goto L_10202649;
        }
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10202623)
        wr32(sp0 - 0x38u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t19 = cow_thiscall_cdecl(g, COW_IMG(0x10201eb0u), ecx, 1, esi);
        t20 = g->edx;
        if ((uint8_t)t19 != 0u)
        {
            edx = t20;
            goto L_10202649;
        }
    COW_AT(10202630)
        t21 = rd32(esi + 0x2cu);
        wr32(sp0 - 0x38u, t21);
        wr32(sp0 - 0x3cu, arg2 + 0xau);
        wr32(sp0 - 0x40u, arg1 + 0x30u);
        t22 = rd32(sp0 - 0x24u);
        g->ebx = arg2;
        g->edx = arg1 + 0x30u;
        g->esp = sp0 - 0x34u;
        cow_stdcall(g, COW_IMG(0x10202900u), 3, arg1 + 0x30u, arg2 + 0xau, t21);
        t23 = g->edx;
        edx = t23;
        ebp = t22;
L_1020264d: ;
    COW_AT(1020264d)
        t24 = rd32(esi + 0x24u);
        wr32(sp0 - 0x38u, t24);
        wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->ebx = arg2;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t24, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        wr32(sp0 - 0x44u, 0x3f800000u);
        wr32(sp0 - 0x48u, 0x3f800000u);
        wr32(sp0 - 0x4cu, 0u);
        t25 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x50u, t25);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x58u, arg2 + 1u);
        wr32(sp0 - 0x5cu, arg1 + 0x58u);
        g->eax = sp0 - 0x20u;
        g->edx = arg1 + 0x58u;
        g->esp = sp0 - 0x40u;
        t26 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg2 + 1u, 7, arg1 + 0x58u, arg2 + 1u, sp0 - 0x20u, t25, 0u, 0x3f800000u, 0x3f800000u);
        t27 = g->edx;
        eax = t26;
        edx = t27;
L_102026e0: ;
    COW_AT(102026e0)
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, arg2);
        wr32(sp0 - 0x40u, arg1);
        wr32(sp0 - 0x44u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t35 = cow_thiscall(g, COW_IMG(0x10201ff0u), ebp, 4, 0u, arg1, arg2, esi);
        t36 = g->edx;
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, arg2);
        wr32(sp0 - 0x40u, arg1);
        g->edx = t36;
        cow_call_regs(g, COW_IMG(0x10202440u), t35, ebp, g->edx, 0, 3, arg1, arg2, esi);
        t37 = g->edx;
        if (rd32(COW_IMG(0x106643e8u)) == 0u)
        {
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
        }
        else
        {
            eax = rd32(COW_IMG(0x106643e8u));
            edx = t37;
    COW_AT(102026ff)
            wr32(sp0 - 0x38u, esi);
            wr32(sp0 - 0x3cu, arg2);
            wr32(sp0 - 0x40u, arg1 - 0x62u);
            g->ebx = arg2;
            g->esp = sp0 - 0x34u;
            cow_call_regs(g, COW_IMG(0x102028a0u), g->eax, g->ecx, edx, 0, 3, arg1 - 0x62u, arg2, esi);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
        }
    }
    COW_AT(1020270c)
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_2c;
    return;
L_102025c8: ;
    COW_AT(102025c8)
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, esi + 6u);
    edx = esi + 6u;
    loc_3c = esi + 6u;
    goto L_102025d1;
L_10202649: ;
    COW_AT(10202649)
    ebp = rd32(sp0 - 0x24u);
    goto L_1020264d;
L_10202688: ;
    COW_AT(10202688)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, eax);
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t28 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, in_edi, in_esi);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x40u, t28);
    wr32(sp0 - 0x44u, COW_IMG(0x10382120u));
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    g->ebx = in_ebx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10382120u), t28, rd32(sp0 - 0x3cu), 0u);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0x80606060u);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    wr32(sp0 - 0x60u, arg2 + 0xbu);
    wr32(sp0 - 0x64u, arg1 + 0x69u);
    g->eax = arg1 + 0x69u;
    g->edx = arg2 + 0xbu;
    g->esp = sp0 - 0x48u;
    t31 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, arg1 + 0x69u, arg2 + 0xbu, sp0 - 0x20u, 0x80606060u, 0u, 0x3f800000u, 0x3f800000u);
    t32 = g->edx;
    wr32(sp0 - 0x38u, 0x80606060u);
    wr32(sp0 - 0x3cu, esi + 6u);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, arg1);
    g->edx = t32;
    g->esp = sp0 - 0x34u;
    t33 = cow_stdcall(g, COW_IMG(0x10202380u), 4, arg1, arg2, esi + 6u, 0x80606060u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    ebp = self;
    goto L_102026e0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10202530(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020254bu:
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x24u, self);
        (void)sp0;
        return 1;
    }
    case 0x10202563u:
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x24u, self);
        (void)sp0;
        return 1;
    }
    case 0x1020256eu:
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
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x24u, self);
        (void)sp0;
        return 1;
    }
    case 0x102025b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102025c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102025c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102025d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x38u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10202623u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10202630u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10202649u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1020264du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10202688u:
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102026e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102026ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020270cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10202530(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10202530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
