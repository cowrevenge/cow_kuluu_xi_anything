/* f_0x10085c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10085c90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10085c99u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085c99;
    case 0x10085ca2u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085ca2;
    case 0x10085ca6u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085ca6;
    case 0x10085cafu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085caf;
    case 0x10085cb3u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085cb3;
    case 0x10085cb7u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085cb7;
    case 0x10085cd1u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085cd1;
    case 0x10085ce7u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10085ce7;
    default: break;
    }
#endif

    COW_AT(10085c90)
    if (arg1 == 0u) goto L_10085ce7;
    COW_AT(10085c99)
    if (rd32(self + 0x68u) == 0u) goto L_10085ce7;
    eax = rd32(self + 0x68u);
    edx = 0u;
L_10085ca2: ;
    COW_AT(10085ca2)
    if (eax == arg1) goto L_10085cb3;
    COW_AT(10085ca6)
    if (rd32(eax + 0x2cu) != 0u)
    {
        edx = eax;
        eax = rd32(eax + 0x2cu);
        goto L_10085ca2;
    }
    COW_AT(10085caf)
    g->esi = in_esi;
    return;
L_10085cb3: ;
    COW_AT(10085cb3)
    if (edx == 0u) goto L_10085cd1;
    COW_AT(10085cb7)
    t1 = rd32(eax + 0x2cu);
    wr32(edx + 0x2cu, t1);
    wr32(arg1 + 0x2cu, 0u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1003b750u), t1, arg1, g->edx, 0, 1, 0u);
    g->esi = in_esi;
    return;
L_10085cd1: ;
    COW_AT(10085cd1)
    t2 = rd32(eax + 0x2cu);
    wr32(self + 0x68u, t2);
    wr32(arg1 + 0x2cu, 0u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1003b750u), eax, arg1, g->edx, 0, 1, 0u);
L_10085ce7: ;
    COW_AT(10085ce7)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10085c90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10085c99u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085ca2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085ca6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085cafu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10085cb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085cb7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085cd1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085ce7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
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
void cow_adapter_10085c90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10085c90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
