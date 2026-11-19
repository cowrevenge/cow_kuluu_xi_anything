/* f_0x10265b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10265b30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10265b3du: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10265b3d;
    case 0x10265b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10265b46;
    case 0x10265b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10265b55;
    case 0x10265b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10265b64;
    case 0x10265b6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10265b6e;
    case 0x10265b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10265b78;
    default: break;
    }
#endif

    COW_AT(10265b30)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) != rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 4u);
        esi = rd32(sp0 + 8u);
        goto L_10265b46;
    }
    COW_AT(10265b3d)
    g->esi = in_esi;
    return 1u;
L_10265b46: ;
    COW_AT(10265b46)
    wr32(sp0 - 8u, sp0 + 4u);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a128u));
    wr32(sp0 - 0x10u, eax);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(eax)), rd32(eax), 3, eax, COW_IMG(0x1034a128u), sp0 + 4u);
    t1 = g->edx;
    edx = t1;
    COW_AT(10265b55)
    wr32(sp0 - 8u, sp0 + 8u);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a128u));
    wr32(sp0 - 0x10u, esi);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(esi)), sp0 + 8u, 3, esi, COW_IMG(0x1034a128u), sp0 + 8u);
    t2 = g->ecx;
    ecx = t2;
    COW_AT(10265b64)
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t3);
    g->edx = rd32(t3);
    t4 = rd32(t3);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t4 + 8u), ecx, 1, t3);
    t5 = g->edx;
    edx = t5;
    COW_AT(10265b6e)
    t6 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t6);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t6) + 8u), rd32(t6), 1, t6);
    COW_AT(10265b78)
    g->esi = rd32(sp0 - 4u);
    g->edx = rd32(sp0 + 4u);
    return rd32(sp0 + 4u) == rd32(sp0 + 8u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10265b30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10265b3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10265b46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10265b55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10265b64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10265b6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10265b78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10265b30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265b30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
