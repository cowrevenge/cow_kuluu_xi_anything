/* f_0x102cb290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102cb290(Guest* g)
{
    double d10;
    double d12;
    double d15;
    double d17;
    double d29;
    double d31;
    double d34;
    double d35;
    double d37;
    double d50;
    double d51;
    double d53;
    double d54;
    double d57;
    double d58;
    double d60;
    double d61;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t52;
    uint32_t t55;
    uint32_t t56;
    uint32_t t59;
    uint32_t t6;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102cb2c3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb2c3;
    case 0x102cb2d1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb2d1;
    case 0x102cb33du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb33d;
    case 0x102cb34au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb34a;
    case 0x102cb34eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb34e;
    case 0x102cb54du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb54d;
    case 0x102cb552u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb552;
    case 0x102cb6c9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb6c9;
    case 0x102cb6cdu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb6cd;
    case 0x102cb6ebu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_102cb6eb;
    default: break;
    }
#endif

    COW_AT(102cb290)
    t1 = rd32(sp0 + 4u);
    t2 = COW_IMG(0x10344dc8u) - rd32(sp0 + 4u);
    t3 = COW_IMG(0x10344dccu) - t1;
    edx = t1;
    ebp = t1;
    esi = rd32(sp0 + 8u);
    loc_48 = t2;
    loc_50 = 0u;
    loc_4c = t1;
    loc_44 = t3;
L_102cb2c3: ;
    COW_AT(102cb2c3)
    t4 = rd32(edx);
    wr32(sp0 + 8u, t4);
    if (t4 != 0u)
    {
        eax = t4;
    COW_AT(102cb2d1)
        t5 = rd32(edx + 0x80u) * 0x2bu << 0x10u;
        t6 = rd32(COW_IMG(0x10344e4cu) + (t5 >> 0x17u) * 0xcu + rd32(sp0 + 8u) * 0xcu - rd32(edx + 0x80u) * 4u) - (t5 & 0x7f800000u);
        t7 = rd32(COW_IMG(0x103cc0c8u) + eax * 8u);
        wr32(sp0 + 4u, t6);
        t8 = ebp + rd32(edx + loc_44) * 4u + 0xc80u;
        if (rd32(sp0 + 8u) == 1u)
        {
            ebx = ebp + rd32(edx + loc_48) * 4u + 0xc80u;
            edi = t7;
            loc_54 = t8;
            goto L_102cb552;
        }
        eax = rd32(sp0 + 8u);
        ebx = ebp + rd32(edx + loc_48) * 4u + 0xc80u;
        edi = t7;
        loc_54 = t8;
    COW_AT(102cb33d)
        t9 = rd32(COW_IMG(0x10344e9cu) + eax * 4u);
        eax = t9;
        loc_58 = t9;
L_102cb34e: ;
    COW_AT(102cb34e)
        d10 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx)) + (double)rdf32(COW_IMG(0x10343990u)));
        t11 = cow_f2bits(d10) & eax;
        d12 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 4u)) + (double)rdf32(COW_IMG(0x10343990u)));
        t13 = cow_f2bits(d12) & eax;
        t14 = rd32(edi + t11 * 8u);
        d15 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 8u)) + (double)rdf32(COW_IMG(0x10343990u)));
        wr32(sp0 + 8u, t13);
        t16 = cow_f2bits((double)(float)d15) & eax;
        d17 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0xcu)) + (double)rdf32(COW_IMG(0x10343990u)));
        t18 = rd32(ebp + 0xb58u);
        t19 = cow_f2bits(d17) & eax;
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t14, esi, t18);
        t20 = rd32(ebp + 0xb58u);
        t21 = esi + rd32(edi + t11 * 8u + 4u);
        t22 = rd32(edi + rd32(sp0 + 8u) * 8u);
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t22, t21, t20);
        t23 = rd32(ebp + 0xb58u);
        t24 = t21 + rd32(edi + rd32(sp0 + 8u) * 8u + 4u);
        t25 = rd32(edi + t16 * 8u);
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t25, t24, t23);
        t26 = rd32(ebp + 0xb58u);
        t27 = t24 + rd32(edi + t16 * 8u + 4u);
        t28 = rd32(edi + t19 * 8u);
        g->esp = sp0 - 0x98u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t28, t27, t26);
        d29 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x10u)) + (double)rdf32(COW_IMG(0x10343990u)));
        t30 = cow_f2bits(d29) & loc_58;
        d31 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x14u)) + (double)rdf32(COW_IMG(0x10343990u)));
        t32 = cow_f2bits(d31) & loc_58;
        t33 = rd32(edi + t19 * 8u + 4u);
        d34 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x18u));
        wr32(sp0 + 8u, t32);
        d35 = (double)(float)fr(g, d34 + (double)rdf32(COW_IMG(0x10343990u)));
        t36 = cow_f2bits(d35) & loc_58;
        d37 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x1cu)) + (double)rdf32(COW_IMG(0x10343990u)));
        t38 = cow_f2bits(d37) & loc_58;
        t39 = rd32(ebp + 0xb58u);
        t40 = rd32(edi + t30 * 8u);
        g->esp = sp0 - 0xa4u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t40, t27 + t33, t39);
        t41 = rd32(ebp + 0xb58u);
        t42 = t27 + t33 + rd32(edi + t30 * 8u + 4u);
        t43 = rd32(edi + rd32(sp0 + 8u) * 8u);
        g->esp = sp0 - 0xb0u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t43, t42, t41);
        t44 = rd32(ebp + 0xb58u);
        t45 = t42 + rd32(edi + rd32(sp0 + 8u) * 8u + 4u);
        t46 = rd32(edi + t36 * 8u);
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t46, t45, t44);
        t47 = rd32(ebp + 0xb58u);
        t48 = t45 + rd32(edi + t36 * 8u + 4u);
        t49 = rd32(edi + t38 * 8u);
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x102cb260u), 3, t49, t48, t47);
        if (ebx + 0x20u != loc_54)
        {
            ebx = ebx + 0x20u;
            esi = t48 + rd32(edi + t38 * 8u + 4u);
            goto L_102cb34a;
        }
        esi = t48 + rd32(edi + t38 * 8u + 4u);
    COW_AT(102cb54d)
L_102cb6c9: ;
    COW_AT(102cb6c9)
        edx = loc_4c;
    }
    COW_AT(102cb6cd)
    if (loc_50 + 1u != rd32(ebp + 0x100u))
    {
        loc_50 = loc_50 + 1u;
        loc_4c = edx + 4u;
        edx = edx + 4u;
        goto L_102cb2c3;
    }
    edx = edx + 4u;
    COW_AT(102cb6eb)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return esi;
L_102cb34a: ;
    COW_AT(102cb34a)
    eax = loc_58;
    goto L_102cb34e;
L_102cb552: ;
    COW_AT(102cb552)
    d50 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx)) + (double)rdf32(COW_IMG(0x10343990u)));
    d51 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 4u)) + (double)rdf32(COW_IMG(0x10343990u)));
    t52 = (cow_f2bits(d50) & 3u) * 4u + (cow_f2bits(d51) & 3u);
    d53 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 8u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d54 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0xcu)) + (double)rdf32(COW_IMG(0x10343990u)));
    t55 = (cow_f2bits(d53) & 3u) * 4u + (cow_f2bits(d54) & 3u);
    t56 = rd32(edi + t52 * 8u);
    d57 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x10u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wr32(sp0 + 8u, t55);
    d58 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x14u)) + (double)rdf32(COW_IMG(0x10343990u)));
    t59 = (cow_f2bits(d58) & 3u) + (cow_f2bits((double)(float)d57) & 3u) * 4u;
    d60 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x18u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d61 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(ebx + 0x1cu)) + (double)rdf32(COW_IMG(0x10343990u)));
    t62 = rd32(ebp + 0xb58u);
    t63 = (cow_f2bits(d60) & 3u) * 4u + (cow_f2bits(d61) & 3u);
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x102cb260u), 3, t56 >> 8u, esi, t62);
    t64 = rd32(ebp + 0xb58u);
    t65 = esi + rd32(edi + t52 * 8u + 4u);
    t66 = rd32(edi + rd32(sp0 + 8u) * 8u) >> 8u;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x102cb260u), 3, t66, t65, t64);
    t67 = rd32(ebp + 0xb58u);
    t68 = t65 + rd32(edi + rd32(sp0 + 8u) * 8u + 4u);
    t69 = rd32(edi + t59 * 8u) >> 8u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x102cb260u), 3, t69, t68, t67);
    t70 = rd32(ebp + 0xb58u);
    t71 = t68 + rd32(edi + t59 * 8u + 4u);
    t72 = rd32(edi + t63 * 8u) >> 8u;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102cb260u), 3, t72, t71, t70);
    if (ebx + 0x20u != loc_54)
    {
        ebx = ebx + 0x20u;
        esi = t71 + rd32(edi + t63 * 8u + 4u);
        goto L_102cb552;
    }
    esi = t71 + rd32(edi + t63 * 8u + 4u);
    goto L_102cb6c9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102cb290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102cb2c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb2d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb33du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb34au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb34eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb54du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb552u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb6c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb6cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102cb6ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102cb290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102cb290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
