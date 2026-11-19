/* f_0x1022d1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022d1c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022d21au: eax = g->eax; edx = g->edx; goto E_1022d21a;
    case 0x1022d227u: eax = g->eax; edx = g->edx; goto E_1022d227;
    case 0x1022d232u: eax = g->eax; edx = g->edx; goto E_1022d232;
    default: break;
    }
#endif

    COW_AT(1022d1c0)
    t1 = rd32(rd32(COW_IMG(0x10667a70u)) + 8u);
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10667a70u));
    t3 = cow_call_regs(g, COW_IMG(0x1015e530u), t2, COW_IMG(0x10621838u), g->edx, 0, 1, t1);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
    g->edx = rd32(COW_IMG(0x105781f8u));
    t6 = rd32(COW_IMG(0x105781f8u));
    cow_thiscall(g, COW_IMG(0x102211b0u), t6 + 0x20u, 1, 2u);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
    t9 = rd32(COW_IMG(0x10578474u));
    t10 = cow_call_regs(g, COW_IMG(0x1015e530u), t9, COW_IMG(0x10621838u), g->edx, 0, 1, t8);
    g->edx = rd32(rd32(COW_IMG(0x10667a70u)));
    t11 = rd32(rd32(COW_IMG(0x10667a70u)));
    cow_thiscall(g, rd32(t11 + 0x4cu), rd32(COW_IMG(0x10667a70u)), 0);
    t12 = g->edx;
    if (rd32(rd32(COW_IMG(0x10667a6cu)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10667a6cu)) + 8u);
        edx = t12;
        goto L_1022d227;
    }
    edx = t12;
    COW_AT(1022d21a)
    if (rd32(rd32(COW_IMG(0x10667a68u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10667a68u)) + 8u);
        goto L_1022d232;
    }
    eax = rd32(rd32(COW_IMG(0x10667a68u)) + 8u);
L_1022d227: ;
    COW_AT(1022d227)
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, eax);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_1022d232: ;
    COW_AT(1022d232)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022d1c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022d21au:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022d227u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022d232u:
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
void cow_adapter_1022d1c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022d1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
