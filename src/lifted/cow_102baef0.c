/* f_0x102baef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102baef0(Guest* g)
{
    double d1;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d27;
    double d3;
    double d33;
    double d34;
    double d35;
    double d38;
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
    double d71;
    double d72;
    double d73;
    double d75;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t74;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102baf3du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf3d;
    case 0x102baf42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf42;
    case 0x102baf68u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf68;
    case 0x102baf75u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf75;
    case 0x102baf7au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf7a;
    case 0x102baf85u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf85;
    case 0x102baf9cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102baf9c;
    case 0x102bafa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x84u); goto E_102bafa9;
    case 0x102bafb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); g->ebx = rd32(sp0 - 0x84u); goto E_102bafb4;
    case 0x102bafc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102bafc1;
    case 0x102bafdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bafdf;
    case 0x102bb003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb003;
    case 0x102bb01fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb01f;
    case 0x102bb03cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb03c;
    case 0x102bb043u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb043;
    case 0x102bb04eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb04e;
    case 0x102bb05du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb05d;
    case 0x102bb076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb076;
    case 0x102bb088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb088;
    case 0x102bb08du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb08d;
    case 0x102bb0a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb0a2;
    case 0x102bb0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb0a7;
    case 0x102bb0b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb0b9;
    case 0x102bb105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb105;
    case 0x102bb114u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb114;
    case 0x102bb128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb128;
    case 0x102bb142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb142;
    case 0x102bb155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb155;
    case 0x102bb191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_78 = rd32(sp0 - 0x78u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb191;
    case 0x102bb193u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb193;
    default: break;
    }
#endif

    COW_AT(102baef0)
    d1 = (double)rdf32(sp0 + 8u);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x7cu, t2);
    wr32(sp0 - 0x84u, in_ebx);
    d3 = (double)rdf32(sp0 + 0xcu);
    t4 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x80u, t4);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t4;
        ebx = rd32(arg1 + 0x12cu);
        loc_7c = t2;
        loc_80 = t4;
        goto L_102baf75;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t4;
    ebx = rd32(arg1 + 0x12cu);
    loc_7c = t2;
    loc_80 = t4;
    COW_AT(102baf3d)
    if (PARITY(eax >> 8u & 0x44u)) goto L_102baf68;
    COW_AT(102baf42)
    wr32(arg5, rd32(arg4));
    t5 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t5);
    t6 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t6);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t5;
    return t6;
L_102baf68: ;
    COW_AT(102baf68)
    wr32(sp0 + 8u, 0x34000000u);
L_102baf85: ;
    COW_AT(102baf85)
    d7 = (double)rdf32(sp0 + 8u);
    d8 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d7, d8, 0u) & 0x4100u) != 0u)
    {
    COW_AT(102bafa9)
        t10 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x78u, t10);
        edx = t10;
        loc_78 = t10;
    }
    else
    {
    COW_AT(102baf9c)
        t9 = rd32(sp0 + 8u);
        wr32(sp0 - 0x78u, t9);
        ecx = t9;
        edx = arg1;
        loc_78 = t9;
    }
    COW_AT(102bafb4)
    wr32(sp0 - 0x88u, in_ebp);
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    wr32(sp0 - 0x94u, loc_78);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t11 = cow_call_regs(g, COW_IMG(0x102b4470u), loc_78, g->ecx, g->edx, 1, 1, loc_78);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(102bafc1)
    wr32(sp0 - 0x74u, eax);
    wrf64(sp0 - 0x68u, (double)(int32_t)eax);
    g->eax = eax;
    d14 = rdf64(COW_IMG(0x1032abc8u));
    fpush(g, d14);
    fpush(g, (double)(int32_t)eax);
    g->esp = sp0 - 0x74u;
    t15 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
    d16 = cow_take_float(g);
    d17 = cow_take_float(g);
    eax = t15;
    x1 = d16;
    x0 = d17;
    COW_AT(102bafdf)
    d18 = fr(g, (double)rdf32(sp0 + 8u) * x1);
    wrf32(sp0 + 8u, (float)d18);
    d19 = fr(g, x1 * (double)rdf32(sp0 + 0xcu));
    if (!(d19 < rdf64(COW_IMG(0x1032ab90u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1032ab90u)), 2u);
        x1 = d19;
    COW_AT(102bb01f)
        d22 = (double)rdf32(sp0 + 8u);
        d23 = (double)rdf32(sp0 + 8u);
        if (!(d22 < rdf64(COW_IMG(0x1032ab90u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x1032ab90u)), 3u);
            x2 = fr(g, d23 + d23);
    COW_AT(102bb043)
            ebp = 1u;
            x2 = fr(g, x2 - (double)rdf32(COW_IMG(0x1032961cu)));
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x1032ab90u)), 3u);
            x2 = fr(g, d23 + d23);
    COW_AT(102bb03c)
            ebp = 2u;
        }
    COW_AT(102bb04e)
        wrf32(sp0 + 8u, (float)x2);
        x1 = fr(g, fr(g, x1 + x1) - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1032ab90u)), 2u);
        x1 = d19;
    COW_AT(102bb003)
        d20 = (double)rdf32(sp0 + 8u);
        d21 = fr(g, fr(g, d20 + d20) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(sp0 + 8u, (float)d21);
        ebp = 0u;
        x1 = fr(g, x1 + x1);
    }
    COW_AT(102bb05d)
    t24 = rd32(sp0 + 8u);
    wrf32(sp0 + 0xcu, (float)x1);
    wr32(sp0 - 0x94u, sp0 - 0x50u);
    wr32(sp0 - 0x98u, t24);
    g->edx = t24;
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), eax, g->ecx, g->edx, 1, 2, t24, sp0 - 0x50u);
    t25 = g->edx;
    edx = t25;
    COW_AT(102bb076)
    wr32(sp0 - 0x9cu, sp0 - 0x60u);
    t26 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0xa0u, t26);
    g->esp = sp0 - 0x98u;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), sp0 - 0x60u, g->ecx, g->edx, 1, 2, t26, sp0 - 0x60u);
    COW_AT(102bb088)
    ecx = 0u;
L_102bb08d: ;
    COW_AT(102bb08d)
    if ((int32_t)(ecx & 0x80000003u) >= 0)
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    }
    else
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    COW_AT(102bb0a2)
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(102bb0a7)
    d27 = fr(g, (double)rdf32(eax * 4u + sp0 - 0x60u) * (double)rdf32(edx * 4u + sp0 - 0x50u));
    wrf32(ecx * 4u + sp0 - 0x40u, (float)d27);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_102bb08d;
    }
    COW_AT(102bb0b9)
    wr32(sp0 - 0x78u, 1u);
    wr32(arg5, rd32(arg4));
    t28 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t28);
    t29 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t29);
    t30 = ebx * 0xcu - 0x24u;
    wr32(sp0 - 0x6cu, t30);
    t31 = rd32(COW_IMG(0x109f8220u) + t30);
    wr32(sp0 - 0x70u, t31);
    t32 = ebx * 2u + 1u;
    wr32(sp0 - 0x74u, t32);
    if ((int32_t)(ebx * 2u + 1u) <= 1)
    {
        eax = t32;
        edx = t29;
    }
    else
    {
        eax = t32;
        loc_6c = t30;
        loc_70 = t31;
        loc_74 = t32;
    COW_AT(102bb105)
        ebx = (ebx + 4u) * ebp * 0x80u + 0x40u;
        ebp = arg4 + 0x14u;
        loc_78 = 1u;
L_102bb114: ;
    COW_AT(102bb114)
        d33 = rdf64(sp0 - 0x68u);
        d34 = (double)rdf32(loc_70 + loc_78 * 4u);
        fpush(g, d34);
        fpush(g, d33);
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), loc_78);
        d35 = cow_take_float(g);
        x1 = d35;
    COW_AT(102bb128)
        eax = 0u;
        ecx = ebx + rd32(COW_IMG(0x109f8224u) + rd32(sp0 - 0x6cu)) - (sp0 - 0x40u);
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
L_102bb142: ;
    COW_AT(102bb142)
        if ((int32_t)(eax + 1u) < 16)
        {
            x2 = fr(g, x2 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0x40u) * (double)rdf32(eax * 4u + sp0 - 0x40u)));
            eax = eax + 1u;
            goto L_102bb142;
        }
        edx = eax * 4u + ecx;
        x2 = fr(g, x2 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0x40u) * (double)rdf32(eax * 4u + sp0 - 0x40u)));
    COW_AT(102bb155)
        t36 = rd32(sp0 - 0x78u) + 1u;
        t37 = rd32(sp0 - 0x78u);
        d38 = fr(g, fr(g, x2 * (double)rdf32(ebp - 8u)) * x1);
        wr32(sp0 - 0x78u, t36);
        t39 = rd32(sp0 - 0x74u);
        d40 = fr(g, d38 + (double)rdf32(arg5));
        wrf32(arg5, (float)d40);
        d41 = fr(g, fr(g, fr(g, x2 * (double)rdf32(ebp - 4u)) * x1) + (double)rdf32(arg5 + 4u));
        wrf32(arg5 + 4u, (float)d41);
        d42 = fr(g, fr(g, fr(g, x2 * x1) * (double)rdf32(ebp)) + (double)rdf32(arg5 + 8u));
        wrf32(arg5 + 8u, (float)d42);
        if ((int32_t)(t37 + 1u) < (int32_t)t39)
        {
            eax = t36;
            ebx = ebx + 0x40u;
            ebp = ebp + 0xcu;
            loc_78 = t36;
            loc_6c = rd32(sp0 - 0x6cu);
            loc_70 = rd32(sp0 - 0x70u);
            loc_74 = rd32(sp0 - 0x74u);
            goto L_102bb114;
        }
        ecx = t39;
    COW_AT(102bb191)
        eax = ecx;
    }
    COW_AT(102bb193)
    d43 = (double)rdf32(sp0 - 0x7cu);
    d44 = (double)rdf32(sp0 - 0x80u);
    d45 = fr(g, (double)rdf32(sp0 - 0x80u) * fr(g, d44 * d44));
    d46 = fr(g, (double)rdf32(sp0 - 0x7cu) * fr(g, d43 * d43));
    wrf32(sp0 - 0x78u, (float)(double)(float)d45);
    d47 = fr(g, fr(g, d45 * d46) * (double)rdf32(COW_IMG(0x10340be4u)));
    d48 = fr(g, fr(g, d47 * (double)rdf32(arg4 + eax * 0xcu)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d48);
    d49 = fr(g, fr(g, d47 * (double)rdf32(arg4 + eax * 0xcu + 4u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d49);
    d50 = fr(g, fr(g, d47 * (double)rdf32(arg4 + eax * 0xcu + 8u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d50);
    d51 = fr(g, d46 * (double)rdf32(COW_IMG(0x10337d24u)));
    d52 = fr(g, fr(g, d51 * (double)rdf32(arg4 + eax * 0xcu + 0xcu)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d52);
    d53 = fr(g, fr(g, d51 * (double)rdf32(arg4 + eax * 0xcu + 0x10u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d53);
    d54 = fr(g, fr(g, d51 * (double)rdf32(arg4 + eax * 0xcu + 0x14u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d54);
    d55 = fr(g, fr(g, d46 * (double)rdf32(sp0 - 0x80u)) * (double)rdf32(COW_IMG(0x10337d24u)));
    d56 = fr(g, fr(g, d55 * (double)rdf32(arg4 + eax * 0xcu + 0x18u)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d56);
    d57 = fr(g, fr(g, d55 * (double)rdf32(arg4 + eax * 0xcu + 0x1cu)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d57);
    d58 = fr(g, fr(g, d55 * (double)rdf32(arg4 + eax * 0xcu + 0x20u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d58);
    d59 = fr(g, fr(g, d46 * fr(g, d44 * d44)) * (double)rdf32(COW_IMG(0x10329a08u)));
    d60 = fr(g, fr(g, d59 * (double)rdf32(arg4 + eax * 0xcu + 0x24u)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d60);
    d61 = fr(g, fr(g, d59 * (double)rdf32(arg4 + eax * 0xcu + 0x28u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d61);
    d62 = fr(g, fr(g, d59 * (double)rdf32(arg4 + eax * 0xcu + 0x2cu)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d62);
    d63 = fr(g, (double)(float)d45 * (double)rdf32(COW_IMG(0x10337d24u)));
    d64 = fr(g, fr(g, d63 * (double)rdf32(arg4 + eax * 0xcu + 0x30u)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d64);
    d65 = fr(g, fr(g, d63 * (double)rdf32(arg4 + eax * 0xcu + 0x34u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d65);
    d66 = fr(g, fr(g, d63 * (double)rdf32(arg4 + eax * 0xcu + 0x38u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d66);
    d67 = fr(g, fr(g, (double)(float)d45 * (double)rdf32(sp0 - 0x7cu)) * (double)rdf32(COW_IMG(0x10337d24u)));
    d68 = fr(g, fr(g, d67 * (double)rdf32(arg4 + eax * 0xcu + 0x3cu)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d68);
    d69 = fr(g, fr(g, d67 * (double)rdf32(arg4 + eax * 0xcu + 0x40u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d69);
    d70 = fr(g, fr(g, d67 * (double)rdf32(arg4 + eax * 0xcu + 0x44u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d70);
    d71 = fr(g, fr(g, fr(g, d43 * d43) * (double)(float)d45) * (double)rdf32(COW_IMG(0x10329a08u)));
    d72 = fr(g, fr(g, d71 * (double)rdf32(arg4 + eax * 0xcu + 0x48u)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d72);
    d73 = fr(g, fr(g, d71 * (double)rdf32(arg4 + eax * 0xcu + 0x4cu)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d73);
    t74 = rd32(sp0 - 0x90u);
    d75 = fr(g, fr(g, d71 * (double)rdf32(arg4 + eax * 0xcu + 0x50u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d75);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = t74;
    g->ebp = rd32(sp0 - 0x88u);
    g->edx = edx;
    fpush(g, x0);
    return eax * 3u + 0x12u;
L_102baf75: ;
    COW_AT(102baf75)
    if (!PARITY(eax >> 8u & 0x44u))
    {
    COW_AT(102baf7a)
        wr32(sp0 + 0xcu, 0x34000000u);
    }
    goto L_102baf85;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102baef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102baf3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102baf42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x102baf68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102baf75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102baf7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102baf85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102baf9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102bafa9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x102bafb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x102bafc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x102bafdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb003u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb01fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb03cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb043u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb04eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb05du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x102bb076u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb088u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xa0u;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb08du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb0a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb0a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb0b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb105u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102bb114u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb128u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb142u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb155u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb191u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_78;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_78 = rd32(sp0 - 0x78u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x102bb193u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        g->esi = arg5;
        g->edi = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102baef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102baef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
