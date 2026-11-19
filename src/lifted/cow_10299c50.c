/* f_0x10299c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10299c50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10299c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10299c6b;
    case 0x10299c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10299c7b;
    case 0x10299c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299c88;
    case 0x10299c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10299c91;
    case 0x10299c9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10299c9b;
    case 0x10299ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10299ca1;
    case 0x10299cabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10299cab;
    case 0x10299cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10299cb4;
    case 0x10299cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299cc4;
    case 0x10299ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299ccd;
    case 0x10299cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299cd1;
    case 0x10299ce5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299ce5;
    case 0x10299cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299cfd;
    case 0x10299d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_10299d11;
    case 0x10299d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d26;
    case 0x10299d33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d33;
    case 0x10299d46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299d46;
    case 0x10299d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d4f;
    case 0x10299d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299d56;
    case 0x10299d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d5f;
    case 0x10299d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d64;
    case 0x10299d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299d72;
    default: break;
    }
#endif

    COW_AT(10299c50)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->eax = t2;
    g->ecx = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebp = t1;
    COW_AT(10299c6b)
    wr32(sp0 + 4u, eax);
    if ((int32_t)rd32(sp0 + 8u) <= 2)
    {
        eax = rd32(sp0 + 8u);
        goto L_10299c91;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(10299c7b)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, COW_IMG(0x103bc1d8u));
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc1d8u), eax);
    COW_AT(10299c88)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 8u);
    return 0u;
L_10299c91: ;
    COW_AT(10299c91)
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 0x50u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_stdcall(g, COW_IMG(0x102aa2f0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10299c9b)
    if (eax != 0u)
    {
        esi = eax;
        goto L_10299cb4;
    }
    COW_AT(10299ca1)
    wr32(sp0 - 0x10u, COW_IMG(0x103bc1a4u));
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc1a4u), rd32(sp0 - 0xcu));
    COW_AT(10299cab)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 8u);
    return 0u;
L_10299cb4: ;
    COW_AT(10299cb4)
    wr32(sp0 - 0x10u, ebp);
    wr32(sp0 - 0x14u, sp0 + 4u);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t9);
    g->eax = t9;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10299d80u), 3, t9, sp0 + 4u, ebp);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(10299cc4)
    if (eax != 0u)
    {
        ebx = eax;
        goto L_10299cd1;
    }
    COW_AT(10299ccd)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 8u);
    return eax;
L_10299cd1: ;
    COW_AT(10299cd1)
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, ebp);
    t12 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t12);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, esi + 0x4cu);
    g->eax = eax;
    g->ecx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, esi + 0x4cu, 4u, 1u, t12, ebp);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    edi = esi + 0x4cu;
    loc_18 = rd32(sp0 - 0x18u);
    COW_AT(10299ce5)
    wr32(sp0 + 4u, eax);
    wr32(sp0 - 0x28u, 0x84u);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bc174u));
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, rd32(edi));
    g->eax = eax;
    t15 = rd32(edi);
    g->esp = sp0 - 0x20u;
    t16 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t15, 4u, COW_IMG(0x103bc174u), 0x84u, rd32(sp0 - 0x24u));
    eax = t16;
    COW_AT(10299cfd)
    t17 = rd32(edi);
    wr32(esi + 0x48u, eax);
    wr32(sp0 - 0x38u, ebp);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x3cu, t18);
    wr32(sp0 - 0x40u, t17);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, eax, 4u, t17, t18, ebp, rd32(sp0 - 0x34u), 4u, COW_IMG(0x103bc174u), 0x84u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    eax = t19;
    loc_3c = rd32(sp0 - 0x3cu);
    COW_AT(10299d11)
    wr32(sp0 + 4u, eax);
    t20 = rd32(ebx + 0x14u);
    wr32(sp0 - 0x4cu, t20);
    t21 = rd32(ebx + 0x54u);
    wr32(sp0 - 0x50u, t21);
    wr32(sp0 - 0x54u, esi + 0x14u);
    g->ecx = t20;
    g->edx = esi + 0x14u;
    g->esp = sp0 - 0x10u;
    cow_bridge_indirect(g, COW_IMG(0x1028da40u), 0u, 17u, (const uint32_t[]){esi + 0x14u, t21, t20, rd32(sp0 - 0x48u), 4u, rd32(sp0 - 0x40u), loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, g->eax, 68u);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    COW_AT(10299d26)
    if ((int32_t)rd32(sp0 + 8u) <= 1)
    {
        eax = rd32(sp0 + 8u);
        edi = rd32(sp0 - 0x10u);
    COW_AT(10299d4f)
        wr32(esi + 0x50u, 0u);
    }
    else
    {
        edi = rd32(sp0 - 0x10u);
    COW_AT(10299d33)
        wr32(sp0 - 0x10u, ebp);
        t24 = rd32(sp0 + 4u);
        wr32(sp0 - 0x14u, t24);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, esi + 0x50u);
        g->eax = t24;
        g->ecx = esi + 0x50u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, esi + 0x50u, 4u, 1u, t24, ebp);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
    COW_AT(10299d46)
        wr32(sp0 + 4u, eax);
    }
    COW_AT(10299d56)
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x102abee0u), g->eax, g->ecx, edx, 1, 3, esi, 0u, ebx);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(10299d5f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t31 = cow_stdcall(g, COW_IMG(0x102abed0u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(10299d64)
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, ebx);
    wr32(esi + 0x44u, eax);
    wr32(esi + 0x34u, ebx);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102a9fd0u), 2, ebx, 3u);
    COW_AT(10299d72)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 8u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10299c50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10299c6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10299c7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10299c88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299c91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10299c9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299ca1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299cabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299cb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299cc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299ccdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299cd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299ce5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10299cfdu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, 4u);
        wr32(sp0 - 0x2cu, COW_IMG(0x103bc174u));
        wr32(sp0 - 0x28u, 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x10299d11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x44u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299d26u:
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
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10299d33u:
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
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10299d46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10299d4fu:
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
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10299d56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10299d5fu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10299d64u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10299d72u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10299c50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10299c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
