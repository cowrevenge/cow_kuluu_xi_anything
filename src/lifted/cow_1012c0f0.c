/* f_0x1012c0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012c0f0(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d16;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012c113u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1012c113;
    case 0x1012c118u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1012c118;
    case 0x1012c125u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1012c125;
    case 0x1012c12du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1012c12d;
    case 0x1012c152u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1012c152;
    case 0x1012c162u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1012c162;
    case 0x1012c179u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1012c179;
    case 0x1012c191u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1012c191;
    case 0x1012c198u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1012c198;
    case 0x1012c1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1012c1aa;
    case 0x1012c1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1012c1bd;
    default: break;
    }
#endif

    COW_AT(1012c0f0)
    wr32(sp0 - 0xcu, in_esi);
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
    wr32(sp0 - 8u, 0x10u);
    if ((uint8_t)t1 != 0u)
    {
        edx = 0x5eu;
    }
    else
    {
    COW_AT(1012c113)
        edx = 0x2fu;
    }
    COW_AT(1012c118)
    wr32(sp0 - 4u, edx);
    if (rd16(rd32(self + 8u) + 0x52u) != 0x10u)
    {
        eax = rd32(self + 8u);
        loc_4 = edx;
        goto L_1012c12d;
    }
    eax = rd32(self + 8u);
    loc_4 = edx;
    COW_AT(1012c125)
    if ((uint32_t)(int16_t)rd16(eax + 0x54u) == edx)
    {
        eax = (uint32_t)(int16_t)rd16(eax + 0x54u);
        ecx = 0x10u;
        goto L_1012c152;
    }
    eax = (uint32_t)(int16_t)rd16(eax + 0x54u);
L_1012c12d: ;
    COW_AT(1012c12d)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    t2 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 - 0x14u, 0x10u);
    g->edx = t2;
    t3 = rd32(self + 8u);
    t4 = cow_call_regs(g, COW_IMG(0x10119110u), 0x10u, t3, g->edx, 0, 2, 0x10u, t2);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
L_1012c152: ;
    COW_AT(1012c152)
    d7 = (double)rdf32(self + 0x18u);
    if (!(d7 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1012c179;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1012c162)
    wr32(sp0 - 0x10u, 1u);
    t8 = rd32(self + 8u);
    wr32(sp0 - 0x14u, t8);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_1012c179: ;
    COW_AT(1012c179)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    d13 = cow_take_float(g);
    d14 = fr(g, (double)rdf32(self + 0x18u) - d13);
    wrf32(self + 0x18u, (float)d14);
    if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t12;
    }
    else
    {
        eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t12;
    COW_AT(1012c191)
        wr32(self + 0x18u, 0u);
    }
    COW_AT(1012c198)
    d15 = (double)rdf32(self + 0x14u);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_1012c1bd;
    }
    eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(1012c1aa)
    d16 = fr(g, fr(g, (double)rdf32(self + 0x14u) - (double)rdf32(self + 0x18u)) / (double)rdf32(self + 0x14u));
    wrf32(self + 0x1cu, (float)d16);
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
L_1012c1bd: ;
    COW_AT(1012c1bd)
    wr32(self + 0x1cu, 0x42c80000u);
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012c0f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012c113u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->ecx = 0x10u;
        wr32(sp0 - 8u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1012c118u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->ecx = 0x10u;
        wr32(sp0 - 8u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1012c125u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = 0x10u;
        wr32(sp0 - 8u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1012c12du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1012c152u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c162u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c191u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c198u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c1aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012c1bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c0f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012c0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
