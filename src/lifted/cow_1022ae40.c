/* f_0x1022ae40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022ae40(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022ae4cu: self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022ae4c;
    case 0x1022ae51u: self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022ae51;
    case 0x1022ae5bu: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022ae5b;
    case 0x1022ae61u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1022ae61;
    case 0x1022ae6fu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_1022ae6f;
    case 0x1022aea4u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1022aea4;
    case 0x1022aea8u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1022aea8;
    case 0x1022aeaau: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1022aeaa;
    case 0x1022aebdu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_1022aebd;
    default: break;
    }
#endif

    COW_AT(1022ae40)
    wr32(sp0 - 0x18u, in_esi);
    if ((int32_t)arg2 < 0)
    {
        edi = in_edi;
        loc_18 = in_esi;
    }
    else
    {
    COW_AT(1022ae4c)
        if ((int32_t)arg2 >= (int32_t)rd32(self + 0x44u))
        {
            edi = in_edi;
            loc_18 = in_esi;
        }
        else
        {
    COW_AT(1022ae51)
            if (arg2 * 8u + rd32(self + 0x20u) == 0u)
            {
                edi = in_edi;
                loc_18 = in_esi;
            }
            else
            {
                eax = arg2 * 8u + rd32(self + 0x20u);
    COW_AT(1022ae5b)
                if (rd32(eax) == 0u)
                {
                    edi = in_edi;
                    loc_18 = in_esi;
                }
                else
                {
                    eax = rd32(eax);
    COW_AT(1022ae61)
                    g->esp = sp0 - 0x18u;
                    t1 = cow_call_regs(g, COW_IMG(0x102295d0u), eax, eax, g->edx, 1, 0);
                    if ((int16_t)t1 < 0)
                    {
                        edi = in_edi;
                        loc_18 = in_esi;
                    }
                    else
                    {
                        esi = (uint32_t)(int16_t)t1;
    COW_AT(1022ae6f)
                        wr32(sp0 - 0x1cu, in_edi);
                        wr32(sp0 - 0x20u, arg3);
                        wr32(sp0 - 0x24u, arg1);
                        g->eax = arg1;
                        g->edx = arg3;
                        g->esp = sp0 - 0x1cu;
                        t2 = cow_thiscall(g, COW_IMG(0x10233250u), sp0 - 0x14u, 2, arg1, arg3);
                        t3 = g->ecx;
                        t4 = g->edx;
                        wr32(sp0 - 0x20u, esi);
                        t5 = cow_call_regs(g, COW_IMG(0x10153ff0u), t2, t3, t4, 1, 1, esi);
                        t6 = g->edx;
                        g->edx = t6;
                        t7 = cow_thiscall(g, COW_IMG(0x10154550u), t5, 1, rd32(sp0 - 0x20u));
                        t8 = g->ecx;
                        t9 = g->edx;
                        wr32(sp0 - 0x20u, esi);
                        g->edx = t9;
                        t10 = cow_thiscall_cdecl(g, COW_IMG(0x1022b010u), t8, 1, esi);
                        t11 = g->edx;
                        wr32(sp0 - 0x20u, t7);
                        if (t10 != 0u)
                        {
                            eax = t10;
                            edx = t11;
                            loc_20 = t7;
    COW_AT(1022aea8)
                            wr32(sp0 - 0x24u, 0u);
                            loc_24 = 0u;
                        }
                        else
                        {
                            eax = t10;
                            edx = t11;
                            loc_20 = t7;
    COW_AT(1022aea4)
                            wr32(sp0 - 0x24u, 1u);
                            loc_24 = 1u;
                        }
    COW_AT(1022aeaa)
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x12u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t12 = cow_thiscall(g, COW_IMG(0x10233280u), sp0 - 0x14u, 4, 0x12u, 0u, loc_24, loc_20);
                        t13 = g->edx;
                        cow_thiscall(g, COW_IMG(0x10233240u), sp0 - 0x14u, 0);
                        edi = rd32(sp0 - 0x1cu);
                        loc_18 = rd32(sp0 - 0x18u);
                    }
                }
            }
        }
    }
    COW_AT(1022aebd)
    g->esi = loc_18;
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022ae40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022ae4cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1022ae51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1022ae5bu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1022ae61u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1022ae6fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1022aea4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1022aea8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->ecx = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1022aeaau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->ecx = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1022aebdu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ae40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022ae40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
