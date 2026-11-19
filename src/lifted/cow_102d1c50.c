/* f_0x102d1c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d1c50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d1c59u: eax = g->eax; ecx = g->ecx; goto E_102d1c59;
    case 0x102d1c5fu: eax = g->eax; ecx = g->ecx; goto E_102d1c5f;
    case 0x102d1c65u: eax = g->eax; ecx = g->ecx; goto E_102d1c65;
    case 0x102d1c79u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1c79;
    case 0x102d1c7fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1c7f;
    case 0x102d1c8cu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1c8c;
    case 0x102d1c99u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1c99;
    case 0x102d1c9du: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1c9d;
    case 0x102d1ca0u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1ca0;
    case 0x102d1ca3u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1ca3;
    case 0x102d1caeu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1cae;
    case 0x102d1cb5u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1cb5;
    case 0x102d1cbcu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102d1cbc;
    default: break;
    }
#endif

    COW_AT(102d1c50)
    eax = 1u;
L_102d1c59: ;
    COW_AT(102d1c59)
    if (rd32(arg1 + eax * 4u) != 0u) goto L_102d1c65;
    COW_AT(102d1c5f)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_102d1c59;
    }
    eax = eax + 1u;
L_102d1c65: ;
    COW_AT(102d1c65)
    if ((int32_t)(eax + rd32(arg1 + 0x10u)) < (int32_t)rd32(COW_IMG(0x10344dccu) + arg2 * 4u)) goto L_102d1c7f;
    COW_AT(102d1c79)
    return 0xffffffffu;
L_102d1c7f: ;
    COW_AT(102d1c7f)
    ecx = 0u;
    esi = arg1 + eax * 4u;
    edi = 4u - eax;
L_102d1c8c: ;
    COW_AT(102d1c8c)
    wr32(arg1 + ecx * 4u, rd32(esi));
    if ((int32_t)(ecx + 1u) < (int32_t)edi)
    {
        ecx = ecx + 1u;
        esi = esi + 4u;
        goto L_102d1c8c;
    }
    ecx = ecx + 1u;
    COW_AT(102d1c99)
    if (ecx == 1u) goto L_102d1cae;
    ecx = ecx - 1u;
    COW_AT(102d1c9d)
    if (ecx == 1u) goto L_102d1cb5;
    ecx = ecx - 1u;
    COW_AT(102d1ca0)
    if (ecx == 1u) goto L_102d1cbc;
    COW_AT(102d1ca3)
    t1 = eax + rd32(arg1 + 0x10u);
    wr32(arg1 + 0x10u, t1);
    return eax;
L_102d1cae: ;
    COW_AT(102d1cae)
    wr32(arg1 + 4u, 0u);
L_102d1cb5: ;
    COW_AT(102d1cb5)
    wr32(arg1 + 8u, 0u);
L_102d1cbc: ;
    COW_AT(102d1cbc)
    t2 = rd32(arg1 + 0x10u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, eax + t2);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d1c50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d1c59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c5fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102d1c7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c99u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1c9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1ca0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1ca3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1caeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1cb5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102d1cbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1c50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d1c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
