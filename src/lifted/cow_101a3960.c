/* f_0x101a3960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a3960(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a3972u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a3972;
    case 0x101a3979u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a3979;
    case 0x101a3996u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a3996;
    case 0x101a39c3u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a39c3;
    case 0x101a39cau: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a39ca;
    case 0x101a39e8u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a39e8;
    case 0x101a39efu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a39ef;
    case 0x101a3a09u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a3a09;
    default: break;
    }
#endif

    COW_AT(101a3960)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_101a3a09;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(101a3972)
    t1 = rd32(COW_IMG(0x101a3a10u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101a3979u: goto L_101a3979;
    case 0x101a3996u: goto L_101a3996;
    case 0x101a39c3u: goto L_101a39c3;
    case 0x101a39e8u: goto L_101a39e8;
    case 0x101a3a09u: edx = in_edx; goto L_101a3a09;
    default: rt_fatal(g, COW_IMG(0x101a3972u), "switch");
    }
    return 0;
L_101a3979: ;
    COW_AT(101a3979)
    t18 = (eax & 0xffffff00u) | (uint8_t)(rd8(sp0 + 8u) - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x101a3300u), t18, rd32(self + 0x24u), g->edx, 0, 2, 1u, t18);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_call_regs(g, COW_IMG(0x101a3350u), t19, rd32(self + 0x24u), g->edx, 1, 0);
    t22 = g->edx;
    g->esi = in_esi;
    g->edx = t22;
    return t21;
L_101a3996: ;
    COW_AT(101a3996)
    t14 = (self & 0xffffff00u) | (uint8_t)(rd8(sp0 + 8u) - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101a3390u), eax, rd32(self + 0x24u), g->edx, 0, 2, 1u, t14);
    t16 = g->edx;
    t17 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = t16;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), t15, t17, t16);
L_101a39c3: ;
    COW_AT(101a39c3)
    if (rd8(self + 0x28u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = in_edx;
        goto L_101a3a09;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
    COW_AT(101a39ca)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101a2a70u), rd32(self + 0x20u), 1, 2u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_call_regs(g, COW_IMG(0x101a3d00u), t8, self, g->edx, 0, 1, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101a3cf0u), self, 0);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_101a39e8: ;
    COW_AT(101a39e8)
    if (rd8(self + 0x28u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
    COW_AT(101a39ef)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x101a2a50u), rd32(self + 0x20u), 1, 2u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_call_regs(g, COW_IMG(0x101a3d00u), t2, self, g->edx, 0, 1, 1u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x101a3cf0u), self, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
L_101a3a09: ;
    COW_AT(101a3a09)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a3960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a3972u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a3979u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a3996u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a39c3u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a39cau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a39e8u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a39efu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a3a09u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_101a3960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a3960(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
