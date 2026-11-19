/* f_0x10252c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252c50(Guest* g)
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
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10252c59u: ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252c59;
    case 0x10252c5eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252c5e;
    case 0x10252c6cu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10252c6c;
    case 0x10252c7au: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10252c7a;
    case 0x10252c87u: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10252c87;
    case 0x10252c8fu: eax = g->eax; ecx = g->ecx; esi = g->esi; goto E_10252c8f;
    case 0x10252c97u: ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252c97;
    default: break;
    }
#endif

    COW_AT(10252c50)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) == 0u) goto L_10252c97;
    esi = rd32(sp0 + 4u);
    COW_AT(10252c59)
    if ((rd8(esi) & 4u) == 0u) goto L_10252c97;
    COW_AT(10252c5e)
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t1);
    t2 = rd32(esi + 8u);
    wr32(sp0 - 0xcu, t2);
    g->ecx = t2;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10270430u), 2, t2, t1);
    t3 = g->ecx;
    ecx = t3;
    COW_AT(10252c6c)
    wr32(sp0 - 0x10u, sp0 + 4u);
    t4 = rd32(esi + 8u);
    wr32(sp0 - 0x14u, t4);
    g->eax = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x102702b0u), 2, t4, sp0 + 4u);
    eax = t5;
    COW_AT(10252c7a)
    if ((rd8(sp0 + 4u) & 4u) == 0u)
    {
        eax = rd32(esi);
        goto L_10252c8f;
    }
    eax = rd32(esi);
    COW_AT(10252c87)
    t6 = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
    wr32(esi, t6);
    g->esi = rd32(sp0 - 4u);
    return 0u;
L_10252c8f: ;
    COW_AT(10252c8f)
    t7 = (eax & 0xffffff00u) | (eax & 0xf7u);
    wr32(esi, t7);
    g->esi = rd32(sp0 - 4u);
    return 0u;
L_10252c97: ;
    COW_AT(10252c97)
    g->esi = in_esi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252c50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252c59u:
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
    case 0x10252c5eu:
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
    case 0x10252c6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10252c7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10252c87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10252c8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10252c97u:
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
void cow_adapter_10252c50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10252c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
