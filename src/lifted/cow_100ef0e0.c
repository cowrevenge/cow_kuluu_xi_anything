/* f_0x100ef0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef0e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_48;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ef13eu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_100ef13e;
    case 0x100ef147u: eax = g->eax; self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_100ef147;
    case 0x100ef14eu: eax = g->eax; self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_100ef14e;
    case 0x100ef157u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100ef157;
    case 0x100ef161u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100ef161;
    case 0x100ef16bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100ef16b;
    case 0x100ef16fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100ef16f;
    case 0x100ef174u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_48 = rd32(sp0 - 0x48u); goto E_100ef174;
    case 0x100ef189u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100ef189;
    default: break;
    }
#endif

    COW_AT(100ef0e0)
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x44u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x40u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x3cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x38u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x34u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x30u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x2cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x28u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x24u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x20u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x1cu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x18u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x14u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0x10u, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 0xcu, COW_IMG(0x100ef1a0u));
    wr32(sp0 - 8u, COW_IMG(0x100ef450u));
    wr32(sp0 - 4u, COW_IMG(0x100ef4b0u));
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = self;
        edx = in_edx;
        loc_48 = in_esi;
        goto L_100ef174;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100ef13e)
    if (rd32(arg1) != 0u) goto L_100ef14e;
    COW_AT(100ef147)
    g->ecx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x48u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ef157: ;
    COW_AT(100ef157)
    if (rd32(sp0 + rd32(edx) * 4u - 0x44u) == 0u)
    {
        eax = rd32(sp0 + rd32(edx) * 4u - 0x44u);
    COW_AT(100ef16b)
        esi = arg1;
    }
    else
    {
        eax = rd32(sp0 + rd32(edx) * 4u - 0x44u);
    COW_AT(100ef161)
        wr32(sp0 - 0x4cu, edx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t6 = cow_thiscall_cdecl(g, eax, ecx, 1, edx);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
        esi = t6;
    }
    COW_AT(100ef16f)
    if (esi != 0xffffffffu) goto L_100ef189;
    loc_48 = rd32(sp0 - 0x48u);
L_100ef174: ;
    COW_AT(100ef174)
    wr32(sp0 - 0x4cu, 0xbb9u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t9 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xbb9u);
    g->esi = rd32(sp0 - 0x48u);
    return 0xffffffffu;
L_100ef14e: ;
    COW_AT(100ef14e)
    g->eax = eax;
    g->ecx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x48u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        loc_48 = in_esi;
        goto L_100ef174;
    }
    ecx = t4;
    edx = t5;
    goto L_100ef157;
L_100ef189: ;
    COW_AT(100ef189)
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x100f9d50u), g->eax, g->ecx, edx, 1, 0);
    g->esi = rd32(sp0 - 0x48u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ef0e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ef13eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef147u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ef14eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ef157u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef161u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef16bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef16fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef174u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100ef189u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef0e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ef0e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
