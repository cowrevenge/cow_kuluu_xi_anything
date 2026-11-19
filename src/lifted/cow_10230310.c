/* f_0x10230310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10230310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023031au: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023031a;
    case 0x10230326u: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10230326;
    case 0x1023032bu: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023032b;
    case 0x10230335u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10230335;
    case 0x10230348u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10230348;
    default: break;
    }
#endif

    COW_AT(10230310)
    if (rd8(self + 0x6fu) == 0u)
    {
    COW_AT(1023031a)
        if ((int32_t)(rd8(self + 0x6eu) & 0x80000001u) >= 0)
        {
            eax = rd8(self + 0x6eu) & 0x80000001u;
        }
        else
        {
            eax = rd8(self + 0x6eu) & 0x80000001u;
    COW_AT(10230326)
            eax = (eax - 1u | 0xfffffffeu) + 1u;
        }
    COW_AT(1023032b)
        t1 = rd8(self + 0x6du);
        wr8(self + 0x6eu, (uint8_t)eax);
        if ((uint8_t)t1 != (uint8_t)eax)
        {
            ecx = (self & 0xffffff00u) | t1;
    COW_AT(10230335)
            g->eax = eax;
            g->esp = sp0 - 4u;
            t2 = cow_cdecl(g, COW_IMG(0x100fd680u), 1, eax);
            wr8(self + 0x6du, rd8(self + 0x6eu));
            wr8(self + 0x6fu, 0x1eu);
        }
    }
    COW_AT(10230348)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10230310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023031au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10230326u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1023032bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10230335u:
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
    case 0x10230348u:
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
void cow_adapter_10230310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10230310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
