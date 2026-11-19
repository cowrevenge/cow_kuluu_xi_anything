/* f_0x10282660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10282660(Guest* g)
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028266fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1028266f;
    case 0x102826dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102826df;
    default: break;
    }
#endif

    COW_AT(10282660)
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    COW_AT(1028266f)
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), ecx, 4, rd32(COW_IMG(0x1066941cu)), ecx, 1u, 2u);
        t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t1, 2u, 1u);
        t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t2, 4u, 2u);
        t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = t3;
        t4 = rd32(COW_IMG(0x1066941cu));
        t5 = cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, t3, 5u, 2u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    COW_AT(102826df)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10282660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028266fu:
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
    case 0x102826dfu:
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
void cow_adapter_10282660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10282660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
