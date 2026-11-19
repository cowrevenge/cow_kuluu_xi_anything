/* f_0x1014e220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014e220(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014e290u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014e290;
    case 0x1014e295u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014e295;
    case 0x1014e2f7u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1014e2f7;
    default: break;
    }
#endif

    COW_AT(1014e220)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->ecx = self;
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x101620d0u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->ecx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x7fu);
    t3 = (t1 & 0xffff0000u) | (uint16_t)(rd16(self + 0x542u) + 7u);
    wr32(sp0 - 0x30u, t3);
    t4 = (t2 & 0xffff0000u) | (uint16_t)(rd16(self + 0x540u) + 4u);
    wr32(sp0 - 0x34u, t4);
    t5 = rd32(self + 0x138u);
    wr32(sp0 - 0x38u, t5);
    t6 = (t3 & 0xffff0000u) | rd16(self + 0x36u);
    wr32(sp0 - 0x3cu, t6);
    wr32(sp0 - 0x40u, self + 0x38u);
    g->eax = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10162140u), 12, self + 0x38u, t6, t5, t4, t3, 0x7fu, 0u, 0u, 0u, in_edi, in_esi, in_ebp);
    t8 = rd16(self + 0x32u);
    wr16(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, (uint32_t)(int16_t)t8);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = (uint32_t)(int16_t)t8;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x10126670u), self + 0x14u, 1, (uint32_t)(int16_t)t8);
    t10 = g->edx;
    wr32(sp0 - 0xcu, t9);
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_1014e2f7;
    }
    eax = t9;
    edx = t10;
    ebx = 0u;
    loc_c = t9;
L_1014e290: ;
    COW_AT(1014e290)
    if ((int32_t)ebx >= 3) goto L_1014e2f7;
    COW_AT(1014e295)
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, ebx + 1u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->ebx = ebx;
    g->edi = t11;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebx + 1u, 1u, 1u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x7fu);
    t12 = rd32(sp0 - 6u);
    wr32(sp0 - 0x30u, t12);
    t13 = rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t13);
    t14 = rd32(self + 0x138u);
    wr32(sp0 - 0x38u, t14);
    t15 = (t12 & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(t11 + 0x106u);
    wr32(sp0 - 0x3cu, t15);
    wr32(sp0 - 0x40u, t11 + 4u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10162140u), 12, t11 + 4u, t15, t14, t13, t12, 0x7fu, 0u, 0u, 0u, in_edi, in_esi, in_ebp);
    if (rd32(sp0 - 0xcu) != 0u)
    {
        eax = rd32(sp0 - 0xcu);
        edx = (uint32_t)(int8_t)rd8(t11 + 0x107u);
        ebx = ebx + (uint32_t)(int8_t)rd8(t11 + 0x107u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_1014e290;
    }
    eax = rd32(sp0 - 0xcu);
    edx = (uint32_t)(int8_t)rd8(t11 + 0x107u);
L_1014e2f7: ;
    COW_AT(1014e2f7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014e220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014e290u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1014e295u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1014e2f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014e220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
