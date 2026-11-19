/* f_0x1023fb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023fb50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023fb5au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb5a;
    case 0x1023fb6cu: ecx = g->ecx; in_edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb6c;
    case 0x1023fb73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb73;
    case 0x1023fb7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb7c;
    case 0x1023fb87u: ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb87;
    case 0x1023fb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fb96;
    case 0x1023fba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fba0;
    case 0x1023fbadu: ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fbad;
    case 0x1023fbb4u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fbb4;
    case 0x1023fbd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fbd2;
    default: break;
    }
#endif

    COW_AT(1023fb50)
    if (rd32(self + 0x28u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1023fbd2;
    }
    COW_AT(1023fb5a)
    if ((int32_t)((uint32_t)(int16_t)arg2 - 1u) <= 0)
    {
        ecx = rd32(COW_IMG(0x10662da0u));
    COW_AT(1023fb73)
        t2 = rd32(self + 0x34u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101c6870u), ecx, 1, t2);
        t3 = g->edx;
        edx = t3;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662da0u));
    COW_AT(1023fb6c)
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg2, ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(1023fb7c)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_1023fbd2;
    }
    COW_AT(1023fb87)
    t4 = rd32(COW_IMG(0x1023fbd8u) + rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t4 - RD)
    {
    case 0x1023fb96u: ecx = rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1023fb96;
    case 0x1023fbadu: ecx = rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1023fbad;
    case 0x1023fbd2u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_1023fbd2;
    default: rt_fatal(g, COW_IMG(0x1023fb8fu), "switch");
    }
    return 0;
L_1023fb96: ;
    COW_AT(1023fb96)
    t11 = (uint32_t)(int16_t)arg2 - 1u;
    t12 = rd32(self + 0x30u);
    wr32(self + 0x24u, t11);
    if (t11 == t12)
    {
        eax = t12;
        goto L_1023fbd2;
    }
    eax = t12;
    esi = t11;
    COW_AT(1023fba0)
    wr32(self + 0x30u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t14 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t14;
    return t13;
L_1023fbad: ;
    COW_AT(1023fbad)
    t5 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x24u, t5);
    if ((int32_t)((uint32_t)(int16_t)arg2 - 1u) <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
    }
    else
    {
    COW_AT(1023fbb4)
        t6 = rd32(self + 8u);
        wr8(t6 + 0x5du, 1u);
        wr32(self + 0x28u, 1u);
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = t6;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        t8 = g->edx;
        t9 = cow_call_regs(g, COW_IMG(0x101c68a0u), t7, rd32(COW_IMG(0x10662da0u)), t8, 1, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_1023fbd2: ;
    COW_AT(1023fbd2)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023fb50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023fb5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023fb6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fb73u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fb7cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fb87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fb96u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023fbadu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->esi = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fbb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023fbd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_1023fb50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023fb50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
