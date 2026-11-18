/* f_0x1030b0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1030b0a0(Guest* g)
{
    double d10;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d19;
    double d21;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d63;
    double d68;
    double d7;
    double d73;
    double d78;
    double d8;
    double d83;
    double d88;
    double d93;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_10_f;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t4;
    uint32_t t41;
    uint32_t t5;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1030b0dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b0df;
    case 0x1030b118u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b118;
    case 0x1030b14bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b14b;
    case 0x1030b2c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b2c1;
    case 0x1030b2d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b2d2;
    case 0x1030b2e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x128u); in_esi = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x128u); g->esi = rd32(sp0 - 0x124u); goto E_1030b2e1;
    case 0x1030b478u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); goto E_1030b478;
    default: break;
    }
#endif

    COW_AT(1030b0a0)
    wr32(sp0 - 4u, in_ebp);
    t1 = rd32(rd32(sp0 + 4u) + 0x11cu) + 0x80u;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x120u, in_ebx);
    wr32(sp0 - 0x124u, in_esi);
    wr32(sp0 - 0x1cu, 8u);
    wr32(sp0 - 0x128u, in_edi);
    eax = sp0 - 0x11cu;
    ecx = rd32(rd32(sp0 + 8u) + 0x50u);
    edx = rd32(sp0 + 0xcu);
    esi = in_esi;
    loc_14 = t1;
    loc_1c = 8u;
    loc_10_f = (double)rdf32(sp0 - 0x10u);
    x1 = (double)rdf32(COW_IMG(0x103496a8u));
    x0 = (double)rdf32(COW_IMG(0x103456e8u));
L_1030b0df: ;
    COW_AT(1030b0df)
    if ((rd16(edx + 0x10u) | rd16(edx + 0x20u) | rd16(edx + 0x30u) | rd16(edx + 0x40u) | rd16(edx + 0x50u) | rd16(edx + 0x60u) | rd16(edx + 0x70u)) != 0u)
    {
        esi = (esi & 0xffff0000u) | rd16(edx + 0x70u);
        edi = rd16(edx + 0x60u);
    COW_AT(1030b14b)
        wr32(sp0 + 4u, (uint32_t)(int16_t)rd16(edx));
        t4 = (uint32_t)(int16_t)rd16(edx + 0x20u);
        t5 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t4);
        t6 = (uint32_t)(int16_t)rd16(edx + 0x40u);
        wr32(sp0 + 0xcu, t6);
        d7 = fr(g, (double)rdf32(ecx + 0x40u) * (double)(int32_t)rd32(sp0 + 4u));
        d8 = fr(g, (double)(int32_t)t5 * (double)rdf32(ecx));
        wrf32(sp0 + 4u, (float)d7);
        t9 = rd32(sp0 + 0xcu);
        d10 = (double)rdf32(ecx + 0x80u);
        wr32(sp0 + 0xcu, (uint32_t)(int16_t)edi);
        t11 = rd16(edx + 0x10u);
        d12 = fr(g, (double)rdf32(ecx + 0xc0u) * (double)(int32_t)rd32(sp0 + 0xcu));
        wrf32(sp0 + 0xcu, (float)d12);
        d13 = fr(g, d10 * (double)(int32_t)t9);
        wrf32(sp0 + 8u, (float)fr(g, d13 + d8));
        d14 = fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(sp0 + 4u));
        d15 = fr(g, d14 + (double)rdf32(sp0 + 8u));
        d16 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 0xcu)) * x0) - fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(sp0 + 4u)));
        wrf32(sp0 - 0x18u, (float)(double)(float)d15);
        d17 = (double)rdf32(sp0 + 8u);
        wr32(sp0 + 8u, (uint32_t)(int16_t)t11);
        t18 = rd16(edx + 0x30u);
        wrf32(sp0 + 0xcu, (float)fr(g, d17 - d14));
        wrf32(sp0 + 4u, (float)fr(g, d16 + fr(g, d8 - d13)));
        d19 = fr(g, d8 - d13);
        t20 = rd32(sp0 + 8u);
        d21 = (double)rdf32(ecx + 0x20u);
        wr32(sp0 + 8u, (uint32_t)(int16_t)t18);
        t22 = (uint32_t)(int16_t)rd16(edx + 0x50u);
        t23 = rd32(sp0 + 8u);
        d24 = (double)rdf32(ecx + 0x60u);
        wr32(sp0 + 8u, t22);
        d25 = fr(g, (double)rdf32(ecx + 0xa0u) * (double)(int32_t)rd32(sp0 + 8u));
        wr32(sp0 - 0x10u, (uint32_t)(int16_t)esi);
        wrf32(sp0 + 8u, (float)d25);
        d26 = fr(g, (double)rdf32(sp0 + 8u) + fr(g, d24 * (double)(int32_t)t23));
        d27 = fr(g, (double)rdf32(ecx + 0xe0u) * (double)(int32_t)(uint32_t)(int16_t)esi);
        wrf32(sp0 - 0xcu, (float)(double)(float)d26);
        d28 = fr(g, (double)rdf32(sp0 + 8u) - fr(g, d24 * (double)(int32_t)t23));
        wrf32(sp0 + 8u, (float)d28);
        d29 = (double)(float)fr(g, d27 + fr(g, d21 * (double)(int32_t)t20));
        wrf32(sp0 - 8u, (float)d29);
        d30 = fr(g, d21 * (double)(int32_t)t20);
        d31 = fr(g, d30 - d27);
        d32 = fr(g, fr(g, d31 + (double)rdf32(sp0 + 8u)) * x1);
        wrf32(sp0 - 0x10u, (float)(double)(float)d32);
        d33 = fr(g, fr(g, fr(g, d29 - (double)(float)d26) * x0) - fr(g, fr(g, (double)(float)d32 - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103496a4u)))) - fr(g, d29 + (double)(float)d26)));
        d34 = fr(g, fr(g, (double)(float)d32 - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103496a4u)))) - fr(g, d29 + (double)(float)d26));
        wrf32(sp0 - 8u, (float)(double)(float)d33);
        d35 = fr(g, fr(g, fr(g, d31 * (double)rdf32(COW_IMG(0x103496a0u))) - (double)(float)d32) + d33);
        wrf32(sp0 - 0xcu, (float)(double)(float)d35);
        d36 = fr(g, d29 + (double)(float)d26);
        wrf32(eax, (float)fr(g, d36 + (double)(float)d15));
        wrf32(eax + 0xe0u, (float)fr(g, (double)(float)d15 - d36));
        d37 = fr(g, (double)rdf32(sp0 + 4u) + d34);
        wrf32(eax + 0x20u, (float)d37);
        d38 = fr(g, (double)rdf32(sp0 + 4u) - d34);
        wrf32(eax + 0xc0u, (float)d38);
        wrf32(eax + 0x40u, (float)fr(g, (double)(float)d33 + fr(g, d19 - d16)));
        wrf32(eax + 0xa0u, (float)fr(g, fr(g, d19 - d16) - (double)(float)d33));
        d39 = fr(g, (double)(float)d35 + (double)rdf32(sp0 + 0xcu));
        wrf32(eax + 0x80u, (float)d39);
        d40 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)(float)d35);
        wrf32(eax + 0x60u, (float)d40);
        esi = (uint32_t)(int16_t)esi;
        loc_10_f = (double)(float)d32;
    }
    else
    {
    COW_AT(1030b118)
        t2 = rd16(edx);
        wr32(sp0 + 4u, (uint32_t)(int16_t)t2);
        d3 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(ecx));
        wrf32(eax, (float)d3);
        wrf32(eax + 0x20u, (float)d3);
        wrf32(eax + 0x40u, (float)d3);
        wrf32(eax + 0x60u, (float)d3);
        wrf32(eax + 0x80u, (float)d3);
        wrf32(eax + 0xa0u, (float)d3);
        wrf32(eax + 0xc0u, (float)d3);
        wrf32(eax + 0xe0u, (float)d3);
        esi = (uint32_t)(int16_t)t2;
    }
    COW_AT(1030b2c1)
    wr32(sp0 - 0x1cu, loc_1c - 1u);
    if (loc_1c != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx + 2u;
        loc_1c = loc_1c - 1u;
        goto L_1030b0df;
    }
    edx = edx + 2u;
    COW_AT(1030b2d2)
    wr32(sp0 - 0x10u, 0u);
    esi = sp0 - 0x114u;
    loc_10 = 0u;
L_1030b2e1: ;
    COW_AT(1030b2e1)
    t41 = rd32(arg4 + loc_10 * 4u);
    d42 = fr(g, (double)rdf32(esi + 8u) + (double)rdf32(esi - 8u));
    wrf32(sp0 + 8u, (float)d42);
    d43 = fr(g, (double)rdf32(esi) + (double)rdf32(esi + 0x10u));
    d44 = fr(g, d43 + (double)rdf32(sp0 + 8u));
    d45 = fr(g, fr(g, fr(g, (double)rdf32(esi) - (double)rdf32(esi + 0x10u)) * x0) - fr(g, (double)rdf32(esi) + (double)rdf32(esi + 0x10u)));
    d46 = fr(g, (double)rdf32(esi - 8u) - (double)rdf32(esi + 8u));
    wrf32(sp0 - 0x18u, (float)(double)(float)d44);
    d47 = fr(g, (double)rdf32(sp0 + 8u) - d43);
    wrf32(sp0 + 0xcu, (float)d47);
    wrf32(sp0 + 4u, (float)fr(g, d45 + d46));
    d48 = fr(g, (double)rdf32(esi + 0xcu) + (double)rdf32(esi + 4u));
    wrf32(sp0 - 0xcu, (float)(double)(float)d48);
    d49 = fr(g, (double)rdf32(esi + 0xcu) - (double)rdf32(esi + 4u));
    wrf32(sp0 + 8u, (float)d49);
    d50 = fr(g, (double)rdf32(esi + 0x14u) + (double)rdf32(esi - 4u));
    wrf32(sp0 - 8u, (float)(double)(float)d50);
    d51 = fr(g, (double)rdf32(esi - 4u) - (double)rdf32(esi + 0x14u));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d51);
    d52 = fr(g, fr(g, fr(g, fr(g, (double)(float)d51 + (double)rdf32(sp0 + 8u)) * x1) - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x103496a4u)))) - fr(g, d48 + (double)(float)d50));
    d53 = fr(g, fr(g, (double)(float)d51 + (double)rdf32(sp0 + 8u)) * x1);
    wrf32(sp0 + 8u, (float)d52);
    d54 = (double)(float)fr(g, fr(g, fr(g, (double)(float)d50 - (double)(float)d48) * x0) - d52);
    wrf32(sp0 - 8u, (float)d54);
    d55 = fr(g, fr(g, fr(g, (double)(float)d51 * (double)rdf32(COW_IMG(0x103496a0u))) - d53) + fr(g, fr(g, fr(g, (double)(float)d50 - (double)(float)d48) * x0) - d52));
    wrf32(sp0 - 0xcu, (float)(double)(float)d55);
    g->edx = edx;
    d56 = fr(g, (double)(float)d44 + fr(g, d48 + (double)(float)d50));
    d57 = fr(g, d48 + (double)(float)d50);
    d58 = fr(g, d46 - d45);
    fpush(g, d56);
    g->esp = sp0 - 0x128u;
    t59 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg4, g->ecx, g->edx, 1, 0);
    t60 = g->edx;
    t61 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t59 + 4u) >> 3u) & 0x3ffu));
    t62 = rd32(sp0 - 0x14u);
    d63 = fr(g, (double)rdf32(sp0 - 0x18u) - d57);
    wr8(arg5 + t41, (uint8_t)t61);
    g->edx = t60;
    fpush(g, d63);
    t64 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t59 + 4u) >> 3u) & 0x300u) | t61, g->ecx, g->edx, 1, 0);
    t65 = g->edx;
    t66 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t64 + 4u) >> 3u) & 0x3ffu));
    t67 = rd32(sp0 - 0x14u);
    d68 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 4u));
    wr8(arg5 + t41 + 7u, (uint8_t)t66);
    g->edx = t65;
    fpush(g, d68);
    t69 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t64 + 4u) >> 3u) & 0x300u) | t66, g->ecx, g->edx, 1, 0);
    t70 = g->edx;
    t71 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t69 + 4u) >> 3u) & 0x3ffu));
    t72 = rd32(sp0 - 0x14u);
    d73 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    wr8(arg5 + t41 + 1u, (uint8_t)t71);
    g->edx = t70;
    fpush(g, d73);
    t74 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t69 + 4u) >> 3u) & 0x300u) | t71, g->ecx, g->edx, 1, 0);
    t75 = g->edx;
    t76 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t74 + 4u) >> 3u) & 0x3ffu));
    t77 = rd32(sp0 - 0x14u);
    d78 = fr(g, (double)rdf32(sp0 - 8u) + d58);
    wr8(arg5 + t41 + 6u, (uint8_t)t76);
    g->edx = t75;
    fpush(g, d78);
    t79 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t74 + 4u) >> 3u) & 0x300u) | t76, g->ecx, g->edx, 1, 0);
    t80 = g->edx;
    t81 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t79 + 4u) >> 3u) & 0x3ffu));
    t82 = rd32(sp0 - 0x14u);
    d83 = fr(g, d58 - (double)rdf32(sp0 - 8u));
    wr8(arg5 + t41 + 2u, (uint8_t)t81);
    g->edx = t80;
    fpush(g, d83);
    t84 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t79 + 4u) >> 3u) & 0x300u) | t81, g->ecx, g->edx, 1, 0);
    t85 = g->edx;
    t86 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t84 + 4u) >> 3u) & 0x3ffu));
    t87 = rd32(sp0 - 0x14u);
    d88 = fr(g, (double)rdf32(sp0 - 0xcu) + (double)rdf32(sp0 + 0xcu));
    wr8(arg5 + t41 + 5u, (uint8_t)t86);
    g->edx = t85;
    fpush(g, d88);
    t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t84 + 4u) >> 3u) & 0x300u) | t86, g->ecx, g->edx, 1, 0);
    t90 = g->edx;
    t91 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t89 + 4u) >> 3u) & 0x3ffu));
    t92 = rd32(sp0 - 0x14u);
    d93 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 - 0xcu));
    wr8(arg5 + t41 + 4u, (uint8_t)t91);
    g->edx = t90;
    fpush(g, d93);
    t94 = cow_call_regs(g, COW_IMG(0x10311c6cu), ((uint32_t)((int32_t)(t89 + 4u) >> 3u) & 0x300u) | t91, g->ecx, g->edx, 1, 0);
    t95 = g->edx;
    t96 = rd32(sp0 - 0x10u) + 1u;
    wr32(sp0 - 0x10u, t96);
    t97 = rd8(rd32(sp0 - 0x14u) + ((uint32_t)((int32_t)(t94 + 4u) >> 3u) & 0x3ffu));
    wr8(arg5 + t41 + 3u, (uint8_t)t97);
    if ((int32_t)t96 < 8)
    {
        edx = t95;
        esi = esi + 0x20u;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = t96;
        goto L_1030b2e1;
    }
    eax = ((uint32_t)((int32_t)(t94 + 4u) >> 3u) & 0x300u) | t97;
    edx = t95;
    COW_AT(1030b478)
    g->ebx = rd32(sp0 - 0x120u);
    g->esi = rd32(sp0 - 0x124u);
    g->edi = rd32(sp0 - 0x128u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1030b0a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1030b0dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b118u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b14bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b2c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b2d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b2e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x128u);
        in_esi = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebx = 0x3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1030b478u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x128u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1030b0a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1030b0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
