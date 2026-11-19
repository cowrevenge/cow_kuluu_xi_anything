/* f_0x10089ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10089ff0(Guest* g)
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008a001u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008a001;
    case 0x1008a01fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008a01f;
    case 0x1008a05fu: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008a05f;
    case 0x1008a06fu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008a06f;
    default: break;
    }
#endif

    COW_AT(10089ff0)
    if ((rd32(self + 0x13cu) & 0x3f000u) != 0u)
    {
        ecx = rd32(self + 0x13cu);
    COW_AT(1008a001)
        t1 = (((ecx & 0xfffff000u) - 1u ^ ecx) & 0x3f000u) ^ ecx;
        wr32(self + 0x13cu, t1);
        if ((((ecx & 0xfffff000u) - 1u ^ ecx ^ ecx) & 0x3f000u) == 0u)
        {
            eax = t1;
    COW_AT(1008a01f)
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t2 = cow_call_regs(g, COW_IMG(0x1008a080u), eax, self, g->edx, 0, 1, 2u);
            t3 = g->edx;
            g->edx = t3;
            t4 = cow_call_regs(g, COW_IMG(0x1008a080u), t2, self, g->edx, 0, 1, 5u);
            t5 = g->edx;
            g->edx = t5;
            t6 = cow_call_regs(g, COW_IMG(0x1008a080u), t4, self, g->edx, 0, 1, 8u);
            t7 = g->edx;
            cow_call_regs(g, COW_IMG(0x1008a080u), t6, self, g->edx, 0, 1, 0xbu);
            t8 = g->ecx;
            t9 = rd32(self + 0x13cu) & 0xfffc0fffu;
            wr32(self + 0x13cu, t9);
            if ((uint8_t)arg1 != 0u)
            {
                eax = t9;
    COW_AT(1008a05f)
                t10 = (eax & 0xfffdefffu) | 0x1e000u;
                wr32(self + 0x13cu, t10);
            }
        }
    }
    COW_AT(1008a06f)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10089ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008a001u:
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
    case 0x1008a01fu:
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
    case 0x1008a05fu:
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
    case 0x1008a06fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_10089ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10089ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
