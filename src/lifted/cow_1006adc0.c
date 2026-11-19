/* f_0x1006adc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006adc0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006adcau: ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1006adca;
    case 0x1006adedu: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1006aded;
    default: break;
    }
#endif

    COW_AT(1006adc0)
    if (rd32(self) == 0xffffffffu) goto L_1006aded;
    ecx = rd32(self);
    COW_AT(1006adca)
    t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t1;
    g->edx = rd32(t1);
    t2 = rd32(t1);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0xe0u), ecx, 2, t1, ecx);
    t4 = g->edx;
    wr32(self, 0xffffffffu);
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = t4;
    cow_tailcall(g, COW_IMG(0x1006ae10u), t3, self, t4);
    return;
L_1006aded: ;
    COW_AT(1006aded)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006adc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006adcau:
    {
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006adedu:
    {
        uint32_t ecx;
        uint32_t in_esi;
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
void cow_adapter_1006adc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1006adc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
