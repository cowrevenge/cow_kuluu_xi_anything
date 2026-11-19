/* f_0x102f838c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f838c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f8398u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102f8398;
    case 0x102f839cu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_102f839c;
    case 0x102f83b0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102f83b0;
    case 0x102f83bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102f83bb;
    case 0x102f83c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102f83c8;
    case 0x102f83d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102f83d4;
    default: break;
    }
#endif

    COW_AT(102f838c)
    if (!(rd32(arg1 + 0x58u) & 1u))
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102f839c;
    }
    eax = rd32(arg1 + 0x58u);
    COW_AT(102f8398)
    if ((eax & 4u) != 0u) goto L_102f83b0;
L_102f839c: ;
    COW_AT(102f839c)
    g->esi = arg1;
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x102ef234u), self, in_edx, 2, arg1, COW_IMG(0x10348b88u));
    rt_fatal(g, COW_IMG(0x102f83a2u), "no way on");
L_102f83b0: ;
    COW_AT(102f83b0)
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 0x18u);
    if (arg3 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102f83bb)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348b6cu));
        t2 = g->edx;
        eax = t1;
        ecx = COW_IMG(0x10348b6cu);
        edx = t2;
    }
    COW_AT(102f83c8)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 2, arg1, arg3);
    t3 = g->edx;
    edx = t3;
    COW_AT(102f83d4)
    g->esi = in_esi;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f838c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f8398u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f839cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f83b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f83bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f83c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f83d4u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f838c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f838c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
