/* f_0x1000b7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
/* COW_FRAME_ANSWER 0 of 16 */
uint32_t cow_fn_1000b7c0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d2;
    double d26;
    double d3;
    double d30;
    double d34;
    double d35;
    double d39;
    double d4;
    double d40;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000b7e8u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1000b7e8;
    case 0x1000b7f0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1000b7f0;
    case 0x1000b805u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1000b805;
    case 0x1000b830u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b830;
    case 0x1000b838u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b838;
    case 0x1000b84du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1000b84d;
    case 0x1000b878u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b878;
    case 0x1000b880u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b880;
    case 0x1000b891u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b891;
    case 0x1000b8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b8a1;
    case 0x1000b8aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1000b8aa;
    case 0x1000b8b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b8b5;
    case 0x1000b8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1000b8ce;
    case 0x1000b8d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b8d9;
    case 0x1000b8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b8f9;
    case 0x1000b905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b905;
    case 0x1000b90cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b90c;
    case 0x1000b929u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b929;
    case 0x1000b942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b942;
    case 0x1000b95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b95c;
    case 0x1000b978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b978;
    case 0x1000b992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b992;
    case 0x1000b9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b9ac;
    case 0x1000b9c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b9c8;
    case 0x1000b9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b9ec;
    case 0x1000b9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000b9fb;
    case 0x1000ba0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba0d;
    case 0x1000ba1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba1c;
    case 0x1000ba2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba2c;
    case 0x1000ba3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba3d;
    case 0x1000ba4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba4e;
    case 0x1000ba5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba5f;
    case 0x1000ba70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba70;
    case 0x1000ba82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba82;
    case 0x1000ba94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000ba94;
    case 0x1000baa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000baa2;
    case 0x1000bab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000bab4;
    case 0x1000bac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000bac4;
    case 0x1000bad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000bad4;
    case 0x1000bae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000bae7;
    case 0x1000baf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1000baf6;
    case 0x1000bb05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1000bb05;
    default: break;
    }
