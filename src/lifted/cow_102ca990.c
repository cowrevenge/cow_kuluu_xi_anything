/* f_0x102ca990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102ca990(Guest* g)
{
    uint32_t al_m34;
    uint32_t al_m38;
    uint32_t al_m80;
    uint32_t al_m84;
    uint32_t al_m88;
    uint32_t al_m8c;
    uint32_t al_m90;
    uint32_t al_m98;
    uint32_t al_m9c;
    uint32_t al_ma0;
    uint32_t al_mac;
    uint32_t al_mb0;
    uint32_t cf;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ca9cbu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp1 - 0xb0u); in_esi = rd32(sp1 - 0xacu); al_m90 = rd32(sp1 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xb0u); g->esi = rd32(sp1 - 0xacu); goto E_102ca9cb;
    case 0x102ca9cfu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp1 - 0xb0u); in_esi = rd32(sp1 - 0xacu); al_m90 = rd32(sp1 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xb0u); g->esi = rd32(sp1 - 0xacu); goto E_102ca9cf;
    case 0x102ca9e1u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ca9e1;
    case 0x102ca9efu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102ca9ef;
    case 0x102caa9eu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m9c = rd32(sp1 - 0x9cu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102caa9e;
    case 0x102cab4bu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m9c = rd32(sp1 - 0x9cu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102cab4b;
    case 0x102cac62u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102cac62;
    case 0x102cac6du: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102cac6d;
    case 0x102cac8du: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102cac8d;
    case 0x102cac99u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); loc_4 = rd32(sp0 - 4u); goto E_102cac99;
    case 0x102cacabu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cacab;
    case 0x102cacb9u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cacb9;
    case 0x102cad69u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m80 = rd32(sp1 - 0x80u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cad69;
    case 0x102cad6bu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_m88 = rd32(sp1 - 0x88u); goto E_102cad6b;
    case 0x102cad87u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m80 = rd32(sp1 - 0x80u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cad87;
    case 0x102caf30u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_m88 = rd32(sp1 - 0x88u); goto E_102caf30;
    case 0x102caf35u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_m88 = rd32(sp1 - 0x88u); goto E_102caf35;
    case 0x102caf51u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m9c = rd32(sp1 - 0x9cu); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m80 = rd32(sp1 - 0x80u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102caf51;
    case 0x102cb1b8u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_m88 = rd32(sp1 - 0x88u); goto E_102cb1b8;
    case 0x102cb1c7u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cb1c7;
    case 0x102cb1e5u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; al_mb0 = rd32(sp1 - 0xb0u); al_mac = rd32(sp1 - 0xacu); al_ma0 = rd32(sp1 - 0xa0u); al_m98 = rd32(sp1 - 0x98u); al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m88 = rd32(sp1 - 0x88u); al_m84 = rd32(sp1 - 0x84u); al_m38 = rd32(sp1 - 0x38u); al_m34 = rd32(sp1 - 0x34u); loc_4 = rd32(sp0 - 4u); goto E_102cb1e5;
    default: break;
    }
#endif

    COW_AT(102ca990)
    wr32(sp0 - 4u, in_ebp);
    { /* movaps xmm1, xmmword ptr [0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u); g->xmm[1] = rd128(A); }
    wr32(sp1 - 0xacu, in_esi);
    wr32(sp1 - 0xb0u, in_edi);
    wr32(sp1 - 0x84u, 0u);
    t1 = rd32(arg1 + 0x100u);
    { /* movaps xmmword ptr [esp + 0x80], xmm1 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[1]); }
    wr32(sp1 - 0x90u, 8u);
    if ((int32_t)t1 >= 8)
    {
        al_m90 = 8u;
    }
    else
    {
        eax = t1;
    COW_AT(102ca9cb)
        wr32(sp1 - 0x90u, eax);
        al_m90 = eax;
    }
    COW_AT(102ca9cf)
    wr32(sp1 - 0x98u, arg1);
    t2 = COW_IMG(0x10344dc8u) - arg1;
    wr32(sp1 - 0x38u, t2);
    edi = arg2;
    loc_4 = in_ebp;
    al_mac = in_esi;
    al_mb0 = in_edi;
    al_m84 = 0u;
    al_m98 = arg1;
    al_m38 = t2;
L_102ca9e1: ;
    COW_AT(102ca9e1)
    if (rd32(al_m98) != 0u)
    {
        eax = al_m98;
        edx = rd32(al_m98);
    COW_AT(102ca9ef)
        t3 = rd32(eax + 0x80u) * 0x2bu << 0x10u;
        t4 = rd32(COW_IMG(0x10344e4cu) + edx * 0xcu + (t3 >> 0x17u) * 0xcu - rd32(al_m98 + 0x80u) * 4u) - (t3 & 0x7f800000u);
        wr32(sp1 - 0x9cu, t4);
        wr32(sp1 - 0x80u, t4);
        t5 = rd32(COW_IMG(0x103cc0c8u) + edx * 8u);
        { /* movss xmm0, dword ptr [ecx] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
        t6 = rd32(al_m98);
        { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
        { /* movaps xmm2, xmmword ptr [edx + 0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u) + t6 * 0x10u; g->xmm[2] = rd128(A); }
        t7 = rd32(al_m38 + al_m98);
        { /* movaps xmm3, xmmword ptr [edx + eax*4 + 0xc80] */ uint32_t A = arg1 + t7 * 4u + 0xc80u; g->xmm[3] = rd128(A); }
        { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
        { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
        { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
        { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
        { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = arg1 + t7 * 4u + 0xc90u; g->xmm[3] = rd128(A); }
        { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
        { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
        { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
        { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
        if (t6 != 1u)
        {
            esi = t5;
            cf = t6 < 1u;
            pf = PARITY((uint8_t)(t6 - 1u));
            zf = t6 == 1u;
            sf = (int32_t)(t6 - 1u) < 0;
            of = ((t6 ^ 1u) & (t6 ^ t6 - 1u)) >> 0x1fu;
    COW_AT(102cab4b)
            t16 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t16);
            t17 = esi + rd32(sp1 - 0x80u) * 8u + 4u;
            wr32(sp1 - 0xa0u, t17);
            wr32(sp1 - 0xb8u, edi);
            t18 = rd32(esi + rd32(sp1 - 0x7cu) * 8u);
            wr32(sp1 - 0x9cu, t18);
            t19 = t18 >> (rd32(t17) & 0x1fu) | rd32(esi + rd32(sp1 - 0x80u) * 8u);
            wr32(sp1 - 0xbcu, t19);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t19, edi, t16);
            t20 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xc0u, t20);
            t21 = edi + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x7cu) * 8u + 4u);
            wr32(sp1 - 0xc4u, t21);
            t22 = esi + rd32(sp1 - 0x78u) * 8u + 4u;
            t23 = rd32(sp1 - 0xa0u);
            wr32(sp1 - 0xa0u, t22);
            t24 = rd32(esi + rd32(sp1 - 0x74u) * 8u);
            wr32(sp1 - 0x9cu, t24);
            t25 = t24 >> (rd32(t22) & 0x1fu) | rd32(esi + rd32(sp1 - 0x78u) * 8u);
            wr32(sp1 - 0xc8u, t25);
            g->esp = sp1 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t25, t21, t20);
            t26 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xccu, t26);
            t27 = t21 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x74u) * 8u + 4u);
            wr32(sp1 - 0xd0u, t27);
            t28 = esi + rd32(sp1 - 0x70u) * 8u + 4u;
            t29 = rd32(sp1 - 0xa0u);
            wr32(sp1 - 0xa0u, t28);
            t30 = rd32(esi + rd32(sp1 - 0x6cu) * 8u);
            wr32(sp1 - 0x9cu, t30);
            t31 = t30 >> (rd32(t28) & 0x1fu) | rd32(esi + rd32(sp1 - 0x70u) * 8u);
            wr32(sp1 - 0xd4u, t31);
            g->esp = sp1 - 0xc8u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t31, t27, t26);
            t32 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xd8u, t32);
            t33 = t27 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x6cu) * 8u + 4u);
            wr32(sp1 - 0xdcu, t33);
            t34 = esi + rd32(sp1 - 0x68u) * 8u + 4u;
            t35 = rd32(sp1 - 0xa0u);
            wr32(sp1 - 0xa0u, t34);
            t36 = rd32(esi + rd32(sp1 - 0x64u) * 8u);
            wr32(sp1 - 0x9cu, t36);
            t37 = t36 >> (rd32(t34) & 0x1fu) | rd32(esi + rd32(sp1 - 0x68u) * 8u);
            wr32(sp1 - 0xe0u, t37);
            g->esp = sp1 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t37, t33, t32);
            edi = t33 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x64u) * 8u + 4u);
        }
        else
        {
            esi = t5;
            cf = t6 < 1u;
            pf = PARITY((uint8_t)(t6 - 1u));
            zf = t6 == 1u;
            sf = (int32_t)(t6 - 1u) < 0;
            of = ((t6 ^ 1u) & (t6 ^ t6 - 1u)) >> 0x1fu;
    COW_AT(102caa9e)
            t8 = rd32(sp1 - 0x7cu) + rd32(sp1 - 0x80u) * 4u;
            wr32(sp1 - 0x9cu, t8);
            t9 = rd32(sp1 - 0x74u) + rd32(sp1 - 0x78u) * 4u;
            wr32(sp1 - 0x8cu, t9);
            t10 = rd32(sp1 - 0x6cu) + rd32(sp1 - 0x70u) * 4u;
            wr32(sp1 - 0xa0u, t10);
            t11 = rd32(sp1 - 0x64u) + rd32(sp1 - 0x68u) * 4u;
            wr32(sp1 - 0x94u, t11);
            t12 = rd32(esi + t9 * 8u) >> (rd32(esi + t8 * 8u + 4u) & 0x1fu) | rd32(esi + t8 * 8u);
            wr32(sp1 - 0x9cu, t12);
            t13 = rd32(esi + t10 * 8u + 4u) + rd32(esi + t8 * 8u + 4u) + rd32(esi + t9 * 8u + 4u);
            wr32(sp1 - 0x9cu, t13);
            t14 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t14);
            wr32(sp1 - 0xb8u, edi);
            t15 = rd32(esi + t11 * 8u) >> (t13 & 0x1fu) | t12 | rd32(esi + t10 * 8u) >> (rd32(esi + t8 * 8u + 4u) + rd32(esi + t9 * 8u + 4u) & 0x1fu);
            wr32(sp1 - 0xbcu, t15);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t15, edi, t14);
            edi = edi + rd32(sp1 - 0x9cu) + rd32(esi + rd32(sp1 - 0x94u) * 8u + 4u);
        }
    COW_AT(102cac62)
        { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
        loc_4 = rd32(sp0 - 4u);
        al_mac = rd32(sp1 - 0xacu);
        al_mb0 = rd32(sp1 - 0xb0u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m98 = rd32(sp1 - 0x98u);
        al_m38 = rd32(sp1 - 0x38u);
    }
    COW_AT(102cac6d)
    wr32(sp1 - 0x84u, al_m84 + 1u);
    wr32(sp1 - 0x98u, al_m98 + 4u);
    if (al_m84 + 1u != al_m90)
    {
        al_m84 = al_m84 + 1u;
        al_m98 = al_m98 + 4u;
        goto L_102ca9e1;
    }
    eax = al_m84 + 1u;
    edx = al_m90;
    al_m84 = al_m84 + 1u;
    COW_AT(102cac8d)
    if (eax != rd32(arg1 + 0x100u))
    {
    COW_AT(102cac99)
        t38 = arg1 + eax * 4u;
        wr32(sp1 - 0x8cu, t38);
        t39 = COW_IMG(0x10344dccu) - arg1;
        wr32(sp1 - 0x34u, t39);
        eax = t38;
        al_m8c = t38;
        al_m34 = t39;
L_102cacab: ;
    COW_AT(102cacab)
        wr32(sp1 - 0xa0u, rd32(eax));
        if (rd32(eax) != 0u)
        {
            edx = rd32(eax);
            al_ma0 = rd32(eax);
    COW_AT(102cacb9)
            t40 = rd32(eax + 0x80u) * 0x2bu << 0x10u;
            t41 = rd32(COW_IMG(0x10344e4cu) + edx * 0xcu + (t40 >> 0x17u) * 0xcu - rd32(al_m8c + 0x80u) * 4u) - (t40 & 0x7f800000u);
            wr32(sp1 - 0x9cu, t41);
            wr32(sp1 - 0x80u, t41);
            t42 = rd32(COW_IMG(0x103cc0c8u) + edx * 8u);
            { /* movss xmm0, dword ptr [ecx] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
            { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
            { /* movaps xmmword ptr [esp + 0xa0], xmm0 */ uint32_t A = sp1 - 0x10u; wr128(A, g->xmm[0]); }
            { /* movaps xmm2, xmmword ptr [edx + 0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u) + al_ma0 * 0x10u; g->xmm[2] = rd128(A); }
            t43 = rd32(al_m38 + al_m8c);
            { /* movaps xmmword ptr [esp + 0x90], xmm2 */ uint32_t A = sp1 - 0x20u; wr128(A, g->xmm[2]); }
            t44 = arg1 + t43 * 4u + 0xc80u;
            wr32(sp1 - 0x88u, t44);
            t45 = arg1 + rd32(al_m34 + al_m8c) * 4u + 0xc80u;
            wr32(sp1 - 0x9cu, t45);
            if (al_ma0 != 1u)
            {
                eax = t44;
                esi = t42;
                al_m9c = t45;
                al_m80 = t41;
                al_m88 = t44;
                goto L_102caf51;
            }
            eax = t44;
            esi = t42;
            al_m9c = t45;
            al_m80 = t41;
            al_m88 = t44;
    COW_AT(102cad69)
L_102cad87: ;
    COW_AT(102cad87)
            { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[3] = rd128(A); }
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = eax + 0x10u; g->xmm[3] = rd128(A); }
            t46 = rd32(sp1 - 0x80u);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = eax + 0x20u; g->xmm[3] = rd128(A); }
            t47 = rd32(sp1 - 0x78u);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x50], xmm3 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax + 0x30u; g->xmm[3] = rd128(A); }
            t48 = rd32(sp1 - 0x7cu);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            t49 = rd32(sp1 - 0x74u);
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            t50 = t47 * 4u + t49;
            wr32(sp1 - 0x90u, t50);
            t51 = rd32(sp1 - 0x70u);
            t52 = rd32(sp1 - 0x6cu);
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x60], xmm3 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[3]); }
            t53 = t51 * 4u + t52;
            wr32(sp1 - 0x94u, t53);
            t54 = rd32(sp1 - 0x64u) + rd32(sp1 - 0x68u) * 4u;
            wr32(sp1 - 0xa0u, t54);
            t55 = rd32(esi + t46 * 0x20u + t48 * 8u + 4u);
            wr32(sp1 - 0x98u, t55);
            t56 = t55 + rd32(esi + t50 * 8u + 4u);
            wr32(sp1 - 0x98u, t56);
            t57 = t56 + rd32(esi + t53 * 8u + 4u);
            wr32(sp1 - 0x98u, t57);
            t58 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t58);
            wr32(sp1 - 0xb8u, edi);
            t59 = rd32(esi + t54 * 8u) >> (t57 & 0x1fu) | rd32(esi + t50 * 8u) >> (t55 & 0x1fu) | rd32(esi + t46 * 0x20u + t48 * 8u) | rd32(esi + t53 * 8u) >> (t56 & 0x1fu);
            wr32(sp1 - 0xbcu, t59);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t59, edi, t58);
            t60 = rd32(sp1 - 0x54u) + rd32(sp1 - 0x58u) * 4u;
            wr32(sp1 - 0x90u, t60);
            t61 = rd32(sp1 - 0x4cu) + rd32(sp1 - 0x50u) * 4u;
            wr32(sp1 - 0x94u, t61);
            t62 = rd32(sp1 - 0x44u) + rd32(sp1 - 0x48u) * 4u;
            t63 = rd32(sp1 - 0xa0u);
            wr32(sp1 - 0xa0u, t62);
            t64 = rd32(esi + rd32(sp1 - 0x5cu) * 8u + rd32(sp1 - 0x60u) * 0x20u + 4u);
            t65 = rd32(sp1 - 0x98u);
            wr32(sp1 - 0x98u, t64);
            t66 = t64 + rd32(esi + t60 * 8u + 4u);
            wr32(sp1 - 0x98u, t66);
            t67 = t66 + rd32(esi + t61 * 8u + 4u);
            wr32(sp1 - 0x98u, t67);
            t68 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xc0u, t68);
            t69 = edi + t65 + rd32(esi + t63 * 8u + 4u);
            wr32(sp1 - 0xc4u, t69);
            t70 = rd32(esi + t62 * 8u) >> (t67 & 0x1fu) | rd32(esi + t60 * 8u) >> (t64 & 0x1fu) | rd32(esi + rd32(sp1 - 0x5cu) * 8u + rd32(sp1 - 0x60u) * 0x20u) | rd32(esi + t61 * 8u) >> (t66 & 0x1fu);
            wr32(sp1 - 0xc8u, t70);
            g->esp = sp1 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t70, t69, t68);
            t71 = rd32(sp1 - 0x88u) + 0x40u;
            t72 = rd32(sp1 - 0x88u);
            wr32(sp1 - 0x88u, t71);
            if (t72 + 0x40u != rd32(sp1 - 0x9cu))
            {
                edi = t69 + rd32(sp1 - 0x98u) + rd32(esi + rd32(sp1 - 0xa0u) * 8u + 4u);
                al_m88 = t71;
                goto L_102cad6b;
            }
            edi = t69 + rd32(sp1 - 0x98u) + rd32(esi + rd32(sp1 - 0xa0u) * 8u + 4u);
    COW_AT(102caf30)
