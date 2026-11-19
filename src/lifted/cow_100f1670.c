/* f_0x100f1670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f1670(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f167cu: eax = g->eax; edx = g->edx; goto E_100f167c;
    case 0x100f168eu: eax = g->eax; edx = g->edx; goto E_100f168e;
    case 0x100f169bu: eax = g->eax; edx = g->edx; goto E_100f169b;
    case 0x100f16a2u: eax = g->eax; edx = g->edx; goto E_100f16a2;
    case 0x100f16a9u: eax = g->eax; edx = g->edx; goto E_100f16a9;
    default: break;
    }
#endif

    COW_AT(100f1670)
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_stdcall(g, COW_IMG(0x10310070u), 0);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        goto L_100f16a9;
    }
    eax = t1;
    edx = t2;
    COW_AT(100f167c)
    wr32(sp0 - 0x2cu, sp0 - 0x28u);
    wr32(sp0 - 0x30u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t3 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, eax, sp0 - 0x28u);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        goto L_100f16a9;
    }
    COW_AT(100f168e)
    if (rd32(sp0 - 0x28u) & 1u) goto L_100f16a2;
    eax = rd32(sp0 - 0x28u) & 1u;
    COW_AT(100f169b)
    return 0xffffffffu;
L_100f16a2: ;
    COW_AT(100f16a2)
    eax = rd32(sp0 - 0x10u) & 3u;
L_100f16a9: ;
    COW_AT(100f16a9)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f1670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f167cu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100f168eu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f169bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f16a2u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f16a9u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f1670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