#endif

    COW_AT(1000b7c0)
    d1 = fr(g, (double)rdf32(COW_IMG(0x10456a9cu)) + (double)rdf32(sp0 + 4u));
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    d2 = fr(g, d1 - (double)rdf32(COW_IMG(0x10329a30u)));
    wrf32(sp0 - 8u, (float)(double)(float)d2);
    if (!(d2 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    COW_AT(1000b7e8)
        wr32(sp0 - 8u, 0x3c23d70au);
    }
    COW_AT(1000b7f0)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    d3 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 8u));
    d4 = rdf64(COW_IMG(0x10329a28u));
    fpush(g, d4);
    fpush(g, d3);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b805u);
    t5 = cow_stdcall(g, COW_IMG(0x10312cd0u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    eax = t5;
    ecx = t6;
    edx = t7;
    x0 = d8;
    COW_AT(1000b805)
    d9 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a20u)));
    wrf32(sp0 + 4u, (float)d9);
    d10 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10456a9cu)) + (double)rdf32(sp0 + 8u)) - (double)rdf32(COW_IMG(0x10329a30u)));
    wrf32(sp0 - 8u, (float)(double)(float)d10);
    if (!(d10 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    COW_AT(1000b830)
        wr32(sp0 - 8u, 0x3c23d70au);
    }
    COW_AT(1000b838)
    g->eax = eax;
    g->edx = edx;
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 8u));
    d12 = rdf64(COW_IMG(0x10329a28u));
    fpush(g, d12);
    fpush(g, d11);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b84du);
    t13 = cow_stdcall(g, COW_IMG(0x10312cd0u), 0);
    t14 = g->edx;
    d15 = cow_take_float(g);
    eax = t13;
    edx = t14;
    x0 = d15;
    COW_AT(1000b84d)
    d16 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a20u)));
    wrf32(sp0 + 8u, (float)d16);
    d17 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10456a9cu)) + (double)rdf32(sp0 + 0xcu)) - (double)rdf32(COW_IMG(0x10329a30u)));
    wrf32(sp0 - 8u, (float)(double)(float)d17);
    if (d17 < (double)rdf32(COW_IMG(0x10329a18u)))
    {
    COW_AT(1000b878)
        wr32(sp0 - 8u, 0x3c23d70au);
    }
    COW_AT(1000b880)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, 3u);
    wr32(sp0 - 0x1cu, 0x13u);
    t18 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t18);
    t19 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b891u);
    cow_thiscall(g, rd32(t19 + 0xc8u), t19, 3, t18, 0x13u, 3u);
    t20 = g->ecx;
    ecx = t20;
    COW_AT(1000b891)
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, 0x14u);
    t21 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t21);
    g->eax = t21;
    g->edx = rd32(t21);
    t22 = rd32(t21);
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b8a1u);
    t23 = cow_thiscall(g, rd32(t22 + 0xc8u), ecx, 3, t21, 0x14u, 4u);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(1000b8a1)
    g->ecx = ecx;
    g->edx = edx;
    d26 = (double)rdf32(sp0 + 4u);
    fpush(g, d26);
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b8aau);
    t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(1000b8aa)
    g->ecx = ecx;
    g->edx = edx;
    d30 = (double)rdf32(sp0 + 8u);
    fpush(g, d30);
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b8b5u);
    t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    ecx = t32;
    edx = t33;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)eax;
    eax = t31;
    COW_AT(1000b8b5)
    d34 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 8u));
    d35 = rdf64(COW_IMG(0x10329a28u));
    wr8(sp0 + 4u, (uint8_t)eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, d35);
    fpush(g, d34);
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b8ceu);
    t36 = cow_stdcall(g, COW_IMG(0x10312cd0u), 0);
    t37 = g->ecx;
    t38 = g->edx;
    d39 = cow_take_float(g);
    eax = t36;
    ecx = t37;
    edx = t38;
    x0 = d39;
    COW_AT(1000b8ce)
    g->edx = edx;
    d40 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d40);
    g->esp = sp0 - 0x14u;
    COW_RET(0x1000b8d9u);
    t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(1000b8d9)
    wr8(sp0 + 8u, (uint8_t)eax);
    eax = COW_IMG(0x1034ff60u);
    ecx = ((uint32_t)(uint8_t)ebx << 8u | rd8(sp0 + 4u)) << 8u | (uint8_t)rd32(sp0 + 8u);
    ebx = rd32(sp0 - 0x14u);
