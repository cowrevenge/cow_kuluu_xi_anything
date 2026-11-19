/* f_0x10260be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10260be0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10260beeu: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10260bee;
    case 0x10260bf5u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10260bf5;
    case 0x10260c1fu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10260c1f;
    default: break;
    }
#endif

    COW_AT(10260be0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (arg2 != 0u)
    {
        eax = in_eax;
        ecx = self;
    }
    else
    {
    COW_AT(10260bee)
        if (rd32(arg1 + 0x34u) == 0u)
        {
            eax = rd32(arg1 + 0x34u);
            ecx = self;
        }
        else
        {
    COW_AT(10260bf5)
            wr32(sp0 - 0xcu, sp0 + 8u);
            wr32(sp0 - 0x10u, COW_IMG(0x1033e918u));
            wr32(sp0 - 0x14u, arg1);
            g->eax = rd32(arg1);
            t1 = rd32(arg1);
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, rd32(t1), sp0 + 8u, 3, arg1, COW_IMG(0x1033e918u), sp0 + 8u);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 0x10u, arg2);
            wr32(sp0 - 0x14u, 0x15u);
            g->edx = arg2;
            cow_thiscall(g, COW_IMG(0x10261a00u), arg1 - 0xcu, 3, 0x15u, arg2, 0u);
            t3 = g->edx;
            wr32(sp0 - 0xcu, arg2);
            g->eax = arg2;
            t4 = rd32(arg2);
            t5 = cow_thiscall(g, rd32(t4 + 8u), t4, 1, arg2);
            t6 = g->ecx;
            eax = t5;
            ecx = t6;
        }
    }
    COW_AT(10260c1f)
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_fastcall(g, COW_IMG(0x10261910u), ecx, arg3, 3, arg1, arg2, arg3);
    t8 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10260be0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10260beeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10260bf5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10260c1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10260be0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10260be0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
