/* f_0x100171b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100171b0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_8_d;
    uint32_t t10;
    uint32_t t11;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100171cau: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100171ca;
    case 0x100171d2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100171d2;
    case 0x100171ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_d = rdf64(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100171ec;
    case 0x100171ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_d = rdf64(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100171ff;
    case 0x1001720au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_d = rdf64(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1001720a;
    case 0x1001721bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8_d = rdf64(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1001721b;
    default: break;
    }
#endif

    COW_AT(100171b0)
    d1 = fr(g, (double)rdf32(COW_IMG(0x10456a9cu)) + (double)rdf32(sp0 + 4u));
    if (!(d1 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
        x0 = d1;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 1u);
        x0 = d1;
    COW_AT(100171ca)
        x0 = (double)rdf32(COW_IMG(0x10329a18u));
    }
    COW_AT(100171d2)
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    wr32(sp0 + 4u, 0u);
    ecx = self;
    edx = in_edx;
    esi = 0u;
    loc_8_d = d2;
L_100171ec: ;
    COW_AT(100171ec)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d3 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329e94u)));
    fpush(g, d3);
    fpush(g, loc_8_d);
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10312cd0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t4;
    ecx = t5;
    edx = t6;
    x0 = d7;
    COW_AT(100171ff)
    g->ecx = ecx;
    g->edx = edx;
    d8 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329e90u)));
    fpush(g, d8);
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1001720a)
    wr16(arg2 + esi * 2u, (uint16_t)eax);
    wr32(sp0 + 4u, esi + 1u);
    if ((int32_t)(esi + 1u) < 256)
    {
        esi = esi + 1u;
        goto L_100171ec;
    }
    COW_AT(1001721b)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100171b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100171cau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100171d2u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100171ecu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_d = rdf64(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100171ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_d = rdf64(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001720au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_d = rdf64(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001721bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_8_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8_d = rdf64(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100171b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100171b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
