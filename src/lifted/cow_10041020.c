/* f_0x10041020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10041020(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1004105fu: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1004105f;
    case 0x1004106bu: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1004106b;
    case 0x10041077u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10041077;
    case 0x1004107fu: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1004107f;
    case 0x10041085u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10041085;
    case 0x10041090u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10041090;
    case 0x10041097u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10041097;
    case 0x100410a8u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100410a8;
    case 0x100410b9u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100410b9;
    case 0x100410c5u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100410c5;
    default: break;
    }
#endif

    COW_AT(10041020)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10044890u), in_eax, self, g->edx, 1, 0);
    t1 = rd32(self + 0x198u);
    wr32(self, COW_IMG(0x1032ad20u));
    wr16(self + 0x176u, 0x1c0u);
    wr32(self + 0x1a8u, 0u);
    t2 = (t1 & 0xffffff00u) | (t1 & 0xf7u);
    wr32(self + 0x198u, t2);
    if (rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xe64u) <= 2u)
    {
    COW_AT(1004107f)
        wr32(self + 0x1b8u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1047bfa8u));
    COW_AT(1004105f)
        if ((rd32(eax + 0xdecu) & 0x400u) == 0u)
        {
    COW_AT(10041077)
            wr32(self + 0x1b8u, 2u);
        }
        else
        {
    COW_AT(1004106b)
            wr32(self + 0x1b8u, 3u);
        }
    }
    COW_AT(10041085)
    if (rd32(self + 0x1b8u) > 3u) goto L_100410c5;
    eax = rd32(self + 0x1b8u);
    COW_AT(10041090)
    t3 = rd32(COW_IMG(0x100410ccu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10041097u: goto L_10041097;
    case 0x100410a8u: goto L_100410a8;
    case 0x100410b9u: goto L_100410b9;
    default: rt_fatal(g, COW_IMG(0x10041090u), "switch");
    }
    return 0;
L_10041097: ;
    COW_AT(10041097)
    wr8(self + 0x1bcu, 1u);
    wr8(self + 0x1bdu, 0u);
    g->esi = in_esi;
    g->edx = 2u;
    return self;
L_100410a8: ;
    COW_AT(100410a8)
    wr8(self + 0x1bdu, 1u);
    wr8(self + 0x1bcu, 0u);
    g->esi = in_esi;
    g->edx = 2u;
    return self;
L_100410b9: ;
    COW_AT(100410b9)
    wr8(self + 0x1bdu, 2u);
    wr8(self + 0x1bcu, 0u);
L_100410c5: ;
    COW_AT(100410c5)
    g->esi = in_esi;
    g->edx = 2u;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10041020(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1004105fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1004106bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10041077u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1004107fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10041085u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10041090u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10041097u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100410a8u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100410b9u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100410c5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10041020(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10041020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
