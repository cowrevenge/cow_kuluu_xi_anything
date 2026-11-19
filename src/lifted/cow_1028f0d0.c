/* f_0x1028f0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1028f0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028f0d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1028f0d8;
    case 0x1028f114u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1028f114;
    case 0x1028f129u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1028f129;
    case 0x1028f131u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1028f131;
    case 0x1028f13du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1028f13d;
    case 0x1028f145u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1028f145;
    default: break;
    }
#endif

    COW_AT(1028f0d0)
    if (arg3 != 0u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_1028f145;
    }
    COW_AT(1028f0d8)
    t1 = rd32((arg2 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)arg2 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u));
    t2 = rd32((arg2 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)arg2 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u) + 0x18u);
    t3 = rd32((uint32_t)((int32_t)arg2 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u);
    wr32((arg2 & 0x7fffu) * 0x90u + t3 + 0xcu, t1);
    if (rd32(t2) != 0xf0001u)
    {
        eax = t1;
        ecx = t2;
        edx = rd32(t2);
        esi = (arg2 & 0x7fffu) * 0x90u + t3;
        goto L_1028f129;
    }
    eax = t1;
    ecx = t2;
    edx = rd32(t2);
    esi = (arg2 & 0x7fffu) * 0x90u + t3;
    COW_AT(1028f114)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10290fe0u), 2, ecx, eax);
    t5 = g->edx;
    wr32(esi, t4);
    wr32(esi + 0x10u, 0u);
    g->esi = in_esi;
    g->edx = t5;
    return t4;
L_1028f129: ;
    COW_AT(1028f129)
    if (edx == 0xf0005u)
    {
    COW_AT(1028f131)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_cdecl(g, COW_IMG(0x10299630u), 2, ecx, eax);
        t7 = g->edx;
        wr32(esi, t6);
        eax = t6;
        edx = t7;
    }
    COW_AT(1028f13d)
    wr32(esi + 0x10u, 0u);
L_1028f145: ;
    COW_AT(1028f145)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028f0d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028f0d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1028f114u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028f129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028f131u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028f13du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028f145u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f0d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028f0d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
