/* f_0x10281c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10281c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10281c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10281c2b;
    case 0x10281c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10281c2f;
    case 0x10281c39u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10281c39;
    case 0x10281c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10281c3a;
    default: break;
    }
#endif

    COW_AT(10281c10)
    t1 = rd32(COW_IMG(0x1099d638u) + arg1 * 0x28u);
    g->eax = t1;
    g->edx = arg2;
    t2 = rd32(t1);
    COW_RET(0x10281c2bu);
    t3 = cow_thiscall(g, rd32(t2 + 0x3cu), t2, 3, t1, 0u, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10281c2b)
    if (eax != 0u)
    {
    COW_AT(10281c2f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        COW_RET(0x10281c39u);
        t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 1, COW_IMG(0x103b48ecu));
        t7 = g->edx;
        eax = t6;
        edx = t7;
    COW_AT(10281c39)
    }
    COW_AT(10281c3a)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10281c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10281c2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10281c2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10281c39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, COW_IMG(0x103b48ecu));
        (void)sp0;
        return 1;
    }
    case 0x10281c3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10281c10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10281c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
