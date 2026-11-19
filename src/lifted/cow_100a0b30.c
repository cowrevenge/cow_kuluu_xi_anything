/* f_0x100a0b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a0b30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a0b42u: eax = g->eax; edx = g->edx; goto E_100a0b42;
    case 0x100a0b4bu: eax = g->eax; edx = g->edx; goto E_100a0b4b;
    case 0x100a0b4fu: eax = g->eax; edx = g->edx; goto E_100a0b4f;
    default: break;
    }
#endif

    COW_AT(100a0b30)
    g->eax = arg1;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100a0b10u), 1, arg1);
    t2 = g->edx;
    if (t1 != 0x7au)
    {
        edx = t2;
        goto L_100a0b4f;
    }
    eax = t1;
    edx = t2;
    COW_AT(100a0b42)
    if ((uint16_t)arg2 != 0xffffu) goto L_100a0b4f;
    COW_AT(100a0b4b)
    g->edx = edx;
    return 0xffffffffu;
L_100a0b4f: ;
    COW_AT(100a0b4f)
    g->edx = edx;
    return 0xfffffffeu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a0b30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a0b42u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100a0b4bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100a0b4fu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
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
void cow_adapter_100a0b30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a0b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
