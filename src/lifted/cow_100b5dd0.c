/* f_0x100b5dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5dd0(Guest* g)
{
    double d10;
    double d12;
    double d19;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b5dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100b5ddd;
    case 0x100b5e00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5e00;
    case 0x100b5e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5e23;
    case 0x100b5e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5e46;
    case 0x100b5e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5e7b;
    case 0x100b5ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5ea3;
    case 0x100b5ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100b5ec4;
    case 0x100b5ef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5ef6;
    case 0x100b5ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100b5ef8;
    case 0x100b5f25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5f25;
    case 0x100b5f29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5f29;
    case 0x100b5f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5f39;
    case 0x100b5f4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5f4b;
    case 0x100b5f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5f5d;
    default: break;
    }
#endif

    COW_AT(100b5dd0)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100b5ddd)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x18u, 3u);
    t3 = rd32(self + 0x260u);
    d4 = fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(t3 + 0x140u, (float)d4);
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, rd32(sp0 - 0x18u));
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100b5e00)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x18u, 5u);
    d7 = fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d7);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, rd32(sp0 - 0x18u));
    eax = t8;
    COW_AT(100b5e23)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x18u, 7u);
    t9 = rd32(self + 0x260u);
    d10 = fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(t9 + 0x144u, (float)d10);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, rd32(sp0 - 0x18u));
    eax = t11;
    COW_AT(100b5e46)
    wr32(sp0 - 0xcu, eax);
    d12 = fr(g, fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(self + 0x260u) + 0x154u, (float)d12);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b5e7b)
        wr32(sp0 - 0x18u, in_edi);
        t13 = rd32(ecx + 0x120u);
        if (!((rd32(ecx + 0x128u) >> 0xeu | t13 >> 0x15u | t13 >> 0x14u) & 1u))
        {
    COW_AT(100b5ea3)
            t14 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t14);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t14;
    COW_AT(100b5ef8)
                wr32(sp0 - 4u, edx);
                t17 = rd32(eax + 0x140u);
                wr32(sp0 - 0xcu, t17);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, edx);
                wr32(sp0 - 0x20u, loc_8);
                wr32(sp0 - 0x24u, t17);
                g->eax = t17;
                g->esp = sp0 - 0x14u;
                t18 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t17, loc_8, edx, sp0 - 0x10u);
                eax = t18;
            }
            else
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t14;
    COW_AT(100b5ec4)
                wr32(sp0 - 0xcu, edx);
                t15 = rd32(eax + 0x140u);
                wr32(sp0 - 4u, t15);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, 0x42480000u);
                wr32(sp0 - 0x20u, edx);
                wr32(sp0 - 0x24u, loc_8);
                wr32(sp0 - 0x28u, t15);
                g->eax = t15;
                g->esp = sp0 - 0x14u;
                t16 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t15, loc_8, edx, 0x42480000u, sp0 - 0x10u);
                eax = t16;
    COW_AT(100b5ef6)
            }
    COW_AT(100b5f25)
            if ((uint8_t)eax == 1u)
            {
    COW_AT(100b5f29)
                d19 = (double)rdf32(sp0 - 0x10u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d19);
            }
        }
    COW_AT(100b5f39)
        g->edx = rd16(self + 2u);
        t20 = rd16(self + 2u);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10092f90u), rd32(COW_IMG(0x10480af0u) + t20 * 4u), 0);
        t21 = g->edx;
        edx = t21;
    COW_AT(100b5f4b)
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1008f2a0u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), 0);
    }
    COW_AT(100b5f5d)
    t22 = rd16(self + 0x256u);
    wr16(self + 0x256u, (uint16_t)(t22 + 9u));
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b5dd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b5dddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5e00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5e23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5e46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5e7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5ea3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5ec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5ef6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5ef8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5f25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5f29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100b5f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5f4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5f5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
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
void cow_adapter_100b5dd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b5dd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
