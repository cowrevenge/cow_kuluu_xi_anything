/* f_0x10063c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10063c80(Guest* g)
{
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
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
    double d51;
    double d52;
    double d53;
    double d56;
    double d57;
    double d58;
    double d61;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_a14_f;
    double loc_a18_f;
    double loc_a1c_f;
    double loc_a20_f;
    double loc_a24_f;
    double loc_a28_f;
    uint32_t loc_a2c;
    uint32_t loc_a34;
    uint32_t loc_a38;
    double loc_a3c_f;
    uint32_t loc_a40;
    uint32_t loc_a44;
    double loc_a48_f;
    double loc_a4c_f;
    uint32_t loc_a50;
    uint32_t loc_a60;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t54;
    uint32_t t55;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2680u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10063c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xa50u); g->ebx = rd32(sp0 - 0xa50u); goto E_10063c93;
    case 0x10063c98u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xa50u); g->ebx = rd32(sp0 - 0xa50u); goto E_10063c98;
    case 0x10063ca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); goto E_10063ca3;
    case 0x10063cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); goto E_10063cb7;
    case 0x10063cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_a40 = rd32(sp0 - 0xa40u); x0 = ST(0); goto E_10063cc5;
    case 0x10063ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_a50 = rd32(sp0 - 0xa50u); goto E_10063cca;
    case 0x10063cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_a50 = rd32(sp0 - 0xa50u); loc_a38 = rd32(sp0 - 0xa38u); goto E_10063cd2;
    case 0x10063cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_a50 = rd32(sp0 - 0xa50u); loc_a38 = rd32(sp0 - 0xa38u); goto E_10063cde;
    case 0x10063d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10063d30;
    case 0x10063d44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10063d44;
    case 0x10063d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10063d94;
    case 0x10063da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10063da3;
    case 0x10063da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); goto E_10063da7;
    case 0x10063de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063de1;
    case 0x10063de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063de6;
    case 0x10063df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063df6;
    case 0x10063e05u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063e05;
    case 0x10063e09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063e09;
    case 0x10063ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a4c_f = rdf32(sp0 - 0xa4cu); loc_a48_f = rdf32(sp0 - 0xa48u); loc_a44 = rd32(sp0 - 0xa44u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); loc_a1c_f = rdf32(sp0 - 0xa1cu); loc_a18_f = rdf32(sp0 - 0xa18u); loc_a14_f = rdf32(sp0 - 0xa14u); goto E_10063ef8;
    case 0x10063effu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a4c_f = rdf32(sp0 - 0xa4cu); loc_a48_f = rdf32(sp0 - 0xa48u); loc_a44 = rd32(sp0 - 0xa44u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); loc_a1c_f = rdf32(sp0 - 0xa1cu); loc_a18_f = rdf32(sp0 - 0xa18u); loc_a14_f = rdf32(sp0 - 0xa14u); goto E_10063eff;
    case 0x10063f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a4c_f = rdf32(sp0 - 0xa4cu); loc_a48_f = rdf32(sp0 - 0xa48u); loc_a44 = rd32(sp0 - 0xa44u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); loc_a1c_f = rdf32(sp0 - 0xa1cu); loc_a18_f = rdf32(sp0 - 0xa18u); loc_a14_f = rdf32(sp0 - 0xa14u); goto E_10063f09;
    case 0x10063f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a4c_f = rdf32(sp0 - 0xa4cu); loc_a48_f = rdf32(sp0 - 0xa48u); loc_a44 = rd32(sp0 - 0xa44u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); loc_a1c_f = rdf32(sp0 - 0xa1cu); loc_a18_f = rdf32(sp0 - 0xa18u); loc_a14_f = rdf32(sp0 - 0xa14u); goto E_10063f23;
    case 0x10063f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a4c_f = rdf32(sp0 - 0xa4cu); loc_a48_f = rdf32(sp0 - 0xa48u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); loc_a1c_f = rdf32(sp0 - 0xa1cu); loc_a18_f = rdf32(sp0 - 0xa18u); loc_a14_f = rdf32(sp0 - 0xa14u); goto E_10063f48;
    case 0x10063fa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a40 = rd32(sp0 - 0xa40u); goto E_10063fa9;
    case 0x10063fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a60 = rd32(sp0 - 0xa60u); loc_a40 = rd32(sp0 - 0xa40u); loc_a3c_f = rdf32(sp0 - 0xa3cu); loc_a34 = rd32(sp0 - 0xa34u); loc_a2c = rd32(sp0 - 0xa2cu); loc_a28_f = rdf32(sp0 - 0xa28u); loc_a24_f = rdf32(sp0 - 0xa24u); loc_a20_f = rdf32(sp0 - 0xa20u); goto E_10063fad;
    default: break;
    }
#endif

    COW_AT(10063c80)
    wr32(sp0 - 0xa50u, in_ebx);
    if ((int16_t)rd16(self + 0x44u) >= 20)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x44u);
    COW_AT(10063c98)
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xa50u;
        t1 = cow_call_regs(g, COW_IMG(0x10002d80u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        if (!(rd8(self + 0x46u) & 1u))
        {
            eax = t1;
            ecx = t2;
            x0 = d4;
    COW_AT(10063cb7)
            t6 = (uint32_t)(int16_t)rd16(self + 0x44u);
            wr32(sp0 - 0xa40u, t6);
            edx = t6;
            x0 = (double)(int32_t)t6;
        }
        else
        {
            eax = t1;
            edx = t3;
            x0 = d4;
    COW_AT(10063ca3)
            t5 = (uint32_t)(int16_t)rd16(self + 0x44u);
            wr32(sp0 - 0xa40u, t5);
            ecx = t5;
            x0 = fr(g, fr(g, x0 * (double)(int32_t)t5) * (double)rdf32(COW_IMG(0x10329a08u)));
        }
    COW_AT(10063cc5)
        fpush(g, x0);
        g->esp = sp0 - 0xa50u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t7;
        loc_a50 = rd32(sp0 - 0xa50u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x44u);
    COW_AT(10063c93)
        eax = (uint32_t)(int16_t)eax;
        loc_a50 = in_ebx;
    }
    COW_AT(10063cca)
    wr32(sp0 - 0xa38u, eax);
    if (eax != 0u)
    {
        loc_a38 = eax;
        goto L_10063cde;
    }
    COW_AT(10063cd2)
    g->ebx = loc_a50;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10063cde: ;
    COW_AT(10063cde)
    wr32(sp0 - 8u, 0x271u);
    wr32(sp0 - 0xa54u, in_ebp);
    wr32(sp0 - 0xa58u, in_esi);
    wr32(sp0 - 0xa5cu, in_edi);
    t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t8);
    wr32(sp0 - 0xa60u, t9);
    t10 = rd32(COW_IMG(0x1047bfa8u));
    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
    edi = t9;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t11 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0xa5cu;
    cow_thiscall(g, rd32(t11 + 0x18u), rd32(COW_IMG(0x1047cf7cu)), 1, t9);
    t12 = g->edx;
    if (rd32(COW_IMG(0x1047bf34u)) == 0u)
    {
        edx = t12;
        ebp = t9;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047bf34u));
        ebp = t9;
    COW_AT(10063d30)
        wr32(sp0 - 0xa60u, ebp);
        wr32(sp0 - 0xa64u, eax);
        wr32(sp0 - 0xa68u, ebp);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t13 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0xa5cu;
        cow_thiscall(g, rd32(t13 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, eax, ebp);
        t14 = g->edx;
        wr32(COW_IMG(0x1047bf34u), 0u);
        edx = t14;
    }
    COW_AT(10063d44)
    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t16 = rd32(COW_IMG(0x1047cf7cu));
    t17 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t16 + 0xa90u, t15);
    wr32(sp0 - 0xa60u, t17);
    g->esp = sp0 - 0xa5cu;
    cow_thiscall(g, COW_IMG(0x1006a4a0u), rd32(COW_IMG(0x1047bfa8u)), 1, t17);
    t18 = rd32(t17 + 0x30u);
    wr32(sp0 - 0xa10u, t18);
    t19 = rd32(t17 + 0x34u);
    t20 = rd32(t17 + 0x38u);
    wr32(t17 + 0x30u, 0u);
    wr32(t17 + 0x34u, 0u);
    wr32(t17 + 0x38u, 0u);
    wr32(t17 + 0x3cu, 0x3f800000u);
    wr32(sp0 - 0xa0cu, t19);
    wr32(sp0 - 0xa08u, t20);
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        edx = t20;
        edi = t17;
    COW_AT(10063da3)
        wr32(sp0 - 0xa34u, 0u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a34 = 0u;
    }
    else
    {
        eax = rd32(self);
        edx = t20;
        edi = t17;
    COW_AT(10063d94)
        wr32(sp0 - 0xa2cu, rd32(eax));
        t21 = rd32(rd32(eax) + 0x30u);
        wr32(sp0 - 0xa34u, t21);
        loc_a2c = rd32(eax);
        eax = t21;
        loc_a34 = t21;
    }
    COW_AT(10063da7)
    d22 = (double)rdf32(self + 4u);
    d23 = fr(g, fr(g, d22 * d22) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xa3cu, (float)(double)(float)d23);
    d24 = fr(g, (double)(float)d23 * (double)rdf32(self + 0x28u));
    wrf32(sp0 - 0xa28u, (float)(double)(float)d24);
    d25 = fr(g, (double)(float)d23 * (double)rdf32(self + 0x2cu));
    wrf32(sp0 - 0xa24u, (float)(double)(float)d25);
    d26 = fr(g, (double)(float)d23 * (double)rdf32(self + 0x30u));
    wrf32(sp0 - 0xa20u, (float)(double)(float)d26);
    if (loc_a34 == 0u)
    {
        loc_a3c_f = (double)(float)d23;
        loc_a28_f = (double)(float)d24;
        loc_a24_f = (double)(float)d25;
        loc_a20_f = (double)(float)d26;
    }
    else
    {
        loc_a3c_f = (double)(float)d23;
        loc_a28_f = (double)(float)d24;
        loc_a24_f = (double)(float)d25;
        loc_a20_f = (double)(float)d26;
    COW_AT(10063de1)
        if ((int32_t)rd32(self + 0x14u) < 0)
        {
    COW_AT(10063de6)
            t27 = rd32(self + 0x10u);
            wr32(sp0 - 0xa60u, t27);
            g->esp = sp0 - 0xa5cu;
            cow_thiscall(g, COW_IMG(0x1006bc10u), sp0 - 0x9c8u, 1, t27);
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
        }
    }
    COW_AT(10063df6)
    if ((int32_t)rd32(sp0 - 0xa38u) <= 0)
    {
        edx = rd32(sp0 - 0xa38u);
    }
    else
    {
        edx = rd32(sp0 - 0xa38u);
        esi = rd32(self + 0x40u);
    COW_AT(10063e05)
        wr32(sp0 - 0xa40u, edx);
        loc_a40 = edx;
L_10063e09: ;
    COW_AT(10063e09)
        wr32(sp0 - 0xa4cu, rd32(esi));
        t28 = rd32(self + 0x18u);
        wr32(sp0 - 0xa30u, t28);
        t29 = rd32(esi + 4u);
        wr32(sp0 - 0xa48u, t29);
        t30 = rd32(esi + 8u);
        wr32(sp0 - 0xa44u, t30);
        d31 = fr(g, loc_a3c_f * (double)rdf32(esi + 0x14u));
        d32 = fr(g, loc_a3c_f * (double)rdf32(esi + 0x10u));
        d33 = fr(g, loc_a3c_f * (double)rdf32(esi + 0xcu));
        wrf32(sp0 - 0x9ccu, (float)(double)(float)d31);
        d34 = (double)(float)fr(g, d33 * cow_bits2f(t28));
        wrf32(sp0 - 0xa04u, (float)d34);
        d35 = (double)(float)fr(g, d32 * cow_bits2f(t28));
        wrf32(sp0 - 0xa00u, (float)d35);
        d36 = (double)rdf32(self + 4u);
        d37 = fr(g, d36 * (double)rdf32(esi + 0x1cu));
        d38 = fr(g, d36 * (double)rdf32(esi + 0x18u));
        wrf32(sp0 - 0x9f4u, (float)(double)(float)d37);
        d39 = fr(g, d36 * (double)rdf32(esi + 0x20u));
        wrf32(sp0 - 0x9f0u, (float)(double)(float)d39);
        d40 = (double)(float)fr(g, (double)(float)d39 + loc_a20_f);
        wrf32(sp0 - 0x9e4u, (float)d40);
        d41 = fr(g, fr(g, d38 + loc_a28_f) + cow_bits2f(rd32(esi)));
        wrf32(sp0 - 0xa1cu, (float)(double)(float)d41);
        d42 = (double)(float)fr(g, cow_bits2f(t29) + fr(g, (double)(float)d37 + loc_a24_f));
        wrf32(sp0 - 0xa18u, (float)d42);
        d43 = (double)(float)fr(g, cow_bits2f(t30) + d40);
        wrf32(sp0 - 0xa14u, (float)d43);
        d44 = (double)(float)fr(g, d43 + fr(g, (double)(float)d31 * cow_bits2f(t28)));
        wrf32(sp0 - 0x9d8u, (float)d44);
        d45 = (double)(float)fr(g, (double)(float)d41 + d34);
        wrf32(sp0 - 0xa4cu, (float)d45);
        wr32(sp0 - 0xa44u, cow_f2bits(d44));
        d46 = (double)(float)fr(g, d42 + d35);
        wrf32(sp0 - 0xa48u, (float)d46);
        if (loc_a34 == 0u)
        {
            esi = esi + 0x24u;
            loc_a1c_f = (double)(float)d41;
            loc_a18_f = d42;
            loc_a14_f = d43;
        }
        else
        {
            edx = t30;
            esi = esi + 0x24u;
            loc_a4c_f = d45;
            loc_a48_f = d46;
            loc_a44 = cow_f2bits(d44);
            loc_a1c_f = (double)(float)d41;
            loc_a18_f = d42;
            loc_a14_f = d43;
    COW_AT(10063ef8)
            if ((int32_t)rd32(self + 0x14u) < 0)
            {
                eax = rd32(self + 0x14u);
    COW_AT(10063f09)
                g->eax = eax;
                g->esp = sp0 - 0xa5cu;
                t47 = cow_thiscall(g, COW_IMG(0x1006bc80u), sp0 - 0x9c8u, 0);
                t48 = cow_divu(g, t47, rd32(sp0 - 0xa34u));
                t49 = cow_modu(g, t47, rd32(sp0 - 0xa34u));
                wr32(sp0 - 0xa60u, t49);
                eax = rd32(sp0 - 0xa2cu);
                ecx = rd32(sp0 - 0xa2cu) + 0x30u;
                edx = t49;
                loc_a2c = rd32(sp0 - 0xa2cu);
                loc_a34 = rd32(sp0 - 0xa34u);
                loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
                loc_a28_f = (double)rdf32(sp0 - 0xa28u);
                loc_a24_f = (double)rdf32(sp0 - 0xa24u);
                loc_a20_f = (double)rdf32(sp0 - 0xa20u);
                loc_a40 = rd32(sp0 - 0xa40u);
                loc_a4c_f = (double)rdf32(sp0 - 0xa4cu);
                loc_a48_f = (double)rdf32(sp0 - 0xa48u);
                loc_a44 = rd32(sp0 - 0xa44u);
                loc_a1c_f = (double)rdf32(sp0 - 0xa1cu);
                loc_a18_f = (double)rdf32(sp0 - 0xa18u);
                loc_a14_f = (double)rdf32(sp0 - 0xa14u);
                loc_a60 = t49;
            }
            else
            {
                eax = rd32(self + 0x14u);
    COW_AT(10063eff)
                wr32(sp0 - 0xa60u, eax);
                ecx = loc_a2c + 0x30u;
                edx = loc_a2c;
                loc_a60 = eax;
            }
    COW_AT(10063f23)
            g->eax = eax;
            g->esp = sp0 - 0xa5cu;
            t50 = cow_thiscall(g, COW_IMG(0x10063b50u), ecx, 1, loc_a60);
            d51 = fr(g, (double)rdf32(sp0 - 0xa4cu) + (double)rdf32(t50));
            wrf32(sp0 - 0xa4cu, (float)(double)(float)d51);
            d52 = fr(g, (double)rdf32(sp0 - 0xa48u) + (double)rdf32(t50 + 4u));
            wrf32(sp0 - 0xa48u, (float)(double)(float)d52);
            d53 = fr(g, (double)rdf32(sp0 - 0xa44u) + (double)rdf32(t50 + 8u));
            wrf32(sp0 - 0xa44u, (float)(double)(float)d53);
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
            loc_a40 = rd32(sp0 - 0xa40u);
            loc_a1c_f = (double)rdf32(sp0 - 0xa1cu);
            loc_a18_f = (double)rdf32(sp0 - 0xa18u);
            loc_a14_f = (double)rdf32(sp0 - 0xa14u);
        }
    COW_AT(10063f48)
        wr32(sp0 - 0xa60u, sp0 - 0xa4cu);
        wr32(sp0 - 0xa64u, ebp);
        wr32(sp0 - 0xa68u, sp0 - 0xa4cu);
        g->eax = sp0 - 0xa4cu;
        g->esp = sp0 - 0xa68u;
        t54 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 0);
        t55 = rd32(sp0 - 4u);
        d56 = fr(g, (double)rdf32(sp0 - 0xa58u) + (double)rdf32(sp0 - 0xa1cu));
        wr32(sp0 - 0xa6cu, t55);
        wr32(sp0 - 0xa70u, sp0 - 0xa58u);
        wr32(sp0 - 0xa74u, edi);
        wrf32(sp0 - 0xa58u, (float)(double)(float)d56);
        d57 = fr(g, (double)rdf32(sp0 - 0xa54u) + (double)rdf32(sp0 - 0xa18u));
        wrf32(sp0 - 0xa54u, (float)(double)(float)d57);
        d58 = fr(g, (double)rdf32(sp0 - 0xa50u) + (double)rdf32(sp0 - 0xa14u));
        wrf32(sp0 - 0xa50u, (float)(double)(float)d58);
        cow_thiscall(g, rd32(sp0 - 8u), t55, 3, edi, sp0 - 0xa58u, t55);
        t59 = rd32(sp0 - 0xa40u) - 1u;
        t60 = rd32(sp0 - 0xa40u);
        wr32(sp0 - 0xa40u, t59);
        if (t60 != 1u)
        {
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
            loc_a40 = t59;
            goto L_10063e09;
        }
    COW_AT(10063fa9)
        edx = rd32(sp0 - 0xa38u);
    }
    COW_AT(10063fad)
    d61 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(self + 4u));
    wrf32(self + 4u, (float)d61);
    t62 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t63 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t63 + 0xa90u, t62);
    wr32(t62 * 4u + t63 + 0xa10u, edi);
    t64 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t65 = rd32(COW_IMG(0x1047cf7cu));
    t66 = rd32(sp0 - 0xa58u);
    t67 = rd32(sp0 - 0xa5cu);
    wr32(t65 + 0xa90u, t64);
    wr32(t64 * 4u + t65 + 0xa10u, ebp);
    g->ebx = rd32(sp0 - 0xa50u);
    g->esi = t66;
    g->edi = t67;
    g->ebp = rd32(sp0 - 0xa54u);
    return edx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10063c80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10063c93u:
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
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xa50u);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063c98u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xa50u);
        g->esp = sp0 - 0xa50u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x10063ca3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063cb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063cc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_a40 = rd32(sp0 - 0xa40u);
        x0 = ST(0);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063ccau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_a50 = rd32(sp0 - 0xa50u);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063cd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a38;
        uint32_t loc_a50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_a50 = rd32(sp0 - 0xa50u);
        loc_a38 = rd32(sp0 - 0xa38u);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063cdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a38;
        uint32_t loc_a50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_a50 = rd32(sp0 - 0xa50u);
        loc_a38 = rd32(sp0 - 0xa38u);
        g->esp = sp0 - 0xa50u;
        (void)sp0;
        return 1;
    }
    case 0x10063d30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        wr32(sp0 - 8u, 0x271u);
        (void)sp0;
        return 1;
    }
    case 0x10063d44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        wr32(sp0 - 8u, 0x271u);
        (void)sp0;
        return 1;
    }
    case 0x10063d94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063da3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063da7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063de1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10063de6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063df6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063e05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063e09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063ef8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a14_f;
        double loc_a18_f;
        double loc_a1c_f;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a44;
        double loc_a48_f;
        double loc_a4c_f;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a4c_f = rdf32(sp0 - 0xa4cu);
        loc_a48_f = rdf32(sp0 - 0xa48u);
        loc_a44 = rd32(sp0 - 0xa44u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        loc_a1c_f = rdf32(sp0 - 0xa1cu);
        loc_a18_f = rdf32(sp0 - 0xa18u);
        loc_a14_f = rdf32(sp0 - 0xa14u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063effu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a14_f;
        double loc_a18_f;
        double loc_a1c_f;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a44;
        double loc_a48_f;
        double loc_a4c_f;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a4c_f = rdf32(sp0 - 0xa4cu);
        loc_a48_f = rdf32(sp0 - 0xa48u);
        loc_a44 = rd32(sp0 - 0xa44u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        loc_a1c_f = rdf32(sp0 - 0xa1cu);
        loc_a18_f = rdf32(sp0 - 0xa18u);
        loc_a14_f = rdf32(sp0 - 0xa14u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063f09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a14_f;
        double loc_a18_f;
        double loc_a1c_f;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a44;
        double loc_a48_f;
        double loc_a4c_f;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a4c_f = rdf32(sp0 - 0xa4cu);
        loc_a48_f = rdf32(sp0 - 0xa48u);
        loc_a44 = rd32(sp0 - 0xa44u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        loc_a1c_f = rdf32(sp0 - 0xa1cu);
        loc_a18_f = rdf32(sp0 - 0xa18u);
        loc_a14_f = rdf32(sp0 - 0xa14u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063f23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a14_f;
        double loc_a18_f;
        double loc_a1c_f;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a44;
        double loc_a48_f;
        double loc_a4c_f;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a4c_f = rdf32(sp0 - 0xa4cu);
        loc_a48_f = rdf32(sp0 - 0xa48u);
        loc_a44 = rd32(sp0 - 0xa44u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        loc_a1c_f = rdf32(sp0 - 0xa1cu);
        loc_a18_f = rdf32(sp0 - 0xa18u);
        loc_a14_f = rdf32(sp0 - 0xa14u);
        g->esp = sp0 - 0xa60u;
        (void)sp0;
        return 1;
    }
    case 0x10063f48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a14_f;
        double loc_a18_f;
        double loc_a1c_f;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        double loc_a48_f;
        double loc_a4c_f;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a4c_f = rdf32(sp0 - 0xa4cu);
        loc_a48_f = rdf32(sp0 - 0xa48u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        loc_a1c_f = rdf32(sp0 - 0xa1cu);
        loc_a18_f = rdf32(sp0 - 0xa18u);
        loc_a14_f = rdf32(sp0 - 0xa14u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    case 0x10063fa9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a40 = rd32(sp0 - 0xa40u);
        g->esp = sp0 - 0xa5cu;
        wr32(sp0 - 0xa70u, sp0 - 0xa58u);
        wr32(sp0 - 0xa68u, sp0 - 0xa4cu);
        wr32(sp0 - 0xa60u, sp0 - 0xa4cu);
        (void)sp0;
        return 1;
    }
    case 0x10063fadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_a20_f;
        double loc_a24_f;
        double loc_a28_f;
        uint32_t loc_a2c;
        uint32_t loc_a34;
        double loc_a3c_f;
        uint32_t loc_a40;
        uint32_t loc_a60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a60 = rd32(sp0 - 0xa60u);
        loc_a40 = rd32(sp0 - 0xa40u);
        loc_a3c_f = rdf32(sp0 - 0xa3cu);
        loc_a34 = rd32(sp0 - 0xa34u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a28_f = rdf32(sp0 - 0xa28u);
        loc_a24_f = rdf32(sp0 - 0xa24u);
        loc_a20_f = rdf32(sp0 - 0xa20u);
        g->esp = sp0 - 0xa5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10063c80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10063c80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
