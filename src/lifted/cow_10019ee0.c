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
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d39;
    double d4;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
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
    uint32_t t2;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 128u);

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
    wr32(sp0 - 0x60u, t2);
    d4 = fr(g, (double)rdf32(sp0 + 0x10u) - (double)(int32_t)t2);
    wrf32(sp0 + 0x10u, (float)d4);
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x20u, 0);
    eax = 0u;
    edx = self + rd32(sp0 + 8u) * 0x54u + 0x3eu;
    ebx = t2;
    edi = rd32(sp0 + 8u) * 0x15u;
L_10019f32: ;
    if (rd32(edx) == 0u) goto L_10019f63;
    ecx = rd32(edx);
    sf = (int32_t)rd32(edx) < 0;
    if (!sf) goto L_10019f46;
    if (rd32(sp0 + 4u) != 0u)
    {
        ebp = rd32(sp0 + 4u);
        goto L_1001a051;
    }
L_10019f46: ;
    if ((ecx & 0x7fffffffu) == 0u) goto L_10019f63;
    ecx = ecx & 0x7fffffffu;
    t24 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
    wr32(eax * 4u + sp0 - 0x20u, t24);
    ecx = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
L_10019f6e: ;
    wr32(eax * 4u + sp0 - 0x10u, ecx);
    if (eax + 1u < 4u)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_10019f32;
    }
    t26 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x74u, t26);
    wr32(sp0 - 0x78u, sp0 - 0x10u);
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    g->esp = sp0 - 0x70u;
    t27 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, sp0 - 0x20u, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x10u, t26);
    wr32(sp0 - 0x20u, rd32(t27));
    t28 = rd32(t27 + 4u);
    wr32(sp0 - 0x1cu, t28);
    t29 = rd32(t27 + 8u);
    wr32(sp0 - 0x18u, t29);
    t30 = rd32(t27 + 0xcu);
    wr32(sp0 - 0x14u, t30);
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    wr32(sp0 - 0x74u, arg5);
    wr32(sp0 - 0x78u, sp0 - 0x20u);
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    t31 = arg6 + arg3 * 0x34u;
    t32 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, t31, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x20u, arg5);
    wr32(t31, rd32(t32));
    t33 = rd32(t32 + 4u);
    wr32(t31 + 4u, t33);
    t34 = rd32(t32 + 8u);
    wr32(t31 + 8u, t34);
    t35 = rd32(t32 + 0xcu);
    wr32(t31 + 0xcu, t35);
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t36 = edi * 4u + self + 0x76u;
    wr32(sp0 + 8u, t36);
    eax = 0u;
    ebp = t31;
L_1001a012: ;
    if ((rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu) == 0u)
    {
        wr32(eax * 4u + sp0 - 0x3cu, 0u);
        t40 = rd32(eax * 4u + edi * 4u + self + 0x6au);
        wr32(eax * 4u + sp0 - 0x54u, t40);
    }
    else
    {
        ecx = rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu;
        t37 = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
        t38 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
        wr32(sp0 + 4u, t37);
        wr32(sp0 - 0x60u, t38);
        d39 = fr(g, (double)rdf32(sp0 + 4u) - cow_bits2f(t38));
        wr32(eax * 4u + sp0 - 0x54u, t38);
        wrf32(eax * 4u + sp0 - 0x3cu, (float)d39);
    }
    if (rd32(rd32(sp0 + 8u)) == 0u)
    {
        wr32(eax * 4u + sp0 - 0x30u, 0u);
        t43 = rd32(eax * 4u + edi * 4u + self + 0x82u);
        wr32(eax * 4u + sp0 - 0x48u, t43);
    }
    else
    {
        ecx = rd32(rd32(sp0 + 8u));
        t41 = rd32(ebx * 4u + ecx * 4u + self + 0x3eu);
        wr32(sp0 - 0x5cu, t41);
        t42 = rd32(ebx * 4u + ecx * 4u + self + 0x3au);
        wr32(sp0 - 0x58u, t42);
        wr32(eax * 4u + sp0 - 0x48u, t42);
        wrf32(eax * 4u + sp0 - 0x30u, (float)fr(g, cow_bits2f(t41) - cow_bits2f(t42)));
    }
    t44 = rd32(sp0 + 8u) + 4u;
    wr32(sp0 + 8u, t44);
    if (eax + 1u < 3u)
    {
        eax = eax + 1u;
        goto L_1001a012;
    }
    edx = t44;
    eax = 0u;
