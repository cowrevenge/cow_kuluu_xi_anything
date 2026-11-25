/* f_0x100dc150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100dc150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dc17bu: eax = g->eax; ecx = g->ecx; goto E_100dc17b;
    case 0x100dc18au: eax = g->eax; ecx = g->ecx; goto E_100dc18a;
    case 0x100dc1acu: eax = g->eax; ecx = g->ecx; goto E_100dc1ac;
    default: break;
    }
#endif

    COW_AT(100dc150)
    wr32(rd32(COW_IMG(0x10492e10u)) + 0xcu, arg1);
    t1 = rd32(COW_IMG(0x10492e10u));
    wr32(t1 + 0x10u, arg2);
    t2 = rd32(COW_IMG(0x10492e10u));
    wr32(t2 + 0x14u, 0u);
    g->eax = arg2;
    t3 = cow_stdcall(g, COW_IMG(0x100dbe00u), 0);
    eax = t3;
    COW_AT(100dc17b)
    wr32(rd32(COW_IMG(0x10492e10u)), eax);
    eax = 0x18u;
    ecx = 0u;
L_100dc18a: ;
    COW_AT(100dc18a)
    wr32(eax + rd32(COW_IMG(0x10492e10u)), 0u);
    wr8(ecx + rd32(COW_IMG(0x10492e10u)) + 0x40u, 0u);
    if ((int32_t)(eax + 4u) < 64)
    {
        eax = eax + 4u;
        ecx = ecx + 1u;
        goto L_100dc18a;
    }
    eax = eax + 4u;
    COW_AT(100dc1ac)
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dc150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dc17bu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100dc18au:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100dc1acu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dc150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
