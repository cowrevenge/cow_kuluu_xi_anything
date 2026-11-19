/* f_0x100751b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100751b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100751beu: self = g->ecx; edx = g->edx; goto E_100751be;
    case 0x100751c7u: self = g->ecx; edx = g->edx; goto E_100751c7;
    case 0x100751cfu: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100751cf;
    case 0x100751d5u: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100751d5;
    case 0x100751dcu: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100751dc;
    case 0x100751e2u: self = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_100751e2;
    case 0x100751edu: self = g->ecx; edx = g->edx; goto E_100751ed;
    case 0x100751f6u: self = g->ecx; edx = g->edx; goto E_100751f6;
    case 0x100751feu: self = g->ecx; edx = g->edx; goto E_100751fe;
    case 0x10075207u: self = g->ecx; edx = g->edx; goto E_10075207;
    case 0x1007520fu: self = g->ecx; edx = g->edx; goto E_1007520f;
    case 0x10075218u: eax = g->eax; edx = g->edx; goto E_10075218;
    default: break;
    }
#endif

    COW_AT(100751b0)
    if (arg1 == rd32(self + 0xd4cu))
    {
    COW_AT(100751be)
        t1 = rd32(arg1 + 8u);
        wr32(self + 0xd4cu, t1);
    }
    COW_AT(100751c7)
    if (rd32(arg1 + 8u) != 0u)
    {
        edx = rd32(arg1 + 8u);
    COW_AT(100751cf)
        t2 = rd32(arg1 + 0xcu);
        wr32(edx + 0xcu, t2);
    }
    COW_AT(100751d5)
    if (rd32(arg1 + 0xcu) != 0u)
    {
        edx = rd32(arg1 + 0xcu);
    COW_AT(100751dc)
        t3 = rd32(arg1 + 8u);
        wr32(edx + 8u, t3);
    }
    COW_AT(100751e2)
    if (rd32(self + 0xd50u) != arg1)
    {
        edx = rd32(self + 0xd50u);
    }
    else
    {
    COW_AT(100751ed)
        t4 = rd32(arg1 + 0xcu);
        wr32(self + 0xd50u, t4);
        edx = t4;
    }
    COW_AT(100751f6)
    if (rd32(self + 0xd54u) == arg1)
    {
    COW_AT(100751fe)
        t5 = rd32(arg1 + 8u);
        wr32(self + 0xd54u, t5);
        edx = t5;
    }
    COW_AT(10075207)
    if (rd32(self + 0xd5cu) != arg1)
    {
        eax = arg1;
    }
    else
    {
    COW_AT(1007520f)
        t6 = rd32(arg1 + 0xcu);
        wr32(self + 0xd5cu, t6);
        eax = t6;
    }
    COW_AT(10075218)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100751b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100751beu:
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
    case 0x100751c7u:
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
    case 0x100751cfu:
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
    case 0x100751d5u:
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
    case 0x100751dcu:
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
    case 0x100751e2u:
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
    case 0x100751edu:
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
    case 0x100751f6u:
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
    case 0x100751feu:
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
    case 0x10075207u:
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
    case 0x1007520fu:
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
    case 0x10075218u:
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
void cow_adapter_100751b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100751b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
