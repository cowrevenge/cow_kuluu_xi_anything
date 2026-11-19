/* f_0x100ef450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef450(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ef4a0u: eax = g->eax; edx = g->edx; goto E_100ef4a0;
    case 0x100ef4a4u: eax = g->eax; edx = g->edx; goto E_100ef4a4;
    default: break;
    }
#endif

    COW_AT(100ef450)
    t1 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0xcu);
    t2 = rd32(rd32(COW_IMG(0x104df770u)) + 0x118u);
    g->eax = t2;
    t3 = cow_call_regs(g, COW_IMG(0x10103970u), g->eax, g->ecx, rd32(COW_IMG(0x104df770u)), 1, 2, t2, t1);
    t4 = rd32(COW_IMG(0x104df770u)) + 0xb8u;
    t5 = rd32(rd32(COW_IMG(0x104df770u)) + 0xb4u);
    t6 = rd32(COW_IMG(0x104df770u)) + 0x64u;
    t7 = rd32(COW_IMG(0x104df770u)) + 0x14u;
    t8 = (t6 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x12u);
    t9 = (t7 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0xcu);
    t10 = rd32(rd32(COW_IMG(0x104df770u)));
    g->eax = t10;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x100f9a30u), g->eax, t8, t9, 1, 8, t10, t9, t8, t7, t6, t5, t4, t3);
    t12 = g->edx;
    if ((uint8_t)t11 == 1u)
    {
        edx = t12;
        goto L_100ef4a4;
    }
    eax = t11;
    edx = t12;
    COW_AT(100ef4a0)
    g->edx = edx;
    return 0xffffffffu;
L_100ef4a4: ;
    COW_AT(100ef4a4)
    t13 = rd32(arg1) + 1u;
    wr32(arg1, t13);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ef450(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ef4a0u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ef4a4u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef450(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ef450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
