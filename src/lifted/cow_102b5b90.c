/* f_0x102b5b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b5b90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b5ba4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102b5ba4;
    case 0x102b5bafu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102b5baf;
    case 0x102b5bb7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102b5bb7;
    case 0x102b5bdeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102b5bde;
    case 0x102b5bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102b5bff;
    case 0x102b5c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102b5c04;
    case 0x102b5c06u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102b5c06;
    case 0x102b5c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b5c47;
    case 0x102b5c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b5c64;
    case 0x102b5c74u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102b5c74;
    default: break;
    }
#endif

    COW_AT(102b5b90)
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102b5c74;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    edi = rd32(sp0 + 4u);
    COW_AT(102b5ba4)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b5c74;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102b5baf)
    if (arg2 != 0u) goto L_102b5bde;
    COW_AT(102b5bb7)
    wr32(sp0 - 0x5cu, 0x1fdu);
    wr32(sp0 - 0x60u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b5bde: ;
    COW_AT(102b5bde)
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 4u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, arg2);
    if (rd32(edi + 0x34u) == 0u)
    {
    COW_AT(102b5c04)
        eax = 0u;
    }
    else
    {
        eax = rd32(edi + 0x34u);
    COW_AT(102b5bff)
        eax = rd32(eax + 0x14u);
    }
    COW_AT(102b5c06)
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, eax);
    t4 = rd32(edi + 0x48u);
    wr32(sp0 - 0x64u, t4);
    t5 = rd32(edi + 0x44u);
    wr32(sp0 - 0x68u, t5);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 - 0x6cu, t6);
    wr32(sp0 - 0x70u, COW_IMG(0x103c2040u));
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    g->ebx = edi + 0x48u;
    g->eax = t6;
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x60u;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103c2040u), t6, t5, t4);
    t8 = g->ecx;
    wr32(sp0 - 0x78u, arg2);
    wr32(sp0 - 0x7cu, 0x50u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, sp0 - 0x50u);
    g->ecx = t8;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x88u, arg2);
    t11 = rd32(edi + 0x34u);
    wr32(sp0 - 0x8cu, t11);
    g->eax = t11;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x64u;
    t12 = cow_cdecl(g, COW_IMG(0x102a9dd0u), 10, t11, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x50u, COW_IMG(0x103c2040u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        ebx = edi + 0x48u;
    COW_AT(102b5c47)
        wr32(sp0 - 0x60u, arg2);
        wr32(sp0 - 0x64u, 1u);
        wr32(sp0 - 0x68u, 4u);
        wr32(sp0 - 0x6cu, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x5cu;
        t15 = cow_cdecl(g, COW_IMG(0x10292200u), 4, ebx, 4u, 1u, arg2);
        wr32(sp0 - 0x70u, arg2);
        wr32(sp0 - 0x74u, rd32(ebx));
        wr32(sp0 - 0x78u, 4u);
        t16 = rd32(edi + 0x4cu);
        wr32(sp0 - 0x7cu, t16);
        g->ecx = rd32(ebx);
        g->edx = t16;
        t17 = rd32(ebx);
        g->esp = sp0 - 0x6cu;
        t18 = cow_cdecl(g, COW_IMG(0x10292200u), 4, t16, 4u, t17, arg2);
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    COW_AT(102b5c64)
    wr32(sp0 - 0x60u, arg2);
    g->edi = edi;
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, arg2, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102b5c74: ;
    COW_AT(102b5c74)
    wr32(sp0 - 0x5cu, 0x1fau);
    wr32(sp0 - 0x60u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t22 = g->ecx;
    t23 = g->edx;
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
int cow_entry_fix_102b5b90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b5ba4u:
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
    case 0x102b5bafu:
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
    case 0x102b5bb7u:
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
    case 0x102b5bdeu:
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
    case 0x102b5bffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b5c04u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b5c06u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b5c47u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg2;
        wr32(sp0 - 0x84u, sp0 - 0x50u);
        wr32(sp0 - 0x74u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102b5c64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg2;
        wr32(sp0 - 0x84u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102b5c74u:
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
void cow_adapter_102b5b90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b5b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
