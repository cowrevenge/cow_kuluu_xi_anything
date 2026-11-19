/* f_0x1029af40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1029af40(Guest* g)
{
    double d43;
    double d47;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029af4eu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x34u); goto E_1029af4e;
    case 0x1029af5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1029af5b;
    case 0x1029af66u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x34u); goto E_1029af66;
    case 0x1029af81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1029af81;
    case 0x1029af8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1029af8e;
    case 0x1029af99u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1029af99;
    case 0x1029afa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1029afa4;
    case 0x1029afabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afab;
    case 0x1029afbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afbc;
    case 0x1029afcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afca;
    case 0x1029afd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afd8;
    case 0x1029afdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afdb;
    case 0x1029afe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afe0;
    case 0x1029afe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afe4;
    case 0x1029afedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029afed;
    case 0x1029aff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029aff0;
    case 0x1029b002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029b002;
    case 0x1029b006u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1029b006;
    case 0x1029b029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b029;
    case 0x1029b034u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b034;
    case 0x1029b050u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b050;
    case 0x1029b05bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b05b;
    case 0x1029b074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b074;
    case 0x1029b082u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b082;
    case 0x1029b08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b08c;
    case 0x1029b09eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b09e;
    case 0x1029b0b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b0b0;
    case 0x1029b0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b0ba;
    case 0x1029b0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b0d4;
    case 0x1029b0d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029b0d7;
    case 0x1029b107u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1029b107;
    default: break;
    }
#endif

    COW_AT(1029af40)
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    if (rd32(sp0 + 8u) == 4u) goto L_1029af66;
    eax = rd32(sp0 + 8u);
    COW_AT(1029af4e)
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, eax);
    wr32(sp0 - 0x40u, COW_IMG(0x103bc634u));
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc634u), eax);
    COW_AT(1029af5b)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x34u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x30u);
    return 0u;
L_1029af66: ;
    COW_AT(1029af66)
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x38u, t1);
    t2 = rd32(sp0 + 4u) + 0x50u;
    wr32(sp0 - 0x3cu, t2);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, sp0 + 8u);
    g->eax = t2;
    g->ecx = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, sp0 + 8u, 4u, 1u, t2, t1, in_esi, in_ebp, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebp = t1;
    COW_AT(1029af81)
    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        esi = eax;
        eax = rd32(sp0 + 8u);
        goto L_1029afa4;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(1029af8e)
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bc5fcu));
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc5fcu), eax);
    COW_AT(1029af99)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x34u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x30u);
    return 0u;
L_1029afa4: ;
    COW_AT(1029afa4)
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x3cu;
    t6 = cow_stdcall(g, COW_IMG(0x1027b5a0u), 0);
    t7 = g->ecx;
    eax = t6;
    ecx = t7;
    COW_AT(1029afab)
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x40u, t8);
    wr32(sp0 - 0x44u, eax);
    wr32(sp0 + 4u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0 - 0x28u;
    t9 = cow_cdecl(g, COW_IMG(0x1027c4e0u), 7, eax, t8, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    edi = eax;
    eax = t9;
    COW_AT(1029afbc)
    if (ebp == 0u)
    {
        ebx = rd32(sp0 + 8u) << 4u;
    }
    else
    {
        ebx = rd32(sp0 + 8u) << 4u;
    COW_AT(1029afca)
        wr32(sp0 - 0x40u, ebx * 4u);
        wr32(sp0 - 0x44u, esi);
        g->ecx = ecx;
        g->esp = sp0 - 0x34u;
        t12 = cow_call_regs(g, COW_IMG(0x102924b0u), ebx * 4u, g->ecx, edx, 1, 4, esi, ebx * 4u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    COW_AT(1029afd8)
    }
    COW_AT(1029afdb)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t15 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(1029afe0)
    if (eax != 0u)
    {
    COW_AT(1029afe4)
        wr32(sp0 - 0x40u, ebx);
        wr32(sp0 - 0x44u, 4u);
        wr32(sp0 - 0x48u, esi);
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, esi, 4u, ebx, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    COW_AT(1029afed)
    }
    COW_AT(1029aff0)
    wr32(sp0 - 0x2cu, 0u);
    if ((int32_t)rd32(sp0 + 8u) > 0)
    {
    COW_AT(1029b002)
        wr32(sp0 + 0xcu, 0u);
        ebp = 0u;
        loc_2c = 0u;
L_1029b006: ;
    COW_AT(1029b006)
        t18 = rd32(esi + 8u);
        wr32(sp0 - 0x40u, t18);
        t19 = rd32(esi + 4u);
        wr32(sp0 - 0x44u, t19);
        wr32(sp0 - 0x48u, rd32(esi));
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        g->eax = rd32(esi);
        g->ecx = sp0 - 0x28u;
        t20 = rd32(esi);
        t21 = rd32(edi + 0x20u);
        t22 = rd32(edi + 0x24u);
        t23 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x3cu;
        t24 = cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x28u, t20, t19, t18);
        t25 = g->ecx;
        eax = t24;
        ecx = t25;
        ebx = ebp + t21;
        edi = t22 + t23;
    COW_AT(1029b029)
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x54u, edi);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x102915d0u), 1, edi);
    COW_AT(1029b034)
        t26 = rd32(esi + 0x18u);
        wr32(sp0 - 0x58u, t26);
        t27 = rd32(esi + 0x14u);
        wr32(sp0 - 0x5cu, t27);
        t28 = rd32(esi + 0x10u);
        wr32(sp0 - 0x60u, t28);
        t29 = rd32(esi + 0xcu);
        wr32(sp0 - 0x64u, t29);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        g->eax = t29;
        g->ecx = sp0 - 0x10u;
        g->esp = sp0 - 0x54u;
        t30 = cow_cdecl(g, COW_IMG(0x1027a740u), 5, sp0 - 0x10u, t29, t28, t27, t26);
        t31 = g->ecx;
        eax = t30;
        ecx = t31;
        esi = esi + 0xcu;
    COW_AT(1029b050)
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x70u, edi);
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10291600u), 1, edi);
    COW_AT(1029b05b)
        t32 = rd32(esi + 0x18u);
        wr32(sp0 - 0x74u, t32);
        t33 = rd32(esi + 0x14u);
        wr32(sp0 - 0x78u, t33);
        t34 = rd32(esi + 0x10u);
        wr32(sp0 - 0x7cu, t34);
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        g->eax = sp0 - 0x1cu;
        g->edx = t34;
        g->esp = sp0 - 0x70u;
        t35 = cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x1cu, t34, t33, t32);
        t36 = g->edx;
        eax = t35;
        edx = t36;
        esi = esi + 0x10u;
    COW_AT(1029b074)
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, edi);
        g->eax = eax;
        g->ecx = sp0 - 0x1cu;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t37 = cow_cdecl(g, COW_IMG(0x10291610u), 1, edi);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    COW_AT(1029b082)
        wr32(sp0 - 0x48u, esi + 0xcu);
        wr32(sp0 - 0x4cu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t40 = cow_cdecl(g, COW_IMG(0x102916f0u), 2, edi, esi + 0xcu);
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
        esi = esi + 0xcu;
    COW_AT(1029b08c)
        d43 = (double)(float)(double)(int32_t)rd32(esi + 0xcu);
        wrf32(sp0 - 0x40u, (float)d43);
        wr32(sp0 - 0x44u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t44 = cow_cdecl(g, COW_IMG(0x102917a0u), 2, edi, cow_f2bits(d43));
        t45 = g->ecx;
        t46 = g->edx;
        eax = t44;
        ecx = t45;
        edx = t46;
        esi = esi + 0xcu;
    COW_AT(1029b09e)
        d47 = (double)(float)(double)(int32_t)rd32(esi + 4u);
        wrf32(sp0 - 0x40u, (float)d47);
        wr32(sp0 - 0x44u, edi);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x102917b0u), 2, edi, cow_f2bits(d47));
        esi = esi + 4u;
    COW_AT(1029b0b0)
        if ((int32_t)ebp <= 0)
        {
            esi = esi + 4u;
        }
        else
        {
            esi = esi + 4u;
    COW_AT(1029b0ba)
            wr32(sp0 - 0x40u, ebx);
            t48 = rd32(esi) * 0xf8u + rd32(rd32(sp0 + 4u) + 0x20u);
            wr32(sp0 - 0x44u, t48);
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10291f30u), 2, t48, ebx);
    COW_AT(1029b0d4)
        }
    COW_AT(1029b0d7)
        t49 = rd32(sp0 - 0x2cu) + 1u;
        t50 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x2cu, t49);
        t51 = rd32(sp0 + 0xcu) + 0x9cu;
        t52 = rd32(sp0 + 4u);
        t53 = rd32(sp0 + 8u);
        wr32(sp0 + 0xcu, t51);
        if ((int32_t)(t50 + 1u) < (int32_t)t53)
        {
            ebp = ebp + 0xf8u;
            esi = esi + 4u;
            edi = t52;
            loc_2c = t49;
            goto L_1029b006;
        }
        edi = t52;
    }
    COW_AT(1029b107)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x30u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029af40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029af4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029af5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1029af66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1029af81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029af8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029af99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afe0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afe4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029afedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1029aff0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029b002u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebp = 0u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1029b006u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1029b029u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b034u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b050u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b05bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b082u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1029b08cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1029b09eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b0b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b0bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b0d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b0d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x80u, sp0 - 0x1cu);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1029b107u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029af40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029af40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
