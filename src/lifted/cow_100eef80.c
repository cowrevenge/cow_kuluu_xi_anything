/* f_0x100eef80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eef80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100eef8cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef8c;
    case 0x100eef8fu: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef8f;
    case 0x100eef96u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef96;
    case 0x100eef9du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eef9d;
    case 0x100eefb5u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eefb5;
    case 0x100eefb7u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eefb7;
    case 0x100eefc8u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100eefc8;
    case 0x100ef00au: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ef00a;
    case 0x100ef015u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ef015;
    case 0x100ef017u: eax = g->eax; ecx = g->ecx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ef017;
    default: break;
    }
#endif

    COW_AT(100eef80)
    if (rd32(arg1) == 0u) goto L_100eefc8;
    eax = rd32(arg1);
    COW_AT(100eef8c)
    if (eax == 1u) goto L_100eef9d;
    eax = eax - 1u;
    COW_AT(100eef8f)
    if (eax != 1u) goto L_100ef017;
    COW_AT(100eef96)
    g->esi = in_esi;
    return 1u;
L_100eef9d: ;
    COW_AT(100eef9d)
    t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    g->eax = rd32(COW_IMG(0x104df770u));
    t2 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10310018u), 1, t1);
    if (t3 == 0u) goto L_100ef017;
    eax = t3;
    sf = (int32_t)t3 < 0;
    COW_AT(100eefb5)
    if (!sf) goto L_100ef015;
    COW_AT(100eefb7)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100eefc8: ;
    COW_AT(100eefc8)
    t4 = rd32(COW_IMG(0x104df770u));
    wr32(t4 + 0x136acu, 0u);
    g->eax = t4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x1bu);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t6, 1, t5);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x1031000du), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t11);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100ef015;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100ef00a)
    wr32(ecx + 0x136acu, eax);
    g->esi = in_esi;
    return 0xffffffffu;
L_100ef015: ;
    COW_AT(100ef015)
    wr32(arg1, rd32(arg1) + 1u);
L_100ef017: ;
    COW_AT(100ef017)
    g->esi = in_esi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100eef80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100eef8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eef8fu:
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
    case 0x100eef96u:
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
    case 0x100eef9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eefb5u:
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
    case 0x100eefb7u:
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
    case 0x100eefc8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ef00au:
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
    case 0x100ef015u:
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
    case 0x100ef017u:
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
void cow_adapter_100eef80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100eef80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
