/* f_0x1020cd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020cd00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020cd0bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cd0b;
    case 0x1020cd13u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cd13;
    case 0x1020cd1bu: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cd1b;
    case 0x1020cd26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cd26;
    case 0x1020cd52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020cd52;
    default: break;
    }
#endif

    COW_AT(1020cd00)
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020cd0b)
        if ((uint16_t)arg1 != 5u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
    COW_AT(1020cd13)
            if ((uint32_t)(int16_t)arg2 != 1u)
            {
                eax = (uint32_t)(int16_t)arg2 - 1u;
                edx = in_edx;
            }
            else
            {
    COW_AT(1020cd1b)
                g->eax = (uint32_t)(int16_t)arg2 - 1u;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t1 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
                t2 = g->ecx;
                t3 = g->edx;
                if (t1 == 0u)
                {
                    eax = t1;
                    edx = t3;
                }
                else
                {
                    eax = t1;
                    ecx = t2;
                    edx = t3;
                    esi = t1;
    COW_AT(1020cd26)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x41au);
                    t5 = g->edx;
                    g->edx = t5;
                    g->esp = sp0 - 4u;
                    t6 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1020cd60u), esi + 8u, t4, 0u, 0u, 1u, 0u);
                    t7 = g->edx;
                    eax = t6;
                    edx = t7;
                }
            }
        }
    }
    COW_AT(1020cd52)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020cd00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020cd0bu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cd13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cd1bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cd26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020cd52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_1020cd00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020cd00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
