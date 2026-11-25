/* f_0x102c9ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102c9ff0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ca009u: eax = g->eax; edx = g->edx; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ca009;
    case 0x102ca010u: eax = g->eax; edx = g->edx; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ca010;
    case 0x102ca017u: eax = g->eax; edx = g->edx; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ca017;
    case 0x102ca01du: eax = g->eax; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ca01d;
    case 0x102ca031u: eax = g->eax; zf = g->zf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102ca031;
    default: break;
    }
#endif

    COW_AT(102c9ff0)
    wr32(arg1 + 0x20u, arg2);
    wr32(arg1 + 0x28u, 0u);
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x102c9e90u), self, 1, arg1);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(102ca009)
    if ((int32_t)eax >= 0)
    {
        zf = eax == 0u;
        goto L_102ca017;
    }
    COW_AT(102ca010)
    g->esi = in_esi;
    g->edx = edx;
    return 0x80000005u;
L_102ca017: ;
    COW_AT(102ca017)
    if (!zf) goto L_102ca031;
    COW_AT(102ca01d)
    wr32(arg4, 1u);
    wr32(arg3, 0u);
    g->esi = in_esi;
    g->edx = arg3;
    return 0u;
L_102ca031: ;
    COW_AT(102ca031)
    wr32(arg4, 0u);
    t3 = rd32(arg1 + 0x2cu);
    wr32(arg3, t3);
    g->esi = in_esi;
    g->edx = arg3;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c9ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ca009u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca010u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ca017u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca01du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ca031u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        zf = g->zf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102c9ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
