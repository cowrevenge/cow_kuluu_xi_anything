/* f_0x102bca0a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bca0a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bca1au: in_esi = g->esi; goto E_102bca1a;
    case 0x102bca1fu: in_esi = g->esi; goto E_102bca1f;
    case 0x102bca20u: eax = g->eax; in_esi = g->esi; goto E_102bca20;
    case 0x102bca26u: eax = g->eax; in_esi = g->esi; goto E_102bca26;
    case 0x102bca2cu: eax = g->eax; in_esi = g->esi; goto E_102bca2c;
    case 0x102bca38u: eax = g->eax; esi = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102bca38;
    case 0x102bca3au: eax = g->eax; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102bca3a;
    case 0x102bca3cu: eax = g->eax; esi = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102bca3c;
    case 0x102bca41u: eax = g->eax; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102bca41;
    default: break;
    }
#endif

    COW_AT(102bca0a)
    t1 = rd8(arg1 + 0x6eu);
    if ((t1 & 0xcu) == 0u)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(102bca1a)
        t2 = rd8(arg2);
        if ((uint8_t)t2 != 0x23u)
        {
            eax = 0u;
        }
        else
        {
    COW_AT(102bca1f)
            eax = 1u;
L_102bca20: ;
    COW_AT(102bca20)
            t3 = rd8(arg2 + eax);
            if ((uint8_t)t3 == 0x20u) goto L_102bca2c;
    COW_AT(102bca26)
            if ((int32_t)(eax + 1u) < 15)
            {
                eax = eax + 1u;
                goto L_102bca20;
            }
            eax = eax + 1u;
        }
    }
L_102bca2c: ;
    COW_AT(102bca2c)
    if (rd32(arg1 + 0x44u) == 0u)
    {
        loc_8 = arg2 + eax;
        eax = arg2 + eax;
    COW_AT(102bca3c)
        g->esp = sp0 - 4u;
        COW_RET(0x102bca41u);
        cow_call_regs(g, COW_IMG(0x102bcb9du), g->eax, g->ecx, arg1, 1, 2, arg1, loc_8);
        t5 = g->edx;
        edx = t5;
    }
    else
    {
        esi = rd32(arg1 + 0x44u);
        loc_8 = arg2 + eax;
        eax = arg2 + eax;
    COW_AT(102bca38)
        g->edx = arg1;
        g->esp = sp0 - 0xcu;
        COW_RET(0x102bca3au);
        cow_thiscall(g, esi, arg2, 0);
        t4 = g->edx;
        edx = t4;
    COW_AT(102bca3a)
    }
    COW_AT(102bca41)
    g->esi = in_esi;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bca0a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bca1au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_esi;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = 0u;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bca1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_esi;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = 0u;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bca20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->esi;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bca26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->esi;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bca2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->esi;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bca38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg2;
        g->edx = arg1;
        wr32(sp0 - 0xcu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102bca3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102bca3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg2;
        g->edx = arg1;
        wr32(sp0 - 0xcu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102bca41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, arg1);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bca0a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bca0a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
