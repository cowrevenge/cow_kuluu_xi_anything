/* f_0x10086900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10086900(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d15;
    double d20;
    double d21;
    double d22;
    double d23;
    double d28;
    double d29;
    double d33;
    double d37;
    double d38;
    double d48;
    double d52;
    double d58;
    double d64;
    double d65;
    double d66;
    double d67;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_68c_f;
    uint32_t loc_6a8;
    double loc_6a8_f;
    double loc_6b0_f;
    uint32_t loc_6b4;
    uint32_t loc_6bc;
    uint32_t loc_6c0;
    uint32_t loc_6c4;
    uint32_t loc_6c8;
    uint32_t loc_6cc;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
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
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1760u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10086993u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x6c8u); in_esi = rd32(sp0 - 0x6c4u); in_ebp = rd32(sp0 - 0x6c0u); g->ebp = rd32(sp0 - 0x6c0u); g->edi = rd32(sp0 - 0x6c8u); g->esi = rd32(sp0 - 0x6c4u); goto E_10086993;
    case 0x100869a8u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x6c8u); in_esi = rd32(sp0 - 0x6c4u); in_ebp = rd32(sp0 - 0x6c0u); g->ebp = rd32(sp0 - 0x6c0u); g->edi = rd32(sp0 - 0x6c8u); g->esi = rd32(sp0 - 0x6c4u); goto E_100869a8;
    case 0x100869d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100869d5;
    case 0x100869e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100869e1;
    case 0x100869e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100869e9;
    case 0x10086a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086a10;
    case 0x10086a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086a21;
    case 0x10086a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086a2d;
    case 0x10086a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086a35;
    case 0x10086a5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086a5c;
    case 0x10086ac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086ac8;
    case 0x10086acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086acd;
    case 0x10086ad9u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b4 = rd32(sp0 - 0x6b4u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086ad9;
    case 0x10086b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b4 = rd32(sp0 - 0x6b4u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b01;
    case 0x10086b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b4 = rd32(sp0 - 0x6b4u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b05;
    case 0x10086b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6b4 = rd32(sp0 - 0x6b4u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b15;
    case 0x10086b23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b23;
    case 0x10086b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b30;
    case 0x10086b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b3e;
    case 0x10086b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b41;
    case 0x10086b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086b48;
    case 0x10086bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086bb9;
    case 0x10086beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086bee;
    case 0x10086c07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086c07;
    case 0x10086c16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8 = rd32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086c16;
    case 0x10086c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8_f = rdf32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086c34;
    case 0x10086c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8_f = rdf32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086c3b;
    case 0x10086ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6b0_f = rdf32(sp0 - 0x6b0u); loc_6a8_f = rdf32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086ce7;
    case 0x10086d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086d3c;
    case 0x10086d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086d6f;
    case 0x10086d7bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086d7b;
    case 0x10086d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086d82;
    case 0x10086d84u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086d84;
    case 0x10086db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086db8;
    case 0x10086dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); goto E_10086dc3;
    case 0x10086df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086df4;
    case 0x10086dfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10086dfc;
    case 0x10086e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_6cc = rd32(sp0 - 0x6ccu); loc_6c8 = rd32(sp0 - 0x6c8u); loc_6c4 = rd32(sp0 - 0x6c4u); loc_6c0 = rd32(sp0 - 0x6c0u); loc_6bc = rd32(sp0 - 0x6bcu); loc_6b4 = rd32(sp0 - 0x6b4u); loc_6a8_f = rdf32(sp0 - 0x6a8u); loc_68c_f = rdf32(sp0 - 0x68cu); goto E_10086e4e;
    default: break;
    }
#endif

    COW_AT(10086900)
    wr32(sp0 - 0x6bcu, in_ebx);
    wr32(sp0 - 0x6c0u, in_ebp);
    wr32(sp0 - 0x6c4u, in_esi);
    wr32(sp0 - 0x6c8u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x6c8u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x650u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x6a0u, 0u);
    wr32(sp0 - 0x69cu, 0u);
    wr32(sp0 - 0x698u, 0u);
    wr32(sp0 - 0x694u, 0x3f800000u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x650u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x6ccu, arg1);
    g->eax = arg1;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x650u, 1, arg1);
    t5 = g->edx;
    wr32(sp0 - 0x6ccu, sp0 - 0x650u);
    wr32(sp0 - 0x6d0u, 0x100u);
    t6 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, COW_IMG(0x1000bd50u), t6, 2, 0x100u, sp0 - 0x650u);
    t7 = g->ecx;
    wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
    wr32(sp0 - 0x6d0u, sp0 - 0x6a0u);
    g->eax = sp0 - 0x6a0u;
    g->edx = sp0 - 0x6a0u;
    t8 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x6a0u, sp0 - 0x6a0u);
    t9 = g->edx;
    wr32(sp0 - 0x688u, 0u);
    if ((cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        edx = t9;
        loc_6bc = in_ebx;
        loc_6c0 = in_ebp;
        loc_6c4 = in_esi;
        loc_6c8 = in_edi;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        edx = t9;
    COW_AT(10086993)
        if (cow_bits2f(0u) < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_6bc = in_ebx;
            loc_6c0 = in_ebp;
            loc_6c4 = in_esi;
            loc_6c8 = in_edi;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100869a8)
            wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
            g->ecx = 0u;
            g->edx = sp0 - 0x6a0u;
            g->esp = sp0 - 0x6c8u;
            cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x6a0u);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x6d0u, 0xbf000000u);
            wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
            g->eax = sp0 - 0x6a0u;
            g->ecx = t10;
            g->edx = t11;
            g->esp = sp0 - 0x6ccu;
            t12 = cow_cdecl(g, COW_IMG(0x10027050u), 2, sp0 - 0x6a0u, 0xbf000000u);
            t13 = g->ecx;
            t14 = g->edx;
            if (!(cow_bits2f(0u) < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t12 & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t14;
    COW_AT(100869e1)
                t16 = rd32(sp0 - 0x6a0u);
                wr32(sp0 - 0x6b4u, t16);
                ecx = t16;
            }
            else
            {
                eax = (t12 & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t13;
                edx = t14;
    COW_AT(100869d5)
                d15 = (double)(float)-(double)rdf32(sp0 - 0x6a0u);
                wrf32(sp0 - 0x6b4u, (float)d15);
            }
    COW_AT(100869e9)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x6c8u;
            t17 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x6b8u, (uint16_t)t17);
            d20 = fr(g, (double)(int32_t)(uint16_t)t17 + (double)rdf32(COW_IMG(0x1032a3c8u)));
            d21 = (double)rdf32(sp0 - 0x6b4u);
            if (d20 < d21)
            {
                eax = (uint16_t)cow_fsw(g, d20, d21, 0u);
                edx = t19;
                loc_6bc = rd32(sp0 - 0x6bcu);
                loc_6c0 = rd32(sp0 - 0x6c0u);
                loc_6c4 = rd32(sp0 - 0x6c4u);
                loc_6c8 = rd32(sp0 - 0x6c8u);
            }
            else
            {
                eax = (uint16_t)cow_fsw(g, d20, d21, 0u);
                ecx = t18;
                edx = t19;
    COW_AT(10086a10)
                d22 = (double)rdf32(sp0 - 0x69cu);
                if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10086a2d)
                    t24 = rd32(sp0 - 0x69cu);
                    wr32(sp0 - 0x6b4u, t24);
                    edx = t24;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10086a21)
                    d23 = (double)(float)-(double)rdf32(sp0 - 0x69cu);
                    wrf32(sp0 - 0x6b4u, (float)d23);
                }
    COW_AT(10086a35)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x6c8u;
                t25 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
                t26 = g->ecx;
                t27 = g->edx;
                wr32(sp0 - 0x6b8u, (uint16_t)t25);
                d28 = fr(g, (double)(int32_t)(uint16_t)t25 + (double)rdf32(COW_IMG(0x1032a3c8u)));
                d29 = (double)rdf32(sp0 - 0x6b4u);
                if (d28 < d29)
                {
                    eax = (uint16_t)cow_fsw(g, d28, d29, 0u);
                    edx = t27;
                    loc_6bc = rd32(sp0 - 0x6bcu);
                    loc_6c0 = rd32(sp0 - 0x6c0u);
                    loc_6c4 = rd32(sp0 - 0x6c4u);
                    loc_6c8 = rd32(sp0 - 0x6c8u);
                }
                else
                {
                    eax = (uint16_t)cow_fsw(g, d28, d29, 0u);
                    ecx = t26;
                    edx = t27;
    COW_AT(10086a5c)
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x6c8u;
                    t30 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
                    t31 = g->ecx;
                    t32 = g->edx;
                    wr32(sp0 - 0x6b8u, (uint16_t)t30);
                    d33 = fr(g, fr(g, (double)(int32_t)(uint16_t)t30 * (double)rdf32(COW_IMG(0x1032ade0u))) * (double)rdf32(sp0 + 0xcu));
                    wrf32(sp0 - 0x690u, (float)(double)(float)d33);
                    g->eax = (uint16_t)t30;
                    g->ecx = t31;
                    g->edx = t32;
                    t34 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
                    t35 = g->ecx;
                    t36 = g->edx;
                    wr32(sp0 - 0x6b8u, (uint16_t)t34);
                    edi = arg2;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    d37 = fr(g, fr(g, (double)(int32_t)(uint16_t)t34 * (double)rdf32(COW_IMG(0x1032ade0u))) * (double)rdf32(sp0 + 0xcu));
                    wrf32(sp0 - 0x68cu, (float)(double)(float)d37);
                    d38 = fr(g, fr(g, d37 * (double)rdf32(COW_IMG(0x1032d448u))) + (double)rdf32(sp0 - 0x69cu));
                    wrf32(sp0 - 0x69cu, (float)(double)(float)d38);
                    if ((int32_t)(~ecx - 1u) <= 36)
                    {
                        ecx = ~ecx - 1u;
                        edx = t36;
                        loc_68c_f = (double)(float)d37;
                    }
                    else
                    {
                        edx = t36;
                        loc_68c_f = (double)(float)d37;
    COW_AT(10086ac8)
                        ecx = 0x24u;
                    }
    COW_AT(10086acd)
                    wr32(sp0 - 0x6b4u, 0u);
                    if ((int32_t)ecx <= 0)
                    {
                        eax = 0u;
                        loc_6b4 = 0u;
                    }
                    else
                    {
    COW_AT(10086ad9)
                        eax = 0u;
                        esi = 0u;
L_10086adb: ;
    COW_AT(10086adb)
                        if (rd8(arg2 + esi) < 0xd2u)
                        {
                            edx = (edx & 0xffffff00u) | rd8(arg2 + esi);
                            goto L_10086af7;
                        }
                        edx = (edx & 0xffffff00u) | rd8(arg2 + esi);
                        cf = rd8(arg2 + esi) < 0xd2u;
                        zf = (uint8_t)(rd8(arg2 + esi) - 0xd2u) == 0u;
    COW_AT(10086ae3)
                        if (!cf && !zf) goto L_10086af7;
    COW_AT(10086ae5)
                        wr8(eax + sp0 - 0x674u, 0xd3u);
                        wr8(eax + sp0 - 0x673u, 0xd4u);
                        wr8(eax + sp0 - 0x672u, 0xd5u);
                        eax = eax + 2u;
L_10086afb: ;
    COW_AT(10086afb)
                        if ((int32_t)(esi + 1u) < (int32_t)ecx)
                        {
                            eax = eax + 1u;
                            esi = esi + 1u;
                            goto L_10086adb;
                        }
                        eax = eax + 1u;
    COW_AT(10086b01)
                        wr32(sp0 - 0x6b4u, eax);
                        loc_6b4 = eax;
                    }
    COW_AT(10086b05)
                    wr32(sp0 - 0x6a8u, 0u);
                    if ((int32_t)eax <= 0)
                    {
                        ebp = 0u;
                    }
                    else
                    {
    COW_AT(10086b15)
                        ebx = sp0 - 0x480u;
                        ebp = 0u;
                        esi = sp0 - 0x510u;
                        edi = 0u;
                        loc_6a8 = 0u;
L_10086b23: ;
    COW_AT(10086b23)
                        if (rd8(edi + sp0 - 0x674u) < 0x20u)
                        {
    COW_AT(10086bee)
                            wr16(esi, 0u);
                            wr16(esi + 2u, 0u);
                            wr16(edi * 2u + sp0 - 0x610u, 0u);
                            wr16(edi * 2u + sp0 - 0x5c8u, 0u);
                            ecx = 0u;
                        }
                        else
                        {
                            ecx = (ecx & 0xffffff00u) | rd8(edi + sp0 - 0x674u);
    COW_AT(10086b30)
                            if ((uint8_t)ecx == 0xd3u) goto L_10086b48;
                            ecx = (uint8_t)ecx - 0xd3u;
    COW_AT(10086b3e)
                            if (ecx == 1u) goto L_10086bb9;
                            ecx = ecx - 1u;
    COW_AT(10086b41)
                            if (ecx != 1u)
                            {
                                ecx = ecx - 1u;
                                goto L_10086c07;
                            }
L_10086b48: ;
    COW_AT(10086b48)
                            t43 = edi * 2u + sp0 - 0x5c8u;
                            wr32(sp0 - 0x6ccu, t43);
                            t44 = edi * 2u + sp0 - 0x610u;
                            wr32(sp0 - 0x6d0u, t44);
                            wr32(sp0 - 0x6d4u, esi);
                            wr32(sp0 - 0x6d8u, ebx);
                            wr32(sp0 - 0x6dcu, 0xadu);
                            wr8(edi + sp0 - 0x674u, 0xadu);
                            g->edx = t44;
                            g->esp = sp0 - 0x6c8u;
                            cow_thiscall(g, COW_IMG(0x10120510u), COW_IMG(0x104e1bf8u), 5, 0xadu, ebx, esi, t44, t43);
                            t45 = g->ecx;
                            t46 = g->edx;
                            wr32(sp0 - 0x6b8u, (uint32_t)(int16_t)rd16(esi));
                            g->edx = t46;
                            t47 = rd16(esi);
                            d48 = fr(g, (double)(int32_t)(uint32_t)(int16_t)rd16(esi) * (double)rdf32(COW_IMG(0x10329a08u)));
                            fpush(g, d48);
                            t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t47, g->ecx, g->edx, 1, 0);
                            t50 = g->edx;
                            t51 = (uint32_t)(int16_t)rd16(esi + 2u);
                            wr32(sp0 - 0x6b8u, t51);
                            wr16(esi, (uint16_t)t49);
                            g->ecx = t51;
                            d52 = fr(g, (double)(int32_t)t51 * (double)rdf32(COW_IMG(0x10329a08u)));
                            fpush(g, d52);
                            t53 = cow_call_regs(g, COW_IMG(0x10311c6cu), t49, g->ecx, g->edx, 1, 0);
                            t54 = g->ecx;
                            t55 = rd16(esi);
                            wr16(t43, (uint16_t)(rd16(t43) + (uint16_t)t53));
                            t56 = rd32(sp0 - 0x6a8u);
                            wr16(esi + 2u, (uint16_t)t53);
                            t57 = (uint32_t)(int16_t)t55 + t56;
                            wr32(sp0 - 0x6a8u, t57);
                            eax = rd32(sp0 - 0x6b4u);
                            ecx = t54;
                            edx = (uint32_t)(int16_t)t55;
                            ebp = t57;
                            loc_68c_f = (double)rdf32(sp0 - 0x68cu);
                            loc_6b4 = rd32(sp0 - 0x6b4u);
                            loc_6a8 = t57;
                        }
L_10086c07: ;
    COW_AT(10086c07)
                        if ((int32_t)(edi + 1u) < (int32_t)eax)
                        {
                            ebx = ebx + 0x20u;
                            esi = esi + 4u;
                            edi = edi + 1u;
                            goto L_10086b23;
                        }
                    }
    COW_AT(10086c16)
                    wr32(sp0 - 0x6b8u, -ebp);
                    d58 = fr(g, (double)(int32_t)-ebp * (double)rdf32(COW_IMG(0x10329a08u)));
                    wrf32(sp0 - 0x6a8u, (float)(double)(float)d58);
                    if ((int32_t)eax <= 0)
                    {
                        loc_6bc = rd32(sp0 - 0x6bcu);
                        loc_6c0 = rd32(sp0 - 0x6c0u);
                        loc_6c4 = rd32(sp0 - 0x6c4u);
                        loc_6c8 = rd32(sp0 - 0x6c8u);
                    }
                    else
                    {
                        loc_6a8_f = (double)(float)d58;
    COW_AT(10086c34)
                        ebx = 0u;
                        ebp = sp0 - 0x47cu;
                        loc_6c0 = rd32(sp0 - 0x6c0u);
                        loc_6c4 = rd32(sp0 - 0x6c4u);
L_10086c3b: ;
    COW_AT(10086c3b)
                        t59 = (uint32_t)(int16_t)rd16(ebx * 2u + sp0 - 0x610u);
                        wr32(sp0 - 0x6b0u, t59);
                        t60 = (uint32_t)(int16_t)rd16(ebx * 2u + sp0 - 0x5c8u);
                        wr32(sp0 - 0x6b0u, t60);
                        t61 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x510u);
                        wr32(sp0 - 0x6a4u, t61);
                        wrf32(sp0 - 0x6b0u, (float)(double)(float)(double)(int32_t)t60);
                        t62 = (uint32_t)(int16_t)rd16(ebx * 4u + sp0 - 0x50eu);
                        wr32(sp0 - 0x6a4u, t62);
                        t63 = cow_f2bits((double)(float)(double)(int32_t)t60);
                        wr32(COW_IMG(0x103582e4u), t63);
                        wrf32(sp0 - 0x684u, (float)(double)(float)(double)(int32_t)t61);
                        wr32(COW_IMG(0x103582f0u), t63);
                        wrf32(sp0 - 0x6a4u, (float)(double)(float)(double)(int32_t)t62);
                        d64 = fr(g, (double)(int32_t)t59 + loc_6a8_f);
                        wrf32(COW_IMG(0x103582e0u), (float)d64);
                        wrf32(COW_IMG(0x103582ecu), (float)fr(g, (double)(int32_t)t61 + d64));
                        wrf32(COW_IMG(0x103582f8u), (float)d64);
                        wrf32(COW_IMG(0x10358304u), (float)fr(g, (double)(int32_t)t61 + d64));
                        wrf32(COW_IMG(0x103582fcu), (float)fr(g, (double)(float)(double)(int32_t)t62 + (double)(float)(double)(int32_t)t60));
                        wrf32(COW_IMG(0x10358308u), (float)fr(g, (double)(float)(double)(int32_t)t62 + (double)(float)(double)(int32_t)t60));
                        d65 = (double)(float)fr(g, (double)(float)(double)(int32_t)t61 + loc_6a8_f);
                        wrf32(sp0 - 0x6a8u, (float)d65);
                        esi = sp0 - 0x578u;
                        edi = COW_IMG(0x103582e4u);
                        loc_6a8_f = d65;
                        loc_6b0_f = (double)(float)(double)(int32_t)t60;
L_10086ce7: ;
    COW_AT(10086ce7)
                        d66 = fr(g, (double)rdf32(sp0 - 0x690u) * (double)rdf32(edi - 4u));
                        wr32(sp0 - 0x6ccu, sp0 - 0x680u);
                        wr32(sp0 - 0x6d0u, sp0 - 0x6a0u);
                        wr32(sp0 - 0x6d4u, esi - 8u);
                        wrf32(sp0 - 0x680u, (float)(double)(float)d66);
                        d67 = fr(g, loc_68c_f * (double)rdf32(edi));
                        wrf32(sp0 - 0x67cu, (float)(double)(float)d67);
                        g->esp = sp0 - 0x6c8u;
                        cow_cdecl(g, COW_IMG(0x10026fd0u), 3, esi - 8u, sp0 - 0x6a0u, sp0 - 0x680u);
                        t68 = rd32(sp0 - 0x688u);
                        t69 = rd32(ebp - 4u);
                        t70 = rd32(ebp);
                        wr32(esi, t68);
                        wr32(esi + 4u, 0x3f800000u);
                        wr32(esi + 0xcu, t69);
                        wr32(esi + 0x10u, t70);
                        if ((int32_t)(edi + 0xcu) < (int32_t)COW_IMG(0x10358314u))
                        {
                            ebp = ebp + 8u;
                            esi = esi + 0x1cu;
                            edi = edi + 0xcu;
                            loc_68c_f = (double)rdf32(sp0 - 0x68cu);
                            loc_6b4 = rd32(sp0 - 0x6b4u);
                            loc_6a8_f = (double)rdf32(sp0 - 0x6a8u);
                            loc_6b0_f = (double)rdf32(sp0 - 0x6b0u);
                            loc_6c0 = rd32(sp0 - 0x6c0u);
                            loc_6c4 = rd32(sp0 - 0x6c4u);
                            goto L_10086ce7;
                        }
                        eax = t68;
                        ebp = ebp + 8u;
    COW_AT(10086d3c)
                        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
                        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
                        t71 = rd8(ebx + sp0 - 0x674u);
                        wr32(sp0 - 0x6d4u, t71);
                        wr32(sp0 - 0x6acu, 0x80808080u);
                        wr32(sp0 - 0x6b8u, 0x80808080u);
                        g->eax = t71;
                        g->esp = sp0 - 0x6c8u;
                        t72 = cow_fastcall(g, COW_IMG(0x10120590u), COW_IMG(0x104e1bf8u), sp0 - 0x6acu, 3, t71, sp0 - 0x6acu, sp0 - 0x6b8u);
                        t73 = g->edx;
                        if ((uint8_t)t72 == 0u)
                        {
                            eax = t72;
                            edx = t73;
                            loc_6bc = rd32(sp0 - 0x6bcu);
                            loc_6c0 = rd32(sp0 - 0x6c0u);
                            loc_6c4 = rd32(sp0 - 0x6c4u);
                            loc_6c8 = rd32(sp0 - 0x6c8u);
                            goto L_10086e4e;
                        }
    COW_AT(10086d6f)
                        if (0u)
                        {
    COW_AT(10086db8)
                            wr32(sp0 - 0x6ccu, 0u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            edx = rd32(COW_IMG(0x1045666cu));
                            loc_6cc = 0u;
                        }
                        else
                        {
    COW_AT(10086d7b)
    COW_AT(10086d82)
    COW_AT(10086d84)
                            wr32(sp0 - 0x6acu, 0x80808080u);
                            wr32(sp0 - 0x6acu, 0x80808080u);
                            wr32(sp0 - 0x6ccu, 0x60u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            edx = 0x80u;
                            loc_6cc = 0x60u;
                        }
    COW_AT(10086dc3)
                        wr32(sp0 - 0x6d0u, 0x18u);
                        wr32(sp0 - 0x6d4u, eax);
                        g->esp = sp0 - 0x6a8u;
                        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 11, eax, 0x18u, loc_6cc, rd32(sp0 - 0x6c8u), rd32(sp0 - 0x6c4u), rd32(sp0 - 0x6c0u), rd32(sp0 - 0x6bcu), 0x80808080u, rd32(sp0 - 0x6b4u), rd32(sp0 - 0x6b0u), 0x80808080u);
                        wr32(sp0 - 0x6acu, 1u);
                        wr32(sp0 - 0x6b0u, 0x1bu);
                        t74 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6b4u, t74);
                        g->esp = sp0 - 0x6b4u;
                        cow_thiscall(g, rd32(rd32(t74) + 0xc8u), rd32(t74), 0);
                        eax = sp0 - 0x55cu;
                        ecx = 4u;
                        edx = rd32(sp0 - 0x698u);
L_10086df4: ;
    COW_AT(10086df4)
                        wr32(eax, edx);
                        if (ecx != 1u)
                        {
                            eax = eax + 0x1cu;
                            ecx = ecx - 1u;
                            goto L_10086df4;
                        }
    COW_AT(10086dfc)
                        wr32(sp0 - 0x6b8u, 0x144u);
                        t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6bcu, t75);
                        g->eax = t75;
                        g->esp = sp0 - 0x6bcu;
                        t76 = cow_thiscall(g, rd32(rd32(t75) + 0x130u), rd32(t75), 0);
                        wr32(sp0 - 0x6c0u, 0x1cu);
                        wr32(sp0 - 0x6c4u, sp0 - 0x574u);
                        wr32(sp0 - 0x6c8u, 2u);
                        wr32(sp0 - 0x6ccu, 5u);
                        g->ebx = ebx;
                        g->edx = sp0 - 0x574u;
                        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x574u, 0x1cu);
                        t77 = g->edx;
                        wr32(sp0 - 0x6c0u, 0u);
                        wr32(sp0 - 0x6c4u, 0x18u);
                        t78 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x6c8u, t78);
                        g->edx = t77;
                        g->esp = sp0 - 0x6c8u;
                        cow_thiscall(g, rd32(rd32(t78) + 0xc8u), rd32(t78), 0);
                        t79 = g->edx;
                        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 0x6b4u))
                        {
                            ebx = ebx + 1u;
                            loc_68c_f = (double)rdf32(sp0 - 0x68cu);
                            loc_6b4 = rd32(sp0 - 0x6b4u);
                            loc_6a8_f = (double)rdf32(sp0 - 0x6a8u);
                            loc_6c0 = 0u;
                            loc_6c4 = 0x18u;
                            goto L_10086c3b;
                        }
                        eax = rd32(sp0 - 0x6b4u);
                        edx = t79;
                        loc_6bc = rd32(sp0 - 0x6bcu);
                        loc_6c0 = 0u;
                        loc_6c4 = 0x18u;
                        loc_6c8 = rd32(sp0 - 0x6c8u);
                    }
                }
            }
        }
    }
L_10086e4e: ;
    COW_AT(10086e4e)
    g->esp = sp0 - 0x6c8u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x6bcu);
    g->esi = rd32(sp0 - 0x6c4u);
    g->edi = rd32(sp0 - 0x6c8u);
    g->ebp = rd32(sp0 - 0x6c0u);
    return;
L_10086af7: ;
    COW_AT(10086af7)
    wr8(eax + sp0 - 0x674u, (uint8_t)edx);
    goto L_10086afb;
L_10086bb9: ;
    COW_AT(10086bb9)
    t39 = edi * 2u + sp0 - 0x5c8u;
    wr32(sp0 - 0x6ccu, t39);
    t40 = edi * 2u + sp0 - 0x610u;
    wr32(sp0 - 0x6d0u, t40);
    wr32(sp0 - 0x6d4u, esi);
    wr32(sp0 - 0x6d8u, ebx);
    wr32(sp0 - 0x6dcu, 0xadu);
    wr8(edi + sp0 - 0x674u, 0xadu);
    g->esp = sp0 - 0x6c8u;
    cow_thiscall(g, COW_IMG(0x10120510u), COW_IMG(0x104e1bf8u), 5, 0xadu, ebx, esi, t40, t39);
    t41 = g->ecx;
    t42 = ebp + (uint32_t)(int16_t)rd16(esi);
    wr32(sp0 - 0x6a8u, t42);
    eax = rd32(sp0 - 0x6b4u);
    ecx = t41;
    edx = (uint32_t)(int16_t)rd16(esi);
    ebp = t42;
    loc_68c_f = (double)rdf32(sp0 - 0x68cu);
    loc_6b4 = rd32(sp0 - 0x6b4u);
    loc_6a8 = t42;
    goto L_10086c07;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10086900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10086993u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x6c8u);
        in_esi = rd32(sp0 - 0x6c4u);
        in_ebp = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x6c8u;
        g->ecx = 0u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        wr32(sp0 - 0x6bcu, in_ebx);
        wr32(sp0 - 0x6a0u, 0u);
        wr32(sp0 - 0x69cu, 0u);
        wr32(sp0 - 0x698u, 0u);
        wr32(sp0 - 0x688u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100869a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x6c8u);
        in_esi = rd32(sp0 - 0x6c4u);
        in_ebp = rd32(sp0 - 0x6c0u);
        g->esp = sp0 - 0x6c8u;
        g->ecx = 0u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        wr32(sp0 - 0x6bcu, in_ebx);
        wr32(sp0 - 0x6a0u, 0u);
        wr32(sp0 - 0x69cu, 0u);
        wr32(sp0 - 0x698u, 0u);
        wr32(sp0 - 0x688u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100869d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x100869e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x100869e9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086a10u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086a21u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086a2du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086a35u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086a5cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086ac8u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_68c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        g->ebp = arg2;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086acdu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_68c_f;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        g->ebp = arg2;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086ad9u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        double loc_68c_f;
        uint32_t loc_6b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        g->eax = 0u;
        g->ebp = arg2;
        g->esi = 0u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086b01u:
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
        double loc_68c_f;
        uint32_t loc_6b4;
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
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086b05u:
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
        double loc_68c_f;
        uint32_t loc_6b4;
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
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        (void)sp0;
        return 1;
    }
    case 0x10086b15u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_68c_f;
        uint32_t loc_6b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        g->ebp = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x6d4u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x6a0u);
        wr32(sp0 - 0x6a8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10086b23u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086b30u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086b3eu:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086b41u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086b48u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086bb9u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086beeu:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086c07u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086c16u:
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
        double loc_68c_f;
        uint32_t loc_6a8;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8 = rd32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086c34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_68c_f;
        double loc_6a8_f;
        uint32_t loc_6b4;
        uint32_t loc_6cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8_f = rdf32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10086c3bu:
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
        double loc_68c_f;
        double loc_6a8_f;
        uint32_t loc_6b4;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8_f = rdf32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086ce7u:
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
        double loc_68c_f;
        double loc_6a8_f;
        double loc_6b0_f;
        uint32_t loc_6b4;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6b0_f = rdf32(sp0 - 0x6b0u);
        loc_6a8_f = rdf32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    case 0x10086d3cu:
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
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6a0u);
        wr32(sp0 - 0x6ccu, sp0 - 0x680u);
        (void)sp0;
        return 1;
    }
    case 0x10086d6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
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
        g->esp = sp0 - 0x6c8u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        wr32(sp0 - 0x6acu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086d7bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
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
        g->esp = sp0 - 0x6c8u;
        g->eax = 0x80808080u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086d82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
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
        g->esp = sp0 - 0x6c8u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086d84u:
    {
        unsigned af;
        unsigned cf;
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
        g->esp = sp0 - 0x6c8u;
        g->eax = 0x80808080u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086db8u:
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
        g->esp = sp0 - 0x6c8u;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6ccu, sp0 - 0x6b8u);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        wr32(sp0 - 0x6acu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086dc3u:
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
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        g->esp = sp0 - 0x6ccu;
        wr32(sp0 - 0x6d0u, sp0 - 0x6acu);
        wr32(sp0 - 0x6b8u, 0x80808080u);
        wr32(sp0 - 0x6acu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x10086df4u:
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
        g->esp = sp0 - 0x6b4u;
        (void)sp0;
        return 1;
    }
    case 0x10086dfcu:
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
        g->esp = sp0 - 0x6b4u;
        (void)sp0;
        return 1;
    }
    case 0x10086e4eu:
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
        double loc_68c_f;
        double loc_6a8_f;
        uint32_t loc_6b4;
        uint32_t loc_6bc;
        uint32_t loc_6c0;
        uint32_t loc_6c4;
        uint32_t loc_6c8;
        uint32_t loc_6cc;
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
        loc_6cc = rd32(sp0 - 0x6ccu);
        loc_6c8 = rd32(sp0 - 0x6c8u);
        loc_6c4 = rd32(sp0 - 0x6c4u);
        loc_6c0 = rd32(sp0 - 0x6c0u);
        loc_6bc = rd32(sp0 - 0x6bcu);
        loc_6b4 = rd32(sp0 - 0x6b4u);
        loc_6a8_f = rdf32(sp0 - 0x6a8u);
        loc_68c_f = rdf32(sp0 - 0x68cu);
        g->esp = sp0 - 0x6c8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10086adb: holds in_ebx, which no location here says
     10086ae3: holds in_ebx, which no location here says
     10086ae5: holds in_ebx, which no location here says
     10086af7: holds in_ebx, which no location here says
     10086afb: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10086900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10086900(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
