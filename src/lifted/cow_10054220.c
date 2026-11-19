/* f_0x10054220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10054220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005422au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1005422a;
    case 0x1005422fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1005422f;
    case 0x10054233u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054233;
    case 0x10054237u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054237;
    case 0x10054239u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054239;
    case 0x10054246u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054246;
    case 0x1005424du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1005424d;
    case 0x10054254u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054254;
    case 0x10054258u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054258;
    case 0x1005425au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1005425a;
    case 0x10054267u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054267;
    case 0x10054272u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054272;
    case 0x10054276u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054276;
    case 0x10054278u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054278;
    case 0x10054280u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054280;
    case 0x10054290u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054290;
    case 0x10054294u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054294;
    case 0x10054296u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10054296;
    case 0x100542a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100542a1;
    case 0x100542a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100542a8;
    case 0x100542bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100542bb;
    case 0x100542ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100542cc;
    default: break;
    }
#endif

    COW_AT(10054220)
    if (rd32(self + 0x38u) == 0u) goto L_10054246;
    eax = rd32(self + 0x38u);
    COW_AT(1005422a)
    if (rd32(eax) == 0u) goto L_10054246;
    COW_AT(1005422f)
    if (eax == 0u)
    {
    COW_AT(10054237)
        eax = 0u;
    }
    else
    {
    COW_AT(10054233)
        eax = rd32(eax);
    }
    COW_AT(10054239)
    if (rd8(eax + 0xdcu) & 1u)
    {
        edx = in_edx;
        goto L_100542cc;
    }
L_10054246: ;
    COW_AT(10054246)
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_100542cc;
    }
    COW_AT(1005424d)
    if (rd32(self + 0x38u) == 0u)
    {
    COW_AT(10054258)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
    COW_AT(10054254)
        eax = rd32(eax);
    }
    COW_AT(1005425a)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x100496f0u), eax, eax, g->edx, 0, 1, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100542cc;
    }
    edx = t2;
    COW_AT(10054267)
    wr8(self + 0x3cu, 1u);
    if (rd32(self + 0x38u) == 0u)
    {
    COW_AT(10054276)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
    COW_AT(10054272)
        eax = rd32(eax);
    }
    COW_AT(10054278)
    if ((rd16(eax + 0x18u) & 0x7fffu) != 0u) goto L_100542cc;
    COW_AT(10054280)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, 1u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0x38u) == 0u)
    {
        ecx = t3;
        edx = t4;
    COW_AT(10054294)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x38u);
        ecx = t3;
        edx = t4;
    COW_AT(10054290)
        eax = rd32(eax);
    }
    COW_AT(10054296)
    if (!(rd8(eax + 0x1au) >> 2u & 1u)) goto L_100542cc;
    COW_AT(100542a1)
    if (rd32(self + 0x38u) == 0u) goto L_100542bb;
    esi = rd32(self + 0x38u);
    pf = PARITY((uint8_t)rd32(self + 0x38u));
    zf = rd32(self + 0x38u) == 0u;
    sf = (int32_t)rd32(self + 0x38u) < 0;
    COW_AT(100542a8)
    t5 = rd32(rd32(esi) + 0x14u);
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t5);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_100542bb: ;
    COW_AT(100542bb)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, rd32(0x14u));
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_100542cc: ;
    COW_AT(100542cc)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10054220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005422au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1005422fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054233u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054237u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054239u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054246u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1005424du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054254u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054258u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1005425au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054272u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054276u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054278u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054280u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054290u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054294u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10054296u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100542a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100542a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100542bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100542ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10054220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10054220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
