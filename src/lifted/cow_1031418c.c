/* f_0x1031418c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_1031418c(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d17;
    double d18;
    double d21;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_1c_d;
    double loc_24_d;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103141a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_103141a2;
    case 0x103141b6u: eax = g->eax; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_103141b6;
    case 0x103141c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141c0;
    case 0x103141c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141c6;
    case 0x103141cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141cb;
    case 0x103141d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141d0;
    case 0x103141e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_103141e0;
    case 0x103141e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141e8;
    case 0x103141efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141ef;
    case 0x103141f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_103141f6;
    case 0x10314213u: eax = g->eax; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10314213;
    case 0x1031421eu: eax = g->eax; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031421e;
    case 0x10314238u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24_d = rdf64(sp0 - 0x24u); loc_1c_d = rdf64(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_10314238;
    case 0x1031423du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1031423d;
    case 0x10314242u: eax = g->eax; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10314242;
    case 0x10314253u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10314253;
    case 0x10314269u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10314269;
    case 0x1031426fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1031426f;
    default: break;
    }
#endif

    COW_AT(1031418c)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0xffffu);
    wr32(sp0 - 0x18u, 0x133fu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 4, 0x133fu, 0xffffu, in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(103141a2)
    if ((rd32(sp0 + 0xau) & 0x7ff0u) != 0x7ff0u)
    {
        edi = eax;
        eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
        x0 = rdf64(sp0 + 4u);
        goto L_10314213;
    }
    edi = eax;
    eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
    x0 = rdf64(sp0 + 4u);
    COW_AT(103141b6)
    wr32(sp0 - 0x14u, 0xffffu);
    wr32(sp0 - 0x18u, 0xffffu);
    wrf64(sp0 - 0x18u, x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1031f64bu), 4, cow_dlo(x0), cow_dhi(x0), in_edi, in_esi);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(103141c0)
    if ((int32_t)eax <= 0)
    {
        ecx = rd32(sp0 - 0x14u);
        goto L_103141f6;
    }
    ecx = rd32(sp0 - 0x14u);
    COW_AT(103141c6)
    if ((int32_t)eax <= 2) goto L_103141e8;
    COW_AT(103141cb)
    if (eax != 3u) goto L_103141f6;
    COW_AT(103141d0)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ecx);
    wr32(sp0 - 0x1cu, ecx);
    d5 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x1cu, d5);
    wr32(sp0 - 0x20u, 0x25u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x1031f766u), g->eax, ecx, edx, 1, 3, 0x25u, cow_dlo(d5), cow_dhi(d5));
    t7 = g->edx;
    d8 = cow_take_float(g);
    eax = t6;
    edx = t7;
    x0 = d8;
    COW_AT(103141e0)
L_1031426f: ;
    COW_AT(1031426f)
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    fpush(g, x0);
    return eax;
L_103141e8: ;
    COW_AT(103141e8)
    wr32(sp0 - 0x14u, 0xffffu);
    wr32(sp0 - 0x18u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, edi, 0xffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(103141ef)
    x0 = rdf64(sp0 + 4u);
    goto L_1031426f;
L_103141f6: ;
    COW_AT(103141f6)
    d11 = fr(g, rdf64(sp0 + 4u) + rdf64(COW_IMG(0x1034a1e0u)));
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ecx);
    wr32(sp0 - 0x1cu, ecx);
    wrf64(sp0 - 0x1cu, d11);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    d12 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x24u, d12);
    wr32(sp0 - 0x28u, 0x25u);
    wr32(sp0 - 0x2cu, 8u);
    loc_14 = edi;
    loc_1c_d = d11;
    loc_24_d = d12;
    loc_2c = 8u;
    loc_4 = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_10314238: ;
    COW_AT(10314238)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x1031f81au), ecx, 9, loc_2c, 0x25u, cow_dlo(loc_24_d), cow_dhi(loc_24_d), cow_dlo(loc_1c_d), cow_dhi(loc_1c_d), loc_14, loc_10, loc_c);
    t16 = g->edx;
    d17 = cow_take_float(g);
    eax = t15;
    edx = t16;
    x0 = d17;
    COW_AT(1031423d)
    goto L_1031426f;
L_10314213: ;
    COW_AT(10314213)
    if (x0 < rdf64(COW_IMG(0x1034a1d8u)) || x0 > rdf64(COW_IMG(0x1034a1d8u))) goto L_10314242;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    COW_AT(1031421e)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, 0xffffu);
    d13 = -rdf64(COW_IMG(0x103d2c38u));
    wrf64(sp0 - 0x1cu, d13);
    wr32(sp0 - 0x20u, 0xffffu);
    wr32(sp0 - 0x24u, 0xffffu);
    d14 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x24u, d14);
    wr32(sp0 - 0x28u, 0x25u);
    wr32(sp0 - 0x2cu, 4u);
    ecx = 0xffffu;
    loc_14 = edi;
    loc_1c_d = d13;
    loc_24_d = d14;
    loc_2c = 4u;
    loc_4 = in_ebp;
    loc_c = in_esi;
    loc_10 = in_edi;
    goto L_10314238;
L_10314242: ;
    COW_AT(10314242)
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, 0xffffu);
    d18 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x1cu, d18);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 8u, 0xffffu, g->edx, 1, 3, cow_dlo(d18), cow_dhi(d18), sp0 - 8u);
    t19 = g->ecx;
    t20 = g->edx;
    d21 = cow_take_float(g);
    ecx = t19;
    edx = t20;
    x0 = d21;
    COW_AT(10314253)
    wr32(sp0 - 0x20u, 0xffffu);
    wr32(sp0 - 0x24u, edi);
    t22 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 + 8u, t22);
    t23 = rd32(sp0 + 8u);
    wrf64(sp0 + 4u, (double)(int32_t)t23);
    g->eax = t22;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, edi, 0xffffu, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(10314269)
    x0 = rdf64(sp0 + 4u);
    goto L_1031426f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031418c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103141a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x18u, 0x133fu);
        wr32(sp0 - 0x14u, 0xffffu);
        (void)sp0;
        return 1;
    }
    case 0x103141b6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        double x0;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103141c0u:
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
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103141c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103141cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103141d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103141e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103141e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x103141efu:
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
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103141f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314213u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        double x0;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x1031421eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314238u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_1c_d;
        double loc_24_d;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24_d = rdf64(sp0 - 0x24u);
        loc_1c_d = rdf64(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x28u, 0x25u);
        (void)sp0;
        return 1;
    }
    case 0x1031423du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10314242u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = 0xffffu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        (void)sp0;
        return 1;
    }
    case 0x10314253u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 0xffffu;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10314269u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1031426fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031418c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031418c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
