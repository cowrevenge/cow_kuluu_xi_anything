/* f_0x102a28e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a28e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a296bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_102a296b;
    case 0x102a2977u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a2977;
    case 0x102a298au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a298a;
    case 0x102a2997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a2997;
    case 0x102a29a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a29a0;
    case 0x102a29b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a29b0;
    case 0x102a29e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a29e1;
    case 0x102a29eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a29ea;
    case 0x102a29fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a29fc;
    case 0x102a2a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a2a03;
    case 0x102a2a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a2a0f;
    case 0x102a2a1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102a2a1b;
    case 0x102a2a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a2a25;
    case 0x102a2a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a2a39;
    default: break;
    }
#endif

    COW_AT(102a28e0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x20u, 0x3e800000u);
    wr32(sp0 - 0x1cu, 0x3e800000u);
    wr32(sp0 - 0x18u, 0x3e800000u);
    wr32(sp0 - 0x14u, 0x3f810000u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x34u, in_edi);
    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u);
    t3 = rd32(sp0 + 8u);
    t4 = rd32(rd32(sp0 + 4u) + 0x40u);
    t5 = rd32(sp0 + 4u);
    t6 = rd32(rd32(sp0 + 8u) * 0x30u + rd32(rd32(sp0 + 4u) + 0x40u));
    t7 = rd32(rd32(rd32(sp0 + 4u) + 0x24u) + rd32(rd32(sp0 + 8u) * 0x30u + rd32(rd32(sp0 + 4u) + 0x40u)) * 0xcu);
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x24u, t2);
    g->eax = sp0 - 0x20u;
    g->edx = t2;
    g->esp = sp0 - 0x34u;
    t8 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x20u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    ebx = t3 * 0x30u + t4;
    ebp = t5;
    esi = t6 * 0xcu;
    edi = t7;
    COW_AT(102a296b)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x10282050u), eax, g->ecx, g->edx, 1, 7, sp0 - 0x10u, 1u, sp0 - 0x20u, in_edi, in_esi, in_ebp, in_ebx);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
    COW_AT(102a2977)
    wr32(sp0 - 0x44u, 0x447a0000u);
    wr32(sp0 - 0x48u, 0x3dcccccdu);
    t12 = rd32(edi + 0x24u);
    wr32(sp0 - 0x4cu, t12);
    g->edx = t12;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10283c30u), 3, t12, 0x3dcccccdu, 0x447a0000u);
    t13 = g->edx;
    edx = t13;
    COW_AT(102a298a)
    t14 = rd32(esi + rd32(ebp + 0x24u) + 4u);
    wr32(sp0 - 0x50u, t14);
    g->eax = rd32(ebp + 0x24u);
    g->ecx = t14;
    g->edx = edx;
    t15 = rd32(ebp + 0x24u);
    g->esp = sp0 - 0x4cu;
    t16 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t14);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(102a2997)
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0u, 0u);
    t19 = g->ecx;
    ecx = t19;
    COW_AT(102a29a0)
    t20 = rd32(ebx + 4u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t20 <= 0)
    {
        eax = t20;
        goto L_102a2a0f;
    }
    edx = 0u;
L_102a29b0: ;
    COW_AT(102a29b0)
    t21 = rd32(edx * 4u + rd32(ebx + 8u));
    if (rd8((t21 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t21 >> 0x10u) * 0x2cu + rd32(ebp + 0x48u) + 0x28u) + 0x1du) == 0u)
    {
        ecx = (rd32(ebp + 0x48u) & 0xffffff00u) | rd8((t21 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t21 >> 0x10u) * 0x2cu + rd32(ebp + 0x48u) + 0x28u) + 0x1du);
    }
    else
    {
        eax = (t21 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t21 >> 0x10u) * 0x2cu + rd32(ebp + 0x48u) + 0x28u);
        esi = (uint32_t)((int32_t)t21 >> 0x10u) * 0x2cu;
        edi = (t21 & 0x7fffu) * 0x90u;
    COW_AT(102a29e1)
        t22 = rd32(eax + 4u);
        wr32(sp0 - 0x38u, t22);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10283e20u), 1, t22);
    COW_AT(102a29ea)
        wr32(sp0 - 0x3cu, 4u);
        t23 = rd32(edi + rd32(esi + rd32(ebp + 0x48u) + 0x28u));
        wr32(sp0 - 0x40u, t23);
        g->ecx = t23;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10285870u), 1, t23);
        t24 = g->ecx;
        ecx = t24;
    COW_AT(102a29fc)
        edx = rd32(sp0 + 8u);
    }
    COW_AT(102a2a03)
    t25 = rd32(ebx + 4u);
    wr32(sp0 + 8u, edx + 1u);
    if ((int32_t)(edx + 1u) < (int32_t)t25)
    {
        edx = edx + 1u;
        goto L_102a29b0;
    }
    eax = t25;
L_102a2a0f: ;
    COW_AT(102a2a0f)
    wr32(sp0 - 0x38u, 1u);
    t26 = rd32(sp0 + 4u);
    wr32(sp0 - 0x3cu, t26);
    g->ecx = ecx;
    g->edx = t26;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102821b0u), 5, t26, 1u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t27 = g->ecx;
    t28 = g->edx;
    ecx = t27;
    edx = t28;
    loc_3c = rd32(sp0 - 0x3cu);
    COW_AT(102a2a1b)
    t29 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x40u, t29);
    g->eax = t29;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t30 = cow_cdecl(g, COW_IMG(0x10282100u), 3, t29, loc_3c, 1u);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(102a2a25)
    wr32(sp0 - 0x44u, 1u);
    t32 = rd32(COW_IMG(0x1099d200u)) + 0x778u;
    wr32(sp0 - 0x48u, t32);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t33 = cow_call_regs(g, COW_IMG(0x10282050u), eax, g->ecx, g->edx, 1, 7, t32, 1u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(102a2a39)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a28e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a296bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102a2977u:
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
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102a298au:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102a2997u:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102a29a0u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102a29b0u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a29e1u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a29eau:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x102a29fcu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102a2a03u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a2a0fu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a2a1bu:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x38u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102a2a25u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102a2a39u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a28e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a28e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
