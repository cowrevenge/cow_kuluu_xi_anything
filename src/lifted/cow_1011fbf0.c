/* f_0x1011fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1011fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011fc16u: edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1011fc16;
    case 0x1011fc1au: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1011fc1a;
    case 0x1011fc29u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1011fc29;
    case 0x1011fc2du: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1011fc2d;
    case 0x1011fc35u: eax = g->eax; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; goto E_1011fc35;
    case 0x1011fc3bu: eax = g->eax; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = g->ebx - 0x4u; goto E_1011fc3b;
    case 0x1011fc4bu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->ebx - 0x4u; goto E_1011fc4b;
    case 0x1011fc68u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->ebx - 0x4u; goto E_1011fc68;
    case 0x1011fc71u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1011fc71;
    default: break;
    }
#endif

    COW_AT(1011fbf0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 4u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, t2);
    if ((int32_t)arg5 <= 0)
    {
        eax = arg5;
        edx = t3;
        ebp = t1;
        esi = 0u;
    }
    else
    {
        edx = t3;
        ebp = t1;
    COW_AT(1011fc16)
        edi = arg5;
L_1011fc1a: ;
    COW_AT(1011fc1a)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->edx;
        if (edi != 1u)
        {
            edx = t5;
            edi = edi - 1u;
            goto L_1011fc1a;
        }
        eax = t4;
        edx = t5;
        esi = arg5;
    }
    COW_AT(1011fc29)
    if ((int32_t)esi >= (int32_t)ebp)
    {
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
    COW_AT(1011fc2d)
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
L_1011fc35: ;
    COW_AT(1011fc35)
        if ((int32_t)esi >= (int32_t)arg6) goto L_1011fc71;
    COW_AT(1011fc3b)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
    COW_AT(1011fc4b)
            wr32(sp0 - 0x1cu, arg4);
            wr32(sp0 - 0x20u, arg3);
            wr32(sp0 - 0x24u, 0x3f800000u);
            wr32(sp0 - 0x28u, 0x3f800000u);
            wr32(sp0 - 0x2cu, arg2);
            wr32(sp0 - 0x30u, arg1);
            g->ebx = self + 4u;
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x1011e980u), eax, arg2, 6, arg1, arg2, 0x3f800000u, 0x3f800000u, arg3, arg4);
            t8 = g->edx;
            edx = t8;
        }
    COW_AT(1011fc68)
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 4u))
        {
            eax = rd32(sp0 - 4u);
            esi = esi + 1u;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            goto L_1011fc35;
        }
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
L_1011fc71: ;
    COW_AT(1011fc71)
    g->ebx = loc_c;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_10;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011fbf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011fc16u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011fc1au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011fc29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011fc2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011fc35u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->ebp = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1011fc3bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->ebp = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1011fc4bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->ebp = arg3;
        g->edi = arg4;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1011fc68u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->ebx - 0x4u;
        g->esp = sp0 - 0x18u;
        g->ebp = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1011fc71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011fbf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1011fbf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
