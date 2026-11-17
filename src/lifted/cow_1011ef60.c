/* f_0x1011ef60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1011ef60(Guest* g)
{
    double d16;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d31;
    double d39;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_48_f;
    double loc_4c_f;
    double loc_50_f;
    double loc_54_f;
    double loc_58_f;
    double loc_5c_f;
    uint32_t loc_6c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, 0xdu);
    wr32(sp0 - 0x74u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t1);
    g->esp = sp0 - 0x68u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t1, 0u, 0xdu, 1u);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, 0xeu);
    wr32(sp0 - 0x74u, 0u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t2);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t3 = rd32(t2);
    t4 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(t3 + 0xfcu), t3, 4, t2, 0u, 0xeu, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(self + 0x4cu) != 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_1011efd1;
    }
    eax = rd32(self + 0x4cu);
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x6cu, self + 0x32u);
    g->eax = eax;
    g->esp = sp0 - 0x68u;
    t7 = cow_call_regs(g, COW_IMG(0x10315ae8u), g->eax, ecx, edx, 1, 1, self + 0x32u);
    t8 = g->edx;
    wr32(sp0 - 0x6cu, self + 0x32u);
    t9 = cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x40u, t8, 1, self + 0x32u);
    wr32(sp0 - 0x6cu, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    t10 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x40u);
    t11 = g->edx;
    wr32(self + 0x4cu, t10);
    if (t10 == 0u)
    {
        eax = t10;
        ebx = in_ebx;
        goto L_1011f2c0;
    }
    edx = t11;
L_1011eff3: ;
    wr32(sp0 - 0x44u, 0u);
    t15 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x48u, t15);
    d16 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
    wrf32(sp0 - 0x5cu, (float)d16);
    t17 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x48u, t17);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x6cu, in_ebx);
    wrf32(sp0 + 0x14u, (float)(double)(int64_t)cow_i64(t15, 0u));
    d18 = (double)(float)fr(g, (double)(int64_t)cow_i64(t15, 0u) + d16);
    wrf32(sp0 - 0x54u, (float)d18);
    d19 = (double)(float)fr(g, (double)(int64_t)cow_i64(t15, 0u) + d16);
    wrf32(sp0 - 0x50u, (float)d19);
    d20 = (double)(float)(double)(int32_t)rd32(sp0 + 0x10u);
    wrf32(sp0 - 0x58u, (float)d20);
    wrf32(sp0 + 0x10u, (float)(double)(int64_t)cow_i64(t17, 0u));
    d21 = (double)(float)fr(g, (double)(int64_t)cow_i64(t17, 0u) + d20);
    wrf32(sp0 - 0x4cu, (float)d21);
    d22 = (double)(float)fr(g, (double)(int64_t)cow_i64(t17, 0u) + d20);
    wrf32(sp0 - 0x48u, (float)d22);
    ecx = t17;
    ebp = 0u;
    edi = self + 0x60u;
    loc_48_f = d22;
    loc_5c_f = d16;
    loc_54_f = d18;
    loc_50_f = d19;
    loc_58_f = d20;
    loc_4c_f = d21;
L_1011f054: ;
    wr32(sp0 - 0x70u, arg9);
    wr32(sp0 - 0x74u, rd32(edi));
    t23 = rd32(edi);
    wr32(ebp + sp0 - 0x30u, t23);
    g->eax = t23;
    g->ecx = ecx;
    g->esp = sp0 - 0x6cu;
    t24 = cow_cdecl(g, COW_IMG(0x101200b0u), 2, t23, arg9);
    t25 = g->ecx;
    t26 = rd32(edi + 4u);
    wr32(edi, t24);
    t27 = rd32(edi + 8u);
    wr32(ebp + sp0 - 0x20u, t26);
    wr32(ebp + sp0 - 0x10u, t27);
    if ((int32_t)(ebp + 4u) < 16)
    {
        ecx = t25;
        edx = t26;
        ebp = ebp + 4u;
        edi = edi + 0x1cu;
        loc_48_f = (double)rdf32(sp0 - 0x48u);
        loc_5c_f = (double)rdf32(sp0 - 0x5cu);
        loc_54_f = (double)rdf32(sp0 - 0x54u);
        loc_50_f = (double)rdf32(sp0 - 0x50u);
        loc_58_f = (double)rdf32(sp0 - 0x58u);
        loc_4c_f = (double)rdf32(sp0 - 0x4cu);
        goto L_1011f054;
    }
    t28 = rd32(self + 0x64u);
    t29 = rd32(self + 0x4cu);
    t30 = rd16(rd32(self + 0x4cu) + 0x24u);
    d31 = (double)rdf32(self + 0x68u);
    wr32(sp0 + 0xcu, t28);
    wr32(sp0 + 0x18u, t30);
    t32 = rd16(t29 + 0x26u);
    t33 = rd8(sp0 + 0x2cu);
    t34 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x18u, t32);
    t35 = rd32(sp0 - 0x6cu);
    t36 = rd32(sp0 + 0x18u);
    wrf32(sp0 + 0x18u, (float)(double)(int32_t)t36);
    if ((uint8_t)t33 != 0u)
    {
        ebx = t35;
        x1 = (double)(int32_t)t34;
        x0 = d31;
        t37 = (uint32_t)(int16_t)rd16(self + 8u);
        wr32(sp0 + 0x2cu, t37);
        t38 = (uint32_t)(int16_t)rd16(self + 0xau);
        d39 = fr(g, (double)(int32_t)rd32(sp0 + 0x2cu) / x1);
        wr32(sp0 + 0x2cu, t38);
        eax = t38;
        x2 = (double)(int32_t)rd32(sp0 + 0x2cu);
        x1 = fr(g, d39 + (double)rdf32(sp0 + 0xcu));
    }
    else
    {
        eax = (t29 & 0xffffff00u) | t33;
        ebx = t35;
        x1 = (double)(int32_t)t34;
        x0 = d31;
        x2 = (double)rdf32(sp0 + 0x10u);
        x1 = fr(g, fr(g, (double)rdf32(sp0 + 0x14u) / x1) + (double)rdf32(sp0 + 0xcu));
    }
    t40 = rd8(self + 0x1cu);
    t41 = rd32(sp0 + 0xcu);
    d42 = fr(g, fr(g, x2 / (double)rdf32(sp0 + 0x18u)) + x0);
    wrf32(sp0 + 0x2cu, (float)d42);
    d43 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(sp0 + 0x1cu)) + (double)(int32_t)arg1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x50u, (float)d43);
    d44 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x54u) * (double)rdf32(sp0 + 0x1cu)) + (double)(int32_t)arg1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x6cu, (float)d44);
    wrf32(self + 0x88u, (float)d43);
    d45 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x50u) * (double)rdf32(sp0 + 0x1cu)) + (double)(int32_t)arg1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xa4u, (float)d45);
    d46 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(sp0 + 0x20u)) + (double)(int32_t)arg2) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x54u, (float)d46);
    wrf32(self + 0x70u, (float)d46);
    d47 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(sp0 + 0x20u)) + (double)(int32_t)arg2) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x8cu, (float)d47);
    d48 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 0x20u)) + (double)(int32_t)arg2) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0xa8u, (float)d48);
    if (t40 & 1u)
    {
        eax = (eax & 0xffffff00u) | t40;
        edx = t41;
        wrf32(self + 0x64u, (float)x1);
        wrf32(self + 0x9cu, (float)x1);
        wr32(self + 0x80u, edx);
        t49 = rd32(sp0 + 0xcu);
        wr32(self + 0xb8u, t49);
    }
    else
    {
        eax = (eax & 0xffffff00u) | t40;
        edx = t41;
        wrf32(self + 0x80u, (float)x1);
        wrf32(self + 0xb8u, (float)x1);
        wr32(self + 0x9cu, edx);
    }
    t50 = rd32(sp0 + 0x2cu);
    if ((eax & 2u) != 0u)
    {
        eax = t50;
        edx = t50;
        wrf32(self + 0xa0u, (float)x0);
        wrf32(self + 0xbcu, (float)x0);
        wr32(self + 0x68u, eax);
        wr32(self + 0x84u, edx);
    }
    else
    {
        eax = t50;
        edx = t50;
        wrf32(self + 0x84u, (float)x0);
        wr32(self + 0xa0u, eax);
        wr32(self + 0xbcu, edx);
    }
    if (arg10 != 0u) goto L_1011f23c;
    if (rd8(self + 0x2du) != 0u) goto L_1011f252;
    eax = (arg10 & 0xffffff00u) | rd8(self + 0x2du);
    g->ebx = ebx;
    g->esp = sp0 - 0x68u;
    cow_thiscall(g, COW_IMG(0x1011f2d0u), self, 0);
L_1011f26e: ;
    eax = 0u;
    ecx = self + 0x64u;
L_1011f272: ;
    t53 = rd32(eax + sp0 - 0x30u);
    wr32(ecx - 4u, t53);
    t54 = rd32(eax + sp0 - 0x20u);
    wr32(ecx, t54);
    t55 = rd32(eax + sp0 - 0x10u);
    wr32(ecx + 4u, t55);
    if ((int32_t)(eax + 4u) < 16)
    {
        eax = eax + 4u;
        ecx = ecx + 0x1cu;
        goto L_1011f272;
    }
    edx = t55;
    wr32(sp0 - 0x6cu, 3u);
    wr32(sp0 - 0x70u, 0xdu);
    wr32(sp0 - 0x74u, 0u);
    t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t56);
    g->esp = sp0 - 0x68u;
    cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 0u, 0xdu, 3u);
    wr32(sp0 - 0x6cu, 3u);
    wr32(sp0 - 0x70u, 0xeu);
    wr32(sp0 - 0x74u, 0u);
    t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t57);
    g->eax = t57;
    t58 = cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 0xeu, 3u);
    eax = t58;
L_1011f2c0: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 0x60u);
    return eax;
L_1011efd1: ;
    if (rd32(eax + 0x40u) == 0u)
    {
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(eax + 0x40u);
        eax = ecx;
    }
    wr32(sp0 - 0x6cu, eax);
    wr32(sp0 - 0x70u, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x74u, t12);
    g->edx = rd32(t12);
    t13 = rd32(t12);
    g->esp = sp0 - 0x68u;
    cow_thiscall(g, rd32(t13 + 0xf4u), t12, 3, t12, 0u, eax);
    t14 = g->edx;
    edx = t14;
    goto L_1011eff3;
L_1011f23c: ;
    t52 = arg10 >> 6u & 3u;
    wr32(sp0 - 0x6cu, t52);
    eax = arg10 & 3u;
    edx = arg10 >> 2u & 3u;
    loc_6c = t52;
L_1011f262: ;
    wr32(sp0 - 0x70u, edx);
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, self + 0x50u);
    g->ebx = ebx;
    g->esp = sp0 - 0x68u;
    cow_fastcall(g, COW_IMG(0x1011f300u), self, edx, 5, self + 0x50u, 1u, eax, edx, loc_6c);
    goto L_1011f26e;
L_1011f252: ;
    t51 = rd8(self + 0x30u);
    wr32(sp0 - 0x6cu, t51);
    eax = rd8(self + 0x2eu);
    edx = rd8(self + 0x2fu);
    loc_6c = t51;
    goto L_1011f262;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011ef60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011ef60(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
