/* f_0x100421a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100421a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d13;
    double d14;
    double d15;
    double d33;
    double d44;
    double d45;
    double d47;
    double d50;
    double d51;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_118_f;
    uint32_t loc_11c;
    double loc_120_f;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
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
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    double xin0 = ST(0);
    cow_frame(g, sp0, 324u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10042214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042214;
    case 0x10042289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042289;
    case 0x10042295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042295;
    case 0x1004229eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004229e;
    case 0x100422b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100422b3;
    case 0x100422bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100422bd;
    case 0x100422c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100422c0;
    case 0x100422d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100422d4;
    case 0x100422e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100422e0;
    case 0x1004230cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004230c;
    case 0x10042327u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042327;
    case 0x10042341u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042341;
    case 0x1004237eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 1u) & 7u; goto E_1004237e;
    case 0x10042394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_120_f = rdf32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118_f = rdf32(sp0 - 0x118u); x0 = ST(0); goto E_10042394;
    case 0x1004243au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004243a;
    case 0x1004244au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004244a;
    case 0x1004245eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004245e;
    case 0x1004246fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1004246f;
    case 0x10042471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 1u) & 7u; goto E_10042471;
    case 0x10042473u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); x0 = ST(0); goto E_10042473;
    case 0x1004247eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); goto E_1004247e;
    case 0x10042493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10042493;
    case 0x1004249du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1004249d;
    case 0x100424a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_11c = rd32(sp0 - 0x11cu); goto E_100424a0;
    case 0x100424afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100424af;
    default: break;
    }
#endif

    COW_AT(100421a0)
    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x130u, in_edi);
    wr32(sp0 - 0x120u, self);
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xb4u)) + 0x98u), rd32(self + 0xb4u), 0);
    COW_AT(100421ce)
    wr32(sp0 - 0x134u, sp0 - 0x110u);
    wrf32(sp0 - 0x108u, (float)(double)(float)-xin0);
    t1 = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    wr32(sp0 - 0x138u, t1);
    wr32(sp0 - 0x13cu, sp0 - 0x110u);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, rd32(t2 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x110u, t1, sp0 - 0x110u);
    t3 = g->edx;
    edx = t3;
    COW_AT(100421f4)
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t5 = rd32(COW_IMG(0x1047cf7cu));
    t6 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t5 + 0xa90u, t4);
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, COW_IMG(0x100746a0u), t6, 0);
    ebp = t6;
    COW_AT(10042214)
    wr32(sp0 - 0x134u, ebp);
    t7 = rd32(self + 0x94u);
    wr32(ebp + 0x30u, t7);
    t8 = rd32(self + 0x98u);
    wr32(ebp + 0x34u, t8);
    t9 = rd32(self + 0x9cu);
    wr32(ebp + 0x38u, t9);
    t10 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t11 = rd32(COW_IMG(0x1047cf7cu));
    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t11 + 0xa90u, t10);
    wr32(sp0 - 0x138u, t12);
    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    edi = t12;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d13 = fr(g, (double)rdf32(sp0 - 0x110u) + (double)rdf32(t12 + 0x30u));
    wrf32(t12 + 0x30u, (float)d13);
    d14 = fr(g, (double)rdf32(sp0 - 0x10cu) + (double)rdf32(t12 + 0x34u));
    wrf32(t12 + 0x34u, (float)d14);
    d15 = fr(g, (double)rdf32(sp0 - 0x108u) + (double)rdf32(t12 + 0x38u));
    wr32(sp0 - 0x13cu, ebp);
    wrf32(t12 + 0x38u, (float)d15);
    g->eax = t11;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t16 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x130u;
    t17 = cow_thiscall(g, rd32(t16 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u));
    t18 = g->edx;
    eax = t17;
    edx = t18;
    ebx = t12;
    COW_AT(10042289)
    wr32(sp0 - 0x134u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    t19 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, ebp);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10042295)
    if (rd8(COW_IMG(0x1047bb00u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb00u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb00u));
    COW_AT(1004229e)
        wr8(COW_IMG(0x1047bb00u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x130u;
        t21 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bad0u), 0);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(100422b3)
        wr32(sp0 - 0x134u, COW_IMG(0x10042500u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t24 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10042500u));
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(100422bd)
    }
    COW_AT(100422c0)
    wr32(sp0 - 0x134u, COW_IMG(0x10352e30u));
    wr32(sp0 - 0x138u, COW_IMG(0x10352f00u));
    g->eax = eax;
    g->esp = sp0 - 0x130u;
    t26 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bad0u), edx, 2, COW_IMG(0x10352f00u), COW_IMG(0x10352e30u));
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(100422d4)
    wr32(sp0 - 0x134u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, COW_IMG(0x10075960u), COW_IMG(0x1047baf0u), 1, 1u);
    t28 = g->ecx;
    t29 = g->edx;
    ecx = t28;
    edx = t29;
    COW_AT(100422e0)
    t30 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x11cu, t30);
    g->edx = edx;
    t31 = rd32(sp0 - 0x120u);
    t32 = rd32(t30);
    d33 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(rd32(sp0 - 0x120u) + 0xb0u)) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d33);
    g->esp = sp0 - 0x130u;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31, g->ecx, g->edx, 1, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    esi = t32;
    COW_AT(1004230c)
    t36 = (uint32_t)(uint8_t)eax << 0x18u | 0x808080u;
    wr32(sp0 - 0x134u, t36);
    wr32(sp0 - 0x138u, 0x3cu);
    t37 = rd32(sp0 - 0x11cu);
    wr32(sp0 - 0x13cu, t37);
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, rd32(esi + 0xc8u), t37, 3, t37, 0x3cu, t36);
    t38 = g->ecx;
    ecx = t38;
    COW_AT(10042327)
    t39 = rd32(rd32(sp0 - 0x120u) + 0xb8u);
    wr32(sp0 - 0x134u, t39);
    wr32(sp0 - 0x138u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = t39;
    t40 = rd32(sp0 - 0x120u);
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), t39, rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu));
    t41 = g->ecx;
    t42 = g->edx;
    ecx = t41;
    edx = t42;
    esi = t40;
    COW_AT(10042341)
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x130u < sp0 - 0x13cu;
    pf = PARITY((uint8_t)(sp0 - 0x130u));
    af = (sp0 - 0x13cu ^ sp0 - 0x130u) >> 4u & 1u;
    zf = sp0 == 0x130u;
    sf = (int32_t)(sp0 - 0x130u) < 0;
    of = ((sp0 - 0x13cu ^ sp0 - 0x130u) & (sp0 - 0x130u ^ 0xcu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t43 = ~ecx - 1u;
    wr32(sp0 - 0x11cu, t43);
    if ((int32_t)t43 <= 0)
    {
        x1 = fr(g, (double)rdf32(esi + 0xb0u) * (double)rdf32(COW_IMG(0x1032ae58u)));
        x0 = -fr(g, fr(g, (double)(int32_t)t43 * (double)rdf32(COW_IMG(0x1032ae5cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    COW_AT(10042471)
    }
    else
    {
        loc_11c = t43;
        x1 = fr(g, (double)rdf32(esi + 0xb0u) * (double)rdf32(COW_IMG(0x1032ae58u)));
        x0 = -fr(g, fr(g, (double)(int32_t)t43 * (double)rdf32(COW_IMG(0x1032ae5cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    COW_AT(1004237e)
        d44 = fr(g, x1 - (double)rdf32(COW_IMG(0x1032ae54u)));
        wrf32(sp0 - 0x120u, (float)(double)(float)d44);
        d45 = fr(g, x1 + (double)rdf32(COW_IMG(0x1032ae54u)));
        wrf32(sp0 - 0x118u, (float)(double)(float)d45);
        esi = 0u;
        loc_120_f = (double)(float)d44;
        loc_118_f = (double)(float)d45;
L_10042394: ;
    COW_AT(10042394)
        wrf32(COW_IMG(0x10352f50u), (float)x0);
        t46 = rd32(COW_IMG(0x1047bfa8u));
        d47 = fr(g, (double)rdf32(COW_IMG(0x1032ae5cu)) + x0);
        wr32(COW_IMG(0x10352f54u), cow_f2bits(loc_120_f));
        wr32(COW_IMG(0x10352f6cu), cow_f2bits(loc_120_f));
        wr32(sp0 - 0x134u, 0x142u);
        wrf32(sp0 - 0x114u, (float)(double)(float)d47);
        t48 = rd8(esi + sp0 - 0x100u);
        wrf32(COW_IMG(0x10352f68u), (float)d47);
        wr32(COW_IMG(0x10352f98u), cow_f2bits((double)(float)d47));
        wrf32(COW_IMG(0x10352f80u), (float)x0);
        wr32(COW_IMG(0x10352f84u), cow_f2bits(loc_118_f));
        t49 = (uint32_t)(int8_t)t48 - 0x30u;
        wr32(COW_IMG(0x10352f9cu), cow_f2bits(loc_118_f));
        wr32(sp0 - 0x104u, t49 * 0x11u);
        d50 = fr(g, (double)(int32_t)(t49 * 0x11u) * (double)rdf32(COW_IMG(0x1032ae50u)));
        d51 = fr(g, (double)rdf32(COW_IMG(0x1032ae4cu)) + fr(g, (double)(int32_t)(t49 * 0x11u) * (double)rdf32(COW_IMG(0x1032ae50u))));
        wrf32(COW_IMG(0x10352f60u), (float)d50);
        wrf32(COW_IMG(0x10352f78u), (float)d51);
        wrf32(COW_IMG(0x10352f90u), (float)d50);
        wrf32(COW_IMG(0x10352fa8u), (float)d51);
        t52 = rd32(t46 + 0xebcu);
        wr32(sp0 - 0x138u, t52);
        g->eax = t52;
        g->edx = rd32(t52);
        t53 = rd32(t52);
        g->esp = sp0 - 0x130u;
        t54 = cow_thiscall(g, rd32(t53 + 0x130u), t49 * 0x11u, 2, t52, 0x142u);
        t55 = g->ecx;
        t56 = g->edx;
        eax = t54;
        ecx = t55;
        edx = t56;
        edi = t46;
    COW_AT(1004243a)
        wr32(sp0 - 0x134u, 0x142u);
        g->eax = eax;
        g->edx = edx;
        t57 = rd32(edi + 0xdc8u);
        g->esp = sp0 - 0x130u;
        t58 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x142u);
        t59 = g->edx;
        eax = t58;
        edx = t59;
        edi = t57;
    COW_AT(1004244a)
        wr32(sp0 - 0x134u, eax);
        wr32(sp0 - 0x138u, COW_IMG(0x10352f50u));
        wr32(sp0 - 0x13cu, 2u);
        wr32(sp0 - 0x140u, 5u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        cow_thiscall(g, COW_IMG(0x1000cd00u), edi, 4, 5u, 2u, COW_IMG(0x10352f50u), eax);
        t60 = g->edx;
        edx = t60;
    COW_AT(1004245e)
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x11cu))
        {
            esi = esi + 1u;
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120_f = (double)rdf32(sp0 - 0x120u);
            loc_118_f = (double)rdf32(sp0 - 0x118u);
            x0 = (double)rdf32(sp0 - 0x114u);
            goto L_10042394;
        }
        eax = rd32(sp0 - 0x11cu);
        x0 = (double)rdf32(sp0 - 0x114u);
    COW_AT(1004246f)
    }
    COW_AT(10042473)
    if ((rd8(COW_IMG(0x1047bb00u)) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb00u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb00u));
    COW_AT(1004247e)
        wr8(COW_IMG(0x1047bb00u), (uint8_t)(eax | 2u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 0x130u;
        t61 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bac4u), 0);
        t62 = g->ecx;
        t63 = g->edx;
        eax = t61;
        ecx = t62;
        edx = t63;
    COW_AT(10042493)
        wr32(sp0 - 0x134u, COW_IMG(0x100424f0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t64 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100424f0u));
        t65 = g->edx;
        eax = t64;
        edx = t65;
    COW_AT(1004249d)
    }
    COW_AT(100424a0)
    wr32(sp0 - 0x134u, COW_IMG(0x10352fb0u));
    g->esp = sp0 - 0x130u;
    cow_fastcall(g, COW_IMG(0x1006af00u), COW_IMG(0x1047bac4u), edx, 1, COW_IMG(0x10352fb0u));
    COW_AT(100424af)
    t66 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t67 = rd32(COW_IMG(0x1047cf7cu));
    t68 = rd32(sp0 - 0x12cu);
    t69 = rd32(sp0 - 0x130u);
    wr32(t67 + 0xa90u, t66);
    wr32(t66 * 4u + t67 + 0xa10u, ebx);
    t70 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t71 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t71 + 0xa90u, t70);
    wr32(t70 * 4u + t71 + 0xa10u, ebp);
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = t68;
    g->edi = t69;
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = t66;
    g->top = (g->top + 1u) & 7u;
    return t71;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100421a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10042214u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x13cu, sp0 - 0x110u);
        wr32(sp0 - 0x134u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x10042289u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10042295u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004229eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100422b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100422bdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x100422c0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100422d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100422e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004230cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10042327u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10042341u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x13cu;
        wr32(sp0 - 0x13cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1004237eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        double x1;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x130u;
        g->esi = 0u;
        wr32(sp0 - 0x13cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10042394u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_118_f;
        uint32_t loc_11c;
        double loc_120_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_120_f = rdf32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118_f = rdf32(sp0 - 0x118u);
        x0 = ST(0);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004243au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004244au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1004245eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004246fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10042471u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        double x1;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x13cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10042473u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        double x0;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        x0 = ST(0);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004247eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10042493u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x1004249du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x100424a0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100424afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100421ce: reads xin0, which no location holds here
     100421f4: holds xin0, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100421a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100421a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
