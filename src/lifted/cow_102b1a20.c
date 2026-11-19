/* f_0x102b1a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b1a20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d69;
    double d76;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_40c;
    uint32_t loc_418;
    uint32_t loc_41c;
    uint32_t loc_424;
    uint32_t loc_428;
    uint32_t loc_42c;
    uint32_t loc_430;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
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
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
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
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
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
    cow_frame(g, sp0, 1116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b1a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1a7b;
    case 0x102b1a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1a8f;
    case 0x102b1a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1a9b;
    case 0x102b1aa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1aa3;
    case 0x102b1aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1aa5;
    case 0x102b1ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1ab5;
    case 0x102b1addu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1add;
    case 0x102b1b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); goto E_102b1b00;
    case 0x102b1b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b21;
    case 0x102b1b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b3f;
    case 0x102b1b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_418 = rd32(sp0 - 0x418u); goto E_102b1b48;
    case 0x102b1b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); goto E_102b1b56;
    case 0x102b1b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1b78;
    case 0x102b1ba0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ba0;
    case 0x102b1bc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_102b1bc2;
    case 0x102b1be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1be2;
    case 0x102b1c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c32;
    case 0x102b1c51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c51;
    case 0x102b1c6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c6e;
    case 0x102b1c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1c9d;
    case 0x102b1cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1cc0;
    case 0x102b1ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ce1;
    case 0x102b1d47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d47;
    case 0x102b1d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d4c;
    case 0x102b1d4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d4e;
    case 0x102b1d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d5f;
    case 0x102b1d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d72;
    case 0x102b1d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d7f;
    case 0x102b1d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1d9d;
    case 0x102b1da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1da5;
    case 0x102b1db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); goto E_102b1db2;
    case 0x102b1dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1dd4;
    case 0x102b1ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); goto E_102b1ddf;
    case 0x102b1e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1e30;
    case 0x102b1e81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_102b1e81;
    case 0x102b1ed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1ed2;
    case 0x102b1f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f23;
    case 0x102b1f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102b1f78;
    case 0x102b1fc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_102b1fc2;
    default: break;
    }
#endif

    COW_AT(102b1a20)
    wr32(sp0 - 0x424u, in_ebx);
    wr32(sp0 - 0x428u, in_ebp);
    wr32(sp0 - 0x42cu, in_esi);
    wr32(sp0 - 0x430u, in_edi);
    wr32(sp0 - 0x434u, 0x2cu);
    wr32(sp0 - 0x438u, arg3);
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0x42cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), self, 3, arg3, 0x2cu, in_edi);
    t2 = g->edx;
    wr32(sp0 - 0x43cu, sp0 - 0x410u);
    wr32(sp0 - 0x440u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x444u, t1 + 1u);
    g->ecx = sp0 - 0x410u;
    g->esp = sp0 - 0x438u;
    cow_cdecl(g, COW_IMG(0x10313683u), 3, t1 + 1u, COW_IMG(0x10352ff0u), sp0 - 0x410u);
    t3 = g->ecx;
    t4 = rd32(sp0 - 0x410u);
    wr32(sp0 - 0x448u, t4);
    wr32(sp0 - 0x44cu, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x440u;
    t5 = cow_cdecl(g, COW_IMG(0x1029a350u), 3, arg1, t4, rd32(sp0 - 0x444u));
    wr32(sp0 - 0x450u, arg2);
    wr32(sp0 - 0x454u, 0x200u);
    wr32(sp0 - 0x458u, sp0 - 0x400u);
    g->ecx = arg2;
    g->esp = sp0 - 0x448u;
    t6 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, arg2, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        loc_424 = in_ebx;
        loc_428 = in_ebp;
        loc_42c = in_esi;
        loc_430 = in_edi;
        goto L_102b1fc2;
    }
    ecx = t7;
    edx = t8;
    ebx = in_ebx;
    loc_424 = in_ebx;
    loc_428 = in_ebp;
    loc_42c = in_esi;
    loc_430 = in_edi;
L_102b1a7b: ;
    COW_AT(102b1a7b)
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_102b1db2;
    ecx = ~ecx - 1u;
    COW_AT(102b1a8f)
    if (rd8(sp0 - 0x400u) == 0xau) goto L_102b1db2;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
    COW_AT(102b1a9b)
    if ((uint8_t)eax == 0x23u) goto L_102b1db2;
    COW_AT(102b1aa3)
    eax = 0u;
L_102b1aa5: ;
    COW_AT(102b1aa5)
    t9 = rd8(eax + sp0 - 0x400u);
    wr8(eax + sp0 - 0x200u, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_102b1aa5;
    }
    ecx = (ecx & 0xffffff00u) | t9;
    COW_AT(102b1ab5)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x428u;
    t10 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), loc_430, loc_42c);
    esi = t10;
    edi = COW_IMG(0x103bfb94u);
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
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        goto L_102b1db2;
    }
    eax = t10;
    COW_AT(102b1add)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t11 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x43cu, t11);
    g->edx = t13;
    g->esp = sp0 - 0x438u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t12, 1, t11);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x40cu, t14);
    if ((int32_t)t14 < 1)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        ebp = t14;
        goto L_102b1ddf;
    }
    ecx = t15;
    edx = t16;
    ebp = t14;
    loc_40c = t14;
    COW_AT(102b1b00)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfb8cu));
    wr32(sp0 - 0x438u, sp0 - 0x200u);
    wr32(sp0 - 0x418u, 0x200u);
    g->ecx = ecx;
    g->esp = sp0 - 0x41cu;
    t17 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x200u, g->ecx, edx, 1, 7, sp0 - 0x200u, COW_IMG(0x103bfb8cu), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        loc_418 = 0x200u;
    }
    else
    {
        eax = t17;
        edx = t19;
    COW_AT(102b1b21)
        wr32(sp0 - 0x434u, sp0 - 0x408u);
        wr32(sp0 - 0x438u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x43cu, eax + 7u);
        g->ecx = sp0 - 0x408u;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        cow_cdecl(g, COW_IMG(0x10313683u), 3, eax + 7u, COW_IMG(0x10352ff0u), sp0 - 0x408u);
        t20 = g->ecx;
        t21 = g->edx;
        if ((int32_t)rd32(sp0 - 0x408u) <= 0)
        {
            ecx = t20;
            edx = t21;
            loc_418 = 0x200u;
        }
        else
        {
            eax = rd32(sp0 - 0x408u);
            ecx = t20;
            edx = t21;
    COW_AT(102b1b3f)
            wr32(sp0 - 0x418u, eax * 0xau);
            loc_418 = eax * 0xau;
        }
    }
    COW_AT(102b1b48)
    wr32(sp0 - 0x41cu, 0u);
    if ((int32_t)ebp <= 0)
    {
        ebx = 0u;
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        goto L_102b1db2;
    }
    ebx = 0u;
    loc_41c = 0u;
L_102b1b56: ;
    COW_AT(102b1b56)
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->esp = sp0 - 0x42cu;
    t22 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, arg2, 1, 4, sp0 - 0x400u, 0x200u, arg2, rd32(sp0 - 0x430u));
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_102b1e30;
    }
    eax = t22;
    edx = t24;
    COW_AT(102b1b78)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t25 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x400u, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    esi = t25;
    edi = COW_IMG(0x103bfb84u);
    ecx = 6u;
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
        goto L_102b1da5;
    }
    eax = t25;
    COW_AT(102b1ba0)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t26 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x43cu, t26);
    g->edx = t28;
    g->esp = sp0 - 0x438u;
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t27, 1, t26);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x404u, t29);
    if ((int32_t)t29 < 0)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        esi = t29;
        goto L_102b1e81;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    loc_404 = t29;
    COW_AT(102b1bc2)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t32 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x43cu, t32);
    g->edx = t34;
    g->esp = sp0 - 0x438u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t33, 1, t32);
    t36 = g->ecx;
    t37 = g->edx;
    if ((int32_t)t35 < 1)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        esi = t35;
        goto L_102b1ed2;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    esi = t35;
    COW_AT(102b1be2)
    wr32(sp0 - 0x434u, 0x2b1u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, esi * 4u);
    wr32(sp0 - 0x440u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t38 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi * 4u, COW_IMG(0x103bf904u), 0x2b1u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x444u, 0x2b2u);
    wr32(sp0 - 0x448u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x44cu, esi * 4u);
    wr32(sp0 - 0x450u, 1u);
    g->edx = t40;
    g->esp = sp0 - 0x42cu;
    t41 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi * 4u, COW_IMG(0x103bf904u), 0x2b2u, 1u, rd32(sp0 - 0x43cu), COW_IMG(0x103bf904u), 0x2b1u, rd32(sp0 - 0x430u));
    t42 = g->edx;
    wr32(sp0 - 0x414u, t41);
    t43 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x454u, t43);
    wr32(sp0 - 0x458u, arg2);
    g->eax = t43;
    g->edx = t42;
    g->esp = sp0 - 0x448u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), arg2, 4, arg2, t43, 1u, rd32(sp0 - 0x44cu));
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 == 0u)
    {
        eax = t44;
        ecx = t45;
        edx = t46;
        ebx = t38;
        goto L_102b1f23;
    }
    eax = t44;
    ecx = t45;
    edx = t46;
    ebx = t38;
    ebp = t44;
    COW_AT(102b1c32)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t47 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x43cu, t47);
    g->edx = t49;
    g->esp = sp0 - 0x438u;
    t50 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t48, 1, t47);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(ebx, t50);
    if ((int32_t)esi <= 1)
    {
        eax = t50;
        ecx = t51;
        edx = t52;
        goto L_102b1c6e;
    }
    eax = t50;
    ecx = t51;
    edx = t52;
    edi = 1u;
L_102b1c51: ;
    COW_AT(102b1c51)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t53 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t54 = g->ecx;
    t55 = g->edx;
    wr32(sp0 - 0x43cu, t53);
    g->edx = t55;
    g->esp = sp0 - 0x438u;
    t56 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t54, 1, t53);
    t57 = g->ecx;
    t58 = g->edx;
    wr32(ebx + edi * 4u, t56);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        eax = t56;
        ecx = t57;
        edx = t58;
        edi = edi + 1u;
        goto L_102b1c51;
    }
    eax = t56;
    ecx = t57;
    edx = t58;
L_102b1c6e: ;
    COW_AT(102b1c6e)
    wr32(sp0 - 0x434u, 0x2b9u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->ecx = ecx;
    g->esp = sp0 - 0x430u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2b9u);
    t59 = g->ecx;
    t60 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x440u, t60);
    wr32(sp0 - 0x444u, arg2);
    g->eax = arg2;
    g->edx = t60;
    g->esp = sp0 - 0x434u;
    t61 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), t59, 4, arg2, t60, rd32(sp0 - 0x43cu), COW_IMG(0x103bf904u));
    t62 = g->ecx;
    t63 = g->edx;
    if (t61 == 0u)
    {
        eax = t61;
        ecx = t62;
        edx = t63;
        goto L_102b1f78;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    ebp = t61;
    COW_AT(102b1c9d)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t64 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0x43cu, t64);
    g->ebx = ebx;
    g->edx = t66;
    g->esp = sp0 - 0x430u;
    t67 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t65, 3, t64, rd32(sp0 - 0x438u), COW_IMG(0x103bfba0u));
    t68 = g->edx;
    d69 = cow_take_float(g);
    t70 = rd32(sp0 - 0x414u);
    wrf32(t70, (float)d69);
    if ((int32_t)esi <= 1)
    {
        eax = t67;
        ecx = t70;
        edx = t68;
        goto L_102b1ce1;
    }
    eax = t67;
    ecx = t70;
    edx = t68;
    edi = 1u;
L_102b1cc0: ;
    COW_AT(102b1cc0)
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x428u;
    t71 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 - 0x43cu, t71);
    g->ebx = ebx;
    g->esp = sp0 - 0x430u;
    t74 = cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t72, 3, t71, 0u, COW_IMG(0x103bfba0u));
    t75 = g->ecx;
    d76 = cow_take_float(g);
    t77 = rd32(sp0 - 0x414u);
    wrf32(edi * 4u + t77, (float)d76);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        eax = t74;
        ecx = t75;
        edx = t77;
        edi = edi + 1u;
        goto L_102b1cc0;
    }
    eax = t74;
    ecx = t75;
    edx = t77;
L_102b1ce1: ;
    COW_AT(102b1ce1)
    wr32(sp0 - 0x434u, 0x2bfu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t78 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2bfu);
    t79 = g->ecx;
    t80 = g->edx;
    g->esp = sp0 - 0x43cu;
    t81 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
    wr32(sp0 - 0x420u, t81);
    t82 = rd32(sp0 - 0x414u);
    wr32(t81 + 0x50u, esi);
    wr32(t81 + 0x30u, ebx);
    wr32(t81 + 0x38u, t82);
    t83 = rd32(sp0 - 0x404u);
    wr32(t81 + 0x3cu, 0u);
    wr32(sp0 - 0x440u, t83);
    wr32(sp0 - 0x444u, arg1);
    g->edx = arg1;
    t84 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, arg1, t83);
    t85 = g->edx;
    wr32(rd32(sp0 - 0x420u) + 0x9cu, t84);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(sp0 - 0x420u);
        edx = t85;
    COW_AT(102b1d4c)
        eax = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 - 0x420u) + 0x9cu);
        ecx = rd32(sp0 - 0x420u);
        edx = t85;
    COW_AT(102b1d47)
        eax = eax + 0x24u;
    }
    COW_AT(102b1d4e)
    wr32(ecx + 0x58u, eax);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
    COW_AT(102b1d72)
        wr32(sp0 - 0x434u, sp0 - 0x420u);
        g->eax = sp0 - 0x420u;
        g->esp = sp0 - 0x428u;
        t87 = cow_cdecl(g, COW_IMG(0x102af600u), 3, sp0 - 0x420u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
        eax = t87;
    }
    else
    {
        eax = rd32(sp0 - 0x420u);
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
    COW_AT(102b1d5f)
        wr32(sp0 - 0x434u, eax);
        wr32(sp0 - 0x438u, arg1);
        g->esp = sp0 - 0x424u;
        t86 = cow_call_regs(g, COW_IMG(0x1029a3a0u), eax, g->ecx, g->edx, 1, 5, arg1, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u));
        eax = t86;
    }
    COW_AT(102b1d7f)
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = eax;
    g->ecx = arg2;
    g->esp = sp0 - 0x42cu;
    t88 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, arg2, rd32(sp0 - 0x430u));
    t89 = g->ecx;
    t90 = g->edx;
    if (t88 == 0u)
    {
        edx = t90;
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        goto L_102b1db2;
    }
    ecx = t89;
    edx = t90;
    COW_AT(102b1d9d)
    ebx = rd32(sp0 - 0x41cu);
    ebp = rd32(sp0 - 0x40cu);
L_102b1da5: ;
    COW_AT(102b1da5)
    wr32(sp0 - 0x41cu, ebx + 1u);
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        loc_418 = rd32(sp0 - 0x418u);
        loc_41c = ebx + 1u;
        ebx = ebx + 1u;
        goto L_102b1b56;
    }
    ebx = ebx + 1u;
    loc_424 = rd32(sp0 - 0x424u);
    loc_428 = rd32(sp0 - 0x428u);
    loc_42c = rd32(sp0 - 0x42cu);
    loc_430 = rd32(sp0 - 0x430u);
L_102b1db2: ;
    COW_AT(102b1db2)
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->eax = arg2;
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x42cu;
    t127 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x400u, 0x200u, arg2, loc_430);
    t128 = g->ecx;
    t129 = g->edx;
    if (t127 != 0u)
    {
        ecx = t128;
        edx = t129;
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        goto L_102b1a7b;
    }
    COW_AT(102b1dd4)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ddf: ;
    COW_AT(102b1ddf)
    wr32(sp0 - 0x434u, 0x299u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t121 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t122 = g->ecx;
    wr32(sp0 - 0x440u, ebp);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb6cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t122;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t123 = g->ecx;
    t124 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t124;
    g->esp = sp0 - 0x43cu;
    t125 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb6cu), rd32(sp0 - 0x440u));
    t126 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e30: ;
    COW_AT(102b1e30)
    wr32(sp0 - 0x434u, 0x2a7u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t115 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t116 = g->ecx;
    wr32(sp0 - 0x440u, ebx);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t116;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t118;
    g->esp = sp0 - 0x43cu;
    t119 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t120 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e81: ;
    COW_AT(102b1e81)
    wr32(sp0 - 0x434u, 0x2acu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t109 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t110 = g->ecx;
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb40u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t110;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t111 = g->ecx;
    t112 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t112;
    g->esp = sp0 - 0x43cu;
    t113 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb40u), rd32(sp0 - 0x440u));
    t114 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ed2: ;
    COW_AT(102b1ed2)
    wr32(sp0 - 0x434u, 0x2afu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t104 = g->ecx;
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb2cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->ecx = t104;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t106;
    g->esp = sp0 - 0x43cu;
    t107 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb2cu), rd32(sp0 - 0x440u));
    t108 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f23: ;
    COW_AT(102b1f23)
    wr32(sp0 - 0x434u, 0x2b5u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t97 = g->ecx;
    t98 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t98);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->eax = sp0 - 0x400u;
    g->edx = t98;
    g->esp = sp0 - 0x444u;
    t99 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t100 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->ecx = arg1;
    g->esp = sp0 - 0x43cu;
    t101 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t102 = g->ecx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f78: ;
    COW_AT(102b1f78)
    wr32(sp0 - 0x434u, 0x2bbu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t91 = g->edx;
    t92 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t92);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ebx = ebx;
    g->eax = t92;
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    t93 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t94 = g->ecx;
    wr32(sp0 - 0x450u, arg1);
    g->ecx = t94;
    g->edx = arg1;
    g->esp = sp0 - 0x43cu;
    cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t95 = g->ecx;
    t96 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    loc_424 = rd32(sp0 - 0x424u);
    loc_428 = rd32(sp0 - 0x428u);
    loc_42c = rd32(sp0 - 0x42cu);
    loc_430 = rd32(sp0 - 0x430u);
L_102b1fc2: ;
    COW_AT(102b1fc2)
    g->ebx = loc_424;
    g->esi = loc_42c;
    g->edi = loc_430;
    g->ebp = loc_428;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b1a20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b1a7bu:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a8fu:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1a9bu:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1aa3u:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1aa5u:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ab5u:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1addu:
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
        g->esp = sp0 - 0x430u;
        g->edx = 0u;
        wr32(sp0 - 0x438u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1b00u:
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
        uint32_t loc_40c;
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
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b21u:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x438u, sp0 - 0x200u);
        wr32(sp0 - 0x418u, 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102b1b3fu:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x434u, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x102b1b48u:
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
        uint32_t loc_418;
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
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b56u:
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
        uint32_t loc_418;
        uint32_t loc_41c;
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
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1b78u:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1ba0u:
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
        g->esp = sp0 - 0x430u;
        g->edx = 0u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        wr32(sp0 - 0x438u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1bc2u:
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
        uint32_t loc_404;
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
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1be2u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c32u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c51u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c6eu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1c9du:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1cc0u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ce1u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d47u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d4cu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d4eu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d5fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d72u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d7fu:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1d9du:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1da5u:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1db2u:
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
        uint32_t loc_418;
        uint32_t loc_41c;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1dd4u:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1ddfu:
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
        uint32_t loc_40c;
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
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1e30u:
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
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x43cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102b1e81u:
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
        uint32_t loc_404;
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
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1ed2u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f23u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1f78u:
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
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x102b1fc2u:
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
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
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
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1a20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b1a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
