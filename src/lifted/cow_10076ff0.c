/* f_0x10076ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10076ff0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d96;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_158;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
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
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 368u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10077005u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077005;
    case 0x10077010u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077010;
    case 0x10077016u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077016;
    case 0x10077021u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077021;
    case 0x10077025u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077025;
    case 0x10077030u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x14cu); in_ebp = rd32(sp0 - 0x148u); g->ebp = rd32(sp0 - 0x148u); g->esi = rd32(sp0 - 0x14cu); goto E_10077030;
    case 0x10077048u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077048;
    case 0x10077058u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077058;
    case 0x1007705fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007705f;
    case 0x1007706au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007706a;
    case 0x10077077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077077;
    case 0x10077085u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077085;
    case 0x1007708fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007708f;
    case 0x10077092u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077092;
    case 0x1007709fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007709f;
    case 0x100770afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100770af;
    case 0x100770b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100770b2;
    case 0x100770cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100770cb;
    case 0x100770dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100770da;
    case 0x100770dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100770df;
    case 0x100770e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100770e7;
    case 0x100770f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100770f1;
    case 0x10077104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077104;
    case 0x10077114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077114;
    case 0x10077123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077123;
    case 0x1007712au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007712a;
    case 0x10077137u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077137;
    case 0x10077145u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077145;
    case 0x10077172u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077172;
    case 0x1007717fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007717f;
    case 0x1007718du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007718d;
    case 0x100771b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100771b7;
    case 0x100771e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100771e1;
    case 0x100771f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100771f0;
    case 0x100771fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100771fd;
    case 0x10077206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077206;
    case 0x10077220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077220;
    case 0x1007722fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007722f;
    case 0x10077252u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077252;
    case 0x10077270u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077270;
    case 0x1007727fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007727f;
    case 0x1007728cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007728c;
    case 0x1007729eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007729e;
    case 0x100772adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100772ad;
    case 0x100772bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100772ba;
    case 0x100772dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100772da;
    case 0x100772e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100772e9;
    case 0x100772fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100772fb;
    case 0x10077309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077309;
    case 0x10077320u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077320;
    case 0x10077332u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077332;
    case 0x10077344u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_10077344;
    case 0x1007736cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007736c;
    case 0x1007737eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_1007737e;
    case 0x1007738bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_1007738b;
    case 0x10077399u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077399;
    case 0x100773abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_100773ab;
    case 0x100773b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_100773b8;
    case 0x100773c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100773c8;
    case 0x100773dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_100773da;
    case 0x10077404u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077404;
    case 0x10077416u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_10077416;
    case 0x10077440u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077440;
    case 0x1007744du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007744d;
    case 0x10077458u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077458;
    case 0x100774aeu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774ae;
    case 0x100774beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774be;
    case 0x100774cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774cb;
    case 0x100774ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774dd;
    case 0x100774eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774ea;
    case 0x100774f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100774f7;
    case 0x10077505u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077505;
    case 0x10077534u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077534;
    case 0x10077541u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077541;
    case 0x10077554u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077554;
    case 0x10077556u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077556;
    case 0x1007757au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007757a;
    case 0x1007758cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_1007758c;
    case 0x10077599u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077599;
    case 0x100775a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100775a6;
    case 0x100775b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_100775b8;
    case 0x100775dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100775dc;
    case 0x100775ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100775eb;
    case 0x100775ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100775ff;
    case 0x10077609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077609;
    case 0x10077611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077611;
    case 0x1007761eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007761e;
    case 0x10077620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077620;
    case 0x10077631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077631;
    case 0x10077643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077643;
    case 0x10077645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077645;
    case 0x10077656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077656;
    case 0x10077668u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077668;
    case 0x10077677u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077677;
    case 0x1007768bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007768b;
    case 0x100776b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100776b6;
    case 0x100776c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100776c5;
    case 0x100776cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_100776cf;
    case 0x100776dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100776dc;
    case 0x100776eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100776ea;
    case 0x10077717u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077717;
    case 0x10077725u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_10077725;
    case 0x1007772cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007772c;
    case 0x10077742u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_158 = rd32(sp0 - 0x158u); goto E_10077742;
    case 0x1007774fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1007774f;
    case 0x10077757u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10077757;
    case 0x1007777cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_15c = rd32(sp0 - 0x15cu); goto E_1007777c;
    case 0x100777bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777ba;
    case 0x100777bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777bf;
    case 0x100777c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777c3;
    case 0x100777c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777c7;
    case 0x100777ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777ce;
    case 0x100777d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777d2;
    case 0x100777d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777d6;
    case 0x100777d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777d8;
    case 0x100777dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777da;
    case 0x100777e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100777e5;
    case 0x1007780eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); goto E_1007780e;
    case 0x1007781du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007781d;
    case 0x10077832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077832;
    case 0x10077844u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); goto E_10077844;
    case 0x10077849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); goto E_10077849;
    case 0x10077850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077850;
    case 0x10077855u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077855;
    case 0x10077856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077856;
    case 0x1007785au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007785a;
    case 0x1007785eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007785e;
    case 0x10077883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077883;
    case 0x10077887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_10077887;
    case 0x1007788fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_1007788f;
    case 0x100778a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100778a2;
    case 0x100778afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); goto E_100778af;
    case 0x100778c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); goto E_100778c1;
    default: break;
    }
#endif

    COW_AT(10076ff0)
    wr32(sp0 - 0x148u, in_ebp);
    wr32(sp0 - 0x14cu, in_esi);
    if (arg1 != 0u) goto L_10077010;
    COW_AT(10077005)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10077010: ;
    COW_AT(10077010)
    if (rd8(arg1) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        goto L_10077021;
    }
    COW_AT(10077016)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10077021: ;
    COW_AT(10077021)
    if ((uint8_t)eax == 0x3cu) goto L_10077030;
    COW_AT(10077025)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10077030: ;
    COW_AT(10077030)
    wr32(sp0 - 0x150u, in_ebx);
    wr32(sp0 - 0x154u, in_edi);
    wr32(sp0 - 0x158u, arg1);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357860u));
    g->esp = sp0 - 0x140u;
    t1 = cow_call_regs(g, COW_IMG(0x10077ba0u), eax, self, in_edx, 1, 7, COW_IMG(0x10357860u), arg1, in_edi, in_ebx, in_esi, in_ebp, rd32(sp0 - 0x144u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t1;
    edx = t2;
    COW_AT(10077048)
    if (rd16(eax + 6u) - 1u > 0x1eu)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd16(eax + 6u) - 1u;
    COW_AT(10077058)
    t3 = rd32(COW_IMG(0x100778d0u) + ecx * 4u);
    switch (t3 - RD)
    {
    case 0x1007705fu: goto L_1007705f;
    case 0x100770cbu: goto L_100770cb;
    case 0x10077114u: goto L_10077114;
    case 0x1007712au: goto L_1007712a;
    case 0x10077172u: goto L_10077172;
    case 0x100771b7u: goto L_100771b7;
    case 0x100771e1u: goto L_100771e1;
    case 0x10077220u: goto L_10077220;
    case 0x10077270u: goto L_10077270;
    case 0x1007729eu: goto L_1007729e;
    case 0x100772dau: goto L_100772da;
    case 0x100772fbu: goto L_100772fb;
    case 0x10077320u: goto L_10077320;
    case 0x10077332u: goto L_10077332;
    case 0x1007736cu: goto L_1007736c;
    case 0x10077399u: goto L_10077399;
    case 0x100773c8u: goto L_100773c8;
    case 0x10077404u: goto L_10077404;
    case 0x10077440u: goto L_10077440;
    case 0x100774beu: goto L_100774be;
    case 0x100774ddu: goto L_100774dd;
    case 0x10077534u: goto L_10077534;
    case 0x1007757au: goto L_1007757a;
    case 0x10077599u: goto L_10077599;
    case 0x100775dcu: goto L_100775dc;
    case 0x10077668u: goto L_10077668;
    case 0x100776b6u: goto L_100776b6;
    case 0x100776cfu: goto L_100776cf;
    case 0x10077717u: goto L_10077717;
    case 0x1007772cu: goto L_1007772c;
    case 0x1007777cu: goto L_1007777c;
    default: rt_fatal(g, COW_IMG(0x10077058u), "switch");
    }
    return 0;
L_1007705f: ;
    COW_AT(1007705f)
    if ((uint8_t)arg2 != 0u) goto L_10077077;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(1007706a)
    if (rd8(COW_IMG(0x1047d495u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077077: ;
    COW_AT(10077077)
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(10077085)
    if (rd32(ecx + 0xc4u) == 0u)
    {
        eax = rd32(ecx + 0xc4u);
    }
    else
    {
        eax = rd32(ecx + 0xc4u);
    COW_AT(1007708f)
        ecx = ecx + 0x28u;
    }
    COW_AT(10077092)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t117 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t118 = g->ecx;
    t119 = g->edx;
    if (t117 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t117;
    ecx = t118;
    edx = t119;
    COW_AT(1007709f)
    if (rd16(eax + 0x210u) != 0u)
    {
        ebp = eax + 0x214u;
    }
    else
    {
    COW_AT(100770af)
        ebp = eax + 0x7cu;
    }
    COW_AT(100770b2)
    wr32(sp0 - 0x158u, eax + 0x74u);
    g->esp = sp0 - 0x154u;
    cow_cdecl(g, COW_IMG(0x10077cf0u), 1, eax + 0x74u);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return ebp;
L_100770cb: ;
    COW_AT(100770cb)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(100770da)
    g->esp = sp0 - 0x154u;
    t116 = cow_call_regs(g, COW_IMG(0x10077d80u), eax, g->ecx, g->edx, 1, 0);
    eax = t116;
L_100770df: ;
    COW_AT(100770df)
    if (eax == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(100770e7)
    if (rd16(eax + 0x210u) == 0u) goto L_10077104;
    COW_AT(100770f1)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax + 0x214u;
L_10077104: ;
    COW_AT(10077104)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax + 0x7cu;
L_10077114: ;
    COW_AT(10077114)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(10077123)
    g->esp = sp0 - 0x154u;
    t115 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    eax = t115;
    goto L_100770df;
L_1007712a: ;
    COW_AT(1007712a)
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t112 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t113 = g->edx;
    if (t112 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t112;
    edx = t113;
    COW_AT(10077137)
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(10077145)
    t114 = rd8(eax + 0xecu);
    wr32(sp0 - 0x158u, t114);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t114, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077172: ;
    COW_AT(10077172)
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t107 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t108 = g->edx;
    if (t107 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t107;
    edx = t108;
    COW_AT(1007717f)
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(eax + 0xa0u);
    COW_AT(1007718d)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t109 = cow_call_regs(g, COW_IMG(0x100875f0u), eax, g->ecx, g->edx, 1, 0);
    t110 = g->ecx;
    t111 = g->edx;
    wr32(sp0 - 0x158u, t109);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t109, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100771b7: ;
    COW_AT(100771b7)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t104 = cow_call_regs(g, COW_IMG(0x10087610u), eax, g->ecx, g->edx, 1, 0);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x158u, t104);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t104, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100771e1: ;
    COW_AT(100771e1)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(100771f0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t99 = cow_thiscall(g, COW_IMG(0x100f94d0u), ecx, 0);
    t100 = g->ecx;
    t101 = g->edx;
    if (t99 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t99;
    ecx = t100;
    edx = t101;
    COW_AT(100771fd)
    if (rd32(eax) != 1u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(10077206)
    t102 = (edx & 0xffff0000u) | rd16(eax + 0x10u);
    wr32(sp0 - 0x158u, t102);
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t103 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t102);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t103;
L_10077220: ;
    COW_AT(10077220)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(1007722f)
    wr32(sp0 - 0x158u, sp0 - 0x144u);
    wr32(sp0 - 0x15cu, 0u);
    g->eax = sp0 - 0x144u;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t94 = cow_stdcall(g, COW_IMG(0x1021f030u), 2, 0u, sp0 - 0x144u);
    t95 = g->edx;
    d96 = cow_take_float(g);
    if (d96 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (t94 & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t95;
    COW_AT(10077252)
    t97 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x144u) + 0x74u);
    wr32(sp0 - 0x158u, t97);
    g->eax = t97;
    g->esp = sp0 - 0x154u;
    t98 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t97);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t98;
L_10077270: ;
    COW_AT(10077270)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(1007727f)
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t93 = cow_stdcall(g, COW_IMG(0x10077d40u), 0);
    if (t93 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(1007728c)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x103553e8u);
L_1007729e: ;
    COW_AT(1007729e)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(100772ad)
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(100772ba)
    t92 = -(rd8(eax + 0x9cu) != 0u) & eax + 0x9cu;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t92;
L_100772da: ;
    COW_AT(100772da)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(100772e9)
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t91 = cow_stdcall(g, COW_IMG(0x100fc4e0u), 0);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t91;
L_100772fb: ;
    COW_AT(100772fb)
    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x106643a8u));
    COW_AT(10077309)
    t89 = (uint32_t)(int8_t)rd8(eax + 5u);
    wr32(sp0 - 0x158u, t89);
    g->eax = t89;
    g->esp = sp0 - 0x154u;
    t90 = cow_stdcall(g, COW_IMG(0x10202c90u), 1, t89);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t90;
L_10077320: ;
    COW_AT(10077320)
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t88 = cow_stdcall(g, COW_IMG(0x100e3e30u), 0);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t88;
L_10077332: ;
    COW_AT(10077332)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t85 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t86 = g->edx;
    if (t85 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t85;
    edx = t86;
    COW_AT(10077344)
    t87 = rd32(eax + 0x28u);
    wr32(sp0 - 0x158u, t87);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t87, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_1007736c: ;
    COW_AT(1007736c)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t83 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t84 = g->ecx;
    if (t83 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t83;
    ecx = t84;
    COW_AT(1007737e)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(1007738b)
    eax = rd32(eax + 0x20u);
    edx = rd32(COW_IMG(0x10485638u));
L_10077554: ;
    COW_AT(10077554)
    wr32(sp0 - 0x158u, edx);
    wr32(sp0 - 0x15cu, eax);
    loc_158 = edx;
    loc_15c = eax;
L_10077556: ;
    COW_AT(10077556)
    wr32(sp0 - 0x160u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x164u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x150u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fbcu), loc_15c, loc_158, rd32(sp0 - 0x154u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077399: ;
    COW_AT(10077399)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t81 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    if (t81 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t81;
    COW_AT(100773ab)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(100773b8)
    wr32(sp0 - 0x158u, rd32(COW_IMG(0x1048563cu)));
    t82 = rd32(eax + 0x24u);
    wr32(sp0 - 0x15cu, t82);
    ecx = rd32(COW_IMG(0x1048563cu));
    edx = t82;
    loc_158 = rd32(COW_IMG(0x1048563cu));
    loc_15c = t82;
    goto L_10077556;
L_100773c8: ;
    COW_AT(100773c8)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t79 = g->edx;
    if (t78 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t78;
    edx = t79;
    COW_AT(100773da)
    t80 = rd8(eax + 0x2cu);
    wr32(sp0 - 0x158u, t80);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t80, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077404: ;
    COW_AT(10077404)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t75 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t76 = g->ecx;
    if (t75 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t75;
    ecx = t76;
    COW_AT(10077416)
    t77 = rd8(eax + 0x2du);
    wr32(sp0 - 0x158u, t77);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t77, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077440: ;
    COW_AT(10077440)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(1007744d)
    if (rd8(COW_IMG(0x10485642u)) == 0u) goto L_100774ae;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    COW_AT(10077458)
    wr32(sp0 - 0x158u, rd8(COW_IMG(0x10485643u)));
    wr32(sp0 - 0x15cu, (uint8_t)eax);
    wr32(sp0 - 0x160u, 2u);
    g->eax = eax;
    g->edx = (uint8_t)eax;
    g->esp = sp0 - 0x158u;
    t63 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, (uint8_t)eax);
    t64 = g->edx;
    wr32(sp0 - 0x15cu, t63);
    t65 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x160u, t65);
    t66 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x164u, t66);
    wr32(sp0 - 0x168u, 2u);
    g->eax = t66;
    g->ecx = t65;
    g->edx = t64;
    g->esp = sp0 - 0x160u;
    t67 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, t66);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x164u, t67);
    wr32(sp0 - 0x168u, COW_IMG(0x10357fccu));
    wr32(sp0 - 0x16cu, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x158u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fccu), t67, rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100774ae: ;
    COW_AT(100774ae)
    t70 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x158u, t70);
    t71 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x15cu, t71);
    eax = t71;
    edx = t70;
    loc_15c = t71;
    loc_158 = t70;
L_10077505: ;
    COW_AT(10077505)
    wr32(sp0 - 0x160u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    t72 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, loc_15c);
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x15cu, t72);
    wr32(sp0 - 0x160u, COW_IMG(0x10357fc4u));
    wr32(sp0 - 0x164u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x150u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fc4u), t72, rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100774be: ;
    COW_AT(100774be)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(100774cb)
    t61 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x158u, t61);
    t62 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x15cu, t62);
    eax = t62;
    ecx = t61;
    loc_15c = t62;
    loc_158 = t61;
    goto L_10077505;
L_100774dd: ;
    COW_AT(100774dd)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(100774ea)
    if (rd8(COW_IMG(0x10485642u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    COW_AT(100774f7)
    wr32(sp0 - 0x158u, rd8(COW_IMG(0x10485643u)));
    wr32(sp0 - 0x15cu, (uint8_t)eax);
    ecx = (uint8_t)eax;
    edx = rd8(COW_IMG(0x10485643u));
    loc_15c = (uint8_t)eax;
    loc_158 = rd8(COW_IMG(0x10485643u));
    goto L_10077505;
L_10077534: ;
    COW_AT(10077534)
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(10077541)
    eax = (uint16_t)rd32(COW_IMG(0x10485644u));
    edx = rd16(COW_IMG(0x10485646u));
    goto L_10077554;
L_1007757a: ;
    COW_AT(1007757a)
    wr32(sp0 - 0x158u, 1u);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t60 = cow_cdecl(g, COW_IMG(0x101f7600u), 1, 1u);
    if (t60 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t60;
    COW_AT(1007758c)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax;
L_10077599: ;
    COW_AT(10077599)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100775a6)
    wr32(sp0 - 0x158u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t57 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    if ((uint8_t)t57 != 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t57;
    COW_AT(100775b8)
    wr32(sp0 - 0x158u, 1u);
    t58 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x15cu, t58);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14cu;
    t59 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t58, 1u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t59;
L_100775dc: ;
    COW_AT(100775dc)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t50 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t50;
    ecx = t51;
    edx = t52;
    esi = t50;
    COW_AT(100775eb)
    wr32(sp0 - 0x158u, 1u);
    wr32(sp0 - 0x15cu, 1u);
    g->ecx = ecx;
    g->esp = sp0 - 0x154u;
    t53 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t54 = g->ecx;
    if ((uint8_t)t53 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t53;
    ecx = t54;
    COW_AT(100775ff)
    if (rd8(esi + 0x1ffu) < 5u) goto L_10077611;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x1ffu);
    COW_AT(10077609)
    if ((uint8_t)eax <= 6u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077611: ;
    COW_AT(10077611)
    if (!(rd32(esi + 0x130u) >> 8u & 1u)) goto L_10077643;
    COW_AT(1007761e)
    eax = 0u;
L_10077620: ;
    COW_AT(10077620)
    t55 = rd8(COW_IMG(0x10357fb8u) + eax);
    wr8(COW_IMG(0x1047d360u) + eax, (uint8_t)t55);
    if ((uint8_t)t55 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t55;
        goto L_10077620;
    }
    COW_AT(10077631)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077643: ;
    COW_AT(10077643)
    eax = 0u;
L_10077645: ;
    COW_AT(10077645)
    t56 = rd8(COW_IMG(0x10357fb4u) + eax);
    wr8(COW_IMG(0x1047d360u) + eax, (uint8_t)t56);
    if ((uint8_t)t56 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t56;
        goto L_10077645;
    }
    COW_AT(10077656)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077668: ;
    COW_AT(10077668)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t44 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t44;
    ecx = t45;
    edx = t46;
    esi = t44;
    COW_AT(10077677)
    wr32(sp0 - 0x158u, 1u);
    wr32(sp0 - 0x15cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t47 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t48 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t47;
    edx = t48;
    COW_AT(1007768b)
    t49 = rd32(esi + 0x27cu);
    wr32(sp0 - 0x158u, t49);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t49, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100776b6: ;
    COW_AT(100776b6)
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(100776c5)
    g->esp = sp0 - 0x154u;
    t43 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
    eax = t43;
    goto L_100770df;
L_100776cf: ;
    COW_AT(100776cf)
    g->esp = sp0 - 0x154u;
    t41 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
    if (t41 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t41;
    COW_AT(100776dc)
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(eax + 0xa0u);
    COW_AT(100776ea)
    t42 = rd8(eax + 0xecu);
    wr32(sp0 - 0x158u, t42);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t42, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077717: ;
    COW_AT(10077717)
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(10077725)
    g->ebx = in_ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t38 = cow_thiscall(g, COW_IMG(0x10159380u), ecx, 0);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
L_1007774f: ;
    COW_AT(1007774f)
    if (eax == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    COW_AT(10077757)
    wr32(sp0 - 0x158u, eax);
    wr32(sp0 - 0x15cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x1034f7e0u), eax, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_1007772c: ;
    COW_AT(1007772c)
    wr32(sp0 - 0x158u, 0x12u);
    t29 = (eax & 0xffffff00u) | rd8(eax + 5u);
    wr32(sp0 - 0x15cu, t29);
    g->eax = t29;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x10223040u), ecx, 2, t29, 0x12u);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)t30 < 0)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(10077742)
    wr32(sp0 - 0x158u, eax);
    g->esp = sp0 - 0x154u;
    t33 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 1, eax);
    t34 = g->edx;
    g->ebx = in_ebx;
    g->ecx = t33;
    g->edx = t34;
    t35 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 0x158u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    goto L_1007774f;
L_1007777c: ;
    COW_AT(1007777c)
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 0xffu);
    wr32(sp0 - 0x164u, sp0 - 0x100u);
    t4 = arg1 + rd8(eax + 4u);
    edi = t4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t5 = ~ecx - 1u;
    wr32(sp0 - 0x168u, t5);
    wr32(sp0 - 0x16cu, t4);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 0x154u;
    t6 = cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, t4, t5, sp0 - 0x100u, 0xffu, 0u, 0u);
    t7 = g->edx;
    if (rd8(sp0 - 0x100u) == 0u)
    {
        eax = (t6 & 0xffffff00u) | rd8(sp0 - 0x100u);
        ecx = 0u;
        goto L_100777e5;
    }
    eax = (t6 & 0xffffff00u) | rd8(sp0 - 0x100u);
    ecx = 0u;
    edx = t7 & 0xffffff00u;
    esi = sp0 - 0x100u;
L_100777ba: ;
    COW_AT(100777ba)
    if ((uint8_t)eax != 0x20u)
    {
        esi = esi + 1u;
        goto L_100777c3;
    }
    esi = esi + 1u;
    COW_AT(100777bf)
    zf = (uint8_t)edx == 0u;
L_100777d8: ;
    COW_AT(100777d8)
    if (zf) goto L_100777e5;
L_100777da: ;
    COW_AT(100777da)
    wr8(ecx + sp0 - 0x140u, (uint8_t)eax);
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        ecx = ecx + 1u;
        goto L_100777ba;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    ecx = ecx + 1u;
L_100777e5: ;
    COW_AT(100777e5)
    wr8(ecx + sp0 - 0x140u, 0u);
    wr32(sp0 - 0x158u, sp0 - 0x140u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = sp0 - 0x140u;
    g->esp = sp0 - 0x154u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10076a70u), ecx, 1, sp0 - 0x140u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x15cu, 1u);
    wr32(sp0 - 0x160u, 0u);
    wr32(sp0 - 0x164u, t8);
    wr32(sp0 - 0x144u, 0xffffffffu);
    g->esp = sp0 - 0x158u;
    t11 = cow_call_regs(g, COW_IMG(0x1022b430u), t8, t9, t10, 1, 3, t8, 0u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        esi = t8;
        goto L_10077844;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t8;
    COW_AT(1007780e)
    wr32(sp0 - 0x158u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t14 = cow_cdecl(g, COW_IMG(0x1022b2f0u), 1, eax);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 >= 0)
    {
        ecx = t15;
        edx = t16;
        ebx = 0u;
        edi = t14;
        goto L_10077887;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    ebx = 0u;
    edi = t14;
L_1007781d: ;
    COW_AT(1007781d)
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 1u);
    wr32(sp0 - 0x164u, 0u);
    wr32(sp0 - 0x168u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x138u;
    t17 = cow_call_regs(g, COW_IMG(0x10222e20u), g->eax, ecx, edx, 1, 12, esi, 0u, 1u, 0u, 0u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), 0xffffffffu, rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu));
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
    COW_AT(10077850)
        if (eax == 0xfffffffeu)
        {
    COW_AT(10077855)
            ebx = ebx + 1u;
        }
    }
    else
    {
        eax = t17;
        edx = t19;
    COW_AT(10077832)
        wr32(sp0 - 0x158u, sp0 - 0x144u);
        wr32(sp0 - 0x15cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x154u;
        t20 = cow_thiscall_cdecl(g, COW_IMG(0x10222c90u), sp0 - 0x144u, 2, eax, sp0 - 0x144u);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
        edi = t20;
    }
    COW_AT(10077856)
    if (ebx == 0u) goto L_10077883;
    COW_AT(1007785a)
    if ((int32_t)edi >= 0) goto L_10077887;
    COW_AT(1007785e)
    wr32(sp0 - 0x158u, esi);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fa8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fa8u), esi, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100777c3: ;
    COW_AT(100777c3)
    if ((uint8_t)eax != 0x22u) goto L_100777ce;
    COW_AT(100777c7)
    edx = (edx & 0xffffff00u) | (uint8_t)edx == 0u;
    goto L_100777da;
L_100777ce: ;
    COW_AT(100777ce)
    if ((uint8_t)eax == 0x3cu) goto L_100777e5;
    COW_AT(100777d2)
    if ((uint8_t)eax == 0xfdu) goto L_100777e5;
    COW_AT(100777d6)
    zf = (uint8_t)((uint8_t)eax - 0x3eu) == 0u;
    goto L_100777d8;
L_10077844: ;
    COW_AT(10077844)
    if (eax != 0xfffffffeu)
    {
        ebx = 0u;
        edi = 0xffffffffu;
    }
    else
    {
    COW_AT(10077849)
        ebx = 1u;
        edi = 0xffffffffu;
    }
    goto L_1007781d;
L_10077883: ;
    COW_AT(10077883)
    if ((int32_t)edi < 0)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077887: ;
    COW_AT(10077887)
    if ((int32_t)rd32(sp0 - 0x144u) < 0)
    {
        eax = rd32(sp0 - 0x144u);
    COW_AT(100778a2)
        wr32(sp0 - 0x158u, edi);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t26 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edi, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x15cu, t26);
        wr32(sp0 - 0x160u, esi);
        wr32(sp0 - 0x164u, COW_IMG(0x10357f90u));
        eax = t26;
        ecx = t27;
        edx = t28;
        loc_15c = t26;
        loc_160 = esi;
        loc_164 = COW_IMG(0x10357f90u);
    }
    else
    {
        eax = rd32(sp0 - 0x144u);
    COW_AT(1007788f)
        wr32(sp0 - 0x158u, eax);
        wr32(sp0 - 0x15cu, edi);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x150u;
        t23 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edi, eax, rd32(sp0 - 0x154u));
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x15cu, t23);
        wr32(sp0 - 0x160u, esi);
        wr32(sp0 - 0x164u, COW_IMG(0x10357f98u));
        eax = t23;
        ecx = t24;
        edx = t25;
        loc_15c = t23;
        loc_160 = esi;
        loc_164 = COW_IMG(0x10357f98u);
    }
    COW_AT(100778af)
    wr32(sp0 - 0x168u, COW_IMG(0x1047d360u));
    g->ebx = ebx;
    g->esp = sp0 - 0x154u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), loc_164, loc_160, loc_15c, rd32(sp0 - 0x158u));
    ebp = COW_IMG(0x1047d360u);
L_100778c1: ;
    COW_AT(100778c1)
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return ebp;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10076ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10077005u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x10077010u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t in_eax;
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
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10077016u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x10077021u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10077025u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x10077030u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x14cu);
        in_ebp = rd32(sp0 - 0x148u);
        g->esp = sp0 - 0x14cu;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10077048u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_15c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10077058u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_15c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007705fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007706au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077077u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077085u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007708fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077092u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007709fu:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100770afu:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100770b2u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100770cbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100770dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100770dfu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100770e7u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100770f1u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077104u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077114u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077123u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007712au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077137u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077145u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077172u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007717fu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007718du:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100771b7u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100771e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100771f0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100771fdu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077206u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077220u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007722fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077252u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x158u, sp0 - 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x10077270u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007727fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007728cu:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007729eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100772adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100772bau:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100772dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100772e9u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100772fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077309u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077320u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077332u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077344u:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007736cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007737eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007738bu:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077399u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100773abu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100773b8u:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100773c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100773dau:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077404u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077416u:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077440u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007744du:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077458u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100774aeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100774beu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100774cbu:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100774ddu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100774eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100774f7u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077505u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x10077534u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077541u:
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
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077554u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077556u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x1007757au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007758cu:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077599u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100775a6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100775b8u:
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
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100775dcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100775ebu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100775ffu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077609u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077611u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007761eu:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077620u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077631u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077643u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077645u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077656u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077668u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077677u:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007768bu:
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
        uint32_t loc_158;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100776b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100776c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100776cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100776dcu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100776eau:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077717u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077725u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007772cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_15c;
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
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077742u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_158;
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
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007774fu:
    {
        unsigned af;
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
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077757u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007777cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_15c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100777bau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777bfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777ceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777d2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777d6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100777e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x164u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1007780eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x158u, sp0 - 0x140u);
        wr32(sp0 - 0x144u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1007781du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
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
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        wr32(sp0 - 0x144u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10077832u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077844u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
        uint32_t loc_160;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebx = 0u;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x158u, sp0 - 0x140u);
        wr32(sp0 - 0x144u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10077849u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
        uint32_t loc_160;
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
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x158u, sp0 - 0x140u);
        wr32(sp0 - 0x144u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10077850u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077855u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077856u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007785au:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007785eu:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x10077883u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10077887u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1007788fu:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100778a2u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x100778afu:
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
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x100778c1u:
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
        uint32_t loc_158;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
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
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10076ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10076ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
