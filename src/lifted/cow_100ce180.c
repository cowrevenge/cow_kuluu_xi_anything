/* f_0x100ce180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ce180(Guest* g)
{
    double d16;
    double d25;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ce224u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100ce224;
    case 0x100ce231u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100ce231;
    default: break;
    }
#endif

    COW_AT(100ce180)
    wr32(sp0 - 0x5cu, in_esi);
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x5cu;
    t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), self, 0);
    wr32(sp0 - 0x60u, t2);
    g->edx = rd32(arg1);
    t3 = rd32(arg1);
    t4 = cow_thiscall_cdecl(g, rd32(t3 + 0x1bcu), arg1, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x64u, t4);
    wr32(sp0 - 0x68u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x58u, t4, rd32(sp0 - 0x60u));
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t10 = g->edx;
    t11 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    g->edx = rd32(self);
    t12 = rd32(self);
    t13 = cow_thiscall(g, rd32(t12 + 0x1c0u), self, 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x60u, t14);
    d16 = (double)(float)-(double)rdf32(t13 + 4u);
    wrf32(sp0 - 0x60u, (float)d16);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d16));
    t17 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x58u);
    t19 = g->edx;
    wr32(sp0 - 0x60u, sp0 - 0x58u);
    g->ecx = sp0 - 0x58u;
    t20 = cow_call_regs(g, COW_IMG(0x100274b0u), t18, g->ecx, g->edx, 1, 1, sp0 - 0x58u);
    t21 = g->ecx;
    wr32(sp0 - 0x64u, COW_IMG(0x1035d748u));
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, COW_IMG(0x1035d748u));
    t22 = g->edx;
    wr32(sp0 - 0x6cu, sp0 - 0x4cu);
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    g->eax = sp0 - 0x4cu;
    g->edx = t22;
    g->esp = sp0 - 0x68u;
    t23 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x58u, sp0 - 0x4cu);
    t24 = g->edx;
    d25 = cow_take_float(g);
    if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t24;
        goto L_100ce231;
    }
    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    edx = t24;
    COW_AT(100ce224)
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = in_esi;
    return 0u;
L_100ce231: ;
    COW_AT(100ce231)
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = in_esi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ce180(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ce224u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->ecx = sp0 - 0x40u;
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x60u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x100ce231u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x58u;
        g->ecx = sp0 - 0x40u;
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        wr32(sp0 - 0x6cu, sp0 - 0x4cu);
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        wr32(sp0 - 0x60u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce180(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ce180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
