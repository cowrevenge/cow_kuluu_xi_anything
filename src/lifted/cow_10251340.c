/* f_0x10251340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10251340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10251349u: ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10251349;
    case 0x1025134eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025134e;
    case 0x1025135eu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1025135e;
    case 0x1025136cu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_1025136c;
    case 0x10251379u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10251379;
    case 0x10251381u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10251381;
    case 0x10251389u: ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10251389;
    default: break;
    }
#endif

    COW_AT(10251340)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) == 0u) goto L_10251389;
    esi = rd32(sp0 + 4u);
    COW_AT(10251349)
    if ((rd8(esi) & 0x10u) == 0u) goto L_10251389;
    COW_AT(1025134e)
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, 4u);
    t2 = rd32(esi + 0xcu);
    wr32(sp0 - 0x10u, t2);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026f920u), t2, 3, t2, 4u, t1);
    t3 = g->ecx;
    ecx = t3;
    COW_AT(1025135e)
    wr32(sp0 - 0x14u, sp0 + 4u);
    t4 = rd32(esi + 0xcu);
    wr32(sp0 - 0x18u, t4);
    g->eax = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x1026f7d0u), 2, t4, sp0 + 4u);
    eax = t5;
    COW_AT(1025136c)
    if ((rd8(sp0 + 4u) & 2u) == 0u)
    {
        eax = rd32(esi);
        goto L_10251381;
    }
    eax = rd32(esi);
    COW_AT(10251379)
    t6 = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
    wr32(esi, t6);
    g->esi = rd32(sp0 - 4u);
    return 0u;
L_10251381: ;
    COW_AT(10251381)
    t7 = (eax & 0xffffff00u) | (eax & 0xfdu);
    wr32(esi, t7);
    g->esi = rd32(sp0 - 4u);
    return 0u;
L_10251389: ;
    COW_AT(10251389)
    g->esi = in_esi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10251340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10251349u:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025134eu:
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
    case 0x1025135eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1025136cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251379u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251381u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251389u:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10251340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10251340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
