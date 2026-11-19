/* f_0x101fd150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fd150(Guest* g)
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
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fd163u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fd163;
    case 0x101fd169u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fd169;
    case 0x101fd16du: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fd16d;
    case 0x101fd1bau: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fd1ba;
    case 0x101fd1cau: eax = g->eax; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fd1ca;
    default: break;
    }
#endif

    COW_AT(101fd150)
    t1 = rd32(COW_IMG(0x10663ab4u));
    t2 = rd8(self + 0x14u);
    wr8(t1 + 0x12u, 1u);
    if ((uint8_t)t2 != 0u)
    {
        eax = t1;
    COW_AT(101fd169)
        wr8(eax + 0x10u, 2u);
    }
    else
    {
        eax = t1;
    COW_AT(101fd163)
        wr8(eax + 0x10u, 0u);
    }
    COW_AT(101fd16d)
    g->eax = rd32(COW_IMG(0x10663ab4u));
    t3 = rd32(COW_IMG(0x10663ab4u));
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x101ebf10u), rd32(COW_IMG(0x1066369cu)), in_edx, 4, t3, 0x10u, 0x30u, 0x10u);
    t5 = g->edx;
    g->edx = t5;
    t6 = rd32(self + 8u);
    t7 = cow_call_regs(g, COW_IMG(0x10118f70u), t4, t6, g->edx, 0, 1, self + 0x24u);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd16(self + 0x24u);
    t11 = rd16(self + 0x26u);
    wr16(self + 0x2cu, (uint16_t)(t10 + 0x28u));
    wr16(self + 0x2eu, (uint16_t)(t11 + 0x38u));
    g->edx = (t9 & 0xffff0000u) | (uint16_t)(t11 + 0x38u);
    t12 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0x11u);
    t13 = g->edx;
    wr32(self + 0x20u, t12);
    if (t12 != 0u)
    {
        eax = t12;
        edx = t13;
    }
    else
    {
        edx = t13;
    COW_AT(101fd1ba)
        t14 = rd32(self + 8u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_call_regs(g, COW_IMG(0x1015e790u), t14, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    COW_AT(101fd1ca)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fd150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fd163u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fd169u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fd16du:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fd1bau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fd1cau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
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
void cow_adapter_101fd150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fd150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
