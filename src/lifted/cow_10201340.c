/* f_0x10201340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10201340(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_24;
    uint32_t loc_28;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10201356u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10201356;
    case 0x1020141fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_1020141f;
    case 0x10201423u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10201423;
    case 0x10201429u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10201429;
    case 0x1020142du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_1020142d;
    case 0x10201432u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10201432;
    case 0x10201436u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10201436;
    case 0x10201438u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10201438;
    case 0x1020149bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_1020149b;
    case 0x102014b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102014b6;
    default: break;
    }
#endif

    COW_AT(10201340)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x10u, self);
    if (rd32(COW_IMG(0x104e0af4u)) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
    COW_AT(10201356)
        wr32(sp0 - 0x1cu, in_ebx);
        wr32(sp0 - 0x20u, in_ebp);
        t1 = rd32(COW_IMG(0x104dfd98u)) + 0x4638u;
        wr32(sp0 - 0x24u, t1);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_cdecl(g, COW_IMG(0x100fcb40u), 1, t1);
        t3 = g->edx;
        wr32(sp0 - 0x28u, t2);
        wr32(sp0 - 0x2cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        g->ecx = sp0 - 0xcu;
        g->edx = t3;
        g->esp = sp0 - 0x1cu;
        t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10352ff0u), t2, rd32(sp0 - 0x24u), in_ebp);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x24u, 0x60808080u);
        wr32(sp0 - 0x28u, 0x5du);
        wr32(sp0 - 0x2cu, 0xcu);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x24u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5du);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x28u, t7);
        wr32(sp0 - 0x2cu, arg2 + 0x10u);
        wr32(sp0 - 0x30u, arg1 + 0x3au);
        g->ecx = t8;
        g->esp = sp0 - 0xcu;
        t10 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 0x3au, arg2 + 0x10u, t7, 0x60808080u, in_ebp, in_ebx, in_edi, in_esi, self);
        t11 = g->ecx;
        wr32(sp0 - 0x34u, 0x60808080u);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x3cu, arg2 + 0x10u);
        wr32(sp0 - 0x40u, arg1 + 0x44u);
        g->ecx = t11;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 0x44u, arg2 + 0x10u, sp0 - 0xcu, 0x60808080u, arg1 + 0x3au, arg2 + 0x10u, rd32(sp0 - 0x28u), 0x60808080u, in_ebp);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd32(COW_IMG(0x104dfd98u)) + 0x4638u;
        wr32(sp0 - 0x44u, t14);
        g->eax = t14;
        g->edx = t13;
        g->esp = sp0 - 0x40u;
        t15 = cow_cdecl(g, COW_IMG(0x100fcb50u), 1, t14);
        t16 = g->edx;
        wr32(sp0 - 0x48u, t15);
        wr32(sp0 - 0x4cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        g->ebx = arg1 + 0x44u;
        g->ecx = sp0 - 0xcu;
        g->edx = t16;
        g->esp = sp0 - 0x3cu;
        t17 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10352ff0u), t15, rd32(sp0 - 0x44u), arg1 + 0x44u);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x24u, 0x60808080u);
        wr32(sp0 - 0x28u, 0x5cu);
        wr32(sp0 - 0x2cu, 0xcu);
        g->ecx = t18;
        g->edx = t19;
        g->esp = sp0 - 0x24u;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5cu);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x28u, t20);
        wr32(sp0 - 0x2cu, arg2 + 4u);
        wr32(sp0 - 0x30u, arg1 + 0x3au);
        g->ecx = t21;
        g->esp = sp0 - 0xcu;
        t23 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 0x3au, arg2 + 4u, t20, 0x60808080u, in_ebp, in_ebx, in_edi, in_esi, self);
        t24 = g->ecx;
        wr32(sp0 - 0x34u, 0x60808080u);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x3cu, arg2 + 4u);
        wr32(sp0 - 0x40u, arg1 + 0x44u);
        g->ecx = t24;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 0x44u, arg2 + 4u, sp0 - 0xcu, 0x60808080u, arg1 + 0x3au, arg2 + 4u, rd32(sp0 - 0x28u), 0x60808080u, in_ebp);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(COW_IMG(0x104dfd98u)) + 0x4638u;
        wr32(sp0 - 0x44u, t27);
        g->eax = t27;
        g->edx = t26;
        g->esp = sp0 - 0x40u;
        t28 = cow_cdecl(g, COW_IMG(0x100fcb60u), 1, t27);
        t29 = g->edx;
        if (t28 != 0u)
        {
            eax = t28;
            edx = t29;
            esi = t28;
    COW_AT(10201423)
            wr32(sp0 - 0x24u, esi);
            if ((int32_t)esi >= 30)
            {
                loc_24 = esi;
    COW_AT(1020142d)
                if ((int32_t)esi >= 60)
                {
    COW_AT(10201436)
                    wr32(sp0 - 0x28u, 1u);
                    loc_28 = 1u;
                }
                else
                {
    COW_AT(10201432)
                    wr32(sp0 - 0x28u, 5u);
                    loc_28 = 5u;
                }
            }
            else
            {
                loc_24 = esi;
    COW_AT(10201429)
                wr32(sp0 - 0x28u, 9u);
                loc_28 = 9u;
            }
        }
        else
        {
            eax = t28;
            edx = t29;
            esi = t28;
    COW_AT(1020141f)
            wr32(sp0 - 0x24u, eax);
            wr32(sp0 - 0x28u, eax);
            loc_24 = eax;
            loc_28 = eax;
        }
    COW_AT(10201438)
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t30 = cow_thiscall(g, COW_IMG(0x102012d0u), rd32(sp0 - 0x10u), 2, loc_28, loc_24);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x80808080u);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)arg2);
        wr32(sp0 - 0x34u, (uint32_t)(int16_t)arg1);
        g->edx = rd32(sp0 - 0x10u);
        t31 = rd32(t30 * 4u + rd32(sp0 - 0x10u));
        t32 = rd32(sp0 - 0x10u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), t31, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(sp0 - 0x24u, esi);
        wr32(sp0 - 0x28u, COW_IMG(0x10385290u));
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        g->ebx = arg1;
        g->eax = sp0 - 0xcu;
        g->edx = t34;
        g->esp = sp0 - 0x18u;
        t35 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10385290u), esi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t36 = g->edx;
        wr32(sp0 - 0x30u, 0x60808080u);
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, arg2 + 0xau);
        wr32(sp0 - 0x3cu, arg1 + 0x14u);
        g->ecx = sp0 - 0xcu;
        g->edx = t36;
        t37 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 + 0x14u, arg2 + 0xau, sp0 - 0xcu, 0x60808080u, sp0 - 0xcu, COW_IMG(0x10385290u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t38 = g->ecx;
        t39 = g->edx;
        wr32(sp0 - 0x40u, 0u);
        g->esp = sp0 - 0x3cu;
        t40 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
        if (t40 == 0u)
        {
            ebx = rd32(sp0 - 0x1cu);
            ebp = rd32(sp0 - 0x20u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
        else
        {
            eax = t40;
            ebx = rd32(sp0 - 0x1cu);
            ebp = rd32(sp0 - 0x20u);
            esi = t37;
    COW_AT(1020149b)
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x60808080u);
            t41 = (uint32_t)(int16_t)arg2 + 0xau;
            wr32(sp0 - 0x28u, t41);
            wr32(sp0 - 0x2cu, (uint32_t)(int16_t)esi);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(eax) + 0x14u), 5, (uint32_t)(int16_t)esi, t41, 0x60808080u, 0u, 0u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
    COW_AT(102014b6)
    g->ebx = ebx;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10201340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10201356u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, self);
        (void)sp0;
        return 1;
    }
    case 0x1020141fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10201423u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10201429u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1020142du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10201432u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10201436u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10201438u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1020149bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x18u;
        g->edi = (uint32_t)(int16_t)arg2;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102014b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10201340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10201340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
