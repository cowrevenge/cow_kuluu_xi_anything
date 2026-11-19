/* f_0x1026cc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1026cc50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 424u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026cc81u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x19cu); in_esi = rd32(sp0 - 0x198u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x19cu); g->esi = rd32(sp0 - 0x198u); goto E_1026cc81;
    case 0x1026cc88u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026cc88;
    case 0x1026cc8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026cc8c;
    case 0x1026cc90u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026cc90;
    case 0x1026cc95u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1026cc95;
    case 0x1026cca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1026cca4;
    default: break;
    }
#endif

    COW_AT(1026cc50)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x198u, in_esi);
    wr32(sp0 - 0x19cu, in_edi);
    edi = sp0 - 0x194u;
    eax = 0xccccccccu;
    ecx = 0x64u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1a0u, sp0 - 0x194u);
    wr32(sp0 - 0x1a4u, 0x202u);
    g->eax = sp0 - 0x194u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x19cu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329478u)), 2, 0x202u, sp0 - 0x194u);   /* ws2_32.dll!WSAStartup */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026cc81)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x19cu;
    t4 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026cc88)
    if (eax == 0u)
    {
    COW_AT(1026cc90)
        eax = 1u;
    }
    else
    {
    COW_AT(1026cc8c)
        eax = 0u;
    }
    COW_AT(1026cc95)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    t7 = rd32(sp0 - 0x198u);
    t8 = rd32(sp0 - 0x19cu);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    esi = t7;
    edi = t8;
    COW_AT(1026cca4)
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026cc50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026cc81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x19cu);
        in_esi = rd32(sp0 - 0x198u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x19cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x19cu;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1026cc88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x19cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x19cu;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1026cc8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x19cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x19cu;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1026cc90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x19cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x19cu;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1026cc95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x19cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x19cu;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1026cca4u:
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
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1a0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026cc50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026cc50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
