/* f_0x100213e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100213e0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10021408u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_10021408;
    case 0x10021411u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10021411;
    case 0x10021422u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10021422;
    case 0x10021430u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10021430;
    case 0x1002143du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1002143d;
    case 0x10021465u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10021465;
    default: break;
    }
#endif

    COW_AT(100213e0)
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10021408)
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    edx = t3;
    COW_AT(10021411)
    t4 = rd32(arg1 + 4u);
    wr32(sp0 - 0x58u, t4);
    g->eax = arg1;
    g->esp = sp0 - 0x54u;
    t5 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t4);
    eax = t5;
    COW_AT(10021422)
    wr32(sp0 - 0x58u, sp0 - 0x4cu);
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x4cu);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    COW_AT(10021430)
    wr32(sp0 - 0x58u, self + 0x44u);
    wr32(sp0 - 0x5cu, self + 0x50u);
    g->eax = self + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t8 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x50u, self + 0x44u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1002143d)
    d10 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0x50u));
    wrf32(self + 0x50u, (float)d10);
    d11 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0x54u));
    wrf32(self + 0x54u, (float)d11);
    d12 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(self + 0x58u));
    wrf32(self + 0x58u, (float)d12);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t13 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(10021465)
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100213e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10021408u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x4cu, 0x3f800000u);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10021411u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10021422u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10021430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1002143du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x5cu;
        g->edi = self + 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10021465u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100213e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100213e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
