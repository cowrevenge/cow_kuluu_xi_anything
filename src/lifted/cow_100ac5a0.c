/* f_0x100ac5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100ac5a0(Guest* g)
{
    double d24;
    double d25;
    double d26;
    double d41;
    double d42;
    double d44;
    double d45;
    double d47;
    double d48;
    double d50;
    double d51;
    double d53;
    double d54;
    double d56;
    double d57;
    double d59;
    double d60;
    double d62;
    double d63;
    double d70;
    double d73;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_100;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_e4;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
    uint32_t loc_fc;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t43;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t52;
    uint32_t t55;
    uint32_t t58;
    uint32_t t6;
    uint32_t t61;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
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
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 328u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ac5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100ac5bb;
    case 0x100ac5c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100ac5c0;
    case 0x100ac5c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100ac5c7;
    case 0x100ac5d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100ac5d2;
    case 0x100ac5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); g->ebp = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100ac5da;
    case 0x100ac647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100ac647;
    case 0x100ac65cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); goto E_100ac65c;
    case 0x100ac69cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100ac69c;
    case 0x100ac6b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100ac6b2;
    case 0x100ac6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100ac6ba;
    case 0x100ac723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); goto E_100ac723;
    case 0x100ac750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100ac750;
    case 0x100ac758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_100ac758;
    case 0x100ac769u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_100ac769;
    case 0x100ac771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_100ac771;
    case 0x100ac782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_100ac782;
    case 0x100ac78au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_100ac78a;
    case 0x100ac79bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); goto E_100ac79b;
    case 0x100ac7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_100ac7a3;
    case 0x100ac7b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_100ac7b2;
    case 0x100ac7bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); goto E_100ac7ba;
    case 0x100ac7c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); goto E_100ac7c9;
    case 0x100ac7d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); goto E_100ac7d1;
    case 0x100ac7e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); goto E_100ac7e0;
    case 0x100ac7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100ac7e8;
    case 0x100ac7f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); goto E_100ac7f7;
    case 0x100ac7ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); goto E_100ac7ff;
    case 0x100ac80eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); goto E_100ac80e;
    case 0x100ac825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); goto E_100ac825;
    case 0x100ac8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100ac8a1;
    case 0x100ac8c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); goto E_100ac8c2;
    default: break;
    }
#endif

    COW_AT(100ac5a0)
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x120u;
    t2 = cow_thiscall(g, rd32(t1 + 0x148u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        edi = 0u;
    }
    else
    {
        ecx = t3;
        edx = t4;
    COW_AT(100ac5bb)
        edi = 1u;
    }
    COW_AT(100ac5c0)
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x70u);
    COW_AT(100ac5c7)
        t5 = rd8(eax + 0x130u) & 1u;
        ebp = t5;
    }
    COW_AT(100ac5d2)
    if (edi != 0u)
    {
        loc_118 = in_ebp;
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_100ac8c2;
    }
    COW_AT(100ac5da)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t6 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xd0u, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t14 = g->edx;
    wr32(sp0 - 0x124u, t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x80u, 1, t13);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t19 = g->edx;
    wr32(sp0 - 0x124u, t18);
    t20 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t18);
    wr32(sp0 - 0x124u, self + 0xd4u);
    wr32(sp0 - 0x128u, sp0 - 0x90u);
    g->edx = sp0 - 0x90u;
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x80u, 2, sp0 - 0x90u, self + 0xd4u);
    t21 = g->edx;
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu);
        edx = t21;
        goto L_100ac69c;
    }
    eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1cu);
    ecx = rd32(COW_IMG(0x1065cb04u));
    edx = t21;
    COW_AT(100ac647)
    wr32(sp0 - 0x124u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t22 = cow_thiscall(g, COW_IMG(0x1018b8f0u), ecx, 1, 0u);
    t23 = g->edx;
    d24 = cow_take_float(g);
    d25 = (double)rdf32(sp0 - 0x88u);
    if (!(d24 < d25))
    {
        eax = (t22 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, d25, 0u);
        edx = t23;
        goto L_100ac6b2;
    }
    eax = (t22 & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, d25, 0u);
    edx = t23;
L_100ac65c: ;
    COW_AT(100ac65c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t83 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t84 = g->edx;
    g->edx = t84;
    t85 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t86 = g->edx;
    g->edx = t86;
    t87 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t88 = g->edx;
    t89 = rd8(self + 0xb2u);
    wr8(self + 0xb0u, 1u);
    t90 = rd32(sp0 - 0x120u);
    wr8(self + 0xb2u, (uint8_t)(t89 | 1u));
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = t90;
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = t88;
    return ((t87 | t89) & 0xffffff00u) | (uint8_t)(t89 | 1u);
L_100ac69c: ;
    COW_AT(100ac69c)
    d26 = (double)rdf32(sp0 - 0x88u);
    if ((cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
        goto L_100ac65c;
    }
    eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x1032a3c8u)), 0u) & 0x4100u;
L_100ac6b2: ;
    COW_AT(100ac6b2)
    if (ebp != 0u) goto L_100ac8a1;
    COW_AT(100ac6ba)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t27 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xd0u, 0);
    t28 = g->edx;
    wr32(sp0 - 0x124u, self + 0xd4u);
    g->edx = t28;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xd0u, 1, self + 0xd4u);
    t29 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0xd0u, 1, sp0 - 0x80u);
    t31 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0x40u);
    t32 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0xd0u, 1, sp0 - 0x40u);
    wr32(sp0 - 0x124u, COW_IMG(0x1035bd98u));
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    cow_thiscall(g, COW_IMG(0x10028370u), sp0 - 0xd0u, 2, sp0 - 0x100u, COW_IMG(0x1035bd98u));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    t35 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x100u);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, sp0 - 0xf0u);
    g->edx = sp0 - 0xf0u;
    g->esp = sp0 - 0x124u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0xf0u, sp0 - 0x100u);
    t36 = g->edx;
    edx = t36;
    edi = COW_IMG(0x1035bda8u);
    loc_100 = rd32(sp0 - 0x100u);
    loc_fc = rd32(sp0 - 0xfcu);
    loc_f8 = rd32(sp0 - 0xf8u);
    loc_f4 = rd32(sp0 - 0xf4u);
    loc_f0 = rd32(sp0 - 0xf0u);
    loc_ec = rd32(sp0 - 0xecu);
    loc_e8 = rd32(sp0 - 0xe8u);
    loc_e4 = rd32(sp0 - 0xe4u);
L_100ac723: ;
    COW_AT(100ac723)
    wr32(sp0 - 0x124u, edi);
    wr32(sp0 - 0x128u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t37 = cow_thiscall(g, COW_IMG(0x10028370u), sp0 - 0xd0u, 2, sp0 - 0x114u, edi);
    t38 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0x114u);
    g->edx = t38;
    t39 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x114u);
    t40 = g->edx;
    d41 = (double)rdf32(sp0 - 0x100u);
    d42 = (double)rdf32(sp0 - 0x114u);
    if ((cow_fsw(g, d41, d42, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d41, d42, 0u) & 0x4100u;
        edx = t40;
        loc_100 = rd32(sp0 - 0x100u);
    }
    else
    {
        eax = cow_fsw(g, d41, d42, 0u) & 0x4100u;
    COW_AT(100ac750)
        t43 = rd32(sp0 - 0x114u);
        wr32(sp0 - 0x100u, t43);
        edx = t43;
        loc_100 = t43;
    }
    COW_AT(100ac758)
    d44 = (double)rdf32(sp0 - 0xfcu);
    d45 = (double)rdf32(sp0 - 0x110u);
    if ((cow_fsw(g, d44, d45, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d44, d45, 0u) & 0x4100u;
        loc_fc = rd32(sp0 - 0xfcu);
    }
    else
    {
    COW_AT(100ac769)
        t46 = rd32(sp0 - 0x110u);
        wr32(sp0 - 0xfcu, t46);
        eax = t46;
        loc_fc = t46;
    }
    COW_AT(100ac771)
    d47 = (double)rdf32(sp0 - 0xf8u);
    d48 = (double)rdf32(sp0 - 0x10cu);
    if ((cow_fsw(g, d47, d48, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
        loc_f8 = rd32(sp0 - 0xf8u);
    }
    else
    {
        eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
    COW_AT(100ac782)
        t49 = rd32(sp0 - 0x10cu);
        wr32(sp0 - 0xf8u, t49);
        loc_f8 = t49;
    }
    COW_AT(100ac78a)
    d50 = (double)rdf32(sp0 - 0xf4u);
    d51 = (double)rdf32(sp0 - 0x108u);
    if ((cow_fsw(g, d50, d51, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d50, d51, 0u) & 0x4100u;
        loc_f4 = rd32(sp0 - 0xf4u);
    }
    else
    {
        eax = cow_fsw(g, d50, d51, 0u) & 0x4100u;
    COW_AT(100ac79b)
        t52 = rd32(sp0 - 0x108u);
        wr32(sp0 - 0xf4u, t52);
        edx = t52;
        loc_f4 = t52;
    }
    COW_AT(100ac7a3)
    d53 = (double)rdf32(sp0 - 0xf0u);
    d54 = (double)rdf32(sp0 - 0x114u);
    if (!(d53 < d54))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d53, d54, 0u);
        loc_f0 = rd32(sp0 - 0xf0u);
    }
    else
    {
    COW_AT(100ac7b2)
        t55 = rd32(sp0 - 0x114u);
        wr32(sp0 - 0xf0u, t55);
        eax = t55;
        loc_f0 = t55;
    }
    COW_AT(100ac7ba)
    d56 = (double)rdf32(sp0 - 0xecu);
    d57 = (double)rdf32(sp0 - 0x110u);
    if (!(d56 < d57))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d56, d57, 0u);
        loc_ec = rd32(sp0 - 0xecu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d56, d57, 0u);
    COW_AT(100ac7c9)
        t58 = rd32(sp0 - 0x110u);
        wr32(sp0 - 0xecu, t58);
        loc_ec = t58;
    }
    COW_AT(100ac7d1)
    d59 = (double)rdf32(sp0 - 0xe8u);
    d60 = (double)rdf32(sp0 - 0x10cu);
    if (!(d59 < d60))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, d60, 0u);
        loc_e8 = rd32(sp0 - 0xe8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, d60, 0u);
    COW_AT(100ac7e0)
        t61 = rd32(sp0 - 0x10cu);
        wr32(sp0 - 0xe8u, t61);
        edx = t61;
        loc_e8 = t61;
    }
    COW_AT(100ac7e8)
    d62 = (double)rdf32(sp0 - 0xe4u);
    d63 = (double)rdf32(sp0 - 0x108u);
    if (!(d62 < d63))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, d63, 0u);
        loc_e4 = rd32(sp0 - 0xe4u);
    }
    else
    {
    COW_AT(100ac7f7)
        t64 = rd32(sp0 - 0x108u);
        wr32(sp0 - 0xe4u, t64);
        eax = t64;
        loc_e4 = t64;
    }
    COW_AT(100ac7ff)
    if ((int32_t)(edi + 0x10u) < (int32_t)COW_IMG(0x1035be18u))
    {
        edi = edi + 0x10u;
        goto L_100ac723;
    }
    COW_AT(100ac80e)
    if ((cow_fsw(g, cow_bits2f(loc_f8), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_f8), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100ac65c;
    }
    COW_AT(100ac825)
    wr32(sp0 - 0xd4u, loc_ec);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0xe0u, loc_100);
    wr32(sp0 - 0x128u, 1u);
    wr32(sp0 - 0xdcu, loc_fc);
    wr32(sp0 - 0x12cu, 1u);
    wr32(sp0 - 0x130u, rd32(COW_IMG(0x10456d58u)));
    wr32(sp0 - 0x134u, rd32(COW_IMG(0x10456d50u)));
    wr32(sp0 - 0xd8u, loc_f0);
    g->eax = rd32(COW_IMG(0x10456d50u));
    g->ecx = loc_f0;
    g->edx = rd32(COW_IMG(0x10456d58u));
    t65 = rd32(COW_IMG(0x10456d50u));
    t66 = rd32(COW_IMG(0x10456d58u));
    g->esp = sp0 - 0x134u;
    t67 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x138u, t68);
    wr32(sp0 - 0x104u, (uint16_t)t67);
    d70 = (double)(float)(double)(int32_t)(uint16_t)t67;
    wrf32(sp0 - 0x138u, (float)d70);
    g->eax = (uint16_t)t67;
    g->ecx = t68;
    g->esp = sp0 - 0x138u;
    t71 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t72 = g->ecx;
    wr32(sp0 - 0x13cu, t72);
    wr32(sp0 - 0x104u, (uint16_t)t71);
    d73 = (double)(float)(double)(int32_t)(uint16_t)t71;
    wrf32(sp0 - 0x13cu, (float)d73);
    t74 = rd32(sp0 - 0xf8u);
    wr32(sp0 - 0x140u, t74);
    wr32(sp0 - 0x144u, sp0 - 0xe0u);
    g->eax = (uint16_t)t71;
    g->edx = sp0 - 0xe0u;
    g->esp = sp0 - 0x120u;
    t75 = cow_thiscall(g, COW_IMG(0x1006c280u), self + 0x88cu, 9, sp0 - 0xe0u, t74, cow_f2bits(d73), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), 1u, 1u, 0u);
    t76 = g->edx;
    if (t75 == 0u)
    {
        eax = t75;
        edx = t76;
        goto L_100ac65c;
    }
    eax = t75;
    edx = t76;
L_100ac8a1: ;
    COW_AT(100ac8a1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t77 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t78 = g->edx;
    g->edx = t78;
    t79 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
L_100ac8c2: ;
    COW_AT(100ac8c2)
    t91 = rd8(self + 0xb2u);
    wr8(self + 0xb2u, t91 & 0xfeu);
    g->esi = loc_11c;
    g->edi = loc_120;
    g->ebp = loc_118;
    g->edx = edx;
    return (eax & 0xffffff00u) | (t91 & 0xfeu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ac5a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ac5bbu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ac5c0u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ac5c7u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100ac5d2u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100ac5dau:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100ac647u:
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
        g->esp = sp0 - 0x120u;
        g->edi = self + 0xd4u;
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100ac65cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100ac69cu:
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
        g->esp = sp0 - 0x120u;
        g->edi = self + 0xd4u;
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100ac6b2u:
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
        g->esp = sp0 - 0x120u;
        g->edi = self + 0xd4u;
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100ac6bau:
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
        g->esp = sp0 - 0x120u;
        g->edi = self + 0xd4u;
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x100ac723u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        (void)sp0;
        return 1;
    }
    case 0x100ac750u:
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
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac758u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac769u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac771u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac78au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac79bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac7ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac80eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac825u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0xf0u);
        wr32(sp0 - 0x128u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100ac8a1u:
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
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100ac8c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac5a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ac5a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
