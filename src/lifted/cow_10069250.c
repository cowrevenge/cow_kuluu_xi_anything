/* f_0x10069250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10069250(Guest* g)
{
    double d7;
    double d8;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    case 0x10069260u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069260;
    case 0x10069267u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10069267;
    case 0x1006926cu: eax = g->eax; goto E_1006926c;
    case 0x10069276u: eax = g->eax; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10069276;
    case 0x1006928eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006928e;
    case 0x100692b4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100692b4;
    case 0x100692bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100692bb;
    case 0x100692cfu: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100692cf;
    case 0x100692d4u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100692d4;
    default: break;
    }
#endif

    COW_AT(10069250)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        loc_4 = rd32(self);
        goto L_100692cf;
    }
    eax = rd32(self + 4u);
    loc_4 = rd32(self);
    COW_AT(10069260)
    t1 = rd32(COW_IMG(0x100692ecu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10069267u: goto L_10069267;
    case 0x1006928eu: goto L_1006928e;
    case 0x100692b4u: goto L_100692b4;
    case 0x100692bbu: goto L_100692bb;
    default: rt_fatal(g, COW_IMG(0x10069260u), "switch");
    }
    return 0;
L_10069267: ;
    COW_AT(10069267)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    eax = t10;
L_1006926c: ;
    COW_AT(1006926c)
    t11 = eax + rd32(sp0 + 8u);
    wr32(sp0 - 4u, t11);
    eax = 0u;
    loc_4 = t11;
    loc_8 = rd32(sp0 - 8u);
L_10069276: ;
    COW_AT(10069276)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 4u, 2, sp0 - 4u, eax);
    t13 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t13;
    return arg1;
L_1006928e: ;
    COW_AT(1006928e)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t6 = g->edx;
    d7 = cow_take_float(g);
    d8 = fr(g, d7 + (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)d8);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t6, 2, sp0 + 8u, 2u);
    t9 = g->edx;
    g->esi = in_esi;
    g->edx = t9;
    return arg1;
L_100692b4: ;
    COW_AT(100692b4)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    eax = t4;
    goto L_1006926c;
L_100692bb: ;
    COW_AT(100692bb)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    t3 = t2 + rd32(sp0 + 8u);
    wr32(sp0 - 4u, t3);
    eax = 3u;
    loc_4 = t3;
    loc_8 = in_esi;
    goto L_10069276;
L_100692cf: ;
    COW_AT(100692cf)
    if (eax != 2u)
    {
        loc_8 = in_esi;
        goto L_10069276;
    }
    COW_AT(100692d4)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10069250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10069260u:
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
    case 0x10069267u:
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
    case 0x1006926cu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10069276u:
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
    case 0x1006928eu:
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
    case 0x100692b4u:
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
    case 0x100692bbu:
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
    case 0x100692cfu:
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
    case 0x100692d4u:
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
void cow_adapter_10069250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10069250(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
