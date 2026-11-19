/* f_0x10240030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240030(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d24;
    double d25;
    double d41;
    double d42;
    double d46;
    double d53;
    double d54;
    double d55;
    double d58;
    double d62;
    double d68;
    double d69;
    double d71;
    double d72;
    double d75;
    double d79;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14c;
    double loc_164_f;
    uint32_t loc_16c;
    double loc_16c_f;
    uint32_t loc_180;
    uint32_t loc_184;
    uint32_t loc_18c;
    uint32_t loc_190;
    uint32_t loc_194;
    uint32_t loc_198;
    uint32_t loc_19c;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t70;
    uint32_t t73;
    uint32_t t74;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
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
    cow_frame(g, sp0, 416u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024008au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_180 = rd32(sp0 - 0x180u); in_edi = rd32(sp0 - 0x17cu); in_esi = rd32(sp0 - 0x178u); in_ebp = rd32(sp0 - 0x174u); in_ebx = rd32(sp0 - 0x170u); g->ebp = rd32(sp0 - 0x174u); g->ebx = rd32(sp0 - 0x170u); g->edi = rd32(sp0 - 0x17cu); g->esi = rd32(sp0 - 0x178u); goto E_1024008a;
    case 0x102400a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102400a9;
    case 0x102400adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102400ad;
    case 0x102400b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102400b8;
    case 0x102400f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); goto E_102400f9;
    case 0x10240112u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_180 = rd32(sp0 - 0x180u); goto E_10240112;
    case 0x10240115u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240115;
    case 0x1024011au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024011a;
    case 0x10240122u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_180 = rd32(sp0 - 0x180u); goto E_10240122;
    case 0x1024012eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_180 = rd32(sp0 - 0x180u); goto E_1024012e;
    case 0x10240138u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240138;
    case 0x1024013du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024013d;
    case 0x10240148u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10240148;
    case 0x1024014cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024014c;
    case 0x10240154u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10240154;
    case 0x102401a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_102401a3;
    case 0x102401bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401bc;
    case 0x102401d1u: ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401d1;
    case 0x102401d9u: ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401d9;
    case 0x102401dfu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401df;
    case 0x102401eeu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401ee;
    case 0x102401f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_102401f3;
    case 0x1024020eu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_1024020e;
    case 0x10240213u: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240213;
    case 0x10240218u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240218;
    case 0x10240236u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); goto E_10240236;
    case 0x10240238u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240238;
    case 0x10240245u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); goto E_10240245;
    case 0x10240250u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c = rd32(sp0 - 0x18cu); goto E_10240250;
    case 0x1024025eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_19c = rd32(sp0 - 0x19cu); loc_198 = rd32(sp0 - 0x198u); loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); goto E_1024025e;
    case 0x10240263u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); goto E_10240263;
    case 0x10240270u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); goto E_10240270;
    case 0x1024027au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_1024027a;
    case 0x1024028au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_1024028a;
    case 0x102402a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402a2;
    case 0x102402aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402aa;
    case 0x102402d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402d3;
    case 0x102402dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402db;
    case 0x102402e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402e2;
    case 0x102402e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402e4;
    case 0x102402edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402ed;
    case 0x102402f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402f1;
    case 0x102402f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402f5;
    case 0x102402f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102402f7;
    case 0x1024030bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024030b;
    case 0x10240360u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10240360;
    case 0x10240375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10240375;
    case 0x10240388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_194 = rd32(sp0 - 0x194u); loc_190 = rd32(sp0 - 0x190u); loc_18c = rd32(sp0 - 0x18cu); loc_184 = rd32(sp0 - 0x184u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10240388;
    case 0x1024038du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024038d;
    case 0x1024039du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024039d;
    case 0x102403a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102403a5;
    case 0x102403bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102403bd;
    case 0x102403cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_102403cf;
    case 0x102403e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102403e3;
    case 0x10240450u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10240450;
    case 0x10240460u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10240460;
    case 0x10240472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_14c = rd32(sp0 - 0x14cu); goto E_10240472;
    case 0x102404cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102404cb;
    case 0x102404f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_102404f1;
    case 0x102404f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_102404f8;
    case 0x102404ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_102404ff;
    case 0x1024050fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_1024050f;
    case 0x10240520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240520;
    case 0x10240531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240531;
    case 0x10240541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240541;
    case 0x10240552u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240552;
    case 0x10240561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240561;
    case 0x10240563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_180 = rd32(sp0 - 0x180u); loc_16c_f = rdf32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); goto E_10240563;
    case 0x10240591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_16c = rd32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10240591;
    case 0x1024059cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_184 = rd32(sp0 - 0x184u); loc_16c = rd32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024059c;
    case 0x102405a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18c = rd32(sp0 - 0x18cu); loc_184 = rd32(sp0 - 0x184u); loc_16c = rd32(sp0 - 0x16cu); loc_164_f = rdf32(sp0 - 0x164u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102405a5;
    case 0x102405acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102405ac;
    case 0x102405bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102405ba;
    case 0x102405c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102405c2;
    case 0x102405ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102405cc;
    default: break;
    }
#endif

    COW_AT(10240030)
    wr32(sp0 - 0x170u, in_ebx);
    wr32(sp0 - 0x174u, in_ebp);
    wr32(sp0 - 0x178u, in_esi);
    wr32(sp0 - 0x17cu, in_edi);
    wr32(sp0 - 0x100u, rd32(COW_IMG(0x103886a4u)));
    wr8(sp0 - 0xfcu, rd8(COW_IMG(0x103886a8u)));
    edi = sp0 - 0xfbu;
    eax = 0u;
    ecx = 0x3eu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x180u, COW_IMG(0x1036c19cu));
    wr16(sp0 - 0x158u, 0u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr16(sp0 - 0x156u, 0u);
    wr16(sp0 - 0x154u, 0u);
    wr16(sp0 - 0x152u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x17cu;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1024008a)
    wr32(sp0 - 0x150u, eax);
    wr32(sp0 - 0x148u, 0x172u);
    wr32(sp0 - 0x144u, 0x16cu);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x17cu;
    t4 = cow_thiscall(g, COW_IMG(0x101c46b0u), t3, 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102400a9)
    if (eax != 0u)
    {
    COW_AT(102400ad)
        g->eax = eax;
        t7 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x17cu;
        t8 = cow_thiscall(g, COW_IMG(0x101c46b0u), t7, 0);
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
    COW_AT(102400b8)
        edi = eax;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x180u, 0u);
        t10 = edi - ~ecx;
        wr32(sp0 - 0x184u, 3u);
        edi = sp0 - 0x100u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t10;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x188u, sp0 - 0x148u);
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        g->esp = sp0 - 0x17cu;
        cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x148u, 3u, 0u);
    COW_AT(102400f9)
        wr32(sp0 - 0x180u, 0x80808080u);
        wr32(sp0 - 0x184u, sp0 - 0x100u);
        t11 = rd32(sp0 - 0x144u);
        wr32(sp0 - 0x188u, t11);
        t12 = rd32(sp0 - 0x148u);
        wr32(sp0 - 0x18cu, t12);
        g->eax = t12;
        g->ecx = sp0 - 0x100u;
        g->edx = t11;
        g->esp = sp0 - 0x168u;
        t13 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t12, t11, sp0 - 0x100u, 0x80808080u, rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(10240112)
    }
    COW_AT(10240115)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t16 = cow_thiscall(g, COW_IMG(0x101c8d70u), ecx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(1024011a)
    wr32(sp0 - 0x180u, eax);
    if ((int32_t)eax <= 2003)
    {
        loc_180 = eax;
    COW_AT(1024012e)
        wr32(sp0 - 0x184u, COW_IMG(0x10388694u));
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        edx = sp0 - 0x140u;
        loc_184 = COW_IMG(0x10388694u);
    }
    else
    {
        loc_180 = eax;
    COW_AT(10240122)
        wr32(sp0 - 0x184u, COW_IMG(0x1038869cu));
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        ecx = sp0 - 0x140u;
        loc_184 = COW_IMG(0x1038869cu);
    }
    COW_AT(10240138)
    g->ebx = self;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t19 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, loc_184, loc_180, rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(1024013d)
    if (rd8(sp0 - 0x140u) != 0u)
    {
    COW_AT(10240148)
        eax = sp0 - 0x140u;
L_1024014c: ;
    COW_AT(1024014c)
        if (rd8(eax + 1u) != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            eax = eax + 1u;
            goto L_1024014c;
        }
    }
    COW_AT(10240154)
    t22 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x16cu, t22);
    t23 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    d24 = fr(g, (double)(int32_t)t22 * (double)rdf32(COW_IMG(0x10337eb0u)));
    wr32(sp0 - 0x16cu, t23);
    wrf32(sp0 - 0x164u, (float)(double)(float)d24);
    d25 = fr(g, (double)(int32_t)t23 * (double)rdf32(COW_IMG(0x1033cae8u)));
    wrf32(sp0 - 0x16cu, (float)(double)(float)d25);
    edx = (edx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    ebp = cow_f2bits((double)(float)d25);
    esi = 0u;
    edi = cow_f2bits((double)(float)d24);
L_102401a3: ;
    COW_AT(102401a3)
    wr32(sp0 - 0x180u, 1u);
    wr32(sp0 - 0x184u, 1u);
    wr32(sp0 - 0x188u, esi + 1u);
    wr32(sp0 - 0x18cu, sp0 - 0x158u);
    wr32(sp0 - 0x16cu, esi + 1u);
    g->ebx = self;
    g->edi = edi;
    g->esp = sp0 - 0x17cu;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x158u, esi + 1u, 1u, 1u);
    COW_AT(102401bc)
    if (rd32(esi * 4u + self + 0x20u) != 1u)
    {
        ecx = rd32(rd32(sp0 - 0x150u));
    COW_AT(102401d9)
        edx = rd8(COW_IMG(0x103885acu) + esi);
    }
    else
    {
        ecx = rd32(rd32(sp0 - 0x150u));
    COW_AT(102401d1)
        edx = rd8(COW_IMG(0x103885a4u) + esi);
    }
    COW_AT(102401df)
    if (!(rd8(COW_IMG(0x10456a4cu)) & 1u))
    {
        ecx = rd32(ecx + edx * 4u - 4u);
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10456a4cu));
        goto L_1024020e;
    }
    ecx = rd32(ecx + edx * 4u - 4u);
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10456a4cu));
    COW_AT(102401ee)
    if (esi != 2u) goto L_1024020e;
    COW_AT(102401f3)
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0x80202020u);
    wr32(sp0 - 0x190u, ebp);
    wr32(sp0 - 0x194u, edi);
    t26 = (uint32_t)(int16_t)rd16(sp0 - 0x156u);
    wr32(sp0 - 0x198u, t26);
    t27 = (uint32_t)(int16_t)rd16(sp0 - 0x158u);
    wr32(sp0 - 0x19cu, t27);
    eax = t27;
    edx = t26;
    loc_18c = 0x80202020u;
    loc_190 = ebp;
    loc_194 = edi;
    loc_198 = t26;
    loc_19c = t27;
L_1024025e: ;
    COW_AT(1024025e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t36 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, loc_19c, loc_198, loc_194, loc_190, loc_18c, 0u, 0u, 0u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_10240263: ;
    COW_AT(10240263)
    if ((int32_t)rd32(sp0 - 0x16cu) < 5)
    {
        esi = rd32(sp0 - 0x16cu);
        goto L_102401a3;
    }
    COW_AT(10240270)
    wr32(sp0 - 0x14cu, 0u);
    ebx = self;
    edi = 0u;
    loc_14c = 0u;
L_1024027a: ;
    COW_AT(1024027a)
    if (rd16(COW_IMG(0x103885b8u) + edi) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x103885b8u) + edi);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x103885b8u) + edi);
    COW_AT(1024028a)
        if (rd32(rd32(rd32(sp0 - 0x150u)) + (uint32_t)(int16_t)rd16(COW_IMG(0x103885bau) + edi) * 4u) != 0u)
        {
            edx = rd32(rd32(sp0 - 0x150u));
            ebp = rd32(rd32(rd32(sp0 - 0x150u)) + (uint32_t)(int16_t)rd16(COW_IMG(0x103885bau) + edi) * 4u);
    COW_AT(102402a2)
            if ((uint16_t)eax != 1u)
            {
                ebx = ebx & 0xffffff00u;
            }
            else
            {
                ebx = ebx & 0xffffff00u;
                cf = (uint16_t)eax < 1u;
                pf = PARITY((uint8_t)((uint16_t)eax - 1u));
                zf = (uint16_t)((uint16_t)eax - 1u) == 0u;
                sf = (int16_t)((uint16_t)eax - 1u) < 0;
                of = (((uint16_t)eax ^ 1u) & ((uint16_t)eax ^ (uint16_t)((uint16_t)eax - 1u))) >> 0xfu;
    COW_AT(102402aa)
                if ((int32_t)edi < 80)
                {
                    eax = (1u << (loc_14c + 1u & 0x1fu) & 0xffffff00u) | (1u << (loc_14c + 1u & 0x1fu) & rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u)) != 0u;
                    edx = (edx & 0xffffff00u) | (1u << (loc_14c + 1u & 0x1fu) & rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u)) != 0u;
                    goto L_102402ed;
                }
                eax = (1u << (loc_14c + 1u & 0x1fu) & 0xffffff00u) | (1u << (loc_14c + 1u & 0x1fu) & rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u)) != 0u;
                ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u);
                edx = (edx & 0xffffff00u) | (1u << (loc_14c + 1u & 0x1fu) & rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u)) != 0u;
                esi = rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u);
    COW_AT(102402d3)
                if ((int32_t)edi >= 140) goto L_102402ed;
    COW_AT(102402db)
                if (!(ecx >> 1u & 1u))
                {
    COW_AT(102402e2)
                    eax = eax & 0xffffff00u;
                }
    COW_AT(102402e4)
                if (!(esi >> 1u & 1u)) goto L_102402f7;
L_102402ed: ;
    COW_AT(102402ed)
                if ((uint8_t)edx != 0u)
                {
    COW_AT(102402f1)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(102402f5)
                        ebx = (ebx & 0xffffff00u) | 1u;
                    }
                }
            }
L_102402f7: ;
    COW_AT(102402f7)
            wr32(sp0 - 0x180u, sp0 - 0x15cu);
            wr32(sp0 - 0x184u, sp0 - 0x160u);
            g->eax = sp0 - 0x160u;
            g->esp = sp0 - 0x17cu;
            t38 = cow_thiscall(g, COW_IMG(0x10160210u), COW_IMG(0x10621838u), 2, sp0 - 0x160u, sp0 - 0x15cu);
            eax = t38;
    COW_AT(1024030b)
            t39 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
            wr32(sp0 - 0x16cu, t39);
            t40 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
            d41 = fr(g, (double)(int32_t)t39 * (double)rdf32(COW_IMG(0x10337eb0u)));
            wr32(sp0 - 0x164u, t40);
            wr32(sp0 - 0x180u, 0u);
            wrf32(sp0 - 0x16cu, (float)(double)(float)d41);
            d42 = fr(g, (double)(int32_t)t40 * (double)rdf32(COW_IMG(0x1033cae8u)));
            wrf32(sp0 - 0x164u, (float)(double)(float)d42);
            if ((uint8_t)ebx == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
                loc_16c_f = (double)(float)d41;
                loc_164_f = (double)(float)d42;
                x0 = fr(g, (double)rdf32(sp0 - 0x15cu) * (double)rdf32(COW_IMG(0x103295d8u)));
    COW_AT(10240375)
                wr32(sp0 - 0x184u, 0x44u);
                wr32(sp0 - 0x188u, 0u);
                wr32(sp0 - 0x18cu, 0x50404040u);
                wr32(sp0 - 0x190u, cow_f2bits(loc_164_f));
                wr32(sp0 - 0x194u, cow_f2bits(loc_16c_f));
                ecx = cow_f2bits(loc_164_f);
                edx = cow_f2bits(loc_16c_f);
                loc_184 = 0x44u;
                loc_18c = 0x50404040u;
                loc_190 = cow_f2bits(loc_164_f);
                loc_194 = cow_f2bits(loc_16c_f);
            }
            else
            {
                ecx = t40;
                loc_16c_f = (double)(float)d41;
                loc_164_f = (double)(float)d42;
                x0 = fr(g, (double)rdf32(sp0 - 0x15cu) * (double)rdf32(COW_IMG(0x103295d8u)));
    COW_AT(10240360)
                wr32(sp0 - 0x184u, 0u);
                wr32(sp0 - 0x188u, 0u);
                wr32(sp0 - 0x18cu, 0xff808080u);
                wr32(sp0 - 0x190u, cow_f2bits(loc_164_f));
                wr32(sp0 - 0x194u, cow_f2bits(loc_16c_f));
                eax = cow_f2bits(loc_16c_f);
                edx = cow_f2bits(loc_164_f);
                loc_184 = 0u;
                loc_18c = 0xff808080u;
                loc_190 = cow_f2bits(loc_164_f);
                loc_194 = cow_f2bits(loc_16c_f);
            }
    COW_AT(10240388)
            g->ecx = ecx;
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x194u;
            t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t44 = g->ecx;
            t45 = g->edx;
            eax = t43;
            ecx = t44;
            edx = t45;
    COW_AT(1024038d)
            d46 = fr(g, (double)rdf32(sp0 - 0x160u) * (double)rdf32(COW_IMG(0x103295d8u)));
            wr32(sp0 - 0x198u, eax);
            g->edx = edx;
            fpush(g, d46);
            g->esp = sp0 - 0x198u;
            t47 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t48 = g->edx;
            eax = t47;
            edx = t48;
    COW_AT(1024039d)
            wr32(sp0 - 0x19cu, eax);
            g->eax = eax;
            g->esp = sp0 - 0x17cu;
            t49 = cow_thiscall(g, COW_IMG(0x1011fc80u), ebp, 8, eax, rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u));
            eax = t49;
            loc_14c = rd32(sp0 - 0x14cu);
        }
    }
    COW_AT(102403a5)
    wr32(sp0 - 0x14cu, loc_14c + 1u);
    if (edi + 0x14u < 0xdcu)
    {
        edi = edi + 0x14u;
        loc_14c = loc_14c + 1u;
        goto L_1024027a;
    }
    edx = loc_14c + 1u;
    COW_AT(102403bd)
    if (rd8(rd32(COW_IMG(0x103601bcu)) + 0xb4u) & 1u)
    {
        eax = rd32(COW_IMG(0x103601bcu));
    COW_AT(102403cf)
        wr32(sp0 - 0x180u, sp0 - 0x15cu);
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x17cu;
        t50 = cow_thiscall(g, COW_IMG(0x10160210u), COW_IMG(0x10621838u), 2, sp0 - 0x160u, sp0 - 0x15cu);
        eax = t50;
    COW_AT(102403e3)
        wr32(sp0 - 0x180u, 0u);
        wr32(sp0 - 0x184u, 0u);
        t51 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        wr32(sp0 - 0x16cu, t51);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x18cu, 0xff808080u);
        t52 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        d53 = fr(g, (double)(int32_t)t51 * (double)rdf32(COW_IMG(0x1033cae8u)));
        wr32(sp0 - 0x16cu, t52);
        d54 = fr(g, d53 * (double)rdf32(COW_IMG(0x1033caf8u)));
        wrf32(sp0 - 0x190u, (float)(double)(float)d54);
        d55 = fr(g, fr(g, (double)(int32_t)t52 * (double)rdf32(COW_IMG(0x10337eb0u))) * (double)rdf32(COW_IMG(0x1033caf4u)));
        wrf32(sp0 - 0x194u, (float)(double)(float)d55);
        g->ecx = t51;
        g->edx = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
        t56 = rd32(COW_IMG(0x106218b8u));
        t57 = rd32(COW_IMG(0x106218b4u));
        d58 = fr(g, (double)rdf32(sp0 - 0x15cu) * (double)rdf32(COW_IMG(0x1033caf0u)));
        fpush(g, d58);
        g->esp = sp0 - 0x194u;
        t59 = cow_call_regs(g, COW_IMG(0x10311c6cu), t52, g->ecx, g->edx, 1, 0);
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
    COW_AT(10240450)
        d62 = fr(g, (double)rdf32(sp0 - 0x160u) * (double)rdf32(COW_IMG(0x10331380u)));
        wr32(sp0 - 0x198u, eax);
        fpush(g, d62);
        g->esp = sp0 - 0x198u;
        t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t63;
    COW_AT(10240460)
        wr32(sp0 - 0x19cu, eax);
        g->edx = rd32(rd32(sp0 - 0x150u));
        t64 = rd32(rd32(sp0 - 0x150u));
        g->esp = sp0 - 0x17cu;
        cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(t64 + 0x2c0u), 8, eax, rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u));
        t65 = g->edx;
        edx = t65;
    }
    COW_AT(10240472)
    t66 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x16cu, t66);
    t67 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    d68 = fr(g, (double)(int32_t)t66 * (double)rdf32(COW_IMG(0x10337eb0u)));
    wr32(sp0 - 0x16cu, t67);
    wr32(sp0 - 0x180u, sp0 - 0x15cu);
    wr32(sp0 - 0x184u, sp0 - 0x160u);
    wrf32(sp0 - 0x164u, (float)(double)(float)d68);
    d69 = fr(g, (double)(int32_t)t67 * (double)rdf32(COW_IMG(0x1033cae8u)));
    wrf32(sp0 - 0x16cu, (float)(double)(float)d69);
    g->eax = t67;
    g->esp = sp0 - 0x17cu;
    t70 = cow_thiscall(g, COW_IMG(0x10160210u), COW_IMG(0x10621838u), 2, sp0 - 0x160u, sp0 - 0x15cu);
    eax = t70;
    COW_AT(102404cb)
    d71 = fr(g, (double)rdf32(sp0 - 0x164u) * (double)rdf32(COW_IMG(0x1033caf4u)));
    wrf32(sp0 - 0x164u, (float)(double)(float)d71);
    d72 = fr(g, (double)rdf32(sp0 - 0x16cu) * (double)rdf32(COW_IMG(0x1033caf8u)));
    wrf32(sp0 - 0x16cu, (float)(double)(float)d72);
    ebx = cow_f2bits((double)(float)d71);
    ebp = cow_f2bits((double)(float)d72);
    edi = 0u;
L_102404f1: ;
    COW_AT(102404f1)
    if (edi > 5u)
    {
        eax = eax & 0xffffff00u;
        goto L_10240563;
    }
    COW_AT(102404f8)
    t73 = rd32(COW_IMG(0x102405d8u) + edi * 4u);
    switch (t73 - RD)
    {
    case 0x102404ffu: goto L_102404ff;
    case 0x1024050fu: goto L_1024050f;
    case 0x10240520u: goto L_10240520;
    case 0x10240531u: goto L_10240531;
    case 0x10240541u: goto L_10240541;
    case 0x10240552u: goto L_10240552;
    default: rt_fatal(g, COW_IMG(0x102404f8u), "switch");
    }
    return 0;
L_1024020e: ;
    COW_AT(1024020e)
    if (rd32(self + 0x18u) != esi) goto L_10240245;
    COW_AT(10240213)
    if (rd32(self + 0x1cu) != 1u) goto L_10240238;
    COW_AT(10240218)
    t28 = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
    wr32(sp0 - 0x180u, t28);
    wr32(sp0 - 0x184u, 9u);
    wr32(sp0 - 0x188u, ebp);
    wr32(sp0 - 0x18cu, edi);
    t29 = rd32(sp0 - 0x156u);
    wr32(sp0 - 0x190u, t29);
    t30 = rd32(sp0 - 0x158u);
    wr32(sp0 - 0x194u, t30);
    wr32(sp0 - 0x198u, ecx);
    t31 = rd32(self + 8u);
    g->eax = t31;
    g->edx = t30;
    g->esp = sp0 - 0x17cu;
    t32 = cow_thiscall(g, COW_IMG(0x10119fb0u), t31, 7, ecx, t30, t29, edi, ebp, 9u, t28);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(10240236)
    goto L_10240263;
L_10240238: ;
    COW_AT(10240238)
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0x80805020u);
    loc_18c = 0x80805020u;
L_10240250: ;
    COW_AT(10240250)
    wr32(sp0 - 0x190u, ebp);
    wr32(sp0 - 0x194u, edi);
    t34 = (uint32_t)(int16_t)rd16(sp0 - 0x156u);
    wr32(sp0 - 0x198u, t34);
    t35 = (uint32_t)(int16_t)rd16(sp0 - 0x158u);
    wr32(sp0 - 0x19cu, t35);
    eax = t34;
    edx = t35;
    loc_190 = ebp;
    loc_194 = edi;
    loc_198 = t34;
    loc_19c = t35;
    goto L_1024025e;
L_10240245: ;
    COW_AT(10240245)
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x18cu, 0x80808080u);
    loc_18c = 0x80808080u;
    goto L_10240250;
L_102404ff: ;
    COW_AT(102404ff)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
L_10240561: ;
    COW_AT(10240561)
    eax = (eax & 0xffffff00u) | (eax & 1u);
L_10240563: ;
    COW_AT(10240563)
    wr32(sp0 - 0x180u, 0u);
    t74 = edi * 0x15u + 0x4au;
    d75 = fr(g, (double)rdf32(sp0 - 0x15cu) * (double)rdf32(COW_IMG(0x1033caecu)));
    wr32(sp0 - 0x16cu, t74);
    if ((uint8_t)eax == 0u)
    {
        ecx = rd32(rd32(sp0 - 0x150u));
        edx = rd32(sp0 - 0x150u);
        esi = rd32(edi * 4u + rd32(rd32(sp0 - 0x150u)) + 0x38cu);
        loc_16c = t74;
        x0 = d75;
    COW_AT(1024059c)
        wr32(sp0 - 0x184u, 0x44u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x18cu, 0x50404040u);
        loc_184 = 0x44u;
        loc_18c = 0x50404040u;
    }
    else
    {
        ecx = rd32(rd32(sp0 - 0x150u));
        edx = rd32(sp0 - 0x150u);
        esi = rd32(edi * 4u + rd32(rd32(sp0 - 0x150u)) + 0x38cu);
        loc_16c = t74;
        x0 = d75;
    COW_AT(10240591)
        wr32(sp0 - 0x184u, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x18cu, 0xff808080u);
        loc_184 = 0u;
        loc_18c = 0xff808080u;
    }
    COW_AT(102405a5)
    wr32(sp0 - 0x190u, ebp);
    wr32(sp0 - 0x194u, ebx);
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x194u;
    t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(102405ac)
    wr32(sp0 - 0x198u, eax);
    g->edx = edx;
    d79 = fr(g, (double)(int32_t)rd32(sp0 - 0x16cu) * (double)rdf32(sp0 - 0x160u));
    fpush(g, d79);
    g->esp = sp0 - 0x198u;
    t80 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(102405ba)
    wr32(sp0 - 0x19cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t82 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, eax, rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u));
    t83 = g->edx;
    eax = t82;
    edx = t83;
    COW_AT(102405c2)
    if ((int32_t)(edi + 1u) < 6)
    {
        edi = edi + 1u;
        goto L_102404f1;
    }
    COW_AT(102405cc)
    g->ebx = rd32(sp0 - 0x170u);
    g->esi = rd32(sp0 - 0x178u);
    g->edi = rd32(sp0 - 0x17cu);
    g->ebp = rd32(sp0 - 0x174u);
    g->edx = edx;
    return eax;
L_1024050f: ;
    COW_AT(1024050f)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
    goto L_10240561;
L_10240520: ;
    COW_AT(10240520)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
    goto L_10240561;
L_10240531: ;
    COW_AT(10240531)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
    goto L_10240561;
L_10240541: ;
    COW_AT(10240541)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
    goto L_10240561;
L_10240552: ;
    COW_AT(10240552)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
    goto L_10240561;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10240030(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024008au:
    {
        unsigned af;
        unsigned cf;
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
        uint32_t loc_180;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_180 = rd32(sp0 - 0x180u);
        in_edi = rd32(sp0 - 0x17cu);
        in_esi = rd32(sp0 - 0x178u);
        in_ebp = rd32(sp0 - 0x174u);
        in_ebx = rd32(sp0 - 0x170u);
        g->esp = sp0 - 0x17cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102400a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        g->ebp = 0u;
        wr32(sp0 - 0x148u, 0x172u);
        wr32(sp0 - 0x144u, 0x16cu);
        (void)sp0;
        return 1;
    }
    case 0x102400adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        g->ebp = 0u;
        wr32(sp0 - 0x148u, 0x172u);
        wr32(sp0 - 0x144u, 0x16cu);
        (void)sp0;
        return 1;
    }
    case 0x102400b8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102400f9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x188u, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x10240112u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x18cu;
        wr32(sp0 - 0x184u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10240115u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x1024011au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240122u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x1024012eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x10240138u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x188u;
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x1024013du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x188u;
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x10240148u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x1024014cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x10240154u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x188u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x102401a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102401bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x102401d1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        g->edx = 0u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x102401d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        g->edx = 0u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x102401dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x102401eeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x102401f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x1024020eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x10240213u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        g->eax = 1u;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x10240218u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x10240236u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240238u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x10240245u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_180;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x18cu, sp0 - 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x10240250u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x18cu;
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024025eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
        uint32_t loc_198;
        uint32_t loc_19c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_19c = rd32(sp0 - 0x19cu);
        loc_198 = rd32(sp0 - 0x198u);
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x19cu;
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10240263u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240270u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_184;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_184 = rd32(sp0 - 0x184u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x1024027au:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x1024028au:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402a2u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402aau:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402d3u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402dbu:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402e2u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402e4u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402edu:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402f1u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402f5u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102402f7u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x1024030bu:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x180u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x10240360u:
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
        double loc_164_f;
        double loc_16c_f;
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
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x180u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10240375u:
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
        double loc_164_f;
        double loc_16c_f;
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
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x180u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10240388u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_184;
        uint32_t loc_18c;
        uint32_t loc_190;
        uint32_t loc_194;
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
        loc_194 = rd32(sp0 - 0x194u);
        loc_190 = rd32(sp0 - 0x190u);
        loc_18c = rd32(sp0 - 0x18cu);
        loc_184 = rd32(sp0 - 0x184u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x194u;
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024038du:
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
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x1024039du:
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
        g->esp = sp0 - 0x198u;
        (void)sp0;
        return 1;
    }
    case 0x102403a5u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102403bdu:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102403cfu:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102403e3u:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x180u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x10240450u:
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
        g->esp = sp0 - 0x194u;
        wr32(sp0 - 0x18cu, 0xff808080u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10240460u:
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
        g->esp = sp0 - 0x198u;
        (void)sp0;
        return 1;
    }
    case 0x10240472u:
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
        uint32_t loc_14c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_14c = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102404cbu:
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
        g->esp = sp0 - 0x17cu;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x180u, sp0 - 0x15cu);
        (void)sp0;
        return 1;
    }
    case 0x102404f1u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102404f8u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102404ffu:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x1024050fu:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240520u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240531u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240541u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240552u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240561u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240563u:
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
        double loc_164_f;
        double loc_16c_f;
        uint32_t loc_180;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_180 = rd32(sp0 - 0x180u);
        loc_16c_f = rdf32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x10240591u:
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
        double loc_164_f;
        uint32_t loc_16c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x180u;
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024059cu:
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
        double loc_164_f;
        uint32_t loc_16c;
        uint32_t loc_184;
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
        loc_184 = rd32(sp0 - 0x184u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x180u;
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102405a5u:
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
        double loc_164_f;
        uint32_t loc_16c;
        uint32_t loc_184;
        uint32_t loc_18c;
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
        loc_18c = rd32(sp0 - 0x18cu);
        loc_184 = rd32(sp0 - 0x184u);
        loc_16c = rd32(sp0 - 0x16cu);
        loc_164_f = rdf32(sp0 - 0x164u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18cu;
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x180u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102405acu:
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
        g->esp = sp0 - 0x194u;
        (void)sp0;
        return 1;
    }
    case 0x102405bau:
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
        g->esp = sp0 - 0x198u;
        (void)sp0;
        return 1;
    }
    case 0x102405c2u:
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
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    case 0x102405ccu:
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
        g->esp = sp0 - 0x17cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10240030(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10240030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
