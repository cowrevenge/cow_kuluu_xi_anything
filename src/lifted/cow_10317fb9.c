/* f_0x10317fb9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10317fb9(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10317fc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10317fc8;
    case 0x10317fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10317fd8;
    case 0x10317fddu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10317fdd;
    default: break;
    }
#endif

    COW_AT(10317fb9)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x1032914cu)), 1, COW_IMG(0x1034a2f4u));   /* kernel32.dll!GetModuleHandleA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10317fdd;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10317fc8)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329138u)), 2, eax, COW_IMG(0x1034a2d8u));   /* kernel32.dll!GetProcAddress */
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10317fdd;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10317fd8)
    g->esp = sp0;
    cow_thiscall(g, eax, ecx, 1, 0u);
    return;
L_10317fdd: ;
    COW_AT(10317fdd)
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10317f7bu), eax, ecx, edx);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10317fb9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10317fc8u:
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
    case 0x10317fd8u:
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
    case 0x10317fddu:
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
void cow_adapter_10317fb9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10317fb9(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
