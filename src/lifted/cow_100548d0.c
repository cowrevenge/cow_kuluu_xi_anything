/* f_0x100548d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100548d0(Guest* g)
{
    double d1;
    double d100;
    double d103;
    double d108;
    double d112;
    double d116;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d26;
    double d27;
    double d28;
    double d29;
    double d33;
    double d34;
    double d40;
    double d44;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d57;
    double d61;
    double d75;
    double d76;
    double d83;
    double d87;
    double d91;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_38;
    uint32_t t10;
    uint32_t t101;
    uint32_t t102;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
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
    uint32_t t73;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100548f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_100548f7;
    case 0x10054905u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054905;
    case 0x1005490du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1005490d;
    case 0x10054912u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054912;
    case 0x1005491au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1005491a;
    case 0x10054921u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054921;
    case 0x1005493bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1005493b;
    case 0x10054994u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054994;
    case 0x10054999u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054999;
    case 0x100549bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100549bd;
    case 0x100549d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100549d5;
    case 0x10054a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054a19;
    case 0x10054a2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054a2e;
    case 0x10054a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054a3e;
    case 0x10054a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054a5b;
    case 0x10054aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054aab;
    case 0x10054ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054ac1;
    case 0x10054ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054ae7;
    case 0x10054af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054af7;
    case 0x10054affu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054aff;
    case 0x10054b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054b1a;
    case 0x10054b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054b2a;
    case 0x10054b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054b41;
    case 0x10054b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10054b52;
    case 0x10054b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10054b56;
    case 0x10054b58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10054b58;
    case 0x10054b86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054b86;
    case 0x10054b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054b96;
    case 0x10054bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054bbe;
    case 0x10054be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054be6;
    case 0x10054c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10054c0e;
    case 0x10054c4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054c4b;
    case 0x10054c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054c53;
    case 0x10054c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054c78;
    case 0x10054c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054c80;
    case 0x10054ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054ca1;
    case 0x10054ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054ca7;
    case 0x10054cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054cac;
    case 0x10054cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054cb1;
    case 0x10054cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054cd5;
    case 0x10054cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054cdb;
    case 0x10054ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054ce0;
    case 0x10054ce5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054ce5;
    case 0x10054d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054d0a;
    case 0x10054d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10054d10;
    case 0x10054d15u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054d15;
    case 0x10054d1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054d1a;
    case 0x10054d3du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054d3d;
    case 0x10054d43u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10054d43;
    case 0x10054d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10054d48;
    case 0x10054d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10054d4d;
    case 0x10054d5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10054d5b;
    case 0x10054d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10054d5e;
    default: break;
    }
#endif

    COW_AT(100548d0)
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x48u, self);
    d1 = fr(g, (double)rdf32(self + 0x138u) * (double)rdf32(self + 0x134u));
    wrf32(sp0 - 0x48u, (float)(double)(float)d1);
    wr32(sp0 - 0x4cu, sp0 - 0x2cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t2 = cow_call_regs(g, COW_IMG(0x1003e330u), sp0 - 0x2cu, self + 0xf8u, g->edx, 0, 2, sp0 - 0x2cu, cow_f2bits((double)(float)d1));
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100548f7)
    t4 = rd32(eax);
    wr32(COW_IMG(0x1047bc0cu), t4);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t5 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10054905)
    if (eax == 0u) goto L_100549bd;
    COW_AT(1005490d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t8 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10054912)
    if (eax == 0u) goto L_100549bd;
    COW_AT(1005491a)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t10 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    eax = t10;
    COW_AT(10054921)
    t11 = rd32(eax + 0x30u);
    wr32(sp0 - 0x28u, t11);
    t12 = rd32(eax + 0x34u);
    wr32(sp0 - 0x24u, t12);
    t13 = rd32(eax + 0x38u);
    wr32(sp0 - 0x20u, t13);
    g->eax = t13;
    g->edx = t12;
    g->esp = sp0 - 0x44u;
    t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1005493b)
    t16 = rd32(eax + 0x4cu);
    d17 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(eax + 0x44u));
    wr32(sp0 - 0x30u, t16);
    wrf32(sp0 - 0x28u, (float)(double)(float)d17);
    d18 = fr(g, (double)(float)d17 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    d19 = fr(g, (double)rdf32(sp0 - 0x20u) - cow_bits2f(t16));
    d20 = fr(g, (double)rdf32(sp0 - 0x24u) - (double)rdf32(eax + 0x48u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d18);
    d21 = fr(g, d20 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d21);
    d22 = fr(g, d19 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(sp0 - 0x20u, (float)(double)(float)d22);
    g->eax = eax + 0x44u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t23 = cow_thiscall(g, COW_IMG(0x10074700u), sp0 - 0x28u, 0);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10054994)
    g->esp = sp0 - 0x44u;
    cow_stdcall(g, COW_IMG(0x10014d80u), 0);
    d26 = cow_take_float(g);
    x0 = d26;
    COW_AT(10054999)
    d27 = fr(g, (double)rdf32(sp0 - 0x28u) * -x0);
    wrf32(sp0 - 0x28u, (float)(double)(float)d27);
    d28 = fr(g, (double)rdf32(sp0 - 0x24u) * -x0);
    wrf32(sp0 - 0x24u, (float)(double)(float)d28);
    d29 = fr(g, (double)rdf32(sp0 - 0x20u) * -x0);
    wrf32(sp0 - 0x20u, (float)(double)(float)d29);
L_100549d5: ;
    COW_AT(100549d5)
    d33 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x48u, (float)d33);
    d34 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x4cu, (float)d34);
    t35 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x50u, t35);
    t36 = rd32(COW_IMG(0x1047bbb4u)) + 0x10u;
    wr32(sp0 - 0x54u, t36);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, sp0 - 0x1cu);
    wr32(sp0 - 0x60u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t37 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x44u;
    t38 = cow_thiscall(g, rd32(t37 + 0x80u), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x28u, sp0 - 0x1cu, 1u, t36, t35, cow_f2bits(d34), cow_f2bits(d33));
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(10054a19)
    d40 = (double)rdf32(sp0 - 0x14u);
    if (d40 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
    COW_AT(10054a2e)
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        g->edx = edx;
        t41 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x44u;
        t42 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t41 + 0xdc8u), 0);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    COW_AT(10054a3e)
        d44 = fr(g, (double)(int32_t)rd32(eax + 8u) * (double)rdf32(COW_IMG(0x1032b088u)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d44);
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        t45 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0 - 0x44u;
        t46 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t45 + 0xdc8u), 0);
        eax = t46;
    COW_AT(10054a5b)
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        d47 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(sp0 - 0x3cu));
        d48 = fr(g, (double)(int32_t)rd32(eax + 0xcu) * (double)rdf32(COW_IMG(0x1032b088u)));
        wr32(sp0 - 0x50u, 1u);
        wr32(sp0 - 0x54u, rd32(COW_IMG(0x10456d58u)));
        wr32(sp0 - 0x58u, rd32(COW_IMG(0x10456d50u)));
        wrf32(sp0 - 0x10u, (float)(double)(float)d47);
        d49 = fr(g, (double)rdf32(sp0 - 0x18u) - d48);
        wrf32(sp0 - 0xcu, (float)(double)(float)d49);
        d50 = fr(g, (double)rdf32(sp0 - 0x1cu) + (double)rdf32(sp0 - 0x3cu));
        wrf32(sp0 - 8u, (float)(double)(float)d50);
        d51 = fr(g, (double)rdf32(sp0 - 0x18u) + d48);
        wrf32(sp0 - 4u, (float)(double)(float)d51);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x10456d58u));
        g->edx = rd32(COW_IMG(0x10456d50u));
        t52 = rd32(COW_IMG(0x10456d58u));
        t53 = rd32(COW_IMG(0x10456d50u));
        g->esp = sp0 - 0x58u;
        t54 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
        t55 = g->ecx;
        t56 = g->edx;
        eax = t54;
        ecx = t55;
        edx = t56;
    COW_AT(10054aab)
        wr32(sp0 - 0x5cu, ecx);
        wr32(sp0 - 0x3cu, (uint16_t)eax);
        d57 = (double)(float)(double)(int32_t)(uint16_t)eax;
        wrf32(sp0 - 0x5cu, (float)d57);
        g->eax = (uint16_t)eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t58 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
        t59 = g->ecx;
        t60 = g->edx;
        eax = t58;
        ecx = t59;
        edx = t60;
    COW_AT(10054ac1)
        wr32(sp0 - 0x60u, ecx);
        wr32(sp0 - 0x3cu, (uint16_t)eax);
        d61 = (double)(float)(double)(int32_t)(uint16_t)eax;
        wrf32(sp0 - 0x60u, (float)d61);
        t62 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x64u, t62);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        g->eax = t62;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t63 = cow_thiscall(g, COW_IMG(0x1006c280u), self + 0x17fu, 9, sp0 - 0x10u, t62, cow_f2bits(d61), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
        t64 = g->edx;
        eax = t63;
        edx = t64;
    COW_AT(10054ae7)
        if (rd32(self + 0x104u) == 0u)
        {
            eax = rd32(self + 0x104u);
        }
        else
        {
            edi = eax;
            eax = rd32(self + 0x104u);
    COW_AT(10054af7)
            if ((int32_t)edi > 0)
            {
    COW_AT(10054aff)
                wr32(sp0 - 0x48u, rd32(COW_IMG(0x1047bc0cu)));
                wr32(sp0 - 0x4cu, 0x3cu);
                t65 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x50u, t65);
                g->edx = rd32(COW_IMG(0x1047bc0cu));
                t66 = rd32(COW_IMG(0x1047bc0cu));
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t65, 0x3cu, t66);
                t67 = g->edx;
                edx = t67;
    COW_AT(10054b1a)
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                g->edx = edx;
                t68 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x44u;
                t69 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t68 + 0xdc8u), 0);
                t70 = g->edx;
                eax = t69;
                edx = t70;
    COW_AT(10054b2a)
                t71 = rd32(eax + 0xcu);
                wr32(sp0 - 0x3cu, t71);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t72 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x44u;
                t73 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t72 + 0xdc8u), 0);
                eax = t73;
    COW_AT(10054b41)
                t74 = rd32(eax + 8u);
                wr32(sp0 - 0x38u, t74);
                if (rd32(self + 0x104u) == 0u)
                {
                    loc_38 = t74;
    COW_AT(10054b56)
                    eax = 0u;
                }
                else
                {
                    eax = rd32(self + 0x104u);
                    loc_38 = t74;
    COW_AT(10054b52)
                    eax = rd32(eax);
                }
    COW_AT(10054b58)
                wr32(sp0 - 0x48u, 0u);
                d75 = fr(g, (double)(int32_t)rd32(sp0 - 0x3cu) - (double)rdf32(sp0 - 0x18u));
                wrf32(sp0 - 0x4cu, (float)(double)(float)d75);
                d76 = fr(g, (double)(int32_t)loc_38 - (double)rdf32(sp0 - 0x1cu));
                wrf32(sp0 - 0x50u, (float)(double)(float)d76);
                t77 = rd32(sp0 - 0x18u);
                wr32(sp0 - 0x54u, t77);
                t78 = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x58u, t78);
                wr32(sp0 - 0x5cu, edi);
                g->edx = t77;
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, COW_IMG(0x1003ebf0u), eax, 6, edi, t78, t77, cow_f2bits((double)(float)d76), cow_f2bits((double)(float)d75), 0u);
                t79 = g->edx;
                edx = t79;
    COW_AT(10054b86)
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t80 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x44u;
                t81 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t80 + 0xdc8u), 0);
                eax = t81;
    COW_AT(10054b96)
                t82 = (uint32_t)((int32_t)(rd32(eax + 8u) - (uint32_t)((int32_t)rd32(eax + 8u) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t82);
                d83 = fr(g, (double)(int32_t)t82 - (double)rdf32(sp0 - 0x1cu));
                wrf32(sp0 - 0x3cu, (float)(double)(float)d83);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t84 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x44u;
                t85 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t84 + 0xdc8u), 0);
                eax = t85;
    COW_AT(10054bbe)
                t86 = (uint32_t)((int32_t)(rd32(eax + 0xcu) - (uint32_t)((int32_t)rd32(eax + 0xcu) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t86);
                d87 = fr(g, (double)(int32_t)t86 - (double)rdf32(sp0 - 0x18u));
                wrf32(sp0 - 0x2cu, (float)(double)(float)d87);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t88 = rd32(COW_IMG(0x1047bfa8u));
                g->esp = sp0 - 0x44u;
                t89 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t88 + 0xdc8u), 0);
                eax = t89;
    COW_AT(10054be6)
                t90 = (uint32_t)((int32_t)(rd32(eax + 8u) - (uint32_t)((int32_t)rd32(eax + 8u) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t90);
                d91 = fr(g, (double)rdf32(sp0 - 0x3cu) / (double)(int32_t)t90);
                wrf32(sp0 - 0x3cu, (float)(double)(float)d91);
                g->eax = rd32(COW_IMG(0x1047bfa8u));
                t92 = rd32(COW_IMG(0x1047bfa8u));
                t93 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
                g->esp = sp0 - 0x44u;
                t94 = cow_thiscall(g, COW_IMG(0x10009e00u), t93, 0);
                t95 = g->ecx;
                eax = t94;
                ecx = t95;
    COW_AT(10054c0e)
                t96 = (uint32_t)((int32_t)(rd32(eax + 0xcu) - (uint32_t)((int32_t)rd32(eax + 0xcu) >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x38u, t96);
                d97 = fr(g, (double)rdf32(sp0 - 0x2cu) / (double)(int32_t)t96);
                d98 = (double)rdf32(sp0 - 0x3cu);
                d99 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, sqrt(fr(g, fr(g, d97 * d97) + fr(g, d98 * d98)))) * (double)rdf32(COW_IMG(0x1032b6d4u))));
                if (!(d99 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t96 & 0xffff0000u) | (uint16_t)cow_fsw(g, d99, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d99;
                }
                else
                {
                    eax = (t96 & 0xffff0000u) | (uint16_t)cow_fsw(g, d99, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    x0 = d99;
    COW_AT(10054c4b)
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
    COW_AT(10054c53)
                d100 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
                wr32(sp0 - 0x2cu, (uint32_t)((int32_t)edi >> 3u));
                t101 = rd32(self + 0x19cu);
                wr32(sp0 - 0x38u, t101);
                if (rd32(self + 0x19cu) != 0u)
                {
                    loc_38 = t101;
                    x0 = fr(g, fr(g, d100 * (double)(int32_t)(uint32_t)((int32_t)edi >> 3u)) * (double)rdf32(COW_IMG(0x1032a778u)));
                }
                else
                {
                    x0 = fr(g, fr(g, d100 * (double)(int32_t)(uint32_t)((int32_t)edi >> 3u)) * (double)rdf32(COW_IMG(0x1032a778u)));
    COW_AT(10054c78)
                    wr32(sp0 - 0x38u, 0x80808080u);
                    loc_38 = 0x80808080u;
                }
    COW_AT(10054c80)
                t102 = (uint8_t)rd32(sp0 - 0x36u);
                wr32(sp0 - 0x2cu, t102);
                d103 = fr(g, (double)(int32_t)t102 * x0);
                if (!(d103 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d103, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    edx = t102;
                    x1 = d103;
    COW_AT(10054ca7)
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t104 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t105 = g->ecx;
                    t106 = g->edx;
                    eax = t104;
                    ecx = t105;
                    edx = t106;
    COW_AT(10054cac)
                    eax = (uint8_t)eax;
                    loc_38 = rd32(sp0 - 0x38u);
                }
                else
                {
                    edx = t102;
                    x1 = d103;
    COW_AT(10054ca1)
                    eax = 0u;
                }
    COW_AT(10054cb1)
                wr8(sp0 - 0x36u, (uint8_t)eax);
                t107 = (uint8_t)rd32(sp0 - 0x37u);
                wr32(sp0 - 0x2cu, t107);
                d108 = fr(g, (double)(int32_t)t107 * x0);
                if (!(d108 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (t107 & 0xffff0000u) | (uint16_t)cow_fsw(g, d108, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    x1 = d108;
    COW_AT(10054cdb)
                    g->edx = edx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t109 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t110 = g->edx;
                    eax = t109;
                    edx = t110;
    COW_AT(10054ce0)
                    eax = (uint8_t)eax;
                }
                else
                {
                    x1 = d108;
    COW_AT(10054cd5)
                    eax = 0u;
                }
    COW_AT(10054ce5)
                wr8(sp0 - 0x37u, (uint8_t)eax);
                t111 = (uint8_t)rd32(sp0 - 0x38u);
                wr32(sp0 - 0x2cu, t111);
                d112 = fr(g, (double)(int32_t)t111 * x0);
                if (!(d112 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d112, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                    ecx = t111;
                    x1 = d112;
    COW_AT(10054d10)
                    g->ecx = ecx;
                    fpush(g, x1);
                    g->esp = sp0 - 0x44u;
                    t113 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t114 = g->ecx;
                    eax = t113;
                    ecx = t114;
    COW_AT(10054d15)
                    eax = (uint8_t)eax;
                }
                else
                {
                    ecx = t111;
                    x1 = d112;
    COW_AT(10054d0a)
                    eax = 0u;
                }
    COW_AT(10054d1a)
                t115 = rd32(sp0 - 0x35u);
                wr8(sp0 - 0x38u, (uint8_t)eax);
                wr32(sp0 - 0x2cu, (uint8_t)t115);
                d116 = fr(g, x0 * (double)(int32_t)(uint8_t)t115);
                if (!(d116 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d116, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                    edx = (uint8_t)t115;
                    x0 = d116;
    COW_AT(10054d43)
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x0);
                    g->esp = sp0 - 0x44u;
                    t117 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t118 = g->ecx;
                    t119 = g->edx;
                    eax = t117;
                    ecx = t118;
                    edx = t119;
    COW_AT(10054d48)
                    eax = (uint8_t)eax;
                }
                else
                {
                    edx = (uint8_t)t115;
                    x0 = d116;
    COW_AT(10054d3d)
                    eax = 0u;
                }
    COW_AT(10054d4d)
                wr8(sp0 - 0x35u, (uint8_t)eax);
                t120 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x48u, t120);
                g->eax = t120;
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t121 = cow_cdecl(g, COW_IMG(0x10014f70u), 1, t120);
                t122 = g->edx;
                eax = t121;
                edx = t122;
    COW_AT(10054d5b)
            }
        }
    }
    COW_AT(10054d5e)
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->edx = edx;
    return eax;
L_100549bd: ;
    COW_AT(100549bd)
    t30 = rd32(self + 0x54u);
    wr32(sp0 - 0x28u, t30);
    t31 = rd32(self + 0x58u);
    wr32(sp0 - 0x24u, t31);
    t32 = rd32(self + 0x5cu);
    wr32(sp0 - 0x20u, t32);
    goto L_100549d5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100548d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100548f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054905u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1005490du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054912u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1005491au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054921u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1005493bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054999u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100549bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100549d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x4cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10054a19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10054a2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10054a3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10054a5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10054aabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x1cu);
        wr32(sp0 - 0x50u, 1u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10054ac1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10054ae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054affu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054b96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054bbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054be6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054c0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054c4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054c53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054c78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054c80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054ca1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054ca7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054cacu:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054cb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054cd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054cdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054ce0u:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054ce5u:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d15u:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d1au:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d3du:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d43u:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10054d5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100548d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100548d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
