/* f_0x10279ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10279ad0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10279ae1u: edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279ae1;
    case 0x10279aecu: eax = g->eax; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279aec;
    case 0x10279af1u: eax = g->eax; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279af1;
    case 0x10279afau: eax = g->eax; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279afa;
    case 0x10279affu: eax = g->eax; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279aff;
    case 0x10279b09u: eax = g->eax; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10279b09;
    default: break;
    }
#endif

    COW_AT(10279ad0)
    if ((int32_t)rd32(arg1 + 0x7cu) <= 0) goto L_10279aff;
    edx = rd32(arg1 + 0x7cu);
    COW_AT(10279ae1)
    eax = 0u;
    esi = rd32(arg1 + 0x74u);
L_10279aec: ;
    COW_AT(10279aec)
    if (rd32(eax * 4u + esi) != arg2) goto L_10279afa;
    COW_AT(10279af1)
    if (rd32(eax * 4u + rd32(arg1 + 0x78u)) == arg3) goto L_10279b09;
L_10279afa: ;
    COW_AT(10279afa)
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        goto L_10279aec;
    }
L_10279aff: ;
    COW_AT(10279aff)
    return COW_IMG(0x103b3d70u);
L_10279b09: ;
    COW_AT(10279b09)
    return rd32(eax * 4u + rd32(arg1 + 0x70u));
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10279ad0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10279ae1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10279aecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10279af1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10279afau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10279affu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10279b09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10279ad0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10279ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
