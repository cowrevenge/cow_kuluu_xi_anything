/* f_0x1003fc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003fc30(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003fc3eu: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003fc3e;
    case 0x1003fc44u: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003fc44;
    case 0x1003fca7u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1003fca7;
    default: break;
    }
#endif

    COW_AT(1003fc30)
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x104u);
    COW_AT(1003fc3e)
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            edi = rd32(eax);
    COW_AT(1003fc44)
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x1003f8a0u), self + 0x1a8u, edi, in_edx, 0, 2, self + 0x194u, self + 0x1a8u);
            t2 = g->edx;
            wr32(self + 0x1bcu, t1);
            cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
            t3 = (uint32_t)(int16_t)rd16(edi + 0x34u);
            t4 = rd32(self + 0x1bcu);
            g->eax = t4;
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t6 = cow_thiscall(g, rd32(t5 + 0x90u), rd32(COW_IMG(0x1047cf7cu)), 5, COW_IMG(0x1047bbc8u), t4, 0x24u, t3, self + 0xa0u);
            t7 = g->edx;
            t8 = rd32(self + 0x1bcu);
            g->edx = t7;
            t9 = cow_cdecl(g, COW_IMG(0x10028700u), 1, t8);
            t10 = g->edx;
            wr32(self + 0x1bcu, 0u);
            eax = t9;
            edx = t10;
        }
    }
    COW_AT(1003fca7)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003fc30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003fc3eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003fc44u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003fca7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003fc30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003fc30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
