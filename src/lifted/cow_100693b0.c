/* f_0x100693b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100693b0(Guest* g)
{
    double d6;
    double d7;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100693c0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100693c0;
    case 0x100693c7u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100693c7;
    case 0x100693ccu: eax = g->eax; goto E_100693cc;
    case 0x100693d7u: eax = g->eax; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100693d7;
    case 0x100693efu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100693ef;
    case 0x10069415u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069415;
    case 0x1006941cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006941c;
    case 0x1006942cu: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006942c;
    case 0x10069431u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069431;
    default: break;
    }
#endif

    COW_AT(100693b0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        loc_4 = rd32(self);
        goto L_1006942c;
    }
    eax = rd32(self + 4u);
    loc_4 = rd32(self);
    COW_AT(100693c0)
    t1 = rd32(COW_IMG(0x1006944cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100693c7u: goto L_100693c7;
    case 0x100693efu: goto L_100693ef;
    case 0x10069415u: goto L_10069415;
    case 0x1006941cu: goto L_1006941c;
    default: rt_fatal(g, COW_IMG(0x100693c0u), "switch");
    }
    return 0;
L_100693c7: ;
    COW_AT(100693c7)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    eax = t9;
L_100693cc: ;
    COW_AT(100693cc)
    t10 = eax * rd32(sp0 + 8u);
    wr32(sp0 - 4u, t10);
    eax = 0u;
    loc_4 = t10;
    loc_8 = rd32(sp0 - 8u);
L_100693d7: ;
    COW_AT(100693d7)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 4u, 2, sp0 - 4u, eax);
    t12 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t12;
    return arg1;
L_100693ef: ;
    COW_AT(100693ef)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t5 = g->edx;
    d6 = cow_take_float(g);
    d7 = fr(g, d6 * (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)d7);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t5, 2, sp0 + 8u, 2u);
    t8 = g->edx;
    g->esi = in_esi;
    g->edx = t8;
    return arg1;
L_10069415: ;
    COW_AT(10069415)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    eax = t3;
    goto L_100693cc;
L_1006941c: ;
    COW_AT(1006941c)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    wr32(sp0 - 4u, t2);
    eax = 3u;
    loc_4 = t2;
    loc_8 = in_esi;
    goto L_100693d7;
L_1006942c: ;
    COW_AT(1006942c)
    if (eax != 2u)
    {
        loc_8 = in_esi;
        goto L_100693d7;
    }
    COW_AT(10069431)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t11 = g->edx;
    g->esi = in_esi;
    g->edx = t11;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100693b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100693c0u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100693c7u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100693ccu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100693d7u:
    {
        uint32_t eax;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100693efu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10069415u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006941cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006942cu:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10069431u:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100693b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100693b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
