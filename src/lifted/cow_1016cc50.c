/* f_0x1016cc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1016cc50(Guest* g)
{
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
    double d69;
    double d7;
    double d70;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t t1;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t34;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
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
    case 0x1016cc69u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x110u); g->ebp = rd32(sp0 - 0x110u); goto E_1016cc69;
    case 0x1016d2edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d2ed;
    case 0x1016d305u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d305;
    case 0x1016d31du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d31d;
    case 0x1016d335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d335;
    case 0x1016d34du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d34d;
    case 0x1016d365u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d365;
    case 0x1016d386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016d386;
    case 0x1016d38au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016d38a;
    case 0x1016d475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d475;
    case 0x1016d485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_1016d485;
    case 0x1016d4a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_1016d4a2;
    case 0x1016d4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); goto E_1016d4b4;
    default: break;
    }
#endif

    COW_AT(1016cc50)
    wr32(sp0 - 0x110u, in_ebp);
    t1 = rd32(self + 0x34120u);
    if ((int32_t)t1 >= 1020)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_110 = in_ebp;
    }
    else
    {
    COW_AT(1016cc69)
        wr32(sp0 - 0x114u, in_ebx);
        wr32(sp0 - 0x118u, in_esi);
        wr32(sp0 - 0x11cu, in_edi);
        d2 = fr(g, cos((double)rdf32(arg4)));
        wr32(sp0 - 0xfcu, 0u);
        wr32(sp0 - 0xecu, 0u);
        wr32(sp0 - 0xdcu, 0u);
        wr32(sp0 - 0xccu, 0x3f800000u);
        d3 = fr(g, sin((double)rdf32(arg4 + 8u)));
        d4 = fr(g, sin((double)rdf32(arg4 + 4u)));
        d5 = fr(g, sin((double)rdf32(arg4)));
        d6 = fr(g, cos((double)rdf32(arg4 + 8u)));
        d7 = fr(g, cos((double)rdf32(arg4 + 4u)));
        wr32(sp0 - 0xd8u, rd32(arg3));
        t8 = rd32(arg3 + 8u);
        wr32(sp0 - 0xd0u, t8);
        t9 = rd32(arg3 + 4u);
        wr32(sp0 - 0xd4u, t9);
        d10 = (double)(float)fr(g, d6 * d7);
        wrf32(sp0 - 0x108u, (float)d10);
        g->st[g->top & 7u] = fr(g, d3 * d2);
        d11 = (double)(float)fr(g, fr(g, fr(g, d4 * d5) * d6) - fr(g, d3 * d2));
        wrf32(sp0 - 0xf8u, (float)d11);
        g->st[g->top & 7u] = fr(g, d3 * d5);
        d12 = (double)(float)fr(g, fr(g, fr(g, d4 * d6) * d2) + fr(g, d3 * d5));
        wrf32(sp0 - 0xe8u, (float)d12);
        d13 = (double)(float)fr(g, d3 * d7);
        wrf32(sp0 - 0x104u, (float)d13);
        d14 = fr(g, d3 * d4);
        g->st[g->top & 7u] = fr(g, d14 * d5);
        d15 = (double)(float)fr(g, fr(g, d6 * d2) + fr(g, d14 * d5));
        wrf32(sp0 - 0xf4u, (float)d15);
        d16 = (double)(float)fr(g, fr(g, d14 * d2) - fr(g, d5 * d6));
        wrf32(sp0 - 0xe4u, (float)d16);
        wrf32(sp0 - 0x100u, (float)(double)(float)-d4);
        d17 = (double)(float)fr(g, d5 * d7);
        wrf32(sp0 - 0xf0u, (float)d17);
        d18 = (double)(float)fr(g, d7 * d2);
        wrf32(sp0 - 0xe0u, (float)d18);
        d19 = (double)(float)(double)rdf32(arg2 + 0x4cu);
        wrf32(sp0 - 0xb4u, (float)d19);
        d20 = (double)(float)(double)rdf32(arg2 + 0x5cu);
        wrf32(sp0 - 0xacu, (float)d20);
        d21 = (double)(float)(double)rdf32(arg2 + 0x58u);
        wrf32(sp0 - 0xa0u, (float)d21);
        d22 = (double)(float)(double)rdf32(arg2 + 0x4cu);
        wrf32(sp0 - 0x9cu, (float)d22);
        d23 = (double)(float)(double)rdf32(arg2 + 0x58u);
        wrf32(sp0 - 0x94u, (float)d23);
        d24 = (double)(float)(double)rdf32(arg2 + 0x54u);
        wrf32(sp0 - 0x8cu, (float)d24);
        d25 = (double)(float)(double)rdf32(arg2 + 0x5cu);
        wrf32(sp0 - 0x88u, (float)d25);
        d26 = (double)(float)(double)rdf32(arg2 + 0x4cu);
        wrf32(sp0 - 0x84u, (float)d26);
        d27 = (double)(float)(double)rdf32(arg2 + 0x54u);
        wrf32(sp0 - 0x80u, (float)d27);
        d28 = (double)(float)(double)rdf32(arg2 + 0x5cu);
        wrf32(sp0 - 0x7cu, (float)d28);
        d29 = (double)(float)(double)rdf32(arg2 + 0x54u);
        wrf32(sp0 - 0x74u, (float)d29);
        d30 = (double)(float)(double)rdf32(arg2 + 0x58u);
        wrf32(sp0 - 0x70u, (float)d30);
        d31 = (double)(float)(double)rdf32(arg2 + 0x4cu);
        wrf32(sp0 - 0x6cu, (float)d31);
        d32 = (double)(float)(double)rdf32(arg2 + 0x54u);
        wrf32(sp0 - 0x68u, (float)d32);
        d33 = (double)(float)(double)rdf32(arg2 + 0x58u);
        wrf32(sp0 - 0x64u, (float)d33);
        t34 = rd32(arg2 + 0x48u);
        d35 = fr(g, d11 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wr32(sp0 - 0xa8u, t34);
        wr32(sp0 - 0x90u, t34);
        wr32(sp0 - 0x78u, t34);
        wrf32(sp0 - 0xc4u, (float)(double)(float)d35);
        d36 = fr(g, fr(g, fr(g, fr(g, d12 * (double)rdf32(arg2 + 0x5cu)) + fr(g, d10 * (double)rdf32(arg2 + 0x48u))) + (double)(float)d35) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x60u, (float)(double)(float)d36);
        d37 = fr(g, d15 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0xc8u, (float)(double)(float)d37);
        d38 = fr(g, fr(g, fr(g, fr(g, d16 * (double)rdf32(arg2 + 0x5cu)) + fr(g, d13 * (double)rdf32(arg2 + 0x48u))) + (double)(float)d37) + cow_bits2f(t9));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d38);
        d39 = fr(g, d17 * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0x10cu, (float)(double)(float)d39);
        d40 = fr(g, fr(g, fr(g, fr(g, d18 * (double)rdf32(arg2 + 0x5cu)) + fr(g, (double)(float)-d4 * (double)rdf32(arg2 + 0x48u))) + (double)(float)d39) + cow_bits2f(t8));
        wrf32(sp0 - 0x58u, (float)(double)(float)d40);
        d41 = fr(g, fr(g, fr(g, fr(g, d12 * d20) + fr(g, d10 * d19)) + (double)(float)d35) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x54u, (float)(double)(float)d41);
        d42 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d20) + fr(g, d13 * d19)) + (double)(float)d37) + cow_bits2f(t9));
        wrf32(sp0 - 0x50u, (float)d42);
        d43 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d20) + fr(g, (double)(float)-d4 * d19)) + (double)(float)d39) + cow_bits2f(t8));
        wrf32(sp0 - 0x4cu, (float)d43);
        d44 = fr(g, fr(g, fr(g, fr(g, d12 * d21) + fr(g, d10 * cow_bits2f(t34))) + (double)(float)d35) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x48u, (float)(double)(float)d44);
        d45 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d21) + fr(g, d13 * cow_bits2f(t34))) + (double)(float)d37) + cow_bits2f(t9));
        wrf32(sp0 - 0x44u, (float)d45);
        d46 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d21) + fr(g, (double)(float)-d4 * cow_bits2f(t34))) + (double)(float)d39) + cow_bits2f(t8));
        wrf32(sp0 - 0x40u, (float)d46);
        d47 = fr(g, fr(g, fr(g, fr(g, d12 * d23) + fr(g, d10 * d22)) + (double)(float)d35) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d47);
        d48 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d23) + fr(g, d13 * d22)) + (double)(float)d37) + cow_bits2f(t9));
        wrf32(sp0 - 0x38u, (float)d48);
        d49 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d23) + fr(g, (double)(float)-d4 * d22)) + (double)(float)d39) + cow_bits2f(t8));
        wrf32(sp0 - 0x34u, (float)d49);
        d50 = fr(g, fr(g, fr(g, fr(g, d12 * d25) + fr(g, d11 * d24)) + fr(g, d10 * cow_bits2f(t34))) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x30u, (float)(double)(float)d50);
        d51 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d25) + fr(g, d15 * d24)) + fr(g, d13 * cow_bits2f(t34))) + cow_bits2f(t9));
        wrf32(sp0 - 0x2cu, (float)d51);
        d52 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d25) + fr(g, d17 * d24)) + fr(g, (double)(float)-d4 * cow_bits2f(t34))) + cow_bits2f(t8));
        wrf32(sp0 - 0x28u, (float)d52);
        d53 = fr(g, fr(g, fr(g, fr(g, d12 * d28) + fr(g, d11 * d27)) + fr(g, d10 * d26)) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x24u, (float)(double)(float)d53);
        d54 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d28) + fr(g, d15 * d27)) + fr(g, d13 * d26)) + cow_bits2f(t9));
        wrf32(sp0 - 0x20u, (float)d54);
        d55 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d28) + fr(g, d17 * d27)) + fr(g, (double)(float)-d4 * d26)) + cow_bits2f(t8));
        wrf32(sp0 - 0x1cu, (float)d55);
        d56 = fr(g, fr(g, fr(g, fr(g, d12 * d30) + fr(g, d11 * d29)) + fr(g, d10 * cow_bits2f(t34))) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0x18u, (float)(double)(float)d56);
        d57 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d30) + fr(g, d15 * d29)) + fr(g, d13 * cow_bits2f(t34))) + cow_bits2f(t9));
        wrf32(sp0 - 0x14u, (float)d57);
        d58 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d30) + fr(g, d17 * d29)) + fr(g, (double)(float)-d4 * cow_bits2f(t34))) + cow_bits2f(t8));
        wrf32(sp0 - 0x10u, (float)d58);
        d59 = fr(g, fr(g, fr(g, fr(g, d12 * d33) + fr(g, d11 * d32)) + fr(g, d10 * d31)) + cow_bits2f(rd32(arg3)));
        wrf32(sp0 - 0xcu, (float)(double)(float)d59);
        d60 = (double)(float)fr(g, fr(g, fr(g, fr(g, d16 * d33) + fr(g, d15 * d32)) + fr(g, d13 * d31)) + cow_bits2f(t9));
        wrf32(sp0 - 8u, (float)d60);
        d61 = (double)(float)fr(g, fr(g, fr(g, fr(g, d18 * d33) + fr(g, d17 * d32)) + fr(g, (double)(float)-d4 * d31)) + cow_bits2f(t8));
        wrf32(sp0 - 4u, (float)d61);
        d62 = fr(g, fr(g, fr(g, fr(g, (double)(float)d40 * (double)rdf32(arg1 + 0x20u)) + fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x10u))) + fr(g, (double)(float)d36 * (double)rdf32(arg1))) + (double)rdf32(arg1 + 0x30u));
        wrf32(sp0 - 0xc0u, (float)(double)(float)d62);
        d63 = fr(g, fr(g, fr(g, fr(g, (double)(float)d36 * (double)rdf32(arg1 + 4u)) + fr(g, (double)(float)d40 * (double)rdf32(arg1 + 0x24u))) + fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x14u))) + (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 0xbcu, (float)(double)(float)d63);
        d64 = fr(g, fr(g, fr(g, fr(g, (double)(float)d36 * (double)rdf32(arg1 + 8u)) + fr(g, (double)(float)d40 * (double)rdf32(arg1 + 0x28u))) + fr(g, (double)(float)d38 * (double)rdf32(arg1 + 0x18u))) + (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0xb8u, (float)(double)(float)d64);
        d65 = fr(g, fr(g, fr(g, fr(g, (double)(float)d41 * (double)rdf32(arg1)) + fr(g, d43 * (double)rdf32(arg1 + 0x20u))) + fr(g, d42 * (double)rdf32(arg1 + 0x10u))) + (double)rdf32(arg1 + 0x30u));
        wrf32(sp0 - 0xb4u, (float)(double)(float)d65);
        d66 = fr(g, fr(g, fr(g, fr(g, d43 * (double)rdf32(arg1 + 0x24u)) + fr(g, d42 * (double)rdf32(arg1 + 0x14u))) + fr(g, (double)(float)d41 * (double)rdf32(arg1 + 4u))) + (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 0xb0u, (float)(double)(float)d66);
        d67 = fr(g, d43 * (double)rdf32(arg1 + 0x28u));
        d68 = fr(g, (double)(float)d41 * (double)rdf32(arg1 + 8u));
        wr32(sp0 - 0x120u, sp0 - 0x48u);
        wr32(sp0 - 0x124u, arg1);
        d69 = fr(g, d42 * (double)rdf32(arg1 + 0x18u));
        wr32(sp0 - 0x128u, sp0 - 0xa8u);
        d70 = fr(g, fr(g, fr(g, d68 + d67) + d69) + (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0xacu, (float)(double)(float)d70);
        g->eax = sp0 - 0xa8u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d2edu);
        t71 = cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0xa8u, arg1, sp0 - 0x48u);
        eax = t71;
    COW_AT(1016d2ed)
        wr32(sp0 - 0x120u, sp0 - 0x3cu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x9cu);
        g->edx = sp0 - 0x9cu;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d305u);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x9cu, arg1, sp0 - 0x3cu);
        t72 = g->edx;
        edx = t72;
    COW_AT(1016d305)
        wr32(sp0 - 0x120u, sp0 - 0x30u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x90u);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d31du);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x90u, arg1, sp0 - 0x30u);
    COW_AT(1016d31d)
        wr32(sp0 - 0x120u, sp0 - 0x24u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x84u);
        g->eax = sp0 - 0x84u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d335u);
        t73 = cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x84u, arg1, sp0 - 0x24u);
        eax = t73;
    COW_AT(1016d335)
        wr32(sp0 - 0x120u, sp0 - 0x18u);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x78u);
        g->edx = sp0 - 0x78u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d34du);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x78u, arg1, sp0 - 0x18u);
        t74 = g->edx;
        edx = t74;
    COW_AT(1016d34d)
        wr32(sp0 - 0x120u, sp0 - 0xcu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, sp0 - 0x6cu);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d365u);
        cow_stdcall(g, COW_IMG(0x1016d520u), 3, sp0 - 0x6cu, arg1, sp0 - 0xcu);
    COW_AT(1016d365)
        t75 = self + rd32(self + 0x34120u) * 0x68u + 0x1a120u;
        wr32(sp0 - 0x10cu, t75);
        ecx = t75;
        ebx = t75 + 0x18u;
        edi = COW_IMG(0x103769cau);
        loc_10c = t75;
L_1016d38a: ;
    COW_AT(1016d38a)
        t76 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi - 2u) * 0xcu - 0xc0u);
        t77 = rd16(edi - 2u);
        wr32(ecx, t76);
        t78 = rd32(sp0 + (uint32_t)(int16_t)t77 * 0xcu - 0xbcu);
        wr32(ecx + 4u, t78);
        t79 = rd32(sp0 + (uint32_t)(int16_t)t77 * 0xcu - 0xb8u);
        wr32(ecx + 8u, t79);
        t80 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi) * 0xcu - 0xc0u);
        t81 = rd16(edi);
        wr32(ebx - 0xcu, t80);
        t82 = rd32(sp0 + (uint32_t)(int16_t)t81 * 0xcu - 0xbcu);
        wr32(ebx - 8u, t82);
        t83 = rd32(sp0 + (uint32_t)(int16_t)t81 * 0xcu - 0xb8u);
        wr32(ebx - 4u, t83);
        t84 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi + 2u) * 0xcu - 0xc0u);
        t85 = rd16(edi + 2u);
        wr32(ebx, t84);
        t86 = rd32(sp0 + (uint32_t)(int16_t)t85 * 0xcu - 0xbcu);
        wr32(ebx + 4u, t86);
        t87 = rd32(sp0 + (uint32_t)(int16_t)t85 * 0xcu - 0xb8u);
        wr32(ebx + 8u, t87);
        t88 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi - 2u) * 0xcu - 0x60u);
        t89 = rd16(edi - 2u);
        wr32(ebx + 0x18u, t88);
        t90 = rd32(sp0 + (uint32_t)(int16_t)t89 * 0xcu - 0x5cu);
        wr32(ebx + 0x1cu, t90);
        t91 = rd32(sp0 + (uint32_t)(int16_t)t89 * 0xcu - 0x58u);
        wr32(ebx + 0x20u, t91);
        t92 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi) * 0xcu - 0x60u);
        t93 = rd16(edi);
        wr32(ebx + 0x24u, t92);
        t94 = rd32(sp0 + (uint32_t)(int16_t)t93 * 0xcu - 0x5cu);
        wr32(ebx + 0x28u, t94);
        t95 = rd32(sp0 + (uint32_t)(int16_t)t93 * 0xcu - 0x58u);
        wr32(ebx + 0x2cu, t95);
        t96 = rd32(sp0 + (uint32_t)(int16_t)rd16(edi + 2u) * 0xcu - 0x60u);
        t97 = rd16(edi + 2u);
        wr32(ebx + 0x30u, t96);
        t98 = rd32(sp0 + (uint32_t)(int16_t)t97 * 0xcu - 0x5cu);
        wr32(ebx + 0x34u, t98);
        t99 = rd32(sp0 + (uint32_t)(int16_t)t97 * 0xcu - 0x58u);
        wr32(ebx + 0x38u, t99);
        t100 = COW_IMG(0x10376a28u) + (uint32_t)(int16_t)rd16(edi + 4u) * 0xcu;
        wr32(sp0 - 0x120u, t100);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        wr32(sp0 - 0x128u, ebx + 0x3cu);
        g->edx = sp0 - 0x108u;
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d475u);
        cow_stdcall(g, COW_IMG(0x1016d4c0u), 3, ebx + 0x3cu, sp0 - 0x108u, t100);
        t101 = g->edx;
        edx = t101;
    COW_AT(1016d475)
        wr32(sp0 - 0x120u, ebx + 0x3cu);
        wr32(sp0 - 0x124u, arg1);
        wr32(sp0 - 0x128u, ebx + 0xcu);
        g->esp = sp0 - 0x11cu;
        COW_RET(0x1016d485u);
        cow_stdcall(g, COW_IMG(0x1016d4c0u), 3, ebx + 0xcu, arg1, ebx + 0x3cu);
    COW_AT(1016d485)
        t102 = rd32(sp0 - 0x10cu) + 0x68u;
        wr32(sp0 - 0x10cu, t102);
        if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x10376a2au))
        {
            ebx = ebx + 0x68u;
            edi = edi + 8u;
            loc_10c = t102;
            goto L_1016d386;
        }
        edx = t102;
    COW_AT(1016d4a2)
        t103 = rd32(self + 0x34120u) + 0xcu;
        t104 = rd32(sp0 - 0x118u);
        t105 = rd32(sp0 - 0x11cu);
        wr32(self + 0x34120u, t103);
        eax = t103;
        ebx = rd32(sp0 - 0x114u);
        esi = t104;
        edi = t105;
        loc_110 = rd32(sp0 - 0x110u);
    }
    COW_AT(1016d4b4)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_110;
    g->edx = edx;
    return eax;
L_1016d386: ;
    COW_AT(1016d386)
    ecx = loc_10c;
    goto L_1016d38a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016cc50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016cc69u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x1016d2edu:
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
    case 0x1016d305u:
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
    case 0x1016d31du:
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
    case 0x1016d335u:
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
    case 0x1016d34du:
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
    case 0x1016d365u:
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
    case 0x1016d386u:
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
    case 0x1016d38au:
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
    case 0x1016d475u:
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
    case 0x1016d485u:
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
    case 0x1016d4a2u:
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
    case 0x1016d4b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016cc50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1016cc50(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
