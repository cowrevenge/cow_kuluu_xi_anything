/* f_0x1014db80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014db80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014db8au: self = g->ecx; in_edx = g->edx; goto E_1014db8a;
    case 0x1014db91u: self = g->ecx; in_edx = g->edx; goto E_1014db91;
    case 0x1014db9bu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1014db9b;
    case 0x1014dba5u: self = g->ecx; goto E_1014dba5;
    case 0x1014dba8u: self = g->ecx; goto E_1014dba8;
    case 0x1014dbabu: eax = g->eax; self = g->ecx; goto E_1014dbab;
    case 0x1014dbb4u: eax = g->eax; self = g->ecx; goto E_1014dbb4;
    case 0x1014dbdeu: eax = g->eax; self = g->ecx; goto E_1014dbde;
    case 0x1014dbe7u: eax = g->eax; self = g->ecx; goto E_1014dbe7;
    case 0x1014dc11u: eax = g->eax; self = g->ecx; goto E_1014dc11;
    case 0x1014dc17u: eax = g->eax; edx = g->edx; goto E_1014dc17;
    default: break;
    }
#endif

    COW_AT(1014db80)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1014db9b;
    COW_AT(1014db8a)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_1014dc17;
    }
    COW_AT(1014db91)
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x1014db50u), (uint32_t)(int16_t)arg1 - 6u, self, g->edx, 0, 1, 4u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1014db9b: ;
    COW_AT(1014db9b)
    if ((uint32_t)(int16_t)arg2 == 1u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_1014dc11;
    }
    COW_AT(1014dba5)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1014dbde;
    COW_AT(1014dba8)
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = arg2;
        goto L_1014dc17;
    }
    COW_AT(1014dbab)
    if (rd32(COW_IMG(0x10664520u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664520u));
        goto L_1014dc11;
    }
    eax = rd32(COW_IMG(0x10664520u));
    COW_AT(1014dbb4)
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x35u);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1014dc20u), 3u, t3, 0u, 0u, 1u, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1014dbde: ;
    COW_AT(1014dbde)
    if (rd32(COW_IMG(0x10664520u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664520u));
        goto L_1014dc11;
    }
    eax = rd32(COW_IMG(0x10664520u));
    COW_AT(1014dbe7)
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x34u);
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1014dc20u), 2u, t7, 0u, 0u, 1u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1014dc11: ;
    COW_AT(1014dc11)
    g->edx = arg2;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x1014db50u), eax, self, g->edx, 0, 1, arg2);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_1014dc17: ;
    COW_AT(1014dc17)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014db80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014db8au:
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
    case 0x1014db91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x1014db9bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014dba5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        self = g->ecx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dba8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        self = g->ecx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dbabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dbb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dbdeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dbe7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dc11u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014dc17u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014db80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014db80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
