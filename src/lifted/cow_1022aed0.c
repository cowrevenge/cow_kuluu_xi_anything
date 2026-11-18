/* f_0x1022aed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022aed0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022aedcu: self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022aedc;
    case 0x1022aee1u: self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022aee1;
    case 0x1022aeebu: eax = g->eax; esi = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022aeeb;
    case 0x1022aef1u: eax = g->eax; esi = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022aef1;
    case 0x1022af2bu: eax = g->eax; esi = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022af2b;
    default: break;
    }
#endif

    COW_AT(1022aed0)
    wr32(sp0 - 0x18u, in_esi);
    if ((int32_t)arg2 >= 0)
    {
    COW_AT(1022aedc)
        if ((int32_t)arg2 < (int32_t)rd32(self + 0x44u))
        {
    COW_AT(1022aee1)
            if (arg2 * 8u + rd32(self + 0x20u) != 0u)
            {
                eax = arg2 * 8u + rd32(self + 0x20u);
    COW_AT(1022aeeb)
                if ((int32_t)rd32(eax) >= 0)
                {
                    esi = rd32(eax);
    COW_AT(1022aef1)
                    wr32(sp0 - 0x1cu, arg3);
                    wr32(sp0 - 0x20u, arg1);
                    g->eax = arg1;
                    g->edx = arg3;
                    g->esp = sp0 - 0x18u;
                    t1 = cow_thiscall(g, COW_IMG(0x10233250u), sp0 - 0x14u, 2, arg1, arg3);
                    t2 = g->ecx;
                    t3 = g->edx;
                    wr32(sp0 - 0x1cu, esi);
                    t4 = cow_call_regs(g, COW_IMG(0x10153ff0u), t1, t2, t3, 1, 1, esi);
                    t5 = g->edx;
                    g->edx = t5;
                    t6 = cow_thiscall(g, COW_IMG(0x10154550u), t4, 1, rd32(sp0 - 0x1cu));
                    t7 = g->edx;
                    wr32(sp0 - 0x1cu, t6 + 1u);
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x12u);
                    g->eax = t6 + 1u;
                    g->edx = t7;
                    t8 = cow_thiscall(g, COW_IMG(0x10233280u), sp0 - 0x14u, 4, 0x12u, 0u, 0u, t6 + 1u);
                    t9 = g->edx;
                    cow_thiscall(g, COW_IMG(0x10233240u), sp0 - 0x14u, 0);
                }
            }
        }
    }
    COW_AT(1022af2b)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022aed0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022aedcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1022aee1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1022aeebu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1022aef1u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1022af2bu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022aed0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022aed0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