L_102cb1b8: ;
    COW_AT(102cb1b8)
            { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
            eax = rd32(sp1 - 0x8cu);
            loc_4 = rd32(sp0 - 4u);
            al_mac = rd32(sp1 - 0xacu);
            al_mb0 = rd32(sp1 - 0xb0u);
            al_m84 = rd32(sp1 - 0x84u);
            al_m38 = rd32(sp1 - 0x38u);
            al_m34 = rd32(sp1 - 0x34u);
        }
    COW_AT(102cb1c7)
        wr32(sp1 - 0x84u, al_m84 + 1u);
        wr32(sp1 - 0x8cu, eax + 4u);
        if (al_m84 + 1u != rd32(arg1 + 0x100u))
        {
            al_m84 = al_m84 + 1u;
            al_m8c = eax + 4u;
            eax = eax + 4u;
            goto L_102cacab;
        }
        edx = al_m84 + 1u;
    }
    COW_AT(102cb1e5)
    g->esi = al_mac;
    g->edi = al_mb0;
    g->ebp = loc_4;
    g->edx = edx;
    return edi;
L_102cad6b: ;
    COW_AT(102cad6b)
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x20u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    eax = al_m88;
    loc_4 = rd32(sp0 - 4u);
    al_mac = rd32(sp1 - 0xacu);
    al_mb0 = rd32(sp1 - 0xb0u);
    al_m84 = rd32(sp1 - 0x84u);
    al_m38 = rd32(sp1 - 0x38u);
    al_m8c = rd32(sp1 - 0x8cu);
    al_m34 = rd32(sp1 - 0x34u);
    al_m9c = rd32(sp1 - 0x9cu);
    al_m80 = rd32(sp1 - 0x80u);
    goto L_102cad87;
