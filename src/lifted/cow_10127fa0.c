/* f_0x10127fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=17 */
uint32_t cow_fn_10127fa0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg11 = rd32(sp0 + 0x2cu);
    const uint32_t arg12 = rd32(sp0 + 0x30u);
    const uint32_t arg13 = rd32(sp0 + 0x34u);
    const uint32_t arg14 = rd32(sp0 + 0x38u);
    const uint32_t arg15 = rd32(sp0 + 0x3cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg16 = rd32(sp0 + 0x40u);
    const uint32_t arg17 = rd32(sp0 + 0x44u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10128043u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10128043;
    default: break;
    }
#endif

    COW_AT(10127fa0)
    t1 = (uint8_t)rd32(sp0 + 0x1du);
    t2 = (uint8_t)rd32(sp0 + 0x1bu);
    t3 = (uint8_t)rd32(sp0 + 0xau);
    t4 = (uint8_t)rd32(sp0 + 9u);
    g->ecx = (uint8_t)arg2;
    g->edx = t3;
    g->esp = sp0 - 4u;
    cow_bridge_indirect(g, COW_IMG(0x10312031u), COW_IMG(0x10128043u), 23u, (const uint32_t[]){arg1, COW_IMG(0x1036f128u), (uint8_t)arg2, t4, t3, arg3, arg4, arg5, (uint16_t)arg6, 0u, t2, (uint8_t)arg7, t1, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, (uint8_t)arg17}, g->ecx, g->edx, g->eax, 92u);
    t5 = g->ecx;
    t6 = g->edx;
    ecx = t5;
    edx = t6;
    COW_AT(10128043)
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 4u < sp0 - 0x60u;
    pf = PARITY((uint8_t)(sp0 - 4u));
    af = (sp0 - 0x60u ^ 0x5cu ^ sp0 - 4u) >> 4u & 1u;
    zf = sp0 == 4u;
    sf = (int32_t)(sp0 - 4u) < 0;
    of = ((sp0 - 0x60u ^ sp0 - 4u) & (sp0 - 4u ^ 0x5cu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t7 = ~ecx - 1u;
    g->edi = in_edi;
    g->edx = edx;
    return t7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10127fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10128043u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x60u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10127fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10127fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
