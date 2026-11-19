/* f_0x102ace60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ace60(Guest* g)
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
    uint32_t t2;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ace74u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ace74;
    case 0x102ace7fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ace7f;
    case 0x102ace87u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102ace87;
    case 0x102aceaeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102aceae;
    case 0x102acecfu: eax = g->eax; ecx = g->ecx; edi = g->edi; goto E_102acecf;
    case 0x102aced4u: eax = g->eax; ecx = g->ecx; edi = g->edi; goto E_102aced4;
    case 0x102aced6u: eax = g->eax; ecx = g->ecx; edi = g->edi; goto E_102aced6;
    case 0x102acf13u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_102acf13;
    default: break;
    }
#endif

    COW_AT(102ace60)
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102acf13;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    edi = rd32(sp0 + 4u);
    COW_AT(102ace74)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102acf13;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102ace7f)
    if (arg2 != 0u) goto L_102aceae;
    COW_AT(102ace87)
    wr32(sp0 - 0x5cu, 0xebu);
    wr32(sp0 - 0x60u, COW_IMG(0x103bec10u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bec10u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103bebacu));
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102aceae: ;
    COW_AT(102aceae)
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, sp0 + 4u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, arg2);
    if (rd32(edi + 0x34u) == 0u)
    {
    COW_AT(102aced4)
        eax = 0u;
    }
    else
    {
        eax = rd32(edi + 0x34u);
    COW_AT(102acecf)
        eax = rd32(eax + 0x14u);
    }
    COW_AT(102aced6)
    wr32(sp0 - 0x5cu, eax);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x60u, t4);
    wr32(sp0 - 0x64u, COW_IMG(0x103becc8u));
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    g->ecx = t4;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103becc8u), t4, eax, rd32(sp0 - 0x58u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x6cu, arg2);
    wr32(sp0 - 0x70u, 0x50u);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = t6;
    g->esp = sp0 - 0x68u;
    t7 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, arg2);
    t8 = g->edx;
    wr32(sp0 - 0x7cu, arg2);
    t9 = rd32(edi + 0x34u);
    wr32(sp0 - 0x80u, t9);
    g->ecx = t9;
    g->edx = t8;
    g->esp = sp0 - 0x58u;
    t10 = cow_cdecl(g, COW_IMG(0x102a9dd0u), 10, t9, arg2, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x50u, COW_IMG(0x103becc8u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x84u, arg2);
    g->edi = edi;
    g->esp = sp0 - 0x78u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t12, 1, 3, arg2, rd32(sp0 - 0x80u), arg2);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    return;
L_102acf13: ;
    COW_AT(102acf13)
    wr32(sp0 - 0x5cu, 0xe8u);
    wr32(sp0 - 0x60u, COW_IMG(0x103bec10u));
    wr32(sp0 - 0x64u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bec10u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x68u, COW_IMG(0x103beb6cu));
    wr32(sp0 - 0x6cu, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beb6cu));
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ace60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ace74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102ace7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102ace87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x102aceaeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102acecfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102aced4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102aced6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg2;
        wr32(sp0 - 0x68u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102acf13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
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
void cow_adapter_102ace60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ace60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
