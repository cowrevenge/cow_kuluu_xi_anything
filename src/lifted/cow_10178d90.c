/* f_0x10178d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10178d90(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10178da1u: self = g->ecx; in_esi = g->esi; goto E_10178da1;
    case 0x10178da8u: self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10178da8;
    case 0x10178daeu: self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10178dae;
    default: break;
    }
#endif

    COW_AT(10178d90)
    wr32(self + 0x40u, arg2);
    if ((int32_t)arg2 >= 700) goto L_10178da8;
    COW_AT(10178da1)
    if ((int32_t)arg2 < 600)
    {
        edx = arg2 + 0x64u;
        goto L_10178dae;
    }
L_10178da8: ;
    COW_AT(10178da8)
    edx = arg2 + 0x144f7u;
L_10178dae: ;
    COW_AT(10178dae)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10178dd0u), 1, edx);
    t2 = g->edx;
    cow_stdcall(g, COW_IMG(0x100730e0u), 2, arg1, t1);
    g->esi = in_esi;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10178d90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10178da1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg2;
        g->edx = arg2 + 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10178da8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10178daeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10178d90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10178d90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
