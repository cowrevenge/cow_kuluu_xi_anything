/* f_0x102ae810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ae810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ae824u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ae824;
    case 0x102ae82fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ae82f;
    case 0x102ae837u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ae837;
    case 0x102ae85eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ae85e;
    case 0x102ae87fu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; goto E_102ae87f;
    case 0x102ae884u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; goto E_102ae884;
    case 0x102ae886u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; goto E_102ae886;
    case 0x102ae8f7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ae8f7;
    default: break;
    }
#endif

    COW_AT(102ae810)
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102ae8f7;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    edi = rd32(sp0 + 4u);
    COW_AT(102ae824)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102ae8f7;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102ae82f)
    if (arg2 != 0u) goto L_102ae85e;
    COW_AT(102ae837)
    wr32(sp0 - 0x5cu, 0x4e9u);
    wr32(sp0 - 0x60u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102ae85e: ;
    COW_AT(102ae85e)
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 4u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, arg2);
    if (rd32(edi + 0x34u) == 0u)
    {
    COW_AT(102ae884)
        eax = 0u;
    }
    else
    {
        eax = rd32(edi + 0x34u);
    COW_AT(102ae87f)
        eax = rd32(eax + 0x14u);
    }
    COW_AT(102ae886)
    wr32(sp0 - 0x5cu, in_ebx);
    t4 = rd32(edi + 0x44u);
    wr32(sp0 - 0x60u, t4);
    wr32(sp0 - 0x64u, eax);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 0x68u, t5);
    wr32(sp0 - 0x6cu, COW_IMG(0x103bf1f4u));
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    g->ebx = edi + 0x44u;
    g->eax = sp0 - 0x50u;
    g->edx = t5;
    g->esp = sp0 - 0x5cu;
    t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bf1f4u), t5, eax, t4);
    t7 = g->edx;
    wr32(sp0 - 0x74u, arg2);
    wr32(sp0 - 0x78u, 0x50u);
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, sp0 - 0x50u);
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x70u;
    t8 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, arg2);
    t9 = g->ecx;
    wr32(sp0 - 0x84u, arg2);
    t10 = rd32(edi + 0x34u);
    wr32(sp0 - 0x88u, t10);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102a9dd0u), 10, t10, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x50u, COW_IMG(0x103bf1f4u), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x8cu, arg2);
    wr32(sp0 - 0x90u, 1u);
    wr32(sp0 - 0x94u, 4u);
    wr32(sp0 - 0x98u, edi + 0x4cu);
    g->eax = edi + 0x4cu;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x88u;
    t13 = cow_cdecl(g, COW_IMG(0x10292200u), 4, edi + 0x4cu, 4u, 1u, arg2);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x9cu, arg2);
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 4u);
    wr32(sp0 - 0xa8u, edi + 0x44u);
    g->esp = sp0 - 0x98u;
    t16 = cow_cdecl(g, COW_IMG(0x10292200u), 4, edi + 0x44u, 4u, 1u, arg2);
    wr32(sp0 - 0x60u, arg2);
    t17 = rd32(edi + 0x44u);
    wr32(sp0 - 0x64u, t17);
    wr32(sp0 - 0x68u, 4u);
    t18 = rd32(edi + 0x48u);
    wr32(sp0 - 0x6cu, t18);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x5cu;
    t19 = cow_cdecl(g, COW_IMG(0x10292200u), 4, t18, 4u, t17, arg2);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x70u, arg2);
    g->edi = edi;
    g->esp = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t21, 1, 3, arg2, rd32(sp0 - 0x6cu), 4u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102ae8f7: ;
    COW_AT(102ae8f7)
    wr32(sp0 - 0x5cu, 0x4e6u);
    wr32(sp0 - 0x60u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103beb6cu));
    wr32(sp0 - 0x6cu, COW_IMG(0x103beaa4u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beb6cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ae810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ae824u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102ae82fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102ae837u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102ae85eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102ae87fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ae884u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ae886u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ae8f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ae810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
