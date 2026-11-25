/* f_0x102b1310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b1310(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m18;
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_mc;
    double d37;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b132eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m18 = rd32(sp1 - 0x18u); al_mc = rd32(sp1 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b132e;
    case 0x102b1341u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b1341;
    case 0x102b1349u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b1349;
    case 0x102b134du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_mc = rd32(sp1 - 0xcu); goto E_102b134d;
    case 0x102b1355u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m18 = rd32(sp1 - 0x18u); al_mc = rd32(sp1 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b1355;
    case 0x102b1364u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m18 = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b1364;
    case 0x102b1377u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b1377;
    case 0x102b137fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b137f;
    case 0x102b138au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102b138a;
    case 0x102b138eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); goto E_102b138e;
    case 0x102b1396u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); al_m18 = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b1396;
    case 0x102b13aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b13ae;
    case 0x102b13c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); goto E_102b13c6;
    case 0x102b13ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b13dd;
    case 0x102b13e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b13e9;
    case 0x102b1407u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b1407;
    case 0x102b1412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1412;
    case 0x102b141bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b141b;
    case 0x102b142eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b142e;
    case 0x102b1436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1436;
    case 0x102b1441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1441;
    case 0x102b144cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b144c;
    case 0x102b1455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1455;
    case 0x102b146du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b146d;
    case 0x102b1475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1475;
    case 0x102b1480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b1480;
    case 0x102b148bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b148b;
    case 0x102b1493u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b1493;
    case 0x102b149fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b149f;
    case 0x102b14abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_mc = rd32(sp1 - 0xcu); goto E_102b14ab;
    case 0x102b14bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); goto E_102b14bf;
    default: break;
    }
#endif

    COW_AT(102b1310)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x18u, in_ebx);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    wr32(sp1 - 0xcu, 0u);
    if ((int32_t)rd32(arg1 + 0x3cu) <= 0)
    {
        ecx = self;
        loc_4 = in_ebp;
        al_m18 = in_ebx;
        al_m1c = in_esi;
        al_m20 = in_edi;
        al_mc = 0u;
        goto L_102b1355;
    }
    edx = in_edx;
    esi = 0u;
    loc_4 = in_ebp;
    al_m18 = in_ebx;
    al_m1c = in_esi;
    al_m20 = in_edi;
    al_mc = 0u;
L_102b132e: ;
    COW_AT(102b132e)
    t1 = rd32(rd32(esi * 4u + rd32(arg1 + 0x38u)) + 0x9cu);
    wr32(sp1 - 0x24u, t1);
    wr32(sp1 - 0x28u, arg1);
    g->eax = rd32(esi * 4u + rd32(arg1 + 0x38u));
    g->ecx = t1;
    g->edx = edx;
    t2 = rd32(esi * 4u + rd32(arg1 + 0x38u));
    g->esp = sp1 - 0x20u;
    t3 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, arg1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(102b1341)
    if (eax == 0xffffffffu)
    {
        al_mc = rd32(sp1 - 0xcu);
    }
    else
    {
    COW_AT(102b1349)
        t6 = rd32(sp1 - 0xcu);
        wr32(sp1 - 0xcu, t6 + 1u);
        al_mc = t6 + 1u;
    }
    COW_AT(102b134d)
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x3cu))
    {
        esi = esi + 1u;
        loc_4 = rd32(sp0 - 4u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m20 = rd32(sp1 - 0x20u);
        goto L_102b132e;
    }
    loc_4 = rd32(sp0 - 4u);
    al_m18 = rd32(sp1 - 0x18u);
    al_m1c = rd32(sp1 - 0x1cu);
    al_m20 = rd32(sp1 - 0x20u);
L_102b1355: ;
    COW_AT(102b1355)
    wr32(sp1 - 0x10u, 1u);
    if ((int32_t)rd32(arg1 + 0x3cu) <= 0)
    {
        eax = rd32(arg1 + 0x3cu);
        al_m10 = 1u;
        goto L_102b1396;
    }
    edi = 0u;
    al_m10 = 1u;
L_102b1364: ;
    COW_AT(102b1364)
    t7 = rd32(rd32(edi * 4u + rd32(arg1 + 0x38u)) + 0x9cu);
    wr32(sp1 - 0x24u, t7);
    wr32(sp1 - 0x28u, arg1);
    g->eax = t7;
    g->ecx = ecx;
    t8 = rd32(edi * 4u + rd32(arg1 + 0x38u));
    g->esp = sp1 - 0x20u;
    t9 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, arg1, t7);
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
    esi = t8;
    COW_AT(102b1377)
    if (eax == 0xffffffffu)
    {
        al_m10 = rd32(sp1 - 0x10u);
    }
    else
    {
    COW_AT(102b137f)
        if ((int32_t)rd32(sp1 - 0x10u) >= (int32_t)rd32(esi + 0x50u))
        {
            al_m10 = rd32(sp1 - 0x10u);
        }
        else
        {
            esi = rd32(esi + 0x50u);
    COW_AT(102b138a)
            wr32(sp1 - 0x10u, esi);
            al_m10 = esi;
        }
    }
    COW_AT(102b138e)
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x3cu))
    {
        edi = edi + 1u;
        loc_4 = rd32(sp0 - 4u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_mc = rd32(sp1 - 0xcu);
        goto L_102b1364;
    }
    eax = rd32(arg1 + 0x3cu);
    loc_4 = rd32(sp0 - 4u);
    al_m18 = rd32(sp1 - 0x18u);
    al_m1c = rd32(sp1 - 0x1cu);
    al_m20 = rd32(sp1 - 0x20u);
    al_mc = rd32(sp1 - 0xcu);
L_102b1396: ;
    COW_AT(102b1396)
    wr32(sp1 - 0x24u, al_m10);
    wr32(sp1 - 0x28u, al_mc);
    wr32(sp1 - 0x2cu, COW_IMG(0x103bf9d8u));
    wr32(sp1 - 0x30u, arg2);
    g->ebx = arg1;
    g->esp = sp1 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, al_mc, 1, 5, arg2, COW_IMG(0x103bf9d8u), al_mc, al_m10, al_m20);
    COW_AT(102b13ae)
    wr32(sp1 - 0x10u, 0u);
    wr32(sp1 - 0xcu, 0u);
    if ((int32_t)rd32(arg1 + 0x3cu) <= 0) goto L_102b14bf;
    al_m10 = 0u;
    al_mc = 0u;
L_102b13c6: ;
    COW_AT(102b13c6)
    t11 = rd32(rd32(al_m10 * 4u + rd32(arg1 + 0x38u)) + 0x9cu);
    wr32(sp1 - 0x24u, t11);
    wr32(sp1 - 0x28u, arg1);
    g->eax = rd32(arg1 + 0x38u);
    g->ecx = al_m10;
    g->edx = t11;
    t12 = rd32(arg1 + 0x38u);
    t13 = rd32(al_m10 * 4u + rd32(arg1 + 0x38u));
    g->esp = sp1 - 0x20u;
    t14 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, arg1, t11);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    esi = t13;
    COW_AT(102b13dd)
    if (eax == 0xffffffffu)
    {
    COW_AT(102b1493)
        t45 = rd32(sp1 - 0xcu);
        wr32(sp1 - 0x24u, t45);
        wr32(sp1 - 0x28u, esi);
        wr32(sp1 - 0x2cu, arg1);
        g->esp = sp1 - 0x20u;
        cow_cdecl(g, COW_IMG(0x102b10f0u), 3, arg1, esi, t45);
    COW_AT(102b149f)
        t46 = rd32(sp1 - 0xcu) + 1u;
        wr32(sp1 - 0xcu, t46);
        al_mc = t46;
    }
    else
    {
    COW_AT(102b13e9)
        t17 = rd32(esi + 0x30u);
        wr32(sp1 - 8u, t17);
        t18 = rd32(esi + 0x50u);
        wr32(sp1 - 0x24u, t18);
        wr32(sp1 - 0x28u, eax);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bf9c8u));
        wr32(sp1 - 0x30u, arg2);
        t19 = rd32(esi + 0x38u);
        wr32(sp1 - 4u, t19);
        g->ebx = arg1;
        g->eax = eax;
        g->ecx = t17;
        g->esp = sp1 - 0x1cu;
        t20 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, arg2, COW_IMG(0x103bf9c8u), eax, t18, rd32(sp1 - 0x20u));
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
        esi = t18;
    COW_AT(102b1407)
        wr32(sp1 - 0x34u, COW_IMG(0x103bf9c4u));
        wr32(sp1 - 0x38u, arg2);
        g->ebx = arg1;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x24u;
        t23 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9c4u), rd32(sp1 - 0x30u), COW_IMG(0x103bf9c8u), rd32(sp1 - 0x28u));
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(102b1412)
        if ((int32_t)esi <= 0)
        {
            ebx = 0u;
            goto L_102b1436;
        }
        ebx = 0u;
L_102b141b: ;
    COW_AT(102b141b)
        t26 = rd32(ebx * 4u + rd32(sp1 - 8u));
        wr32(sp1 - 0x24u, t26);
        wr32(sp1 - 0x28u, COW_IMG(0x103ba458u));
        wr32(sp1 - 0x2cu, arg2);
        g->ebx = ebx;
        g->eax = rd32(sp1 - 8u);
        g->ecx = t26;
        t27 = rd32(sp1 - 8u);
        g->esp = sp1 - 0x18u;
        t28 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba458u), t26, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(102b142e)
        if ((int32_t)(ebx + 1u) < (int32_t)esi)
        {
            ebx = ebx + 1u;
            goto L_102b141b;
        }
        ebx = ebx + 1u;
L_102b1436: ;
    COW_AT(102b1436)
        wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x14u;
        t31 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u));
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    COW_AT(102b1441)
        wr32(sp1 - 0x2cu, COW_IMG(0x103bf9c0u));
        wr32(sp1 - 0x30u, arg2);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x1cu;
        t34 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9c0u), rd32(sp1 - 0x28u), COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u));
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    COW_AT(102b144c)
        if ((int32_t)esi <= 0)
        {
            ebx = 0u;
            goto L_102b1475;
        }
        ebx = 0u;
L_102b1455: ;
    COW_AT(102b1455)
        d37 = (double)rdf32(ebx * 4u + rd32(sp1 - 4u));
        wrf64(sp1 - 0x28u, d37);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bf9bcu));
        wr32(sp1 - 0x30u, arg2);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        t38 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x1cu;
        t39 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t38, 1, 5, arg2, COW_IMG(0x103bf9bcu), cow_dlo(d37), cow_dhi(d37), rd32(sp1 - 0x20u));
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    COW_AT(102b146d)
        if ((int32_t)(ebx + 1u) < (int32_t)esi)
        {
            ebx = ebx + 1u;
            goto L_102b1455;
        }
        ebx = ebx + 1u;
L_102b1475: ;
    COW_AT(102b1475)
        wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
        wr32(sp1 - 0x28u, arg2);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x14u;
        t42 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u));
        t43 = g->ecx;
        t44 = g->edx;
        eax = t42;
        ecx = t43;
        edx = t44;
    COW_AT(102b1480)
        wr32(sp1 - 0x2cu, COW_IMG(0x103b3238u));
        wr32(sp1 - 0x30u, arg2);
        g->ebx = ebx;
        g->esp = sp1 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b3238u), rd32(sp1 - 0x28u), COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u));
    COW_AT(102b148b)
        al_mc = rd32(sp1 - 0xcu);
    }
    COW_AT(102b14ab)
    t47 = rd32(sp1 - 0x10u) + 1u;
    t48 = rd32(sp1 - 0x10u);
    wr32(sp1 - 0x10u, t47);
    if ((int32_t)(t48 + 1u) < (int32_t)rd32(arg1 + 0x3cu))
    {
        al_m10 = t47;
        goto L_102b13c6;
    }
L_102b14bf: ;
    COW_AT(102b14bf)
    g->ebx = rd32(sp1 - 0x18u);
    g->esi = rd32(sp1 - 0x1cu);
    g->edi = rd32(sp1 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b1310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102b132eu:
    {
        uint32_t al_m18;
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m18 = rd32(sp1 - 0x18u);
        al_mc = rd32(sp1 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1341u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1349u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b134du:
    {
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1355u:
    {
        uint32_t al_m18;
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m18 = rd32(sp1 - 0x18u);
        al_mc = rd32(sp1 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b1364u:
    {
        uint32_t al_m10;
        uint32_t al_m18;
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m18 = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b1377u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b137fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b138au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b138eu:
    {
        uint32_t al_m10;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m10 = rd32(sp1 - 0x10u);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b1396u:
    {
        uint32_t al_m10;
        uint32_t al_m18;
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m18 = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b13aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b13c6u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b13ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b13e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1407u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp1 - 0x2cu, COW_IMG(0x103bf9c8u));
        (void)sp0;
        return 1;
    }
    case 0x102b1412u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b141bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b142eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1436u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1441u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
        (void)sp0;
        return 1;
    }
    case 0x102b144cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1455u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b146du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1475u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1480u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
        (void)sp0;
        return 1;
    }
    case 0x102b148bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b1493u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b149fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x2cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b14abu:
    {
        uint32_t al_mc;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x20u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b14bfu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
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
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b1310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
