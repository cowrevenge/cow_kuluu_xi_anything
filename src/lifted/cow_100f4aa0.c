/* f_0x100f4aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f4aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f4ab1u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4ab1;
    case 0x100f4ab8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4ab8;
    case 0x100f4abfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4abf;
    case 0x100f4ac9u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4ac9;
    case 0x100f4ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4ae4;
    case 0x100f4af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4af1;
    case 0x100f4b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4b03;
    case 0x100f4b0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4b0b;
    case 0x100f4b28u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4b28;
    case 0x100f4b32u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f4b32;
    default: break;
    }
#endif

    COW_AT(100f4aa0)
    wr32(sp0 - 0x2cu, in_esi);
    if (arg2 > 3u) goto L_100f4b32;
    COW_AT(100f4ab1)
    t1 = rd32(COW_IMG(0x100f4b3cu) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4ab8u: goto L_100f4ab8;
    case 0x100f4abfu: goto L_100f4abf;
    case 0x100f4ac9u: goto L_100f4ac9;
    case 0x100f4b28u: goto L_100f4b28;
    default: rt_fatal(g, COW_IMG(0x100f4ab1u), "switch");
    }
    return 0;
L_100f4ab8: ;
    COW_AT(100f4ab8)
    g->esi = in_esi;
    return 0u;
L_100f4abf: ;
    COW_AT(100f4abf)
    g->esi = in_esi;
    return 0x16u;
L_100f4ac9: ;
    COW_AT(100f4ac9)
    g->eax = arg2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t2 = cow_stdcall(g, COW_IMG(0x10310417u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x18u, t2);
    wr32(arg1 + 0x1cu, t4);
    g->edx = t4;
    t5 = cow_stdcall(g, COW_IMG(0x10310070u), 0);
    t6 = g->edx;
    wr32(arg1 + 0x20u, t5);
    if ((int32_t)t5 >= 0)
    {
        eax = t5;
        edx = t6;
        goto L_100f4af1;
    }
    eax = t5;
    edx = t6;
L_100f4ae4: ;
    COW_AT(100f4ae4)
    wr32(arg1 + 8u, eax);
    g->esi = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return 7u;
L_100f4af1: ;
    COW_AT(100f4af1)
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    wr32(sp0 - 0x34u, eax);
    g->eax = eax;
    g->ecx = sp0 - 0x28u;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t7 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, eax, sp0 - 0x28u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        edx = t9;
        goto L_100f4ae4;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(100f4b03)
    if (rd8(sp0 - 0x20u) == 0u) goto L_100f4ae4;
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x20u);
    COW_AT(100f4b0b)
    wr32(sp0 - 0x30u, 0x10u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, arg1 + 0x24u);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x24u, sp0 - 0x20u, 0x10u, rd32(sp0 - 0x2cu));
    t10 = g->edx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edx = t10;
    return 0x17u;
L_100f4b28: ;
    COW_AT(100f4b28)
    g->esi = in_esi;
    return 6u;
L_100f4b32: ;
    COW_AT(100f4b32)
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f4aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f4ab1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4ab8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f4abfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f4ac9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4ae4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4af1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4b03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f4b0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f4b28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100f4b32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f4aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
