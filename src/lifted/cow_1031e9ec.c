/* f_0x1031e9ec - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_1031e9ec(Guest* g)
{
    double d1;
    double d2;
    double d4;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_1c_t;
    double loc_34_t;
    uint32_t t3;
    uint32_t t6;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    double xin0 = ST(0);
    double xin1 = ST(1);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031ea04u: eax = g->eax; self = g->ecx; in_edx = rd32(sp0 - 4u); goto E_1031ea04;
    case 0x1031ea09u: eax = g->eax; edx = g->edx; x1 = ST(0); x0 = ST(1); goto E_1031ea09;
    case 0x1031ea1eu: eax = g->eax; self = g->ecx; in_edx = rd32(sp0 - 4u); xin0 = ST(0); xin1 = ST(1); goto E_1031ea1e;
    case 0x1031ea51u: eax = g->eax; self = g->ecx; in_edx = rd32(sp0 - 4u); xin0 = ST(0); xin1 = ST(1); goto E_1031ea51;
    case 0x1031ea69u: eax = g->eax; self = g->ecx; in_edx = rd32(sp0 - 4u); xin0 = ST(0); xin1 = ST(1); goto E_1031ea69;
    case 0x1031ea89u: eax = g->eax; self = g->ecx; edx = g->edx; in_edx = rd32(sp0 - 4u); goto E_1031ea89;
    case 0x1031ea92u: eax = g->eax; edx = g->edx; x1 = ST(0); x0 = ST(1); goto E_1031ea92;
    case 0x1031ea97u: eax = g->eax; edx = g->edx; in_edx = rd32(sp0 - 4u); xin0 = ST(0); xin1 = ST(1); goto E_1031ea97;
    default: break;
    }
#endif

    COW_AT(1031e9ec)
    wr32(sp0 - 4u, in_edx);
    wrf80(sp0 - 0x1cu, xin0);
    wrf80(sp0 - 0x34u, xin1);
    if ((rd32(sp0 - 0x2eu) & 0x7fff0000u) == 0u) goto L_1031ea0e;
    eax = rd32(sp0 - 0x2eu);
    COW_AT(1031ea04)
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1031e7e6u), eax, self, 0u, 1, 8, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    d1 = cow_take_float(g);
    d2 = cow_take_float(g);
    x1 = d1;
    x0 = d2;
    COW_AT(1031ea09)
    g->top = (g->top + 2u) & 7u;
    fpush(g, x0);
    fpush(g, x1);
    return;
L_1031ea0e: ;
    COW_AT(1031ea0e)
    if ((rd32(sp0 - 0x34u) | rd32(sp0 - 0x30u)) == 0u) goto L_1031ea97;
    COW_AT(1031ea1e)
    wrf80(sp0 - 0x28u, xin1);
    wr16(sp0 - 0x10u, (uint16_t)g->fcw);
    t3 = rd32(sp0 - 0x10u) | 0x33fu;
    wr32(sp0 - 0xcu, t3);
    g->fcw = (uint16_t)t3;
    if ((rd32(sp0 - 0x14u) & 0x7fffu) > 0x7fbeu)
    {
    COW_AT(1031ea69)
        wr16(sp0 - 0x10u, (uint16_t)g->fcw);
        t6 = rd32(sp0 - 0x10u) | 0x300u;
        wr32(sp0 - 0xcu, t6);
        g->fcw = (uint16_t)t6;
        d7 = fr(g, xin1 * rdf64(COW_IMG(0x103d2ae4u)));
        wrf80(sp0 - 0x34u, d7);
        eax = t6;
        edx = 2u;
        loc_1c_t = xin0;
        loc_34_t = d7;
    }
    else
    {
        eax = rd32(sp0 - 0x14u) & 0x7fffu;
    COW_AT(1031ea51)
        d4 = fr(g, xin0 * rdf64(COW_IMG(0x103d2ae4u)));
        wrf80(sp0 - 0x1cu, d4);
        d5 = fr(g, xin1 * rdf64(COW_IMG(0x103d2ae4u)));
        wrf80(sp0 - 0x34u, d5);
        edx = 3u;
        loc_1c_t = d4;
        loc_34_t = d5;
    }
    COW_AT(1031ea89)
    g->fcw = rd16(sp0 - 0x10u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1031e7e6u), eax, self, edx, 1, 8, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    d8 = cow_take_float(g);
    d9 = cow_take_float(g);
    x1 = d8;
    x0 = d9;
    COW_AT(1031ea92)
    g->top = (g->top + 2u) & 7u;
    fpush(g, x0);
    fpush(g, x1);
    return;
L_1031ea97: ;
    COW_AT(1031ea97)
    g->top = (g->top + 1u) & 7u;
    fpush(g, fr(g, fmod(xin0, xin1)));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031e9ec(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031ea04u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea09u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        edx = g->edx;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea1eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        double xin0;
        double xin1;
        eax = g->eax;
        self = g->ecx;
        in_edx = rd32(sp0 - 4u);
        xin0 = ST(0);
        xin1 = ST(1);
        g->esp = sp0 - 0x34u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea51u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        double xin0;
        double xin1;
        eax = g->eax;
        self = g->ecx;
        in_edx = rd32(sp0 - 4u);
        xin0 = ST(0);
        xin1 = ST(1);
        g->esp = sp0 - 0x34u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea69u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        double xin0;
        double xin1;
        eax = g->eax;
        self = g->ecx;
        in_edx = rd32(sp0 - 4u);
        xin0 = ST(0);
        xin1 = ST(1);
        g->esp = sp0 - 0x34u;
        g->edx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea89u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea92u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        edx = g->edx;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1031ea97u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edx;
        double xin0;
        double xin1;
        eax = g->eax;
        edx = g->edx;
        in_edx = rd32(sp0 - 4u);
        xin0 = ST(0);
        xin1 = ST(1);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1031ea0e: reads xin0, xin1, which no location holds here
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031e9ec(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031e9ec(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
