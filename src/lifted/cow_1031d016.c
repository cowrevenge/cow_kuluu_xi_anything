/* f_0x1031d016 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1031d016(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031d02eu: self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031d02e;
    case 0x1031d03du: eax = g->eax; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_1031d03d;
    case 0x1031d045u: eax = g->eax; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1031d045;
    case 0x1031d053u: eax = g->eax; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1031d053;
    case 0x1031d05du: eax = g->eax; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1031d05d;
    case 0x1031d063u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1031d063;
    case 0x1031d06cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031d06c;
    default: break;
    }
#endif

    COW_AT(1031d016)
    if (rd32(COW_IMG(0x103d29e0u) + arg1 * 4u) != 0u)
    {
        eax = arg1;
        ecx = self;
        edx = in_edx;
        goto L_1031d06c;
    }
    COW_AT(1031d02e)
    g->eax = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, self, in_edx, 1, 3, 0x18u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        edi = t1;
        goto L_1031d045;
    }
    eax = t1;
    edx = t2;
    COW_AT(1031d03d)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x1031680cu), 1, 0x11u);
    rt_fatal(g, COW_IMG(0x1031d03fu), "no way on");
    return 0;
L_1031d045: ;
    COW_AT(1031d045)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, 0x18u, edx, 1, 3, 0x11u, in_edi, in_esi);
    t4 = g->edx;
    if (rd32(COW_IMG(0x103d29e0u) + arg1 * 4u) != 0u)
    {
        eax = t3;
        edx = t4;
        loc_10 = edi;
    COW_AT(1031d05d)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, 0x11u, edx, 1, 3, loc_10, in_edi, in_esi);
        t9 = g->edx;
        eax = t8;
        ecx = loc_10;
        edx = t9;
    }
    else
    {
        eax = t3;
        edx = t4;
        loc_10 = edi;
    COW_AT(1031d053)
        g->eax = eax;
        g->ecx = 0x11u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, loc_10);   /* kernel32.dll!InitializeCriticalSection */
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x103d29e0u) + arg1 * 4u, edi);
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    COW_AT(1031d063)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x11u, in_edi, in_esi);
    t11 = g->edx;
    eax = t10;
    ecx = 0x11u;
    edx = t11;
L_1031d06c: ;
    COW_AT(1031d06c)
    t12 = rd32(COW_IMG(0x103d29e0u) + arg1 * 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t12);   /* kernel32.dll!EnterCriticalSection */
    t14 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t14;
    return t13;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031d016(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031d02eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d03du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ecx = 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d045u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d053u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x11u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d05du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0x11u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d063u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031d06cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d29e0u) + arg1 * 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d016(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031d016(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
