/* f_0x100cd3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_100cd3d0(Guest* g)
{
    double d10;
    double d3;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cd3d8u: eax = g->eax; edx = g->edx; goto E_100cd3d8;
    case 0x100cd401u: eax = g->eax; edx = g->edx; goto E_100cd401;
    case 0x100cd408u: eax = g->eax; edx = g->edx; goto E_100cd408;
    case 0x100cd419u: eax = g->eax; edx = g->edx; goto E_100cd419;
    case 0x100cd42eu: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd42e;
    case 0x100cd436u: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd436;
    case 0x100cd453u: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd453;
    case 0x100cd45bu: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd45b;
    case 0x100cd461u: eax = g->eax; edx = g->edx; goto E_100cd461;
    case 0x100cd465u: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd465;
    case 0x100cd474u: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd474;
    case 0x100cd47cu: eax = g->eax; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd47c;
    default: break;
    }
#endif

    COW_AT(100cd3d0)
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0x44u), self, 0);
    eax = t2;
    COW_AT(100cd3d8)
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    d3 = fr(g, (double)(int64_t)cow_i64(eax, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d3);
    g->eax = eax;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100cd401)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x10028230u), eax, 2, sp0 - 0xcu, arg1);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(100cd408)
    d8 = (double)rdf32(sp0 - 4u);
    if (!(d8 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100cd461)
        x0 = (double)rdf32(sp0 - 0x14u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100cd419)
        d9 = (double)rdf32(sp0 - 4u);
        if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(sp0 - 4u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(sp0 - 4u);
    COW_AT(100cd42e)
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(100cd436)
        d10 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0) / (double)rdf32(sp0 + 8u)));
        if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = d10;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = d10;
    COW_AT(100cd453)
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(100cd45b)
        x0 = fr(g, x0 * (double)rdf32(sp0 - 0x14u));
    }
    COW_AT(100cd465)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(100cd474)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(100cd47c)
    g->edx = edx;
    fpush(g, x0);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cd3d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cd3d8u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100cd401u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x100cd408u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd419u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd42eu:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd436u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd453u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd45bu:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd461u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd465u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd474u:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100cd47cu:
    {
        uint32_t eax;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cd3d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cd3d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
