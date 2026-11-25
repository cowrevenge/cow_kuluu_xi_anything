/* f_0x100d6670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d6670(Guest* g)
{
    double d17;
    double d21;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d667eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100d667e;
    case 0x100d6682u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100d6682;
    case 0x100d6692u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d6692;
    case 0x100d66a0u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100d66a0;
    case 0x100d66b0u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100d66b0;
    case 0x100d66b7u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66b7;
    case 0x100d66bcu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66bc;
    case 0x100d66cbu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66cb;
    case 0x100d66dcu: eax = g->eax; edx = g->edx; in_edi = g->edi; goto E_100d66dc;
    case 0x100d66ebu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66eb;
    case 0x100d66f5u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66f5;
    case 0x100d66f9u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d66f9;
    case 0x100d670au: eax = g->eax; edx = g->edx; in_edi = g->edi; goto E_100d670a;
    case 0x100d6719u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100d6719;
    case 0x100d672au: eax = g->eax; edx = g->edx; in_edi = g->edi; goto E_100d672a;
    case 0x100d673au: eax = g->eax; edx = g->edx; in_edi = g->edi; goto E_100d673a;
    default: break;
    }
#endif

    COW_AT(100d6670)
    wr32(sp0 - 0x14u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0xbcu), self, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100d667e)
    if ((uint8_t)eax == 0x80u) goto L_100d66b0;
    COW_AT(100d6682)
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->eax = eax;
    g->edx = edx;
    t4 = rd32(self);
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(t4 + 0xbcu), self, 1, sp0 - 0x10u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    edi = t4;
    COW_AT(100d6692)
    wr32(sp0 - 0x1cu, (uint8_t)eax);
    g->eax = (uint8_t)eax;
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, rd32(edi + 0x1c8u), self, 1, (uint8_t)eax);
    eax = t7;
    COW_AT(100d66a0)
    t8 = rd32(sp0 - 0xcu);
    t9 = rd32(sp0 - 0x18u);
    wr32(COW_IMG(0x10456da8u), t8);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = t9;
    g->edx = t8;
    return eax;
L_100d66b0: ;
    COW_AT(100d66b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(100d66b7)
    if (eax > 8u) goto L_100d673a;
    COW_AT(100d66bc)
    t12 = rd32(COW_IMG(0x100d6740u) + rd8(COW_IMG(0x100d674cu) + eax) * 4u);
    switch (t12 - RD)
    {
    case 0x100d66cbu: goto L_100d66cb;
    case 0x100d66ebu: goto L_100d66eb;
    case 0x100d673au: goto L_100d673a;
    default: rt_fatal(g, COW_IMG(0x100d66c4u), "switch");
    }
    return 0;
L_100d66cb: ;
    COW_AT(100d66cb)
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t22 = rd32(self);
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, rd32(t22 + 0x1c8u), self, 2, 7u, sp0 - 0x10u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(100d66dc)
    t25 = rd32(sp0 - 0xcu);
    t26 = rd32(sp0 - 0x14u);
    wr32(COW_IMG(0x10456da8u), t25);
    g->esi = t26;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_100d66eb: ;
    COW_AT(100d66eb)
    if (rd8(self + 0x878u) == 2u) goto L_100d6719;
    eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
    COW_AT(100d66f5)
    if ((uint8_t)eax == 1u) goto L_100d6719;
    COW_AT(100d66f9)
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t13 = rd32(self);
    g->esp = sp0 - 0x14u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1c8u), self, 2, 7u, sp0 - 0x10u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100d670a)
    t16 = rd32(sp0 - 0x14u);
    d17 = (double)rdf32(sp0 - 0xcu);
    wrf32(COW_IMG(0x10456da8u), (float)d17);
    g->esi = t16;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_100d6719: ;
    COW_AT(100d6719)
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 5u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t18 = rd32(self);
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, rd32(t18 + 0x1c8u), self, 2, 5u, sp0 - 0x10u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(100d672a)
    d21 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329a34u)));
    wrf32(COW_IMG(0x10456da8u), (float)d21);
L_100d673a: ;
    COW_AT(100d673a)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d6670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d667eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d6682u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d6692u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d66a0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100d66b0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66b7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66bcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66cbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66dcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d66ebu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66f5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d66f9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d670au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d6719u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100d672au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d673au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d6670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
