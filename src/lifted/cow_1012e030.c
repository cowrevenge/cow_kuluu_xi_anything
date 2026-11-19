/* f_0x1012e030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1012e030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012e03au: ecx = g->ecx; in_edx = g->edx; goto E_1012e03a;
    case 0x1012e03du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1012e03d;
    case 0x1012e053u: self = g->ecx; in_edx = g->edx; goto E_1012e053;
    case 0x1012e063u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_1012e063;
    case 0x1012e06au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_1012e06a;
    case 0x1012e06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_1012e06c;
    case 0x1012e091u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_1012e091;
    default: break;
    }
#endif

    COW_AT(1012e030)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1012e053;
    COW_AT(1012e03a)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1012e091;
    }
    COW_AT(1012e03d)
    t1 = rd32(COW_IMG(0x1062193cu));
    wr8(t1 + 0x59u, 1u);
    wr8(rd32(COW_IMG(0x10621940u)) + 0x59u, 1u);
    return t1;
L_1012e053: ;
    COW_AT(1012e053)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x101cc350u), (uint32_t)(int16_t)arg1 - 5u, g->ecx, g->edx, 1, 2, 1u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(1012e06a)
        loc_4 = 0x46u;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(1012e063)
        loc_4 = 0x258u;
    }
    COW_AT(1012e06c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_4);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1012e0a0u), 0u, t5, 0u, 0u, 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1012e091: ;
    COW_AT(1012e091)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012e030(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012e03au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1012e03du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012e053u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1012e063u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012e06au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012e06cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1012e091u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e030(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012e030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
