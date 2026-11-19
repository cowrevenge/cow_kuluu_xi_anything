/* f_0x101954f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101954f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 3336u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019550fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf4u); goto E_1019550f;
    case 0x10195515u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf4u); goto E_10195515;
    case 0x1019551cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf4u); goto E_1019551c;
    case 0x10195522u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf4u); goto E_10195522;
    case 0x10195527u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10195527;
    case 0x1019554cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1019554c;
    case 0x10195556u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10195556;
    default: break;
    }
#endif

    COW_AT(101954f0)
    wr32(sp0 - 0xcf0u, 1u);
    wr32(sp0 - 0xcf4u, in_edi);
    eax = rd32(self + 4u) + 8u;
    ecx = 0xcfu;
    edx = 1u;
L_1019550f: ;
    COW_AT(1019550f)
    if (rd32(eax + 4u) == 6u)
    {
    COW_AT(10195515)
        wr32(edx * 4u + sp0 - 0xcf0u, rd32(eax));
        edx = edx + 1u;
    }
    COW_AT(1019551c)
    if (ecx != 1u)
    {
        eax = eax + 0x2cu;
        ecx = ecx - 1u;
        goto L_1019550f;
    }
    COW_AT(10195522)
    if ((int32_t)edx <= 0) goto L_10195556;
    COW_AT(10195527)
    wr32(sp0 - 0xcf4u, 0u);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, edx * 4u);
    wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd04u, COW_IMG(0x10379a00u));
    g->eax = edx * 4u;
    g->esp = sp0 - 0xcf0u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a00u), sp0 - 0xcf0u, edx * 4u, 0u, 0u);
    if ((int32_t)t1 >= 0) goto L_10195556;
    eax = t1;
    COW_AT(1019554c)
    g->edi = in_edi;
    return 0xffffffffu;
L_10195556: ;
    COW_AT(10195556)
    g->edi = in_edi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101954f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019550fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x10195515u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x1019551cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x10195522u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x10195527u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcf0u;
        (void)sp0;
        return 1;
    }
    case 0x1019554cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcf0u;
        wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195556u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcf0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101954f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101954f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
