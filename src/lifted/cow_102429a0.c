/* f_0x102429a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102429a0(Guest* g)
{
    double al_m70_f;
    uint32_t al_m74;
    double al_m78_f;
    double al_m7c_f;
    uint32_t al_m84;
    uint32_t al_m8c;
    uint32_t al_m90;
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
    double d20;
    double d21;
    double d22;
    double d23;
    double d29;
    double d30;
    double d31;
    double d38;
    double d39;
    double d40;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102429c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x90u); in_esi = rd32(sp1 - 0x8cu); in_ebx = rd32(sp1 - 0x84u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x84u); g->edi = rd32(sp1 - 0x90u); g->esi = rd32(sp1 - 0x8cu); goto E_102429c1;
    case 0x102429f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x90u); in_esi = rd32(sp1 - 0x8cu); in_ebx = rd32(sp1 - 0x84u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x84u); g->edi = rd32(sp1 - 0x90u); g->esi = rd32(sp1 - 0x8cu); goto E_102429f9;
    case 0x102429ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m74 = rd32(sp1 - 0x74u); loc_4 = rd32(sp0 - 4u); goto E_102429ff;
    case 0x10242a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m74 = rd32(sp1 - 0x74u); loc_4 = rd32(sp0 - 4u); goto E_10242a17;
    case 0x10242ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); goto E_10242ad5;
    case 0x10242addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); goto E_10242add;
    case 0x10242af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); goto E_10242af0;
    case 0x10242b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_10242b05;
    case 0x10242b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); goto E_10242b11;
    case 0x10242b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_10242b21;
    case 0x10242b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_10242b30;
    case 0x10242b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_10242b38;
    case 0x10242b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); goto E_10242b7f;
    case 0x10242bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); goto E_10242bb7;
    case 0x10242bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10242bfe;
    case 0x10242c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); goto E_10242c00;
    case 0x10242c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m7c_f = rdf32(sp1 - 0x7cu); al_m78_f = rdf32(sp1 - 0x78u); al_m74 = rd32(sp1 - 0x74u); al_m70_f = rdf32(sp1 - 0x70u); loc_4 = rd32(sp0 - 4u); goto E_10242c35;
    case 0x10242c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10242c7c;
    case 0x10242c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m74 = rd32(sp1 - 0x74u); loc_4 = rd32(sp0 - 4u); goto E_10242c80;
    case 0x10242c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; al_m90 = rd32(sp1 - 0x90u); al_m8c = rd32(sp1 - 0x8cu); al_m84 = rd32(sp1 - 0x84u); al_m74 = rd32(sp1 - 0x74u); loc_4 = rd32(sp0 - 4u); goto E_10242c8e;
    default: break;
    }
#endif

    COW_AT(102429a0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x84u, in_ebx);
    wr32(sp1 - 0x88u, sp0 - 4u);
    wr32(sp1 - 0x8cu, in_esi);
    wr32(sp1 - 0x90u, in_edi);
    eax = sp1 - 0x5cu;
    ecx = self + 0xb7cu;
    edx = 3u;
L_102429c1: ;
    COW_AT(102429c1)
    t1 = rd32(ecx - 4u);
    wr32(eax - 4u, t1);
    wr32(eax, rd32(ecx));
    t2 = rd32(ecx + 4u);
    wr32(eax + 4u, t2);
    t3 = rd32(ecx + 8u);
    wr32(eax + 8u, t3);
    t4 = rd32(ecx + 0x2cu);
    wr32(eax + 0x2cu, t4);
    t5 = rd32(ecx + 0x30u);
    wr32(eax + 0x30u, t5);
    t6 = rd32(ecx + 0x34u);
    wr32(eax + 0x34u, t6);
    t7 = rd32(ecx + 0x38u);
    wr32(eax + 0x38u, t7);
    if (edx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_102429c1;
    }
    eax = eax + 0x10u;
    COW_AT(102429f9)
    wr32(sp1 - 0x74u, 0u);
    ecx = 0u;
    loc_4 = in_ebp;
    al_m84 = in_ebx;
    al_m8c = in_esi;
    al_m90 = in_edi;
    al_m74 = 0u;
L_102429ff: ;
    COW_AT(102429ff)
    d8 = rdf64(ecx * 8u + self + 0xb38u);
    if (!(d8 < rdf64(COW_IMG(0x1032a100u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, rdf64(COW_IMG(0x1032a100u)), 0u);
    }
    else
    {
    COW_AT(10242a17)
        d9 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x58u) - (double)rdf32(ecx * 0x30u + sp1 - 0x48u));
        d10 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x5cu) - (double)rdf32(ecx * 0x30u + sp1 - 0x4cu));
        d11 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x60u) - (double)rdf32(ecx * 0x30u + sp1 - 0x50u));
        d12 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x38u) - (double)rdf32(ecx * 0x30u + sp1 - 0x48u));
        d13 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x3cu) - (double)rdf32(ecx * 0x30u + sp1 - 0x4cu));
        d14 = fr(g, (double)rdf32(ecx * 0x30u + sp1 - 0x40u) - (double)rdf32(ecx * 0x30u + sp1 - 0x50u));
        d15 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, fr(g, sqrt(fr(g, fr(g, fr(g, d12 * d12) + fr(g, d13 * d13)) + fr(g, d14 * d14)))) + fr(g, sqrt(fr(g, fr(g, fr(g, d9 * d9) + fr(g, d10 * d10)) + fr(g, d11 * d11)))))) - fr(g, sqrt(fr(g, fr(g, fr(g, d9 * d9) + fr(g, d10 * d10)) + fr(g, d11 * d11)))));
        wrf32(sp1 - 0x78u, (float)(double)(float)d15);
        d16 = fr(g, d15 * rdf64(ecx * 8u + self + 0xb38u));
        d17 = (double)(float)fr(g, fr(g, d16 + d16) + fr(g, sqrt(fr(g, fr(g, fr(g, d9 * d9) + fr(g, d10 * d10)) + fr(g, d11 * d11)))));
        wrf32(sp1 - 0x7cu, (float)d17);
        d18 = fr(g, fr(g, fr(g, sqrt(fr(g, fr(g, fr(g, d12 * d12) + fr(g, d13 * d13)) + fr(g, d14 * d14)))) + fr(g, sqrt(fr(g, fr(g, fr(g, d9 * d9) + fr(g, d10 * d10)) + fr(g, d11 * d11))))) * (double)rdf32(COW_IMG(0x1033cb78u)));
        wrf32(sp1 - 0x70u, (float)(double)(float)d18);
        d19 = fr(g, fr(g, d17 * d17) - fr(g, fr(g, (double)(float)d18 * (double)(float)d15) * (double)rdf32(COW_IMG(0x1032a3a0u))));
        if (!(d19 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (ecx * 0x30u & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            edi = ecx * 0x30u + sp1 - 0x60u;
            al_m78_f = (double)(float)d15;
            al_m7c_f = d17;
            al_m70_f = (double)(float)d18;
            x1 = d19;
            x0 = rdf64(ecx * 8u + self + 0xb38u);
        }
        else
        {
            eax = (ecx * 0x30u & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            edi = ecx * 0x30u + sp1 - 0x60u;
            al_m78_f = (double)(float)d15;
            al_m7c_f = d17;
            al_m70_f = (double)(float)d18;
            x1 = d19;
            x0 = rdf64(ecx * 8u + self + 0xb38u);
    COW_AT(10242ad5)
            x1 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(10242add)
        if (!(fabs(al_m78_f) < rdf64(COW_IMG(0x1033cb70u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs(al_m78_f), rdf64(COW_IMG(0x1033cb70u)), 2u);
    COW_AT(10242b11)
            x0 = fr(g, x0 + fr(g, fr(g, fr(g, sqrt(x1)) - al_m7c_f) / fr(g, al_m78_f + al_m78_f)));
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs(al_m78_f), rdf64(COW_IMG(0x1033cb70u)), 2u);
    COW_AT(10242af0)
            if ((cow_fsw(g, al_m7c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, al_m7c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, al_m7c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(10242b05)
                x0 = fr(g, x0 - fr(g, al_m70_f / al_m7c_f));
            }
        }
    COW_AT(10242b21)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) == 0u)
        {
    COW_AT(10242b30)
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
    COW_AT(10242b38)
        wrf64(ecx * 8u + self + 0xb38u, x0);
        d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
        d21 = fr(g, fr(g, d20 * d20) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp1 - 0x6cu, (float)(double)(float)d21);
        d22 = fr(g, fr(g, d20 * x0) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp1 - 0x68u, (float)(double)(float)d22);
        d23 = fr(g, fr(g, x0 * x0) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp1 - 0x64u, (float)(double)(float)d23);
        if (ecx != 0u)
        {
    COW_AT(10242c00)
            wr32(self + 0xb68u, rd32(COW_IMG(0x10388798u)));
            wr32(self + 0xb6cu, rd32(COW_IMG(0x1038879cu)));
            t32 = rd32(COW_IMG(0x103887a0u));
            wr32(self + 0xb70u, t32);
            t33 = rd32(COW_IMG(0x103887a4u));
            wr32(self + 0xb74u, t33);
            ecx = t32;
            edx = t33;
            ebx = 0u;
            ebp = self + 0xba8u;
L_10242c35: ;
    COW_AT(10242c35)
            t34 = rd32(ebx * 4u + sp1 - 0x6cu);
            wr32(sp1 - 0x94u, t34);
            wr32(sp1 - 0x98u, ebp);
            wr32(sp1 - 0x9cu, edi);
            g->eax = t34;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x90u;
            t35 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, edi, ebp, t34);
            t36 = g->ecx;
            t37 = g->edx;
            d38 = fr(g, (double)rdf32(self + 0xb68u) + (double)rdf32(edi));
            wrf32(self + 0xb68u, (float)d38);
            d39 = fr(g, (double)rdf32(edi + 4u) + (double)rdf32(self + 0xb6cu));
            wrf32(self + 0xb6cu, (float)d39);
            d40 = fr(g, (double)rdf32(edi + 8u) + (double)rdf32(self + 0xb70u));
            wrf32(self + 0xb70u, (float)d40);
            if ((int32_t)(ebx + 1u) < 3)
            {
                ecx = t36;
                edx = t37;
                ebx = ebx + 1u;
                ebp = ebp + 0x10u;
                edi = edi + 0x10u;
                loc_4 = rd32(sp0 - 4u);
                al_m84 = rd32(sp1 - 0x84u);
                al_m8c = rd32(sp1 - 0x8cu);
                al_m90 = rd32(sp1 - 0x90u);
                al_m74 = rd32(sp1 - 0x74u);
                goto L_10242c35;
            }
            eax = t35;
        }
        else
        {
    COW_AT(10242b7f)
            wr32(self + 0xb58u, rd32(COW_IMG(0x10388788u)));
            wr32(self + 0xb5cu, rd32(COW_IMG(0x1038878cu)));
            t24 = rd32(COW_IMG(0x10388790u));
            wr32(self + 0xb60u, t24);
            t25 = rd32(COW_IMG(0x10388794u));
            wr32(self + 0xb64u, t25);
            eax = t25;
            edx = t24;
            ebx = 0u;
            ebp = self + 0xb78u;
            edi = sp1 - 0x60u;
L_10242bb7: ;
    COW_AT(10242bb7)
            t26 = rd32(ebx * 4u + sp1 - 0x6cu);
            wr32(sp1 - 0x94u, t26);
            wr32(sp1 - 0x98u, ebp);
            wr32(sp1 - 0x9cu, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp1 - 0x90u;
            t27 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, edi, ebp, t26);
            t28 = g->edx;
            d29 = fr(g, (double)rdf32(edi) + (double)rdf32(self + 0xb58u));
            wrf32(self + 0xb58u, (float)d29);
            d30 = fr(g, (double)rdf32(edi + 4u) + (double)rdf32(self + 0xb5cu));
            wrf32(self + 0xb5cu, (float)d30);
            d31 = fr(g, (double)rdf32(edi + 8u) + (double)rdf32(self + 0xb60u));
            wrf32(self + 0xb60u, (float)d31);
            if ((int32_t)(ebx + 1u) < 3)
            {
                eax = t27;
                edx = t28;
                ebx = ebx + 1u;
                ebp = ebp + 0x10u;
                edi = edi + 0x10u;
                loc_4 = rd32(sp0 - 4u);
                al_m84 = rd32(sp1 - 0x84u);
                al_m8c = rd32(sp1 - 0x8cu);
                al_m90 = rd32(sp1 - 0x90u);
                al_m74 = rd32(sp1 - 0x74u);
                goto L_10242bb7;
            }
            eax = t27;
    COW_AT(10242bfe)
        }
    COW_AT(10242c7c)
        ecx = rd32(sp1 - 0x74u);
        loc_4 = rd32(sp0 - 4u);
        al_m84 = rd32(sp1 - 0x84u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m90 = rd32(sp1 - 0x90u);
    }
    COW_AT(10242c80)
    wr32(sp1 - 0x74u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < 2)
    {
        al_m74 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_102429ff;
    }
    COW_AT(10242c8e)
    wr32(sp1 - 0x94u, self + 0xb58u);
    g->edx = rd32(COW_IMG(0x104568fcu));
    t41 = rd32(COW_IMG(0x104568fcu));
    g->esp = sp1 - 0x90u;
    cow_thiscall(g, COW_IMG(0x1001e780u), rd32(t41 + 0x50u), 1, self + 0xb58u);
    t42 = g->edx;
    wr32(sp1 - 0x94u, self + 0xb68u);
    cow_thiscall(g, COW_IMG(0x1001e760u), rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u), 1, self + 0xb68u);
    g->ebx = rd32(sp1 - 0x84u);
    g->esi = rd32(sp1 - 0x8cu);
    g->edi = rd32(sp1 - 0x90u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102429a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102429c1u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x90u);
        in_esi = rd32(sp1 - 0x8cu);
        in_ebx = rd32(sp1 - 0x84u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102429f9u:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x90u);
        in_esi = rd32(sp1 - 0x8cu);
        in_ebx = rd32(sp1 - 0x84u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102429ffu:
    {
        uint32_t al_m74;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m74 = rd32(sp1 - 0x74u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242a17u:
    {
        uint32_t al_m74;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m74 = rd32(sp1 - 0x74u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242ad5u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242addu:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242af0u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b05u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b11u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b21u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b30u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b38u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242b7fu:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        g->ebx = 0u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242bb7u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242bfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242c00u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        g->ebx = 0u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242c35u:
    {
        double al_m70_f;
        uint32_t al_m74;
        double al_m78_f;
        double al_m7c_f;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m7c_f = rdf32(sp1 - 0x7cu);
        al_m78_f = rdf32(sp1 - 0x78u);
        al_m74 = rd32(sp1 - 0x74u);
        al_m70_f = rdf32(sp1 - 0x70u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242c7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242c80u:
    {
        uint32_t al_m74;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m74 = rd32(sp1 - 0x74u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10242c8eu:
    {
        uint32_t al_m74;
        uint32_t al_m84;
        uint32_t al_m8c;
        uint32_t al_m90;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        al_m90 = rd32(sp1 - 0x90u);
        al_m8c = rd32(sp1 - 0x8cu);
        al_m84 = rd32(sp1 - 0x84u);
        al_m74 = rd32(sp1 - 0x74u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x90u;
        wr32(sp1 - 0x88u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102429a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102429a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
