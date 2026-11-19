/* f_0x10069460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10069460(Guest* g)
{
    double d8;
    double d9;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10069470u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069470;
    case 0x10069477u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069477;
    case 0x10069481u: eax = g->eax; goto E_10069481;
    case 0x10069487u: eax = g->eax; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10069487;
    case 0x1006949fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006949f;
    case 0x100694c5u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100694c5;
    case 0x100694d2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100694d2;
    case 0x100694e2u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100694e2;
    case 0x100694e7u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100694e7;
    default: break;
    }
#endif

    COW_AT(10069460)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        loc_4 = rd32(self);
        goto L_100694e2;
    }
    eax = rd32(self + 4u);
    loc_4 = rd32(self);
    COW_AT(10069470)
    t1 = rd32(COW_IMG(0x10069500u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10069477u: goto L_10069477;
    case 0x1006949fu: goto L_1006949f;
    case 0x100694c5u: goto L_100694c5;
    case 0x100694d2u: goto L_100694d2;
    default: rt_fatal(g, COW_IMG(0x10069470u), "switch");
    }
    return 0;
L_10069477: ;
    COW_AT(10069477)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t12 = cow_divs(g, t11, rd32(sp0 + 8u));
    t13 = cow_mods(g, t11, rd32(sp0 + 8u));
    eax = t12;
L_10069481: ;
    COW_AT(10069481)
    wr32(sp0 - 4u, eax);
    loc_4 = eax;
    eax = 0u;
    loc_8 = rd32(sp0 - 8u);
L_10069487: ;
    COW_AT(10069487)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 4u, 2, sp0 - 4u, eax);
    t15 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t15;
    return arg1;
L_1006949f: ;
    COW_AT(1006949f)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = fr(g, d8 / (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)d9);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t7, 2, sp0 + 8u, 2u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return arg1;
L_100694c5: ;
    COW_AT(100694c5)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t4 = cow_divu(g, t3, rd32(sp0 + 8u));
    t5 = cow_modu(g, t3, rd32(sp0 + 8u));
    eax = t4;
    goto L_10069481;
L_100694d2: ;
    COW_AT(100694d2)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    wr32(sp0 - 4u, t2);
    eax = 3u;
    loc_4 = t2;
    loc_8 = in_esi;
    goto L_10069487;
L_100694e2: ;
    COW_AT(100694e2)
    if (eax != 2u)
    {
        loc_8 = in_esi;
        goto L_10069487;
    }
    COW_AT(100694e7)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10069460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10069470u:
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
    case 0x10069477u:
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
    case 0x10069481u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10069487u:
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
    case 0x1006949fu:
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
    case 0x100694c5u:
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
    case 0x100694d2u:
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
    case 0x100694e2u:
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
    case 0x100694e7u:
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
void cow_adapter_10069460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10069460(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
