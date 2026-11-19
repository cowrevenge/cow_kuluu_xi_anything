/* f_0x101526b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101526b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101526bau: self = g->ecx; in_edx = g->edx; goto E_101526ba;
    case 0x101526bdu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526bd;
    case 0x101526c5u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526c5;
    case 0x101526cdu: self = g->ecx; in_edx = g->edx; goto E_101526cd;
    case 0x101526d0u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526d0;
    case 0x101526d8u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526d8;
    case 0x101526deu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526de;
    case 0x101526e5u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101526e5;
    case 0x101526efu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101526ef;
    case 0x101526f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101526f3;
    default: break;
    }
#endif

    COW_AT(101526b0)
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
    COW_AT(101526c5)
        if ((uint32_t)(int16_t)arg2 == 1u)
        {
    COW_AT(101526d8)
            wr16(self + 0x1cu, 1u);
        }
        else
        {
    COW_AT(101526cd)
            if ((uint32_t)(int16_t)arg2 == 2u)
            {
    COW_AT(101526d0)
                wr16(self + 0x1cu, 2u);
            }
        }
    }
    else
    {
    COW_AT(101526ba)
        if ((uint32_t)(int16_t)arg1 == 6u)
        {
    COW_AT(101526bd)
            wr16(self + 0x1cu, 4u);
        }
    }
    COW_AT(101526de)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x20u);
    COW_AT(101526e5)
        if (rd16(self + 0x1cu) == 3u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = (self & 0xffff0000u) | rd16(self + 0x1cu);
    COW_AT(101526ef)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t1 = cow_thiscall_cdecl(g, eax, ecx, 1, ecx);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
    }
    COW_AT(101526f3)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101526b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101526bau:
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
    case 0x101526bdu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526c5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101526d0u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526d8u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526deu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526e5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101526efu:
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
    case 0x101526f3u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101526b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101526b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
