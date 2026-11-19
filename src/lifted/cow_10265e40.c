/* f_0x10265e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265e40(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10265e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10265e55;
    case 0x10265e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10265e65;
    case 0x10265e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10265e6d;
    default: break;
    }
#endif

    COW_AT(10265e40)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x1032914cu)), 1, COW_IMG(0x103907c8u));   /* kernel32.dll!GetModuleHandleA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_10265e6d;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10265e55)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329138u)), 2, eax, COW_IMG(0x103907b8u));   /* kernel32.dll!GetProcAddress */
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_10265e6d;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10265e65)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, eax, ecx, 2, 0u, 4u);
    g->esi = in_esi;
    return t7;
L_10265e6d: ;
    COW_AT(10265e6d)
    g->esi = in_esi;
    return 0x80004005u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10265e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10265e55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0x80004005u;
        (void)sp0;
        return 1;
    }
    case 0x10265e65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10265e6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0x80004005u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10265e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265e40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
