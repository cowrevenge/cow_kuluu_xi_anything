/* f_0x1011bd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011bd10(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011bd30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1011bd30;
    case 0x1011bd3du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1011bd3d;
    case 0x1011bd4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1011bd4e;
    case 0x1011bd53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1011bd53;
    default: break;
    }
#endif

    COW_AT(1011bd10)
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->eax = 0u;
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 4u, in_esi, 0u);
    t3 = g->ecx;
    eax = t2;
    ecx = t3;
    COW_AT(1011bd30)
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, eax);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, eax, sp0 - 8u);
    t4 = g->edx;
    edx = t4;
    esi = eax;
    COW_AT(1011bd3d)
    if ((int32_t)(esi & 0x3fu) >= 0)
    {
        eax = esi & 0x3fu;
    }
    else
    {
        eax = esi & 0x3fu;
    COW_AT(1011bd4e)
        eax = (eax - 1u | 0xffffffc0u) + 1u;
    }
    COW_AT(1011bd53)
    wr32(sp0 + 4u, eax);
    t5 = (uint16_t)esi >> 6u;
    t6 = rd32(sp0 + 8u);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t5);
    t8 = rd32(sp0 - 0xcu);
    d9 = fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x1032a9e8u)));
    t10 = rd32(sp0 + 4u);
    wrf32(t6, (float)d9);
    d11 = fr(g, fr(g, (double)(int32_t)t7 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a9e8u)));
    wrf32(t6 + 8u, (float)d11);
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032a778u)) * (double)(int32_t)t10);
    wrf32(t6 + 4u, (float)d12);
    d13 = fr(g, fr(g, (double)(int32_t)t10 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(t6 + 0xcu, (float)d13);
    g->esi = t8;
    g->edx = edx;
    return (t6 & 0xffffff00u) | rd8(sp0 - 8u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011bd10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011bd30u:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1011bd3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011bd4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011bd53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011bd10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011bd10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
