/* f_0x10228440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10228440(Guest* g)
{
    double d43;
    double d47;
    double d48;
    double d52;
    double d62;
    double d66;
    double d87;
    double d89;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    double loc_28_f;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_c;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t88;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10228457u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10228457;
    case 0x10228462u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10228462;
    case 0x1022847fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022847f;
    case 0x1022848du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1022848d;
    case 0x1022849eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022849e;
    case 0x102284a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284a9;
    case 0x102284bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102284ba;
    case 0x102284beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102284be;
    case 0x102284ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284ce;
    case 0x102284d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284d2;
    case 0x102284e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284e2;
    case 0x102284e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102284e8;
    case 0x102284f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284f3;
    case 0x102284f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102284f7;
    case 0x10228508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228508;
    case 0x1022850cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022850c;
    case 0x1022851cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1022851c;
    case 0x10228520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10228520;
    case 0x10228526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228526;
    case 0x10228530u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228530;
    case 0x10228538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_10228538;
    case 0x1022853cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022853c;
    case 0x10228544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228544;
    case 0x1022855bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022855b;
    case 0x10228582u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228582;
    case 0x1022858au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022858a;
    case 0x10228594u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228594;
    case 0x1022859au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1022859a;
    case 0x102285a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102285a0;
    case 0x102285acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102285ac;
    case 0x102285bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102285bc;
    case 0x102285c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102285c0;
    case 0x102285ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_102285cc;
    case 0x102285d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102285d1;
    case 0x102285dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102285df;
    case 0x102285e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102285e6;
    case 0x102285efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102285ef;
    case 0x102285f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102285f4;
    case 0x10228605u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10228605;
    case 0x1022860bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022860b;
    case 0x1022860fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022860f;
    case 0x10228627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228627;
    case 0x1022862cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1022862c;
    case 0x10228631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10228631;
    case 0x1022863fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022863f;
    case 0x10228645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10228645;
    case 0x1022864eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022864e;
    case 0x10228656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10228656;
    case 0x1022865au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022865a;
    case 0x1022865eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1022865e;
    case 0x10228661u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228661;
    case 0x10228675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10228675;
    case 0x1022869au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022869a;
    case 0x1022869fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1022869f;
    case 0x102286a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102286a3;
    case 0x102286b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102286b3;
    case 0x102286cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102286ca;
    case 0x102286dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28_f = rdf32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); goto E_102286db;
    case 0x102286e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102286e5;
    case 0x102286ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_102286ec;
    case 0x102286f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28_f = rdf32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); goto E_102286f1;
    case 0x10228713u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_28_f = rdf32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); goto E_10228713;
    case 0x1022871eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1022871e;
    case 0x1022873cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_1022873c;
    case 0x10228747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10228747;
    case 0x10228754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10228754;
    case 0x10228766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228766;
    case 0x1022878au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022878a;
    case 0x10228799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228799;
    case 0x102287b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102287b0;
    case 0x102287b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102287b2;
    case 0x102287bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102287ba;
    case 0x102287deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102287de;
    case 0x102287eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102287ee;
    case 0x10228807u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228807;
    case 0x10228818u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228818;
    case 0x1022881bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022881b;
    case 0x1022882fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1022882f;
    case 0x10228848u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); goto E_10228848;
    case 0x10228856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228856;
    case 0x1022885au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022885a;
    case 0x10228873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228873;
    case 0x1022887au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022887a;
    case 0x1022887fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022887f;
    case 0x10228892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10228892;
    case 0x1022889cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022889c;
    case 0x102288a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102288a9;
    case 0x102288b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); goto E_102288b0;
    case 0x102288ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); goto E_102288ce;
    default: break;
    }
#endif

    COW_AT(10228440)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(sp0 - 0x40u, 0xc2u);
    wr32(sp0 - 0x1cu, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc2u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10228457)
    if (eax == 0u)
    {
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
    COW_AT(10228462)
        wr32(sp0 - 0x40u, 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t4 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(1022846b)
        if (rd8(self + 5u) == ((uint8_t)eax == 0u))
        {
            eax = (eax & 0xffffff00u) | (uint8_t)eax == 0u;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)eax == 0u;
    COW_AT(1022847a)
            wr8(self + 5u, (uint8_t)eax);
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    COW_AT(1022847f)
        wr32(sp0 - 0x28u, 0u);
        if ((uint8_t)ebx != 0u)
        {
    COW_AT(102286e5)
            g->esp = sp0 - 0x3cu;
            cow_fastcall(g, COW_IMG(0x10228910u), self, edx, 0);
            t25 = g->ecx;
            t26 = g->edx;
            ecx = t25;
            edx = t26;
    COW_AT(102286ec)
            loc_28 = rd32(sp0 - 0x28u);
        }
        else
        {
    COW_AT(1022848d)
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0xcu, 0u);
            if (rd32(COW_IMG(0x10578478u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10578478u));
                loc_28 = 0u;
                loc_10 = 0u;
                loc_c = 0u;
                goto L_102284e8;
            }
            eax = rd32(COW_IMG(0x10578478u));
    COW_AT(1022849e)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t7 = cow_thiscall(g, COW_IMG(0x10159370u), rd32(COW_IMG(0x1057876cu)), 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
    COW_AT(102284a9)
            wr32(sp0 - 0x10u, rd32(eax));
            t9 = rd32(eax + 4u);
            wr32(sp0 - 0xcu, t9);
            if (rd32(eax + 4u) != 0u)
            {
                loc_10 = rd32(eax);
                loc_c = t9;
                goto L_102284be;
            }
            ecx = rd32(eax);
            loc_10 = rd32(eax);
            eax = t9;
            loc_c = t9;
    COW_AT(102284ba)
            if (ecx == 0u) goto L_10228526;
L_102284be: ;
    COW_AT(102284be)
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x1057876cu));
            g->edx = edx;
            t10 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t11 = cow_call_regs(g, COW_IMG(0x101593c0u), sp0 - 0x10u, g->ecx, g->edx, 0, 1, sp0 - 0x10u);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
    COW_AT(102284ce)
            if ((uint8_t)eax == 0u) goto L_10228526;
    COW_AT(102284d2)
            wr32(sp0 - 0x28u, 1u);
            if (rd32(sp0 - 0xcu) != 0u)
            {
                eax = rd32(sp0 - 0xcu);
                loc_28 = 1u;
                loc_10 = rd32(sp0 - 0x10u);
                goto L_1022853c;
            }
            eax = rd32(sp0 - 0xcu);
    COW_AT(102284e2)
            if (rd32(sp0 - 0x10u) != 0u)
            {
                loc_28 = 1u;
                loc_10 = rd32(sp0 - 0x10u);
                goto L_1022853c;
            }
            loc_28 = 1u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
L_102284e8: ;
    COW_AT(102284e8)
            g->edx = edx;
            t14 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t15 = cow_call_regs(g, COW_IMG(0x10157cb0u), eax, t14, g->edx, 1, 0);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
    COW_AT(102284f3)
            if (eax == 0u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                goto L_10228538;
            }
    COW_AT(102284f7)
            wr32(sp0 - 0x10u, rd32(eax));
            t18 = rd32(eax + 4u);
            wr32(sp0 - 0xcu, t18);
            if (rd32(eax + 4u) != 0u)
            {
                loc_10 = rd32(eax);
                eax = t18;
                loc_c = t18;
                goto L_1022850c;
            }
            ecx = rd32(eax);
            loc_10 = rd32(eax);
            eax = t18;
            loc_c = t18;
    COW_AT(10228508)
            if (ecx == 0u) goto L_10228530;
L_1022850c: ;
    COW_AT(1022850c)
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x1057876cu));
            g->edx = edx;
            t19 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x3cu;
            t20 = cow_call_regs(g, COW_IMG(0x101593c0u), eax, g->ecx, g->edx, 0, 1, sp0 - 0x10u);
            t21 = g->ecx;
            t22 = g->edx;
            eax = t20;
            ecx = t21;
            edx = t22;
    COW_AT(1022851c)
            if ((uint8_t)eax == 0u) goto L_10228530;
    COW_AT(10228520)
            wr32(sp0 - 0x28u, 0u);
            loc_28 = 0u;
L_10228538: ;
    COW_AT(10228538)
            eax = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
L_1022853c: ;
    COW_AT(1022853c)
            if (rd32(self + 0x22cu) != eax)
            {
    COW_AT(10228544)
                wr32(self + 0x228u, loc_10);
                wr32(self + 0x22cu, eax);
                g->esp = sp0 - 0x3cu;
                cow_fastcall(g, COW_IMG(0x102288e0u), self, loc_10, 0);
                t23 = g->ecx;
                t24 = g->edx;
                ecx = t23;
                edx = t24;
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    COW_AT(1022855b)
        t27 = rd8(self + 0x230u);
        wr32(sp0 - 0x10u, t27);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        t28 = rd32(self + 0x22cu);
        wr8(sp0 - 0x29u, 0u);
        if (t28 != 0u)
        {
            eax = t28;
            loc_10 = t27;
            goto L_1022858a;
        }
        eax = t28;
        loc_10 = t27;
    COW_AT(10228582)
        if (rd32(self + 0x228u) == 0u)
        {
            esi = 0u;
            loc_24 = 0u;
            loc_20 = 0u;
            goto L_102285d1;
        }
L_1022858a: ;
    COW_AT(1022858a)
        if (rd32(COW_IMG(0x106643a8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            esi = 0u;
            loc_24 = 0u;
            loc_20 = 0u;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106643a8u));
    COW_AT(10228594)
            wr32(sp0 - 0x40u, eax);
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t29 = cow_stdcall(g, COW_IMG(0x10203540u), 1, eax);
            t30 = g->edx;
            eax = t29;
            edx = t30;
    COW_AT(1022859a)
            if ((int32_t)eax >= 0)
            {
                esi = eax;
    COW_AT(102285a0)
                wr32(sp0 - 0x40u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t31 = cow_stdcall(g, COW_IMG(0x10202c90u), 1, esi);
                t32 = g->edx;
                eax = t31;
                edx = t32;
    COW_AT(102285ac)
                wr32(sp0 - 0x40u, esi);
                wr32(sp0 - 0x20u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t33 = cow_stdcall(g, COW_IMG(0x10202cc0u), 1, esi);
                t34 = g->edx;
                eax = t33;
                edx = t34;
    COW_AT(102285bc)
                wr8(sp0 - 0x29u, (uint8_t)eax);
            }
    COW_AT(102285c0)
            t35 = rd32(self + 0x22cu);
            wr32(sp0 - 0x40u, t35);
            g->eax = eax;
            g->ecx = t35;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t36 = cow_cdecl(g, COW_IMG(0x10098f70u), 1, t35);
            t37 = g->ecx;
            t38 = g->edx;
            eax = t36;
            ecx = t37;
            edx = t38;
    COW_AT(102285cc)
            esi = eax;
            loc_28 = rd32(sp0 - 0x28u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_20 = rd32(sp0 - 0x20u);
        }
L_102285d1: ;
    COW_AT(102285d1)
        wr8(self + 0x230u, (uint8_t)loc_28);
        if (esi == 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)loc_28;
            goto L_1022860f;
        }
        edx = (edx & 0xffffff00u) | (uint8_t)loc_28;
        ebx = 0u;
        edi = 0u;
L_102285df: ;
    COW_AT(102285df)
        wr32(sp0 - 0x40u, edi);
        wr32(sp0 - 0x44u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t39 = cow_cdecl(g, COW_IMG(0x10098f90u), 3, esi, edi, rd32(sp0 - 0x3cu));
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    COW_AT(102285e6)
        if ((uint16_t)eax != 0xffffu)
        {
    COW_AT(102285ef)
            if ((uint16_t)eax != 0u)
            {
    COW_AT(102285f4)
                wr16(self + (uint16_t)ebx * 2u + 0x234u, (uint16_t)eax);
                ecx = (uint16_t)ebx;
                ebx = ebx + 1u;
            }
        }
    COW_AT(10228605)
        if ((int32_t)(edi + 1u) < 32)
        {
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_102285df;
        }
    COW_AT(1022860b)
        wr32(sp0 - 0x24u, ebx);
        loc_10 = rd32(sp0 - 0x10u);
        loc_24 = ebx;
        loc_20 = rd32(sp0 - 0x20u);
L_1022860f: ;
    COW_AT(1022860f)
        wr32(sp0 - 0x28u, self + 8u);
        wr32(sp0 - 0x14u, 0xfffffdf8u - self);
        ecx = self + 8u;
        ebx = self + 0x208u;
        edi = 0xfffffdf8u - self;
        loc_28 = self + 8u;
        loc_14 = 0xfffffdf8u - self;
L_10228627: ;
    COW_AT(10228627)
        if (rd8(ebx) != 0u)
        {
    COW_AT(1022862c)
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t42 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
            eax = t42;
    COW_AT(10228631)
            if ((int32_t)(uint16_t)rd32(sp0 - 0x24u) <= 0)
            {
                edx = 0u;
                esi = (uint16_t)rd32(sp0 - 0x24u);
            }
            else
            {
                esi = (uint16_t)rd32(sp0 - 0x24u);
    COW_AT(1022863f)
                edx = 0u;
                edi = self + 0x234u;
L_10228645: ;
    COW_AT(10228645)
                if (eax == rd16(edi)) goto L_10228656;
    COW_AT(1022864e)
                if ((int32_t)(edx + 1u) < (int32_t)esi)
                {
                    edx = edx + 1u;
                    edi = edi + 2u;
                    goto L_10228645;
                }
                edx = edx + 1u;
L_10228656: ;
    COW_AT(10228656)
                edi = rd32(sp0 - 0x14u);
            }
    COW_AT(1022865a)
            if (edx != esi)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
    COW_AT(1022865e)
                wr8(ebx, 0u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    COW_AT(10228661)
        wr32(sp0 - 0x28u, loc_28 + 0x10u);
        if ((int32_t)(ebx + edi + 1u) < 32)
        {
            ecx = loc_28 + 0x10u;
            edx = ebx + edi + 1u;
            ebx = ebx + 1u;
            loc_28 = loc_28 + 0x10u;
            goto L_10228627;
        }
        edx = ebx + edi + 1u;
    COW_AT(10228675)
        d43 = (double)rdf32(COW_IMG(0x1032a3acu));
        wr16(self + 0x278u, (uint16_t)loc_24);
        wr32(sp0 - 0x28u, 0x41800000u);
        if (rd32(COW_IMG(0x106671b8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106671b8u));
            esi = loc_24;
            loc_28 = 0x41800000u;
            x0 = d43;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106671b8u));
            esi = loc_24;
            x0 = d43;
    COW_AT(1022869a)
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t44 = cow_call_regs(g, COW_IMG(0x10227920u), eax, ecx, g->edx, 1, 0);
            t45 = g->ecx;
            t46 = g->edx;
            eax = t44;
            ecx = t45;
            edx = t46;
    COW_AT(1022869f)
            if ((uint8_t)eax != 1u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
    COW_AT(102286a3)
                wr32(sp0 - 0x28u, 0x42000000u);
                loc_28 = 0x42000000u;
                loc_10 = rd32(sp0 - 0x10u);
                loc_20 = rd32(sp0 - 0x20u);
                x0 = (double)rdf32(COW_IMG(0x10329d34u));
            }
        }
    COW_AT(102286b3)
        d47 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 - 0x18u, (float)(double)(float)d47);
        g->edx = edx;
        d48 = fr(g, cow_bits2f(loc_28) * (double)(float)d47);
        fpush(g, d48);
        g->esp = sp0 - 0x3cu;
        t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t50 = g->edx;
        eax = t49;
        edx = t50;
    COW_AT(102286ca)
        wr32(sp0 - 0x14u, eax);
        wrf32(sp0 - 0x28u, (float)(double)(float)(double)(int32_t)eax);
        if ((uint16_t)esi != 0u)
        {
            loc_28_f = (double)(float)(double)(int32_t)eax;
    COW_AT(102286f1)
            t51 = (uint32_t)((int32_t)((uint16_t)esi + ((uint32_t)((int32_t)((uint16_t)esi - 1u) >> 0x1fu) & 7u) - 1u) >> 3u) + 1u;
            wr32(sp0 - 0x14u, t51);
            d52 = (double)(float)fr(g, (double)(int32_t)t51 * loc_28_f);
            wrf32(sp0 - 0x24u, (float)d52);
            eax = t51;
            edx = (uint32_t)((int32_t)((uint16_t)esi - 1u) >> 0x1fu) & 7u;
        }
        else
        {
            loc_28_f = (double)(float)(double)(int32_t)eax;
    COW_AT(102286db)
            wr32(sp0 - 0x24u, 0u);
        }
    COW_AT(10228713)
        wr32(sp0 - 0x40u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t53 = cow_thiscall(g, COW_IMG(0x1015f960u), COW_IMG(0x10621838u), 1, 0u);
        t54 = g->edx;
        eax = t53;
        edx = t54;
    COW_AT(1022871e)
        t55 = rd32(eax);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        if (t55 == 0u)
        {
            eax = t55;
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
        else
        {
            eax = t55;
    COW_AT(1022873c)
            if (rd32(eax + 8u) == 0u)
            {
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
            }
            else
            {
                ecx = rd32(eax + 8u);
    COW_AT(10228747)
                if (rd32(COW_IMG(0x106643a8u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x106643a8u));
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_38 = rd32(sp0 - 0x38u);
                    loc_3c = rd32(sp0 - 0x3cu);
                }
                else
                {
                    eax = rd32(COW_IMG(0x106643a8u));
    COW_AT(10228754)
                    wr32(sp0 - 0x40u, sp0 - 8u);
                    g->edx = edx;
                    t56 = rd16(eax + 0x5eu);
                    t57 = rd16(eax + 0x5cu);
                    g->esp = sp0 - 0x3cu;
                    t58 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
                    t59 = g->edx;
                    eax = t58;
                    edx = t59;
                    ebp = (self & 0xffff0000u) | t56;
                    edi = t57;
    COW_AT(10228766)
                    t60 = (uint32_t)(int16_t)rd16(sp0 - 6u) - 8u;
                    wr32(sp0 - 0x14u, t60);
                    g->ecx = t60;
                    t61 = rd16(sp0 - 8u);
                    d62 = fr(g, (double)(int32_t)t60 - (double)rdf32(sp0 - 0x24u));
                    fpush(g, d62);
                    g->esp = sp0 - 0x3cu;
                    t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t64 = g->ecx;
                    eax = t63;
                    ecx = t64;
                    esi = (uint32_t)(int16_t)t61 + 0xc8u;
    COW_AT(1022878a)
                    if ((int32_t)(esi + 0x90u) < (int16_t)edi)
                    {
                        edx = esi + 0x90u;
                        ebx = eax;
                    }
                    else
                    {
                        eax = (uint32_t)(int16_t)edi;
                        edx = esi + 0x90u;
    COW_AT(10228799)
                        t65 = (uint32_t)(int16_t)ebp - 8u;
                        wr32(sp0 - 0x14u, t65);
                        g->ecx = t65;
                        g->edx = edx;
                        d66 = fr(g, (double)(int32_t)t65 - (double)rdf32(sp0 - 0x24u));
                        fpush(g, d66);
                        g->esp = sp0 - 0x3cu;
                        t67 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t68 = g->ecx;
                        t69 = g->edx;
                        eax = t67;
                        ecx = t68;
                        edx = t69;
    COW_AT(102287b0)
                        ebx = eax;
                    }
    COW_AT(102287b2)
                    if (rd32(sp0 - 0x20u) == 0u)
                    {
                        eax = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x20u);
    COW_AT(102287ba)
                        t70 = (-(rd8(sp0 - 0x29u) != 0u) & 0x404040u) - 0x7fbfbfc0u;
                        wr32(sp0 - 0x40u, t70);
                        t71 = rd32(sp0 - 0x20u);
                        wr32(sp0 - 0x44u, t71);
                        wr32(sp0 - 0x48u, ebx - 0x10u);
                        wr32(sp0 - 0x4cu, esi);
                        g->eax = t70;
                        g->ecx = ecx;
                        g->edx = t71;
                        g->esp = sp0 - 0x28u;
                        t72 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, ebx - 0x10u, t71, t70, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
                        t73 = g->ecx;
                        t74 = g->edx;
                        eax = t72;
                        ecx = t73;
                        edx = t74;
                        ebp = ebx - 0x10u;
                        edi = t70;
    COW_AT(102287de)
                        wr32(sp0 - 0x14u, eax);
                        if (rd32(sp0 - 0x10u) != 1u)
                        {
                            eax = rd32(sp0 - 0x10u);
                        }
                        else
                        {
                            loc_14 = eax;
                            eax = rd32(sp0 - 0x10u);
    COW_AT(102287ee)
                            wr32(sp0 - 0x40u, 0x3f800000u);
                            wr32(sp0 - 0x44u, 0x3f800000u);
                            wr32(sp0 - 0x48u, 1u);
                            wr32(sp0 - 0x4cu, edi);
                            wr32(sp0 - 0x50u, COW_IMG(0x10386284u));
                            wr32(sp0 - 0x54u, ebp);
                            wr32(sp0 - 0x58u, esi);
                            g->edx = edx;
                            g->esp = sp0 - 0x3cu;
                            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, esi, ebp, COW_IMG(0x10386284u), edi, 1u, 0x3f800000u, 0x3f800000u);
                            t75 = g->ecx;
                            t76 = g->edx;
                            ecx = t75;
                            edx = t76;
    COW_AT(10228807)
                            wr32(sp0 - 0x5cu, edi);
                            wr32(sp0 - 0x60u, COW_IMG(0x10386280u));
                            wr32(sp0 - 0x64u, ebp);
                            t77 = rd32(sp0 - 0x14u);
                            wr32(sp0 - 0x68u, t77);
                            g->eax = t77;
                            g->edx = edx;
                            g->esp = sp0 - 0x44u;
                            t78 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t77, ebp, COW_IMG(0x10386280u), edi, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), COW_IMG(0x10386284u), rd32(sp0 - 0x4cu), 1u);
                            t79 = g->edx;
                            eax = t78;
                            edx = t79;
    COW_AT(10228818)
                        }
                    }
    COW_AT(1022881b)
                    if (rd16(rd32(sp0 - 0x1cu) + 0x278u) == 0u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x1cu) + 0x278u);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x1cu) + 0x278u);
    COW_AT(1022882f)
                        wr32(sp0 - 0x20u, esi);
                        wr32(sp0 - 0x14u, ebx);
                        wr32(sp0 - 0x24u, 0u);
                        if ((uint16_t)eax == 0u)
                        {
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                            loc_3c = rd32(sp0 - 0x3cu);
                            goto L_102288ce;
                        }
                        ebp = 0u;
                        edi = esi;
                        loc_14 = ebx;
                        loc_20 = esi;
                        loc_24 = 0u;
L_10228848: ;
    COW_AT(10228848)
                        wr32(sp0 - 0x40u, loc_24);
                        g->ebx = ebx;
                        g->eax = eax;
                        g->esp = sp0 - 0x3cu;
                        t80 = cow_thiscall(g, COW_IMG(0x10228280u), rd32(sp0 - 0x1cu), 1, loc_24);
                        eax = t80;
    COW_AT(10228856)
                        if (eax == 0u)
                        {
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_20 = rd32(sp0 - 0x20u);
                        }
                        else
                        {
    COW_AT(1022885a)
                            wr32(sp0 - 0x40u, 0u);
                            wr32(sp0 - 0x44u, 0x80808080u);
                            t81 = rd32(sp0 - 0x18u);
                            wr32(sp0 - 0x48u, t81);
                            wr32(sp0 - 0x4cu, ebx + 1u);
                            wr32(sp0 - 0x50u, edi + 1u);
                            g->eax = eax;
                            g->edx = ebx + 1u;
                            g->esp = sp0 - 0x50u;
                            t82 = cow_thiscall(g, COW_IMG(0x10227130u), eax, 0);
                            t83 = g->edx;
                            eax = t82;
                            edx = t83;
    COW_AT(10228873)
                            g->ebx = ebx;
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x3cu;
                            t84 = cow_thiscall(g, COW_IMG(0x10026ad0u), eax, 5, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), 0x80808080u, 0u);
                            t85 = g->ecx;
                            t86 = g->edx;
                            eax = t84;
                            ecx = t85;
                            edx = t86;
    COW_AT(1022887a)
                            if (ebp != 7u)
                            {
    COW_AT(1022889c)
                                d89 = fr(g, (double)(int32_t)rd32(sp0 - 0x20u) + (double)rdf32(sp0 - 0x28u));
                                fpush(g, d89);
                                g->esp = sp0 - 0x3cu;
                                t90 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                eax = t90;
    COW_AT(102288a9)
                                wr32(sp0 - 0x20u, eax);
                                ebp = ebp + 1u;
                                edi = eax;
                                loc_14 = rd32(sp0 - 0x14u);
                                loc_20 = eax;
                            }
                            else
                            {
    COW_AT(1022887f)
                                wr32(sp0 - 0x20u, esi);
                                d87 = fr(g, (double)(int32_t)rd32(sp0 - 0x14u) + (double)rdf32(sp0 - 0x28u));
                                fpush(g, d87);
                                g->esp = sp0 - 0x3cu;
                                t88 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                eax = t88;
                                edi = esi;
    COW_AT(10228892)
                                wr32(sp0 - 0x14u, eax);
                                ebx = eax;
                                ebp = 0u;
                                loc_14 = eax;
                                loc_20 = rd32(sp0 - 0x20u);
                            }
                        }
    COW_AT(102288b0)
                        t91 = rd32(sp0 - 0x24u) + 1u;
                        wr32(sp0 - 0x24u, t91);
                        if ((int32_t)t91 < (int32_t)rd16(rd32(sp0 - 0x1cu) + 0x278u))
                        {
                            eax = t91;
                            loc_24 = t91;
                            goto L_10228848;
                        }
                        eax = t91;
                        edx = rd32(sp0 - 0x1cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                }
            }
        }
    }
L_102288ce: ;
    COW_AT(102288ce)
    g->ebx = loc_30;
    g->esi = loc_38;
    g->edi = loc_3c;
    g->ebp = loc_34;
    g->edx = edx;
    return eax;
L_10228526: ;
    COW_AT(10228526)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_10 = 0u;
    loc_c = 0u;
    goto L_102284e8;
L_10228530: ;
    COW_AT(10228530)
    wr32(sp0 - 0x10u, 0u);
    eax = 0u;
    loc_28 = rd32(sp0 - 0x28u);
    loc_10 = 0u;
    goto L_1022853c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10228440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10228457u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x30u, in_ebx);
        wr32(sp0 - 0x1cu, self);
        (void)sp0;
        return 1;
    }
    case 0x10228462u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x30u, in_ebx);
        wr32(sp0 - 0x1cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1022847fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022848du:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022849eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102284a9u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102284bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102284beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102284ceu:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102284d2u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102284e2u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102284e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102284f3u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102284f7u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228508u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022850cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022851cu:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10228520u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10228526u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228530u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228538u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022853cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228544u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022855bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228582u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022858au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->esi = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10228594u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022859au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x40u;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102285dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102285e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x102285efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102285f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228605u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022860bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022860fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228627u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022862cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228631u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022863fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228645u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022864eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228656u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022865au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022865eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228661u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228675u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022869au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x28u, 0x41800000u);
        (void)sp0;
        return 1;
    }
    case 0x1022869fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286cau:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286e5u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102286ecu:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102286f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228713u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022871eu:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022873cu:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228747u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228754u:
    {
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
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10228766u:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1022878au:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10228799u:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102287b0u:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102287b2u:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102287bau:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102287deu:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102287eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228807u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x50u, COW_IMG(0x10386284u));
        wr32(sp0 - 0x48u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10228818u:
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
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1022881bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022882fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228848u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228856u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022885au:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228873u:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x44u, 0x80808080u);
        wr32(sp0 - 0x40u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022887au:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022887fu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10228892u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1022889cu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102288a9u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102288b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102288ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1022846b: holds in_ebx, which no location here says
     1022847a: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10228440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10228440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
