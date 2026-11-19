/* f_0x102071e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102071e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102071f6u: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_102071f6;
    case 0x10207224u: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10207224;
    default: break;
    }
#endif

    COW_AT(102071e0)
    g->eax = rd32(rd32(COW_IMG(0x10664428u)));
    g->edx = in_edx;
    t1 = rd32(rd32(COW_IMG(0x10664428u)));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), rd32(COW_IMG(0x10664428u)), 0);
    t3 = g->edx;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (t2 & 0xffffff00u) | (uint8_t)arg2;
        edx = t3;
    }
    else
    {
        eax = (t2 & 0xffffff00u) | (uint8_t)arg2;
        edi = t2;
    COW_AT(102071f6)
        t4 = (eax & 0xffff0000u) | rd16(arg1);
        t5 = (t4 & 0xffffff00u) | rd8(arg1 + 2u);
        t6 = (t5 & 0xffff0000u) | rd16(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu));
        t7 = (rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) + 2u);
        g->eax = rd32(rd32(COW_IMG(0x10664420u)));
        g->edx = t7;
        t8 = rd32(rd32(COW_IMG(0x10664420u)));
        t9 = rd32(COW_IMG(0x10664420u));
        g->esp = sp0 - 8u;
        t10 = cow_thiscall_cdecl(g, rd32(t8 + 0x54u), t9, 5, t7, t6, edi, t5, t4);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        g->esp = sp0 - 4u;
        t13 = cow_cdecl(g, COW_IMG(0x100f0da0u), 7, t10, t7, t6, edi, t5, t4, in_esi);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    COW_AT(10207224)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x10664420u)));
    t15 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t16 = rd32(COW_IMG(0x10664420u));
    t17 = cow_call_regs(g, COW_IMG(0x101f7080u), t15, rd32(COW_IMG(0x10663740u)), t16, 0, 2, t15, 0u);
    t18 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t18;
    return t17;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102071e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102071f6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10207224u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102071e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102071e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
