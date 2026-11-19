/* f_0x1002a700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002a700(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002a71eu: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1002a71e;
    case 0x1002a728u: ecx = g->ecx; esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1002a728;
    case 0x1002a745u: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1002a745;
    case 0x1002a747u: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1002a747;
    default: break;
    }
#endif

    COW_AT(1002a700)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    g->edx = 0u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10029e70u), self, 0);
    t2 = g->edx;
    if (rd32(t1) == t2)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ecx = rd32(t1);
        esi = t1;
    COW_AT(1002a71e)
        wr32(sp0 - 0x14u, in_ebx);
        wr32(sp0 - 0x18u, in_ebp);
L_1002a728: ;
    COW_AT(1002a728)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x24u, arg2);
        wr32(sp0 - 0x28u, self);
        wr32(sp0 - 0x2cu, arg1);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x20u), ecx, 5, arg1, self, arg2, sp0 - 4u, sp0 - 8u);
        if (rd32(rd32(esi) + 4u) != 0u)
        {
            ecx = rd32(rd32(esi) + 4u);
            esi = rd32(esi) + 4u;
            goto L_1002a728;
        }
    COW_AT(1002a745)
        ebx = rd32(sp0 - 0x14u);
        ebp = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(1002a747)
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002a700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002a71eu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1002a728u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002a745u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1002a747u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002a700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
