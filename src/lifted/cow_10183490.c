/* f_0x10183490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10183490(Guest* g)
{
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_a0;
    uint32_t loc_a8;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t7;
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
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101834b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_101834b9;
    case 0x101834dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); goto E_101834df;
    case 0x101834e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); goto E_101834e7;
    case 0x1018354bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1018354b;
    case 0x10183559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10183559;
    case 0x10183564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10183564;
    case 0x10183567u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); goto E_10183567;
    case 0x1018357du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1018357d;
    case 0x10183595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183595;
    case 0x101835adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_101835ad;
    case 0x101835b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_101835b8;
    case 0x101835cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101835cb;
    case 0x101835e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); goto E_101835e1;
    case 0x101835e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101835e4;
    case 0x101835edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101835ed;
    case 0x101835f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101835f4;
    case 0x101835f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101835f8;
    case 0x10183611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183611;
    case 0x10183628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); goto E_10183628;
    case 0x1018363fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1018363f;
    case 0x10183649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183649;
    case 0x1018365cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1018365c;
    case 0x10183670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183670;
    case 0x10183675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183675;
    case 0x10183691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183691;
    case 0x101836a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101836a8;
    case 0x101836b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101836b8;
    case 0x101836beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101836be;
    case 0x101836d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); goto E_101836d9;
    case 0x101836eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101836ee;
    case 0x101836fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101836fb;
    case 0x10183715u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183715;
    case 0x1018372cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1018372c;
    case 0x1018373au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1018373a;
    case 0x10183746u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10183746;
    case 0x10183749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183749;
    default: break;
    }
#endif

    COW_AT(10183490)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, self + 0x38e5cu);
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    wr32(sp0 - 0x8cu, self);
    g->esp = sp0 - 0x9cu;
    cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x80u, arg1, self + 0x38e5cu);
    COW_AT(101834b9)
    esi = sp0 - 0x80u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa0u, arg2 + 0x70u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = arg2 + 0x70u;
    g->esp = sp0 - 0x9cu;
    t1 = cow_call_regs(g, COW_IMG(0x10181bb0u), sp0 - 0x40u, g->ecx, g->edx, 0, 2, sp0 - 0x40u, arg2 + 0x70u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101834df)
    if (eax == 0u)
    {
    COW_AT(101834e7)
        esi = arg1;
        edi = sp0 - 0x80u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        d3 = fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(arg2 + 0xe0u));
        wr32(sp0 - 0xa4u, 0x100u);
        wrf32(sp0 - 0x50u, (float)(double)(float)d3);
        d4 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(arg2 + 0xe4u));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d4);
        d5 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(arg2 + 0xe8u));
        wrf32(sp0 - 0x48u, (float)(double)(float)d5);
        d6 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(arg2 + 0xecu));
        wrf32(sp0 - 0x44u, (float)(double)(float)d6);
        g->eax = eax;
        t7 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x9cu;
        t8 = cow_thiscall(g, COW_IMG(0x1000bd50u), t7, 2, 0x100u, sp0 - 0x80u);
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
    COW_AT(1018354b)
        if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
        {
            edx = rd32(sp0 - 0x8cu);
    COW_AT(10183559)
            wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1065c4d0u)));
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x1065c4d0u)));
    COW_AT(10183564)
        }
    COW_AT(10183567)
        t10 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0xa0u, t10);
        t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa4u, t11);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t11) + 0x130u), t10, 2, t11, t10);
    COW_AT(1018357d)
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xdu);
        wr32(sp0 - 0xa8u, 0u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t12);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0xdu, 1u);
    COW_AT(10183595)
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xeu);
        wr32(sp0 - 0xa8u, 0u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t13);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t14 = rd32(t13);
        t15 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(t14 + 0xfcu), t14, 4, t13, 0u, 0xeu, 1u);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    COW_AT(101835ad)
        if (rd32(arg2 + 0x60u) != 0u)
        {
            ebp = rd32(arg2 + 0x60u);
    COW_AT(101835b8)
            wr32(sp0 - 0x88u, 0u);
            if ((int32_t)rd32(arg2 + 0x44u) <= 0) goto L_1018372c;
            ebx = 0xffffffffu;
            loc_88 = 0u;
L_101835cb: ;
    COW_AT(101835cb)
            wr32(sp0 - 0x84u, 0u);
            if ((int32_t)rd32(ebp) > 0)
            {
                esi = rd32(ebp + 4u);
    COW_AT(101835e1)
                esi = esi + 0x28u;
                loc_84 = 0u;
L_101835e4: ;
    COW_AT(101835e4)
                if (rd32(esi) != 0u)
                {
    COW_AT(101835ed)
                    if (rd32(esi - 0x24u) == 0u)
                    {
    COW_AT(10183670)
                        if (ebx != 1u)
                        {
    COW_AT(10183675)
                            wr32(sp0 - 0xa0u, 2u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t24);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 1u, 2u);
    COW_AT(10183691)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t25);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 2u, 1u);
                            ebx = 1u;
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_84 = rd32(sp0 - 0x84u);
                        }
    COW_AT(101836a8)
                        wr32(sp0 - 0xa0u, 0u);
                        wr32(sp0 - 0xa4u, 0u);
                        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xa8u, t26);
                        eax = t26;
                        ecx = rd32(t26);
                        edx = rd32(COW_IMG(0x1045666cu));
                        loc_a8 = t26;
                        loc_a0 = 0u;
                    }
                    else
                    {
    COW_AT(101835f4)
                        if (ebx != 0u)
                        {
    COW_AT(101835f8)
                            wr32(sp0 - 0xa0u, 5u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t18);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 0u, 1u, 5u);
    COW_AT(10183611)
                            wr32(sp0 - 0xa0u, 2u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t19);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 0u, 2u, 2u);
    COW_AT(10183628)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 3u);
                            wr32(sp0 - 0xa8u, 0u);
                            t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t20);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 3u, 1u);
                            ebx = 0u;
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_84 = rd32(sp0 - 0x84u);
                        }
    COW_AT(1018363f)
                        if (rd32(rd32(esi - 0x24u) + 0x40u) == 0u)
                        {
                            eax = rd32(esi - 0x24u);
    COW_AT(1018365c)
                            t22 = rd32(eax + 0x44u);
                            wr32(sp0 - 0xa0u, t22);
                            wr32(sp0 - 0xa4u, 0u);
                            t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t23);
                            eax = t22;
                            ecx = rd32(t23);
                            edx = t23;
                            loc_a8 = t23;
                            loc_a0 = t22;
                        }
                        else
                        {
                            ecx = rd32(rd32(esi - 0x24u) + 0x40u);
    COW_AT(10183649)
                            wr32(sp0 - 0xa0u, ecx);
                            wr32(sp0 - 0xa4u, 0u);
                            t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t21);
                            eax = ecx;
                            edx = t21;
                            loc_a8 = t21;
                            loc_a0 = ecx;
                            ecx = rd32(t21);
                        }
                    }
    COW_AT(101836b8)
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(ecx + 0xf4u), ecx, 3, loc_a8, 0u, loc_a0);
    COW_AT(101836be)
                    t27 = rd32(arg2 + 0x24u);
                    wr32(sp0 - 0xa0u, t27);
                    wr32(sp0 - 0xa4u, rd32(esi));
                    wr32(sp0 - 0xa8u, 0u);
                    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xacu, t28);
                    g->edx = rd32(esi);
                    t29 = rd32(esi);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t28, 0u, t29, t27);
                    t30 = g->edx;
                    edx = t30;
    COW_AT(101836d9)
                    t31 = rd32(esi - 0x10u);
                    wr32(sp0 - 0xa0u, t31);
                    wr32(sp0 - 0xa4u, 0u);
                    t32 = rd32(arg2 + 0x2cu);
                    wr32(sp0 - 0xa8u, t32);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t32, 0u, t31);
    COW_AT(101836ee)
                    t33 = rd32(esi - 0x10u);
                    wr32(rd32(sp0 - 0x8cu) + 0x38d48u, t33 + rd32(rd32(sp0 - 0x8cu) + 0x38d48u));
                    edx = t33;
                    loc_88 = rd32(sp0 - 0x88u);
                    loc_84 = rd32(sp0 - 0x84u);
                }
    COW_AT(101836fb)
                wr32(sp0 - 0x84u, loc_84 + 1u);
                if ((int32_t)(loc_84 + 1u) < (int32_t)rd32(ebp))
                {
                    esi = esi + 0xc0u;
                    loc_84 = loc_84 + 1u;
                    goto L_101835e4;
                }
            }
    COW_AT(10183715)
            wr32(sp0 - 0x88u, loc_88 + 1u);
            if ((int32_t)(loc_88 + 1u) < (int32_t)rd32(arg2 + 0x44u))
            {
                ebp = ebp + 0x24u;
                loc_88 = loc_88 + 1u;
                goto L_101835cb;
            }
            ecx = rd32(arg2 + 0x44u);
L_1018372c: ;
    COW_AT(1018372c)
            if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
            {
                eax = rd32(sp0 - 0x8cu);
    COW_AT(1018373a)
                wr32(sp0 - 0xa0u, rd32(COW_IMG(0x10621c00u)));
                g->esp = sp0 - 0x9cu;
                cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    COW_AT(10183746)
            }
        }
    }
    COW_AT(10183749)
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10183490(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101834b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101834dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x101834e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1018354bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183559u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183564u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xa0u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183567u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018357du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183595u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101835e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835edu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101835f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183611u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183628u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1018363fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183649u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1018365cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183670u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183675u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183691u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 1u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101836a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101836b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa8u;
        g->edi = arg2;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101836beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101836d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101836eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101836fbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183715u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1018372cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x1018373au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183746u:
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
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10183749u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10183490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10183490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
