/* f_0x10231ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10231ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10231eefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10231eef;
    case 0x10231ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231ef5;
    case 0x10231f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10231f09;
    case 0x10231f11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231f11;
    case 0x10231f27u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231f27;
    case 0x10231f2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10231f2c;
    case 0x10231f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231f37;
    case 0x10231f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10231f3f;
    default: break;
    }
#endif

    COW_AT(10231ec0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 0x100u);
    t1 = rd32(self + 0x6cu);
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t2);
    g->eax = t1;
    g->edx = t1 + rd32(self + 0x6cu) * 0x24u;
    t3 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, COW_IMG(0x1022f0f0u), COW_IMG(0x10668380u) + t1 * 4u + t3 * 0x90u, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    edi = t2;
    COW_AT(10231eef)
    wr32(sp0 - 0x20u, eax);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102333f0u), 5, eax, rd32(sp0 - 0x1cu), 0x100u, sp0 - 4u, sp0 + 4u);
    COW_AT(10231ef5)
    if ((rd32(COW_IMG(0x1047fb48u) + rd32(sp0 - 4u) * 4u) & rd32(sp0 + 4u)) != 0u) goto L_10231f11;
    COW_AT(10231f09)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_10231f11: ;
    COW_AT(10231f11)
    wr32(sp0 - 0x10u, edi);
    g->eax = rd32(self + 0x6cu) * 0x25u;
    g->edx = rd32(self + 0x6cu) * 9u;
    t7 = rd32(self + 0x6cu);
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10668380u) + t7 * 0x94u, 1, edi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10231f27)
    if (rd8(eax) != 0x2bu) goto L_10231f37;
    COW_AT(10231f2c)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 1u;
L_10231f37: ;
    COW_AT(10231f37)
    wr32(sp0 - 0x10u, edi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x10231f50u), self, 1, edi);
    eax = t10;
    COW_AT(10231f3f)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return -(eax != 0u) + 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10231ec0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10231eefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x18u, 0x100u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10231ef5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10231f3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10231ec0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10231ec0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
