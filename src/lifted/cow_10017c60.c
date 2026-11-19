/* f_0x10017c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10017c60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10017cdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017cdf;
    case 0x10017cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017cf5;
    case 0x10017cfdu: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017cfd;
    case 0x10017d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017d07;
    case 0x10017d0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017d0e;
    case 0x10017d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10017d17;
    default: break;
    }
#endif

    COW_AT(10017c60)
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(self + 0xcu, arg1);
    wr32(self + 0x10u, arg2);
    wr32(self + 0x14u, arg3);
    wr32(self + 4u, 1u);
    wr32(sp0 - 0x10u, 0u);
    g->eax = arg1;
    g->ecx = arg2;
    g->edx = arg3;
    g->esp = sp0 - 0x2cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, (uint16_t)t1);
    g->eax = (uint16_t)t1;
    t4 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 4u, (uint16_t)t4);
    t5 = rd32(self + 0x10u);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x1cu, 0u);
    t6 = rd32(self + 0x14u);
    wr32(sp0 - 0x14u, t6);
    wr32(sp0 - 0x30u, sp0 - 0x24u);
    wr32(sp0 - 0x34u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    wr32(sp0 - 0x38u, t7);
    g->eax = t7;
    g->edx = sp0 - 0x24u;
    t8 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u));
    t9 = cow_thiscall(g, rd32(t8 + 0x3cu), t8, 3, t7, 0u, sp0 - 0x24u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        ecx = t10;
        edx = t11;
    }
    else
    {
    COW_AT(10017cdf)
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, 0u);
        g->edx = 0u;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x10017c20u), self, 3, 0u, sp0 - 0x10u, sp0 - 0x20u);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    COW_AT(10017cf5)
    if (0u)
    {
    COW_AT(10017cfd)
        wr32(sp0 - 0x30u, 0u);
        t14 = rd32(0u);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(t14 + 8u), t14, 1, 0u);
        t15 = g->ecx;
        wr32(sp0 - 0x24u, 0u);
        ecx = t15;
    }
    COW_AT(10017d07)
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
    COW_AT(10017d0e)
        wr32(sp0 - 0x30u, eax);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        wr32(self + 8u, 0u);
    }
    COW_AT(10017d17)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10017c60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10017cdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x24u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10017cf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10017cfdu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10017d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10017d0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10017d17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10017c60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10017c60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
