/* f_0x1011e980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011e980(Guest* g)
{
    double d11;
    double d18;
    double d19;
    double d20;
    double d26;
    double d29;
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
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_44_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011e98eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1011e98e;
    case 0x1011e997u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; goto E_1011e997;
    case 0x1011e9a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011e9a4;
    case 0x1011e9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011e9b4;
    case 0x1011e9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011e9bf;
    case 0x1011e9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1011e9c1;
    case 0x1011e9c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1011e9c8;
    case 0x1011e9ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1011e9cc;
    case 0x1011e9cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1011e9cf;
    case 0x1011e9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011e9e4;
    case 0x1011e9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011e9fd;
    case 0x1011ea15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ea15;
    case 0x1011ea30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_44_f = rdf32(sp0 - 0x44u); goto E_1011ea30;
    case 0x1011ea4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ea4f;
    case 0x1011ea9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ea9c;
    case 0x1011eafbu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011eafb;
    case 0x1011eb0fu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011eb0f;
    case 0x1011eb11u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011eb11;
    case 0x1011eb22u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011eb22;
    case 0x1011eb5bu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011eb5b;
    case 0x1011eb6bu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011eb6b;
    case 0x1011eb7fu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011eb7f;
    case 0x1011eb81u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011eb81;
    case 0x1011eb92u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011eb92;
    case 0x1011ebc3u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ebc3;
    case 0x1011ebd3u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ebd3;
    case 0x1011ebebu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011ebeb;
    case 0x1011ebedu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011ebed;
    case 0x1011ebfeu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011ebfe;
    case 0x1011ec38u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ec38;
    case 0x1011ec4bu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ec4b;
    case 0x1011ec63u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011ec63;
    case 0x1011ec65u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1011ec65;
    case 0x1011ec76u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011ec76;
    case 0x1011ecabu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ecab;
    case 0x1011ecb3u: ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ecb3;
    case 0x1011ecbau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ecba;
    case 0x1011ecc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ecc1;
    case 0x1011ecc3u: edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ecc3;
    case 0x1011ece3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ece3;
    case 0x1011ece5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ece5;
    case 0x1011ed01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ed01;
    case 0x1011ed03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011ed03;
    case 0x1011ed05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011ed05;
    case 0x1011ed0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ed0a;
    case 0x1011ed29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ed29;
    case 0x1011ed41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ed41;
    case 0x1011ed59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011ed59;
    default: break;
    }
#endif

    COW_AT(1011e980)
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_1011e9c1;
    }
    eax = rd32(self + 0x4cu);
    COW_AT(1011e98e)
    wr32(sp0 - 0x50u, self + 0x32u);
    g->eax = eax;
    g->esp = sp0 - 0x4cu;
    t1 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, self, in_edx, 1, 1, self + 0x32u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1011e997)
    wr32(sp0 - 0x50u, self + 0x32u);
    g->esp = sp0 - 0x4cu;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x40u, edx, 1, self + 0x32u);
    t3 = g->edx;
    edx = t3;
    COW_AT(1011e9a4)
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t4 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x40u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1011e9b4)
    wr32(self + 0x4cu, eax);
    if (eax == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        goto L_1011ed59;
    }
    COW_AT(1011e9bf)
L_1011e9e4: ;
    COW_AT(1011e9e4)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0xdu);
    wr32(sp0 - 0x60u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x64u, t9);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xdu, 1u);
    COW_AT(1011e9fd)
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0xeu);
    wr32(sp0 - 0x60u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x64u, t10);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 0xeu, 1u);
    COW_AT(1011ea15)
    d11 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x44u, (float)d11);
    t12 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t12);
    ebx = 0u;
    ebp = self + 0xc8u;
    esi = self + 0x60u;
    loc_44_f = d11;
L_1011ea30: ;
    COW_AT(1011ea30)
    t13 = rd32(esi + 4u);
    t14 = rd32(esi);
    t15 = rd32(esi + 8u);
    wr32(ebx + sp0 - 0x20u, t13);
    wr32(ebx + sp0 - 0x30u, t14);
    wr32(sp0 - 0x58u, arg5);
    wr32(sp0 - 0x5cu, t14);
    wr32(ebx + sp0 - 0x10u, t15);
    g->eax = t14;
    g->esp = sp0 - 0x54u;
    t16 = cow_cdecl(g, COW_IMG(0x101200b0u), 2, t14, arg5);
    eax = t16;
    COW_AT(1011ea4f)
    wr32(esi, eax);
    t17 = (uint32_t)(int16_t)rd16(ebp - 8u);
    wr32(sp0 + 4u, t17);
    d18 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
    wr32(sp0 + 4u, (uint32_t)(int16_t)rd16(ebp));
    d19 = fr(g, fr(g, d18 + (double)rdf32(sp0 - 0x44u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(esi - 0x10u, (float)d19);
    d20 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 + 8u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(esi - 0xcu, (float)d20);
    if ((int32_t)(ebx + 4u) < 16)
    {
        ebx = ebx + 4u;
        ebp = ebp + 2u;
        esi = esi + 0x1cu;
        loc_44_f = (double)rdf32(sp0 - 0x44u);
        goto L_1011ea30;
    }
    COW_AT(1011ea9c)
    t21 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t22 = rd32(COW_IMG(0x106218b4u));
    t23 = rd16(COW_IMG(0x106218bau));
    t24 = rd16(COW_IMG(0x106218b6u));
    wr32(sp0 + 4u, t21);
    t25 = (uint32_t)(int16_t)(t23 - t24);
    d26 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wr32(sp0 + 8u, t25);
    t27 = rd32(sp0 - 0x50u);
    t28 = rd32(sp0 - 0x54u);
    wrf32(sp0 + 4u, (float)d26);
    d29 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 + 8u, (float)d29);
    d30 = (double)rdf32(self + 0x50u);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebx = t27;
        ebp = t28;
        goto L_1011eb5b;
    }
    eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ebx = t27;
    ebp = t28;
    COW_AT(1011eafb)
    d31 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(self + 0x50u));
    if (!(d31 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d31;
        x0 = d31;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d31;
        x0 = d31;
    COW_AT(1011eb0f)
        x1 = -x1;
    }
    COW_AT(1011eb11)
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    COW_AT(1011eb22)
    d32 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(COW_IMG(0x1032a3d0u)));
    wr32(self + 0x50u, 0xbf000000u);
    wr32(self + 0x88u, 0xbf000000u);
    d33 = fr(g, (double)rdf32(self + 0x80u) - fr(g, fr(g, d32 / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u))));
    d34 = fr(g, fr(g, d32 / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u)));
    wrf32(self + 0x64u, (float)d33);
    d35 = fr(g, (double)rdf32(self + 0xb8u) - d34);
    wrf32(self + 0x9cu, (float)d35);
L_1011eb5b: ;
    COW_AT(1011eb5b)
    d36 = (double)rdf32(self + 0x6cu);
    d37 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d36, d37, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
        goto L_1011ebc3;
    }
    eax = cow_fsw(g, d36, d37, 0u) & 0x4100u;
    COW_AT(1011eb6b)
    d38 = fr(g, (double)rdf32(self + 0x6cu) - (double)rdf32(self + 0x50u));
    if (!(d38 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d38;
        x0 = d38;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d38;
        x0 = d38;
    COW_AT(1011eb7f)
        x1 = -x1;
    }
    COW_AT(1011eb81)
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    COW_AT(1011eb92)
    d39 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x6cu, (float)d39);
    wrf32(self + 0xa4u, (float)d39);
    d40 = fr(g, fr(g, fr(g, fr(g, d39 - (double)rdf32(self + 0x50u)) / x0) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x64u))) + (double)rdf32(self + 0x64u));
    wrf32(self + 0x80u, (float)d40);
    wrf32(self + 0xb8u, (float)d40);
L_1011ebc3: ;
    COW_AT(1011ebc3)
    d41 = (double)rdf32(self + 0x54u);
    if (!(d41 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1011ec38;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1011ebd3)
    d42 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x54u));
    if (!(d42 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d42;
        x0 = d42;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d42;
        x0 = d42;
    COW_AT(1011ebeb)
        x1 = -x1;
    }
    COW_AT(1011ebed)
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
    COW_AT(1011ebfe)
    d43 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(COW_IMG(0x1032a3d0u)));
    wr32(self + 0x54u, 0xbf000000u);
    wr32(self + 0x70u, 0xbf000000u);
    d44 = fr(g, (double)rdf32(self + 0xa0u) - fr(g, fr(g, d43 / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u))));
    d45 = fr(g, fr(g, d43 / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u)));
    wrf32(self + 0x68u, (float)d44);
    d46 = fr(g, (double)rdf32(self + 0xbcu) - d45);
    wrf32(self + 0x84u, (float)d46);
L_1011ec38: ;
    COW_AT(1011ec38)
    d47 = (double)rdf32(self + 0x8cu);
    d48 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d47, d48, 0u) & 0x4100u) != 0u) goto L_1011ecab;
    eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
    COW_AT(1011ec4b)
    d49 = fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x54u));
    if (!(d49 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d49;
        x0 = d49;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d49;
        x0 = d49;
    COW_AT(1011ec63)
        x1 = -x1;
    }
    COW_AT(1011ec65)
    if (x1 < (double)rdf32(COW_IMG(0x1032961cu))) goto L_1011ed03;
    COW_AT(1011ec76)
    d50 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x8cu, (float)d50);
    wrf32(self + 0xa8u, (float)d50);
    d51 = fr(g, fr(g, fr(g, fr(g, d50 - (double)rdf32(self + 0x54u)) / x0) * fr(g, (double)rdf32(self + 0xa0u) - (double)rdf32(self + 0x68u))) + (double)rdf32(self + 0x68u));
    wrf32(self + 0xa0u, (float)d51);
    wrf32(self + 0xbcu, (float)d51);
L_1011ecab: ;
    COW_AT(1011ecab)
    if (arg6 != 0u)
    {
    COW_AT(1011ecc3)
        t55 = (uint32_t)((int32_t)arg6 >> 6u) & 3u;
        wr32(sp0 - 0x50u, t55);
        t56 = (uint32_t)((int32_t)arg6 >> 2u) & 3u;
        wr32(sp0 - 0x54u, t56);
        wr32(sp0 - 0x58u, arg6 & 3u);
        wr32(sp0 - 0x5cu, 1u);
        wr32(sp0 - 0x60u, self + 0x50u);
        g->ebx = ebx;
        g->esp = sp0 - 0x4cu;
        cow_fastcall(g, COW_IMG(0x1011f300u), self, t56, 5, self + 0x50u, 1u, arg6 & 3u, t56, t55);
    COW_AT(1011ece3)
    }
    else
    {
    COW_AT(1011ecb3)
        if (rd8(self + 0x2du) != 0u)
        {
    COW_AT(1011ece5)
            t52 = rd8(self + 0x30u);
            wr32(sp0 - 0x50u, t52);
            t53 = rd8(self + 0x2fu);
            wr32(sp0 - 0x54u, t53);
            t54 = rd8(self + 0x2eu);
            wr32(sp0 - 0x58u, t54);
            wr32(sp0 - 0x5cu, 1u);
            wr32(sp0 - 0x60u, self + 0x50u);
            g->ebx = ebx;
            g->esp = sp0 - 0x4cu;
            cow_fastcall(g, COW_IMG(0x1011f300u), self, t53, 5, self + 0x50u, 1u, t54, t53, t52);
    COW_AT(1011ed01)
        }
        else
        {
            eax = (arg6 & 0xffffff00u) | rd8(self + 0x2du);
    COW_AT(1011ecba)
            g->ebx = ebx;
            g->esp = sp0 - 0x4cu;
            cow_thiscall(g, COW_IMG(0x1011f2d0u), self, 0);
    COW_AT(1011ecc1)
        }
    }
L_1011ed05: ;
    COW_AT(1011ed05)
    eax = 0u;
    edi = self + 0x64u;
L_1011ed0a: ;
    COW_AT(1011ed0a)
    t57 = rd32(eax + sp0 - 0x30u);
    t58 = rd32(eax + sp0 - 0x20u);
    wr32(edi - 4u, t57);
    t59 = rd32(eax + sp0 - 0x10u);
    wr32(edi, t58);
    wr32(edi + 4u, t59);
    if ((int32_t)(eax + 4u) < 16)
    {
        eax = eax + 4u;
        edi = edi + 0x1cu;
        goto L_1011ed0a;
    }
    COW_AT(1011ed29)
    wr32(sp0 - 0x50u, 3u);
    wr32(sp0 - 0x54u, 0xdu);
    wr32(sp0 - 0x58u, 0u);
    t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t60);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 4, t60, 0u, 0xdu, 3u);
    COW_AT(1011ed41)
    wr32(sp0 - 0x50u, 3u);
    wr32(sp0 - 0x54u, 0xeu);
    wr32(sp0 - 0x58u, 0u);
    t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t61);
    g->eax = t61;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t62 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x4cu;
    t63 = cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 4, t61, 0u, 0xeu, 3u);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_1011ed59: ;
    COW_AT(1011ed59)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1011e9c1: ;
    COW_AT(1011e9c1)
    if (rd32(eax + 0x40u) == 0u)
    {
    COW_AT(1011e9cc)
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
    COW_AT(1011e9c8)
        eax = ecx;
    }
    COW_AT(1011e9cf)
    wr32(sp0 - 0x50u, eax);
    wr32(sp0 - 0x54u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x58u, t6);
    g->edx = rd32(t6);
    t7 = rd32(t6);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, rd32(t7 + 0xf4u), t6, 3, t6, 0u, eax);
    t8 = g->edx;
    edx = t8;
    goto L_1011e9e4;
L_1011ed03: ;
    COW_AT(1011ed03)
    goto L_1011ed05;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011e980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011e98eu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1011e997u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x50u;
        g->esi = self + 0x32u;
        (void)sp0;
        return 1;
    }
    case 0x1011e9a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1011e9bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1011e9c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011e9fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1011ea15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1011ea30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_44_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1011ea4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ea9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1011eafbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011eb92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ebc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ebd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ebebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ebedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ebfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ec38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ec4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ec63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ec65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ec76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ecabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ecb3u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->eax = arg6;
        g->ecx = self + 0x50u;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ecbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->edx = 0xbf000000u;
        (void)sp0;
        return 1;
    }
    case 0x1011ecc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ecc3u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->eax = arg6;
        g->ecx = self + 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1011ece3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ece5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ecx = self + 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1011ed01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ed03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ed05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1011ed0au:
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
        (void)sp0;
        return 1;
    }
    case 0x1011ed29u:
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
        (void)sp0;
        return 1;
    }
    case 0x1011ed41u:
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
        (void)sp0;
        return 1;
    }
    case 0x1011ed59u:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011e980(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
