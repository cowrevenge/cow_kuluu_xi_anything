/* f_0x1026d68f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1026d68f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 12u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026d69bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1026d69b;
    case 0x1026d6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d6a2;
    case 0x1026d6a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d6a9;
    case 0x1026d6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d6b0;
    case 0x1026d6b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026d6b2;
    case 0x1026d6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026d6ba;
    default: break;
    }
#endif

    COW_AT(1026d68f)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329450u)), 0);   /* ws2_32.dll!WSAGetLastError */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026d69b)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026d6a2)
    if (eax != 0x2733u)
    {
    COW_AT(1026d6b0)
        eax = 0u;
    }
    else
    {
    COW_AT(1026d6a9)
        eax = 1u;
    }
    COW_AT(1026d6b2)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    t7 = rd32(sp0 - 8u);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    esi = t7;
    COW_AT(1026d6ba)
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026d68f(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026d69bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d6a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d6a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d6b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d6b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026d6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d68f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026d68f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
