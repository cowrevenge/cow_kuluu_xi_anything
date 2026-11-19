/* f_0x1014b800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014b800(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014b810u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014b810;
    case 0x1014b81fu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014b81f;
    case 0x1014b84au: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014b84a;
    case 0x1014b855u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014b855;
    default: break;
    }
#endif

    COW_AT(1014b800)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1014b900u), self, 0);
    t2 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (t1 & 0xffffff00u) | (uint8_t)arg1;
        edx = t2;
        goto L_1014b855;
    }
    edx = t2;
    esi = t1;
    COW_AT(1014b810)
    t3 = rd32(COW_IMG(0x106636a0u));
    wr16(t3 + 0x2au, 0xcu);
    if ((int32_t)esi <= 0)
    {
        eax = t3;
        goto L_1014b84a;
    }
    eax = t3;
    COW_AT(1014b81f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10161740u), rd32(COW_IMG(0x10578448u)), 1, esi);
    t5 = g->edx;
    g->edx = t5;
    cow_call_regs(g, COW_IMG(0x101ec330u), t4, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, t4);
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x106636a0u));
    wr32(t7 + 0x38u, esi);
    wr32(t7 + 0x30u, COW_IMG(0x1014b8c0u));
    g->esi = in_esi;
    g->edx = t6;
    return t7;
L_1014b84a: ;
    COW_AT(1014b84a)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1014b855: ;
    COW_AT(1014b855)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014b800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014b810u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014b81fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014b84au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014b855u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_1014b800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014b800(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
