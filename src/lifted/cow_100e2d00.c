/* f_0x100e2d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100e2d00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e2d12u: eax = g->eax; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e2d12;
    case 0x100e2d20u: eax = g->eax; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100e2d20;
    case 0x100e2d2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100e2d2f;
    case 0x100e2d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100e2d4b;
    case 0x100e2d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100e2d54;
    case 0x100e2d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); goto E_100e2d57;
    case 0x100e2d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2d71;
    case 0x100e2d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2d7b;
    case 0x100e2d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2d95;
    case 0x100e2d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2d9f;
    case 0x100e2db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2db9;
    case 0x100e2dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2dc3;
    case 0x100e2dcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2dcb;
    case 0x100e2dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100e2dd0;
    case 0x100e2e1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100e2e1f;
    case 0x100e2e2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100e2e2f;
    case 0x100e2e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_100e2e37;
    default: break;
    }
#endif

    COW_AT(100e2d00)
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        ebx = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100e2e37;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e2d12)
    if (rd32(eax + 0x1369cu) == 0u)
    {
        ebx = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100e2e37;
    }
    edi = rd32(eax + 0x1369cu);
    COW_AT(100e2d20)
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t1 = cow_stdcall(g, COW_IMG(0x100e19a0u), 0);
    if (t1 == 0u)
    {
        eax = t1;
        ebx = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_100e2e37;
    }
    esi = t1;
    COW_AT(100e2d2f)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e2d54)
        ebx = 0xffffffffu;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e2d4b)
        ebx = (in_ebx & 0xffff0000u) | rd16(eax + 0x3c350u);
    }
    COW_AT(100e2d57)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x11u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x11u, 4, sp0 - 0x10u, sp0 - 0x11u, 0u, 1u);
    t3 = g->ecx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
    }
    else
    {
    COW_AT(100e2d71)
        t4 = rd32(rd32(sp0 - 0x10u));
        wr32(sp0 - 0xcu, t4);
        ecx = t4;
    }
    COW_AT(100e2d7b)
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x11u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = sp0 - 0x11u;
    g->esp = sp0 - 0x20u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 - 0x10u, sp0 - 0x11u, 0u, 2u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
    }
    else
    {
    COW_AT(100e2d95)
        t7 = rd32(rd32(sp0 - 0x10u));
        wr32(sp0 - 8u, t7);
        edx = t7;
    }
    COW_AT(100e2d9f)
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x11u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = sp0 - 0x11u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x10u, 4, sp0 - 0x10u, sp0 - 0x11u, 0u, 3u);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
    }
    else
    {
    COW_AT(100e2db9)
        t10 = rd32(rd32(sp0 - 0x10u));
        wr32(sp0 - 4u, t10);
        edx = rd32(sp0 - 0x10u);
    }
    COW_AT(100e2dc3)
    if (arg1 != 0u)
    {
        eax = arg1;
    }
    else
    {
    COW_AT(100e2dcb)
        eax = COW_IMG(0x103d3c84u);
    }
    COW_AT(100e2dd0)
    wr32(sp0 - 0x24u, COW_IMG(0x100e3130u));
    wr32(sp0 - 0x28u, COW_IMG(0x100e3070u));
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    wr32(sp0 - 0x38u, ebx);
    wr32(sp0 - 0x3cu, eax);
    wr32(sp0 - 0x40u, esi);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10106fd0u), 8, esi, eax, ebx, sp0 - 0xcu, 0u, 0u, COW_IMG(0x100e3070u), COW_IMG(0x100e3130u));
    wr32(sp0 - 0x44u, arg6);
    wr32(sp0 - 0x48u, arg5);
    wr32(sp0 - 0x4cu, arg4);
    wr32(sp0 - 0x50u, arg3);
    wr32(sp0 - 0x54u, arg2);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, edi);
    g->eax = arg2;
    g->ecx = arg4;
    g->edx = arg3;
    g->esp = sp0 - 0x40u;
    t11 = cow_cdecl(g, COW_IMG(0x100e1c30u), 12, edi, esi, 0u, 0u, 0u, 0u, 0u, arg2, arg3, arg4, arg5, arg6);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, edi);
    if (t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        ebx = t14;
        loc_24 = edi;
        loc_20 = esi;
        goto L_100e2e2f;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    ebx = t14;
    loc_24 = edi;
    loc_20 = esi;
    COW_AT(100e2e1f)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t15 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_24, loc_20);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (t15 & 0xffffff00u) | 1u;
L_100e2e2f: ;
    COW_AT(100e2e2f)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_24, loc_20);
    eax = t16;
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_100e2e37: ;
    COW_AT(100e2e37)
    g->ebx = ebx;
    g->esi = loc_18;
    g->edi = loc_1c;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e2d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e2d12u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100e2d20u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100e2d2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100e2d4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100e2d54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100e2d57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e2d71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2d7bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2d95u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2d9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2db9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2dc3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2dcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2dd0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x11u);
        (void)sp0;
        return 1;
    }
    case 0x100e2e1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e2e2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e2e37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e2d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
