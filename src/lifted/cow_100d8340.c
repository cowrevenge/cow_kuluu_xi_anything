/* f_0x100d8340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d8340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d8350u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100d8350;
    case 0x100d835au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d835a;
    case 0x100d836bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d836b;
    case 0x100d8376u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d8376;
    case 0x100d8380u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d8380;
    case 0x100d838fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d838f;
    case 0x100d8398u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d8398;
    case 0x100d83a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d83a1;
    case 0x100d83a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d83a5;
    case 0x100d83c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d83c1;
    case 0x100d83f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d83f6;
    case 0x100d83fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d83fc;
    default: break;
    }
#endif

    COW_AT(100d8340)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t1 = cow_call_regs(g, COW_IMG(0x10314f31u), g->eax, self, in_edx, 1, 1, sp0 - 0x28u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100d8350)
    wr32(sp0 - 0x3cu, sp0 - 0x28u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t3 = cow_call_regs(g, COW_IMG(0x10314dd1u), g->eax, sp0 - 0x28u, edx, 1, 3, sp0 - 0x28u, sp0 - 0x28u, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(100d835a)
    wr32(sp0 - 0x40u, COW_IMG(0x1035fcd4u));
    wr32(sp0 - 0x44u, COW_IMG(0x1035fcbcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t6 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x1035fcbcu), COW_IMG(0x1035fcd4u), sp0 - 0x28u, sp0 - 0x28u, rd32(sp0 - 0x34u));
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    edi = eax;
    eax = t6;
    COW_AT(100d836b)
    if (eax != 0u)
    {
        esi = eax;
        goto L_100d83a1;
    }
    COW_AT(100d8376)
    wr32(sp0 - 0x38u, COW_IMG(0x1035fcb0u));
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t9 = cow_call_regs(g, COW_IMG(0x10327412u), g->eax, ecx, edx, 1, 3, COW_IMG(0x1035fcb0u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(100d8380)
    wr32(sp0 - 0x3cu, COW_IMG(0x1035fcd4u));
    wr32(sp0 - 0x40u, COW_IMG(0x1035fcbcu));
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t12 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x1035fcbcu), COW_IMG(0x1035fcd4u), COW_IMG(0x1035fcb0u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    eax = t12;
    COW_AT(100d838f)
    if (eax != 0u)
    {
        esi = eax;
        goto L_100d83a1;
    }
    COW_AT(100d8398)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return eax & 0xffffff00u;
L_100d83a1: ;
    COW_AT(100d83a1)
    if (edi == 0u)
    {
    COW_AT(100d83a5)
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        edi = sp0 - 0x24u;
    }
    COW_AT(100d83c1)
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 0x3cu, rd32(edi));
    t13 = rd32(edi + 4u);
    wr32(sp0 - 0x40u, t13);
    t14 = rd32(edi + 8u);
    wr32(sp0 - 0x44u, t14);
    t15 = rd32(edi + 0xcu);
    wr32(sp0 - 0x48u, t15);
    t16 = rd32(edi + 0x10u) + 1u;
    wr32(sp0 - 0x4cu, t16);
    t17 = cow_divs(g, rd32(edi + 0x14u) + 0x76cu, 0x64u);
    t18 = cow_mods(g, rd32(edi + 0x14u) + 0x76cu, 0x64u);
    wr32(sp0 - 0x50u, t18);
    wr32(sp0 - 0x54u, COW_IMG(0x1035fc8cu));
    wr32(sp0 - 0x58u, esi);
    g->ebx = 0u;
    g->eax = t17;
    g->ecx = 0x64u;
    g->esp = sp0 - 0x44u;
    t19 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t18, 1, 5, esi, COW_IMG(0x1035fc8cu), t18, t16, t15);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(100d83f6)
    wr32(sp0 - 0x5cu, esi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t22 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x58u), COW_IMG(0x1035fc8cu));
    eax = t22;
    COW_AT(100d83fc)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d8340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d8350u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d835au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d836bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d8376u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100d8380u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x38u, COW_IMG(0x1035fcb0u));
        (void)sp0;
        return 1;
    }
    case 0x100d838fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d8398u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100d83a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d83a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d83c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d83f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x54u, COW_IMG(0x1035fc8cu));
        (void)sp0;
        return 1;
    }
    case 0x100d83fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
