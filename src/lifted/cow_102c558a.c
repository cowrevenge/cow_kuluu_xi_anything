/* f_0x102c558a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c558a(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c559du: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c559d;
    case 0x102c55aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c55aa;
    case 0x102c55d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c55d0;
    case 0x102c55deu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c55de;
    case 0x102c55e2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102c55e2;
    case 0x102c55f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c55f8;
    case 0x102c5605u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5605;
    case 0x102c560bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c560b;
    case 0x102c5610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5610;
    case 0x102c5620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5620;
    case 0x102c5643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5643;
    case 0x102c5651u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5651;
    case 0x102c5659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5659;
    case 0x102c5661u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5661;
    case 0x102c567cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c567c;
    case 0x102c567fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c567f;
    case 0x102c568eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c568e;
    case 0x102c56afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c56af;
    case 0x102c56ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c56dd;
    case 0x102c56f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102c56f8;
    case 0x102c5723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102c5723;
    default: break;
    }
#endif

    COW_AT(102c558a)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c55de;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c559d)
    wr32(sp0 - 0x24u, COW_IMG(0x103c8e00u));
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8e00u), in_edi, in_esi);
    t1 = g->edx;
    ecx = COW_IMG(0x103c8e00u);
    edx = t1;
L_102c55aa: ;
    COW_AT(102c55aa)
    t6 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 - 0x24u, t6);
    wr32(sp0 - 0x28u, arg1);
    g->eax = t6;
    t7 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x1cu;
    t8 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, arg1, t6, in_edi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x2cu, t7);
    wr32(sp0 - 0x30u, t8);
    wr32(sp0 - 0x34u, arg1);
    g->ecx = t9;
    g->esp = sp0 - 0x20u;
    t11 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t10, 1, 5, arg1, t8, t7, arg1, rd32(sp0 - 0x24u));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, arg1);
    g->ecx = t12;
    g->esp = sp0 - 0x28u;
    t14 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t13, 1, 5, arg1, 0u, arg1, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        ebx = t7;
        edi = t8;
        goto L_102c55f8;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    edi = t8;
    COW_AT(102c55d0)
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, edi);
L_102c5723: ;
    COW_AT(102c5723)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c55de: ;
    COW_AT(102c55de)
    if ((eax & 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c55aa;
    }
    COW_AT(102c55e2)
    wr32(sp0 - 0x24u, COW_IMG(0x103c8de8u));
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8de8u));
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, t5);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t4, 1, 5, arg1, t5, arg1, COW_IMG(0x103c8de8u), in_edi);
L_102c5659: ;
    COW_AT(102c5659)
    goto L_102c5723;
L_102c55f8: ;
    COW_AT(102c55f8)
    wr8(ebx + edi, 0u);
    if (rd8(edi) == 0u)
    {
        eax = ebx + edi;
        esi = edi;
        goto L_102c560b;
    }
    eax = ebx + edi;
    esi = edi;
L_102c5605: ;
    COW_AT(102c5605)
    if (rd8(esi + 1u) != 0u)
    {
        esi = esi + 1u;
        goto L_102c5605;
    }
    esi = esi + 1u;
L_102c560b: ;
    COW_AT(102c560b)
    if (esi + 1u <= eax)
    {
        esi = esi + 1u;
        goto L_102c5620;
    }
    COW_AT(102c5610)
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t17 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, edi);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103c8dd0u));
    eax = t17;
    ecx = t18;
    edx = t19;
    loc_2c = COW_IMG(0x103c8dd0u);
L_102c5651: ;
    COW_AT(102c5651)
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_2c);
    goto L_102c5659;
L_102c5620: ;
    COW_AT(102c5620)
    t20 = rd8(esi);
    wr8(sp0 - 0x10u, (uint8_t)t20);
    t21 = cow_divs(g, ebx + edi - esi - 1u, ((uint8_t)t20 != 8u) * 4u + 6u);
    t22 = cow_mods(g, ebx + edi - esi - 1u, ((uint8_t)t20 != 8u) * 4u + 6u);
    if (t22 == 0u)
    {
        eax = t21;
        ecx = ((uint8_t)t20 != 8u) * 4u + 6u;
        edx = t22;
        esi = esi + 1u;
        goto L_102c5661;
    }
    eax = t21;
    ecx = ((uint8_t)t20 != 8u) * 4u + 6u;
    edx = t22;
    COW_AT(102c5643)
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t23 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, edi);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103c8db4u));
    eax = t23;
    ecx = t24;
    edx = t25;
    loc_2c = COW_IMG(0x103c8db4u);
    goto L_102c5651;
L_102c5661: ;
    COW_AT(102c5661)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0x24u, eax * 0xau);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax * 0xau;
    g->esp = sp0 - 0x1cu;
    t26 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 3, arg1, eax * 0xau, rd32(sp0 - 0x20u));
    t27 = g->edx;
    wr32(sp0 - 0xcu, t26);
    if ((int32_t)rd32(sp0 - 8u) <= 0)
    {
        ecx = rd32(sp0 - 0x24u);
        edx = t27;
        loc_c = t26;
    }
    else
    {
        loc_c = t26;
    COW_AT(102c567c)
        wr32(sp0 + 0xcu, 0u);
        ebx = 0u;
L_102c567f: ;
    COW_AT(102c567f)
        if (rd8(sp0 - 0x10u) != 8u)
        {
            eax = rd32(sp0 + 0xcu);
            ecx = loc_c;
            edx = loc_c + rd32(sp0 + 0xcu);
    COW_AT(102c56af)
            wr32(sp0 - 0x24u, esi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t31 = cow_call_regs(g, COW_IMG(0x102c4582u), eax, g->ecx, g->edx, 1, 1, esi);
            t32 = g->ecx;
            t33 = g->edx;
            wr16(t33, (uint16_t)t31);
            wr32(sp0 - 0x28u, esi + 2u);
            g->ecx = t32;
            g->edx = t33;
            g->esp = sp0 - 0x24u;
            t34 = cow_call_regs(g, COW_IMG(0x102c4582u), t31, g->ecx, g->edx, 1, 1, esi + 2u);
            t35 = g->ecx;
            t36 = g->edx;
            wr16(t36 + 2u, (uint16_t)t34);
            wr32(sp0 - 0x2cu, esi + 4u);
            g->ecx = t35;
            g->edx = t36;
            g->esp = sp0 - 0x28u;
            t37 = cow_call_regs(g, COW_IMG(0x102c4582u), t34, g->ecx, g->edx, 1, 1, esi + 4u);
            t38 = g->ecx;
            t39 = g->edx;
            wr16(t39 + 4u, (uint16_t)t37);
            wr32(sp0 - 0x30u, esi + 6u);
            g->ecx = t38;
            g->edx = t39;
            g->esp = sp0 - 0x2cu;
            t40 = cow_call_regs(g, COW_IMG(0x102c4582u), t37, g->ecx, g->edx, 1, 1, esi + 6u);
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
            esi = esi + 8u;
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            eax = rd32(sp0 + 0xcu);
            ecx = loc_c;
            edx = loc_c + rd32(sp0 + 0xcu);
    COW_AT(102c568e)
            t28 = rd8(esi);
            wr16(edx, (uint16_t)t28);
            t29 = rd8(esi + 1u);
            wr16(edx + 2u, (uint16_t)t29);
            t30 = rd8(esi + 2u);
            wr16(edx + 4u, (uint16_t)t30);
            eax = ((eax | t28 | t29 | t30) & 0xffff0000u) | rd8(esi + 3u);
            esi = esi + 4u;
        }
    COW_AT(102c56dd)
        wr32(sp0 - 0x24u, esi);
        wr16(edx + 6u, (uint16_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t43 = cow_call_regs(g, COW_IMG(0x102c4582u), eax, g->ecx, g->edx, 1, 1, esi);
        t44 = g->edx;
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 0xau);
        wr16(t44 + 8u, (uint16_t)t43);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 8u))
        {
            ebx = ebx + 1u;
            esi = esi + 2u;
            loc_c = rd32(sp0 - 0xcu);
            goto L_102c567f;
        }
        ecx = rd32(sp0 - 0x24u);
        edx = t44;
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(102c56f8)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x18u;
    t45 = cow_call_regs(g, COW_IMG(0x102c892au), g->eax, ecx, edx, 1, 6, arg1, arg2, sp0 - 0x14u, 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, arg1);
    g->ecx = t46;
    g->esp = sp0 - 0x30u;
    t48 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t47, 1, 2, arg1, edi);
    t49 = g->ecx;
    t50 = g->edx;
    t51 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x3cu, t51);
    wr32(sp0 - 0x40u, arg1);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t50, 1, 2, arg1, t51);
    goto L_102c5723;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c558a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c559du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c55aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c55d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c55deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c55e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c55f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5605u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c560bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5610u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5620u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5643u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5651u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5659u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5661u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c567cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c567fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c568eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c56afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c56ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c56f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5723u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c558a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c558a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
