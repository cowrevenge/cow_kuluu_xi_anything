/* f_0x100ad270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ad270(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ad27du: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ad27d;
    case 0x100ad282u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ad282;
    case 0x100ad287u: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ad287;
    case 0x100ad28bu: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ad28b;
    case 0x100ad28du: eax = g->eax; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ad28d;
    case 0x100ad2b4u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100ad2b4;
    default: break;
    }
#endif

    COW_AT(100ad270)
    if (rd32(self + 0x888u) == 0u)
    {
        eax = rd32(self + 0x888u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x888u);
    COW_AT(100ad27d)
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(100ad282)
            if (eax == 0u)
            {
    COW_AT(100ad28b)
                edi = 0u;
            }
            else
            {
    COW_AT(100ad287)
                edi = rd32(eax);
            }
    COW_AT(100ad28d)
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, edi, g->edx, 0, 4, self, self, 0u, 0u);
            t2 = g->edx;
            g->edx = t2;
            cow_thiscall(g, COW_IMG(0x10056ae0u), edi, 0);
            t3 = g->edx;
            t4 = rd32(edi + 0x7cu);
            wr32(self + 0x87cu, t4);
            g->eax = t4;
            g->edx = t3;
            t5 = cow_thiscall(g, COW_IMG(0x100acd30u), self, 1, 0u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    COW_AT(100ad2b4)
    t7 = rd32(self + 0x86cu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t7, 1u);
    wr8(self + 0x878u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ad270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ad27du:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100ad282u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100ad287u:
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
    case 0x100ad28bu:
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
    case 0x100ad28du:
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
    case 0x100ad2b4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
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
void cow_adapter_100ad270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100ad270(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