L_1001a1b4: ;
    d45 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax + sp0 - 0x3cu)) + (double)rdf32(eax + sp0 - 0x54u));
    wrf32(eax + sp0 - 0x54u, (float)d45);
    d46 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax + sp0 - 0x30u)) + (double)rdf32(eax + sp0 - 0x48u));
    wrf32(eax + sp0 - 0x48u, (float)d46);
    if (eax + 4u < 0xcu)
    {
        eax = eax + 4u;
        goto L_1001a1b4;
    }
    d47 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
    d48 = fr(g, fr(g, d47 * (double)rdf32(ebp + 0x10u)) + fr(g, (double)rdf32(sp0 - 0x54u) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x10u, (float)d48);
    d49 = fr(g, fr(g, d47 * (double)rdf32(ebp + 0x14u)) + fr(g, (double)rdf32(sp0 - 0x50u) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x14u, (float)d49);
    d50 = fr(g, fr(g, d47 * (double)rdf32(ebp + 0x18u)) + fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(sp0 + 0x14u)));
    wrf32(ebp + 0x18u, (float)d50);
    if (arg3 != 0u)
    {
        x0 = d47;
        d51 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x1cu)) + fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x1cu, (float)d51);
        d52 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x20u, (float)d52);
        d53 = fr(g, fr(g, x0 * (double)rdf32(ebp + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x40u) * (double)rdf32(sp0 + 0x14u)));
        wrf32(ebp + 0x24u, (float)d53);
        eax = arg3;
    }
    else
    {
        x0 = d47;
        wr32(arg6 + 0x1cu, 0x3f800000u);
        wr32(arg6 + 0x20u, 0x3f800000u);
        wr32(arg6 + 0x24u, 0x3f800000u);
        eax = arg6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t54 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t55 = g->edx;
    t56 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return (t56 & 0xffffff00u) | 1u;
L_10019f63: ;
    t25 = rd32(eax * 4u + edi * 4u + self + 0x4eu);
    wr32(eax * 4u + sp0 - 0x20u, t25);
    ecx = t25;
    goto L_10019f6e;
L_1001a051: ;
    if ((int32_t)ebp < 5)
    {
        wr32(sp0 - 0x74u, arg5);
        wr32(sp0 - 0x78u, sp0 - 0x20u);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        t6 = arg6 + arg3 * 0x34u;
        g->esp = sp0 - 0x70u;
        t7 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x30u, t6, g->edx, 0, 3, sp0 - 0x30u, sp0 - 0x20u, arg5);
        wr32(t6, rd32(t7));
        t8 = rd32(t7 + 4u);
        wr32(t6 + 4u, t8);
        t9 = rd32(t7 + 8u);
        wr32(t6 + 8u, t9);
        t10 = rd32(t7 + 0xcu);
        wr32(t6 + 0xcu, t10);
        g->eax = t10;
        g->edx = t9;
        t11 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t12 = g->edx;
        d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x14u));
        d14 = fr(g, fr(g, d13 * (double)rdf32(t6 + 0x10u)) + fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x103295d8u))));
        d15 = fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x103295d8u)));
        wrf32(t6 + 0x10u, (float)d14);
        d16 = fr(g, fr(g, d13 * (double)rdf32(t6 + 0x14u)) + d15);
        wrf32(t6 + 0x14u, (float)d16);
        d17 = fr(g, fr(g, d13 * (double)rdf32(t6 + 0x18u)) + d15);
        wrf32(t6 + 0x18u, (float)d17);
        if (arg3 != 0u)
        {
            eax = t11;
            edx = t12;
            esi = t6;
            x0 = d13;
            d18 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x1cu)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x1cu, (float)d18);
            d19 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x20u)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x20u, (float)d19);
            d20 = fr(g, fr(g, x0 * (double)rdf32(esi + 0x24u)) + (double)rdf32(sp0 + 0x14u));
            wrf32(esi + 0x24u, (float)d20);
        }
        else
        {
            eax = t11;
            edx = t12;
            x0 = d13;
            wr32(arg6 + 0x1cu, 0x3f800000u);
            wr32(arg6 + 0x20u, 0x3f800000u);
            wr32(arg6 + 0x24u, 0x3f800000u);
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t21 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t22 = g->edx;
    t23 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    return t23 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019ee0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
