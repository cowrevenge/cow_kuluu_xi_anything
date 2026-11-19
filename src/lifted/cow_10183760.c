/* f_0x10183760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10183760(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_104;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_118;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_128;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_c0;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
    uint32_t loc_fc;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 320u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101837b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); self = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_101837b7;
    case 0x10183822u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10183822;
    case 0x10183831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); goto E_10183831;
    case 0x10183880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); goto E_10183880;
    case 0x10183893u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183893;
    case 0x101838a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); goto E_101838a8;
    case 0x101838abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101838ab;
    case 0x101838b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101838b4;
    case 0x101838bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101838bf;
    case 0x101838c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101838c7;
    case 0x101838e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101838e9;
    case 0x101839e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_101839e1;
    case 0x10183aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_c0 = rd32(sp0 - 0xc0u); goto E_10183aab;
    case 0x10183aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183aef;
    case 0x10183af9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183af9;
    case 0x10183b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183b0f;
    case 0x10183b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183b26;
    case 0x10183b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183b2f;
    case 0x10183becu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_10183bec;
    case 0x10183bfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_104 = rd32(sp0 - 0x104u); loc_100 = rd32(sp0 - 0x100u); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); goto E_10183bfc;
    case 0x10183c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183c46;
    case 0x10183c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183c5f;
    case 0x10183c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183c76;
    case 0x10183c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183c7a;
    case 0x10183cdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183cda;
    case 0x10183d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c0 = rd32(sp0 - 0xc0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10183d48;
    case 0x10183d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c0 = rd32(sp0 - 0xc0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_10183d56;
    default: break;
    }
#endif

    COW_AT(10183760)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x8cu, self);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, self + 0x38e5cu);
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x9cu;
    t1 = cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x80u, arg1, self + 0x38e5cu);
    esi = sp0 - 0x80u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa0u, arg2 + 0x70u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    t2 = cow_call_regs(g, COW_IMG(0x10182070u), t1, g->ecx, g->edx, 0, 2, sp0 - 0x40u, arg2 + 0x70u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
    }
    else
    {
        edx = t3;
    COW_AT(101837b7)
        esi = arg1;
        edi = sp0 - 0x80u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d4 = fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(arg2 + 0xe0u));
        wrf32(sp0 - 0x50u, (float)(double)(float)d4);
        d5 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(arg2 + 0xe4u));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d5);
        d6 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(arg2 + 0xe8u));
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, 0x100u);
        wrf32(sp0 - 0x48u, (float)(double)(float)d6);
        d7 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(arg2 + 0xecu));
        wrf32(sp0 - 0x44u, (float)(double)(float)d7);
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        t8 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
        if (rd8(self + 0x39598u) == 0u)
        {
            eax = (t8 & 0xffffff00u) | rd8(self + 0x39598u);
    COW_AT(10183822)
            wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1065c4d0u)));
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x1065c4d0u)));
        }
    COW_AT(10183831)
        t9 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0xa0u, t9);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa4u, t10);
        g->edx = t9;
        g->esp = sp0 - 0x7cu;
        cow_thiscall(g, rd32(rd32(t10) + 0x130u), rd32(t10), 10, t10, t9, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
        t11 = g->edx;
        wr32(sp0 - 0x80u, 1u);
        wr32(sp0 - 0x84u, 0xdu);
        wr32(sp0 - 0x88u, 0u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x8cu, t12);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 0);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 0xeu);
        wr32(sp0 - 0x98u, 0u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t13);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 0);
        if (rd32(arg2 + 0x60u) == 0u)
        {
            loc_90 = 1u;
            loc_94 = 0xeu;
            loc_98 = 0u;
            loc_9c = rd32(sp0 - 0x9cu);
        }
        else
        {
            ebx = rd32(arg2 + 0x60u);
    COW_AT(10183880)
            wr32(sp0 - 0x88u, 0u);
            if ((int32_t)rd32(arg2 + 0x44u) <= 0)
            {
                loc_80 = 1u;
                loc_84 = 0xdu;
                loc_88 = 0u;
                loc_90 = 1u;
                loc_94 = 0xeu;
                loc_98 = 0u;
                goto L_10183c7a;
            }
            edi = 0xffffffffu;
            loc_80 = 1u;
            loc_88 = 0u;
            loc_90 = 1u;
            loc_94 = 0xeu;
            loc_98 = 0u;
L_10183893: ;
    COW_AT(10183893)
            wr32(sp0 - 0x84u, 0u);
            if ((int32_t)rd32(ebx) <= 0)
            {
                loc_84 = 0u;
            }
            else
            {
                eax = rd32(ebx + 4u);
    COW_AT(101838a8)
                esi = eax + 0x28u;
                loc_84 = 0u;
L_101838ab: ;
    COW_AT(101838ab)
                if (rd32(esi) != 0u)
                {
    COW_AT(101838b4)
                    if (rd32(esi - 0x24u) == 0u)
                    {
    COW_AT(10183b26)
                        if (edi == 1u)
                        {
                            loc_70 = rd32(sp0 - 0x70u);
                            loc_74 = rd32(sp0 - 0x74u);
                            loc_78 = rd32(sp0 - 0x78u);
                            loc_40 = rd32(sp0 - 0x40u);
                            loc_44 = rd32(sp0 - 0x44u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_50 = rd32(sp0 - 0x50u);
                            loc_54 = rd32(sp0 - 0x54u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_60 = rd32(sp0 - 0x60u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_68 = rd32(sp0 - 0x68u);
                        }
                        else
                        {
    COW_AT(10183b2f)
                            wr32(sp0 - 0xa0u, 5u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t39);
                            g->esp = sp0 - 0x6cu;
                            cow_thiscall(g, rd32(rd32(t39) + 0xfcu), rd32(t39), 16, t39, 0u, 1u, 5u, rd32(sp0 - 0x9cu), loc_98, loc_94, loc_90, rd32(sp0 - 0x8cu), loc_88, loc_84, loc_80, rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
                            wr32(sp0 - 0x70u, 1u);
                            wr32(sp0 - 0x74u, 2u);
                            wr32(sp0 - 0x78u, 0u);
                            t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x7cu, t40);
                            g->esp = sp0 - 0x3cu;
                            cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 16, t40, 0u, 2u, 1u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
                            wr32(sp0 - 0x40u, 3u);
                            wr32(sp0 - 0x44u, 3u);
                            wr32(sp0 - 0x48u, 0u);
                            t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x4cu, t41);
                            g->esp = sp0 - 0x4cu;
                            cow_thiscall(g, rd32(rd32(t41) + 0xfcu), rd32(t41), 0);
                            wr32(sp0 - 0x50u, 6u);
                            wr32(sp0 - 0x54u, 4u);
                            wr32(sp0 - 0x58u, 0u);
                            t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x5cu, t42);
                            g->esp = sp0 - 0x5cu;
                            cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 0);
                            wr32(sp0 - 0x60u, 1u);
                            wr32(sp0 - 0x64u, 5u);
                            wr32(sp0 - 0x68u, 0u);
                            t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x6cu, t43);
                            g->esp = sp0 - 0x6cu;
                            cow_thiscall(g, rd32(rd32(t43) + 0xfcu), rd32(t43), 0);
                            wr32(sp0 - 0x70u, 3u);
                            wr32(sp0 - 0x74u, 6u);
                            wr32(sp0 - 0x78u, 0u);
                            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x7cu, t44);
                            g->esp = sp0 - 0x7cu;
                            cow_thiscall(g, rd32(rd32(t44) + 0xfcu), rd32(t44), 0);
                            wr32(sp0 - 0x80u, 1u);
                            wr32(sp0 - 0x84u, 1u);
                            wr32(sp0 - 0x88u, 1u);
                            t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x8cu, t45);
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 0);
                            wr32(sp0 - 0x90u, 1u);
                            wr32(sp0 - 0x94u, 4u);
                            wr32(sp0 - 0x98u, 1u);
                            t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x9cu, t46);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 0);
                            edi = 1u;
                            loc_80 = 1u;
                            loc_84 = 1u;
                            loc_88 = 1u;
                            loc_90 = 1u;
                            loc_94 = 4u;
                            loc_98 = 1u;
                            loc_70 = 3u;
                            loc_74 = 6u;
                            loc_78 = 0u;
                            loc_40 = 3u;
                            loc_44 = 3u;
                            loc_48 = 0u;
                            loc_50 = 6u;
                            loc_54 = 4u;
                            loc_58 = 0u;
                            loc_60 = 1u;
                            loc_64 = 5u;
                            loc_68 = 0u;
                        }
    COW_AT(10183bec)
                        wr32(sp0 - 0xa0u, 0u);
                        wr32(sp0 - 0xa4u, 0u);
                        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xa8u, t47);
                        eax = t47;
                        ecx = rd32(t47);
                        edx = rd32(COW_IMG(0x1045666cu));
                        loc_a8 = t47;
                        loc_a0 = 0u;
                    }
                    else
                    {
    COW_AT(101838bf)
                        if (edi != 0u)
                        {
    COW_AT(101838c7)
                            wr32(sp0 - 0xa0u, 4u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t14);
                            if (arg3 != 0u)
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
    COW_AT(101839e1)
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                                wr32(sp0 - 0xb0u, 2u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 0u);
                                t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t25);
                                g->esp = sp0 - 0xbcu;
                                cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 0);
                                wr32(sp0 - 0xc0u, 1u);
                                wr32(sp0 - 0xc4u, 3u);
                                wr32(sp0 - 0xc8u, 0u);
                                t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xccu, t26);
                                g->esp = sp0 - 0xccu;
                                cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 0);
                                wr32(sp0 - 0xd0u, 6u);
                                wr32(sp0 - 0xd4u, 1u);
                                wr32(sp0 - 0xd8u, 1u);
                                t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xdcu, t27);
                                g->esp = sp0 - 0xdcu;
                                cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 0);
                                wr32(sp0 - 0xe0u, 1u);
                                wr32(sp0 - 0xe4u, 2u);
                                wr32(sp0 - 0xe8u, 1u);
                                t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xecu, t28);
                                g->esp = sp0 - 0xecu;
                                cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 0);
                                wr32(sp0 - 0xf0u, 3u);
                                wr32(sp0 - 0xf4u, 3u);
                                wr32(sp0 - 0xf8u, 1u);
                                t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xfcu, t29);
                                g->esp = sp0 - 0xfcu;
                                cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 0);
                                wr32(sp0 - 0x100u, 6u);
                                wr32(sp0 - 0x104u, 4u);
                                wr32(sp0 - 0x108u, 0u);
                                t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x10cu, t30);
                                g->esp = sp0 - 0x10cu;
                                cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 0);
                                wr32(sp0 - 0x110u, 0u);
                                wr32(sp0 - 0x114u, 5u);
                                wr32(sp0 - 0x118u, 0u);
                                t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x11cu, t31);
                                g->esp = sp0 - 0x11cu;
                                cow_thiscall(g, rd32(rd32(t31) + 0xfcu), rd32(t31), 0);
                                wr32(sp0 - 0x120u, 3u);
                                wr32(sp0 - 0x124u, 6u);
                                wr32(sp0 - 0x128u, 0u);
                                t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x12cu, t32);
                                g->esp = sp0 - 0x12cu;
                                cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 0);
                                wr32(sp0 - 0x130u, 1u);
                                wr32(sp0 - 0x134u, 4u);
                                loc_c0 = 1u;
                                loc_ec = rd32(sp0 - 0xecu);
                                loc_f0 = 3u;
                                loc_f8 = 1u;
                                loc_fc = rd32(sp0 - 0xfcu);
                                loc_100 = 6u;
                                loc_104 = 4u;
                                loc_110 = 0u;
                                loc_114 = 5u;
                                loc_118 = 0u;
                                loc_120 = 3u;
                                loc_124 = 6u;
                                loc_128 = 0u;
                                loc_130 = 1u;
                                loc_134 = 4u;
                                loc_e8 = 1u;
                                loc_f4 = 3u;
                            }
                            else
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
    COW_AT(101838e9)
                                g->esp = sp0 - 0xacu;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                                wr32(sp0 - 0xb0u, 2u);
                                wr32(sp0 - 0xb4u, 2u);
                                wr32(sp0 - 0xb8u, 0u);
                                t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xbcu, t15);
                                g->esp = sp0 - 0xbcu;
                                cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 0);
                                wr32(sp0 - 0xc0u, 3u);
                                wr32(sp0 - 0xc4u, 3u);
                                wr32(sp0 - 0xc8u, 0u);
                                t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xccu, t16);
                                g->esp = sp0 - 0xccu;
                                cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 0);
                                wr32(sp0 - 0xd0u, 6u);
                                wr32(sp0 - 0xd4u, 1u);
                                wr32(sp0 - 0xd8u, 1u);
                                t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xdcu, t17);
                                g->esp = sp0 - 0xdcu;
                                cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 0);
                                wr32(sp0 - 0xe0u, 1u);
                                wr32(sp0 - 0xe4u, 2u);
                                wr32(sp0 - 0xe8u, 1u);
                                t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xecu, t18);
                                g->esp = sp0 - 0xe4u;
                                cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 2, t18, 1u);
                                wr32(sp0 - 0xe8u, 0u);
                                wr32(sp0 - 0xecu, 3u);
                                wr32(sp0 - 0xf0u, 1u);
                                t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xf4u, t19);
                                g->esp = sp0 - 0xf4u;
                                cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 0);
                                wr32(sp0 - 0xf8u, 5u);
                                wr32(sp0 - 0xfcu, 4u);
                                wr32(sp0 - 0x100u, 0u);
                                t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x104u, t20);
                                g->esp = sp0 - 0x104u;
                                cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 0);
                                wr32(sp0 - 0x108u, 2u);
                                wr32(sp0 - 0x10cu, 5u);
                                wr32(sp0 - 0x110u, 0u);
                                t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x114u, t21);
                                g->esp = sp0 - 0xfcu;
                                cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 6, t21, 0u, 5u, 2u, rd32(sp0 - 0x104u), 0u);
                                wr32(sp0 - 0x100u, 3u);
                                wr32(sp0 - 0x104u, 6u);
                                wr32(sp0 - 0x108u, 0u);
                                t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x10cu, t22);
                                g->esp = sp0 - 0x10cu;
                                cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 0);
                                wr32(sp0 - 0x110u, 6u);
                                wr32(sp0 - 0x114u, 4u);
                                wr32(sp0 - 0x118u, 1u);
                                t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x11cu, t23);
                                g->esp = sp0 - 0x11cu;
                                cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 0);
                                wr32(sp0 - 0x120u, 1u);
                                wr32(sp0 - 0x124u, 5u);
                                wr32(sp0 - 0x128u, 1u);
                                t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x12cu, t24);
                                g->esp = sp0 - 0x12cu;
                                cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 0);
                                wr32(sp0 - 0x130u, 0u);
                                wr32(sp0 - 0x134u, 6u);
                                loc_c0 = 3u;
                                loc_ec = 3u;
                                loc_f0 = 1u;
                                loc_f8 = 5u;
                                loc_fc = 4u;
                                loc_100 = 3u;
                                loc_104 = 6u;
                                loc_110 = 6u;
                                loc_114 = 4u;
                                loc_118 = 1u;
                                loc_120 = 1u;
                                loc_124 = 5u;
                                loc_128 = 1u;
                                loc_130 = 0u;
                                loc_134 = 6u;
                                loc_e8 = 0u;
                                loc_f4 = rd32(sp0 - 0xf4u);
                            }
    COW_AT(10183aab)
                            wr32(sp0 - 0x138u, 1u);
                            t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x13cu, t33);
                            g->esp = sp0 - 0xfcu;
                            cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 16, t33, 1u, loc_134, loc_130, rd32(sp0 - 0x12cu), loc_128, loc_124, loc_120, rd32(sp0 - 0x11cu), loc_118, loc_114, loc_110, rd32(sp0 - 0x10cu), 0u, loc_104, loc_100);
                            wr32(sp0 - 0x100u, 1u);
                            wr32(sp0 - 0x104u, 1u);
                            wr32(sp0 - 0x108u, 2u);
                            t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0x10cu, t34);
                            g->esp = sp0 - 0xccu;
                            cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 16, t34, 2u, 1u, 1u, rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), 2u, 1u, rd32(sp0 - 0xdcu), 1u, 1u, 6u);
                            wr32(sp0 - 0xd0u, 1u);
                            wr32(sp0 - 0xd4u, 4u);
                            wr32(sp0 - 0xd8u, 2u);
                            t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xdcu, t35);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 16, t35, 2u, 4u, 1u, rd32(sp0 - 0xccu), 0u, 3u, rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), 0u, 2u, 2u, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                            edi = 0u;
                            loc_80 = rd32(sp0 - 0x80u);
                            loc_84 = rd32(sp0 - 0x84u);
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_90 = rd32(sp0 - 0x90u);
                            loc_94 = rd32(sp0 - 0x94u);
                            loc_98 = rd32(sp0 - 0x98u);
                        }
    COW_AT(10183aef)
                        if (rd32(rd32(esi - 0x24u) + 0x40u) == 0u)
                        {
                            eax = rd32(esi - 0x24u);
    COW_AT(10183b0f)
                            t37 = rd32(eax + 0x44u);
                            wr32(sp0 - 0xa0u, t37);
                            wr32(sp0 - 0xa4u, 0u);
                            t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t38);
                            eax = t37;
                            ecx = rd32(t38);
                            edx = t38;
                            loc_a8 = t38;
                            loc_a0 = t37;
                            loc_70 = rd32(sp0 - 0x70u);
                            loc_74 = rd32(sp0 - 0x74u);
                            loc_78 = rd32(sp0 - 0x78u);
                            loc_40 = rd32(sp0 - 0x40u);
                            loc_44 = rd32(sp0 - 0x44u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_50 = rd32(sp0 - 0x50u);
                            loc_54 = rd32(sp0 - 0x54u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_60 = rd32(sp0 - 0x60u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_68 = rd32(sp0 - 0x68u);
                        }
                        else
                        {
                            ecx = rd32(rd32(esi - 0x24u) + 0x40u);
    COW_AT(10183af9)
                            wr32(sp0 - 0xa0u, ecx);
                            wr32(sp0 - 0xa4u, 0u);
                            t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t36);
                            eax = ecx;
                            edx = t36;
                            loc_a8 = t36;
                            loc_a0 = ecx;
                            ecx = rd32(t36);
                            loc_70 = rd32(sp0 - 0x70u);
                            loc_74 = rd32(sp0 - 0x74u);
                            loc_78 = rd32(sp0 - 0x78u);
                            loc_40 = rd32(sp0 - 0x40u);
                            loc_44 = rd32(sp0 - 0x44u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_50 = rd32(sp0 - 0x50u);
                            loc_54 = rd32(sp0 - 0x54u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_60 = rd32(sp0 - 0x60u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_68 = rd32(sp0 - 0x68u);
                        }
                    }
    COW_AT(10183bfc)
                    g->esp = sp0 - 0xa4u;
                    cow_thiscall(g, rd32(ecx + 0xf4u), ecx, 1, loc_a8);
                    t48 = rd32(esi - 0x10u) + rd32(rd32(sp0 - 0x94u) + 0x38d48u);
                    wr32(rd32(sp0 - 0x94u) + 0x38d48u, t48);
                    t49 = rd32(arg2 + 0x24u);
                    wr32(sp0 - 0xa8u, t49);
                    wr32(sp0 - 0xacu, rd32(esi));
                    wr32(sp0 - 0xb0u, 0u);
                    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xb4u, t50);
                    g->edx = rd32(esi);
                    t51 = rd32(esi);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 6, t50, 0u, t51, t49, 0u, rd32(sp0 - 0xa0u));
                    t52 = g->edx;
                    t53 = rd32(esi - 0x10u);
                    wr32(sp0 - 0xa0u, t53);
                    wr32(sp0 - 0xa4u, 0u);
                    t54 = rd32(arg2 + 0x2cu);
                    wr32(sp0 - 0xa8u, t54);
                    g->ebx = ebx;
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t54, 0u, t53);
                    loc_80 = rd32(sp0 - 0x80u);
                    loc_84 = rd32(sp0 - 0x84u);
                    loc_88 = rd32(sp0 - 0x88u);
                    loc_90 = rd32(sp0 - 0x90u);
                    loc_94 = rd32(sp0 - 0x94u);
                    loc_98 = rd32(sp0 - 0x98u);
                }
    COW_AT(10183c46)
                wr32(sp0 - 0x84u, loc_84 + 1u);
                if ((int32_t)(loc_84 + 1u) < (int32_t)rd32(ebx))
                {
                    esi = esi + 0xc0u;
                    loc_84 = loc_84 + 1u;
                    goto L_101838ab;
                }
                loc_84 = loc_84 + 1u;
            }
    COW_AT(10183c5f)
            wr32(sp0 - 0x88u, loc_88 + 1u);
            if ((int32_t)(loc_88 + 1u) < (int32_t)rd32(arg2 + 0x44u))
            {
                ebx = ebx + 0x24u;
                loc_88 = loc_88 + 1u;
                goto L_10183893;
            }
            loc_88 = loc_88 + 1u;
    COW_AT(10183c76)
            if (edi == 0u) goto L_10183cda;
L_10183c7a: ;
    COW_AT(10183c7a)
            wr32(sp0 - 0xa0u, 5u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, 0u);
            t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t55);
            g->esp = sp0 - 0xacu;
            cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 0);
            wr32(sp0 - 0xb0u, 2u);
            wr32(sp0 - 0xb4u, 2u);
            wr32(sp0 - 0xb8u, 0u);
            t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xbcu, t56);
            g->esp = sp0 - 0x7cu;
            cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 16, t56, 0u, 2u, 2u, rd32(sp0 - 0xacu), 0u, 1u, 5u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
            wr32(sp0 - 0x80u, 1u);
            wr32(sp0 - 0x84u, 3u);
            wr32(sp0 - 0x88u, 0u);
            t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x8cu, t57);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 0);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 1u);
            wr32(sp0 - 0x98u, 1u);
            t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x9cu, t58);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 0);
            loc_90 = 1u;
            loc_94 = 1u;
            loc_98 = 1u;
L_10183cda: ;
    COW_AT(10183cda)
            wr32(sp0 - 0xa0u, 6u);
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 0u);
            t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t59);
            g->esp = sp0 - 0xacu;
            cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 0);
            wr32(sp0 - 0xb0u, 0u);
            wr32(sp0 - 0xb4u, 5u);
            wr32(sp0 - 0xb8u, 0u);
            t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xbcu, t60);
            g->esp = sp0 - 0xbcu;
            cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 0);
            wr32(sp0 - 0xc0u, 2u);
            wr32(sp0 - 0xc4u, 6u);
            wr32(sp0 - 0xc8u, 0u);
            t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xccu, t61);
            g->esp = sp0 - 0x90u;
            cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 15, t61, 0u, 6u, 2u, rd32(sp0 - 0xbcu), 0u, 5u, 0u, rd32(sp0 - 0xacu), 0u, 4u, 6u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
            wr32(sp0 - 0x94u, 1u);
            wr32(sp0 - 0x98u, 4u);
            wr32(sp0 - 0x9cu, 1u);
            t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xa0u, t62);
            g->eax = t62;
            t63 = rd32(t62);
            g->esp = sp0 - 0x9cu;
            t64 = cow_thiscall(g, rd32(t63 + 0xfcu), t63, 1, t62);
            t65 = g->ecx;
            if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) != 0u)
            {
                loc_90 = rd32(sp0 - 0x90u);
                loc_94 = 1u;
                loc_98 = 4u;
                loc_9c = 1u;
            }
            else
            {
                ecx = t65;
                edx = rd32(sp0 - 0x8cu);
    COW_AT(10183d48)
                wr32(sp0 - 0xa0u, rd32(COW_IMG(0x10621c00u)));
                g->esp = sp0 - 0x9cu;
                cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
                loc_90 = rd32(sp0 - 0x90u);
                loc_94 = 1u;
                loc_98 = 4u;
                loc_9c = 1u;
            }
        }
    }
    COW_AT(10183d56)
    g->ebx = loc_90;
    g->esi = loc_98;
    g->edi = loc_9c;
    g->ebp = loc_94;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10183760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101837b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        self = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x9cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10183822u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183831u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183880u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0x98u, 0u);
        wr32(sp0 - 0x94u, 0xeu);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x84u, 0xdu);
        wr32(sp0 - 0x80u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10183893u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101838abu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838b4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0xacu;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa0u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x101839e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0xacu;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa0u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x10183aabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_c0;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0x134u;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x108u, 0u);
        wr32(sp0 - 0xe4u, 2u);
        wr32(sp0 - 0xe0u, 1u);
        wr32(sp0 - 0xd8u, 1u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd0u, 6u);
        wr32(sp0 - 0xc8u, 0u);
        wr32(sp0 - 0xc4u, 3u);
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xb4u, 2u);
        wr32(sp0 - 0xb0u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10183aefu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183af9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b26u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183becu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183bfcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_104;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        loc_100 = rd32(sp0 - 0x100u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0xa8u;
        g->ebp = arg2;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10183c46u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c5fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183c7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183cdau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a8;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x9cu, 1u);
        wr32(sp0 - 0x98u, 4u);
        wr32(sp0 - 0x94u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10183d56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a8;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10183760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10183760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
