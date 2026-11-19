/* f_0x10072850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10072850(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10072863u: g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10072863;
    case 0x1007286fu: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1007286f;
    case 0x10072873u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10072873;
    case 0x1007287cu: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1007287c;
    case 0x1007288au: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1007288a;
    case 0x10072894u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10072894;
    case 0x10072898u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10072898;
    case 0x100728a1u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728a1;
    case 0x100728a8u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728a8;
    case 0x100728acu: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728ac;
    case 0x100728aeu: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728ae;
    case 0x100728b2u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728b2;
    case 0x100728c1u: eax = g->eax; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100728c1;
    default: break;
    }
#endif

    COW_AT(10072850)
    wr8(COW_IMG(0x1047d134u), (uint8_t)arg7);
    if (arg2 == 0u) goto L_100728b2;
    COW_AT(10072863)
    eax = arg2;
L_1007286f: ;
    COW_AT(1007286f)
    if (arg3 != 0u) goto L_1007288a;
    COW_AT(10072873)
    if ((rd32(eax + 0x20u) & arg5) != arg4) goto L_100728a1;
L_1007287c: ;
    COW_AT(1007287c)
    t2 = rd32(eax + 0x14u);
    wr32(arg1, t2);
    return;
L_1007288a: ;
    COW_AT(1007288a)
    if ((rd32(eax + 0x24u) & 0x7fu) != arg3) goto L_100728a1;
    COW_AT(10072894)
    if (arg4 == 0u) goto L_1007287c;
    COW_AT(10072898)
    if ((rd32(eax + 0x20u) & arg5) == arg4) goto L_100728c1;
L_100728a1: ;
    COW_AT(100728a1)
    if (rd32(eax + 8u) == 0u)
    {
    COW_AT(100728ac)
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
    COW_AT(100728a8)
        eax = rd32(eax);
    }
    COW_AT(100728ae)
    if (eax != 0u) goto L_1007286f;
L_100728b2: ;
    COW_AT(100728b2)
    wr32(arg1, 0u);
    return;
L_100728c1: ;
    COW_AT(100728c1)
    t1 = rd32(eax + 0x14u);
    wr32(arg1, t1);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10072850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10072863u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007286fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10072873u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1007287cu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007288au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10072894u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10072898u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100728a1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100728a8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100728acu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100728aeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        g->ecx = arg4;
        g->edx = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100728b2u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100728c1u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10072850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10072850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
