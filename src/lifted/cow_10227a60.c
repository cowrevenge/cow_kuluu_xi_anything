/* f_0x10227a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10227a60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10227a7bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10227a7b;
    case 0x10227a85u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10227a85;
    default: break;
    }
#endif

    COW_AT(10227a60)
    g->eax = rd32(rd32(COW_IMG(0x106671bcu)));
    g->edx = in_edx;
    t1 = rd32(rd32(COW_IMG(0x106671bcu)));
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), rd32(COW_IMG(0x106671bcu)), 1, arg1);
    t3 = g->edx;
    if ((uint8_t)arg1 != 1u)
    {
        eax = t2;
        edx = t3;
        goto L_10227a85;
    }
    eax = t2;
    edx = t3;
    COW_AT(10227a7b)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x10221ce0u), self, edx, 0);
    t5 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t5;
    return t4;
L_10227a85: ;
    COW_AT(10227a85)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10221cd0u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t11;
    return t10;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10227a60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10227a7bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10227a85u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10227a60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10227a60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
