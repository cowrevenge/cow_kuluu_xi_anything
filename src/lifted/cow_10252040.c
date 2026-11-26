/* f_0x10252040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10252040(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10252055u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252055;
    case 0x10252068u: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252068;
    case 0x1025206du: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025206d;
    case 0x10252074u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252074;
    case 0x10252096u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252096;
    case 0x1025209du: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025209d;
    case 0x102520b5u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102520b5;
    case 0x102520bcu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102520bc;
    default: break;
    }
#endif

    COW_AT(10252040)
    t1 = arg2 + rd32(arg1 + 0x2cu);
    t2 = rd32(arg1 + 0x2cu);
    wr32(arg1 + 0x2cu, t1);
    if ((int32_t)(arg2 + t2) >= 0)
    {
        eax = t1;
        goto L_1025206d;
    }
    eax = t1;
    COW_AT(10252055)
    t3 = eax + rd32(arg1 + 0x14u);
    wr32(arg1 + 0x14u, t3);
    wr32(arg1 + 0x2cu, 0u);
    if ((int32_t)t3 >= 0) goto L_102520bc;
    COW_AT(10252068)
    wr32(arg1 + 0x14u, 0u);
    g->esi = in_esi;
    return;
L_1025206d: ;
    COW_AT(1025206d)
    if ((int32_t)eax >= (int32_t)rd32(arg1 + 0x30u))
    {
        ecx = rd32(arg1 + 0x30u);
    COW_AT(10252074)
        t4 = eax + rd32(arg1 + 0x14u) - ecx + 1u;
        wr32(arg1 + 0x14u, t4);
        t5 = ecx + rd32(arg1 + 0x14u) - 1u;
        t6 = rd32(arg1 + 0xcu);
        wr32(arg1 + 0x2cu, ecx - 1u);
        g->eax = t5;
        g->ecx = t6;
        g->esp = sp0 - 4u;
        COW_RET(0x10252096u);
        t7 = cow_cdecl(g, COW_IMG(0x102520c0u), 2, t6, t5);
        t8 = g->ecx;
        eax = t7;
        ecx = t8;
    COW_AT(10252096)
        if (eax != 0u) goto L_102520bc;
L_1025209d: ;
    COW_AT(1025209d)
        t9 = rd32(arg1 + 0x14u) - 1u;
        t10 = rd32(arg1 + 0x30u);
        wr32(arg1 + 0x14u, t9);
        t11 = t10 + t9 - 1u;
        t12 = rd32(arg1 + 0xcu);
        g->eax = t12;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        COW_RET(0x102520b5u);
        t13 = cow_cdecl(g, COW_IMG(0x102520c0u), 2, t12, t11);
        t14 = g->ecx;
        eax = t13;
        ecx = t14;
    COW_AT(102520b5)
        if (eax == 0u) goto L_1025209d;
    }
L_102520bc: ;
    COW_AT(102520bc)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252055u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252068u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025206du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252074u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10252096u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025209du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102520b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102520bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_10252040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10252040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
