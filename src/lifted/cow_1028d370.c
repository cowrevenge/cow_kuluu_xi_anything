/* f_0x1028d370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028d370(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028d387u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1028d387;
    case 0x1028d391u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1028d391;
    case 0x1028d3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1028d3a4;
    case 0x1028d3acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1028d3ac;
    case 0x1028d3b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028d3b3;
    case 0x1028d3d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_1028d3d2;
    case 0x1028d3d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_1028d3d3;
    case 0x1028d3e1u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_1028d3e1;
    case 0x1028d3fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1028d3fc;
    case 0x1028d496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_1028d496;
    case 0x1028d4a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_1028d4a2;
    case 0x1028d4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1028d4a3;
    default: break;
    }
#endif

    COW_AT(1028d370)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if ((int32_t)rd32(arg1 + 0x58u) <= 0)
    {
        ebp = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1028d4a3;
    }
    edx = in_edx;
    esi = 0u;
L_1028d387: ;
    COW_AT(1028d387)
    if (rd32(arg3 + esi * 4u) != 0u) goto L_1028d3a4;
    COW_AT(1028d391)
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg3;
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028d4b0u), 6, arg1, esi, sp0 + 4u, in_edi, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1028d3b3;
    }
    edx = t3;
L_1028d3a4: ;
    COW_AT(1028d3a4)
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x58u))
    {
        esi = esi + 1u;
        goto L_1028d387;
    }
    COW_AT(1028d3ac)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1028d3b3: ;
    COW_AT(1028d3b3)
    wr32(sp0 - 0x18u, COW_IMG(0x103ba4a0u));
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x1cu, t4);
    g->ebx = arg1;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, t4, COW_IMG(0x103ba4a0u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t5 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x58u) <= 0)
    {
        ebp = in_ebp;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        ecx = t5;
        esi = t4;
    COW_AT(1028d3d2)
        wr32(sp0 - 0x18u, in_ebp);
        edi = 0u;
        loc_18 = in_ebp;
L_1028d3d3: ;
    COW_AT(1028d3d3)
        if (rd32(arg3 + edi * 4u) != 1u)
        {
    COW_AT(1028d3e1)
            wr32(sp0 - 0x1cu, sp0 + 4u);
            wr32(sp0 - 0x20u, edi);
            wr32(sp0 - 0x24u, arg1);
            g->eax = sp0 + 4u;
            g->ecx = ecx;
            g->edx = arg3;
            g->esp = sp0 - 0xcu;
            t6 = cow_cdecl(g, COW_IMG(0x1028d4b0u), 6, arg1, edi, sp0 + 4u, loc_18, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 8u, t6);
            if (t6 == 0u)
            {
                ecx = t7;
                loc_18 = rd32(sp0 - 0x18u);
            }
            else
            {
                eax = t6;
                ecx = t7;
                edx = t8;
                loc_8 = t6;
    COW_AT(1028d3fc)
                wr32(sp0 - 0x1cu, edi);
                wr32(sp0 - 0x20u, arg1);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t9 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, edi);
                t10 = g->ecx;
                t11 = g->edx;
                wr32(sp0 - 0x24u, edi);
                wr32(sp0 - 0x28u, 3u);
                wr32(sp0 - 0x2cu, arg1);
                g->esp = sp0 - 0x20u;
                t12 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 3u, edi);
                wr32(sp0 - 4u, t12);
                t13 = rd32(edi * 4u + rd32(arg1 + 0x98u));
                wr32(sp0 - 0x30u, t13);
                wr32(sp0 - 0x34u, arg1);
                g->ecx = rd32(arg1 + 0x98u);
                g->edx = t13;
                t14 = rd32(arg1 + 0x98u);
                g->esp = sp0 - 0x2cu;
                t15 = cow_cdecl(g, COW_IMG(0x10279b40u), 2, arg1, t13);
                t16 = g->ecx;
                t17 = g->edx;
                wr32(sp0 - 0x38u, t9);
                wr32(sp0 - 0x3cu, COW_IMG(0x103ba488u));
                wr32(sp0 - 0x40u, esi);
                wr32(sp0 + 8u, t15);
                g->ebx = arg1;
                g->ecx = t16;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t17, 1, 5, esi, COW_IMG(0x103ba488u), t9, arg1, rd32(sp0 - 0x30u));
                t18 = g->ecx;
                t19 = g->edx;
                t20 = rd32(sp0 + 8u);
                wr32(sp0 - 0x44u, t20);
                wr32(sp0 - 0x48u, COW_IMG(0x103ba2a8u));
                wr32(sp0 - 0x4cu, esi);
                g->ebx = arg1;
                g->eax = t20;
                g->esp = sp0 - 0x38u;
                t21 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, esi, COW_IMG(0x103ba2a8u), t20, rd32(sp0 - 0x40u), COW_IMG(0x103ba488u));
                t22 = g->edx;
                t23 = rd32(sp0 - 8u);
                wr32(sp0 - 0x50u, t23);
                wr32(sp0 - 0x54u, COW_IMG(0x103ba2a8u));
                wr32(sp0 - 0x58u, esi);
                g->ebx = arg1;
                g->ecx = t23;
                g->esp = sp0 - 0x44u;
                t24 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t22, 1, 5, esi, COW_IMG(0x103ba2a8u), t23, rd32(sp0 - 0x4cu), COW_IMG(0x103ba2a8u));
                t25 = g->ecx;
                t26 = rd32(sp0 - 4u);
                wr32(sp0 - 0x1cu, t26);
                wr32(sp0 - 0x20u, COW_IMG(0x103ba2a8u));
                wr32(sp0 - 0x24u, esi);
                g->ebx = arg1;
                g->ecx = t25;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t26, 1, 5, esi, COW_IMG(0x103ba2a8u), t26, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
                t27 = g->ecx;
                t28 = g->edx;
                wr32(sp0 - 0x28u, arg1);
                wr32(sp0 - 0x2cu, COW_IMG(0x103ba480u));
                wr32(sp0 - 0x30u, esi);
                g->ebx = arg1;
                g->eax = arg1;
                g->ecx = t27;
                g->esp = sp0 - 0x1cu;
                t29 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t28, 1, 5, esi, COW_IMG(0x103ba480u), arg1, rd32(sp0 - 0x24u), COW_IMG(0x103ba2a8u));
                t30 = g->ecx;
                t31 = g->edx;
                wr32(sp0 - 0x34u, edi);
                wr32(sp0 - 0x38u, esi);
                wr32(sp0 - 0x3cu, arg1);
                g->ebx = arg1;
                g->ecx = t30;
                g->edx = t31;
                g->esp = sp0 - 0x30u;
                t32 = cow_cdecl(g, COW_IMG(0x1028cf60u), 3, arg1, esi, edi);
                t33 = g->ecx;
                t34 = g->edx;
                wr32(sp0 - 0x40u, COW_IMG(0x103b3238u));
                wr32(sp0 - 0x44u, esi);
                g->ebx = arg1;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t34, 1, 5, esi, COW_IMG(0x103b3238u), arg1, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
                wr32(arg3 + edi * 4u, 1u);
                ecx = arg3;
                loc_18 = rd32(sp0 - 0x18u);
            }
        }
    COW_AT(1028d496)
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
        {
            edi = edi + 1u;
            goto L_1028d3d3;
        }
    COW_AT(1028d4a2)
        ebp = loc_18;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
L_1028d4a3: ;
    COW_AT(1028d4a3)
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028d370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028d387u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d391u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->eax = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d3a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d3acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028d3b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1028d3d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028d3d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d3e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->edx = arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d3fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1028d496u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d4a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1028d4a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028d370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
