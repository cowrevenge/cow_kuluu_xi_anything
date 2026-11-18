/* f_0x102e6415 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102e6415(Guest* g)
{
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
    double d24;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_30_f;
    double loc_34_f;
    uint32_t loc_4;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e6442u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102e6442;
    case 0x102e6464u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e6464;
    case 0x102e6474u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e6474;
    case 0x102e6476u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e6476;
    case 0x102e648bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102e648b;
    case 0x102e648eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e648e;
    case 0x102e649fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e649f;
    case 0x102e64aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e64aa;
    case 0x102e64f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e64f9;
    case 0x102e6515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e6515;
    case 0x102e651du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e651d;
    case 0x102e653du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e653d;
    case 0x102e6541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e6541;
    case 0x102e656cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x54u); goto E_102e656c;
    case 0x102e6577u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e6577;
    case 0x102e658du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_102e658d;
    case 0x102e6650u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); goto E_102e6650;
    case 0x102e665du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); goto E_102e665d;
    case 0x102e666au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); goto E_102e666a;
    case 0x102e6674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_102e6674;
    case 0x102e6694u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); goto E_102e6694;
    case 0x102e6696u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_102e6696;
    case 0x102e669au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_102e669a;
    case 0x102e66a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); goto E_102e66a3;
    case 0x102e66aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_34_f = rdf32(sp0 - 0x34u); loc_30_f = rdf32(sp0 - 0x30u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e66ae;
    default: break;
    }
#endif

    COW_AT(102e6415)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328311u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e641fu));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 + 4u, rd32(self + 0x1034u) + rd32(sp0 + 4u));
    wr32(sp0 + 8u, rd32(self + 0x1040u) + rd32(sp0 + 8u));
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd32(self + 0x10b8u) != 0u)
    {
        ecx = self;
        loc_4 = in_ebp;
        loc_10 = t1;
        loc_14 = self;
        loc_4c = in_esi;
        loc_50 = in_edi;
        goto L_102e648e;
    }
    loc_10 = t1;
    COW_AT(102e6442)
    t2 = rd32(self + 0x10a4u) << 4u;
    wr32(sp0 - 0x54u, t2 << 4u);
    g->eax = t2 << 4u;
    g->esp = sp0 - 0x48u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, t2 << 4u, in_edi, in_esi);
    t4 = g->edx;
    wr32(sp0 - 0x28u, t3);
    wr32(sp0 - 8u, 0u);
    if (t3 == 0u)
    {
        edx = t4;
    COW_AT(102e6474)
        edi = 0u;
    }
    else
    {
        eax = t3;
        ecx = rd32(sp0 - 0x54u);
        edx = t4;
        esi = t2;
        edi = t3;
    COW_AT(102e6464)
        wr32(sp0 - 0x54u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x58u, esi);
        wr32(sp0 - 0x5cu, 0x10u);
        wr32(sp0 - 0x60u, edi);
        g->esp = sp0 - 0x50u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, edi, 0x10u, esi, COW_IMG(0x102d2a17u));
        t5 = g->edx;
        edx = t5;
    }
    COW_AT(102e6476)
    wr32(sp0 - 8u, 0xffffffffu);
    t6 = rd32(sp0 - 0x14u);
    wr32(t6 + 0x10b8u, edi);
    if (edi == 0u)
    {
        eax = t6;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
        goto L_102e66ae;
    }
    COW_AT(102e648b)
    ecx = rd32(sp0 - 0x14u);
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
L_102e648e: ;
    COW_AT(102e648e)
    wr32(sp0 - 0x54u, in_ebx);
    if ((rd32(sp0 + 4u) & 0xfffffffcu) != rd32(ecx + 0x10b0u))
    {
        eax = ecx + 0x10b0u;
        edx = rd32(sp0 + 4u) & 0xfffffffcu;
        goto L_102e64aa;
    }
    eax = ecx + 0x10b0u;
    edx = rd32(sp0 + 4u) & 0xfffffffcu;
    COW_AT(102e649f)
    if (rd32(sp0 + 8u) == rd32(ecx + 0x10b4u)) goto L_102e651d;
L_102e64aa: ;
    COW_AT(102e64aa)
    wr32(eax, edx);
    t7 = rd32(sp0 + 8u);
    wr32(loc_14 + 0x10b4u, t7);
    t8 = rd32(loc_14 + 0x108cu);
    eax = rd32(loc_14 + 0x10b4u) * rd32(loc_14 + 0x1054u);
    ecx = loc_14;
    ebx = rd32(loc_14 + 0x10b8u);
    esi = rd32(loc_14 + 0x18u) + (t8 >> 2u) * rd32(loc_14 + 0x1080u) + rd32(loc_14 + 0x10b4u) * rd32(loc_14 + 0x1054u) + (rd32(loc_14 + 0x10b0u) >> 2u) * rd32(loc_14 + 0x1050u);
    edi = t8;
L_102e6515: ;
    COW_AT(102e6515)
    if (edi < rd32(ecx + 0x1094u)) goto L_102e64f9;
L_102e651d: ;
    COW_AT(102e651d)
    eax = rd32(ecx + 0x1030u) - rd32(ecx + 0x108cu);
    edx = rd32(ecx + 0x1030u) + rd32(ecx + 0x1058u) - rd32(ecx + 0x108cu);
    ebx = rd32(sp0 + 4u) - rd32(ecx + 0x1090u) & 3u;
L_102e653d: ;
    COW_AT(102e653d)
    if (eax >= edx) goto L_102e656c;
    COW_AT(102e6541)
    t9 = rd32(ecx + 0x10b8u);
    t10 = rd32(sp0 + 0xcu);
    esi = t9 + (((eax & 0xfffffffcu) | ebx) << 2u | (eax & 3u)) * 0x10u;
    edi = t10;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 0x10u);
    eax = eax + 1u;
    ecx = loc_14;
    goto L_102e653d;
L_102e64f9: ;
    COW_AT(102e64f9)
    wr32(sp0 - 0x58u, esi);
    wr32(sp0 - 0x5cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t26 = cow_thiscall_cdecl(g, rd32(ecx + 0x1084u), ecx, 2, ebx, esi);
    t27 = g->edx;
    eax = t26;
    ecx = rd32(sp0 - 0x14u);
    edx = t27;
    ebx = ebx + 0x100u;
    esi = esi + rd32(rd32(sp0 - 0x14u) + 0x1080u);
    edi = edi + 4u;
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_102e6515;
L_102e656c: ;
    COW_AT(102e656c)
    if (rd32(ecx + 0x10u) != 0u)
    {
    COW_AT(102e6577)
        g->edx = rd32(ecx + 0x1058u) * 0x10u + rd32(sp0 + 0xcu);
        t11 = rd32(ecx + 0x1058u);
        t12 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x44u;
        cow_thiscall_cdecl(g, COW_IMG(0x102e2005u), ecx, 3, loc_50, loc_4c, rd32(sp0 - 0x48u));
        t13 = g->edx;
        edx = t13;
L_102e669a: ;
    COW_AT(102e669a)
        if (rd32(sp0 + 0xcu) < edx) goto L_102e658d;
    COW_AT(102e66a3)
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109b1a4cu)));
        g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a4cu));
        eax = rd32(COW_IMG(0x109b1a4cu));
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
    }
L_102e66ae: ;
    COW_AT(102e66ae)
    wr32(g->fs_base, loc_10);
    g->ebx = in_ebx;
    g->esi = loc_4c;
    g->edi = loc_50;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e658d: ;
    COW_AT(102e658d)
    d14 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu)) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d14);
    wr32(sp0 - 0x1cu, (uint32_t)fist32(g, (double)(float)d14));
    wr32(sp0 - 0x18u, (uint32_t)fist32(g, (double)(float)d14));
    d15 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d14) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d15);
    d16 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(COW_IMG(0x10346160u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d16);
    wr32(sp0 - 0x20u, (uint32_t)fist32(g, (double)(float)d16));
    wr32(sp0 - 0x18u, (uint32_t)fist32(g, (double)(float)d16));
    d17 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d16) * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(sp0 - 0x34u, (float)(double)(float)d17);
    d18 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d18);
    wr32(sp0 - 0x24u, (uint32_t)fist32(g, (double)(float)d18));
    wr32(sp0 - 0x18u, (uint32_t)fist32(g, (double)(float)d18));
    d19 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d18) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(sp0 - 0x30u, (float)(double)(float)d19);
    d20 = fr(g, fr(g, (double)rdf32(rd32(sp0 - 0x14u) + 0x106cu) * (double)rdf32(rd32(sp0 + 0xcu) + 0xcu)) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d20);
    wr32(sp0 - 0x28u, (uint32_t)fist32(g, (double)(float)d20));
    wr32(sp0 - 0x18u, (uint32_t)fist32(g, (double)(float)d20));
    d21 = (double)rdf32(rd32(sp0 - 0x14u) + 0x1cu);
    if ((double)(float)d15 != d21)
    {
        x0 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d20) * (double)rdf32(rd32(sp0 - 0x14u) + 0x1070u));
        goto L_102e6694;
    }
    eax = ((uint32_t)fist32(g, (double)(float)d20) & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d15, d21, 1u);
    ecx = rd32(sp0 - 0x14u);
    loc_34_f = (double)(float)d17;
    loc_30_f = (double)(float)d19;
    x0 = fr(g, (double)(int32_t)(uint32_t)fist32(g, (double)(float)d20) * (double)rdf32(rd32(sp0 - 0x14u) + 0x1070u));
    COW_AT(102e6650)
    d22 = (double)rdf32(ecx + 0x20u);
    if (loc_34_f != d22) goto L_102e6694;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_34_f, d22, 1u);
    COW_AT(102e665d)
    d23 = (double)rdf32(ecx + 0x24u);
    if (loc_30_f != d23) goto L_102e6694;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, d23, 1u);
    COW_AT(102e666a)
    d24 = (double)rdf32(ecx + 0x28u);
    if (x0 == d24)
    {
    COW_AT(102e6674)
        wrf32(sp0 - 0x48u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x44u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x40u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x3cu, (float)(double)(float)0.0);
        t25 = rd32(sp0 + 0xcu);
        esi = sp0 - 0x48u;
        edi = t25;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    }
L_102e6696: ;
    COW_AT(102e6696)
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 0x10u);
    goto L_102e669a;
L_102e6694: ;
    COW_AT(102e6694)
    goto L_102e6696;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e6415(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e6442u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, self);
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e6464u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e6474u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e6476u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e648bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e648eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e649fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e64aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e64f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6515u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e651du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e653du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6541u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e656cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6577u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e658du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6650u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e665du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e666au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6674u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6694u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e6696u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e669au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e66a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double loc_30_f;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e66aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_30_f;
        double loc_34_f;
        uint32_t loc_4;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e6415(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e6415(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
