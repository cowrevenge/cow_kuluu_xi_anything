/* f_0x102f1f8f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f1f8f(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f1f9au: eax = g->eax; in_edx = g->edx; goto E_102f1f9a;
    case 0x102f1fa9u: eax = g->eax; in_edx = g->edx; goto E_102f1fa9;
    default: break;
    }
#endif

    COW_AT(102f1f8f)
    if (rd32(arg1 + 0x50u) == 0u)
    {
        eax = rd32(arg1 + 0x50u);
        goto L_102f1fa9;
    }
    eax = rd32(arg1 + 0x50u);
    COW_AT(102f1f9a)
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall_cdecl(g, eax, arg1, 3, arg1, arg2, arg3);
    t1 = g->edx;
    g->edx = t1;
    return;
L_102f1fa9: ;
    COW_AT(102f1fa9)
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x102ef234u), arg1, in_edx, 2, arg1, COW_IMG(0x10348174u));
    rt_fatal(g, COW_IMG(0x102f1fafu), "no way on");
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f1f8f(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f1f9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f1fa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1f8f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f1f8f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
