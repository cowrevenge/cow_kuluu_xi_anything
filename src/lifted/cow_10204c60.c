/* f_0x10204c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10204c60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10204c6au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10204c6a;
    case 0x10204c73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10204c73;
    case 0x10204c7cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_10204c7c;
    case 0x10204ccbu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; goto E_10204ccb;
    default: break;
    }
#endif

    COW_AT(10204c60)
    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(10204c6a)
        if (rd32(COW_IMG(0x104dfd98u)) != 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10204c73)
            if (rd8(COW_IMG(0x10485824u)) & 1u)
            {
    COW_AT(10204c7c)
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x1020a600u), ecx, 1, 1u);
                t1 = g->ecx;
                t2 = g->edx;
                t3 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
                g->eax = rd32(COW_IMG(0x10664494u));
                g->edx = t2;
                t4 = rd32(COW_IMG(0x10664494u));
                t5 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, t3, 0x8020u);
                t6 = g->edx;
                g->edx = t6;
                t7 = rd32(COW_IMG(0x10664494u));
                t8 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t5, t7, g->edx, 0, 6, 1u, t3, 1u, 0u, 0u, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                g->edx = t10;
                g->esp = sp0 - 8u;
                t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x13u);
                t12 = g->edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t11, 2u);
            }
        }
    }
    COW_AT(10204ccb)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10204c60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10204c6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10204c73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10204c7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10204ccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10204c60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10204c60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
