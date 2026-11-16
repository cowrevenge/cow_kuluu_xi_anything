/* f_0x10019b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10019b30(Guest* g)
{
    double d1;
    double d32;
    double d4;
    double d49;
    double d50;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t sf;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    d1 = (double)rdf32(sp0 + 0x10u);
    wr8(sp0 - 0x49u, 1u);
    g->edx = in_edx;
    fpush(g, d1);
    g->esp = sp0 - 0x5cu;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, t2);
    wr32(sp0 - 0x40u, t2);
    d4 = fr(g, (double)rdf32(sp0 + 0x10u) - (double)(int64_t)cow_i64(t2, 0u));
    wrf32(sp0 + 0x10u, (float)d4);
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    t5 = rd32(sp0 + 8u) * 0x15u;
    wr32(sp0 - 0x48u, t5);
    t6 = self + t5 * 4u + 0x3eu;
    wr32(sp0 - 0x44u, t6);
    eax = 0u;
    ecx = t5;
    ebx = t2;
    edi = rd32(sp0 + 0xcu);
    loc_48 = t5;
    loc_44 = t6;
L_10019b96: ;
    if (rd32(loc_44) == 0u) goto L_10019be0;
    edx = rd32(loc_44);
    sf = (int32_t)rd32(loc_44) < 0;
    if (!sf) goto L_10019bae;
    if (rd32(sp0 + 4u) != 0u)
    {
        ebp = rd32(sp0 + 4u);
        goto L_10019cea;
    }
L_10019bae: ;
    wr32(sp0 + 0xcu, edx & 0x7fffffffu);
    if ((edx & 0x7fffffffu) == 0u)
    {
        ebp = eax + edi;
        goto L_10019be3;
    }
    edx = edx & 0x7fffffffu;
    ebp = eax + edi;
    t15 = rd32(ebx * 4u + edx * 4u + self + 0x3au);
    wr32(arg5 + ebp * 4u + edi * 0x30u, t15);
    ecx = rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 4u + 0x3eu);
L_10019c04: ;
    wr32(eax * 4u + sp0 - 0x10u, ecx);
    wr32(sp0 - 0x44u, loc_44 + 4u);
    if (eax + 1u < 4u)
    {
        eax = eax + 1u;
        loc_44 = loc_44 + 4u;
        goto L_10019b92;
    }
    t17 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x60u, t17);
    wr32(sp0 - 0x64u, sp0 - 0x10u);
    wr32(sp0 - 0x68u, sp0 - 0x20u);
    t18 = arg5 + edi * 0x34u;
    g->esp = sp0 - 0x5cu;
    t19 = cow_call_regs(g, COW_IMG(0x10033220u), sp0 - 0x10u, t18, g->edx, 0, 3, sp0 - 0x20u, sp0 - 0x10u, t17);
    wr32(t18, rd32(t19));
    t20 = rd32(t19 + 4u);
    wr32(t18 + 4u, t20);
    t21 = rd32(t19 + 8u);
    wr32(t18 + 8u, t21);
    t22 = rd32(t19 + 0xcu);
    wr32(t18 + 0xcu, t22);
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    if ((int32_t)rd32(self + rd32(sp0 + 8u) * 0x54u + 0x5eu) >= 0)
    {
        ebp = t18;
        goto L_10019dac;
    }
    ebp = t18;
    if (rd32(sp0 + 4u) == 0u) goto L_10019dac;
    t23 = rd32(sp0 - 0x48u);
    wr32(sp0 + 4u, ebp + 0x1cu);
    t24 = self + t23 * 4u + 0x76u;
    wr32(sp0 + 8u, t24);
    eax = 0u;
    ecx = ebp + 0x1cu;
L_10019c9e: ;
    t25 = rd32(sp0 + 8u);
    wr32(ecx - 0xcu, 0u);
    if (rd32(t25) == 0u)
    {
        t29 = rd32(sp0 - 0x48u);
        wr32(eax * 4u + sp0 - 0x2cu, 0u);
        t30 = rd32(eax * 4u + self + t29 * 4u + 0x82u);
        wr32(ecx, t30);
    }
    else
    {
        edx = rd32(t25);
        t26 = ebx * 4u + edx * 4u + self + 0x3au;
        wr32(sp0 + 0xcu, t26);
        wr32(ecx, rd32(t26));
        t27 = rd32(ebx * 4u + edx * 4u + self + 0x3eu);
        wr32(sp0 - 0x44u, t27);
        t28 = rd32(rd32(sp0 + 0xcu));
        wr32(sp0 - 0x40u, t28);
        wrf32(eax * 4u + sp0 - 0x2cu, (float)fr(g, cow_bits2f(t27) - cow_bits2f(t28)));
    }
    t31 = rd32(sp0 + 8u) + 4u;
    wr32(sp0 + 8u, t31);
    if (eax + 1u < 3u)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_10019c9e;
    }
    edx = t31;
    eax = 0u;
    ecx = rd32(sp0 + 4u);
L_10019d8e: ;
    d32 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax * 4u + sp0 - 0x2cu)) + (double)rdf32(ecx));
    wrf32(ecx, (float)d32);
    if (eax + 1u < 3u)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_10019d8e;
    }
    eax = eax + 1u;
    ebx = ebx & 0xffffff00u;
L_10019eb5: ;
    if (edi == 0u)
    {
        wr32(arg5 + 0x1cu, 0x3f800000u);
        wr32(arg5 + 0x20u, 0x3f800000u);
        wr32(arg5 + 0x24u, 0x3f800000u);
        eax = arg5;
    }
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t51 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    return (t51 & 0xffffff00u) | (uint8_t)ebx;
L_10019b92: ;
    ecx = loc_48;
    goto L_10019b96;
L_10019be0: ;
    ebp = eax + edi;
L_10019be3: ;
    t16 = eax * 4u + ecx * 4u + self + 0x4eu;
    wr32(sp0 + 0xcu, t16);
    wr32(arg5 + ebp * 4u + edi * 0x30u, rd32(t16));
    ecx = rd32(rd32(sp0 + 0xcu));
    goto L_10019c04;
L_10019cea: ;
    if ((int32_t)ebp < 5)
    {
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x20u, 0);
        t7 = arg5 + edi * 0x34u;
        t8 = rd32(sp0 - 0x20u);
        wr32(t7, t8);
        t9 = rd32(sp0 - 0x1cu);
        wr32(t7 + 4u, t9);
        t10 = rd32(sp0 - 0x18u);
        wr32(t7 + 8u, t10);
        t11 = rd32(sp0 - 0x14u);
        wr32(t7 + 0xcu, t11);
        wr32(t7 + 0x10u, 0u);
        wr32(t7 + 0x14u, 0u);
        wr32(t7 + 0x18u, 0u);
        wr32(t7 + 0x1cu, 0x3f800000u);
        wr32(t7 + 0x20u, 0x3f800000u);
        wr32(t7 + 0x24u, 0x3f800000u);
        g->eax = t7;
        g->edx = t7;
        t12 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t14 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    return t14 & 0xffffff00u;
L_10019dac: ;
    t33 = rd32(sp0 - 0x48u);
    wr32(sp0 + 4u, ebp + 0x1cu);
    t34 = self + t33 * 4u + 0x76u;
    wr32(sp0 + 8u, t34);
    eax = 0u;
    ecx = ebp + 0x1cu;
L_10019dc1: ;
    if ((rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu) == 0u)
    {
        t39 = rd32(sp0 - 0x48u);
        wr32(eax * 4u + sp0 - 0x20u, 0u);
        t40 = rd32(eax * 4u + self + t39 * 4u + 0x6au);
        wr32(ecx - 0xcu, t40);
    }
    else
    {
        edx = rd32(rd32(sp0 + 8u) - 0x18u) & 0x7fffffffu;
        t35 = rd32(ebx * 4u + edx * 4u + self + 0x3au);
        wr32(ecx - 0xcu, t35);
        t36 = rd32(edx * 4u + self + rd32(sp0 - 0x40u) * 4u + 0x3eu);
        wr32(sp0 - 0x44u, t36);
        t37 = rd32(ebx * 4u + edx * 4u + self + 0x3au);
        wr32(sp0 - 0x3cu, t37);
        t38 = rd32(sp0 - 0x40u);
        wrf32(eax * 4u + sp0 - 0x20u, (float)fr(g, cow_bits2f(t36) - cow_bits2f(t37)));
        ebx = t38;
    }
    t41 = rd32(rd32(sp0 + 8u));
    t42 = rd32(rd32(sp0 + 8u));
    wr32(sp0 + 0xcu, t41);
    if (t42 == 0u)
    {
        t46 = rd32(sp0 - 0x48u);
        wr32(eax * 4u + sp0 - 0x2cu, 0u);
        t47 = rd32(eax * 4u + self + t46 * 4u + 0x82u);
        wr32(ecx, t47);
    }
    else
    {
        edx = t41;
        t43 = rd32(ebx * 4u + edx * 4u + self + 0x3au);
        wr32(ecx, t43);
        t44 = rd32(ebx * 4u + edx * 4u + self + 0x3au);
        wr32(sp0 - 0x34u, t44);
        t45 = rd32(ebx * 4u + self + rd32(sp0 + 0xcu) * 4u + 0x3eu);
        wr32(sp0 - 0x38u, t45);
        wrf32(eax * 4u + sp0 - 0x2cu, (float)fr(g, cow_bits2f(t45) - cow_bits2f(t44)));
    }
    t48 = rd32(sp0 + 8u) + 4u;
    wr32(sp0 + 8u, t48);
    if (eax + 1u < 3u)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_10019dc1;
    }
    edx = t48;
    eax = rd32(sp0 + 4u);
    ecx = 0u;
L_10019e8a: ;
    d49 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(ecx + sp0 - 0x20u)) + (double)rdf32(eax - 0xcu));
    wrf32(eax - 0xcu, (float)d49);
    d50 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(ecx + sp0 - 0x2cu)) + (double)rdf32(eax));
    wrf32(eax, (float)d50);
    if (ecx + 4u < 0xcu)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_10019e8a;
    }
    eax = eax + 4u;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x49u);
    goto L_10019eb5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019b30(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
