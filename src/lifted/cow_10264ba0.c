/* f_0x10264ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10264ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10264bb1;
    case 0x10264bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10264bb6;
    case 0x10264bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10264bbc;
    case 0x10264bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10264bc1;
    default: break;
    }
#endif

    COW_AT(10264ba0)
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, arg1, 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_10264bc1;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10264bb1)
    if (eax == 0xffffffffu) goto L_10264bbc;
    COW_AT(10264bb6)
    return 0x8000ffffu;
L_10264bbc: ;
    COW_AT(10264bbc)
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10266ad0u), eax, ecx, edx);
L_10264bc1: ;
    COW_AT(10264bc1)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264ba0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264bb1u:
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
    case 0x10264bb6u:
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
    case 0x10264bbcu:
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
    case 0x10264bc1u:
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
void cow_adapter_10264ba0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264ba0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