L_102caf35: ;
    COW_AT(102caf35)
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x20u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    eax = al_m88;
    loc_4 = rd32(sp0 - 4u);
    al_mac = rd32(sp1 - 0xacu);
    al_mb0 = rd32(sp1 - 0xb0u);
    al_m84 = rd32(sp1 - 0x84u);
    al_m38 = rd32(sp1 - 0x38u);
    al_m8c = rd32(sp1 - 0x8cu);
    al_m34 = rd32(sp1 - 0x34u);
    al_m9c = rd32(sp1 - 0x9cu);
    al_m80 = rd32(sp1 - 0x80u);
L_102caf51: ;
    COW_AT(102caf51)
    { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = eax + 0x10u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    t73 = rd32(arg1 + 0xb58u);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = eax + 0x20u; g->xmm[3] = rd128(A); }
    wr32(sp1 - 0xb4u, t73);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    t74 = rd32(sp1 - 0x7cu);
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    wr32(sp1 - 0xb8u, edi);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x58], xmm3 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax + 0x30u; g->xmm[3] = rd128(A); }
    t75 = rd32(sp1 - 0x80u);
    t76 = rd32(esi + t74 * 8u);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    t77 = esi + t75 * 8u + 4u;
    wr32(sp1 - 0xa0u, t77);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    t78 = rd32(t77);
    { /* movaps xmmword ptr [esp + 0x68], xmm3 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[3]); }
    t79 = t76 >> (t78 & 0x1fu) | rd32(esi + t75 * 8u);
    wr32(sp1 - 0xbcu, t79);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t79, edi, t73);
    t80 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xc0u, t80);
    t81 = edi + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x7cu) * 8u + 4u);
    wr32(sp1 - 0xc4u, t81);
    t82 = esi + rd32(sp1 - 0x78u) * 8u + 4u;
    t83 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t82);
    t84 = rd32(esi + rd32(sp1 - 0x74u) * 8u) >> (rd32(t82) & 0x1fu) | rd32(esi + rd32(sp1 - 0x78u) * 8u);
    wr32(sp1 - 0xc8u, t84);
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t84, t81, t80);
    t85 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xccu, t85);
    t86 = t81 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x74u) * 8u + 4u);
    wr32(sp1 - 0xd0u, t86);
    t87 = esi + rd32(sp1 - 0x70u) * 8u + 4u;
    t88 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t87);
    t89 = rd32(esi + rd32(sp1 - 0x6cu) * 8u) >> (rd32(t87) & 0x1fu) | rd32(esi + rd32(sp1 - 0x70u) * 8u);
    wr32(sp1 - 0xd4u, t89);
    g->esp = sp1 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t89, t86, t85);
    t90 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xd8u, t90);
    t91 = t86 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x6cu) * 8u + 4u);
    wr32(sp1 - 0xdcu, t91);
    t92 = esi + rd32(sp1 - 0x68u) * 8u + 4u;
    t93 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t92);
    t94 = rd32(esi + rd32(sp1 - 0x64u) * 8u) >> (rd32(t92) & 0x1fu) | rd32(esi + rd32(sp1 - 0x68u) * 8u);
    wr32(sp1 - 0xe0u, t94);
    g->esp = sp1 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t94, t91, t90);
    t95 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xe4u, t95);
    t96 = t91 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x64u) * 8u + 4u);
    wr32(sp1 - 0xe8u, t96);
    t97 = esi + rd32(sp1 - 0x60u) * 8u + 4u;
    t98 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t97);
    t99 = rd32(esi + rd32(sp1 - 0x5cu) * 8u) >> (rd32(t97) & 0x1fu) | rd32(esi + rd32(sp1 - 0x60u) * 8u);
    wr32(sp1 - 0xecu, t99);
    g->esp = sp1 - 0xe0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t99, t96, t95);
    t100 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xf0u, t100);
    t101 = t96 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x5cu) * 8u + 4u);
    wr32(sp1 - 0xf4u, t101);
    t102 = esi + rd32(sp1 - 0x58u) * 8u + 4u;
    t103 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t102);
    t104 = rd32(esi + rd32(sp1 - 0x54u) * 8u) >> (rd32(t102) & 0x1fu) | rd32(esi + rd32(sp1 - 0x58u) * 8u);
    wr32(sp1 - 0xf8u, t104);
    g->esp = sp1 - 0xecu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t104, t101, t100);
    t105 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xb4u, t105);
    t106 = t101 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x54u) * 8u + 4u);
    wr32(sp1 - 0xb8u, t106);
    t107 = esi + rd32(sp1 - 0x50u) * 8u + 4u;
    t108 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t107);
    t109 = rd32(esi + rd32(sp1 - 0x4cu) * 8u) >> (rd32(t107) & 0x1fu) | rd32(esi + rd32(sp1 - 0x50u) * 8u);
    wr32(sp1 - 0xbcu, t109);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t109, t106, t105);
    t110 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xc0u, t110);
    t111 = t106 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x4cu) * 8u + 4u);
    wr32(sp1 - 0xc4u, t111);
    t112 = esi + rd32(sp1 - 0x48u) * 8u + 4u;
    t113 = rd32(sp1 - 0xa0u);
    wr32(sp1 - 0xa0u, t112);
    t114 = rd32(esi + rd32(sp1 - 0x44u) * 8u) >> (rd32(t112) & 0x1fu) | rd32(esi + rd32(sp1 - 0x48u) * 8u);
    wr32(sp1 - 0xc8u, t114);
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t114, t111, t110);
    t115 = rd32(sp1 - 0x88u) + 0x40u;
    t116 = rd32(sp1 - 0x88u);
    wr32(sp1 - 0x88u, t115);
    if (t116 + 0x40u != rd32(sp1 - 0x9cu))
    {
        edi = t111 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x44u) * 8u + 4u);
        al_m88 = t115;
        goto L_102caf35;
    }
    edi = t111 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x44u) * 8u + 4u);
    goto L_102cb1b8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ca990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102ca9cbu:
    {
        uint32_t al_m90;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp1 - 0xb0u);
        in_esi = rd32(sp1 - 0xacu);
        al_m90 = rd32(sp1 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102ca9cfu:
    {
        uint32_t al_m90;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp1 - 0xb0u);
        in_esi = rd32(sp1 - 0xacu);
        al_m90 = rd32(sp1 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102ca9e1u:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ca9efu:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102caa9eu:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_m9c;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cab4bu:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_m9c;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cac62u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cac6du:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cac8du:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cac99u:
    {
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cacabu:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cacb9u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cad69u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m80;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_m9c;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m80 = rd32(sp1 - 0x80u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cad6bu:
    {
        uint32_t al_m88;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m88 = rd32(sp1 - 0x88u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cad87u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m80;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_m9c;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m80 = rd32(sp1 - 0x80u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102caf30u:
    {
        uint32_t al_m88;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m88 = rd32(sp1 - 0x88u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102caf35u:
    {
        uint32_t al_m88;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m88 = rd32(sp1 - 0x88u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102caf51u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m80;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_m9c;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m9c = rd32(sp1 - 0x9cu);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m80 = rd32(sp1 - 0x80u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cb1b8u:
    {
        uint32_t al_m88;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m88 = rd32(sp1 - 0x88u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cb1c7u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cb1e5u:
    {
        uint32_t al_m34;
        uint32_t al_m38;
        uint32_t al_m84;
        uint32_t al_m88;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t al_m98;
        uint32_t al_ma0;
        uint32_t al_mac;
        uint32_t al_mb0;
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_mb0 = rd32(sp1 - 0xb0u);
        al_mac = rd32(sp1 - 0xacu);
        al_ma0 = rd32(sp1 - 0xa0u);
        al_m98 = rd32(sp1 - 0x98u);
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m88 = rd32(sp1 - 0x88u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m38 = rd32(sp1 - 0x38u);
        al_m34 = rd32(sp1 - 0x34u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0xb0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ca990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
