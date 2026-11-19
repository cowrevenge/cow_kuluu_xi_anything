/* f_0x10266240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10266240(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10266258u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10266258;
    case 0x10266273u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10266273;
    default: break;
    }
#endif

    COW_AT(10266240)
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, rd32(COW_IMG(0x10329338u)), 3, sp0 - 0x20u, COW_IMG(0x10352ff0u), arg1);   /* user32.dll!wsprintfA */
    t1 = g->ecx;
    ecx = t1;
    COW_AT(10266258)
    wr32(sp0 - 0x24u, 0x20u);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    g->eax = sp0 - 0x20u;
    g->edx = arg2;
    g->esp = sp0 - 0x20u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6, 0u, 0u, sp0 - 0x20u, 0xffffffffu, arg2, 0x20u);   /* kernel32.dll!MultiByteToWideChar */
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10266273)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10266240(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10266258u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10266273u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10266240(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10266240(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
