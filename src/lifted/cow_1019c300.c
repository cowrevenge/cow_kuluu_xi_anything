/* f_0x1019c300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019c300(Guest* g)
{
    uint32_t eax;
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
    case 0x1019c30cu: eax = g->eax; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_1019c30c;
    case 0x1019c31cu: in_edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c31c;
    case 0x1019c323u: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c323;
    case 0x1019c32cu: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c32c;
    case 0x1019c334u: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c334;
    case 0x1019c33du: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c33d;
    case 0x1019c345u: in_edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c345;
    case 0x1019c358u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c358;
    case 0x1019c364u: in_edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c364;
    case 0x1019c36bu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c36b;
    case 0x1019c372u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019c372;
    default: break;
    }
#endif

    COW_AT(1019c300)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1019c372;
    }
    COW_AT(1019c30c)
    if ((uint32_t)(int16_t)arg2 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg2;
        edx = in_edx;
        goto L_1019c372;
    }
    COW_AT(1019c31c)
    t1 = rd32(COW_IMG(0x1019c378u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019c323u: goto L_1019c323;
    case 0x1019c334u: goto L_1019c334;
    case 0x1019c345u: goto L_1019c345;
    case 0x1019c364u: goto L_1019c364;
    default: rt_fatal(g, COW_IMG(0x1019c31cu), "switch");
    }
    return 0;
L_1019c323: ;
    COW_AT(1019c323)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0x18u, 0u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1019c32c)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019c334: ;
    COW_AT(1019c334)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 2, 0x18u, 1u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1019c33d)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019c345: ;
    COW_AT(1019c345)
    t4 = (uint32_t)(int16_t)arg2 * 0x258u - 0x4b0u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x1019c510u), t4, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1019c358)
    wr16(self + 0x22u, (uint16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019c364: ;
    COW_AT(1019c364)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x1019c510u), (uint32_t)(int16_t)arg2, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1019c36b)
    wr16(self + 0x22u, (uint16_t)arg2);
L_1019c372: ;
    COW_AT(1019c372)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019c300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019c30cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1019c31cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = (in_esi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019c323u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019c32cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019c334u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019c33du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019c345u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = (in_esi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019c358u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = (in_esi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019c364u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = (in_esi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019c36bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = (in_esi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1019c372u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_1019c300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019c300(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