L_1000b8f9: ;
    COW_AT(1000b8f9)
    wr32(eax, ecx);
    if ((int32_t)(eax + 0x14u) < (int32_t)COW_IMG(0x1034ffb0u))
    {
        eax = eax + 0x14u;
        goto L_1000b8f9;
    }
    eax = eax + 0x14u;
    COW_AT(1000b905)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b90cu);
    t43 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    COW_AT(1000b90c)
    wr32(sp0 - 8u, rd32(eax));
    wr32(sp0 - 4u, 0u);
    t45 = rd32(eax);
    wrf32(COW_IMG(0x1034ff50u), (float)(double)(int64_t)cow_i64(t45, 0u));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b929u);
    t46 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    t47 = g->ecx;
    eax = t46;
    ecx = t47;
    COW_AT(1000b929)
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, rd32(eax));
    t48 = rd32(eax);
    wrf32(COW_IMG(0x1034ff78u), (float)(double)(int64_t)cow_i64(t48, 0u));
    g->eax = eax;
    g->edx = t48;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b942u);
    t49 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(1000b942)
    wr32(sp0 - 4u, 0u);
    t52 = rd32(eax + 8u);
    wr32(sp0 - 8u, t52);
    wrf32(COW_IMG(0x1034ff64u), (float)(double)(int64_t)cow_i64(t52, 0u));
    g->eax = t52;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b95cu);
    t53 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    COW_AT(1000b95c)
    wr32(sp0 - 4u, 0u);
    t55 = rd32(eax + 8u);
    wr32(sp0 - 8u, t55);
    wrf32(COW_IMG(0x1034ff8cu), (float)(double)(int64_t)cow_i64(t55, 0u));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b978u);
    t56 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    t57 = g->ecx;
    eax = t56;
    ecx = t57;
    COW_AT(1000b978)
    wr32(sp0 - 4u, 0u);
    t58 = rd32(eax + 4u);
    wr32(sp0 - 8u, t58);
    wrf32(COW_IMG(0x1034ff54u), (float)(double)(int64_t)cow_i64(t58, 0u));
    g->eax = eax;
    g->edx = t58;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b992u);
    t59 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(1000b992)
    wr32(sp0 - 4u, 0u);
    t62 = rd32(eax + 4u);
    wr32(sp0 - 8u, t62);
    wrf32(COW_IMG(0x1034ff68u), (float)(double)(int64_t)cow_i64(t62, 0u));
    g->eax = t62;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b9acu);
    t63 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
    t64 = g->edx;
    eax = t63;
    edx = t64;
    COW_AT(1000b9ac)
    wr32(sp0 - 4u, 0u);
    t65 = rd32(eax + 0xcu);
    wr32(sp0 - 8u, t65);
    wrf32(COW_IMG(0x1034ff7cu), (float)(double)(int64_t)cow_i64(t65, 0u));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b9c8u);
    t66 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    eax = t66;
    COW_AT(1000b9c8)
    wr32(sp0 - 4u, 0u);
    t67 = rd32(eax + 0xcu);
    wr32(sp0 - 8u, t67);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 7u);
    wrf32(COW_IMG(0x1034ff90u), (float)(double)(int64_t)cow_i64(t67, 0u));
    t68 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t68);
    t69 = rd32(t68);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b9ecu);
    cow_thiscall(g, rd32(t69 + 0xc8u), t69, 3, t68, 7u, 0u);
    t70 = g->ecx;
    ecx = t70;
    COW_AT(1000b9ec)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0xeu);
    t71 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t71);
    g->edx = rd32(t71);
    t72 = rd32(t71);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000b9fbu);
    cow_thiscall(g, rd32(t72 + 0xc8u), ecx, 3, t71, 0xeu, 0u);
    t73 = g->edx;
    edx = t73;
    COW_AT(1000b9fb)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x89u);
    t74 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t74);
    t75 = rd32(t74);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba0du);
    cow_thiscall(g, rd32(t75 + 0xc8u), t75, 3, t74, 0x89u, 0u);
    t76 = g->ecx;
    ecx = t76;
    COW_AT(1000ba0d)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x1cu);
    t77 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t77);
    g->edx = rd32(t77);
    t78 = rd32(t77);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba1cu);
    cow_thiscall(g, rd32(t78 + 0xc8u), ecx, 3, t77, 0x1cu, 0u);
    t79 = g->edx;
    edx = t79;
    COW_AT(1000ba1c)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x1bu);
    t80 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t80);
    t81 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba2cu);
    cow_thiscall(g, rd32(t81 + 0xc8u), t81, 3, t80, 0x1bu, 1u);
    t82 = g->ecx;
    ecx = t82;
    COW_AT(1000ba2c)
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    t83 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t83);
    g->edx = rd32(rd32(self + 0xcu));
    t84 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba3du);
    cow_thiscall(g, rd32(t84 + 0xfcu), ecx, 4, t83, 0u, 1u, 2u);
    t85 = g->edx;
    edx = t85;
    COW_AT(1000ba3d)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, 0u);
    t86 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t86);
    t87 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba4eu);
    cow_thiscall(g, rd32(t87 + 0xfcu), t87, 4, t86, 0u, 2u, 1u);
    t88 = g->ecx;
    ecx = t88;
    COW_AT(1000ba4e)
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, 0u);
    t89 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t89);
    g->edx = rd32(rd32(self + 0xcu));
    t90 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba5fu);
    cow_thiscall(g, rd32(t90 + 0xfcu), ecx, 4, t89, 0u, 4u, 2u);
    t91 = g->edx;
    edx = t91;
    COW_AT(1000ba5f)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 5u);
    wr32(sp0 - 0x1cu, 0u);
    t92 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t92);
    t93 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba70u);
    cow_thiscall(g, rd32(t93 + 0xfcu), t93, 4, t92, 0u, 5u, 1u);
    t94 = g->ecx;
    ecx = t94;
    COW_AT(1000ba70)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t95 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t95);
    g->edx = rd32(rd32(self + 0xcu));
    t96 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba82u);
    cow_thiscall(g, rd32(t96 + 0xfcu), ecx, 4, t95, 1u, 1u, 1u);
    t97 = g->edx;
    edx = t97;
    COW_AT(1000ba82)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, 1u);
    t98 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t98);
    t99 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000ba94u);
    cow_thiscall(g, rd32(t99 + 0xfcu), t99, 4, t98, 1u, 4u, 1u);
    t100 = g->ecx;
    ecx = t100;
    COW_AT(1000ba94)
    wr32(sp0 - 0x14u, 0x44u);
    t101 = rd32(self + 0xcu);
    wr32(sp0 - 0x18u, t101);
    g->eax = t101;
    g->edx = rd32(t101);
    t102 = rd32(t101);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000baa2u);
    t103 = cow_thiscall(g, rd32(t102 + 0x130u), ecx, 2, t101, 0x44u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(1000baa2)
    wr32(sp0 - 0x14u, 0x14u);
    wr32(sp0 - 0x18u, COW_IMG(0x1034ff50u));
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 5u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000bab4u);
    cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x1034ff50u), 0x14u);
    t105 = g->edx;
    edx = t105;
    COW_AT(1000bab4)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 7u);
    t106 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t106);
    t107 = rd32(t106);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000bac4u);
    cow_thiscall(g, rd32(t107 + 0xc8u), t107, 3, t106, 7u, 1u);
    t108 = g->ecx;
    ecx = t108;
    COW_AT(1000bac4)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0xeu);
    t109 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t109);
    g->edx = rd32(t109);
    t110 = rd32(t109);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000bad4u);
    cow_thiscall(g, rd32(t110 + 0xc8u), ecx, 3, t109, 0xeu, 1u);
    t111 = g->edx;
    edx = t111;
    COW_AT(1000bad4)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x89u);
    t112 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t112);
    t113 = rd32(t112);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000bae7u);
    cow_thiscall(g, rd32(t113 + 0xc8u), t113, 3, t112, 0x89u, 1u);
    t114 = g->ecx;
    ecx = t114;
    COW_AT(1000bae7)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x1cu);
    t115 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t115);
    g->edx = rd32(t115);
    t116 = rd32(t115);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000baf6u);
    cow_thiscall(g, rd32(t116 + 0xc8u), ecx, 3, t115, 0x1cu, 0u);
    t117 = g->ecx;
    t118 = g->edx;
    ecx = t117;
    edx = t118;
    COW_AT(1000baf6)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x1bu);
    t119 = rd32(self + 0xcu);
    wr32(sp0 - 0x1cu, t119);
    g->eax = rd32(rd32(self + 0xcu));
    g->edx = edx;
    t120 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0x10u;
    COW_RET(0x1000bb05u);
    t121 = cow_thiscall(g, rd32(t120 + 0xc8u), ecx, 3, t119, 0x1bu, 0u);
    t122 = g->edx;
    eax = t121;
    edx = t122;
    COW_AT(1000bb05)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000b7c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000b7e8u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1000b7f0u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1000b805u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b830u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b838u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b84du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b878u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b880u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b891u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1000b8f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b905u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b90cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000b929u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b942u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b95cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b978u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b992u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b9acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b9c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b9ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b9fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba70u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000ba94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000baa2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000bab4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000bac4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000bad4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000bae7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000baf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000bb05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000b7c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000b7c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
