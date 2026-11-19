/* f_0x10092b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10092b20(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10092b30u: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b30;
    case 0x10092b3au: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b3a;
    case 0x10092b3eu: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b3e;
    case 0x10092b42u: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b42;
    case 0x10092b46u: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b46;
    case 0x10092b4au: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b4a;
    case 0x10092b52u: eax = g->eax; self = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092b52;
    case 0x10092b7au: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10092b7a;
    case 0x10092b84u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10092b84;
    case 0x10092b93u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10092b93;
    case 0x10092b9du: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10092b9d;
    case 0x10092bb0u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bb0;
    case 0x10092bbcu: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bbc;
    case 0x10092bccu: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bcc;
    case 0x10092bd8u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bd8;
    case 0x10092beau: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bea;
    case 0x10092bf6u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092bf6;
    case 0x10092c06u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092c06;
    case 0x10092c12u: eax = g->eax; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10092c12;
    default: break;
    }
#endif

    COW_AT(10092b20)
    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
    COW_AT(10092b30)
        if (rd8(self + 0xeeu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
            goto L_10092b52;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(10092b3a)
        if ((uint8_t)eax == 1u) goto L_10092b52;
    COW_AT(10092b3e)
        if ((uint8_t)eax == 2u) goto L_10092b52;
    COW_AT(10092b42)
        if ((uint8_t)eax == 6u) goto L_10092b52;
    COW_AT(10092b46)
        if ((uint8_t)eax == 7u) goto L_10092b52;
    COW_AT(10092b4a)
        if ((uint8_t)eax != 8u) goto L_10092c12;
L_10092b52: ;
    COW_AT(10092b52)
        t1 = rd32(self + 0xa0u) + 0x44u;
        g->eax = eax;
        t2 = rd32(self + 0xa0u);
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            esi = t2;
            edi = t1;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t1), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            esi = t2;
            edi = t1;
    COW_AT(10092b7a)
            d4 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d4);
        }
    COW_AT(10092b84)
        if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092b93)
            d5 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi, (float)d5);
        }
    COW_AT(10092b9d)
        d6 = (double)rdf32(esi + 0x48u);
        if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092bb0)
            d7 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x48u, (float)d7);
        }
    COW_AT(10092bbc)
        d8 = (double)rdf32(esi + 0x48u);
        if (!(d8 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092bcc)
            d9 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x48u, (float)d9);
        }
    COW_AT(10092bd8)
        d10 = (double)rdf32(esi + 0x4cu);
        if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092bea)
            d11 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x4cu, (float)d11);
        }
    COW_AT(10092bf6)
        d12 = (double)rdf32(esi + 0x4cu);
        if (d12 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
    COW_AT(10092c06)
            d13 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi + 0x4cu, (float)d13);
        }
    }
L_10092c12: ;
    COW_AT(10092c12)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10092b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10092b30u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b3au:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b3eu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b42u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b46u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b4au:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b52u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092b7au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10092b84u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10092b93u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10092b9du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10092bb0u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092bbcu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092bccu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092bd8u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092beau:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092bf6u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092c06u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092c12u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = g->edi;
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
void cow_adapter_10092b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10092b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
