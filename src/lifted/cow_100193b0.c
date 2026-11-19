/* f_0x100193b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_100193b0(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100193c1u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100193c1;
    case 0x100193fdu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 0xcu); goto E_100193fd;
    case 0x10019412u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 0xcu); goto E_10019412;
    default: break;
    }
#endif

    COW_AT(100193b0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x103291acu)), 1, sp0 - 8u);   /* kernel32.dll!QueryPerformanceCounter */
    COW_AT(100193c1)
    t1 = rd32(sp0 - 8u) - rd32(self + 0x60u) - rd32(self + 0x20u);
    t2 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, t1);
    t3 = rd32(sp0 - 4u) - rd32(self + 0x64u) - (t2 < rd32(self + 0x60u)) - rd32(self + 0x24u) - (t2 - rd32(self + 0x60u) < rd32(self + 0x20u));
    wr32(sp0 - 4u, t3);
    d4 = fr(g, (double)(int64_t)cow_i64(t1, t3) / (double)(int64_t)(int64_t)rd64(self + 0x10u));
    if ((cow_fsw(g, d4, rdf64(COW_IMG(0x1032a108u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, rdf64(COW_IMG(0x1032a108u)), 1u) & 0x4100u;
        edx = t3;
        x0 = d4;
        goto L_10019412;
    }
    eax = cow_fsw(g, d4, rdf64(COW_IMG(0x1032a108u)), 1u) & 0x4100u;
    edx = t3;
    x0 = d4;
    COW_AT(100193fd)
    d5 = fr(g, rdf64(COW_IMG(0x1032a100u)) / x0);
    wrf32(self + 4u, (float)d5);
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, (double)rdf32(self + 4u));
    return eax;
L_10019412: ;
    COW_AT(10019412)
    wr32(self + 4u, 0x41f00000u);
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, (double)rdf32(self + 4u));
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100193b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100193c1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100193fdu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10019412u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100193b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100193b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
