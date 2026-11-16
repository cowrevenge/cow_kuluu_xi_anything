/* f_0x101393a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101393a0(Guest* g)
{
    double d13;
    double d5;
    double d50;
    double d55;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebp = in_ebp;
        goto L_10139653;
    }
    edi = t1;
    wr32(sp0 - 0x2cu, in_ebp);
    t3 = rd8(edi + 0x2cu);
    wr32(sp0 - 0x18u, t3);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 8u);
    wr32(sp0 - 0x38u, 0u);
    t4 = rd8(edi + 0x2du);
    wr32(sp0 - 0x14u, t4);
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, t3);
    d5 = (double)(float)fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329a18u)));
    wrf32(sp0 - 0x44u, (float)d5);
    t6 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 8u;
    wr32(sp0 - 0x48u, t6);
    t7 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x4cu, t7);
    t8 = rd32(edi + 0x28u);
    wr32(sp0 - 0x1cu, t8);
    g->eax = t7;
    t9 = rd32(self + 0x18u);
    t10 = rd32(edi + 0x24u);
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, COW_IMG(0x1011fc80u), t9, 8, t7, t6, cow_f2bits(d5), 0x3f800000u, 0x80808080u, 0u, 8u, 0u);
    t12 = g->ecx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 8u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x8080e080u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, t12);
    d13 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x10329a18u)));
    wrf32(sp0 - 0x44u, (float)d13);
    t14 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 0x12u;
    wr32(sp0 - 0x48u, t14);
    t15 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x4cu, t15);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t15, t14, cow_f2bits(d13), 0x3f800000u, 0x8080e080u, 0u, 8u, 0u);
    t16 = g->edx;
    if (rd32(self + 0x14u) == 0u)
    {
        edx = t16;
        ebx = t8;
        ebp = t10;
    }
    else
    {
        ecx = rd32(self + 0x14u);
        ebx = t8;
        ebp = t10;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0x80808080u);
        t17 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 8u;
        wr32(sp0 - 0x3cu, t17);
        t18 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 4u;
        wr32(sp0 - 0x40u, t18);
        g->edx = t18;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t18, t17, 0x80808080u, 0u, 0u);
        t19 = g->edx;
        edx = t19;
    }
    t20 = rd32(edi + 0x20u);
    wr32(sp0 - 0x30u, t20);
    wr32(sp0 - 0x34u, COW_IMG(0x1036f9d0u));
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->ebx = ebx;
    g->eax = t20;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f9d0u), t20, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t22 = g->ecx;
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0xc0808080u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    t23 = (t21 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1eu) + 7u);
    wr32(sp0 - 0x50u, t23);
    t24 = (t22 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) + 0x7bu);
    wr32(sp0 - 0x54u, t24);
    g->eax = t23;
    g->esp = sp0 - 0x38u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t24, 7, t24, t23, sp0 - 0x10u, 0xc0808080u, 0u, 0x3f800000u, 0x3f800000u);
    t26 = g->ecx;
    wr32(sp0 - 0x58u, ebp);
    wr32(sp0 - 0x5cu, COW_IMG(0x1036f9d0u));
    wr32(sp0 - 0x60u, sp0 - 0x10u);
    g->ebx = ebx;
    g->ecx = t26;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f9d0u), ebp, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0xc0808080u);
    wr32(sp0 - 0x74u, sp0 - 0x10u);
    t29 = (t27 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1eu) + 0x11u);
    wr32(sp0 - 0x78u, t29);
    t30 = (t28 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) + 0x7bu);
    wr32(sp0 - 0x7cu, t30);
    g->edx = t30;
    g->esp = sp0 - 0x60u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t29, 7, t30, t29, sp0 - 0x10u, 0xc0808080u, 0u, 0x3f800000u, 0x3f800000u);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)ebx <= 3000)
    {
        ecx = t31;
        edx = t32;
        ebp = rd32(sp0 - 0x2cu);
    }
    else
    {
        ecx = t31;
        edx = t32;
        ebp = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x1cu, 0xbb8u);
        ebx = 0xbb8u;
        loc_1c = 0xbb8u;
    }
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, COW_IMG(0x1036f9d0u));
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ebx = ebx;
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t33 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f9d0u), ebx, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t34 = g->edx;
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, 0xc0808080u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    t35 = (t34 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1eu) + 0x1bu);
    wr32(sp0 - 0x4cu, t35);
    t36 = (t33 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) + 0x7bu);
    wr32(sp0 - 0x50u, t36);
    g->eax = t36;
    g->esp = sp0 - 0x34u;
    t37 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t36, t35, sp0 - 0x10u, 0xc0808080u, 0u, 0x3f800000u, 0x3f800000u);
    t38 = g->ecx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    if (ebx != 0xbb8u)
    {
        eax = t37;
        ecx = t38;
        goto L_1013955d;
    }
    t39 = rd32(self + 0x28u);
    wr32(sp0 - 0x38u, t39);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    loc_38 = t39;
L_10139604: ;
    t51 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 0x1cu;
    wr32(sp0 - 0x44u, t51);
    t52 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x48u, t52);
    g->eax = t52;
    g->edx = t51;
    g->esp = sp0 - 0x28u;
    t53 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t52, t51, rd32(sp0 - 0x40u), 0x3f800000u, loc_38, 0u, 0u, 0u);
    t54 = g->edx;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    g->edx = t54;
    return t53;
L_1013955d: ;
    if ((int32_t)ebx < 2000) goto L_101395aa;
    t40 = rd32(self + 0x28u);
    wr32(sp0 - 0x38u, t40);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    t41 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 0x1cu;
    wr32(sp0 - 0x44u, t41);
    t42 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x48u, t42);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t42, t41, 0x3f800000u, 0x3f800000u, t40, 0u, 0u, 0u);
    t43 = cow_divs(g, ebx, 0x3e9u);
    t44 = cow_mods(g, ebx, 0x3e9u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x802060d0u);
    wr32(sp0 - 0x14u, t44);
    loc_38 = 0x802060d0u;
    x0 = (double)(int32_t)t44;
L_101395f5: ;
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3e9u);
    d50 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x40u, (float)d50);
    goto L_10139604;
L_101395aa: ;
    if ((int32_t)ebx < 1000) goto L_10139623;
    t45 = rd32(self + 0x28u);
    wr32(sp0 - 0x38u, t45);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    t46 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 0x1cu;
    wr32(sp0 - 0x44u, t46);
    t47 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x48u, t47);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t47, t46, 0x3f800000u, 0x3f800000u, t45, 0u, 0u, 0u);
    t48 = cow_divs(g, ebx, 0x3e9u);
    t49 = cow_mods(g, ebx, 0x3e9u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x8000b060u);
    wr32(sp0 - 0x14u, t49);
    loc_38 = 0x8000b060u;
    x0 = (double)(int32_t)t49;
    goto L_101395f5;
L_10139623: ;
    wr32(sp0 - 0x38u, 0x800060b0u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, ecx);
    d55 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x40u, (float)d55);
    t56 = (uint32_t)(int16_t)rd16(self + 0x1eu) + 0x1cu;
    wr32(sp0 - 0x44u, t56);
    t57 = (uint32_t)(int16_t)rd16(self + 0x1cu) + 0x19u;
    wr32(sp0 - 0x48u, t57);
    g->eax = eax;
    g->edx = t57;
    g->esp = sp0 - 0x28u;
    t58 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t57, t56, cow_f2bits(d55), 0x3f800000u, 0x800060b0u, 0u, 0u, 0u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
L_10139653: ;
    g->ebx = in_ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101393a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101393a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
