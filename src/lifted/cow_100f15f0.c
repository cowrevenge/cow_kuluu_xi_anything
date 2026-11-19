/* f_0x100f15f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f15f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f1602u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1602;
    case 0x100f160au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f160a;
    case 0x100f1615u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f1615;
    case 0x100f161au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f161a;
    case 0x100f162cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f162c;
    case 0x100f1639u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f1639;
    case 0x100f1641u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f1641;
    case 0x100f1664u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100f1664;
    default: break;
    }
#endif

    COW_AT(100f15f0)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x100f1410u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100f160a;
    }
    eax = t1;
    COW_AT(100f1602)
    g->esi = in_esi;
    return 0xffffffffu;
L_100f160a: ;
    COW_AT(100f160a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t4 = cow_stdcall(g, COW_IMG(0x10310070u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_100f161a;
    }
    eax = t4;
    COW_AT(100f1615)
    g->esi = rd32(sp0 - 0x2cu);
    return eax;
L_100f161a: ;
    COW_AT(100f161a)
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    wr32(sp0 - 0x34u, esi);
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x2cu;
    t7 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, esi, sp0 - 0x28u);
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        goto L_100f1664;
    }
    COW_AT(100f162c)
    if (rd32(sp0 - 0x28u) & 1u) goto L_100f1641;
    eax = rd32(sp0 - 0x28u) & 1u;
    COW_AT(100f1639)
    g->esi = rd32(sp0 - 0x2cu);
    return 0xffffffffu;
L_100f1641: ;
    COW_AT(100f1641)
    t8 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    wr32(sp0 - 0x34u, esi);
    t9 = t8 ^ ((t8 ^ arg1) & 3u);
    wr32(sp0 - 0x10u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x2cu;
    t10 = cow_cdecl(g, COW_IMG(0x1030ffc0u), 2, esi, sp0 - 0x28u);
    eax = t10;
L_100f1664: ;
    COW_AT(100f1664)
    g->esi = rd32(sp0 - 0x2cu);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f15f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f1602u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f160au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f1615u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f161au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f162cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1641u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1664u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f15f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f15f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
