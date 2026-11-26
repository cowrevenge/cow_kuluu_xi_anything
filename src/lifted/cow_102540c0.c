/* f_0x102540c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102540c0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102540d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102540d9;
    case 0x102540e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102540e7;
    case 0x102540edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102540ed;
    case 0x102540f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102540f9;
    case 0x1025410au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_1025410a;
    case 0x10254112u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_10254112;
    case 0x1025411du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025411d;
    case 0x10254124u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254124;
    case 0x10254135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254135;
    case 0x1025413eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025413e;
    case 0x1025414au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025414a;
    case 0x1025415cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025415c;
    case 0x10254173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254173;
    case 0x1025417du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025417d;
    case 0x1025418au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025418a;
    case 0x102541adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541ad;
    case 0x102541c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541c3;
    case 0x102541c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541c8;
    case 0x102541d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541d2;
    case 0x102541d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541d7;
    case 0x102541e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541e6;
    case 0x102541fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102541fc;
    case 0x10254212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254212;
    case 0x10254220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254220;
    case 0x10254226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254226;
    case 0x1025422du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025422d;
    case 0x10254238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254238;
    case 0x1025423eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025423e;
    case 0x10254247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254247;
    case 0x1025424au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025424a;
    case 0x10254250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254250;
    case 0x1025425fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025425f;
    case 0x1025426du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025426d;
    case 0x10254270u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254270;
    case 0x10254276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254276;
    case 0x1025427fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025427f;
    case 0x10254282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254282;
    case 0x1025428au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025428a;
    case 0x1025428fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025428f;
    case 0x10254298u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254298;
    case 0x1025429bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025429b;
    case 0x102542a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542a8;
    case 0x102542b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542b6;
    case 0x102542c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542c0;
    case 0x102542d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542d5;
    case 0x102542e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102542e2;
    case 0x102542e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_14 = rd32(sp0 - 0x14u); goto E_102542e5;
    case 0x10254335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254335;
    case 0x10254358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254358;
    case 0x1025436eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025436e;
    case 0x10254376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254376;
    case 0x1025437bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1025437b;
    case 0x10254385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254385;
    case 0x10254388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254388;
    case 0x10254395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10254395;
    case 0x102543a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102543a2;
    case 0x102543b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102543b3;
    case 0x102543c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); goto E_102543c2;
    case 0x102543d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102543d3;
    case 0x102543d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102543d6;
    default: break;
    }
#endif

    COW_AT(102540c0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, COW_IMG(0x10389d94u));
    g->esp = sp0 - 0x40u;
    COW_RET(0x102540d9u);
    t1 = cow_call_regs(g, COW_IMG(0x102bcc41u), g->eax, self, in_edx, 1, 4, COW_IMG(0x10389d94u), 0u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102540d9)
    wr32(sp0 - 8u, eax);
    if (eax == 0u)
    {
        loc_4 = in_ebp;
        loc_38 = in_ebx;
        loc_3c = in_esi;
        loc_40 = in_edi;
        goto L_102543d6;
    }
    loc_8 = eax;
    COW_AT(102540e7)
    wr32(sp0 - 0x44u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    COW_RET(0x102540edu);
    t4 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, ecx, edx, 1, 1, eax);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102540ed)
    wr32(sp0 - 0xcu, eax);
    t7 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x44u;
    COW_RET(0x102540f9u);
    t8 = cow_call_regs(g, COW_IMG(0x102c369eu), g->eax, ecx, edx, 1, 1, t7);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102540f9)
    wr32(sp0 - 0x1cu, eax);
    if (rd32(sp0 - 0xcu) == 0u) goto L_102543c2;
    loc_1c = eax;
    COW_AT(1025410a)
    if (eax == 0u) goto L_102543c2;
    COW_AT(10254112)
    wr32(sp0 - 0x44u, 0u);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t10);
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    COW_RET(0x1025411du);
    t11 = cow_cdecl(g, COW_IMG(0x10316224u), 2, t10, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1025411d)
    if (eax == 0u) goto L_1025414a;
    COW_AT(10254124)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 8u);
    g->eax = sp0 - 0xcu;
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x40u;
    COW_RET(0x10254135u);
    t13 = cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 0x1cu, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    COW_AT(10254135)
    t15 = rd32(sp0 + 8u);
    wr32(sp0 - 0x50u, t15);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x1025413eu);
    cow_call_regs(g, COW_IMG(0x10253820u), g->eax, ecx, t15, 1, 1, t15);
    COW_AT(1025413e)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 4u);
    return 0u;
L_1025414a: ;
    COW_AT(1025414a)
    wr32(sp0 - 0x44u, COW_IMG(0x10254090u));
    t16 = rd32(sp0 + 4u);
    wr32(sp0 - 0x48u, t16);
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x4cu, t17);
    g->esp = sp0 - 0x40u;
    COW_RET(0x1025415cu);
    cow_cdecl(g, COW_IMG(0x102c3cd4u), 3, t17, t16, COW_IMG(0x10254090u));
    COW_AT(1025415c)
    t18 = rd32(sp0 + 8u);
    t19 = rd32(sp0 - 8u);
    wr32(sp0 - 0x50u, t19);
    edi = t18;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x4cu;
    COW_RET(0x10254173u);
    t20 = cow_call_regs(g, COW_IMG(0x10253da0u), g->eax, g->ecx, t19, 1, 1, rd32(sp0 - 0x50u));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    ebx = t18;
    COW_AT(10254173)
    wr32(sp0 - 0x54u, eax);
    t23 = rd32(sp0 - 8u);
    wr32(sp0 - 0x58u, t23);
    g->eax = t23;
    g->esp = sp0 - 0x50u;
    COW_RET(0x1025417du);
    t24 = cow_call_regs(g, COW_IMG(0x102c3521u), g->eax, g->ecx, edx, 1, 2, t23, eax);
    eax = t24;
    COW_AT(1025417d)
    t25 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x5cu, t25);
    t26 = rd32(sp0 - 8u);
    wr32(sp0 - 0x60u, t26);
    g->esp = sp0 - 0x58u;
    COW_RET(0x1025418au);
    cow_call_regs(g, COW_IMG(0x102bd021u), eax, g->ecx, t26, 1, 2, t26, t25);
    COW_AT(1025418a)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, sp0 - 0x10u);
    wr32(sp0 - 0x74u, sp0 - 0x18u);
    wr32(sp0 - 0x78u, sp0 - 0x28u);
    wr32(sp0 - 0x7cu, sp0 - 0x24u);
    t27 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x80u, t27);
    t28 = rd32(sp0 - 8u);
    wr32(sp0 - 0x84u, t28);
    g->esp = sp0 - 0x60u;
    COW_RET(0x102541adu);
    cow_call_regs(g, COW_IMG(0x102c2c58u), g->eax, g->ecx, t28, 1, 9, t28, t27, sp0 - 0x24u, sp0 - 0x28u, sp0 - 0x18u, sp0 - 0x10u, 0u, 0u, 0u);
    t29 = g->edx;
    edx = t29;
    COW_AT(102541ad)
    t30 = rd32(sp0 - 0x24u);
    t31 = rd32(sp0 - 0x28u);
    wr32(ebx, t30);
    t32 = rd32(sp0 - 0x10u);
    wr32(ebx + 4u, t31);
    if (t32 == 2u)
    {
        eax = t32;
        ecx = t31;
        goto L_10254212;
    }
    eax = t32;
    ecx = t31;
    COW_AT(102541c3)
    if (eax == 6u) goto L_10254212;
    COW_AT(102541c8)
    t33 = rd32(sp0 - 0x18u);
    if (t33 == 2u)
    {
        eax = t33 - 2u;
        cf = t33 < 2u;
        pf = PARITY((uint8_t)(t33 - 2u));
        zf = t33 == 2u;
        sf = (int32_t)(t33 - 2u) < 0;
        of = ((t33 ^ 2u) & (t33 ^ t33 - 2u)) >> 0x1fu;
    COW_AT(102541fc)
        wr32(ebx + 8u, 4u);
        t37 = 1u << (rd32(ebx + 8u) & 0x1fu);
        t38 = rd32(ebx + 8u);
        wr32(ebx + 0xcu, t37);
        ecx = t38;
        edx = t37;
    }
    else
    {
        eax = t33 - 2u;
        ecx = t33;
    COW_AT(102541d2)
        if (eax == 0xeu)
        {
            cf = eax < 0xeu;
            pf = PARITY((uint8_t)(eax - 0xeu));
            zf = eax == 0xeu;
            sf = (int32_t)(eax - 0xeu) < 0;
            of = ((eax ^ 0xeu) & (eax ^ eax - 0xeu)) >> 0x1fu;
            eax = eax - 0xeu;
    COW_AT(102541e6)
            wr32(ebx + 8u, 8u);
            t35 = 1u << (rd32(ebx + 8u) & 0x1fu);
            t36 = rd32(ebx + 8u);
            wr32(ebx + 0xcu, t35);
            ecx = t36;
            edx = t35;
        }
        else
        {
            cf = eax < 0xeu;
            pf = PARITY((uint8_t)(eax - 0xeu));
            zf = eax == 0xeu;
            sf = (int32_t)(eax - 0xeu) < 0;
            of = ((eax ^ 0xeu) & (eax ^ eax - 0xeu)) >> 0x1fu;
            eax = eax - 0xeu;
    COW_AT(102541d7)
            wr32(ebx + 8u, ecx);
            t34 = 1u << (ecx & 0x1fu);
            wr32(ebx + 0xcu, t34);
            edx = t34;
        }
    }
L_10254220: ;
    COW_AT(10254220)
    wr32(sp0 - 0x44u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    COW_RET(0x10254226u);
    t39 = cow_cdecl(g, COW_IMG(0x10253740u), 1, ebx);
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(10254226)
    if (eax != 0u) goto L_10254238;
    COW_AT(1025422d)
    wr32(sp0 - 0x44u, 1u);
    t42 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t42);
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x40u;
    COW_RET(0x10254238u);
    cow_fastcall(g, COW_IMG(0x103161a8u), ecx, edx, 2, t42, 1u);
    rt_fatal(g, COW_IMG(0x10254233u), "no way on");
    return 0;
L_10254212: ;
    COW_AT(10254212)
    wr32(ebx + 8u, 0x18u);
    wr32(ebx + 0xcu, 0u);
    goto L_10254220;
L_10254238: ;
    COW_AT(10254238)
    t43 = rd8(sp0 - 0x10u);
    if ((t43 & 4u) != 0u)
    {
    COW_AT(1025423e)
        t44 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t44);
        g->eax = eax;
        g->ecx = t44;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        COW_RET(0x10254247u);
        t45 = cow_cdecl(g, COW_IMG(0x102be322u), 1, t44);
        t46 = g->ecx;
        t47 = g->edx;
        eax = t45;
        ecx = t46;
        edx = t47;
    COW_AT(10254247)
    }
    COW_AT(1025424a)
    t48 = rd32(sp0 - 0x18u);
    if (t48 == 2u)
    {
    COW_AT(10254250)
        wr32(sp0 - 0x44u, 1u);
        wr32(sp0 - 0x48u, 4u);
        wr32(sp0 - 0x4cu, 0u);
        t49 = rd32(sp0 - 8u);
        wr32(sp0 - 0x50u, t49);
        g->ecx = ecx;
        g->edx = t49;
        g->esp = sp0 - 0x40u;
        COW_RET(0x1025425fu);
        cow_cdecl(g, COW_IMG(0x102c34ffu), 4, t49, 0u, 4u, 1u);
        t50 = g->ecx;
        t51 = g->edx;
        ecx = t50;
        edx = t51;
    COW_AT(1025425f)
        wr32(sp0 - 0x54u, COW_IMG(0x10253e10u));
        t52 = rd32(sp0 - 8u);
        wr32(sp0 - 0x58u, t52);
        g->eax = t52;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        COW_RET(0x1025426du);
        t53 = cow_cdecl(g, COW_IMG(0x102beb98u), 2, t52, COW_IMG(0x10253e10u));
        t54 = g->ecx;
        t55 = g->edx;
        eax = t53;
        ecx = t54;
        edx = t55;
    COW_AT(1025426d)
    }
    COW_AT(10254270)
    t56 = rd32(sp0 - 0x18u);
    if (t56 == 0x10u)
    {
    COW_AT(10254276)
        t57 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t57);
        g->ecx = t57;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        COW_RET(0x1025427fu);
        cow_cdecl(g, COW_IMG(0x102be319u), 1, t57);
        t58 = g->ecx;
        t59 = g->edx;
        ecx = t58;
        edx = t59;
    COW_AT(1025427f)
    }
    COW_AT(10254282)
    if (rd32(sp0 - 0x10u) == 2u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_1025428f;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(1025428a)
    if (eax != 6u) goto L_1025429b;
L_1025428f: ;
    COW_AT(1025428f)
    t60 = rd32(sp0 - 8u);
    wr32(sp0 - 0x44u, t60);
    g->edx = t60;
    g->esp = sp0 - 0x40u;
    COW_RET(0x10254298u);
    cow_cdecl(g, COW_IMG(0x102c30eau), 1, t60);
    t61 = g->edx;
    edx = t61;
    COW_AT(10254298)
L_1025429b: ;
    COW_AT(1025429b)
    t62 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x44u, t62);
    t63 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t63);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    COW_RET(0x102542a8u);
    cow_thiscall_cdecl(g, COW_IMG(0x102bd4d1u), t63, 2, t63, t62);
    t64 = g->ecx;
    t65 = g->edx;
    ecx = t64;
    edx = t65;
    COW_AT(102542a8)
    if (rd32(ebx + 0xcu) != 0u)
    {
    COW_AT(102542b6)
        t66 = rd32(sp0 - 0x10u);
        if (t66 != 3u)
        {
    COW_AT(1025436e)
            if (rd32(sp0 - 0x18u) != 0x10u)
            {
                eax = rd32(sp0 - 0x18u);
            }
            else
            {
    COW_AT(10254376)
                eax = 8u;
            }
    COW_AT(1025437b)
            t80 = rd32(ebx + 0x1cu);
            wr32(sp0 - 0x44u, t80);
            wr32(sp0 - 0x48u, eax);
            g->ecx = t80;
            g->esp = sp0 - 0x40u;
            COW_RET(0x10254385u);
            cow_cdecl(g, COW_IMG(0x102c0815u), 2, eax, t80);
            t81 = g->ecx;
            ecx = t81;
    COW_AT(10254385)
        }
        else
        {
    COW_AT(102542c0)
            wr32(sp0 - 0x44u, sp0 - 0x14u);
            wr32(sp0 - 0x48u, sp0 - 0x2cu);
            t67 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x4cu, t67);
            t68 = rd32(sp0 - 8u);
            wr32(sp0 - 0x50u, t68);
            g->esp = sp0 - 0x40u;
            COW_RET(0x102542d5u);
            cow_cdecl(g, COW_IMG(0x102c2effu), 4, t68, t67, sp0 - 0x2cu, sp0 - 0x14u);
    COW_AT(102542d5)
            if ((int32_t)rd32(sp0 - 0x14u) <= (int32_t)rd32(ebx + 0xcu))
            {
                eax = rd32(ebx + 0xcu);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(ebx + 0xcu);
    COW_AT(102542e2)
                wr32(sp0 - 0x14u, eax);
                loc_14 = eax;
            }
    COW_AT(102542e5)
            t69 = rd32(ebx + 0x1cu);
            t70 = eax;
            edi = t69;
            eax = 0u;
            ecx = t70 * 3u >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x20u, 0u);
            ecx = t70 * 3u & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t71 = rd32(sp0 - 0x14u) * 3u;
            t72 = rd32(sp0 - 0x2cu);
            t73 = rd32(ebx + 0x1cu);
            esi = t72;
            edi = t73;
            ecx = t71 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t71 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr32(sp0 - 0x44u, sp0 - 0x30u);
            wr32(sp0 - 0x48u, sp0 - 0x34u);
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            t74 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x50u, t74);
            t75 = rd32(sp0 - 8u);
            wr32(sp0 - 0x54u, t75);
            g->esp = sp0 - 0x40u;
            COW_RET(0x10254335u);
            cow_cdecl(g, COW_IMG(0x102c2fc7u), 5, t75, t74, sp0 - 0x20u, sp0 - 0x34u, sp0 - 0x30u);
    COW_AT(10254335)
            t76 = rd32(ebx + 0xcu);
            t77 = rd32(ebx + 0x28u);
            edi = t77;
            eax = 0x80808080u;
            ecx = t76 >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t76 & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (rd32(sp0 - 0x20u) != 0u)
            {
                esi = rd32(sp0 - 0x20u);
    COW_AT(10254358)
                t78 = rd32(sp0 - 0x14u);
                t79 = rd32(ebx + 0x28u);
                edi = t79;
                ecx = t78 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t78 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
        }
    }
    COW_AT(10254388)
    t82 = rd32(ebx + 0x20u);
    wr32(sp0 - 0x44u, t82);
    t83 = rd32(sp0 - 8u);
    wr32(sp0 - 0x48u, t83);
    g->eax = t83;
    g->esp = sp0 - 0x40u;
    COW_RET(0x10254395u);
    t84 = cow_call_regs(g, COW_IMG(0x102bd998u), g->eax, ecx, t82, 1, 2, t83, t82);
    eax = t84;
    COW_AT(10254395)
    t85 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t85);
    t86 = rd32(sp0 - 8u);
    wr32(sp0 - 0x50u, t86);
    g->esp = sp0 - 0x48u;
    COW_RET(0x102543a2u);
    cow_cdecl(g, COW_IMG(0x102bd9e5u), 2, t86, t85);
    COW_AT(102543a2)
    wr32(sp0 - 0x54u, sp0 - 0x1cu);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    g->esp = sp0 - 0x50u;
    COW_RET(0x102543b3u);
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    COW_AT(102543b3)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 4u);
    return 1u;
L_102543c2: ;
    COW_AT(102543c2)
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, sp0 - 8u);
    g->esp = sp0 - 0x40u;
    COW_RET(0x102543d3u);
    cow_call_regs(g, COW_IMG(0x102bddd9u), g->eax, g->ecx, sp0 - 8u, 1, 3, sp0 - 8u, sp0 - 0xcu, sp0 - 0x1cu);
    COW_AT(102543d3)
    loc_4 = rd32(sp0 - 4u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
L_102543d6: ;
    COW_AT(102543d6)
    g->ebx = loc_38;
    g->esi = loc_3c;
    g->edi = loc_40;
    g->ebp = loc_4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102540c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102540d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, in_edi);
        wr32(sp0 - 0x3cu, in_esi);
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102540e7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, in_edi);
        wr32(sp0 - 0x3cu, in_esi);
        wr32(sp0 - 0x38u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102540edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102540f9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025410au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254112u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025411du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254124u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254135u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 8u);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025413eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 8u);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025414au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025415cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254173u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025417du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025418au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x60u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541adu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102541c3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541c8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541d2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541d7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541e6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102541fcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254212u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254220u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254226u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025422du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254238u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025423eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254247u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025424au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254250u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025425fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025426du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254270u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254276u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025427fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254282u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025428au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025428fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254298u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025429bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102542a8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102542b6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102542c0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102542d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102542e2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102542e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10254335u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x34u);
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10254358u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025436eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254376u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025437bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254385u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254388u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10254395u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102543a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102543b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x5cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102543c2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102543d3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 8u);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102543d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102540c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102540c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
