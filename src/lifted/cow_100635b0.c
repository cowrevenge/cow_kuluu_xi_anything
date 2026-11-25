/* f_0x100635b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100635b0(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d17;
    double d19;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100635c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100635c8;
    case 0x100635ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100635ce;
    case 0x100635d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100635d3;
    case 0x100635f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100635f5;
    case 0x10063613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_10063613;
    case 0x10063621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_10063621;
    case 0x10063664u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10063664;
    case 0x1006366cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006366c;
    case 0x1006367du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_1006367d;
    case 0x10063681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); goto E_10063681;
    case 0x10063692u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); goto E_10063692;
    case 0x10063696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); goto E_10063696;
    case 0x100636a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636a7;
    case 0x100636acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636ac;
    case 0x100636b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636b4;
    case 0x100636c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636c5;
    case 0x100636d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636d6;
    case 0x100636e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_100636e7;
    case 0x100636fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100636fa;
    case 0x10063711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_10063711;
    case 0x10063717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10063717;
    case 0x1006372fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006372f;
    case 0x10063758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_10063758;
    case 0x1006375du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006375d;
    case 0x1006384fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006384f;
    case 0x1006385fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006385f;
    case 0x10063873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10063873;
    case 0x1006387fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1006387f;
    default: break;
    }
#endif

    COW_AT(100635b0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x28u, in_ebp);
    edx = self + 0xcu;
    loc_1c = in_ebx;
    loc_20 = in_esi;
    loc_24 = in_edi;
    loc_14 = 3u;
    loc_28 = in_ebp;
L_100635c8: ;
    COW_AT(100635c8)
    if (rd32(edx) != 0u)
    {
        eax = rd32(edx);
    COW_AT(100635ce)
        t1 = rd8(self + 0x24u);
        if ((uint8_t)t1 == 0u)
        {
    COW_AT(100635f5)
            d5 = fr(g, (double)rdf32(eax + 4u) - fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 4u)));
            wrf32(eax, (float)d5);
            d6 = fr(g, fr(g, (double)rdf32(rd32(edx) + rd32(self + 4u) * 4u) - (double)rdf32(rd32(edx) + rd32(self + 4u) * 4u - 4u)) + (double)rdf32(rd32(edx) + rd32(self + 4u) * 4u));
            wrf32(rd32(edx) + rd32(self + 4u) * 4u + 4u, (float)d6);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
    COW_AT(100635d3)
            t2 = rd32(eax + rd32(self + 4u) * 4u - 4u);
            wr32(eax, t2);
            t3 = rd32(rd32(edx) + 4u);
            wr32(rd32(edx) + rd32(self + 4u) * 4u, t3);
            t4 = rd32(rd32(edx) + 8u);
            wr32(rd32(edx) + rd32(self + 4u) * 4u + 4u, t4);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    COW_AT(10063613)
    wr32(sp0 - 0x14u, loc_14 - 1u);
    if (loc_14 != 1u)
    {
        edx = edx + 4u;
        loc_14 = loc_14 - 1u;
        goto L_100635c8;
    }
    COW_AT(10063621)
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(self + 0x10u);
    wr32(sp0 - 0x14u, t8);
    t9 = rd32(self + 0x14u);
    wr32(sp0 - 0x18u, t9);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    t10 = rd32(self + 0x18u);
    t11 = rd32(self + 4u);
    wr32(self + 8u, 0u);
    if ((int32_t)(t11 - 1u) <= 0) goto L_1006372f;
    ecx = t9;
    edx = t8;
    ebp = 0u;
    edi = t10 + 4u;
L_10063664: ;
    COW_AT(10063664)
    if (rd32(sp0 - 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x10u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = (double)rdf32(sp0 - 0xcu);
    }
    else
    {
        eax = rd32(sp0 - 0x10u);
    COW_AT(1006366c)
        d12 = fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + 4u));
        wr32(sp0 - 0x10u, eax + 4u);
        wrf32(sp0 - 0xcu, (float)(double)(float)d12);
        loc_10 = eax + 4u;
        eax = eax + 4u;
        loc_c_f = (double)(float)d12;
    }
    COW_AT(1006367d)
    if (edx == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = (double)rdf32(sp0 - 8u);
    }
    else
    {
    COW_AT(10063681)
        d13 = fr(g, (double)rdf32(edx + 8u) - (double)rdf32(edx + 4u));
        wr32(sp0 - 0x14u, edx + 4u);
        wrf32(sp0 - 8u, (float)(double)(float)d13);
        loc_14 = edx + 4u;
        edx = edx + 4u;
        loc_8_f = (double)(float)d13;
    }
    COW_AT(10063692)
    if (ecx == 0u)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_4_f = (double)rdf32(sp0 - 4u);
    }
    else
    {
    COW_AT(10063696)
        d14 = fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(ecx + 4u));
        wr32(sp0 - 0x18u, ecx + 4u);
        wrf32(sp0 - 4u, (float)(double)(float)d14);
        loc_18 = ecx + 4u;
        ecx = ecx + 4u;
        loc_4_f = (double)(float)d14;
    }
    COW_AT(100636a7)
    t15 = rd8(self + 0x25u);
    if ((uint8_t)t15 == 0u)
    {
    COW_AT(100636b4)
        if (loc_c_f != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100636e7;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100636c5)
        if (loc_8_f != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100636e7;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100636d6)
        if (loc_4_f == (double)rdf32(COW_IMG(0x103295d8u))) goto L_10063711;
L_100636e7: ;
    COW_AT(100636e7)
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->esp = sp0 - 0x28u;
        COW_RET(0x100636fau);
        t16 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0xcu);
        d17 = cow_take_float(g);
        eax = t16;
        x0 = d17;
    COW_AT(100636fa)
        wrf32(edi, (float)x0);
        if (!(x0 < (double)rdf32(COW_IMG(0x10329a18u))))
        {
            ecx = rd32(sp0 - 0x18u);
            edx = rd32(sp0 - 0x14u);
            goto L_10063717;
        }
        ecx = rd32(sp0 - 0x18u);
        edx = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = (double)rdf32(sp0 - 0xcu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8_f = (double)rdf32(sp0 - 8u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_4_f = (double)rdf32(sp0 - 4u);
L_10063711: ;
    COW_AT(10063711)
        wr32(edi, 0x3c23d70au);
    }
    else
    {
    COW_AT(100636ac)
        wr32(edi, 0x3f800000u);
    }
L_10063717: ;
    COW_AT(10063717)
    t18 = rd32(self + 4u);
    d19 = fr(g, (double)rdf32(edi) + (double)rdf32(self + 8u));
    wrf32(self + 8u, (float)d19);
    if ((int32_t)(ebp + 1u) < (int32_t)(t18 - 1u))
    {
        ebp = ebp + 1u;
        edi = edi + 4u;
        goto L_10063664;
    }
L_1006372f: ;
    COW_AT(1006372f)
    t20 = rd32(rd32(self + 0x18u) + 4u);
    t21 = rd32(sp0 - 0x28u);
    wr32(rd32(self + 0x18u), t20);
    t22 = rd32(rd32(self + 0x18u) + rd32(self + 4u) * 4u - 4u);
    wr32(rd32(self + 0x18u) + rd32(self + 4u) * 4u, t22);
    if ((int32_t)(rd32(self + 4u) - 1u) <= 0)
    {
        ebp = t21;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        ebp = t21;
    COW_AT(10063758)
        ecx = 8u;
        edi = 0u;
L_1006375d: ;
    COW_AT(1006375d)
        d23 = (double)(float)(double)rdf32(ecx + rd32(self + 0x18u) - 4u);
        wrf32(sp0 - 0x14u, (float)d23);
        d24 = fr(g, (double)rdf32(ecx + rd32(self + 0x18u)) + d23);
        d25 = fr(g, (double)rdf32(ecx + rd32(self + 0x18u) - 8u) / fr(g, (double)rdf32(ecx + rd32(self + 0x18u) - 4u) + (double)rdf32(ecx + rd32(self + 0x18u) - 8u)));
        wr32(eax + 0x2cu, 0u);
        d26 = fr(g, (double)rdf32(sp0 - 0x14u) / d24);
        d27 = (double)(float)fr(g, d26 * d25);
        wrf32(sp0 - 0x14u, (float)d27);
        d28 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d25);
        wrf32(sp0 - 0x18u, (float)(double)(float)d28);
        d29 = (double)(float)fr(g, d28 * (double)(float)d28);
        wrf32(sp0 - 0x10u, (float)d29);
        d30 = fr(g, -d29 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d25));
        d31 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d25);
        wrf32(eax, (float)d30);
        d32 = fr(g, fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(sp0 - 0x14u)) * d31);
        wrf32(eax + 4u, (float)d32);
        d33 = fr(g, fr(g, -(double)rdf32(sp0 - 0x18u) - (double)rdf32(sp0 - 0x14u)) / fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d26));
        d34 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d26);
        wrf32(eax + 8u, (float)d33);
        wrf32(eax + 0xcu, (float)fr(g, fr(g, d26 * d26) / d34));
        d35 = (double)rdf32(sp0 - 0x10u);
        wrf32(eax + 0x10u, (float)fr(g, fr(g, d35 + d35) * d31));
        d36 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x1032c084u))) - (double)rdf32(sp0 - 0x14u)) * d31);
        wrf32(eax + 0x14u, (float)d36);
        d37 = (double)rdf32(sp0 - 0x18u);
        d38 = (double)rdf32(sp0 - 0x14u);
        g->st[g->top & 7u] = fr(g, d26 - fr(g, d38 + d38));
        wrf32(eax + 0x18u, (float)fr(g, fr(g, fr(g, d37 + d37) - fr(g, d26 - fr(g, d38 + d38))) / d34));
        wrf32(eax + 0x1cu, (float)-fr(g, fr(g, d26 * d26) / d34));
        wrf32(eax + 0x20u, (float)d30);
        d39 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d25 + d25)) * d31);
        wrf32(eax + 0x24u, (float)d39);
        wrf32(eax + 0x28u, (float)d25);
        wr32(eax + 0x30u, 0u);
        wr32(eax + 0x34u, 0x3f800000u);
        wr32(eax + 0x38u, 0u);
        wr32(eax + 0x3cu, 0u);
        if ((int32_t)(edi + 1u) < (int32_t)(rd32(self + 4u) - 1u))
        {
            eax = eax + 0x40u;
            ecx = ecx + 4u;
            edi = edi + 1u;
            goto L_1006375d;
        }
    }
    COW_AT(1006384f)
    if ((int32_t)(rd32(self + 4u) - 1u) <= 0)
    {
        edx = rd32(self + 4u) - 1u;
        goto L_1006387f;
    }
    eax = rd32(self + 0x18u) + 4u;
    ecx = 0u;
L_1006385f: ;
    COW_AT(1006385f)
    d40 = fr(g, (double)rdf32(eax) / (double)rdf32(self + 8u));
    wrf32(eax, (float)d40);
    if ((int32_t)(ecx + 1u) < (int32_t)(rd32(self + 4u) - 1u))
    {
        eax = eax + 4u;
        ecx = ecx + 1u;
        goto L_1006385f;
    }
    edx = rd32(self + 4u) - 1u;
    COW_AT(10063873)
    t41 = rd32(sp0 - 0x20u);
    t42 = rd32(sp0 - 0x24u);
    wr32(rd32(self + 0x18u), 0u);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = t41;
    g->edi = t42;
    g->ebp = ebp;
    g->edx = edx;
    return;
L_1006387f: ;
    COW_AT(1006387f)
    t43 = rd32(sp0 - 0x20u);
    t44 = rd32(sp0 - 0x24u);
    wr32(rd32(self + 0x18u), 0u);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = t43;
    g->edi = t44;
    g->ebp = ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100635b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100635c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100635ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100635d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100635f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10063613u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10063621u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->edi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10063664u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006366cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006367du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063692u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063696u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100636fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10063711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063717u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006372fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063758u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006375du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006384fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006385fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063873u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1006387fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100635b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100635b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
