/* f_0x10273ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10273ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10273ebfu: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273ebf;
    case 0x10273ec8u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273ec8;
    case 0x10273ecdu: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273ecd;
    case 0x10273edfu: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273edf;
    case 0x10273ef1u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273ef1;
    case 0x10273ef5u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273ef5;
    case 0x10273efeu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273efe;
    case 0x10273f27u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273f27;
    case 0x10273f34u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273f34;
    case 0x10273f57u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10273f57;
    default: break;
    }
#endif

    COW_AT(10273ea0)
    if ((rd32(arg2 * 0xcu + rd32(arg1 + 0x10u)) & 2u) == 0u) goto L_10273f57;
    ecx = rd32(arg2 * 0xcu + rd32(arg1 + 0x10u));
    esi = arg2 * 0xcu + rd32(arg1 + 0x10u);
    COW_AT(10273ebf)
    if (arg3 != 0xffffffffu) goto L_10273ef1;
    COW_AT(10273ec8)
    if ((ecx & 4u) == 0u) goto L_10273edf;
    COW_AT(10273ecd)
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10273ea0u), 5, arg1, arg2, 0u, in_edi, in_esi);
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(arg1 + 4u);
L_10273edf: ;
    COW_AT(10273edf)
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10273ea0u), 5, arg1, arg2, 1u, in_edi, in_esi);
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(arg1 + 4u);
L_10273ef1: ;
    COW_AT(10273ef1)
    if (arg3 == 0u) goto L_10273f27;
    COW_AT(10273ef5)
    wr32(arg1 + 4u, arg2);
    if ((rd8(esi) & 4u) != 0u) goto L_10273f57;
    COW_AT(10273efe)
    t1 = rd32(esi + 4u);
    g->eax = t1;
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1026f920u), ecx, 3, t1, 4u, 1u);
    t3 = g->edx;
    t4 = rd32(esi + 8u);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026f920u), t4, 3, t4, 4u, 1u);
    t5 = (rd32(esi) & 0xffffff00u) | (uint8_t)(rd32(esi) | 4u);
    wr32(esi, t5);
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(arg1 + 4u);
L_10273f27: ;
    COW_AT(10273f27)
    wr32(arg1 + 4u, 0xffffffffu);
    if ((rd8(esi) & 4u) != 0u)
    {
        eax = (arg2 & 0xffffff00u) | rd8(esi);
    COW_AT(10273f34)
        t6 = rd32(esi + 4u);
        g->edx = t6;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026f920u), ecx, 3, t6, 0u, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd32(esi + 8u);
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026f920u), t7, 3, t9, 0u, 0u);
        t10 = (rd32(esi) & 0xffffff00u) | (rd32(esi) & 0xfbu);
        wr32(esi, t10);
    }
L_10273f57: ;
    COW_AT(10273f57)
    g->esi = in_esi;
    g->edi = in_edi;
    return rd32(arg1 + 4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10273ea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10273ebfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273ec8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273ecdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273edfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273ef1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273ef5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273efeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273f27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273f34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10273f57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10273ea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10273ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
