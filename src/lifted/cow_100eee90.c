/* f_0x100eee90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eee90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100eeea0u: eax = g->eax; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeea0;
    case 0x100eeea7u: eax = g->eax; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeea7;
    case 0x100eeeccu: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeecc;
    case 0x100eeed7u: eax = g->eax; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeed7;
    case 0x100eeef0u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeef0;
    case 0x100eeef2u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eeef2;
    case 0x100eef03u: eax = g->eax; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef03;
    case 0x100eef24u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef24;
    case 0x100eef2fu: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef2f;
    case 0x100eef47u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef47;
    case 0x100eef49u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef49;
    case 0x100eef5au: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef5a;
    case 0x100eef5cu: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef5c;
    case 0x100eef60u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef60;
    default: break;
    }
#endif

    COW_AT(100eee90)
    if (rd32(arg1) > 4u) goto L_100eef5c;
    eax = rd32(arg1);
    COW_AT(100eeea0)
    t1 = rd32(COW_IMG(0x100eef68u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100eeea7u: goto L_100eeea7;
    case 0x100eeed7u: goto L_100eeed7;
    case 0x100eef03u: goto L_100eef03;
    case 0x100eef2fu: goto L_100eef2f;
    case 0x100eef60u: goto L_100eef60;
    default: rt_fatal(g, COW_IMG(0x100eeea0u), "switch");
    }
    return 0;
L_100eeea7: ;
    COW_AT(100eeea7)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x1031000du), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t8);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100eef5a;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100eeecc)
    wr32(ecx + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100eeed7: ;
    COW_AT(100eeed7)
    t6 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    g->eax = t6;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10310018u), 1, t6);
    if (t7 == 0u) goto L_100eef5c;
    eax = t7;
    sf = (int32_t)t7 < 0;
    COW_AT(100eeef0)
    if (!sf) goto L_100eef5a;
    COW_AT(100eeef2)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100eef03: ;
    COW_AT(100eef03)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x1030fff7u), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t5);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100eef5a;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100eef24)
    wr32(ecx + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100eef2f: ;
    COW_AT(100eef2f)
    t2 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    g->eax = rd32(COW_IMG(0x104df770u));
    t3 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10310002u), 1, t2);
    if (t4 == 0u) goto L_100eef5c;
    eax = t4;
    sf = (int32_t)t4 < 0;
    COW_AT(100eef47)
    if (!sf) goto L_100eef5a;
    COW_AT(100eef49)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100eef5a: ;
    COW_AT(100eef5a)
    wr32(arg1, rd32(arg1) + 1u);
L_100eef5c: ;
    COW_AT(100eef5c)
    g->esi = in_esi;
    return 0u;
L_100eef60: ;
    COW_AT(100eef60)
    g->esi = in_esi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100eee90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100eeea0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eeea7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eeeccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100eeed7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eeef0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100eeef2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100eef03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eef24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100eef2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eef47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100eef49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100eef5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eef5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100eef60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100eee90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100eee90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
