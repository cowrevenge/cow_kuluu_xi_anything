/* f_0x10018ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10018ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_108;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 308u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10018f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x10cu); goto E_10018f0d;
    case 0x10018f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10018f3f;
    case 0x10018f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10018f43;
    case 0x10018f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10018f4a;
    case 0x10018f51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10018f51;
    case 0x10018f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_108 = rd32(sp0 - 0x108u); goto E_10018f58;
    case 0x10018f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_108 = rd32(sp0 - 0x108u); goto E_10018f63;
    case 0x10018f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_108 = rd32(sp0 - 0x108u); goto E_10018f73;
    default: break;
    }
#endif

    COW_AT(10018ee0)
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, COW_IMG(0x10351000u));
    t1 = rd32(COW_IMG(0x10350fecu) + rd32(rd32(COW_IMG(0x10456a28u)) + 4u) * 4u);
    wr32(sp0 - 0x114u, t1);
    wr32(sp0 - 0x118u, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10350ff8u), t1, COW_IMG(0x10351000u), in_esi);
    COW_AT(10018f0d)
    wr32(sp0 - 0x110u, sp0 - 0x104u);
    wr32(sp0 - 0x114u, sp0 - 0x108u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x11cu, 0xf003fu);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    wr32(sp0 - 0x130u, 0x80000002u);
    wr32(sp0 - 0x108u, 0u);
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x108u;
    g->esp = sp0 - 0x10cu;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329020u)), 9, 0x80000002u, sp0 - 0x100u, 0u, 0u, 0u, 0xf003fu, 0u, sp0 - 0x108u, sp0 - 0x104u);   /* advapi32.dll!RegCreateKeyExA */
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10018f3f)
    if (eax != 0u) goto L_10018f73;
    COW_AT(10018f43)
    if (rd32(self + 4u) == 0u)
    {
        loc_108 = 0u;
    }
    else
    {
        ecx = rd32(self + 4u);
    COW_AT(10018f4a)
        wr32(sp0 - 0x110u, ecx);
        g->eax = eax;
        g->esp = sp0 - 0x10cu;
        t4 = cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, ecx);   /* advapi32.dll!RegCloseKey */
        eax = t4;
    COW_AT(10018f51)
        wr32(self + 4u, 0u);
        loc_108 = rd32(sp0 - 0x108u);
    }
    COW_AT(10018f58)
    wr32(self + 4u, loc_108);
    if (eax != 0u) goto L_10018f73;
    COW_AT(10018f63)
    wr32(self + 8u, 1u);
    g->esi = rd32(sp0 - 0x10cu);
    return 1u;
L_10018f73: ;
    COW_AT(10018f73)
    g->esi = rd32(sp0 - 0x10cu);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10018ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10018f0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10018f3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        wr32(sp0 - 0x110u, sp0 - 0x104u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10018f43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        wr32(sp0 - 0x110u, sp0 - 0x104u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10018f4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        wr32(sp0 - 0x110u, sp0 - 0x104u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10018f51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x10018f58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x10018f63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x10018f73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10018ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10018ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
