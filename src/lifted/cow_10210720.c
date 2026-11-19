/* f_0x10210720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10210720(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10210796u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10210796;
    case 0x1021079eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021079e;
    case 0x102107a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102107a8;
    case 0x102107b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102107b0;
    default: break;
    }
#endif

    COW_AT(10210720)
    g->eax = rd32(rd32(self + 0x54u));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x54u));
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), rd32(self + 0x54u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1013a8d0u), rd32(COW_IMG(0x10578200u)), 1, 0xffffffffu);
    t5 = g->edx;
    t6 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t5;
    t7 = rd32(COW_IMG(0x10578204u));
    t8 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t9 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t7, 0);
    t10 = rd32(COW_IMG(0x10664514u));
    t11 = rd32(rd32(COW_IMG(0x10664514u)) + 8u);
    wr8(t10 + 0x3au, 0u);
    wr32(t10 + 0x14u, 0u);
    g->edx = t11;
    cow_call_regs(g, COW_IMG(0x1015e790u), t10, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t12 = g->edx;
    t13 = rd32(COW_IMG(0x10664510u));
    wr8(t13 + 0x3au, 0u);
    wr32(t13 + 0x14u, 0u);
    t14 = rd32(t13 + 8u);
    g->edx = t12;
    t15 = cow_call_regs(g, COW_IMG(0x1015e790u), t14, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
    t16 = g->edx;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = t15;
        edx = t16;
    }
    else
    {
        eax = t15;
        ecx = rd32(COW_IMG(0x1057847cu));
        edx = t16;
    COW_AT(10210796)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t17 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    COW_AT(1021079e)
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
    COW_AT(102107a8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t19 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    COW_AT(102107b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f718u));
    t22 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t22;
    return t21;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10210720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10210796u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021079eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102107a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102107b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10210720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10210720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
