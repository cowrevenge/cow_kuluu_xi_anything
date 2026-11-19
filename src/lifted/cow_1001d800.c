/* f_0x1001d800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1001d800(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001d818u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1001d818;
    case 0x1001d81fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1001d81f;
    case 0x1001d831u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1001d831;
    case 0x1001d841u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001d841;
    case 0x1001d84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001d84e;
    case 0x1001d871u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001d871;
    case 0x1001d87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001d87f;
    case 0x1001d88cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1001d88c;
    case 0x1001d8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1001d8b2;
    case 0x1001d8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1001d8b9;
    case 0x1001d8bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1001d8bc;
    default: break;
    }
#endif

    COW_AT(1001d800)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if ((rd8(self + 0x30u) >> 4u & 7u) > 3u)
    {
        eax = rd8(self + 0x30u) >> 4u & 7u;
        goto L_1001d831;
    }
    eax = rd8(self + 0x30u) >> 4u & 7u;
    COW_AT(1001d818)
    t1 = rd32(COW_IMG(0x1001d8c4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1001d81fu: goto L_1001d81f;
    case 0x1001d84eu: edx = in_edx; loc_14 = in_esi; loc_18 = in_edi; goto L_1001d84e;
    default: rt_fatal(g, COW_IMG(0x1001d818u), "switch");
    }
    return 0;
L_1001d81f: ;
    COW_AT(1001d81f)
    wr32(sp0 - 0x1cu, self);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_stdcall(g, COW_IMG(0x10017d50u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd8(self + 0x30u) >> 4u & 7u;
    wr32(sp0 - 0x20u, t5);
    eax = t5;
    ecx = t3;
    edx = t4;
L_1001d841: ;
    COW_AT(1001d841)
    wr32(sp0 - 0x24u, COW_IMG(0x103511f4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t10 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_1001d84e: ;
    COW_AT(1001d84e)
    wr32(sp0 - 0x1cu, self + 0x31u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t12 = cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, edx, 1, self + 0x31u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    t13 = rd32(COW_IMG(0x1047b970u));
    t14 = cow_thiscall(g, COW_IMG(0x1003aea0u), t13, 3, sp0 - 0x10u, self, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t16;
        edi = t14;
        goto L_1001d8b9;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(1001d871)
    wr32(sp0 - 0x1cu, 0x48u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x48u);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t18;
        goto L_1001d8bc;
    }
    eax = t17;
    edx = t18;
    COW_AT(1001d87f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_thiscall(g, COW_IMG(0x10039920u), eax, 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_1001d8bc;
    }
    eax = t19;
    edx = t20;
    edi = t19;
    COW_AT(1001d88c)
    wr32(sp0 - 0x1cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_thiscall(g, COW_IMG(0x1001d8e0u), self, 1, edi);
    t22 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    g->edx = t22;
    t23 = cow_stdcall(g, COW_IMG(0x1003ab80u), 1, edi);
    t24 = g->edx;
    g->edx = t24;
    cow_thiscall(g, COW_IMG(0x10071f50u), self, 0);
    t25 = g->edx;
    if (rd8(rd32(COW_IMG(0x1047b970u)) + 0x10u) != 1u)
    {
        eax = rd32(COW_IMG(0x1047b970u));
        edx = t25;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047b970u));
        edx = t25;
    COW_AT(1001d8b2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t26 = cow_thiscall(g, COW_IMG(0x10039a30u), edi, 0);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
L_1001d8b9: ;
    COW_AT(1001d8b9)
    wr32(edi + 4u, rd32(edi + 4u) + 1u);
L_1001d8bc: ;
    COW_AT(1001d8bc)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
L_1001d831: ;
    COW_AT(1001d831)
    wr32(sp0 - 0x1cu, self);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_stdcall(g, COW_IMG(0x10017d50u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd8(self + 0x30u) >> 4u & 7u;
    wr32(sp0 - 0x20u, t9);
    eax = t6;
    ecx = t9;
    edx = t8;
    goto L_1001d841;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001d800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001d818u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = self;
        g->edi = self + 0x31u;
        (void)sp0;
        return 1;
    }
    case 0x1001d81fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = self;
        g->edi = self + 0x31u;
        (void)sp0;
        return 1;
    }
    case 0x1001d831u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = self;
        g->edi = self + 0x31u;
        (void)sp0;
        return 1;
    }
    case 0x1001d841u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x31u;
        (void)sp0;
        return 1;
    }
    case 0x1001d84eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = self + 0x31u;
        (void)sp0;
        return 1;
    }
    case 0x1001d871u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001d87fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001d88cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001d8b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001d8b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001d8bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001d800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
