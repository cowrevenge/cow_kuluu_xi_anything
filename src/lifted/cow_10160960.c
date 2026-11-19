/* f_0x10160960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10160960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10160969u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160969;
    case 0x10160972u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160972;
    case 0x10160976u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160976;
    case 0x10160987u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160987;
    case 0x1016098eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1016098e;
    case 0x10160993u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_10160993;
    case 0x101609b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101609b8;
    default: break;
    }
#endif

    COW_AT(10160960)
    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x10096270u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10160969)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int8_t)(t4 >> 8u) >= 0)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
    COW_AT(10160976)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t7 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t8 = g->ecx;
            t9 = g->edx;
            g->ecx = t8;
            g->edx = t9;
            t10 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t11 = g->ecx;
            t12 = g->edx;
            if ((t10 & 0x80000u) != 0u)
            {
                eax = t10;
                ecx = t11;
                edx = t12;
    COW_AT(1016098e)
                loc_4 = 0x278u;
            }
            else
            {
                eax = t10;
                ecx = t11;
                edx = t12;
    COW_AT(10160987)
                loc_4 = 0x277u;
            }
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
    COW_AT(10160972)
            loc_4 = 0x49u;
        }
    COW_AT(10160993)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_4);
        t14 = g->edx;
        cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101608b0u), 0u, t13, 0u, 0u, 1u, 0u);
    }
    COW_AT(101609b8)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10160960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10160969u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10160972u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10160976u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10160987u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1016098eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10160993u:
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
    case 0x101609b8u:
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
void cow_adapter_10160960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10160960(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
