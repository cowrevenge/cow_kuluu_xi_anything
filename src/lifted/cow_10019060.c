/* f_0x10019060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10019060(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 228u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001909du: eax = g->eax; goto E_1001909d;
    case 0x100190cfu: eax = g->eax; goto E_100190cf;
    default: break;
    }
#endif

    COW_AT(10019060)
    wr32(sp0 - 0xccu, sp0 - 0xc4u);
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0xc8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xdcu, arg2);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0xe0u, t1);
    wr32(sp0 - 0xc4u, 0x40u);
    wr32(sp0 - 0xc8u, 0u);
    g->eax = t1;
    g->esp = sp0 - 0xc8u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, t1, arg2, 0u, sp0 - 0xc8u, sp0 - 0xc0u, sp0 - 0xc4u);   /* advapi32.dll!RegQueryValueExA */
    if (t2 != 0u)
    {
        eax = t2;
        goto L_100190cf;
    }
    eax = t2;
    COW_AT(1001909d)
    wr32(sp0 - 0xccu, 0x40u);
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0x80u);
    g->esp = sp0 - 0xc8u;
    cow_call_regs(g, COW_IMG(0x103136b7u), g->eax, sp0 - 0xc0u, sp0 - 0x80u, 1, 3, sp0 - 0x80u, sp0 - 0xc0u, 0x40u);
    t3 = g->edx;
    wr32(sp0 - 0xccu, arg1);
    wr32(sp0 - 0xd0u, sp0 - 0x80u);
    g->eax = arg1;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x103294bcu)), 2, sp0 - 0x80u, arg1);   /* ole32.dll!CLSIDFromString */
    return (t4 & 0xffffff00u) | 1u;
L_100190cf: ;
    COW_AT(100190cf)
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001909du:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd4u, sp0 - 0xc8u);
        wr32(sp0 - 0xd0u, sp0 - 0xc0u);
        wr32(sp0 - 0xccu, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x100190cfu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd4u, sp0 - 0xc8u);
        wr32(sp0 - 0xd0u, sp0 - 0xc0u);
        wr32(sp0 - 0xccu, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10019060(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
