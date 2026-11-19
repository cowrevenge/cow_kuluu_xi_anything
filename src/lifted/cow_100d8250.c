/* f_0x100d8250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d82abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_esi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x204u); goto E_100d82ab;
    case 0x100d82b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_esi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x204u); goto E_100d82b9;
    case 0x100d82c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_esi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x204u); goto E_100d82c3;
    case 0x100d82e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d82e4;
    case 0x100d82ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x208u); in_esi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x204u); goto E_100d82ff;
    case 0x100d831bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d831b;
    case 0x100d831eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d831e;
    case 0x100d832bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100d832b;
    default: break;
    }
#endif

    COW_AT(100d8250)
    wr32(sp0 - 0x204u, in_esi);
    wr32(sp0 - 0x208u, in_edi);
    t1 = rd8(COW_IMG(0x103d3c84u));
    wr8(sp0 - 0x200u, (uint8_t)t1);
    wr8(sp0 - 0x100u, (uint8_t)t1);
    edi = sp0 - 0x1ffu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    edi = sp0 - 0xffu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x20cu, sp0 + 8u);
    wr32(sp0 - 0x210u, arg1);
    wr32(sp0 - 0x214u, 0x100u);
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    g->eax = sp0 + 8u;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x200u;
    t2 = cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x200u, 0x100u, arg1, sp0 + 8u, in_edi, in_esi);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100d82ab)
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        esi = eax;
        eax = rd32(COW_IMG(0x103601bcu));
        goto L_100d82ff;
    }
    esi = eax;
    eax = rd32(COW_IMG(0x103601bcu));
    COW_AT(100d82b9)
    if (rd8(eax + 0x18u) == 0u) goto L_100d82ff;
    ecx = eax + 0x18u;
    COW_AT(100d82c3)
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    t4 = rd32(eax + 0x7cu);
    wr32(sp0 - 0x210u, t4);
    wr32(sp0 - 0x214u, ecx);
    wr32(sp0 - 0x218u, COW_IMG(0x1035fc80u));
    wr32(sp0 - 0x21cu, 0x100u);
    wr32(sp0 - 0x220u, sp0 - 0x100u);
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0x208u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x100u, 0x100u, COW_IMG(0x1035fc80u), ecx, t4, sp0 - 0x200u);
    t5 = g->ecx;
    ecx = t5;
    COW_AT(100d82e4)
    t6 = rd32(COW_IMG(0x103601bcu));
    wr8(t6 + 0x18u, 0u);
    wr32(rd32(COW_IMG(0x103601bcu)) + 0x7cu, 0u);
    edx = t6;
L_100d831e: ;
    COW_AT(100d831e)
    wr32(sp0 - 0x20cu, sp0 - 0x100u);
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x100d8340u), g->eax, ecx, edx, 1, 1, sp0 - 0x100u);
    t9 = g->edx;
    edx = t9;
    COW_AT(100d832b)
    g->esi = rd32(sp0 - 0x204u);
    g->edi = rd32(sp0 - 0x208u);
    g->edx = edx;
    return esi;
L_100d82ff: ;
    COW_AT(100d82ff)
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    wr32(sp0 - 0x210u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x214u, 0x100u);
    wr32(sp0 - 0x218u, sp0 - 0x100u);
    g->ecx = sp0 - 0x200u;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x100u, 0x100u, COW_IMG(0x1034f7e0u), sp0 - 0x200u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    COW_AT(100d831b)
    goto L_100d831e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d8250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d82abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_esi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x218u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100d82b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_esi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x218u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100d82c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_esi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x218u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100d82e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x220u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100d82ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x208u);
        in_esi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x218u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x100d831bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x218u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100d831eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100d832bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x20cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d8250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
