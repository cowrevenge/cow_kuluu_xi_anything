/* f_0x101f0060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f0060(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f0072u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101f0072;
    case 0x101f007fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101f007f;
    case 0x101f008bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101f008b;
    case 0x101f0094u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101f0094;
    case 0x101f00dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f00dc;
    case 0x101f00f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f00f7;
    case 0x101f00ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f00ff;
    case 0x101f0106u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f0106;
    case 0x101f010eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f010e;
    case 0x101f0122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f0122;
    case 0x101f0171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f0171;
    case 0x101f0177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f0177;
    case 0x101f0190u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f0190;
    case 0x101f0199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101f0199;
    case 0x101f01a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f01a2;
    case 0x101f01b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f01b8;
    case 0x101f01c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101f01c8;
    default: break;
    }
#endif

    COW_AT(101f0060)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (arg2 == 0u)
    {
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_101f0199;
    }
    COW_AT(101f0072)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_101f0199;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101f007f)
    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_101f0199;
    }
    ebp = rd32(sp0 + 4u);
    COW_AT(101f008b)
    if ((int32_t)ebp >= 18)
    {
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_101f0199;
    }
    COW_AT(101f0094)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101eff80u), rd32(COW_IMG(0x1066377cu)), 0);
    t3 = g->edx;
    wr32(sp0 - 0x20u, ebp);
    g->eax = ebp * 0x37bu;
    g->edx = t3;
    t4 = rd32(COW_IMG(0x104dfd98u));
    t5 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, ebp);
    t6 = g->edx;
    wr8(sp0 - 0xdu, (uint8_t)t5);
    wr8(sp0 + 4u, 1u);
    if ((uint8_t)t5 <= 1u)
    {
        eax = t5;
        edx = t6;
        goto L_101f0190;
    }
    eax = t5;
    edi = ebp * 0xdecu + t4 + 0x9894u;
L_101f00dc: ;
    COW_AT(101f00dc)
    wr32(sp0 - 0x20u, rd16(edi));
    g->eax = eax;
    g->edx = rd16(edi);
    t7 = rd32(COW_IMG(0x10621808u));
    t8 = rd16(edi);
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x1015bc40u), t7, 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_101f0177;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = t9;
    COW_AT(101f00f7)
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_101f0106;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    COW_AT(101f00ff)
    if (rd8(edi + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 8u);
        goto L_101f0177;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 8u);
L_101f0106: ;
    COW_AT(101f0106)
    if ((uint8_t)arg4 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        goto L_101f0122;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    COW_AT(101f010e)
    wr32(sp0 - 0x20u, ebp);
    t12 = (eax & 0xffffff00u) | rd8(edi + 2u);
    wr32(sp0 - 0x24u, t12);
    g->eax = t12;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x1066377cu));
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x101eff30u), t13, 2, t12, ebp);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_101f0177;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
L_101f0122: ;
    COW_AT(101f0122)
    wr32(sp0 - 0x20u, esi);
    t17 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t17 + 1u));
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t18 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t19 = g->edx;
    g->edx = t19;
    g->esp = sp0 - 0x1cu;
    t20 = cow_thiscall(g, COW_IMG(0x1015b270u), t18, 0);
    t21 = g->edx;
    wr32(sp0 - 0x20u, t20);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->edx = t21;
    t22 = cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0xcu, t20);
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
    t25 = g->ecx;
    wr32(sp0 - 0x20u, t24);
    wr32(sp0 - 0x24u, esi + 0x1b4u);
    wr32(sp0 - 0x28u, arg2);
    g->eax = arg2;
    g->edx = esi + 0x1b4u;
    t26 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), t25, 3, arg2, esi + 0x1b4u, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_101f01a2;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(101f0171)
    wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) - 1u));
L_101f0177: ;
    COW_AT(101f0177)
    t33 = rd8(sp0 + 4u);
    t34 = rd8(sp0 - 0xdu);
    wr8(sp0 + 4u, (uint8_t)(t33 + 1u));
    if ((uint8_t)(t33 + 1u) < (uint8_t)t34)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t33 + 1u);
        edi = edi + 0x2cu;
        goto L_101f00dc;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)(t33 + 1u);
L_101f0190: ;
    COW_AT(101f0190)
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_101f0199: ;
    COW_AT(101f0199)
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return 0u;
L_101f01a2: ;
    COW_AT(101f01a2)
    t29 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t29 - 1u));
    if ((uint8_t)arg4 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t29 - 1u);
    COW_AT(101f01b8)
        wr32(sp0 - 0x20u, ebp);
        t30 = (ecx & 0xffffff00u) | rd8(edi + 2u);
        wr32(sp0 - 0x24u, t30);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t31 = cow_thiscall(g, COW_IMG(0x101efee0u), rd32(COW_IMG(0x1066377cu)), 2, t30, ebp);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    COW_AT(101f01c8)
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f0060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f0072u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f007fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f008bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0094u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f00dcu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f00f7u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f00ffu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0106u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f010eu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0122u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0171u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0177u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0190u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f0199u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f01a2u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f01b8u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101f01c8u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f0060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
