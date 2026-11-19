/* f_0x102bcf0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bcf0d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
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
    uint32_t t3;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bcf25u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102bcf25;
    case 0x102bcf2cu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102bcf2c;
    case 0x102bcf31u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102bcf31;
    case 0x102bcf33u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102bcf33;
    case 0x102bcf44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_54 = rd32(sp0 - 0x54u); in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102bcf44;
    case 0x102bcf5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_54 = rd32(sp0 - 0x54u); goto E_102bcf5d;
    case 0x102bcf70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_54 = rd32(sp0 - 0x54u); goto E_102bcf70;
    case 0x102bcfd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfd0;
    case 0x102bcfd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfd5;
    case 0x102bcfdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfda;
    case 0x102bcfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfde;
    case 0x102bcfe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfe5;
    case 0x102bcfecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcfec;
    case 0x102bcff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_54 = rd32(sp0 - 0x54u); goto E_102bcff1;
    case 0x102bcff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102bcff9;
    default: break;
    }
#endif

    COW_AT(102bcf0d)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    eax = COW_IMG(0x10342de8u);
    edx = in_edx;
    esi = rd32(arg1);
L_102bcf25: ;
    COW_AT(102bcf25)
    if (rd8(arg2 + eax - COW_IMG(0x10342de8u)) != rd8(eax))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        goto L_102bcf33;
    }
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(102bcf2c)
    if ((uint8_t)edx != 0u)
    {
        eax = eax + 1u;
        goto L_102bcf25;
    }
    COW_AT(102bcf31)
    ecx = arg2 - COW_IMG(0x10342de8u);
L_102bcf44: ;
    COW_AT(102bcf44)
    wr32(sp0 - 0x54u, 0x40u);
    wr32(sp0 - 0x58u, esi);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t2 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, sp0 - 0x44u, esi, 0x40u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (arg3 >= 0x260u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(102bcf5d)
        wr32(sp0 - 0x54u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t5 = cow_call_regs(g, COW_IMG(0x102c43b8u), g->eax, ecx, edx, 1, 5, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x58u, 1u);
        g->esp = sp0 - 0x44u;
        t8 = cow_call_regs(g, COW_IMG(0x102c4348u), g->eax, t6, t7, 1, 5, 1u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
        t9 = g->edx;
        wr32(arg1, t8);
        eax = t8;
        ecx = rd32(sp0 - 0x54u);
        edx = t9;
        esi = t8;
    }
    COW_AT(102bcf70)
    wr32(sp0 - 0x54u, 0x260u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, esi, 0u, 0x260u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x60u, 0x40u);
    wr32(sp0 - 0x64u, sp0 - 0x44u);
    wr32(sp0 - 0x68u, esi);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, esi, sp0 - 0x44u, 0x40u, rd32(sp0 - 0x5cu), 0u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x6cu, 0x2000u);
    wr32(sp0 - 0x70u, esi);
    wr32(esi + 0xb0u, 0x2000u);
    g->eax = 0x2000u;
    g->esp = sp0 - 0x64u;
    t14 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t12, t13, 1, 3, esi, 0x2000u, rd32(sp0 - 0x68u));
    t15 = g->ecx;
    t16 = g->edx;
    wr32(esi + 0xacu, t14);
    wr32(sp0 - 0x74u, 0x38u);
    wr32(sp0 - 0x78u, COW_IMG(0x103c7c4cu));
    wr32(sp0 - 0x7cu, esi + 0x74u);
    wr32(esi + 0x94u, COW_IMG(0x102c35cdu));
    wr32(esi + 0x98u, COW_IMG(0x102c3642u));
    wr32(esi + 0x9cu, esi);
    g->eax = esi + 0x74u;
    g->esp = sp0 - 0x60u;
    t17 = cow_call_regs(g, COW_IMG(0x102c3e87u), g->eax, t15, t16, 1, 7, esi + 0x74u, COW_IMG(0x103c7c4cu), 0x38u, rd32(sp0 - 0x70u), 0x2000u, rd32(sp0 - 0x68u), sp0 - 0x44u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0xfffffffau)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_102bcfec;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(102bcfd0)
    if (eax == 0xfffffffcu) goto L_102bcfe5;
    COW_AT(102bcfd5)
    if (eax == 0xfffffffeu) goto L_102bcfe5;
    COW_AT(102bcfda)
    if (eax == 0u) goto L_102bcff9;
    COW_AT(102bcfde)
    wr32(sp0 - 0x54u, COW_IMG(0x103c7c38u));
    loc_54 = COW_IMG(0x103c7c38u);
L_102bcff1: ;
    COW_AT(102bcff1)
    wr32(sp0 - 0x58u, esi);
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, loc_54, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t20 = g->edx;
    ecx = rd32(sp0 - 0x54u);
    edx = t20;
L_102bcff9: ;
    COW_AT(102bcff9)
    wr32(sp0 - 0x54u, 0u);
    t21 = rd32(esi + 0xacu);
    wr32(esi + 0x80u, t21);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, esi);
    t22 = rd32(esi + 0xb0u);
    wr32(esi + 0x84u, t22);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102c3cd4u), 5, esi, 0u, 0u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bcf33: ;
    COW_AT(102bcf33)
    wr32(esi + 0x44u, 0u);
    wr32(sp0 - 0x54u, COW_IMG(0x103c7dc0u));
    wr32(sp0 - 0x58u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c7dc0u));
    t1 = g->edx;
    ecx = COW_IMG(0x103c7dc0u);
    edx = t1;
    goto L_102bcf44;
L_102bcfe5: ;
    COW_AT(102bcfe5)
    wr32(sp0 - 0x54u, COW_IMG(0x103c7db0u));
    loc_54 = COW_IMG(0x103c7db0u);
    goto L_102bcff1;
L_102bcfec: ;
    COW_AT(102bcfec)
    wr32(sp0 - 0x54u, COW_IMG(0x103c7da0u));
    loc_54 = COW_IMG(0x103c7da0u);
    goto L_102bcff1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bcf0d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bcf25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2 - COW_IMG(0x10342de8u);
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bcf2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2 - COW_IMG(0x10342de8u);
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bcf31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2 - COW_IMG(0x10342de8u);
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bcf33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2 - COW_IMG(0x10342de8u);
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bcf44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bcf5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0x260u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcf70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x260u;
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfdau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfe5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcfecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcff1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bcff9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x64u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bcf0d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bcf0d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
