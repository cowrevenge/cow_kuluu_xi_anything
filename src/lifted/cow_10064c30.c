/* f_0x10064c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10064c30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 280u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10064c73u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); in_ebx = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x108u); g->ebx = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_10064c73;
    case 0x10064c95u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); in_ebx = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x108u); g->ebx = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_10064c95;
    default: break;
    }
#endif

    COW_AT(10064c30)
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x100u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x114u, arg1);
    t3 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, t2, 1, arg1);
    t4 = g->edx;
    wr32(sp0 - 0x114u, 0u);
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x1006b5f0u), t3, sp0 - 0x100u, g->edx, 0, 1, 0u);
    t6 = g->edx;
    esi = t5;
    edi = COW_IMG(0x10353b6cu);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t6;
        goto L_10064c95;
    }
    edx = t6;
    COW_AT(10064c73)
    wr32(sp0 - 0x114u, arg1);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t7 = cow_thiscall(g, COW_IMG(0x10064cd0u), self, 1, arg1);
    t8 = g->edx;
    t9 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t9 & 0xffffff00u) | (uint8_t)t7;
L_10064c95: ;
    COW_AT(10064c95)
    g->eax = 0u;
    g->esp = sp0 - 0x110u;
    t10 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t10 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10064c30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10064c73u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        in_ebx = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->eax = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10064c95u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        in_ebx = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10064c30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10064c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
