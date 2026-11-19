/* f_0x1022f8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022f8a0(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022f91bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x20u); goto E_1022f91b;
    case 0x1022f925u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x20u); goto E_1022f925;
    default: break;
    }
#endif

    COW_AT(1022f8a0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 0xb2u);
    wr8(self + 0x6cu, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xb2u);
    t2 = g->edx;
    wr8(self + 0x6du, (uint8_t)t1);
    wr8(self + 0x6eu, (uint8_t)t1);
    wr8(self + 0x6fu, 0u);
    t3 = cow_fastcall(g, COW_IMG(0x10221a30u), self, t2, 0);
    t4 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, 0u, 0u, 2u);
    t6 = g->edx;
    wr32(sp0 - 0x28u, 3u);
    wr32(sp0 - 0x2cu, 0x10u);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t8 = g->edx;
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 0x10u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 4u);
    t10 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 2u);
    t11 = cow_fastcall(g, COW_IMG(0x10221a80u), self, t10, 2, 2u, 0u);
    t12 = g->edx;
    t13 = rd32(self + 8u);
    wr32(self + 0x1cu, COW_IMG(0x1022f9f0u));
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    if (t13 == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        ecx = t13;
        edx = t12;
    COW_AT(1022f91b)
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t14 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    COW_AT(1022f925)
    wr32(sp0 - 0x28u, 1u);
    t16 = rd32(self + 8u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, COW_IMG(0x101188e0u), t16, 1, 1u);
    t18 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    g->ebx = 0u;
    g->edi = t17;
    cow_thiscall(g, COW_IMG(0x10117020u), t17, 1, sp0 - 0x18u);
    t19 = rd32(sp0 - 0x12u);
    t20 = rd32(sp0 - 0x16u);
    wr16(sp0 - 0x12u, (uint16_t)(rd32(sp0 - 6u) - 0x23u));
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    wr16(sp0 - 0x16u, (uint16_t)(rd32(sp0 - 0x12u) - (t19 - t20)));
    g->eax = t19 - t20;
    g->edx = sp0 - 0x18u;
    t21 = cow_thiscall(g, COW_IMG(0x10117070u), t17, 1, sp0 - 0x18u);
    t22 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    g->edi = t17;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 2u);
    t24 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    g->ebx = t20;
    g->edi = t17;
    cow_thiscall(g, COW_IMG(0x10117020u), t23, 1, sp0 - 0x18u);
    t25 = rd32(sp0 - 0x12u);
    t26 = rd32(sp0 - 0x16u);
    wr16(sp0 - 0x12u, (uint16_t)(rd32(sp0 - 6u) - 0xcu));
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    t27 = rd32(sp0 - 0x12u);
    wr16(sp0 - 0x16u, (uint16_t)(t27 - (t25 - t26)));
    g->eax = sp0 - 0x18u;
    g->edx = t27 - (t25 - t26);
    t28 = cow_thiscall(g, COW_IMG(0x10117070u), t23, 1, sp0 - 0x18u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 0x18bu);
    wr32(sp0 - 0x30u, 0xcu);
    g->edx = t30;
    g->esp = sp0 - 0x28u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x18bu);
    t32 = g->edx;
    wr32(sp0 - 0x2cu, t31);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t31, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022f8a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022f91bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x24u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1022f925u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x24u, in_edi);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f8a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022f8a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
