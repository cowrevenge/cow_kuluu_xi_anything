/* f_0x100ebc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ebc00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ebc0au: in_eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ebc0a;
    case 0x100ebc0du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ebc0d;
    case 0x100ebc15u: ecx = g->ecx; edx = g->edx; goto E_100ebc15;
    case 0x100ebc18u: ecx = g->ecx; edx = g->edx; goto E_100ebc18;
    case 0x100ebc28u: ecx = g->ecx; edx = g->edx; goto E_100ebc28;
    case 0x100ebc2bu: ecx = g->ecx; edx = g->edx; goto E_100ebc2b;
    case 0x100ebc62u: ecx = g->ecx; edx = g->edx; goto E_100ebc62;
    case 0x100ebc65u: ecx = g->ecx; edx = g->edx; goto E_100ebc65;
    case 0x100ebc76u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ebc76;
    case 0x100ebc79u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100ebc79;
    default: break;
    }
#endif

    COW_AT(100ebc00)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebc0d;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ebc0a)
    g->edx = edx;
    return in_eax & 0xffffff00u;
L_100ebc0d: ;
    COW_AT(100ebc0d)
    if ((uint8_t)arg2 < 0xau) goto L_100ebc18;
    COW_AT(100ebc15)
    g->edx = edx;
    return arg2 & 0xffffff00u;
L_100ebc18: ;
    COW_AT(100ebc18)
    if (rd16(edx + (uint8_t)arg2 * 8u + 0x194c4u) != 0u) goto L_100ebc2b;
    COW_AT(100ebc28)
    g->edx = edx;
    return 0u;
L_100ebc2b: ;
    COW_AT(100ebc2b)
    esi = edx + rd8(edx + (uint8_t)arg2 * 8u + 0x194c6u) * 0x2cu + 0x9868u;
    edi = COW_IMG(0x104ca400u);
    ecx = 0xbu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd16(COW_IMG(0x104ca400u)) == rd16(edx + (uint8_t)arg2 * 8u + 0x194c4u)) goto L_100ebc65;
    COW_AT(100ebc62)
    g->edx = edx;
    return 0u;
L_100ebc65: ;
    COW_AT(100ebc65)
    if (rd32(COW_IMG(0x104ca404u)) >= rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u))
    {
        eax = rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u);
        goto L_100ebc79;
    }
    eax = rd32(edx + (uint8_t)arg2 * 8u + 0x194c0u);
    COW_AT(100ebc76)
    g->edx = edx;
    return eax & 0xffffff00u;
L_100ebc79: ;
    COW_AT(100ebc79)
    wr32(COW_IMG(0x104ca404u), eax);
    wr32(arg1, COW_IMG(0x104ca400u));
    g->edx = arg1;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ebc00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ebc0au:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ebc0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ebc15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc18u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc2bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc62u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc65u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100ebc76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100ebc79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebc00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ebc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
