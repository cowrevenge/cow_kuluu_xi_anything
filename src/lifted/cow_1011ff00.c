/* f_0x1011ff00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011ff00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011ff1bu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u) - 0x4u; g->esi = rd32(sp0 - 0x10u); goto E_1011ff1b;
    case 0x1011ff32u: eax = g->eax; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_1011ff32;
    case 0x1011ff44u: eax = g->eax; edx = g->edx; goto E_1011ff44;
    case 0x1011ff54u: eax = g->eax; edx = g->edx; goto E_1011ff54;
    case 0x1011ff5fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1011ff5f;
    case 0x1011ff62u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_1011ff62;
    default: break;
    }
#endif

    COW_AT(1011ff00)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 4u, self + 4u);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, t2);
    if ((int32_t)t1 <= 0)
    {
        eax = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_10 = in_esi;
    }
    else
    {
        edx = t3;
        esi = t1;
    COW_AT(1011ff1b)
        wr32(sp0 - 0x14u, in_ebx);
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, in_edi);
        wr32(sp0 - 0xcu, esi);
        loc_10 = in_esi;
        loc_4 = self + 4u;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_edi;
        loc_c = esi;
L_1011ff32: ;
    COW_AT(1011ff32)
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
    COW_AT(1011ff44)
            wr32(sp0 - 0x20u, arg5);
            wr32(sp0 - 0x24u, arg4);
            wr32(sp0 - 0x28u, arg3);
            wr32(sp0 - 0x2cu, arg2);
            wr32(sp0 - 0x30u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x1011ed70u), eax, 5, arg1, arg2, arg3, arg4, arg5);
            t6 = g->edx;
            edx = t6;
        }
    COW_AT(1011ff54)
        t7 = rd32(sp0 - 0xcu) - 1u;
        t8 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0xcu, t7);
        if (t8 != 1u)
        {
            loc_10 = rd32(sp0 - 0x10u);
            loc_4 = rd32(sp0 - 4u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_c = t7;
            goto L_1011ff32;
        }
        eax = t7;
    COW_AT(1011ff5f)
        ebx = rd32(sp0 - 0x14u);
        ebp = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(1011ff62)
    g->ebx = ebx;
    g->esi = loc_10;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011ff00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011ff1bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u) - 0x4u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011ff32u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg4;
        g->ebp = arg2;
        g->esi = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011ff44u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg4;
        g->ebp = arg2;
        g->esi = arg3;
        g->edi = arg5;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1011ff54u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg4;
        g->ebp = arg2;
        g->esi = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011ff5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ff62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011ff00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011ff00(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
