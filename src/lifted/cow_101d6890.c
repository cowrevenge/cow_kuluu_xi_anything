/* f_0x101d6890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d6890(Guest* g)
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d6898u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6898;
    case 0x101d68a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d68a1;
    case 0x101d68beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d68be;
    case 0x101d68cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d68cb;
    default: break;
    }
#endif

    COW_AT(101d6890)
    g->esp = sp0 - 4u;
    COW_RET(0x101d6898u);
    t1 = cow_fastcall(g, COW_IMG(0x101d68e0u), self, in_edx, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101d6898)
    g->esp = sp0 - 4u;
    COW_RET(0x101d68a1u);
    t3 = cow_call_regs(g, COW_IMG(0x101f6700u), eax, self, edx, 0, 1, 5u);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(101d68a1)
    wr16(self + 0x16u, 1u);
    wr32(self + 0x30u, COW_IMG(0x1037ec5cu));
    wr16(self + 0x26u, 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    COW_RET(0x101d68beu);
    t6 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xbebu);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(101d68be)
    wr8(self + 0x51u, (uint8_t)eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    COW_RET(0x101d68cbu);
    cow_thiscall(g, COW_IMG(0x101d6900u), self, 0);
    t8 = g->edx;
    edx = t8;
    COW_AT(101d68cb)
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    cow_tailcall(g, rd32(rd32(self) + 0x70u), rd32(self), self, edx);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d6890(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d6898u:
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
    case 0x101d68a1u:
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
    case 0x101d68beu:
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
    case 0x101d68cbu:
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
void cow_adapter_101d6890(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101d6890(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
