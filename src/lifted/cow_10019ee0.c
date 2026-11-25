/* f_0x10019ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10019ee0(Guest* g)
{
    double d1;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d4;
    double d40;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t6;
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
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10019ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); in_ebx = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x64u); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_10019ef2;
    case 0x10019f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f13;
    case 0x10019f1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f1c;
    case 0x10019f32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f32;
    case 0x10019f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f38;
    case 0x10019f3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f3a;
    case 0x10019f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f46;
    case 0x10019f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f4e;
    case 0x10019f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f63;
    case 0x10019f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f6e;
    case 0x10019f7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f7b;
    case 0x10019f96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019f96;
    case 0x10019fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019fba;
    case 0x10019fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10019fe7;
    case 0x1001a008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a008;
    case 0x1001a012u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a012;
    case 0x1001a025u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a025;
    case 0x1001a051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a051;
    case 0x1001a05au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a05a;
    case 0x1001a087u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; sf = g->sf; goto E_1001a087;
    case 0x1001a0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; sf = g->sf; goto E_1001a0a8;
    case 0x1001a0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a0e6;
    case 0x1001a0f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a0f8;
    case 0x1001a123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a123;
    case 0x1001a12cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a12c;
    case 0x1001a135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a135;
    case 0x1001a141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a141;
    case 0x1001a154u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a154;
    case 0x1001a15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a15e;
    case 0x1001a187u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a187;
    case 0x1001a19du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_1001a19d;
    case 0x1001a1b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a1b2;
    case 0x1001a1b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a1b4;
    case 0x1001a1e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a1e2;
    case 0x1001a236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a236;
    case 0x1001a24fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a24f;
    case 0x1001a28cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a28c;
    case 0x1001a295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a295;
    case 0x1001a29eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; sf = g->sf; goto E_1001a29e;
    default: break;
    }
#endif

    COW_AT(10019ee0)
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    g->edx = in_edx;
    d1 = (double)rdf32(sp0 + 0x10u);
    fpush(g, d1);
    g->esp = sp0 - 0x70u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10019ef2)
    wr32(sp0 - 0x60u, eax);
    d4 = fr(g, (double)rdf32(sp0 + 0x10u) - (double)(int32_t)eax);
    wrf32(sp0 + 0x10u, (float)d4);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t5 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    t6 = g->edx;
    edx = t6;
    ebx = eax;
    eax = t5;
    COW_AT(10019f13)
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x20u, 0);
    COW_AT(10019f1c)
    eax = 0u;
    edx = self + rd32(sp0 + 8u) * 0x54u + 0x3eu;
    edi = rd32(sp0 + 8u) * 0x15u;
L_10019f32: ;
    COW_AT(10019f32)
    if (rd32(edx) == 0u) goto L_10019f63;
    ecx = rd32(edx);
    sf = (int32_t)rd32(edx) < 0;
    COW_AT(10019f38)
    if (!sf) goto L_10019f46;
    COW_AT(10019f3a)
    if (rd32(sp0 + 4u) != 0u)
    {
        ebp = rd32(sp0 + 4u);
        goto L_1001a051;
    }
L_10019f46: ;
    COW_AT(10019f46)
    if ((ecx & 0x7fffffffu) == 0u) goto L_10019f63;
    ecx = ecx & 0x7fffffffu;
    COW_AT(10019f4e)
    t25 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
    wr32(eax * 4u + sp0 - 0x20u, t25);
    ecx = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
L_10019f6e: ;
    COW_AT(10019f6e)
    wr32(eax * 4u + sp0 - 0x10u, ecx);
    if (eax + 1u < 4u)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_10019f32;
    }
    COW_AT(10019f7b)
    t27 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x74u, t27);
    wr32(sp0 - 0x78u, sp0 - 0x10u);
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    g->esp = sp0 - 0x70u;
    t28 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, sp0 - 0x20u, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x10u, t27);
    eax = t28;
    COW_AT(10019f96)
    wr32(sp0 - 0x20u, rd32(eax));
    t29 = rd32(eax + 4u);
    wr32(sp0 - 0x1cu, t29);
    t30 = rd32(eax + 8u);
    wr32(sp0 - 0x18u, t30);
    t31 = rd32(eax + 0xcu);
    wr32(sp0 - 0x14u, t31);
    g->esp = sp0 - 0x70u;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    COW_AT(10019fba)
    wr32(sp0 - 0x74u, arg5);
    wr32(sp0 - 0x78u, sp0 - 0x20u);
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    t32 = arg6 + arg3 * 0x34u;
    g->esp = sp0 - 0x70u;
    t33 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, t32, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x20u, arg5);
    eax = t33;
    ebp = t32;
    COW_AT(10019fe7)
    wr32(ebp, rd32(eax));
    t34 = rd32(eax + 4u);
    wr32(ebp + 4u, t34);
    t35 = rd32(eax + 8u);
    wr32(ebp + 8u, t35);
    t36 = rd32(eax + 0xcu);
    wr32(ebp + 0xcu, t36);
    g->esp = sp0 - 0x70u;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    COW_AT(1001a008)
    t37 = edi * 4u + self + 0x76u;
    wr32(sp0 + 8u, t37);
    eax = 0u;
L_1001a012: ;
    COW_AT(1001a012)
    if ((rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu) == 0u)
    {
    COW_AT(1001a141)
        wr32(eax * 4u + sp0 - 0x3cu, 0u);
        t41 = rd32(eax * 4u + edi * 4u + self + 0x6au);
        wr32(eax * 4u + sp0 - 0x54u, t41);
    }
    else
    {
        ecx = rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu;
    COW_AT(1001a025)
        t38 = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
        t39 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
        wr32(sp0 + 4u, t38);
        wr32(sp0 - 0x60u, t39);
        d40 = fr(g, (double)rdf32(sp0 + 4u) - cow_bits2f(t39));
        wr32(eax * 4u + sp0 - 0x54u, t39);
        wrf32(eax * 4u + sp0 - 0x3cu, (float)d40);
    }
    COW_AT(1001a154)
    if (rd32(rd32(sp0 + 8u)) == 0u)
    {
    COW_AT(1001a187)
        wr32(eax * 4u + sp0 - 0x30u, 0u);
        t44 = rd32(eax * 4u + edi * 4u + self + 0x82u);
        wr32(eax * 4u + sp0 - 0x48u, t44);
    }
    else
    {
        ecx = rd32(rd32(sp0 + 8u));
    COW_AT(1001a15e)
        t42 = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
        wr32(sp0 - 0x5cu, t42);
        t43 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
        wr32(sp0 - 0x58u, t43);
        wr32(eax * 4u + sp0 - 0x48u, t43);
        wrf32(eax * 4u + sp0 - 0x30u, (float)fr(g, cow_bits2f(t42) - cow_bits2f(t43)));
    }
    COW_AT(1001a19d)
    t45 = rd32(sp0 + 8u) + 4u;
    wr32(sp0 + 8u, t45);
    if (eax + 1u < 3u)
    {
        eax = eax + 1u;
        goto L_1001a012;
    }
    edx = t45;
    COW_AT(1001a1b2)
    eax = 0u;
L_1001a1b4: ;
    COW_AT(1001a1b4)
    d46 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax + sp0 - 0x3cu)) + (double)rdf32(eax + sp0 - 0x54u));
    wrf32(eax + sp0 - 0x54u, (float)d46);
    d47 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax + sp0 - 0x30u)) + (double)rdf32(eax + sp0 - 0x48u));
    wrf32(eax + sp0 - 0x48u, (float)d47);
    if (eax + 4u < 0xcu)
    {
        eax = eax + 4u;
        goto L_1001a1b4;
    }
    COW_AT(1001a1e2)
    d48 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
    d49 = fr(g, fr(g, d48 * (double)rdf32(ebp + 0x10u)) + fr(g, (double)rdf32(sp0 - 0x54u) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x10u, (float)d49);
    d50 = fr(g, fr(g, d48 * (double)rdf32(ebp + 0x14u)) + fr(g, (double)rdf32(sp0 - 0x50u) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x14u, (float)d50);
    d51 = fr(g, fr(g, d48 * (double)rdf32(ebp + 0x18u)) + fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x18u, (float)d51);
    if (arg3 != 0u)
    {
        x0 = d48;
    COW_AT(1001a24f)
        d52 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x1cu)) + fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x1cu, (float)d52);
        d53 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x20u, (float)d53);
        d54 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x40u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x24u, (float)d54);
        eax = arg3;
    }
    else
    {
        x0 = d48;
    COW_AT(1001a236)
        wr32(arg6 + 0x1cu, 0x3f800000u);
        wr32(arg6 + 0x20u, 0x3f800000u);
        wr32(arg6 + 0x24u, 0x3f800000u);
        eax = arg6;
    }
    COW_AT(1001a28c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t55 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(1001a295)
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t57 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    eax = t57;
    COW_AT(1001a29e)
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (eax & 0xffffff00u) | 1u;
L_10019f63: ;
    COW_AT(10019f63)
    t26 = rd32(eax * 4u + edi * 4u + self + 0x4eu);
    wr32(eax * 4u + sp0 - 0x20u, t26);
    ecx = t26;
    goto L_10019f6e;
L_1001a051: ;
    COW_AT(1001a051)
    if ((int32_t)ebp < 5)
    {
    COW_AT(1001a05a)
        wr32(sp0 - 0x74u, arg5);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        t7 = arg6 + arg3 * 0x34u;
        g->esp = sp0 - 0x70u;
        t8 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, t7, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x20u, arg5);
        eax = t8;
        esi = t7;
    COW_AT(1001a087)
        wr32(esi, rd32(eax));
        t9 = rd32(eax + 4u);
        wr32(esi + 4u, t9);
        t10 = rd32(eax + 8u);
        wr32(esi + 8u, t10);
        t11 = rd32(eax + 0xcu);
        wr32(esi + 0xcu, t11);
        g->eax = t11;
        g->edx = t10;
        g->esp = sp0 - 0x70u;
        t12 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    COW_AT(1001a0a8)
        d14 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
        d15 = fr(g, fr(g, d14 * (double)rdf32(esi + 0x10u)) + fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x103295d8u))));
        d16 = fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x103295d8u)));
        wrf32(esi + 0x10u, (float)d15);
        d17 = fr(g, fr(g, d14 * (double)rdf32(esi + 0x14u)) + d16);
        wrf32(esi + 0x14u, (float)d17);
        d18 = fr(g, fr(g, d14 * (double)rdf32(esi + 0x18u)) + d16);
        wrf32(esi + 0x18u, (float)d18);
        if (arg3 != 0u)
        {
            x0 = d14;
    COW_AT(1001a0f8)
            d19 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x1cu)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x1cu, (float)d19);
            d20 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x20u)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x20u, (float)d20);
            d21 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x24u)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x24u, (float)d21);
        }
        else
        {
            x0 = d14;
    COW_AT(1001a0e6)
            wr32(arg6 + 0x1cu, 0x3f800000u);
            wr32(arg6 + 0x20u, 0x3f800000u);
            wr32(arg6 + 0x24u, 0x3f800000u);
        }
    }
    COW_AT(1001a123)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t22 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(1001a12c)
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t24 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    eax = t24;
    COW_AT(1001a135)
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10019ef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        in_ebx = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019f96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019fbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10019fe7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a008u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a012u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a025u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a051u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a05au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a087u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg6;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1001a0a8u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg6;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1001a0e6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x70u;
        g->ebx = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1001a0f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a123u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a12cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a135u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a141u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a154u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a15eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a187u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a19du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a1b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a1b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a1e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a24fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x70u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1001a28cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a295u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001a29eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10019ee0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
