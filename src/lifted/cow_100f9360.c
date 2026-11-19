/* f_0x100f9360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f9360(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f936au: in_eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f936a;
    case 0x100f9373u: in_eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f9373;
    case 0x100f9378u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f9378;
    case 0x100f939cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f939c;
    case 0x100f939fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f939f;
    default: break;
    }
#endif

    COW_AT(100f9360)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100f939c;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100f936a)
    if (rd32(edx + 0x3aeacu) != 1u) goto L_100f9378;
    COW_AT(100f9373)
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100f9430u), in_eax, self, edx);
L_100f9378: ;
    COW_AT(100f9378)
    edi = edx + 0x2d694u;
    eax = 0u;
    ecx = 0x3607u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xf4u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100f939f;
    }
    eax = t1;
L_100f939c: ;
    COW_AT(100f939c)
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100f939f: ;
    COW_AT(100f939f)
    wr32(eax + 4u, 1u);
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
    g->edi = in_edi;
    return (t4 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f9360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f936au:
    {
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f9373u:
    {
        uint32_t edx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f9378u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f939cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f939fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f9360(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
