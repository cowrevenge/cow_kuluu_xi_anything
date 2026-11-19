/* f_0x10019140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10019140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001915au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001915a;
    case 0x1001915eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001915e;
    case 0x10019169u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10019169;
    case 0x1001916eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001916e;
    case 0x10019176u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10019176;
    case 0x1001917bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001917b;
    case 0x1001918cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001918c;
    case 0x10019190u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10019190;
    case 0x10019192u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10019192;
    case 0x1001919eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1001919e;
    default: break;
    }
#endif

    COW_AT(10019140)
    wr32(COW_IMG(0x10456d24u), 0u);
    wr32(sp0 - 0xcu, 8u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103293f8u)), 2, sp0 - 8u, 8u);   /* winmm.dll!timeGetDevCaps */
    eax = t1;
    COW_AT(1001915a)
    if (eax != 0u) goto L_1001919e;
    COW_AT(1001915e)
    t2 = rd32(sp0 - 8u);
    if (rd32(sp0 - 8u) > 1u)
    {
        eax = t2;
        ecx = t2;
    }
    else
    {
        eax = t2;
    COW_AT(10019169)
        ecx = 1u;
    }
    COW_AT(1001916e)
    if (ecx >= rd32(sp0 - 4u))
    {
        edx = rd32(sp0 - 4u);
        goto L_10019190;
    }
    edx = rd32(sp0 - 4u);
    COW_AT(10019176)
    if (eax > 1u) goto L_10019192;
    COW_AT(1001917b)
    wr32(sp0 - 0xcu, 1u);
    wr32(COW_IMG(0x10456d24u), 1u);
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x1032940cu)), 1, 1u);   /* winmm.dll!timeBeginPeriod */
    COW_AT(1001918c)
    return;
L_10019190: ;
    COW_AT(10019190)
    eax = edx;
L_10019192: ;
    COW_AT(10019192)
    wr32(sp0 - 0xcu, eax);
    wr32(COW_IMG(0x10456d24u), eax);
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x1032940cu)), 1, eax);   /* winmm.dll!timeBeginPeriod */
L_1001919e: ;
    COW_AT(1001919e)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001915au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001915eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10019169u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001916eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10019176u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001917bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001918cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10019190u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10019192u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1001919eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10019140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
