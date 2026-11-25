/* f_0x1020ee70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1020ee70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020ee78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020ee78;
    case 0x1020ee85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020ee85;
    case 0x1020eea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020eea3;
    case 0x1020eebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020eebd;
    default: break;
    }
#endif

    COW_AT(1020ee70)
    g->esp = sp0 - 4u;
    COW_RET(0x1020ee78u);
    t1 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1020ee78)
    wr16(self + 0x58u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    COW_RET(0x1020ee85u);
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1020ee85)
    t6 = rd32(rd32(eax) + 0x12cu);
    wr32(self + 0x68u, t6);
    wr32(self + 0x34u, t6);
    wr8(self + 0x49u, 1u);
    g->esp = sp0 - 4u;
    COW_RET(0x1020eea3u);
    t7 = cow_call_regs(g, COW_IMG(0x101f6700u), t6, self, edx, 0, 1, 5u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1020eea3)
    wr16(self + 0x16u, 3u);
    wr32(self + 0x30u, COW_IMG(0x103859b4u));
    wr16(self + 0x26u, 0x10u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    COW_RET(0x1020eebdu);
    t9 = cow_fastcall(g, COW_IMG(0x1020ebf0u), self, edx, 0);
    eax = t9;
    COW_AT(1020eebd)
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = rd32(self);
    cow_tailcall(g, rd32(rd32(self) + 0x70u), eax, self, rd32(self));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020ee70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020ee78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020ee85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020eea3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020eebdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
void cow_adapter_1020ee70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1020ee70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
