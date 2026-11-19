/* f_0x1028c090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028c090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028c0acu: eax = g->eax; ecx = g->ecx; goto E_1028c0ac;
    case 0x1028c0bdu: eax = g->eax; ecx = g->ecx; goto E_1028c0bd;
    default: break;
    }
#endif

    COW_AT(1028c090)
    wr32(sp0 - 4u, self);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10277980u), 1, self);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, t1);
    g->ecx = arg1;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x102a1d80u), 2, t1, arg1);
    t4 = g->ecx;
    if ((uint8_t)t3 != 0u) goto L_1028c0bd;
    eax = t3;
    ecx = t4;
    COW_AT(1028c0ac)
    wr32(sp0 - 8u, sp0 - 4u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 - 4u);
    return 0u;
L_1028c0bd: ;
    COW_AT(1028c0bd)
    t5 = rd32(rd32(sp0 - 4u) + 0xa8u) | 1u;
    wr32(rd32(sp0 - 4u) + 0xa8u, t5);
    return rd32(sp0 - 4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028c090(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028c0acu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028c0bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c090(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028c090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
