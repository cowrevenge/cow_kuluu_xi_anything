/* f_0x10222710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10222710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022271fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022271f;
    case 0x10222722u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10222722;
    case 0x10222733u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10222733;
    case 0x1022273au: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022273a;
    case 0x10222746u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10222746;
    default: break;
    }
#endif

    COW_AT(10222710)
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u)
    {
        ecx = rd32(sp0 + 4u);
        goto L_1022273a;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    ecx = rd32(sp0 + 4u);
    COW_AT(1022271f)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10222733;
    }
    COW_AT(10222722)
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, ecx, arg2);
    t2 = g->edx;
    g->esi = in_esi;
    g->edx = t2;
    return t1;
L_10222733: ;
    COW_AT(10222733)
    wr8(sp0 + 4u, 0u);
L_10222746: ;
    COW_AT(10222746)
    t4 = (uint8_t)rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, rd32(self + 0x64u), ecx, 1, t4);
    t6 = g->edx;
    t7 = (t5 & 0xffffff00u) | rd8(self + 0x70u);
    t8 = rd32(self + 8u);
    g->edx = t6;
    t9 = cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t8, t7);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_1022273a: ;
    COW_AT(1022273a)
    t3 = rd32(self + 0x30u);
    wr8(sp0 + 4u, t3 == 0u);
    eax = t3;
    ecx = (ecx & 0xffffff00u) | t3 == 0u;
    goto L_10222746;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10222710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022271fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10222722u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10222733u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022273au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10222746u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
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
void cow_adapter_10222710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10222710(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
