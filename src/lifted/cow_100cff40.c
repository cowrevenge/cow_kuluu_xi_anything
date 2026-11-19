/* f_0x100cff40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100cff40(Guest* g)
{
    double d100;
    double d101;
    double d106;
    double d109;
    double d110;
    double d111;
    double d112;
    double d113;
    double d114;
    double d3;
    double d36;
    double d37;
    double d41;
    double d42;
    double d43;
    double d46;
    double d47;
    double d48;
    double d49;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d65;
    double d68;
    double d69;
    double d72;
    double d73;
    double d74;
    double d79;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d92;
    double d95;
    double d96;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    double loc_78_f;
    uint32_t loc_7c;
    double loc_8c_f;
    uint32_t loc_90;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t t1;
    uint32_t t10;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t107;
    uint32_t t108;
    uint32_t t11;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t80;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t93;
    uint32_t t94;
    uint32_t t97;
    uint32_t t98;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cff72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_100cff72;
    case 0x100cff81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_100cff81;
    case 0x100cff9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); loc_7c = rd32(sp0 - 0x7cu); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_100cff9d;
    case 0x100cffacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb8u); loc_7c = rd32(sp0 - 0x7cu); g->ebp = rd32(sp0 - 0xbcu); g->ebx = rd32(sp0 - 0xb8u); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_100cffac;
    case 0x100cffe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cffe8;
    case 0x100d0033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100d0033;
    case 0x100d0048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_100d0048;
    case 0x100d005fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d005f;
    case 0x100d0069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d0069;
    case 0x100d009cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d009c;
    case 0x100d00cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d00cf;
    case 0x100d0129u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78_f = rdf32(sp0 - 0x78u); goto E_100d0129;
    case 0x100d0160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); goto E_100d0160;
    case 0x100d0198u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d0198;
    case 0x100d01acu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d01ac;
    case 0x100d01b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d01b5;
    case 0x100d01bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d01bb;
    case 0x100d01c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d01c3;
    case 0x100d01d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d01d0;
    case 0x100d01d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d01d2;
    case 0x100d01d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d01d6;
    case 0x100d01e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d01e2;
    case 0x100d01e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_100d01e9;
    case 0x100d023eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); x1 = ST(0); x0 = ST(1); goto E_100d023e;
    case 0x100d024eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); x1 = ST(0); x0 = ST(1); goto E_100d024e;
    case 0x100d025cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); x1 = ST(0); x0 = ST(1); goto E_100d025c;
    case 0x100d02b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100d02b7;
    case 0x100d02bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); goto E_100d02bf;
    case 0x100d0362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8c_f = rdf32(sp0 - 0x8cu); goto E_100d0362;
    case 0x100d0372u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8c_f = rdf32(sp0 - 0x8cu); goto E_100d0372;
    case 0x100d037eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8c_f = rdf32(sp0 - 0x8cu); goto E_100d037e;
    case 0x100d03d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_100d03d3;
    case 0x100d03dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); goto E_100d03db;
    case 0x100d0475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100d0475;
    case 0x100d0485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100d0485;
    case 0x100d0491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_78_f = rdf32(sp0 - 0x78u); goto E_100d0491;
    default: break;
    }
#endif

    COW_AT(100cff40)
    wr32(sp0 - 0xb8u, in_ebx);
    wr32(sp0 - 0xbcu, in_ebp);
    wr32(sp0 - 0xc0u, in_esi);
    wr32(sp0 - 0xc4u, in_edi);
    wr32(sp0 - 0xb0u, self);
    wr8(sp0 - 0xb1u, 0u);
    wr32(arg2, 0x4e6e6b28u);
    g->edx = in_edx;
    g->esp = sp0 - 0xc4u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100cff81;
    }
    eax = t1;
    edx = t2;
    COW_AT(100cff72)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100cff81: ;
    COW_AT(100cff81)
    d3 = (double)rdf32(self + 0x59cu);
    t4 = rd32(eax) + 8u;
    wr32(sp0 - 0x7cu, t4);
    if (!(d3 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        esi = t4;
        loc_7c = t4;
        goto L_100cffac;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    COW_AT(100cff9d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100cffac: ;
    COW_AT(100cffac)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t5 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t9 = g->edx;
    wr32(sp0 - 0xc8u, t8);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t8);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t14 = g->edx;
    wr32(sp0 - 0xc8u, t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t13);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10035370u), esi, 0);
    t18 = g->edx;
    if ((int32_t)t17 > 2)
    {
        eax = t17;
        edx = t18;
        goto L_100d0033;
    }
    edx = t18;
    COW_AT(100cffe8)
    g->eax = rd32(self);
    g->edx = edx;
    t19 = rd32(self);
    g->esp = sp0 - 0xc4u;
    t20 = cow_thiscall(g, rd32(t19 + 0x1bcu), self, 0);
    t21 = g->edx;
    wr32(sp0 - 0xc8u, t20);
    wr32(sp0 - 0xccu, sp0 - 0xacu);
    t22 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0xacu, t20);
    wr32(sp0 - 0xc8u, sp0 - 0xacu);
    g->edx = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x40u, 1, sp0 - 0xacu);
    t23 = g->edx;
    t24 = rd32(sp0 - 0xa4u);
    wr32(arg2, t24);
    g->eax = t24;
    g->edx = t23;
    t25 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t26 = g->edx;
    g->ebx = rd32(sp0 - 0xb8u);
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_100d0033: ;
    COW_AT(100d0033)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t27 = cow_thiscall(g, COW_IMG(0x10035370u), esi, 0);
    t28 = g->edx;
    wr32(sp0 - 0x74u, t27);
    if ((int32_t)t27 <= 0)
    {
        edx = t28;
        edi = self;
        goto L_100d01e9;
    }
    eax = t27;
    edx = t28;
    ebx = 0u;
    edi = self;
    loc_74 = t27;
    loc_cc = rd32(sp0 - 0xccu);
    loc_d0 = rd32(sp0 - 0xd0u);
    loc_d4 = rd32(sp0 - 0xd4u);
    loc_d8 = rd32(sp0 - 0xd8u);
    loc_dc = rd32(sp0 - 0xdcu);
L_100d0048: ;
    COW_AT(100d0048)
    wr32(sp0 - 0xc8u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t29 = cow_thiscall(g, COW_IMG(0x10035390u), esi, 1, ebx);
    t30 = g->edx;
    if ((int8_t)rd8(ebx + rd32(esi + 0x14u)) >= 0)
    {
        edx = t30;
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_100d01c3;
    }
    eax = rd32(esi + 0x14u);
    edx = t30;
    ebp = t29;
    COW_AT(100d005f)
    if ((int8_t)rd8(eax + ebp) >= 0)
    {
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_100d01c3;
    }
    COW_AT(100d0069)
    t31 = rd32(sp0 - 0xb0u);
    esi = sp0 - 0x40u;
    edi = sp0 - 0x104u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x108u, sp0 - 0x70u);
    wr32(sp0 - 0x10cu, ebx);
    g->eax = eax;
    g->edx = t31;
    g->esp = sp0 - 0xc4u;
    t32 = cow_bridge_indirect(g, COW_IMG(0x1002c680u), 0u, 18u, (const uint32_t[]){ebx, sp0 - 0x70u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u)}, t31 + 0x674u, g->edx, g->eax, 0u);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_100d01d2;
    }
    edx = t33;
    COW_AT(100d009c)
    esi = sp0 - 0x40u;
    edi = sp0 - 0x104u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x108u, sp0 - 0x60u);
    wr32(sp0 - 0x10cu, ebp);
    g->eax = sp0 - 0x60u;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t34 = cow_bridge_indirect(g, COW_IMG(0x1002c680u), 0u, 18u, (const uint32_t[]){ebp, sp0 - 0x60u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u)}, rd32(sp0 - 0xb0u) + 0x674u, g->edx, g->eax, 0u);
    t35 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
        goto L_100d01d2;
    }
    COW_AT(100d00cf)
    d36 = (double)rdf32(sp0 - 0x6cu);
    wrf32(sp0 - 0x6cu, (float)(double)(float)-d36);
    wr32(sp0 - 0xc8u, sp0 - 0x60u);
    d37 = (double)rdf32(sp0 - 0x5cu);
    wrf32(sp0 - 0x5cu, (float)(double)(float)-d37);
    wr32(sp0 - 0xccu, sp0 - 0x70u);
    wr32(sp0 - 0xd0u, sp0 - 0xacu);
    g->eax = sp0 - 0x70u;
    g->ecx = sp0 - 0xacu;
    g->edx = sp0 - 0x60u;
    g->esp = sp0 - 0xc4u;
    t38 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xacu, sp0 - 0x70u, sp0 - 0x60u);
    t39 = g->ecx;
    t40 = g->edx;
    d41 = (double)rdf32(sp0 - 0xa8u);
    d42 = (double)rdf32(sp0 - 0xacu);
    d43 = fr(g, fr(g, sqrt(fr(g, fr(g, d41 * d41) + fr(g, d42 * d42)))) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x78u, (float)(double)(float)d43);
    if (d43 < (double)rdf32(COW_IMG(0x10329a18u)))
    {
        edx = t40;
        loc_cc = sp0 - 0x70u;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
    }
    else
    {
        ecx = t39;
        loc_78_f = (double)(float)d43;
    COW_AT(100d0129)
        wr32(sp0 - 0xc8u, 0x3f000000u);
        wr32(sp0 - 0xccu, sp0 - 0xacu);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xacu, sp0 - 0xacu, 0x3f000000u);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        g->esp = sp0 - 0xd0u;
        cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x50u, sp0 - 0xacu, sp0 - 0x60u);
        esi = sp0 - 0x64u;
        edi = 3u;
L_100d0160: ;
    COW_AT(100d0160)
        wr32(sp0 - 0xc8u, esi - 0xcu);
        wr32(sp0 - 0xccu, arg1);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        g->eax = sp0 - 0xacu;
        g->edx = arg1;
        g->esp = sp0 - 0xc4u;
        t44 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xacu, arg1, esi - 0xcu);
        t45 = g->edx;
        d46 = (double)rdf32(sp0 - 0xa8u);
        d47 = (double)rdf32(sp0 - 0xacu);
        d48 = fr(g, sqrt(fr(g, fr(g, d46 * d46) + fr(g, d47 * d47))));
        d49 = (double)rdf32(sp0 - 0x78u);
        if (!(d48 < d49))
        {
            edx = t45;
        }
        else
        {
            eax = (t44 & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, d49, 0u);
            edx = t45;
    COW_AT(100d0198)
            if ((cow_fsw(g, (double)rdf32(arg2), (double)rdf32(esi), 0u) & 0x4100u) == 0u)
            {
    COW_AT(100d01ac)
                t50 = rd32(esi);
                wr8(sp0 - 0xb1u, 1u);
                wr32(arg2, t50);
                edx = t50;
            }
        }
    COW_AT(100d01b5)
        if (edi != 1u)
        {
            esi = esi + 0x10u;
            edi = edi - 1u;
            goto L_100d0160;
        }
        loc_cc = arg1;
        loc_d4 = sp0 - 0x60u;
        loc_d8 = sp0 - 0xacu;
        loc_dc = sp0 - 0x50u;
    }
    COW_AT(100d01bb)
    esi = rd32(sp0 - 0x7cu);
    edi = rd32(sp0 - 0xb0u);
    loc_d0 = sp0 - 0xacu;
L_100d01c3: ;
    COW_AT(100d01c3)
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 0x74u))
    {
        eax = rd32(sp0 - 0x74u);
        ebx = ebx + 1u;
        loc_74 = rd32(sp0 - 0x74u);
        goto L_100d0048;
    }
    eax = rd32(sp0 - 0x74u);
    COW_AT(100d01d0)
L_100d01d6: ;
    COW_AT(100d01d6)
    if (rd8(sp0 - 0xb1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xb1u);
        goto L_100d0491;
    }
    COW_AT(100d01e2)
L_100d01e9: ;
    COW_AT(100d01e9)
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 0xdu);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(edi) + 0x1c8u), edi, 2, 0xdu, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wr32(sp0 - 0xccu, 0xfu);
    g->eax = sp0 - 0x8cu;
    t51 = cow_thiscall(g, rd32(rd32(edi) + 0x1c8u), edi, 2, 0xfu, sp0 - 0x8cu);
    d52 = (double)rdf32(sp0 - 0x94u);
    d53 = (double)rdf32(sp0 - 0x9cu);
    d54 = (double)rdf32(sp0 - 0x84u);
    d55 = (double)rdf32(sp0 - 0x8cu);
    d56 = fr(g, sqrt(fr(g, fr(g, d52 * d52) + fr(g, d53 * d53))));
    d57 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
    if (!(d56 < d57))
    {
        x1 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
        x0 = d56;
    COW_AT(100d024e)
        d59 = x1;
        x1 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329ce4u)));
        x0 = fr(g, d59 * (double)rdf32(COW_IMG(0x10329d34u)));
    }
    else
    {
        x1 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
        x0 = d56;
    COW_AT(100d023e)
        d58 = x1;
        x1 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d34u)));
        x0 = fr(g, d58 * (double)rdf32(COW_IMG(0x10329ce4u)));
    }
    COW_AT(100d025c)
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 1u);
    d60 = (double)(float)fr(g, x0 + x1);
    wrf32(sp0 - 0xb0u, (float)d60);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    t61 = cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, 1u, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    g->esp = sp0 - 0xccu;
    t62 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t63 = g->edx;
    g->edx = t63;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10028170u), t62, 2, sp0 - 0x8cu, sp0 - 0x9cu);
    t64 = g->edx;
    d65 = fr(g, (double)rdf32(sp0 - 0x8cu) + (double)rdf32(sp0 - 0xb0u));
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wrf32(sp0 - 0x8cu, (float)(double)(float)d65);
    g->eax = sp0 - 0x9cu;
    t66 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x9cu);
    t67 = g->ecx;
    d68 = (double)rdf32(sp0 - 0x90u);
    if (!(d68 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (t66 & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t67;
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        eax = (t66 & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t67;
    COW_AT(100d02b7)
        wr32(sp0 - 0x90u, 0x3a83126fu);
        loc_90 = 0x3a83126fu;
    }
    COW_AT(100d02bf)
    d69 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_90));
    wr32(sp0 - 0xc8u, ecx);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d69);
    wr32(sp0 - 0xccu, sp0 - 0x9cu);
    wr32(sp0 - 0xd0u, sp0 - 0x9cu);
    g->ecx = sp0 - 0x9cu;
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x9cu, sp0 - 0x9cu, cow_f2bits((double)(float)d69));
    t70 = g->ecx;
    t71 = g->edx;
    d72 = fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 - 0x9cu));
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wrf32(sp0 - 0xacu, (float)(double)(float)d72);
    d73 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 - 0x98u));
    wrf32(sp0 - 0xa8u, (float)(double)(float)d73);
    d74 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(sp0 - 0x94u));
    wrf32(sp0 - 0xa4u, (float)(double)(float)d74);
    g->eax = sp0 - 0x8cu;
    g->edx = t71;
    g->esp = sp0 - 0xc8u;
    t75 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t76 = g->edx;
    g->esp = sp0 - 0xc4u;
    t77 = cow_thiscall(g, COW_IMG(0x10028140u), t75, 1, sp0 - 0x8cu);
    t78 = g->ecx;
    d79 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x80u));
    wr32(sp0 - 0xc8u, t78);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d79);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    wr32(sp0 - 0xd0u, sp0 - 0x8cu);
    t80 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x8cu, sp0 - 0x8cu, cow_f2bits((double)(float)d79));
    d81 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    wrf32(sp0 - 0x8cu, (float)(double)(float)d81);
    d82 = (double)rdf32(sp0 - 0xa8u);
    d83 = (double)rdf32(sp0 - 0xacu);
    d84 = fr(g, fr(g, d82 * d82) + fr(g, d83 * d83));
    d85 = fr(g, d81 * (double)(float)d81);
    if (!(d84 < d85))
    {
        loc_8c_f = (double)(float)d81;
    }
    else
    {
        eax = (t80 & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, d85, 0u);
        loc_8c_f = (double)(float)d81;
    COW_AT(100d0362)
        d86 = (double)rdf32(sp0 - 0xa0u);
        if ((cow_fsw(g, (double)rdf32(arg2), d86, 0u) & 0x4100u) == 0u)
        {
    COW_AT(100d0372)
            t87 = rd32(sp0 - 0xa0u);
            wr8(sp0 - 0xb1u, 1u);
            wr32(arg2, t87);
        }
    }
    COW_AT(100d037e)
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 3u);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    t88 = cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, 3u, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    g->esp = sp0 - 0xccu;
    t89 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t90 = g->edx;
    g->edx = t90;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10028170u), t89, 2, sp0 - 0x8cu, sp0 - 0x9cu);
    t91 = g->edx;
    d92 = fr(g, (double)rdf32(sp0 - 0x8cu) + (double)rdf32(sp0 - 0xb0u));
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wrf32(sp0 - 0x8cu, (float)(double)(float)d92);
    g->eax = sp0 - 0x9cu;
    t93 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x9cu);
    t94 = g->ecx;
    d95 = (double)rdf32(sp0 - 0x90u);
    if (!(d95 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (t93 & 0xffff0000u) | (uint16_t)cow_fsw(g, d95, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t94;
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        eax = (t93 & 0xffff0000u) | (uint16_t)cow_fsw(g, d95, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t94;
    COW_AT(100d03d3)
        wr32(sp0 - 0x90u, 0x3a83126fu);
        loc_90 = 0x3a83126fu;
    }
    COW_AT(100d03db)
    d96 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_90));
    wr32(sp0 - 0xc8u, ecx);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d96);
    wr32(sp0 - 0xccu, sp0 - 0x9cu);
    wr32(sp0 - 0xd0u, sp0 - 0x9cu);
    g->ecx = sp0 - 0x9cu;
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x9cu, sp0 - 0x9cu, cow_f2bits((double)(float)d96));
    t97 = g->ecx;
    t98 = g->edx;
    d99 = fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 - 0x9cu));
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wrf32(sp0 - 0xacu, (float)(double)(float)d99);
    d100 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 - 0x98u));
    wrf32(sp0 - 0xa8u, (float)(double)(float)d100);
    d101 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(sp0 - 0x94u));
    wrf32(sp0 - 0xa4u, (float)(double)(float)d101);
    g->eax = sp0 - 0x8cu;
    g->edx = t98;
    g->esp = sp0 - 0xc8u;
    t102 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t103 = g->edx;
    g->esp = sp0 - 0xc4u;
    t104 = cow_thiscall(g, COW_IMG(0x10028140u), t102, 1, sp0 - 0x8cu);
    t105 = g->ecx;
    d106 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x80u));
    wr32(sp0 - 0xc8u, t105);
    wrf32(sp0 - 0xc8u, (float)(double)(float)d106);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    wr32(sp0 - 0xd0u, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    t107 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x8cu, sp0 - 0x8cu, cow_f2bits((double)(float)d106));
    t108 = g->edx;
    d109 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    d110 = (double)rdf32(sp0 - 0xa8u);
    d111 = (double)rdf32(sp0 - 0xacu);
    d112 = fr(g, fr(g, d110 * d110) + fr(g, d111 * d111));
    d113 = fr(g, d109 * d109);
    if (!(d112 < d113))
    {
        eax = (t107 & 0xffff0000u) | (uint16_t)cow_fsw(g, d112, d113, 1u);
        edx = t108;
    }
    else
    {
        eax = (t107 & 0xffff0000u) | (uint16_t)cow_fsw(g, d112, d113, 1u);
        edx = t108;
    COW_AT(100d0475)
        d114 = (double)rdf32(sp0 - 0xa0u);
        if ((cow_fsw(g, (double)rdf32(arg2), d114, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(arg2), d114, 0u) & 0x4100u;
        }
        else
        {
    COW_AT(100d0485)
            t115 = rd32(sp0 - 0xa0u);
            wr8(sp0 - 0xb1u, 1u);
            wr32(arg2, t115);
            eax = t115;
        }
    }
L_100d0491: ;
    COW_AT(100d0491)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t116 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t117 = g->edx;
    g->ebx = rd32(sp0 - 0xb8u);
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    g->edx = t117;
    return (t116 & 0xffffff00u) | rd8(sp0 - 0xb1u);
L_100d01d2: ;
    COW_AT(100d01d2)
    edi = rd32(sp0 - 0xb0u);
    goto L_100d01d6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cff40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cff72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100cff81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xb0u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cff9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100cffacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb8u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xb0u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cffe8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100d0033u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100d0048u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d005fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d0069u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d009cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100d00cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100d0129u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        wr32(sp0 - 0xccu, sp0 - 0x70u);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100d0160u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100d0198u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        wr32(sp0 - 0xccu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x100d01acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ecx = arg2;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        wr32(sp0 - 0xccu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x100d01b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        wr32(sp0 - 0xccu, arg1);
        (void)sp0;
        return 1;
    }
    case 0x100d01bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x108u, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x100d01c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d01d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d01d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d01d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d01e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x100d01e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100d023eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xc8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d024eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xc8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d025cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_cc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xc8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d02b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d02bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d0362u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d0372u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d037eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8c_f = rdf32(sp0 - 0x8cu);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d03d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d03dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        wr32(sp0 - 0xc8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d0475u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d0485u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        g->ebp = arg2;
        wr32(sp0 - 0xd0u, sp0 - 0x8cu);
        wr32(sp0 - 0xccu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d0491u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_78_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cff40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cff40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
