/* f_0x102f3ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_102f3ff0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f4037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102f4037;
    case 0x102f4064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102f4064;
    case 0x102f4093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102f4093;
    case 0x102f40bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102f40bd;
    default: break;
    }
#endif

    COW_AT(102f3ff0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    esi = COW_IMG(0x10348590u);
    edi = sp0 - 0x1cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
    esi = COW_IMG(0x10348580u);
    edi = sp0 - 0x2cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
    eax = 0u;
    ecx = 0u;
    edx = 0u;
    ebx = 0u;
    { /* cpuid  */ g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx; }
    wr32(sp0 - 8u, 1u);
    eax = 0u;
    { /* cpuid  */ g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx; }
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x18u, edx);
    wr32(sp0 - 0x14u, ecx);
    if (eax == 0u)
    {
        loc_8 = 1u;
    }
    else
    {
    COW_AT(102f4037)
        wr32(sp0 - 8u, 3u);
        eax = 1u;
        { /* cpuid  */ g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx; }
        wr32(sp0 - 0xcu, eax);
        t1 = (-((edx & 0x800000u) != 0u) & 0x20u) | 3u;
        wr32(sp0 - 8u, t1);
        t2 = edx;
        t3 = eax;
        eax = 0x80000000u;
        ecx = -((t2 & 0x800000u) != 0u) & 0x20u;
        { /* cpuid  */ g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx; }
        if (eax <= 0x80000000u)
        {
            loc_8 = t1;
        }
        else
        {
            loc_8 = t1;
    COW_AT(102f4064)
            wr32(sp0 - 8u, loc_8 | 4u);
            eax = 0x80000001u;
            { /* cpuid  */ g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx; }
            t4 = loc_8 | 4u | (-((edx & 0x80000000u) != 0u) & 0x80u);
            wr32(sp0 - 8u, t4);
            g->df = 0;
            esi = sp0 - 0x2cu;
            edi = sp0 - 0x1cu;
            ecx = 0xcu;
            cf = 0u;
            pf = PARITY((uint8_t)(loc_8 | 4u | (-((edx & 0x80000000u) != 0u) & 0x80u)));
            af = 0u;
            zf = (loc_8 | 4u | (-((edx & 0x80000000u) != 0u) & 0x80u)) == 0u;
            sf = (int32_t)(loc_8 | 4u | (-((edx & 0x80000000u) != 0u) & 0x80u)) < 0;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                loc_8 = t4;
            }
            else
            {
                loc_8 = t4;
    COW_AT(102f4093)
                t5 = loc_8 | (-((edx & 0x40000000u) != 0u) & 0x100u);
                wr32(sp0 - 8u, t5);
                t6 = t5 | (-((edx & 0x400000u) != 0u) & 0x200u);
                wr32(sp0 - 8u, t6);
                loc_8 = t6;
            }
        }
    }
    COW_AT(102f40bd)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return loc_8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f3ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f4037u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102f4064u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4093u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f40bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f3ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f3ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
