/* f_0x1003d220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003d220(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d17;
    double d2;
    double d4;
    double d47;
    double d73;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_30_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003d246u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003d246;
    case 0x1003d24du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003d24d;
    case 0x1003d276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003d276;
    case 0x1003d29cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003d29c;
    case 0x1003d2abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d2ab;
    case 0x1003d2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d2b0;
    case 0x1003d2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d2c7;
    case 0x1003d2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d2ca;
    case 0x1003d2e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d2e3;
    case 0x1003d2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003d2fe;
    case 0x1003d32du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d32d;
    case 0x1003d350u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d350;
    case 0x1003d35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d35e;
    case 0x1003d389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d389;
    case 0x1003d39eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d39e;
    case 0x1003d3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d3b1;
    case 0x1003d3dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d3db;
    case 0x1003d3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d3f0;
    case 0x1003d403u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d403;
    case 0x1003d42du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d42d;
    case 0x1003d442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d442;
    case 0x1003d464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d464;
    case 0x1003d47cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d47c;
    case 0x1003d484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1003d484;
    case 0x1003d48du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d48d;
    case 0x1003d493u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d493;
    case 0x1003d498u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_1003d498;
    case 0x1003d4b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d4b7;
    case 0x1003d4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; goto E_1003d4d3;
    case 0x1003d4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d4e9;
    case 0x1003d506u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d506;
    case 0x1003d547u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d547;
    case 0x1003d578u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d578;
    case 0x1003d592u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d592;
    case 0x1003d595u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d595;
    case 0x1003d5a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1003d5a5;
    case 0x1003d5adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; goto E_1003d5ad;
    case 0x1003d5b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003d5b6;
    default: break;
    }
#endif

    COW_AT(1003d220)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd32(COW_IMG(0x1047bfa8u));
    d2 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x78u, (float)d2);
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1003d246)
        wr32(self + 0x78u, 0u);
    }
    COW_AT(1003d24d)
    t3 = rd8(rd32(self + 0x74u) + 0x71u);
    wr32(sp0 - 0x30u, t3);
    d4 = fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(sp0 - 0x30u, (float)(double)(float)d4);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = rd32(self + 0x74u);
        edx = t3;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
        edx = t3;
        loc_30_f = (double)(float)d4;
    COW_AT(1003d276)
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0u);
        t5 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t6 = rd32(COW_IMG(0x1047cf7cu));
        t7 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t6 + 0xa90u, t5);
        wr32(sp0 - 0x48u, t7);
        g->esp = sp0 - 0x3cu;
        cow_thiscall(g, COW_IMG(0x1003be10u), self + 0x34u, 3, t7, 0u, 0u);
        d8 = cow_take_float(g);
        edi = t7;
        x0 = d8;
    COW_AT(1003d29c)
        eax = self + 0x80u;
        ecx = edi;
        ebx = 4u;
L_1003d2ab: ;
    COW_AT(1003d2ab)
        edx = 4u;
L_1003d2b0: ;
    COW_AT(1003d2b0)
        d9 = fr(g, fr(g, fr(g, (double)rdf32(ecx) - (double)rdf32(eax)) * (double)rdf32(sp0 - 0x30u)) + (double)rdf32(eax));
        wrf32(eax, (float)d9);
        if (edx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_1003d2b0;
        }
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
    COW_AT(1003d2c7)
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_1003d2ab;
        }
    COW_AT(1003d2ca)
        t10 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t11 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t11 + 0xa90u, t10);
        wr32(t10 * 4u + t11 + 0xa10u, edi);
        eax = t11;
        ecx = t10;
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    COW_AT(1003d2e3)
    d12 = fr(g, (double)rdf32(self + 0x78u) / (double)rdf32(self + 0x7cu));
    wr32(sp0 - 0x40u, ecx);
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d12);
    wrf32(sp0 - 0x40u, (float)(double)(float)d13);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x1003d160u), self, 1, cow_f2bits((double)(float)d13));
    d14 = cow_take_float(g);
    x0 = d14;
    COW_AT(1003d2fe)
    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
    t15 = rd32(rd32(self + 0x74u) + 0x70u);
    if ((int32_t)((uint8_t)t15 + (t15 >> 0x13u & 1u) + (t15 >> 0x14u & 1u)) > 2)
    {
        loc_30_f = (double)(float)x0;
        goto L_1003d498;
    }
    ecx = rd32(self + 0x74u);
    loc_30_f = (double)(float)x0;
    COW_AT(1003d32d)
    t16 = rd32(ecx + 0x70u);
    if ((uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u) != 2u)
    {
        eax = (uint8_t)t16;
        edx = (uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u);
        goto L_1003d48d;
    }
    edx = (uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u);
    COW_AT(1003d350)
    if (rd32(self + 0xc4u) == 0u)
    {
        eax = rd32(self + 0xc4u);
        goto L_1003d48d;
    }
    eax = rd32(self + 0xc4u);
    COW_AT(1003d35e)
    d17 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - loc_30_f);
    wr32(sp0 - 0x40u, in_ebp);
    wrf32(sp0 - 0x30u, (float)(double)(float)d17);
    wr32(sp0 - 0x44u, cow_f2bits((double)(float)d17));
    wr32(sp0 - 0x48u, eax);
    wr32(sp0 - 0x4cu, eax + 0x30u);
    t18 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t18);
    g->eax = t18;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t19 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x40u;
    t20 = cow_thiscall(g, rd32(t19 + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t18, eax + 0x30u, eax, cow_f2bits((double)(float)d17));
    t21 = g->edx;
    eax = t20;
    edx = t21;
    edi = cow_f2bits((double)(float)d17);
    COW_AT(1003d389)
    t22 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x30u, t22);
    g->eax = eax;
    g->ecx = t22;
    g->esp = sp0 - 0x40u;
    t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t24 = g->ecx;
    eax = t23;
    ecx = t24;
    COW_AT(1003d39e)
    t25 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x44u, t25);
    wr32(sp0 - 0x48u, eax + 0x8cu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, eax + 0x8cu, t25);
    ebp = eax;
    COW_AT(1003d3b1)
    wr8(ebp + 0x88u, 1u);
    wr32(sp0 - 0x44u, edi);
    t26 = rd32(self + 0xc4u) + 0x10u;
    wr32(sp0 - 0x48u, t26);
    t27 = rd32(self + 0xc4u) + 0x40u;
    wr32(sp0 - 0x4cu, t27);
    t28 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t28);
    g->eax = t28;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t29 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x40u;
    t30 = cow_thiscall(g, rd32(t29 + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t28, t27, t26, edi);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(1003d3db)
    t32 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x30u, t32);
    g->eax = eax;
    g->ecx = t32;
    g->esp = sp0 - 0x40u;
    t33 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t34 = g->ecx;
    eax = t33;
    ecx = t34;
    COW_AT(1003d3f0)
    t35 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x44u, t35);
    wr32(sp0 - 0x48u, eax + 0x98u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, eax + 0x98u, t35);
    ebp = eax;
    COW_AT(1003d403)
    wr8(ebp + 0x89u, 1u);
    wr32(sp0 - 0x44u, edi);
    t36 = rd32(self + 0xc4u) + 0x20u;
    wr32(sp0 - 0x48u, t36);
    t37 = rd32(self + 0xc4u) + 0x50u;
    wr32(sp0 - 0x4cu, t37);
    t38 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t38);
    g->eax = t38;
    g->esp = sp0 - 0x40u;
    t39 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t38, t37, t36, edi);
    eax = t39;
    COW_AT(1003d42d)
    t40 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0x910u);
    wr32(sp0 - 0x30u, t40);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t41 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t41;
    COW_AT(1003d442)
    t42 = rd32(sp0 - 0x30u);
    wr8(eax + 0x8au, 1u);
    wr32(eax + 0xa4u, t42);
    t43 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0x914u);
    wr32(sp0 - 0x44u, t43);
    g->eax = t43;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t44 = rd32(COW_IMG(0x1047cf7cu));
    g->esp = sp0 - 0x40u;
    t45 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t43);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(1003d464)
    d47 = (double)rdf32(self + 0x78u);
    if (!(d47 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebp = rd32(sp0 - 0x40u);
        goto L_1003d5b6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ebp = rd32(sp0 - 0x40u);
    COW_AT(1003d47c)
    wr32(sp0 - 0x40u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t48 = rd32(self);
    g->esp = sp0 - 0x3cu;
    t49 = cow_thiscall(g, rd32(t48 + 0x18u), self, 1, 1u);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(1003d484)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1003d48d: ;
    COW_AT(1003d48d)
    wr32(sp0 - 0x40u, self);
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t51 = cow_call_regs(g, COW_IMG(0x1003c970u), eax, ecx, g->edx, 0, 1, self);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(1003d493)
L_1003d595: ;
    COW_AT(1003d595)
    d73 = (double)rdf32(self + 0x78u);
    if (!(d73 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d73, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebp = in_ebp;
        goto L_1003d5b6;
    }
    COW_AT(1003d5a5)
    wr32(sp0 - 0x40u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t74 = rd32(self);
    g->esp = sp0 - 0x3cu;
    t75 = cow_thiscall(g, rd32(t74 + 0x18u), self, 1, 1u);
    t76 = g->edx;
    eax = t75;
    edx = t76;
    COW_AT(1003d5ad)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1003d498: ;
    COW_AT(1003d498)
    wr32(sp0 - 0x40u, sp0 - 0xcu);
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, cow_f2bits(loc_30_f));
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x10055a60u), rd32(self + 0xc0u), 4, cow_f2bits(loc_30_f), sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu);
    COW_AT(1003d4b7)
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    wr32(sp0 - 0x44u, self + 0x80u);
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x24u, self + 0x80u, sp0 - 0x24u);
    COW_AT(1003d4d3)
    wr32(sp0 - 0x40u, sp0 - 0x18u);
    wr32(sp0 - 0x44u, self + 0x80u);
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x18u, self + 0x80u, sp0 - 0x18u);
    COW_AT(1003d4e9)
    t53 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x28u, t53);
    t54 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x2cu, t54);
    t55 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x30u, t55);
    g->eax = t55;
    g->esp = sp0 - 0x3cu;
    t56 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t56;
    COW_AT(1003d506)
    t57 = rd32(sp0 - 0x30u);
    t58 = rd32(sp0 - 0x2cu);
    wr32(eax + 0x8cu, t57);
    t59 = rd32(sp0 - 0x28u);
    wr32(eax + 0x90u, t58);
    wr32(eax + 0x94u, t59);
    wr8(eax + 0x88u, 1u);
    t60 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t60);
    t61 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x2cu, t61);
    t62 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x28u, t62);
    g->eax = t61;
    g->esp = sp0 - 0x3cu;
    t63 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t63;
    COW_AT(1003d547)
    t64 = rd32(sp0 - 0x28u);
    t65 = rd32(sp0 - 0x2cu);
    wr32(eax + 0x98u, t64);
    t66 = rd32(sp0 - 0x30u);
    wr32(eax + 0x9cu, t65);
    wr32(eax + 0xa0u, t66);
    wr8(eax + 0x89u, 1u);
    t67 = rd32(sp0 - 8u);
    wr32(sp0 - 0x28u, t67);
    g->eax = t67;
    g->esp = sp0 - 0x3cu;
    t68 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t68;
    COW_AT(1003d578)
    t69 = rd32(sp0 - 0x28u);
    wr8(eax + 0x8au, 1u);
    wr32(eax + 0xa4u, t69);
    t70 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x40u, t70);
    g->eax = eax;
    g->edx = t70;
    g->esp = sp0 - 0x3cu;
    t71 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t70);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(1003d592)
    goto L_1003d595;
L_1003d5b6: ;
    COW_AT(1003d5b6)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003d220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003d246u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d24du:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d276u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d29cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d2feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003d32du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d350u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d35eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d389u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d39eu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d3b1u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d3dbu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d3f0u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d403u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d42du:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d442u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d464u:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d47cu:
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
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d484u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d48du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d493u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d498u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d4b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        wr32(sp0 - 0x44u, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1003d4d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        g->edi = self + 0x80u;
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003d4e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003d506u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003d547u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003d578u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003d592u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        g->ebx = 1u;
        wr32(sp0 - 0x48u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003d595u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d5a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d5adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1003d5b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003d220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
