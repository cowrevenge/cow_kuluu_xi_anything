/* f_0x1028d550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028d550(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028d565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028d565;
    case 0x1028d56fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028d56f;
    case 0x1028d574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028d574;
    case 0x1028d579u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028d579;
    case 0x1028d598u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1028d598;
    case 0x1028d599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1028d599;
    case 0x1028d5a7u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1028d5a7;
    case 0x1028d5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028d5be;
    case 0x1028d66bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1028d66b;
    case 0x1028d677u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1028d677;
    case 0x1028d678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1028d678;
    default: break;
    }
#endif

    COW_AT(1028d550)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x58u) <= 0)
    {
        ebp = in_ebp;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_1028d678;
    }
    eax = 0u;
    ecx = rd32(rd32(sp0 + 4u) + 0x58u);
    edi = rd32(sp0 + 4u);
L_1028d565: ;
    COW_AT(1028d565)
    if (rd32(arg3 + eax * 4u) == 0u) goto L_1028d579;
    COW_AT(1028d56f)
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_1028d565;
    }
    COW_AT(1028d574)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1028d579: ;
    COW_AT(1028d579)
    wr32(sp0 - 0x14u, COW_IMG(0x103ba4ecu));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t1);
    g->ebx = t1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, arg3, 1, 5, t1, COW_IMG(0x103ba4ecu), in_edi, in_esi, in_ebx);
    t2 = g->edx;
    if ((int32_t)rd32(edi + 0x58u) <= 0)
    {
        ebp = in_ebp;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        edx = t2;
        ebx = t1;
    COW_AT(1028d598)
        wr32(sp0 - 0x14u, in_ebp);
        esi = 0u;
        loc_14 = in_ebp;
L_1028d599: ;
    COW_AT(1028d599)
        if (rd32(arg3 + esi * 4u) != 1u)
        {
    COW_AT(1028d5a7)
            wr32(sp0 - 0x18u, sp0 + 4u);
            wr32(sp0 - 0x1cu, esi);
            wr32(sp0 - 0x20u, edi);
            g->eax = arg3;
            g->ecx = sp0 + 4u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_cdecl(g, COW_IMG(0x1028d4b0u), 6, edi, esi, sp0 + 4u, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t4 = g->ecx;
            t5 = g->edx;
            if (t3 != 0u)
            {
                edx = t5;
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = t3;
                ecx = t4;
                edx = t5;
    COW_AT(1028d5be)
                wr32(sp0 - 0x18u, esi);
                wr32(sp0 - 0x1cu, edi);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t6 = cow_cdecl(g, COW_IMG(0x102798f0u), 2, edi, esi);
                t7 = g->ecx;
                t8 = g->edx;
                wr32(sp0 - 0x20u, t6);
                g->edx = t8;
                g->esp = sp0 - 0x1cu;
                t9 = cow_thiscall_cdecl(g, COW_IMG(0x1028d680u), t7, 1, t6);
                t10 = g->ecx;
                t11 = g->edx;
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, edi);
                g->ecx = t10;
                g->edx = t11;
                g->esp = sp0 - 0x20u;
                t12 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, edi, esi);
                t13 = g->ecx;
                t14 = g->edx;
                wr32(sp0 - 0x2cu, esi);
                wr32(sp0 - 0x30u, 3u);
                wr32(sp0 - 0x34u, edi);
                wr32(sp0 + 4u, t12);
                g->ecx = t13;
                g->esp = sp0 - 0x28u;
                t15 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, edi, 3u, esi);
                t16 = g->ecx;
                wr32(sp0 - 4u, t15);
                t17 = rd32(esi * 4u + rd32(edi + 0x98u));
                wr32(sp0 - 0x38u, t17);
                wr32(sp0 - 0x3cu, 1u);
                wr32(sp0 - 0x40u, edi);
                g->eax = t17;
                g->edx = rd32(edi + 0x98u);
                t18 = rd32(edi + 0x98u);
                g->esp = sp0 - 0x34u;
                t19 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, edi, 1u, t17);
                t20 = g->edx;
                t21 = rd32(sp0 + 4u);
                wr32(sp0 + 8u, t19);
                wr32(sp0 - 0x44u, t21);
                wr32(sp0 - 0x48u, COW_IMG(0x103ba4e0u));
                wr32(sp0 - 0x4cu, ebx);
                g->ebx = ebx;
                g->ecx = t21;
                g->esp = sp0 - 0x38u;
                t22 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t20, 1, 5, ebx, COW_IMG(0x103ba4e0u), t21, rd32(sp0 - 0x40u), 1u);
                t23 = g->ecx;
                t24 = rd32(sp0 + 8u);
                wr32(sp0 - 0x50u, t24);
                wr32(sp0 - 0x54u, COW_IMG(0x103ba2a8u));
                wr32(sp0 - 0x58u, ebx);
                g->ebx = ebx;
                g->ecx = t23;
                g->esp = sp0 - 0x44u;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t24, 1, 5, ebx, COW_IMG(0x103ba2a8u), t24, rd32(sp0 - 0x4cu), COW_IMG(0x103ba4e0u));
                t25 = g->ecx;
                t26 = g->edx;
                t27 = rd32(sp0 - 4u);
                wr32(sp0 - 0x18u, t27);
                wr32(sp0 - 0x1cu, COW_IMG(0x103ba2a8u));
                wr32(sp0 - 0x20u, ebx);
                g->ebx = ebx;
                g->eax = t27;
                g->ecx = t25;
                g->esp = sp0 - 0xcu;
                t28 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t26, 1, 5, ebx, COW_IMG(0x103ba2a8u), t27, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                t29 = g->ecx;
                t30 = g->edx;
                wr32(sp0 - 0x24u, t9);
                wr32(sp0 - 0x28u, COW_IMG(0x103ba4d0u));
                wr32(sp0 - 0x2cu, ebx);
                g->ebx = ebx;
                g->ecx = t29;
                g->esp = sp0 - 0x18u;
                t31 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t30, 1, 5, ebx, COW_IMG(0x103ba4d0u), t9, rd32(sp0 - 0x20u), COW_IMG(0x103ba2a8u));
                t32 = g->ecx;
                t33 = g->edx;
                wr32(sp0 - 0x30u, esi);
                wr32(sp0 - 0x34u, ebx);
                wr32(sp0 - 0x38u, edi);
                g->ebx = ebx;
                g->ecx = t32;
                g->edx = t33;
                g->esp = sp0 - 0x2cu;
                t34 = cow_cdecl(g, COW_IMG(0x1028cf60u), 3, edi, ebx, esi);
                t35 = g->ecx;
                t36 = g->edx;
                wr32(sp0 - 0x3cu, COW_IMG(0x103b3238u));
                wr32(sp0 - 0x40u, ebx);
                g->ebx = ebx;
                t37 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t36, 1, 5, ebx, COW_IMG(0x103b3238u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t38 = g->edx;
                wr32(sp0 - 0x44u, 0x40eu);
                wr32(sp0 - 0x48u, COW_IMG(0x103b98f8u));
                wr32(sp0 - 0x4cu, t9);
                wr32(arg3 + esi * 4u, 1u);
                g->edx = t38;
                g->esp = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, t9, COW_IMG(0x103b98f8u), 0x40eu);
                t39 = g->edx;
                edx = t39;
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    COW_AT(1028d66b)
        if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x58u))
        {
            esi = esi + 1u;
            goto L_1028d599;
        }
    COW_AT(1028d677)
        ebp = loc_14;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
L_1028d678: ;
    COW_AT(1028d678)
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028d550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028d565u:
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028d56fu:
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028d574u:
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028d579u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028d598u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028d599u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028d5a7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028d5beu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1028d66bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028d677u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028d678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028d550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
