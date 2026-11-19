/* f_0x10074180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10074180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10074188u: self = g->ecx; edx = g->edx; goto E_10074188;
    case 0x1007418cu: self = g->ecx; edx = g->edx; goto E_1007418c;
    case 0x1007418eu: self = g->ecx; edx = g->edx; goto E_1007418e;
    case 0x10074196u: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_10074196;
    case 0x1007419au: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1007419a;
    case 0x1007419eu: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1007419e;
    case 0x100741a0u: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100741a0;
    case 0x100741aau: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100741aa;
    case 0x100741aeu: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100741ae;
    case 0x100741c5u: eax = g->eax; self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100741c5;
    case 0x100741cfu: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100741cf;
    default: break;
    }
#endif

    COW_AT(10074180)
    if (arg1 == 0u)
    {
    COW_AT(1007418c)
        edx = 0u;
    }
    else
    {
    COW_AT(10074188)
        edx = rd32(arg1);
    }
    COW_AT(1007418e)
    if (edx < self + 8u) goto L_100741aa;
    COW_AT(10074196)
    if (arg1 == 0u)
    {
    COW_AT(1007419e)
        edx = 0u;
    }
    else
    {
    COW_AT(1007419a)
        edx = rd32(arg1);
    }
    COW_AT(100741a0)
    if (edx <= self + 0x40004u)
    {
        eax = arg1;
        goto L_100741cf;
    }
L_100741aa: ;
    COW_AT(100741aa)
    if (arg1 == 0u)
    {
        eax = arg1;
    }
    else
    {
    COW_AT(100741ae)
        t1 = rd32(self + 4u);
        wr32(arg1, t1);
        wr32(self + 4u, arg1);
        t2 = rd32(self + 0x4000cu) - 1u;
        t3 = rd32(self + 0x4000cu);
        wr32(self + 0x4000cu, t2);
        if ((int32_t)(t3 - 1u) >= 0)
        {
            eax = t2;
            edx = t1;
        }
        else
        {
            eax = t2;
            edx = t1;
    COW_AT(100741c5)
            wr32(self + 0x4000cu, 0u);
        }
    }
L_100741cf: ;
    COW_AT(100741cf)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10074180(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10074188u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007418cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007418eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10074196u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007419au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007419eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100741a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100741aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100741aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100741c5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100741cfu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10074180(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10074180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
