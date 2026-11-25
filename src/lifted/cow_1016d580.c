/* f_0x1016d580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1016d580(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
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
    double d4;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d5;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016d59cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x114u); goto E_1016d59c;
    case 0x1016dc1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc1d;
    case 0x1016dc35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc35;
    case 0x1016dc4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc4d;
    case 0x1016dc65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc65;
    case 0x1016dc7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc7d;
    case 0x1016dc95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dc95;
    case 0x1016dcb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016dcb0;
    case 0x1016dcb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016dcb4;
    case 0x1016dd9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016dd9f;
    case 0x1016ddafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016ddaf;
    case 0x1016ddccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016ddcc;
    case 0x1016ddddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); goto E_1016dddd;
    default: break;
    }
#endif

    COW_AT(1016d580)
    wr32(sp0 - 0x110u, in_ebp);
    wr32(sp0 - 0x114u, in_edi);
    if ((int32_t)rd32(self + 0x34120u) >= 1020)
    {
        ebx = in_ebx;
        esi = in_esi;
        loc_110 = in_ebp;
        loc_114 = in_edi;
    }
    else
    {
        edi = rd32(self + 0x34120u);
    COW_AT(1016d59c)
        wr32(sp0 - 0x118u, in_ebx);
        wr32(sp0 - 0x11cu, in_esi);
        wr32(sp0 - 0xfcu, 0u);
        d1 = fr(g, cos((double)rdf32(arg4)));
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xdcu, 0u);
        wr32(sp0 - 0xccu, 0x3f800000u);
        d2 = fr(g, sin((double)rdf32(arg4 + 8u)));
        d3 = fr(g, sin((double)rdf32(arg4 + 4u)));
        d4 = fr(g, sin((double)rdf32(arg4)));
        d5 = fr(g, cos((double)rdf32(arg4 + 8u)));
        d6 = fr(g, cos((double)rdf32(arg4 + 4u)));
        wr32(sp0 - 0xd8u, rd32(arg3));
        t7 = rd32(arg3 + 8u);
        wr32(sp0 - 0xd0u, t7);
        t8 = rd32(arg3 + 4u);
        wr32(sp0 - 0xd4u, t8);
        d9 = (double)(float)fr(g, d5 * d6);
        wrf32(sp0 - 0x108u, (float)d9);
        g->st[g->top & 7u] = fr(g, d2 * d1);
        d10 = (double)(float)fr(g, fr(g, fr(g, d3 * d4) * d5) - fr(g, d2 * d1));
        wrf32(sp0 - 0xf8u, (float)d10);
        g->st[g->top & 7u] = fr(g, d2 * d4);
        d11 = (double)(float)fr(g, fr(g, fr(g, d3 * d5) * d1) + fr(g, d2 * d4));
        wrf32(sp0 - 0xe8u, (float)d11);
        d12 = (double)(float)fr(g, d2 * d6);
        wrf32(sp0 - 0x104u, (float)d12);
        d13 = fr(g, d2 * d3);
        g->st[g->top & 7u] = fr(g, d13 * d4);
        d14 = (double)(float)fr(g, fr(g, d5 * d1) + fr(g, d13 * d4));
        wrf32(sp0 - 0xf4u, (float)d14);
        d15 = (double)(float)fr(g, fr(g, d13 * d1) - fr(g, d4 * d5));
        wrf32(sp0 - 0xe4u, (float)d15);
        wrf32(sp0 - 0x100u, (float)(double)(float)-d3);
        d16 = (double)(float)fr(g, d4 * d6);
        wrf32(sp0 - 0xf0u, (float)d16);
        d17 = (double)(float)fr(g, d6 * d1);
        wrf32(sp0 - 0xe0u, (float)d17);
        d18 = (double)(float)(double)rdf32(arg2 + 4u);
        wrf32(sp0 - 0xb4u, (float)d18);
        d19 = (double)(float)(double)rdf32(arg2 + 0x14u);
        wrf32(sp0 - 0xacu, (float)d19);
        d20 = (double)(float)(double)rdf32(arg2 + 0x10u);
        wrf32(sp0 - 0xa0u, (float)d20);
        d21 = (double)(float)(double)rdf32(arg2 + 4u);
        wrf32(sp0 - 0x9cu, (float)d21);
        d22 = (double)(float)(double)rdf32(arg2 + 0x10u);
        wrf32(sp0 - 0x94u, (float)d22);
        d23 = (double)(float)(double)rdf32(arg2 + 0xcu);
        wrf32(sp0 - 0x8cu, (float)d23);
        d24 = (double)(float)(double)rdf32(arg2 + 0x14u);
        wrf32(sp0 - 0x88u, (float)d24);
        d25 = (double)(float)(double)rdf32(arg2 + 4u);
        wrf32(sp0 - 0x84u, (float)d25);
        d26 = (double)(float)(double)rdf32(arg2 + 0xcu);
        wrf32(sp0 - 0x80u, (float)d26);
        d27 = (double)(float)(double)rdf32(arg2 + 0x14u);
        wrf32(sp0 - 0x7cu, (float)d27);
        d28 = (double)(float)(double)rdf32(arg2 + 0xcu);
        wrf32(sp0 - 0x74u, (float)d28);
        d29 = (double)(float)(double)rdf32(arg2 + 0x10u);
        wrf32(sp0 - 0x70u, (float)d29);
        d30 = (double)(float)(double)rdf32(arg2 + 4u);
        wrf32(sp0 - 0x6cu, (float)d30);
        d31 = (double)(float)(double)rdf32(arg2 + 0xcu);
        wrf32(sp0 - 0x68u, (float)d31);
        d32 = (double)(float)(double)rdf32(arg2 + 0x10u);
        wrf32(sp0 - 0x64u, (float)d32);
        d33 = fr(g, d10 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wr32(sp0 - 0xa8u, rd32(arg2));
        wr32(sp0 - 0x90u, rd32(arg2));
        wr32(sp0 - 0x78u, rd32(arg2));
        wrf32(sp0 - 0xc4u, (float)(double)(float)d33);
        d34 = fr(g, fr(g, fr(g, fr(g, d11 * (double)rdf32(arg2 + 0x14u)) + fr(g, d9 * (double)rdf32(arg2))) + (double)(float)d33) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x60u, (float)(double)(float)d34);
        d35 = fr(g, d14 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0xc8u, (float)(double)(float)d35);
        d36 = fr(g, fr(g, fr(g, fr(g, d15 * (double)rdf32(arg2 + 0x14u)) + fr(g, d12 * (double)rdf32(arg2))) + (double)(float)d35) + cow_bits2f(t8));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d36);
        d37 = fr(g, d16 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0x10cu, (float)(double)(float)d37);
        d38 = fr(g, fr(g, fr(g, fr(g, d17 * (double)rdf32(arg2 + 0x14u)) + fr(g, (double)(float)-d3 * (double)rdf32(arg2))) + (double)(float)d37) + cow_bits2f(t7));
        wrf32(sp0 - 0x58u, (float)(double)(float)d38);
        d39 = fr(g, fr(g, fr(g, fr(g, d11 * d19) + fr(g, d9 * d18)) + (double)(float)d33) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x54u, (float)(double)(float)d39);
        d40 = (double)(float)fr(g, fr(g, fr(g, fr(g, d15 * d19) + fr(g, d12 * d18)) + (double)(float)d35) + cow_bits2f(t8));
        wrf32(sp0 - 0x50u, (float)d40);
        d41 = (double)(float)fr(g, fr(g, fr(g, fr(g, d17 * d19) + fr(g, (double)(float)-d3 * d18)) + (double)(float)d37) + cow_bits2f(t7));
        wrf32(sp0 - 0x4cu, (float)d41);
        d42 = fr(g, fr(g, fr(g, fr(g, d11 * d20) + fr(g, d9 * cow_bits2f(rd32(arg2)))) + (double)(float)d33) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x48u, (float)(double)(float)d42);
        d43 = fr(g, fr(g, fr(g, fr(g, d15 * d20) + fr(g, d12 * cow_bits2f(rd32(arg2)))) + (double)(float)d35) + cow_bits2f(t8));
        wrf32(sp0 - 0x44u, (float)(double)(float)d43);
        d44 = fr(g, fr(g, fr(g, fr(g, d17 * d20) + fr(g, (double)(float)-d3 * cow_bits2f(rd32(arg2)))) + (double)(float)d37) + cow_bits2f(t7));
        wrf32(sp0 - 0x40u, (float)(double)(float)d44);
        d45 = fr(g, fr(g, fr(g, fr(g, d11 * d22) + fr(g, d9 * d21)) + (double)(float)d33) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d45);
        d46 = (double)(float)fr(g, fr(g, fr(g, fr(g, d15 * d22) + fr(g, d12 * d21)) + (double)(float)d35) + cow_bits2f(t8));
        wrf32(sp0 - 0x38u, (float)d46);
        d47 = (double)(float)fr(g, fr(g, fr(g, fr(g, d17 * d22) + fr(g, (double)(float)-d3 * d21)) + (double)(float)d37) + cow_bits2f(t7));
        wrf32(sp0 - 0x34u, (float)d47);
        d48 = fr(g, fr(g, fr(g, fr(g, d11 * d24) + fr(g, d10 * d23)) + fr(g, d9 * cow_bits2f(rd32(arg2)))) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x30u, (float)(double)(float)d48);
        d49 = fr(g, fr(g, fr(g, fr(g, d15 * d24) + fr(g, d14 * d23)) + fr(g, d12 * cow_bits2f(rd32(arg2)))) + cow_bits2f(t8));
        wrf32(sp0 - 0x2cu, (float)(double)(float)d49);
        d50 = fr(g, fr(g, fr(g, fr(g, d17 * d24) + fr(g, d16 * d23)) + fr(g, (double)(float)-d3 * cow_bits2f(rd32(arg2)))) + cow_bits2f(t7));
        wrf32(sp0 - 0x28u, (float)(double)(float)d50);
        d51 = fr(g, fr(g, fr(g, fr(g, d11 * d27) + fr(g, d10 * d26)) + fr(g, d9 * d25)) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x24u, (float)(double)(float)d51);
        d52 = (double)(float)fr(g, fr(g, fr(g, fr(g, d15 * d27) + fr(g, d14 * d26)) + fr(g, d12 * d25)) + cow_bits2f(t8));
        wrf32(sp0 - 0x20u, (float)d52);
        d53 = (double)(float)fr(g, fr(g, fr(g, fr(g, d17 * d27) + fr(g, d16 * d26)) + fr(g, (double)(float)-d3 * d25)) + cow_bits2f(t7));
        wrf32(sp0 - 0x1cu, (float)d53);
        d54 = fr(g, fr(g, fr(g, fr(g, d11 * d29) + fr(g, d10 * d28)) + fr(g, d9 * cow_bits2f(rd32(arg2)))) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x18u, (float)(double)(float)d54);
        d55 = fr(g, fr(g, fr(g, fr(g, d15 * d29) + fr(g, d14 * d28)) + fr(g, d12 * cow_bits2f(rd32(arg2)))) + cow_bits2f(t8));
        wrf32(sp0 - 0x14u, (float)(double)(float)d55);
        d56 = fr(g, fr(g, fr(g, fr(g, d17 * d29) + fr(g, d16 * d28)) + fr(g, (double)(float)-d3 * cow_bits2f(rd32(arg2)))) + cow_bits2f(t7));
        wrf32(sp0 - 0x10u, (float)(double)(float)d56);
        d57 = fr(g, fr(g, fr(g, fr(g, d11 * d32) + fr(g, d10 * d31)) + fr(g, d9 * d30)) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0xcu, (float)(double)(float)d57);
        d58 = (double)(float)fr(g, fr(g, fr(g, fr(g, d15 * d32) + fr(g, d14 * d31)) + fr(g, d12 * d30)) + cow_bits2f(t8));
        wrf32(sp0 - 8u, (float)d58);
        d59 = (double)(float)fr(g, fr(g, fr(g, fr(g, d17 * d32) + fr(g, d16 * d31)) + fr(g, (double)(float)-d3 * d30)) + cow_bits2f(t7));
        wrf32(sp0 - 4u, (float)d59);
        d60 = fr(g, fr(g, fr(g, fr(g, (double)(float)d34 * (double)rdf32(arg1)) + fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x20u))) + fr(g, (double)(float)d36 * (double)rdf32(arg1 + 0x10u))) + (double)rdf32(arg1 + 0x30u));
        wrf32(sp0 - 0xc0u, (float)(double)(float)d60);
        d61 = fr(g, fr(g, fr(g, fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x24u)) + fr(g, (double)(float)d36 * (double)rdf32(arg1 + 0x14u))) + fr(g, (double)(float)d34 * (double)rdf32(arg1 + 4u))) + (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 0xbcu, (float)(double)(float)d61);
        d62 = fr(g, fr(g, fr(g, fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x28u)) + fr(g, (double)(float)d36 * (double)rdf32(arg1 + 0x18u))) + fr(g, (double)(float)d34 * (double)rdf32(arg1 + 8u))) + (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0xb8u, (float)(double)(float)d62);
        d63 = fr(g, fr(g, fr(g, fr(g, d41 * (double)rdf32(arg1 + 0x20u)) + fr(g, (double)(float)d39 * (double)rdf32(arg1))) + fr(g, d40 * (double)rdf32(arg1 + 0x10u))) + (double)rdf32(arg1 + 0x30u));
        wrf32(sp0 - 0xb4u, (float)(double)(float)d63);
        d64 = fr(g, fr(g, fr(g, fr(g, d40 * (double)rdf32(arg1 + 0x14u)) + fr(g, (double)(float)d39 * (double)rdf32(arg1 + 4u))) + fr(g, d41 * (double)rdf32(arg1 + 0x24u))) + (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 0xb0u, (float)(double)(float)d64);
        d65 = fr(g, (double)(float)d39 * (double)rdf32(arg1 + 8u));
        d66 = fr(g, d40 * (double)rdf32(arg1 + 0x18u));
        wr32(sp0 - 0x120u, sp0 - 0x48u);
        wr32(sp0 - 0x124u, arg1);
        d67 = fr(g, d41 * (double)rdf32(arg1 + 0x28u));
        wr32(sp0 - 0x128u, sp0 - 0xa8u);
        d68 = fr(g, fr(g, fr(g, d66 + d65) + d67) + (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0xacu, (float)(double)(float)d68);
        g->eax = sp0 - 0xa8u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc1du);
        t69 = cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0xa8u, arg1, sp0 - 0x48u);
        eax = t69;
    COW_AT(1016dc1d)
        wr32(sp0 - 0x120u, sp0 - 0x3cu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x9cu);
        g->edx = sp0 - 0x9cu;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc35u);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x9cu, arg1, sp0 - 0x3cu);
        t70 = g->edx;
        edx = t70;
    COW_AT(1016dc35)
        wr32(sp0 - 0x120u, sp0 - 0x30u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc4du);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x90u, arg1, sp0 - 0x30u);
    COW_AT(1016dc4d)
        wr32(sp0 - 0x120u, sp0 - 0x24u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x84u);
        g->eax = sp0 - 0x84u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc65u);
        t71 = cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x84u, arg1, sp0 - 0x24u);
        eax = t71;
    COW_AT(1016dc65)
        wr32(sp0 - 0x120u, sp0 - 0x18u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x78u);
        g->edx = sp0 - 0x78u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc7du);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x78u, arg1, sp0 - 0x18u);
        t72 = g->edx;
        edx = t72;
    COW_AT(1016dc7d)
        wr32(sp0 - 0x120u, sp0 - 0xcu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x6cu);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dc95u);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x6cu, arg1, sp0 - 0xcu);
    COW_AT(1016dc95)
        t73 = edi * 0x68u + self + 0x1a120u;
        wr32(sp0 - 0x10cu, t73);
        ecx = t73;
        ebx = t73 + 0x18u;
        edi = COW_IMG(0x103769cau);
        loc_10c = t73;
L_1016dcb4: ;
    COW_AT(1016dcb4)
        t74 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi - 2u) * 0xcu - 0xc0u);
        t75 = rd16(edi - 2u);
        wr32(ecx, t74);
        t76 = rd32(sp0 + (uint32_t)(int16_t)t75 * 0xcu - 0xbcu);
        wr32(ecx + 4u, t76);
        t77 = rd32(sp0 + (uint32_t)(int16_t)t75 * 0xcu - 0xb8u);
        wr32(ecx + 8u, t77);
        t78 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi) * 0xcu - 0xc0u);
        t79 = rd16(edi);
        wr32(ebx - 0xcu, t78);
        t80 = rd32(sp0 + (uint32_t)(int16_t)t79 * 0xcu - 0xbcu);
        wr32(ebx - 8u, t80);
        t81 = rd32(sp0 + (uint32_t)(int16_t)t79 * 0xcu - 0xb8u);
        wr32(ebx - 4u, t81);
        t82 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi + 2u) * 0xcu - 0xc0u);
        t83 = rd16(edi + 2u);
        wr32(ebx, t82);
        t84 = rd32(sp0 + (uint32_t)(int16_t)t83 * 0xcu - 0xbcu);
        wr32(ebx + 4u, t84);
        t85 = rd32(sp0 + (uint32_t)(int16_t)t83 * 0xcu - 0xb8u);
        wr32(ebx + 8u, t85);
        t86 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi - 2u) * 0xcu - 0x60u);
        t87 = rd16(edi - 2u);
        wr32(ebx + 0x18u, t86);
        t88 = rd32(sp0 + (uint32_t)(int16_t)t87 * 0xcu - 0x5cu);
        wr32(ebx + 0x1cu, t88);
        t89 = rd32(sp0 + (uint32_t)(int16_t)t87 * 0xcu - 0x58u);
        wr32(ebx + 0x20u, t89);
        t90 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi) * 0xcu - 0x60u);
        t91 = rd16(edi);
        wr32(ebx + 0x24u, t90);
        t92 = rd32(sp0 + (uint32_t)(int16_t)t91 * 0xcu - 0x5cu);
        wr32(ebx + 0x28u, t92);
        t93 = rd32(sp0 + (uint32_t)(int16_t)t91 * 0xcu - 0x58u);
        wr32(ebx + 0x2cu, t93);
        t94 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi + 2u) * 0xcu - 0x60u);
        t95 = rd16(edi + 2u);
        wr32(ebx + 0x30u, t94);
        t96 = rd32(sp0 + (uint32_t)(int16_t)t95 * 0xcu - 0x5cu);
        wr32(ebx + 0x34u, t96);
        t97 = rd32(sp0 + (uint32_t)(int16_t)t95 * 0xcu - 0x58u);
        wr32(ebx + 0x38u, t97);
        t98 = COW_IMG(0x10376a28u) + (uint32_t)(int16_t)rd16(edi + 4u) * 0xcu;
        wr32(sp0 - 0x120u, t98);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        wr32(sp0 - 0x128u, ebx + 0x3cu);
        g->edx = sp0 - 0x108u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016dd9fu);
        cow_stdcall(g, COW_IMG(0x1016d4c0u), 3, ebx + 0x3cu, sp0 - 0x108u, t98);
        t99 = g->edx;
        edx = t99;
    COW_AT(1016dd9f)
        wr32(sp0 - 0x120u, ebx + 0x3cu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, ebx + 0xcu);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016ddafu);
        cow_stdcall(g, COW_IMG(0x1016d4c0u), 3, ebx + 0xcu, arg1, ebx + 0x3cu);
    COW_AT(1016ddaf)
        t100 = rd32(sp0 - 0x10cu) + 0x68u;
        wr32(sp0 - 0x10cu, t100);
        if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x10376a2au))
        {
            ebx = ebx + 0x68u;
            edi = edi + 8u;
            loc_10c = t100;
            goto L_1016dcb0;
        }
    COW_AT(1016ddcc)
        t101 = rd32(self + 0x34120u) + 0xcu;
        t102 = rd32(sp0 - 0x118u);
        t103 = rd32(sp0 - 0x11cu);
        wr32(self + 0x34120u, t101);
        ebx = t102;
        esi = t103;
        loc_110 = rd32(sp0 - 0x110u);
        loc_114 = rd32(sp0 - 0x114u);
    }
    COW_AT(1016dddd)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_114;
    g->ebp = loc_110;
    return;
L_1016dcb0: ;
    COW_AT(1016dcb0)
    ecx = loc_10c;
    goto L_1016dcb4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016d580(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016d59cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1016dc1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dc35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dc4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dc65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dc7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dc95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dcb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dcb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016dd9fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016ddafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016ddccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x1016ddddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016d580(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1016d580(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
