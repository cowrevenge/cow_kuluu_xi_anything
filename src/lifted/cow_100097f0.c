/* f_0x100097f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100097f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100097fdu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100097fd;
    case 0x10009808u: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10009808;
    case 0x1000980fu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1000980f;
    case 0x10009813u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10009813;
    case 0x1000981au: ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1000981a;
    case 0x10009828u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10009828;
    case 0x10009833u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10009833;
    case 0x10009846u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10009846;
    case 0x1000984du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1000984d;
    default: break;
    }
#endif

    COW_AT(100097f0)
    if (rd32(COW_IMG(0x10456bf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456bf8u));
        edx = in_edx;
        goto L_1000984d;
    }
    COW_AT(100097fd)
    if (arg1 > 6u)
    {
        ecx = self;
        edx = in_edx;
        esi = 0u;
        goto L_10009828;
    }
    COW_AT(10009808)
    t1 = rd32(COW_IMG(0x10009854u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x1000980fu: goto L_1000980f;
    case 0x10009813u: goto L_10009813;
    case 0x1000981au: goto L_1000981a;
    default: rt_fatal(g, COW_IMG(0x10009808u), "switch");
    }
    return 0;
L_1000980f: ;
    COW_AT(1000980f)
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_10009828: ;
    COW_AT(10009828)
    if (rd32(esi * 4u + self + 0xa04u) != 0u)
    {
        eax = rd32(esi * 4u + self + 0xa04u);
    }
    else
    {
        eax = rd32(esi * 4u + self + 0xa04u);
    COW_AT(10009833)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_stdcall(g, rd32(COW_IMG(0x1032937cu)), 2, eax, 0x7f00u);   /* user32.dll!LoadCursorA */
        t7 = g->ecx;
        t8 = g->edx;
        wr32(esi * 4u + self + 0xa04u, t6);
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    COW_AT(10009846)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329380u)), 1, eax);   /* user32.dll!SetCursor */
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_1000984d: ;
    COW_AT(1000984d)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10009813: ;
    COW_AT(10009813)
    ecx = self;
    edx = in_edx;
    esi = 1u;
    goto L_10009828;
L_1000981a: ;
    COW_AT(1000981a)
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x101245c0u), arg1, t2, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    esi = (uint32_t)(int16_t)t3;
    goto L_10009828;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100097f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100097fdu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10009808u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1000980fu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10009813u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1000981au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10009828u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10009833u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10009846u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1000984du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100097f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100097f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
