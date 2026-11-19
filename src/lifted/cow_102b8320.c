/* f_0x102b8320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b8320(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b8332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102b8332;
    case 0x102b8336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102b8336;
    case 0x102b8339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102b8339;
    case 0x102b837fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_102b837f;
    case 0x102b83efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b83ef;
    case 0x102b83fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b83fb;
    default: break;
    }
#endif

    COW_AT(102b8320)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b8336)
        edi = rd32(eax + 0x54u);
    }
    else
    {
    COW_AT(102b8332)
        edi = 0u;
    }
    COW_AT(102b8339)
    t1 = edi + rd32(arg2) * 0xcu;
    wr32(sp0 - 0x2cu, t1);
    wr32(sp0 - 0x30u, arg3);
    g->ecx = rd32(arg2) * 3u;
    g->edx = t1;
    t2 = rd32(arg2);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x10u, arg2);
    wr8(sp0 - 0xcu, 3u);
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t4, 1, 3, sp0 - 0x10u, arg3, rd32(sp0 - 0x2cu));
    wr32(sp0 - 0x18u, arg2);
    t5 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x14u, t5);
    edx = t5;
    ebp = arg3 + 0xcu;
    esi = 1u;
    loc_10 = arg2;
    loc_18 = arg2;
    loc_14 = t5;
L_102b837f: ;
    COW_AT(102b837f)
    wr32(sp0 - 0x2cu, sp0 + 0xcu);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t6 = g->ecx;
    t7 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x34u, t7);
    wr32(sp0 - 0x38u, ebp);
    g->eax = t7;
    g->esp = sp0 - 0x30u;
    t8 = cow_cdecl(g, COW_IMG(0x10274670u), 2, ebp, t7);
    wr32(sp0 - 0x3cu, sp0 - 8u);
    wr32(sp0 - 0x40u, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102bc4e0u), 2, sp0 - 0x18u, sp0 - 8u);
    t9 = g->edx;
    wr32(sp0 - 0x44u, sp0 + 0xcu);
    wr32(sp0 - 0x48u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 8u, sp0 + 0xcu);
    t10 = g->ecx;
    t11 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x4cu, t11);
    wr32(sp0 - 0x50u, ebp + 0xcu);
    g->eax = t11;
    g->edx = arg3 * 3u;
    g->esp = sp0 - 0x48u;
    t12 = cow_cdecl(g, COW_IMG(0x10274670u), 2, ebp + 0xcu, t11);
    t13 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, t13, 1, 3, sp0 - 0x18u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t14 = g->ecx;
    if (rd32(sp0 - 0x10u) != rd32(sp0 - 0x18u))
    {
        edx = rd32(sp0 - 0x10u);
        ebp = ebp + 0x18u;
        esi = esi + 2u;
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102b837f;
    }
    eax = rd32(sp0 - 0x18u);
    ecx = t14;
    edx = rd32(sp0 - 0x10u);
    ebp = ebp + 0x18u;
    esi = esi + 2u;
    COW_AT(102b83ef)
    if (rd8(sp0 - 0xcu) != rd8(sp0 - 0x14u))
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102b837f;
    }
    COW_AT(102b83fb)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x10u, arg2);
    wr8(sp0 - 0xcu, 1u);
    g->eax = sp0 - 0x10u;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x20u;
    t15 = cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 0x10u, sp0 - 0x18u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t16 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t16, 1, 3, sp0 - 0x18u, sp0 - 0x10u, sp0 - 0x18u);
    t17 = g->ecx;
    wr32(sp0 - 0x38u, sp0 + 0xcu);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t18 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x40u, t18);
    t19 = arg3 + esi * 0xcu;
    wr32(sp0 - 0x44u, t19);
    g->ecx = t19;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t19, t18);
    t20 = g->ecx;
    wr32(sp0 - 0x48u, sp0 + 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t21 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x50u, t21);
    t22 = arg3 + esi * 0xcu + 0xcu;
    wr32(sp0 - 0x54u, t22);
    g->eax = esi * 3u + 3u;
    g->ecx = t22;
    g->esp = sp0 - 0x4cu;
    t23 = cow_cdecl(g, COW_IMG(0x10274670u), 2, t22, t21);
    t24 = g->ecx;
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, sp0 - 0x18u, 1, 1, sp0 - 0x18u);
    t25 = g->edx;
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t26 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x64u, t26);
    t27 = arg3 + esi * 0xcu + 0x30u;
    wr32(sp0 - 0x68u, t27);
    g->edx = t27;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t27, t26);
    t28 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = sp0 - 0x18u;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t29 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 0x10u, sp0 - 0x18u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t30 = g->ecx;
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, sp0 - 0x18u, 1, 3, sp0 - 0x18u, sp0 - 0x10u, sp0 - 0x18u);
    t31 = g->edx;
    wr32(sp0 - 0x38u, sp0 + 0xcu);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t32 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x40u, t32);
    t33 = arg3 + esi * 0xcu + 0x18u;
    wr32(sp0 - 0x44u, t33);
    g->edx = t33;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t33, t32);
    t34 = g->edx;
    wr32(sp0 - 0x48u, sp0 + 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 0x18u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t35 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x50u, t35);
    t36 = arg3 + esi * 0xcu + 0x24u;
    wr32(sp0 - 0x54u, t36);
    g->edx = t36;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t36, t35);
    t37 = g->edx;
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    wr8(sp0 - 0xcu, 2u);
    g->eax = sp0 - 0x18u;
    g->ecx = sp0 - 0x10u;
    t38 = cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 0x10u, sp0 - 0x18u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t39 = g->ecx;
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, sp0 - 0x18u, 1, 3, sp0 - 0x18u, sp0 - 0x10u, sp0 - 0x18u);
    t40 = g->edx;
    wr32(sp0 - 0x64u, sp0 + 0xcu);
    wr32(sp0 - 0x68u, sp0 - 0x18u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t41 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x2cu, t41);
    t42 = arg3 + esi * 0xcu + 0x3cu;
    wr32(sp0 - 0x30u, t42);
    g->edx = t42;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t42, t41);
    t43 = g->edx;
    wr32(sp0 - 0x34u, sp0 + 0xcu);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x18u, sp0 + 0xcu);
    t44 = arg3 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t44);
    t45 = arg3 + esi * 0xcu + 0x48u;
    wr32(sp0 - 0x40u, t45);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t45, t44);
    t46 = (uint32_t)((int32_t)(esi - 1u - (uint32_t)((int32_t)(esi - 1u) >> 0x1fu)) >> 1u);
    t47 = rd32(sp0 - 0x20u);
    t48 = rd32(sp0 - 0x24u);
    t49 = rd32(sp0 - 0x28u);
    wr32(arg1 + 0x12cu, t46);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = t48;
    g->edi = t49;
    g->ebp = t47;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b8320(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b8332u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102b8336u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102b8339u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102b837fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b83efu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg3;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x48u, sp0 - 8u);
        wr32(sp0 - 0x44u, sp0 + 0xcu);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        wr32(sp0 - 0x3cu, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102b83fbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg3;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x48u, sp0 - 8u);
        wr32(sp0 - 0x44u, sp0 + 0xcu);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        wr32(sp0 - 0x3cu, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b8320(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b8320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
