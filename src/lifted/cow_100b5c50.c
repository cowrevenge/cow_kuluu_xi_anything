/* f_0x100b5c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5c50(Guest* g)
{
    double d16;
    double d4;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b5cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100b5cd2;
    case 0x100b5cfau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_100b5cfa;
    case 0x100b5d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x14u); goto E_100b5d1b;
    case 0x100b5d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x14u); goto E_100b5d4f;
    case 0x100b5d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5d7c;
    case 0x100b5d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100b5d80;
    case 0x100b5d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b5d90;
    case 0x100b5db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100b5db4;
    default: break;
    }
#endif

    COW_AT(100b5c50)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x18u, 3u);
    t3 = rd32(self + 0x260u);
    d4 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(t3 + 0x140u, (float)d4);
    g->eax = t3;
    g->edx = t2;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t6 = g->edx;
    wr32(sp0 - 0xcu, t5);
    wr32(sp0 - 0x18u, 5u);
    d7 = fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d7);
    t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0xcu, t8);
    d9 = fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d9);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        loc_14 = in_esi;
    }
    else
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    COW_AT(100b5cd2)
        wr32(sp0 - 0x18u, in_edi);
        t10 = rd32(ecx + 0x120u);
        if ((rd32(ecx + 0x128u) >> 0xeu | t10 >> 0x15u | t10 >> 0x14u) & 1u)
        {
            loc_14 = in_esi;
        }
        else
        {
    COW_AT(100b5cfa)
            t11 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t11);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t11;
    COW_AT(100b5d4f)
                wr32(sp0 - 4u, edx);
                t14 = rd32(eax + 0x140u);
                wr32(sp0 - 0xcu, t14);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, edx);
                wr32(sp0 - 0x20u, loc_8);
                wr32(sp0 - 0x24u, t14);
                g->eax = t14;
                g->esp = sp0 - 0x14u;
                t15 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t14, loc_8, edx, sp0 - 0x10u);
                eax = t15;
            }
            else
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t11;
    COW_AT(100b5d1b)
                wr32(sp0 - 0xcu, edx);
                t12 = rd32(eax + 0x140u);
                wr32(sp0 - 4u, t12);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, 0x42480000u);
                wr32(sp0 - 0x20u, edx);
                wr32(sp0 - 0x24u, loc_8);
                wr32(sp0 - 0x28u, t12);
                g->eax = t12;
                g->esp = sp0 - 0x14u;
                t13 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t12, loc_8, edx, 0x42480000u, sp0 - 0x10u);
                eax = t13;
            }
    COW_AT(100b5d7c)
            if ((uint8_t)eax != 1u)
            {
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
    COW_AT(100b5d80)
                d16 = (double)rdf32(sp0 - 0x10u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d16);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    COW_AT(100b5d90)
        g->edx = rd16(self + 2u);
        t17 = rd16(self + 2u);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10092f90u), rd32(COW_IMG(0x10480af0u) + t17 * 4u), 0);
        t18 = g->edx;
        cow_thiscall(g, COW_IMG(0x1008f2a0u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), 0);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(100b5db4)
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->esi = loc_14;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b5c50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b5cd2u:
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
    case 0x100b5cfau:
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
    case 0x100b5d1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5d4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5d7cu:
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
    case 0x100b5d80u:
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
    case 0x100b5d90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100b5db4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5c50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b5c50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
