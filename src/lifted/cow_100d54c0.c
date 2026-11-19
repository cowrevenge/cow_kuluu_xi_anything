/* f_0x100d54c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100d54c0(Guest* g)
{
    double d102;
    double d103;
    double d24;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d34;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d7;
    double d88;
    double d96;
    double d97;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_d8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t11;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 264u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d54d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xd4u); in_esi = rd32(sp0 - 0xd0u); g->edi = rd32(sp0 - 0xd4u); g->esi = rd32(sp0 - 0xd0u); goto E_100d54d3;
    case 0x100d551du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d551d;
    case 0x100d5528u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5528;
    case 0x100d5538u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5538;
    case 0x100d5544u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5544;
    case 0x100d5553u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5553;
    case 0x100d5565u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5565;
    case 0x100d5576u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5576;
    case 0x100d558cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d558c;
    case 0x100d5599u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d5599;
    case 0x100d55a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d55a8;
    case 0x100d55aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d55aa;
    case 0x100d55b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d55b4;
    case 0x100d55c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_100d55c2;
    case 0x100d55c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); goto E_100d55c5;
    case 0x100d55e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d55e8;
    case 0x100d563au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d563a;
    case 0x100d565cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d565c;
    case 0x100d56b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56b1;
    case 0x100d56bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56bc;
    case 0x100d56cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56cb;
    case 0x100d56d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56d7;
    case 0x100d56e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56e1;
    case 0x100d56edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56ed;
    case 0x100d56f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d56f7;
    case 0x100d5704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5704;
    case 0x100d570eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d570e;
    case 0x100d571bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d571b;
    case 0x100d5729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5729;
    case 0x100d5733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5733;
    case 0x100d5747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5747;
    case 0x100d5756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5756;
    case 0x100d576au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d576a;
    case 0x100d5779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5779;
    case 0x100d5845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5845;
    case 0x100d585cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d585c;
    case 0x100d5866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5866;
    case 0x100d5880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5880;
    case 0x100d588du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d588d;
    case 0x100d589cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d589c;
    case 0x100d58aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d58aa;
    case 0x100d58c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d58c8;
    case 0x100d58d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d58d6;
    case 0x100d58f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d58f2;
    case 0x100d5901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5901;
    case 0x100d590bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_d8 = rd32(sp0 - 0xd8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d590b;
    case 0x100d5916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_100d5916;
    case 0x100d5921u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5921;
    case 0x100d592eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d592e;
    case 0x100d593au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d593a;
    case 0x100d5944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_d8 = rd32(sp0 - 0xd8u); goto E_100d5944;
    case 0x100d5949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5949;
    case 0x100d5958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_100d5958;
    case 0x100d596au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d596a;
    case 0x100d5980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5980;
    case 0x100d5991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_100d5991;
    default: break;
    }
#endif

    COW_AT(100d54c0)
    wr32(sp0 - 0xd0u, in_esi);
    wr32(sp0 - 0xd4u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xd4u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x6cu, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(100d54d3)
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb0u, 0x3f800000u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0xbf800000u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0x3f800000u);
    g->eax = rd32(self);
    g->edx = edx;
    t2 = rd32(self);
    g->esp = sp0 - 0xd4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x210u), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100d551d)
    wr32(sp0 - 0xd8u, eax);
    wr32(sp0 - 0xdcu, sp0 - 0x8cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd4u;
    t5 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x8cu, eax);
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t5;
    edx = t6;
    x0 = d7;
    COW_AT(100d5528)
    if (!(x0 < (double)rdf32(COW_IMG(0x103313a4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103313a4u)), 0u);
    COW_AT(100d55aa)
        g->eax = eax;
        g->edx = rd32(self);
        t19 = rd32(self);
        g->esp = sp0 - 0xd4u;
        t20 = cow_thiscall(g, rd32(t19 + 0x210u), self, 0);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(100d55b4)
        wr32(sp0 - 0xd8u, eax);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        g->eax = sp0 - 0x2cu;
        g->esp = sp0 - 0xd4u;
        t23 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x2cu, eax);
        eax = t23;
    COW_AT(100d55c2)
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103313a4u)), 0u);
    COW_AT(100d5538)
        g->eax = eax;
        g->esp = sp0 - 0xd4u;
        t8 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x1cu, 0);
        eax = t8;
    COW_AT(100d5544)
        wr32(sp0 - 0xd8u, 0x3f060a92u);
        g->eax = eax;
        g->edx = rd32(self);
        t9 = rd32(self);
        g->esp = sp0 - 0xd4u;
        t10 = cow_thiscall_cdecl(g, rd32(t9 + 0x210u), self, 1, 0x3f060a92u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    COW_AT(100d5553)
        wr32(sp0 - 0xdcu, eax);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        g->eax = sp0 - 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0xd4u;
        t12 = cow_thiscall(g, COW_IMG(0x10033420u), sp0 - 0x1cu, 3, sp0 - 0x8cu, eax, 0x3f060a92u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    COW_AT(100d5565)
        wr32(sp0 - 0xd8u, sp0 - 0x6cu);
        g->esp = sp0 - 0xd4u;
        cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0x1cu, 1, sp0 - 0x6cu);
    COW_AT(100d5576)
        wr32(sp0 - 0xd8u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        g->eax = sp0 - 0x2cu;
        g->edx = sp0 - 0x8cu;
        g->esp = sp0 - 0xd4u;
        t14 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x6cu, 2, sp0 - 0x2cu, sp0 - 0x8cu);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    COW_AT(100d558c)
        wr32(sp0 - 0xd8u, sp0 - 0x2cu);
        g->edx = edx;
        g->esp = sp0 - 0xd4u;
        t16 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x2cu);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    COW_AT(100d5599)
        g->eax = eax;
        g->esp = sp0 - 0xd4u;
        t18 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        eax = t18;
    COW_AT(100d55a8)
    }
    COW_AT(100d55c5)
    d24 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x828u));
    wr32(sp0 - 0xd8u, in_ebx);
    wr32(sp0 - 0xdcu, sp0 - 0x2cu);
    wrf32(sp0 - 0xccu, (float)(double)(float)d24);
    wr32(sp0 - 0xe0u, sp0 - 0x9cu);
    g->ecx = sp0 - 0x2cu;
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x9cu, sp0 - 0x2cu);
    t25 = g->ecx;
    t26 = g->edx;
    ecx = t25;
    edx = t26;
    COW_AT(100d55e8)
    d27 = fr(g, (double)rdf32(sp0 - 0xccu) * (double)rdf32(sp0 - 0x8cu));
    d28 = fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(self + 0x828u));
    wr32(sp0 - 0xe4u, sp0 - 0x9cu);
    d29 = (double)(float)fr(g, d28 + d27);
    wrf32(sp0 - 0x9cu, (float)d29);
    d30 = fr(g, fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(self + 0x828u)) + fr(g, (double)rdf32(sp0 - 0xccu) * (double)rdf32(sp0 - 0x88u)));
    wrf32(sp0 - 0x98u, (float)(double)(float)d30);
    d31 = fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(self + 0x828u)) + fr(g, (double)rdf32(sp0 - 0xccu) * (double)rdf32(sp0 - 0x84u)));
    wrf32(sp0 - 0x94u, (float)(double)(float)d31);
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t32 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x9cu, g->ecx, g->edx, 1, 1, sp0 - 0x9cu);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(100d563a)
    d34 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u));
    wr32(sp0 - 0xe8u, self + 0x82cu);
    wr32(sp0 - 0xecu, sp0 - 0xc8u);
    wrf32(sp0 - 0xccu, (float)(double)(float)d34);
    g->eax = eax;
    g->ecx = sp0 - 0xc8u;
    g->esp = sp0 - 0xe4u;
    t35 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xc8u, self + 0x82cu);
    t36 = g->ecx;
    eax = t35;
    ecx = t36;
    COW_AT(100d565c)
    d37 = fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(sp0 + 8u));
    d38 = fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(sp0 - 0xccu));
    wr32(sp0 - 0xf0u, sp0 - 0xc8u);
    d39 = (double)(float)fr(g, d38 + d37);
    wrf32(sp0 - 0xc8u, (float)d39);
    d40 = fr(g, fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(sp0 - 0xccu)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(sp0 + 8u)));
    wrf32(sp0 - 0xc4u, (float)(double)(float)d40);
    d41 = fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(sp0 - 0xccu)) + fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(sp0 + 8u)));
    wrf32(sp0 - 0xc0u, (float)(double)(float)d41);
    g->ecx = ecx;
    g->edx = sp0 - 0xc8u;
    g->esp = sp0 - 0xecu;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xc8u);
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    COW_AT(100d56b1)
    wr32(sp0 - 0xf4u, sp0 - 0xc8u);
    wr32(sp0 - 0xf8u, self + 0x82cu);
    g->eax = sp0 - 0xc8u;
    g->edx = edx;
    g->esp = sp0 - 0xf0u;
    t44 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x82cu, sp0 - 0xc8u);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(100d56bc)
    wr32(sp0 - 0xfcu, 0xbf800000u);
    wr32(sp0 - 0x100u, sp0 - 0xc8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xf8u;
    t46 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xc8u, 0xbf800000u);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(100d56cb)
    g->eax = eax;
    g->esp = sp0 - 0xd8u;
    t48 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x6cu, 0);
    eax = t48;
    COW_AT(100d56d7)
    g->eax = eax;
    g->edx = rd32(self);
    t49 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t50 = cow_thiscall(g, rd32(t49 + 0x1c0u), self, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(100d56e1)
    wr32(sp0 - 0xdcu, rd32(eax));
    g->eax = rd32(eax);
    t52 = rd32(eax);
    g->esp = sp0 - 0xd8u;
    t53 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x6cu, 1, t52);
    eax = t53;
    COW_AT(100d56ed)
    g->eax = eax;
    g->edx = rd32(self);
    t54 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t55 = cow_thiscall(g, rd32(t54 + 0x1c0u), self, 0);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(100d56f7)
    t57 = rd32(eax + 4u);
    wr32(sp0 - 0xdcu, t57);
    g->eax = t57;
    g->esp = sp0 - 0xd8u;
    t58 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x6cu, 1, t57);
    eax = t58;
    COW_AT(100d5704)
    g->eax = eax;
    g->edx = rd32(self);
    t59 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t60 = cow_thiscall(g, rd32(t59 + 0x1c0u), self, 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(100d570e)
    t62 = rd32(eax + 8u);
    wr32(sp0 - 0xdcu, t62);
    g->eax = t62;
    g->edx = edx;
    g->esp = sp0 - 0xd8u;
    t63 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x6cu, 1, t62);
    t64 = g->edx;
    eax = t63;
    edx = t64;
    COW_AT(100d571b)
    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
    g->eax = eax;
    g->esp = sp0 - 0xd8u;
    t65 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x6cu, 1, sp0 - 0xb8u);
    t66 = g->ecx;
    eax = t65;
    ecx = t66;
    COW_AT(100d5729)
    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
    g->esp = sp0 - 0xd8u;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xb8u);
    COW_AT(100d5733)
    wr32(sp0 - 0xe0u, sp0 - 0xb8u);
    wr32(sp0 - 0xe4u, sp0 - 0xc8u);
    wr32(sp0 - 0xe8u, sp0 - 0x7cu);
    g->edx = sp0 - 0x7cu;
    g->esp = sp0 - 0xdcu;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x7cu, sp0 - 0xc8u, sp0 - 0xb8u);
    t67 = g->edx;
    edx = t67;
    COW_AT(100d5747)
    wr32(sp0 - 0xecu, sp0 - 0x7cu);
    wr32(sp0 - 0xf0u, sp0 - 0x7cu);
    g->esp = sp0 - 0xe4u;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x7cu, sp0 - 0x7cu, sp0 - 0x7cu);
    COW_AT(100d5756)
    wr32(sp0 - 0xf4u, sp0 - 0xc8u);
    wr32(sp0 - 0xf8u, sp0 - 0x7cu);
    wr32(sp0 - 0xfcu, sp0 - 0xb8u);
    g->ecx = sp0 - 0xb8u;
    g->esp = sp0 - 0xf0u;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xb8u, sp0 - 0x7cu, sp0 - 0xc8u);
    t68 = g->ecx;
    ecx = t68;
    COW_AT(100d576a)
    wr32(sp0 - 0x100u, sp0 - 0xb8u);
    wr32(sp0 - 0x104u, sp0 - 0xb8u);
    g->esp = sp0 - 0xf8u;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0xb8u, sp0 - 0xb8u, sp0 - 0xb8u);
    COW_AT(100d5779)
    t69 = rd32(sp0 - 0x7cu);
    wr32(sp0 - 0x6cu, t69);
    t70 = rd32(sp0 - 0xc8u);
    wr32(sp0 - 0x5cu, t70);
    t71 = rd32(sp0 - 0x78u);
    wr32(sp0 - 0x68u, t71);
    t72 = rd32(sp0 - 0x74u);
    wr32(sp0 - 0x64u, t72);
    t73 = rd32(sp0 - 0xb8u);
    wr32(sp0 - 0x4cu, t73);
    t74 = rd32(sp0 - 0xc4u);
    wr32(sp0 - 0x58u, t74);
    t75 = rd32(sp0 - 0xc0u);
    wr32(sp0 - 0x54u, t75);
    wr32(sp0 - 0xdcu, sp0 - 0x6cu);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x50u, 0u);
    t76 = rd32(sp0 - 0xb4u);
    wr32(sp0 - 0x48u, t76);
    t77 = rd32(sp0 - 0xb0u);
    wr32(sp0 - 0x44u, t77);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    g->esp = sp0 - 0xd8u;
    cow_thiscall(g, COW_IMG(0x10027d10u), arg1, 1, sp0 - 0x6cu);
    COW_AT(100d5845)
    wr32(sp0 - 0xdcu, sp0 - 0x2cu);
    wr32(sp0 - 0xe0u, sp0 - 0x8cu);
    wr32(sp0 - 0xe4u, sp0 - 0x7cu);
    g->eax = sp0 - 0x8cu;
    g->ecx = sp0 - 0x7cu;
    g->esp = sp0 - 0xd8u;
    t78 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x7cu, sp0 - 0x8cu, sp0 - 0x2cu);
    t79 = g->ecx;
    eax = t78;
    ecx = t79;
    COW_AT(100d585c)
    wr32(sp0 - 0xe8u, sp0 - 0x7cu);
    g->esp = sp0 - 0xe4u;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0x7cu);
    COW_AT(100d5866)
    wr32(sp0 - 0xecu, sp0 - 0x7cu);
    wr32(sp0 - 0xf0u, sp0 - 0x2cu);
    wr32(sp0 - 0xf4u, sp0 - 0xcu);
    g->ecx = sp0 - 0x2cu;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0xe8u;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xcu, sp0 - 0x2cu, sp0 - 0x7cu);
    t80 = g->ecx;
    t81 = g->edx;
    ecx = t80;
    edx = t81;
    COW_AT(100d5880)
    wr32(sp0 - 0xf8u, sp0 - 0xcu);
    g->esp = sp0 - 0xf4u;
    t82 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
    eax = t82;
    COW_AT(100d588d)
    wr32(sp0 - 0xdcu, 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t83 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t84 = cow_thiscall(g, rd32(t83 + 0x3c8u), self, 1, 0u);
    t85 = g->edx;
    eax = t84;
    edx = t85;
    COW_AT(100d589c)
    wr32(sp0 - 0xdcu, 0u);
    g->eax = rd32(self);
    t86 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t87 = cow_thiscall(g, rd32(t86 + 0x3c8u), self, 1, 0u);
    ebx = eax;
    eax = t87;
    COW_AT(100d58aa)
    d88 = fr(g, (double)rdf32(ebx + 0x10u) - (double)rdf32(eax + 0x14u));
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wrf32(sp0 - 0xa8u, (float)(double)(float)d88);
    g->eax = eax;
    g->edx = rd32(self);
    t89 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t90 = cow_thiscall(g, rd32(t89 + 0x3c8u), self, 1, 0u);
    t91 = g->edx;
    eax = t90;
    edx = t91;
    COW_AT(100d58c8)
    wr32(sp0 - 0xdcu, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t92 = rd32(self);
    g->esp = sp0 - 0xd8u;
    t93 = cow_thiscall(g, rd32(t92 + 0x3c8u), self, 1, 0u);
    t94 = g->ecx;
    t95 = g->edx;
    ecx = t94;
    edx = t95;
    ebx = eax;
    eax = t93;
    COW_AT(100d58d6)
    d96 = fr(g, (double)rdf32(ebx + 8u) - (double)rdf32(eax + 0xcu));
    wrf32(sp0 - 0xa0u, (float)(double)(float)d96);
    d97 = fr(g, d96 / (double)rdf32(sp0 - 0xa8u));
    if (!(d97 < (double)rdf32(COW_IMG(0x103313a0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d97, (double)rdf32(COW_IMG(0x103313a0u)), 1u);
        ebx = rd32(sp0 - 0xd8u);
        x0 = d97;
        goto L_100d5921;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d97, (double)rdf32(COW_IMG(0x103313a0u)), 1u);
    ebx = rd32(sp0 - 0xd8u);
    x0 = d97;
    COW_AT(100d58f2)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a30u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a30u)), 1u) & 0x4100u;
        goto L_100d5921;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a30u)), 1u) & 0x4100u;
    COW_AT(100d5901)
    wr32(self + 0x828u, 0x3f800000u);
L_100d590b: ;
    COW_AT(100d590b)
    g->esp = sp0 - 0xd4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(100d5916)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xd0u);
    g->edi = rd32(sp0 - 0xd4u);
    return;
L_100d5921: ;
    COW_AT(100d5921)
    if (!(x0 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100d593a)
        wr32(sp0 - 0xd8u, COW_IMG(0x1035f5f0u));
        wr32(sp0 - 0xdcu, sp0 - 0xa8u);
        edx = sp0 - 0xa8u;
        loc_d8 = COW_IMG(0x1035f5f0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100d592e)
        wr32(sp0 - 0xd8u, COW_IMG(0x1035f5e4u));
        wr32(sp0 - 0xdcu, sp0 - 0xa8u);
        ecx = sp0 - 0xa8u;
        loc_d8 = COW_IMG(0x1035f5e4u);
    }
    COW_AT(100d5944)
    g->edx = edx;
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xa8u, loc_d8);
    t98 = g->edx;
    edx = t98;
    COW_AT(100d5949)
    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
    g->eax = sp0 - 0xa8u;
    g->esp = sp0 - 0xd4u;
    t99 = cow_thiscall(g, COW_IMG(0x10028200u), arg1, 1, sp0 - 0xa8u);
    eax = t99;
    COW_AT(100d5958)
    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
    wr32(sp0 - 0xdcu, sp0 - 0xcu);
    g->eax = eax;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0xd4u;
    t100 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xa8u);
    t101 = g->edx;
    d102 = cow_take_float(g);
    eax = t100;
    edx = t101;
    x0 = d102;
    COW_AT(100d596a)
    d103 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x828u, (float)x0);
    if (!(x0 < d103))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d103, 1u);
        goto L_100d590b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d103, 1u);
    COW_AT(100d5980)
    wrf32(self + 0x828u, (float)-x0);
    g->esp = sp0 - 0xd4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(100d5991)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xd0u);
    g->edi = rd32(sp0 - 0xd4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d54c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d54d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xd4u);
        in_esi = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100d551du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xb4u, 0u);
        wr32(sp0 - 0xb0u, 0x3f800000u);
        wr32(sp0 - 0x8cu, 0u);
        wr32(sp0 - 0x88u, 0xbf800000u);
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100d5528u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5538u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5544u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5553u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        wr32(sp0 - 0xd8u, 0x3f060a92u);
        (void)sp0;
        return 1;
    }
    case 0x100d5565u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5576u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xd8u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100d558cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        wr32(sp0 - 0xd8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5599u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        wr32(sp0 - 0xd8u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        wr32(sp0 - 0xd8u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xdcu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d55e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d563au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d565cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xecu;
        g->edi = self + 0x82cu;
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf0u;
        g->edi = self + 0x82cu;
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x100u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d56f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5704u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d570eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d571bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5729u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5733u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x9cu);
        wr32(sp0 - 0xe0u, sp0 - 0x9cu);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5747u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe8u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0xc8u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0xc8u);
        wr32(sp0 - 0xe0u, sp0 - 0xb8u);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5756u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0xc8u);
        wr32(sp0 - 0xe0u, sp0 - 0xb8u);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d576au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0x100u, sp0 - 0xc8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0xc8u);
        wr32(sp0 - 0xe0u, sp0 - 0xb8u);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5779u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0xc8u);
        wr32(sp0 - 0xe0u, sp0 - 0xb8u);
        wr32(sp0 - 0xdcu, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5845u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0xc8u);
        wr32(sp0 - 0xe0u, sp0 - 0xb8u);
        wr32(sp0 - 0xdcu, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100d585cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5866u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xc8u);
        wr32(sp0 - 0xf0u, sp0 - 0x7cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5880u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0x7cu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d588du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100d589cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d58aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d58c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d58d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd8u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d58f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5901u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d590bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_d8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_d8 = rd32(sp0 - 0xd8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5916u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5921u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d592eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d593au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5944u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5949u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5958u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xa8u);
        wr32(sp0 - 0xd8u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100d596au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xcu);
        wr32(sp0 - 0xd8u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5980u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xcu);
        wr32(sp0 - 0xd8u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x100d5991u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0xb8u);
        wr32(sp0 - 0x100u, sp0 - 0xb8u);
        wr32(sp0 - 0xfcu, sp0 - 0xb8u);
        wr32(sp0 - 0xf8u, sp0 - 0xcu);
        wr32(sp0 - 0xf4u, sp0 - 0xcu);
        wr32(sp0 - 0xf0u, sp0 - 0x2cu);
        wr32(sp0 - 0xecu, sp0 - 0x7cu);
        wr32(sp0 - 0xe8u, sp0 - 0x7cu);
        wr32(sp0 - 0xe4u, sp0 - 0x7cu);
        wr32(sp0 - 0xe0u, sp0 - 0x8cu);
        wr32(sp0 - 0xdcu, sp0 - 0xcu);
        wr32(sp0 - 0xd8u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d54c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100d54c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
