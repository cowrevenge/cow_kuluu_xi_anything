/* f_0x102b2670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b2670(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d58;
    double d66;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_258;
    uint32_t loc_260;
    uint32_t loc_264;
    uint32_t loc_268;
    uint32_t loc_26c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t33;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
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
    uint32_t t80;
    uint32_t t81;
    uint32_t t9;
    double x0;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 668u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b2686u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 0x264u); g->ebp = rd32(sp0 - 0x264u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102b2686;
    case 0x102b2691u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 0x264u); g->ebp = rd32(sp0 - 0x264u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102b2691;
    case 0x102b26a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26a5;
    case 0x102b26afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26af;
    case 0x102b26bfu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 0x264u); g->ebp = rd32(sp0 - 0x264u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102b26bf;
    case 0x102b26ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26ce;
    case 0x102b26e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26e0;
    case 0x102b26f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26f0;
    case 0x102b26fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b26fb;
    case 0x102b270fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b270f;
    case 0x102b2717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2717;
    case 0x102b271bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b271b;
    case 0x102b272au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b272a;
    case 0x102b273fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b273f;
    case 0x102b274au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b274a;
    case 0x102b2750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2750;
    case 0x102b275au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b275a;
    case 0x102b276au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b276a;
    case 0x102b2771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2771;
    case 0x102b2780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2780;
    case 0x102b2795u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2795;
    case 0x102b27a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27a5;
    case 0x102b27b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27b0;
    case 0x102b27bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27bb;
    case 0x102b27cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27cf;
    case 0x102b27dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27db;
    case 0x102b27efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27ef;
    case 0x102b27f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b27f9;
    case 0x102b2803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2803;
    case 0x102b2806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_26c = rd32(sp0 - 0x26cu); loc_268 = rd32(sp0 - 0x268u); loc_264 = rd32(sp0 - 0x264u); loc_260 = rd32(sp0 - 0x260u); goto E_102b2806;
    case 0x102b2813u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2813;
    case 0x102b282cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b282c;
    case 0x102b2840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2840;
    case 0x102b2856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2856;
    case 0x102b285fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b285f;
    case 0x102b2873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2873;
    case 0x102b2882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2882;
    case 0x102b288du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b288d;
    case 0x102b2893u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2893;
    case 0x102b28a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28a2;
    case 0x102b28aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28ae;
    case 0x102b28b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28b4;
    case 0x102b28c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28c0;
    case 0x102b28d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28d0;
    case 0x102b28e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b28e2;
    case 0x102b28edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_258 = rd32(sp0 - 0x258u); goto E_102b28ed;
    case 0x102b2901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2901;
    case 0x102b2910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_258 = rd32(sp0 - 0x258u); goto E_102b2910;
    case 0x102b291bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b291b;
    case 0x102b2921u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b2921;
    case 0x102b2933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2933;
    case 0x102b293fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b293f;
    case 0x102b2945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b2945;
    case 0x102b2950u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2950;
    case 0x102b2964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b2964;
    case 0x102b296cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b296c;
    default: break;
    }
#endif

    COW_AT(102b2670)
    wr32(sp0 - 0x260u, in_ebx);
    wr32(sp0 - 0x264u, in_ebp);
    wr32(sp0 - 0x268u, in_esi);
    wr32(sp0 - 0x26cu, in_edi);
    if (arg1 == 0u)
    {
        loc_260 = in_ebx;
        loc_264 = in_ebp;
        loc_268 = in_esi;
        loc_26c = in_edi;
        goto L_102b2806;
    }
    COW_AT(102b2686)
    if (arg2 != 0u) goto L_102b26bf;
    COW_AT(102b2691)
    wr32(sp0 - 0x270u, 0x3a3u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b26a5u);
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102b26a5)
    wr32(sp0 - 0x27cu, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x274u;
    COW_RET(0x102b26afu);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    COW_AT(102b26af)
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = rd32(sp0 - 0x268u);
    g->edi = rd32(sp0 - 0x26cu);
    g->ebp = rd32(sp0 - 0x264u);
    return 0u;
L_102b26bf: ;
    COW_AT(102b26bf)
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x254u);
    g->eax = sp0 - 0x254u;
    g->edx = in_edx;
    g->esp = sp0 - 0x250u;
    COW_RET(0x102b26ceu);
    t4 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x254u, 4u, 1u, arg2, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102b26ce)
    wr32(sp0 - 0x280u, arg2);
    wr32(sp0 - 0x284u, 0x50u);
    wr32(sp0 - 0x288u, 1u);
    wr32(sp0 - 0x28cu, sp0 - 0x50u);
    g->eax = eax;
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x260u;
    COW_RET(0x102b26e0u);
    t6 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x254u, 4u, 1u, rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u));
    t7 = g->ecx;
    eax = t6;
    ecx = t7;
    COW_AT(102b26e0)
    wr32(sp0 - 0x290u, arg2);
    wr32(sp0 - 0x294u, 0x200u);
    wr32(sp0 - 0x298u, sp0 - 0x250u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x288u;
    COW_RET(0x102b26f0u);
    t8 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x250u, 1, 4, sp0 - 0x250u, 0x200u, arg2, sp0 - 0x50u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(102b26f0)
    if (eax == 0u)
    {
        loc_260 = rd32(sp0 - 0x260u);
        loc_264 = rd32(sp0 - 0x264u);
        loc_268 = rd32(sp0 - 0x268u);
        loc_26c = rd32(sp0 - 0x26cu);
        goto L_102b2806;
    }
    ebx = in_ebx;
L_102b26fb: ;
    COW_AT(102b26fb)
    edi = sp0 - 0x250u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_102b2795;
    }
    ecx = ~ecx - 1u;
    COW_AT(102b270f)
    if (rd8(sp0 - 0x250u) == 0xau) goto L_102b2795;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x250u);
    COW_AT(102b2717)
    if ((uint8_t)eax == 0x23u) goto L_102b2795;
    COW_AT(102b271b)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, sp0 - 0x250u);
    g->ebx = ebx;
    g->eax = sp0 - 0x250u;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b272au);
    t11 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, sp0 - 0x250u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    eax = t11;
    COW_AT(102b272a)
    esi = eax;
    edi = COW_IMG(0x103bfc74u);
    ecx = 0xcu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102b2795;
    }
    COW_AT(102b273f)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b274au);
    t12 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(102b274a)
    wr32(sp0 - 0x278u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    COW_RET(0x102b2750u);
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(102b2750)
    if ((int32_t)eax < 1)
    {
        ebx = eax;
        goto L_102b27bb;
    }
    ebx = eax;
    COW_AT(102b275a)
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 0x200u);
    wr32(sp0 - 0x278u, sp0 - 0x250u);
    g->eax = sp0 - 0x250u;
    g->ecx = ecx;
    g->esp = sp0 - 0x268u;
    COW_RET(0x102b276au);
    t18 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x250u, 0x200u, arg2, rd32(sp0 - 0x26cu));
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102b276a)
    if (eax == 0u) goto L_102b27db;
    COW_AT(102b2771)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, sp0 - 0x250u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b2780u);
    t21 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x250u, edx, 1, 4, sp0 - 0x250u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    eax = t21;
    COW_AT(102b2780)
    esi = eax;
    edi = COW_IMG(0x103bfb84u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102b2813;
    edx = 0u;
L_102b2795: ;
    COW_AT(102b2795)
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 0x200u);
    wr32(sp0 - 0x278u, sp0 - 0x250u);
    g->eax = sp0 - 0x250u;
    g->ecx = ecx;
    g->esp = sp0 - 0x268u;
    COW_RET(0x102b27a5u);
    t79 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x250u, 0x200u, arg2, rd32(sp0 - 0x26cu));
    t80 = g->ecx;
    t81 = g->edx;
    eax = t79;
    ecx = t80;
    edx = t81;
    COW_AT(102b27a5)
    if (eax != 0u) goto L_102b26fb;
    COW_AT(102b27b0)
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = rd32(sp0 - 0x268u);
    g->edi = rd32(sp0 - 0x26cu);
    g->ebp = rd32(sp0 - 0x264u);
    return eax;
L_102b27bb: ;
    COW_AT(102b27bb)
    wr32(sp0 - 0x270u, 0x3b6u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b27cfu);
    t77 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t78 = g->edx;
    eax = t77;
    edx = t78;
    COW_AT(102b27cf)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc5cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    ecx = sp0 - 0x250u;
L_102b27f9: ;
    COW_AT(102b27f9)
    wr32(sp0 - 0x284u, COW_IMG(0x103bfc3cu));
    g->ebx = ebx;
    g->esp = sp0 - 0x27cu;
    COW_RET(0x102b2803u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfc3cu), sp0 - 0x250u);
    COW_AT(102b2803)
    loc_260 = rd32(sp0 - 0x260u);
    loc_264 = rd32(sp0 - 0x264u);
    loc_268 = rd32(sp0 - 0x268u);
    loc_26c = rd32(sp0 - 0x26cu);
L_102b2806: ;
    COW_AT(102b2806)
    g->ebx = loc_260;
    g->esi = loc_268;
    g->edi = loc_26c;
    g->ebp = loc_264;
    return 0u;
L_102b27db: ;
    COW_AT(102b27db)
    wr32(sp0 - 0x270u, 0x3b9u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b27efu);
    t75 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t76 = g->ecx;
    eax = t75;
    ecx = t76;
    COW_AT(102b27ef)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    edx = sp0 - 0x250u;
    goto L_102b27f9;
L_102b2813: ;
    COW_AT(102b2813)
    wr32(sp0 - 0x270u, 0x3bcu);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, ebx * 4u);
    wr32(sp0 - 0x27cu, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x258u;
    COW_RET(0x102b282cu);
    t22 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx * 4u, COW_IMG(0x103bf904u), 0x3bcu, rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu));
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    esi = ebx * 4u;
    COW_AT(102b282c)
    wr32(sp0 - 0x280u, 0x3bdu);
    wr32(sp0 - 0x284u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x288u, esi);
    wr32(sp0 - 0x28cu, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    COW_RET(0x102b2840u);
    t25 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi, COW_IMG(0x103bf904u), 0x3bdu, 1u, rd32(sp0 - 0x278u), COW_IMG(0x103bf904u), 0x3bcu, rd32(sp0 - 0x26cu));
    t26 = g->ecx;
    t27 = g->edx;
    ecx = t26;
    edx = t27;
    ebp = eax;
    eax = t25;
    COW_AT(102b2840)
    wr32(sp0 - 0x25cu, eax);
    wr32(sp0 - 0x290u, 0x200u);
    wr32(sp0 - 0x294u, arg2);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    COW_RET(0x102b2856u);
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), ecx, 4, arg2, 0x200u, 1u, rd32(sp0 - 0x288u));
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(102b2856)
    if (eax != 0u)
    {
        edi = eax;
        goto L_102b2882;
    }
    COW_AT(102b285f)
    wr32(sp0 - 0x270u, 0x3bfu);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b2873u);
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(102b2873)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    ecx = sp0 - 0x250u;
    goto L_102b27f9;
L_102b2882: ;
    COW_AT(102b2882)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b288du);
    t33 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, edi, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(102b288d)
    wr32(sp0 - 0x278u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    COW_RET(0x102b2893u);
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(102b2893)
    wr32(ebp, eax);
    if ((int32_t)ebx <= 1) goto L_102b28c0;
    esi = 1u;
L_102b28a2: ;
    COW_AT(102b28a2)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b28aeu);
    t39 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(102b28ae)
    wr32(sp0 - 0x278u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x274u;
    COW_RET(0x102b28b4u);
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(102b28b4)
    wr32(ebp + esi * 4u, eax);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        esi = esi + 1u;
        goto L_102b28a2;
    }
L_102b28c0: ;
    COW_AT(102b28c0)
    wr32(sp0 - 0x270u, 0x3c3u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x26cu;
    COW_RET(0x102b28d0u);
    t45 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bf904u), 0x3c3u);
    t46 = g->ecx;
    eax = t45;
    ecx = t46;
    COW_AT(102b28d0)
    wr32(sp0 - 0x27cu, 0x200u);
    wr32(sp0 - 0x280u, arg2);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b28e2u);
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), ecx, 4, arg2, 0x200u, rd32(sp0 - 0x278u), COW_IMG(0x103bf904u));
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(102b28e2)
    wr32(sp0 - 0x258u, eax);
    if (eax != 0u)
    {
        loc_258 = eax;
        goto L_102b2910;
    }
    COW_AT(102b28ed)
    wr32(sp0 - 0x270u, 0x3c6u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    COW_RET(0x102b2901u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
    COW_AT(102b2901)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    eax = sp0 - 0x250u;
    goto L_102b27f9;
L_102b2910: ;
    COW_AT(102b2910)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b291bu);
    t52 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, eax, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102b291b)
    wr32(sp0 - 0x278u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    COW_RET(0x102b2921u);
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, rd32(sp0 - 0x274u), COW_IMG(0x103bfba0u));
    t56 = g->ecx;
    t57 = g->edx;
    d58 = cow_take_float(g);
    eax = t55;
    ecx = t56;
    edx = t57;
    x0 = d58;
    COW_AT(102b2921)
    t59 = rd32(sp0 - 0x25cu);
    wrf32(t59, (float)x0);
    if ((int32_t)ebx <= 1)
    {
        edi = t59;
        goto L_102b2950;
    }
    esi = 1u;
    edi = t59;
L_102b2933: ;
    COW_AT(102b2933)
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    COW_RET(0x102b293fu);
    t60 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t61 = g->ecx;
    t62 = g->edx;
    eax = t60;
    ecx = t61;
    edx = t62;
    COW_AT(102b293f)
    wr32(sp0 - 0x278u, eax);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    COW_RET(0x102b2945u);
    t63 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, eax, 0u, COW_IMG(0x103bfba0u));
    t64 = g->ecx;
    t65 = g->edx;
    d66 = cow_take_float(g);
    eax = t63;
    ecx = t64;
    edx = t65;
    x0 = d66;
    COW_AT(102b2945)
    wrf32(edi + esi * 4u, (float)x0);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        esi = esi + 1u;
        goto L_102b2933;
    }
L_102b2950: ;
    COW_AT(102b2950)
    wr32(sp0 - 0x270u, 0x3cau);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    t67 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x278u, t67);
    g->eax = eax;
    g->ecx = t67;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    COW_RET(0x102b2964u);
    t68 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t67, COW_IMG(0x103bf904u), 0x3cau);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(102b2964)
    g->eax = eax;
    g->esp = sp0 - 0x26cu;
    COW_RET(0x102b296cu);
    t71 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
    eax = t71;
    COW_AT(102b296c)
    wr32(eax + 0x38u, edi);
    wr32(eax + 0x9cu, arg1);
    t72 = rd32(sp0 - 0x26cu);
    wr32(eax + 0x30u, ebp);
    t73 = rd32(sp0 - 0x268u);
    wr32(eax + 0x50u, ebx);
    t74 = rd32(sp0 - 0x264u);
    wr32(eax + 0x3cu, 0u);
    wr32(eax + 0x58u, arg1 + 0x24u);
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = t73;
    g->edi = t72;
    g->ebp = t74;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b2686u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        self = g->ecx;
        in_edx = g->edx;
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
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 0x264u);
        g->esp = sp0 - 0x26cu;
        g->eax = arg1;
        wr32(sp0 - 0x260u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b2691u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        self = g->ecx;
        in_edx = g->edx;
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
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 0x264u);
        g->esp = sp0 - 0x26cu;
        g->eax = arg1;
        wr32(sp0 - 0x260u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b26a5u:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102b26afu:
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
        g->esp = sp0 - 0x27cu;
        (void)sp0;
        return 1;
    }
    case 0x102b26bfu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 0x264u);
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x260u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b26ceu:
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
        g->esp = sp0 - 0x27cu;
        g->ebp = arg2;
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, 4u);
        wr32(sp0 - 0x274u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102b26e0u:
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
        g->esp = sp0 - 0x28cu;
        g->ebp = arg2;
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b26f0u:
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
        g->esp = sp0 - 0x298u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b26fbu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b270fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b2717u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b271bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b272au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x274u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x274u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b273fu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->edx = 0u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x274u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b274au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x274u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b2750u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x278u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b275au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b276au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x278u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2771u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2780u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x274u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        wr32(sp0 - 0x274u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2795u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x26cu;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b27a5u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x278u;
        g->ebp = arg2;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b27b0u:
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
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b27bbu:
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
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b27cfu:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b27dbu:
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
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b27efu:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102b27f9u:
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
        g->esp = sp0 - 0x280u;
        wr32(sp0 - 0x280u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2803u:
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
        g->esp = sp0 - 0x284u;
        wr32(sp0 - 0x280u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2806u:
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
        uint32_t loc_260;
        uint32_t loc_264;
        uint32_t loc_268;
        uint32_t loc_26c;
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
        loc_26c = rd32(sp0 - 0x26cu);
        loc_268 = rd32(sp0 - 0x268u);
        loc_264 = rd32(sp0 - 0x264u);
        loc_260 = rd32(sp0 - 0x260u);
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b2813u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
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
        g->esp = sp0 - 0x26cu;
        g->edx = 0u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        wr32(sp0 - 0x278u, sp0 - 0x250u);
        wr32(sp0 - 0x274u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b282cu:
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
        g->esp = sp0 - 0x27cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, sp0 - 0x50u);
        wr32(sp0 - 0x27cu, 1u);
        wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
        wr32(sp0 - 0x270u, 0x3bcu);
        (void)sp0;
        return 1;
    }
    case 0x102b2840u:
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
        g->esp = sp0 - 0x28cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        wr32(sp0 - 0x28cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102b2856u:
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
        g->esp = sp0 - 0x294u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b285fu:
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
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2873u:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2882u:
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
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b288du:
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
        g->esp = sp0 - 0x274u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b2893u:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x298u, sp0 - 0x250u);
        (void)sp0;
        return 1;
    }
    case 0x102b28a2u:
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
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b28aeu:
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
        g->esp = sp0 - 0x274u;
        (void)sp0;
        return 1;
    }
    case 0x102b28b4u:
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
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102b28c0u:
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
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b28d0u:
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
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
        (void)sp0;
        return 1;
    }
    case 0x102b28e2u:
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
        g->esp = sp0 - 0x280u;
        (void)sp0;
        return 1;
    }
    case 0x102b28edu:
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
        uint32_t loc_258;
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
        loc_258 = rd32(sp0 - 0x258u);
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b2901u:
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
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102b2910u:
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
        uint32_t loc_258;
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
        loc_258 = rd32(sp0 - 0x258u);
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b291bu:
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
        g->esp = sp0 - 0x274u;
        wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
        (void)sp0;
        return 1;
    }
    case 0x102b2921u:
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
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102b2933u:
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
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b293fu:
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
        g->esp = sp0 - 0x274u;
        wr32(sp0 - 0x274u, 0u);
        wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
        (void)sp0;
        return 1;
    }
    case 0x102b2945u:
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
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102b2950u:
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
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    case 0x102b2964u:
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
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102b296cu:
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
        g->esp = sp0 - 0x26cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b2670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
