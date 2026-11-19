/* f_0x101458f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101458f0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t of;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10145923u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10145923;
    case 0x10145933u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10145933;
    case 0x10145973u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10145973;
    case 0x1014597au: edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1014597a;
    case 0x10145983u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10145983;
    case 0x10145988u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10145988;
    case 0x101459b2u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101459b2;
    case 0x101459bcu: eax = g->eax; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101459bc;
    default: break;
    }
#endif

    COW_AT(101458f0)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr16(sp0 - 0x28u, 0u);
    wr16(sp0 - 0x26u, 0u);
    wr16(sp0 - 0x24u, 0u);
    wr16(sp0 - 0x22u, 0u);
    wr8(self + 0x34u, rd8(COW_IMG(0x10485640u)));
    wr8(self + 0x35u, rd8(COW_IMG(0x10485642u)));
    esi = 1u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
    loc_2c = in_esi;
    loc_30 = in_edi;
L_10145923: ;
    COW_AT(10145923)
    if ((rd32(self + 0x18u) & 1u << (esi & 0x1fu)) == 0u)
    {
        eax = rd32(self + 0x18u);
        edx = 1u << (esi & 0x1fu);
    }
    else
    {
        edx = 1u << (esi & 0x1fu);
    COW_AT(10145933)
        wr32(sp0 - 0x34u, 1u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, esi);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        g->edi = self;
        g->eax = sp0 - 0x28u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t1 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x28u, esi, 1u, 1u);
        t2 = g->edx;
        t3 = (uint32_t)(int8_t)rd8(esi + self + 0x1cu);
        wr32(sp0 - 0x34u, t3);
        wr32(sp0 - 0x38u, 0x5au);
        wr32(sp0 - 0x3cu, 0xau);
        g->ecx = t3;
        g->esp = sp0 - 0x34u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5au);
        t5 = g->ecx;
        wr32(sp0 - 0x38u, t4);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t4, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
        if (esi != rd8(self + 0x34u))
        {
    COW_AT(1014597a)
            if (esi != rd8(self + 0x35u))
            {
                eax = 0x80808080u;
            }
            else
            {
    COW_AT(10145983)
                eax = 0x804070a0u;
            }
        }
        else
        {
    COW_AT(10145973)
            eax = 0x80e09620u;
        }
    COW_AT(10145988)
        wr32(sp0 - 0x34u, 0x3f800000u);
        wr32(sp0 - 0x38u, 0x3f800000u);
        wr32(sp0 - 0x3cu, 1u);
        wr32(sp0 - 0x40u, eax);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        t6 = rd32(sp0 - 0x26u) + 2u;
        wr32(sp0 - 0x48u, t6);
        t7 = rd32(sp0 - 0x24u) + 0x1eu;
        wr32(sp0 - 0x4cu, t7);
        g->eax = sp0 - 0x20u;
        g->edx = t7;
        g->esp = sp0 - 0x30u;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t6, 7, t7, t6, sp0 - 0x20u, eax, 1u, 0x3f800000u, 0x3f800000u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(101459b2)
    if ((int32_t)(esi + 1u) < 24)
    {
        cf = esi + 1u < 0x18u;
        pf = PARITY((uint8_t)(esi - 0x17u));
        zf = esi == 0x17u;
        sf = (int32_t)(esi - 0x17u) < 0;
        of = ((esi + 1u ^ 0x18u) & (esi + 1u ^ esi - 0x17u)) >> 0x1fu;
        esi = esi + 1u;
        goto L_10145923;
    }
    COW_AT(101459bc)
    g->esi = loc_2c;
    g->edi = loc_30;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101458f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10145923u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10145933u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10145973u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1014597au:
    {
        uint32_t cf;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->eax = 0x80808080u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10145983u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10145988u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101459b2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101459bcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101458f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101458f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
