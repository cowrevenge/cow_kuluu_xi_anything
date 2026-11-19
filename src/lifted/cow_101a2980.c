/* f_0x101a2980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a2980(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a2988u: self = g->ecx; in_esi = g->esi; goto E_101a2988;
    case 0x101a298du: self = g->ecx; in_esi = g->esi; goto E_101a298d;
    case 0x101a2997u: self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a2997;
    case 0x101a29c8u: self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a29c8;
    case 0x101a29e8u: in_esi = g->esi; goto E_101a29e8;
    default: break;
    }
#endif

    COW_AT(101a2980)
    if ((int32_t)arg1 < 0) goto L_101a29e8;
    COW_AT(101a2988)
    if ((int32_t)arg1 >= 40) goto L_101a29e8;
    COW_AT(101a298d)
    if (rd8(arg2) != 0u) goto L_101a29c8;
    COW_AT(101a2997)
    g->eax = arg1 + 1u;
    g->ecx = self;
    g->edx = arg1 << 4u;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6cu);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = arg1 * 0x10u + self + 0x1dc6u;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, t4, t1);
    wr8(arg1 * 0x10u + self + 0x1dd5u, 0u);
    g->esi = in_esi;
    return;
L_101a29c8: ;
    COW_AT(101a29c8)
    t5 = arg1 * 0x10u + self + 0x1dc6u;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1 << 4u, g->ecx, g->edx, 1, 3, t5, arg2, 0xfu);
    wr8(arg1 * 0x10u + self + 0x1dd5u, 0u);
L_101a29e8: ;
    COW_AT(101a29e8)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a2980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a2988u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a298du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a2997u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a29c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101a29e8u:
    {
        uint32_t in_esi;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101a2980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
