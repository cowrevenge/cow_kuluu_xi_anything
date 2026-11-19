/* f_0x1031b4a1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1031b4a1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031b4b8u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1031b4b8;
    case 0x1031b4bfu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1031b4bf;
    case 0x1031b4ccu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1031b4cc;
    default: break;
    }
#endif

    COW_AT(1031b4a1)
    wr32(arg1, 0u);
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x1032914cu)), 1, 0u);   /* kernel32.dll!GetModuleHandleA */
    if (rd16(t1) == 0x5a4du)
    {
        eax = t1;
    COW_AT(1031b4b8)
        if (rd32(eax + 0x3cu) != 0u)
        {
            ecx = rd32(eax + 0x3cu);
    COW_AT(1031b4bf)
            wr8(arg1, rd8(eax + ecx + 0x1au));
            wr8(arg1 + 1u, rd8(eax + ecx + 0x1bu));
        }
    }
    COW_AT(1031b4cc)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031b4a1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031b4b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031b4bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1031b4ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b4a1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031b4a1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
