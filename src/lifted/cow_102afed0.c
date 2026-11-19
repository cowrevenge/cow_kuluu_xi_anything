/* f_0x102afed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102afed0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c08;
    uint32_t loc_c20;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 3136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102afefbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); in_edi = rd32(sp0 - 0xc1cu); in_esi = rd32(sp0 - 0xc18u); in_ebp = rd32(sp0 - 0xc14u); in_ebx = rd32(sp0 - 0xc10u); loc_c08 = rd32(sp0 - 0xc08u); g->ebp = rd32(sp0 - 0xc14u); g->ebx = rd32(sp0 - 0xc10u); g->edi = rd32(sp0 - 0xc1cu); g->esi = rd32(sp0 - 0xc18u); goto E_102afefb;
    case 0x102aff2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); in_edi = rd32(sp0 - 0xc1cu); in_esi = rd32(sp0 - 0xc18u); in_ebp = rd32(sp0 - 0xc14u); in_ebx = rd32(sp0 - 0xc10u); loc_c08 = rd32(sp0 - 0xc08u); g->ebp = rd32(sp0 - 0xc14u); g->ebx = rd32(sp0 - 0xc10u); g->edi = rd32(sp0 - 0xc1cu); g->esi = rd32(sp0 - 0xc18u); goto E_102aff2a;
    case 0x102aff61u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); in_edi = rd32(sp0 - 0xc1cu); in_esi = rd32(sp0 - 0xc18u); in_ebp = rd32(sp0 - 0xc14u); in_ebx = rd32(sp0 - 0xc10u); loc_c08 = rd32(sp0 - 0xc08u); g->ebp = rd32(sp0 - 0xc14u); g->ebx = rd32(sp0 - 0xc10u); g->edi = rd32(sp0 - 0xc1cu); g->esi = rd32(sp0 - 0xc18u); goto E_102aff61;
    case 0x102aff6bu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); in_edi = rd32(sp0 - 0xc1cu); in_esi = rd32(sp0 - 0xc18u); in_ebp = rd32(sp0 - 0xc14u); in_ebx = rd32(sp0 - 0xc10u); loc_c08 = rd32(sp0 - 0xc08u); g->ebp = rd32(sp0 - 0xc14u); g->ebx = rd32(sp0 - 0xc10u); g->edi = rd32(sp0 - 0xc1cu); g->esi = rd32(sp0 - 0xc18u); goto E_102aff6b;
    case 0x102aff82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102aff82;
    case 0x102aff95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102aff95;
    case 0x102aff97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102aff97;
    case 0x102affaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102affae;
    case 0x102affc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102affc5;
    case 0x102affc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102affc7;
    case 0x102affd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102affd7;
    case 0x102affeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102affea;
    case 0x102afff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102afff6;
    case 0x102b0000u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0000;
    case 0x102b0009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0009;
    case 0x102b000du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b000d;
    case 0x102b001eu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b001e;
    case 0x102b0031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0031;
    case 0x102b0044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0044;
    case 0x102b004bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b004b;
    case 0x102b0061u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0061;
    case 0x102b006eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b006e;
    case 0x102b0080u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0080;
    case 0x102b008cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b008c;
    case 0x102b00b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b00b6;
    case 0x102b00ccu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b00cc;
    case 0x102b00e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b00e4;
    case 0x102b00fau: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b00fa;
    case 0x102b011du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b011d;
    case 0x102b013eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b013e;
    case 0x102b0154u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0154;
    case 0x102b016fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b016f;
    case 0x102b0189u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0189;
    case 0x102b01b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01b7;
    case 0x102b01c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b01c8;
    case 0x102b01dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01da;
    case 0x102b01dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01dc;
    case 0x102b01f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01f7;
    case 0x102b01fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01fd;
    case 0x102b01ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b01ff;
    case 0x102b020fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b020f;
    case 0x102b0218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0218;
    case 0x102b023au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b023a;
    case 0x102b023bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b023b;
    case 0x102b0250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0250;
    case 0x102b026bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b026b;
    case 0x102b0286u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0286;
    case 0x102b02a1u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b02a1;
    case 0x102b02a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b02a8;
    case 0x102b02edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b02ed;
    case 0x102b0307u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_c20 = rd32(sp0 - 0xc20u); goto E_102b0307;
    default: break;
    }
#endif

    COW_AT(102afed0)
    wr32(sp0 - 0xc10u, in_ebx);
    wr32(sp0 - 0xc14u, in_ebp);
    wr32(sp0 - 0xc18u, in_esi);
    wr32(sp0 - 0xc1cu, in_edi);
    wr32(sp0 - 0xc20u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0xc24u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xc1cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xc08u, t1);
    if (t1 != 0u)
    {
        ecx = t2;
        edi = t1;
        loc_c08 = t1;
        goto L_102aff2a;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102afefb)
    wr32(sp0 - 0xc20u, 0x10eu);
    wr32(sp0 - 0xc24u, COW_IMG(0x103bf65cu));
    wr32(sp0 - 0xc28u, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc20u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf65cu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xc2cu, arg1);
    wr32(sp0 - 0xc30u, COW_IMG(0x103bf70cu));
    g->ebx = 0u;
    g->esp = sp0 - 0xc28u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf70cu), arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t7 & 0xffffff00u;
L_102aff2a: ;
    COW_AT(102aff2a)
    wr32(COW_IMG(0x109aebd4u), 0u);
    wr32(COW_IMG(0x109aebd0u), 0u);
    wr32(COW_IMG(0x109aebccu), 0u);
    wr8(COW_IMG(0x109aebd9u), 0u);
    wr8(COW_IMG(0x109aebd8u), 0u);
    wr32(COW_IMG(0x103bf638u), 1u);
    wr32(COW_IMG(0x109aebc8u), 0u);
    eax = arg1;
L_102aff61: ;
    COW_AT(102aff61)
    t8 = rd8(eax);
    wr8(COW_IMG(0x109aeac8u) + eax - arg1, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_102aff61;
    }
    ecx = (ecx & 0xffffff00u) | t8;
    COW_AT(102aff6b)
    wr32(sp0 - 0xc20u, arg1);
    wr32(sp0 - 0xc24u, edi);
    wr32(sp0 - 0xc28u, sp0 - 0xc00u);
    g->ecx = ecx;
    g->esp = sp0 - 0xc14u;
    t9 = cow_call_regs(g, COW_IMG(0x102b0330u), sp0 - 0xc00u, g->ecx, COW_IMG(0x109aeac8u) - arg1, 1, 5, sp0 - 0xc00u, edi, arg1, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_102b023a;
    }
    eax = t9;
    edx = t11;
L_102aff82: ;
    COW_AT(102aff82)
    wr32(sp0 - 0xc20u, 0x23u);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = eax;
    g->esp = sp0 - 0xc10u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), sp0 - 0xc00u, 5, sp0 - 0xc00u, 0x23u, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t13 = g->ecx;
    if (t12 == 0u)
    {
        eax = t12;
        ecx = t13;
    }
    else
    {
        eax = t12;
        ecx = t13;
    COW_AT(102aff95)
        wr8(eax, 0u);
    }
    COW_AT(102aff97)
    wr32(sp0 - 0xc20u, 0x7bu);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = eax;
    g->edx = sp0 - 0xc00u;
    g->esp = sp0 - 0xc1cu;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x102b0440u), ecx, 2, sp0 - 0xc00u, 0x7bu);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_102b0250;
    }
    ecx = t15;
    edx = t16;
    COW_AT(102affae)
    wr32(sp0 - 0xc20u, 0x7du);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = sp0 - 0xc00u;
    g->edx = edx;
    g->esp = sp0 - 0xc1cu;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x102b0440u), ecx, 2, sp0 - 0xc00u, 0x7du);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_102b026b;
    }
    ecx = t18;
    edx = t19;
    COW_AT(102affc5)
    eax = 0u;
L_102affc7: ;
    COW_AT(102affc7)
    t20 = rd8(eax + sp0 - 0xc00u);
    wr8(eax + sp0 - 0x800u, (uint8_t)t20);
    if ((uint8_t)t20 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t20;
        goto L_102affc7;
    }
    eax = eax + 1u;
    COW_AT(102affd7)
    wr32(sp0 - 0xc20u, 0x3bu);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc10u;
    t21 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), sp0 - 0xc00u, 5, sp0 - 0xc00u, 0x3bu, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = t22;
    COW_AT(102b0009)
        wr8(sp0 - 0xc09u, 0u);
    }
    else
    {
        eax = t21;
        edx = t23;
    COW_AT(102affea)
        ecx = eax + 1u;
        esi = sp0 - 0x400u - (eax + 1u);
L_102afff6: ;
    COW_AT(102afff6)
        t24 = rd8(ecx);
        wr8(ecx + esi, (uint8_t)t24);
        if ((uint8_t)t24 != 0u)
        {
            ecx = ecx + 1u;
            edx = (edx & 0xffffff00u) | t24;
            goto L_102afff6;
        }
        ecx = ecx + 1u;
    COW_AT(102b0000)
        wr8(eax, 0u);
        wr8(sp0 - 0xc09u, 0xffu);
    }
    COW_AT(102b000d)
    if (rd8(COW_IMG(0x109aebd9u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109aebd9u));
        goto L_102b00cc;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109aebd9u));
    COW_AT(102b001e)
    wr32(sp0 - 0xc20u, 0x7bu);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = eax;
    g->edx = sp0 - 0xc00u;
    g->esp = sp0 - 0xc10u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), ecx, 5, sp0 - 0xc00u, 0x7bu, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_102b0286;
    }
    ecx = t26;
    edx = t27;
    COW_AT(102b0031)
    wr32(sp0 - 0xc20u, 0x7du);
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->eax = sp0 - 0xc00u;
    g->edx = edx;
    g->esp = sp0 - 0xc10u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), ecx, 5, sp0 - 0xc00u, 0x7du, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t29 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        edx = t29;
    }
    else
    {
        eax = t28;
        edx = t29;
    COW_AT(102b0044)
        wr8(COW_IMG(0x109aebd8u), 0xffu);
    }
    COW_AT(102b004b)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf63cu));
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t30 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0xc00u, edx, 1, 4, sp0 - 0xc00u, COW_IMG(0x103bf63cu), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_102b0080;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
L_102b0061: ;
    COW_AT(102b0061)
    wr32(sp0 - 0xc20u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc1cu;
    t33 = cow_cdecl(g, COW_IMG(0x102b03c0u), 1, eax);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_102b00b6;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(102b006e)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf63cu));
    wr32(sp0 - 0xc24u, 0u);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t36 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bf63cu), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_102b0061;
    }
    ecx = t37;
    edx = t38;
L_102b0080: ;
    COW_AT(102b0080)
    if (rd8(COW_IMG(0x109aebd8u)) == 0u) goto L_102b01f7;
    COW_AT(102b008c)
    wr32(sp0 - 0xc20u, arg3);
    wr32(sp0 - 0xc24u, 0u);
    t39 = arg2 + rd32(COW_IMG(0x109aebd4u)) * 8u;
    wr32(sp0 - 0xc28u, t39);
    g->ebx = 0u;
    g->eax = t39;
    g->ecx = arg3;
    t40 = rd32(COW_IMG(0x109aebd4u));
    g->esp = sp0 - 0xc14u;
    t41 = cow_call_regs(g, COW_IMG(0x102b0510u), g->eax, g->ecx, t40, 1, 5, t39, 0u, arg3, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        ecx = t42;
        edx = t43;
        goto L_102b01f7;
    }
    eax = t41;
    ecx = t42;
    edx = t43;
L_102b00b6: ;
    COW_AT(102b00b6)
    wr32(sp0 - 0xc20u, edi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t44 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t44 & 0xffffff00u;
L_102b00cc: ;
    COW_AT(102b00cc)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf63cu));
    wr32(sp0 - 0xc24u, sp0 - 0xc00u);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t46 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, sp0 - 0xc00u, 1, 4, sp0 - 0xc00u, COW_IMG(0x103bf63cu), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 == 0u)
    {
        ecx = t47;
        edx = t48;
        goto L_102b01f7;
    }
    edx = t48;
    ebp = t46;
    COW_AT(102b00e4)
    esi = ebp;
    edi = COW_IMG(0x103bf704u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102b02a1;
    COW_AT(102b00fa)
    wr32(sp0 - 0xc20u, 0xffu);
    wr32(sp0 - 0xc24u, sp0 - 0xc04u);
    wr32(sp0 - 0xc28u, ebp);
    wr32(sp0 - 0xc2cu, arg2);
    g->ebx = 0u;
    g->eax = 0u;
    g->ecx = sp0 - 0xc04u;
    g->esp = sp0 - 0xc08u;
    t49 = cow_call_regs(g, COW_IMG(0x102b0580u), g->eax, g->ecx, edx, 1, 9, arg2, ebp, sp0 - 0xc04u, 0xffu, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u), rd32(sp0 - 0xc10u), rd32(sp0 - 0xc0cu));
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        eax = t49;
        ecx = t50;
        edx = t51;
        goto L_102b02a8;
    }
    ecx = t50;
    COW_AT(102b011d)
    wr32(sp0 - 0xc20u, 0x7bu);
    wr32(sp0 - 0xc24u, sp0 - 0x800u);
    g->eax = sp0 - 0x800u;
    g->edx = rd32(sp0 - 0xc04u);
    t52 = rd32(sp0 - 0xc04u);
    g->esp = sp0 - 0xc10u;
    t53 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), ecx, 5, sp0 - 0x800u, 0x7bu, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t54 = g->edx;
    if (t53 == 0u)
    {
        eax = t53;
        edx = t54;
        esi = arg2 + t52 * 8u;
        goto L_102b01dc;
    }
    eax = t53;
    edx = t54;
    esi = arg2 + t52 * 8u;
    COW_AT(102b013e)
    wr32(sp0 - 0xc20u, 0x7du);
    wr32(sp0 - 0xc24u, sp0 - 0x800u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc10u;
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), sp0 - 0x800u, 5, sp0 - 0x800u, 0x7du, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u));
    t56 = g->ecx;
    t57 = g->edx;
    if (t55 == 0u)
    {
        ecx = t56;
        edx = t57;
        goto L_102b0189;
    }
    eax = t55;
    ecx = t56;
    COW_AT(102b0154)
    wr32(sp0 - 0xc20u, arg3);
    wr32(sp0 - 0xc24u, 1u);
    wr32(sp0 - 0xc28u, esi);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xc14u;
    t58 = cow_call_regs(g, COW_IMG(0x102b0510u), g->eax, g->ecx, arg3, 1, 5, esi, 1u, arg3, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t59 = g->ecx;
    t60 = g->edx;
    if ((uint8_t)t58 != 0u)
    {
        ecx = t59;
        edx = t60;
        goto L_102b01f7;
    }
    eax = t58;
    edx = t60;
    COW_AT(102b016f)
    t61 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc20u, t61);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t62 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t61, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t62 & 0xffffff00u;
L_102b0189: ;
    COW_AT(102b0189)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf63cu));
    wr32(sp0 - 0xc24u, 0u);
    t63 = rd32(sp0 - 0xc04u);
    wr8(COW_IMG(0x109aebd9u), 0xffu);
    wr32(COW_IMG(0x109aebd4u), t63);
    wr32(COW_IMG(0x109aebd0u), 0u);
    wr32(COW_IMG(0x109aebccu), 0u);
    g->ebx = 0u;
    g->eax = t63;
    g->esp = sp0 - 0xc14u;
    t64 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bf63cu), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t65 = g->ecx;
    t66 = g->edx;
    if (t64 == 0u)
    {
        ecx = t65;
        edx = t66;
        goto L_102b01f7;
    }
    eax = t64;
    ecx = t65;
    edx = t66;
L_102b01b7: ;
    COW_AT(102b01b7)
    wr32(sp0 - 0xc20u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc1cu;
    t67 = cow_cdecl(g, COW_IMG(0x102b03c0u), 1, eax);
    t68 = g->ecx;
    t69 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        ecx = t68;
        goto L_102b02ed;
    }
    eax = t67;
    ecx = t68;
    edx = t69;
    COW_AT(102b01c8)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf63cu));
    wr32(sp0 - 0xc24u, 0u);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t70 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bf63cu), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t71 = g->ecx;
    t72 = g->edx;
    if (t70 != 0u)
    {
        eax = t70;
        ecx = t71;
        edx = t72;
        goto L_102b01b7;
    }
    ecx = t71;
    edx = t72;
    COW_AT(102b01da)
L_102b01f7: ;
    COW_AT(102b01f7)
    if (rd8(sp0 - 0xc09u) == 0u) goto L_102b0218;
    COW_AT(102b01fd)
    eax = 0u;
L_102b01ff: ;
    COW_AT(102b01ff)
    t88 = rd8(eax + sp0 - 0x400u);
    wr8(eax + sp0 - 0xc00u, (uint8_t)t88);
    if ((uint8_t)t88 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t88;
        goto L_102b01ff;
    }
    eax = eax + 1u;
    COW_AT(102b020f)
    edi = rd32(sp0 - 0xc08u);
    goto L_102aff82;
L_102b01dc: ;
    COW_AT(102b01dc)
    wr32(sp0 - 0xc20u, arg3);
    wr32(sp0 - 0xc24u, 1u);
    wr32(sp0 - 0xc28u, esi);
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = arg3;
    g->esp = sp0 - 0xc14u;
    t75 = cow_call_regs(g, COW_IMG(0x102b0510u), g->eax, g->ecx, edx, 1, 5, esi, 1u, arg3, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t76 = g->ecx;
    t77 = g->edx;
    if ((uint8_t)t75 == 0u)
    {
        ecx = t76;
        edx = t77;
        goto L_102b0307;
    }
    ecx = t76;
    edx = t77;
    goto L_102b01f7;
L_102b0218: ;
    COW_AT(102b0218)
    wr32(sp0 - 0xc20u, arg1);
    t89 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc24u, t89);
    wr32(sp0 - 0xc28u, sp0 - 0xc00u);
    g->ecx = ecx;
    g->esp = sp0 - 0xc14u;
    t90 = cow_call_regs(g, COW_IMG(0x102b0330u), sp0 - 0xc00u, g->ecx, arg1, 1, 5, sp0 - 0xc00u, t89, arg1, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    t91 = g->ecx;
    t92 = g->edx;
    if ((uint8_t)t90 != 0u)
    {
        eax = t90;
        edx = t92;
        edi = t89;
        goto L_102aff82;
    }
    eax = t90;
    ecx = t91;
    edx = t92;
    edi = t89;
L_102b023a: ;
    COW_AT(102b023a)
    wr32(sp0 - 0xc20u, edi);
    loc_c20 = edi;
L_102b023b: ;
    COW_AT(102b023b)
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t95 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, loc_c20, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return (t95 & 0xffffff00u) | (uint8_t)(t95 | 0xffu);
L_102b0250: ;
    COW_AT(102b0250)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf6f0u));
    wr32(sp0 - 0xc24u, edi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc1cu;
    t94 = cow_cdecl(g, COW_IMG(0x102b04b0u), 2, edi, COW_IMG(0x103bf6f0u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t94 & 0xffffff00u;
L_102b026b: ;
    COW_AT(102b026b)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf6dcu));
    wr32(sp0 - 0xc24u, edi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc1cu;
    t93 = cow_cdecl(g, COW_IMG(0x102b04b0u), 2, edi, COW_IMG(0x103bf6dcu));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t93 & 0xffffff00u;
L_102b0286: ;
    COW_AT(102b0286)
    wr32(sp0 - 0xc20u, COW_IMG(0x103bf6b8u));
    wr32(sp0 - 0xc24u, edi);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc1cu;
    t45 = cow_cdecl(g, COW_IMG(0x102b04b0u), 2, edi, COW_IMG(0x103bf6b8u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t45 & 0xffffff00u;
L_102b02a1: ;
    COW_AT(102b02a1)
    t87 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc20u, t87);
    eax = 0u;
    ecx = t87;
    loc_c20 = t87;
    goto L_102b023b;
L_102b02a8: ;
    COW_AT(102b02a8)
    wr32(sp0 - 0xc20u, 0x16bu);
    wr32(sp0 - 0xc24u, COW_IMG(0x103bf65cu));
    wr32(sp0 - 0xc28u, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xc20u;
    t80 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf65cu));
    t81 = g->ecx;
    wr32(sp0 - 0xc2cu, rd32(COW_IMG(0x109aebc8u)));
    wr32(sp0 - 0xc30u, COW_IMG(0x109aeac8u));
    wr32(sp0 - 0xc34u, ebp);
    wr32(sp0 - 0xc38u, COW_IMG(0x103bf68cu));
    g->ebx = 0u;
    g->ecx = t81;
    g->edx = rd32(COW_IMG(0x109aebc8u));
    t82 = rd32(COW_IMG(0x109aebc8u));
    g->esp = sp0 - 0xc30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf68cu), ebp);
    t83 = g->ecx;
    t84 = g->edx;
    t85 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc3cu, t85);
    g->edi = edi;
    g->eax = t85;
    t86 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t84, 1, 3, t85, COW_IMG(0x103bf68cu), rd32(sp0 - 0xc34u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t86 & 0xffffff00u;
L_102b02ed: ;
    COW_AT(102b02ed)
    t73 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc20u, t73);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xc14u;
    t74 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t73, 1, 3, t73, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t74 & 0xffffff00u;
L_102b0307: ;
    COW_AT(102b0307)
    t78 = rd32(sp0 - 0xc08u);
    wr32(sp0 - 0xc20u, t78);
    g->edi = edi;
    g->eax = t78;
    g->esp = sp0 - 0xc14u;
    t79 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t78, rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u));
    g->ebx = rd32(sp0 - 0xc10u);
    g->esi = rd32(sp0 - 0xc18u);
    g->edi = rd32(sp0 - 0xc1cu);
    g->ebp = rd32(sp0 - 0xc14u);
    return t79 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102afed0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102afefbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c08;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        in_edi = rd32(sp0 - 0xc1cu);
        in_esi = rd32(sp0 - 0xc18u);
        in_ebp = rd32(sp0 - 0xc14u);
        in_ebx = rd32(sp0 - 0xc10u);
        loc_c08 = rd32(sp0 - 0xc08u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aff2au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c08;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        in_edi = rd32(sp0 - 0xc1cu);
        in_esi = rd32(sp0 - 0xc18u);
        in_ebp = rd32(sp0 - 0xc14u);
        in_ebx = rd32(sp0 - 0xc10u);
        loc_c08 = rd32(sp0 - 0xc08u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aff61u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c08;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        in_edi = rd32(sp0 - 0xc1cu);
        in_esi = rd32(sp0 - 0xc18u);
        in_ebp = rd32(sp0 - 0xc14u);
        in_ebx = rd32(sp0 - 0xc10u);
        loc_c08 = rd32(sp0 - 0xc08u);
        g->esp = sp0 - 0xc1cu;
        g->edx = COW_IMG(0x109aeac8u) - arg1;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aff6bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c08;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        in_edi = rd32(sp0 - 0xc1cu);
        in_esi = rd32(sp0 - 0xc18u);
        in_ebp = rd32(sp0 - 0xc14u);
        in_ebx = rd32(sp0 - 0xc10u);
        loc_c08 = rd32(sp0 - 0xc08u);
        g->esp = sp0 - 0xc1cu;
        g->edx = COW_IMG(0x109aeac8u) - arg1;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aff82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aff95u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102aff97u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102affaeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102affc5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102affc7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102affd7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102affeau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102afff6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0000u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0009u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b000du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b001eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->edx = sp0 - 0xc00u;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0031u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0044u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b004bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0061u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b006eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b0080u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b008cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b00b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b00ccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->edx = sp0 - 0xc00u;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b00e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b00fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->eax = 0u;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b011du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0xc24u, sp0 - 0xc04u);
        (void)sp0;
        return 1;
    }
    case 0x102b013eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x102b0154u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x102b016fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b0189u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x102b01b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b01c8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b01dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b01dcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x102b01f7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b01fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b01ffu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b020fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b0218u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b023au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        wr32(sp0 - 0xc28u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b023bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc20u;
        (void)sp0;
        return 1;
    }
    case 0x102b0250u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b026bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b0286u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b02a1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->eax = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc00u);
        (void)sp0;
        return 1;
    }
    case 0x102b02a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        g->ebx = 0u;
        wr32(sp0 - 0xc24u, sp0 - 0xc04u);
        (void)sp0;
        return 1;
    }
    case 0x102b02edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b0307u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c20;
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
        loc_c20 = rd32(sp0 - 0xc20u);
        g->esp = sp0 - 0xc1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102afed0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102afed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
