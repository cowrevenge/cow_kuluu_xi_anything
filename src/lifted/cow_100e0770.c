/* f_0x100e0770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e0770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e078au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e078a;
    case 0x100e078du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e078d;
    case 0x100e0798u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e0798;
    case 0x100e07a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e07a1;
    case 0x100e07a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e07a4;
    case 0x100e07cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e07cd;
    case 0x100e07fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e07fc;
    default: break;
    }
#endif

    COW_AT(100e0770)
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a698u, 3u);
    if ((uint32_t)(int8_t)rd8(arg3 + 0x18u) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(arg3 + 0x18u);
        goto L_100e0798;
    }
    eax = (uint32_t)(int8_t)rd8(arg3 + 0x18u);
    COW_AT(100e078a)
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_100e07a4;
    }
    eax = eax - 1u;
    COW_AT(100e078d)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x100e0800u), arg3 + 4u, 1, arg3 + 4u);
    t1 = g->edx;
    edx = t1;
L_100e07a1: ;
    COW_AT(100e07a1)
L_100e07a4: ;
    COW_AT(100e07a4)
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a698u, 1u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1a699u, 1u);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c78cu);
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e07cd)
        t3 = (edx & 0xffffff00u) | rd8(arg3 + 0x18u);
        t4 = rd32(ecx + 0x1c790u);
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, eax, t4, 2, t4, t3);
        t5 = rd32(COW_IMG(0x104dfd98u));
        wr32(t5 + 0x1c78cu, 0u);
        t6 = rd32(COW_IMG(0x104dfd98u));
        wr32(t6 + 0x1c790u, 0u);
        eax = t6;
        edx = t5;
    }
    COW_AT(100e07fc)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e0798: ;
    COW_AT(100e0798)
    g->edx = arg3 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100e0680u), 1, arg3 + 4u);
    t2 = g->edx;
    edx = t2;
    goto L_100e07a1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e0770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e078au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e078du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e0798u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e07a1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e07a4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e07cdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e07fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e0770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
