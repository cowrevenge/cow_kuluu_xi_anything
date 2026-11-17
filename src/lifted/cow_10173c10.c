/* f_0x10173c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10173c10(Guest* g)
{
    double d10;
    double d11;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d20;
    double d21;
    double d22;
    double d29;
    double d30;
    double d31;
    double d6;
    double d66;
    double d67;
    double d68;
    double d7;
    double d73;
    double d75;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_270;
    uint32_t loc_27c;
    uint32_t loc_280;
    uint32_t loc_288;
    uint32_t loc_28c;
    uint32_t loc_290;
    uint32_t loc_298;
    uint32_t loc_29c;
    uint32_t loc_2a0;
    uint32_t loc_2a8;
    uint32_t loc_2ac;
    uint32_t loc_2b0;
    uint32_t loc_2b8;
    uint32_t loc_2bc;
    uint32_t loc_2c0;
    uint32_t loc_2c4;
    uint32_t loc_2c8;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t19;
    uint32_t t2;
    uint32_t t23;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 780u);

    wr32(sp0 - 0x2ccu, in_ebx);
    wr32(sp0 - 0x2d0u, in_ebp);
    wr32(sp0 - 0x2d4u, in_esi);
    wr32(sp0 - 0x2d8u, in_edi);
    wr32(sp0 - 0x274u, self);
    wr32(sp0 - 0x60u, 0xbf000000u);
    wr32(sp0 - 0x5cu, 0xbf000000u);
    wr32(sp0 - 0x58u, 0xbf000000u);
    wr32(sp0 - 0x54u, 0xbf000000u);
    wr32(sp0 - 0x50u, 0xbf000000u);
    wr32(sp0 - 0x4cu, 0x3f000000u);
    wr32(sp0 - 0x48u, 0x3f000000u);
    wr32(sp0 - 0x44u, 0xbf000000u);
    wr32(sp0 - 0x40u, 0x3f000000u);
    wr32(sp0 - 0x3cu, 0x3f000000u);
    wr32(sp0 - 0x38u, 0xbf000000u);
    wr32(sp0 - 0x34u, 0xbf000000u);
    wr32(sp0 - 0x30u, 0xbf000000u);
    wr32(sp0 - 0x2cu, 0x3f000000u);
    wr32(sp0 - 0x28u, 0xbf000000u);
    wr32(sp0 - 0x24u, 0xbf000000u);
    wr32(sp0 - 0x20u, 0x3f000000u);
    wr32(sp0 - 0x1cu, 0x3f000000u);
    wr32(sp0 - 0x18u, 0x3f000000u);
    wr32(sp0 - 0x14u, 0x3f000000u);
    wr32(sp0 - 0x10u, 0x3f000000u);
    wr32(sp0 - 0xcu, 0x3f000000u);
    wr32(sp0 - 8u, 0x3f000000u);
    wr32(sp0 - 4u, 0xbf000000u);
    g->esp = sp0 - 0x2d8u;
    t1 = cow_call_regs(g, COW_IMG(0x10174790u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    wr32(sp0 - 0x270u, t1);
    wr32(t1 + 4u, arg1);
    t3 = rd32(arg1 + 0x30u);
    t4 = rd32(arg1 + 0x30u);
    wr32(t1 + 8u, t3);
    wr32(sp0 - 0x280u, 0u);
    if ((int32_t)t4 <= 0)
    {
        ecx = arg1;
        edx = t2;
        ebp = t1;
        esi = 0u;
        loc_270 = t1;
        loc_280 = 0u;
    }
    else
    {
        eax = t3;
        edx = t2;
        ebp = t1;
        loc_270 = t1;
        ecx = arg1 + 0x64u;
        esi = 0u;
L_10173d51: ;
        if (rd8(ecx) == 0x6du) goto L_10173d5d;
        edx = (edx & 0xffffff00u) | rd8(ecx);
        if ((uint8_t)edx != 0x4du) goto L_10173d64;
L_10173d5d: ;
        if (rd32(ecx - 0x18u) != 0u)
        {
            edx = rd32(ecx - 0x18u);
            goto L_10173d65;
        }
        edx = rd32(ecx - 0x18u);
L_10173d64: ;
        esi = esi + 1u;
L_10173d65: ;
        if (eax != 1u)
        {
            eax = eax - 1u;
            ecx = ecx + 0x40u;
            goto L_10173d51;
        }
        ecx = ecx + 0x40u;
        wr32(sp0 - 0x280u, esi);
        loc_280 = esi;
    }
    wr32(sp0 - 0x2dcu, 4u);
    wr32(sp0 - 0x2e0u, esi * 0xf4u);
    g->esp = sp0 - 0x2d8u;
    t5 = cow_call_regs(g, COW_IMG(0x10028640u), esi * 0xfu, ecx, edx, 1, 2, esi * 0xf4u, 4u);
    wr32(ebp + 0xcu, t5);
    edi = t5;
    eax = 0u;
    ecx = esi * 0xf4u >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = esi * 0xf4u & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x27cu, 0u);
    if ((int32_t)rd32(ebp + 8u) <= 0) goto L_10174754;
    eax = rd32(ebp + 8u);
    edx = esi * 0xf4u;
    ebx = arg1 + 0x40u;
    esi = rd32(ebp + 0xcu);
    loc_27c = 0u;
L_10173db1: ;
    if (rd8(ebx + 0x24u) == 0x6du)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0x24u);
        goto L_10173dbc;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 0x24u);
    if ((uint8_t)eax != 0x4du) goto L_10173dc5;
L_10173dbc: ;
    if (rd32(ebx + 0xcu) != 0u) goto L_10174729;
L_10173dc5: ;
    d6 = (double)rdf32(ebx + 0x18u);
    if (!(d6 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(ebx + 0x18u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(ebx + 0x18u);
        x0 = -x0;
    }
    wrf32(ebx + 0x18u, (float)x0);
    d7 = (double)rdf32(ebx + 0x1cu);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(ebx + 0x1cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(ebx + 0x1cu);
        x0 = -x0;
    }
    wrf32(ebx + 0x1cu, (float)x0);
    d8 = (double)rdf32(ebx + 0x20u);
    if (!(d8 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        x0 = (double)rdf32(ebx + 0x20u);
    }
    else
    {
        x0 = (double)rdf32(ebx + 0x20u);
        x0 = -x0;
    }
    wrf32(ebx + 0x20u, (float)x0);
    wr32(esi + 4u, 0u);
    wr32(esi, 0x3f800000u);
    wr32(esi + 8u, 0u);
    wr32(esi + 0xcu, 0u);
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0x14u, 0x3f800000u);
    wr32(esi + 0x18u, 0u);
    wr32(esi + 0x1cu, 0u);
    wr32(esi + 0x20u, 0u);
    wr32(esi + 0x24u, 0u);
    wr32(esi + 0x28u, 0x3f800000u);
    wr32(esi + 0x2cu, 0u);
    wr32(esi + 0x30u, 0u);
    wr32(esi + 0x34u, 0u);
    wr32(esi + 0x38u, 0u);
    wr32(esi + 0x3cu, 0x3f800000u);
    d9 = (double)(float)-(double)rdf32(ebx + 8u);
    wrf32(sp0 - 0x264u, (float)d9);
    d10 = (double)(float)-(double)rdf32(ebx);
    wrf32(sp0 - 0xf0u, (float)d10);
    wr32(sp0 - 0x120u, 0x3f800000u);
    wr32(sp0 - 0x10cu, 0x3f800000u);
    d11 = (double)(float)-(double)rdf32(ebx + 4u);
    wrf32(sp0 - 0xecu, (float)d11);
    wr32(sp0 - 0xf8u, 0x3f800000u);
    wr32(sp0 - 0xe4u, 0x3f800000u);
    wr32(sp0 - 0x2dcu, sp0 - 0x120u);
    wr32(sp0 - 0x2e0u, esi);
    wr32(sp0 - 0x2e4u, esi);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x100u, 0u);
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0xf4u, 0u);
    wr32(sp0 - 0xe8u, cow_f2bits(d9));
    g->eax = cow_f2bits(d9);
    g->ecx = sp0 - 0x120u;
    g->esp = sp0 - 0x2d8u;
    t12 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, esi, esi, sp0 - 0x120u);
    t13 = g->ecx;
    d14 = (double)(float)-(double)rdf32(ebx + 0x10u);
    wrf32(sp0 - 0x2c8u, (float)d14);
    wr32(sp0 - 0x25cu, 0u);
    wr32(sp0 - 0x2e8u, sp0 - 0x260u);
    wr32(sp0 - 0x2ecu, esi);
    wr32(sp0 - 0x2f0u, esi);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x24cu, 0x3f800000u);
    wr32(sp0 - 0x248u, 0u);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x23cu, 0u);
    wr32(sp0 - 0x234u, 0u);
    wr32(sp0 - 0x230u, 0u);
    wr32(sp0 - 0x22cu, 0u);
    wr32(sp0 - 0x228u, 0u);
    wr32(sp0 - 0x224u, 0x3f800000u);
    d15 = (double)(float)fr(g, cos(-(double)rdf32(ebx + 0x10u)));
    wrf32(sp0 - 0x260u, (float)d15);
    d16 = (double)(float)-fr(g, sin(d14));
    wrf32(sp0 - 0x258u, (float)d16);
    d17 = (double)(float)fr(g, sin(d14));
    wrf32(sp0 - 0x240u, (float)d17);
    d18 = (double)(float)fr(g, cos(-(double)rdf32(ebx + 0x10u)));
    wrf32(sp0 - 0x238u, (float)d18);
    g->edx = sp0 - 0x260u;
    g->esp = sp0 - 0x2e4u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, esi, esi, sp0 - 0x260u);
    t19 = g->edx;
    wr32(sp0 - 0x19cu, 0u);
    wr32(sp0 - 0x2f4u, sp0 - 0x1a0u);
    wr32(sp0 - 0x2f8u, esi);
    wr32(sp0 - 0x2fcu, esi);
    wr32(sp0 - 0x198u, 0u);
    wr32(sp0 - 0x194u, 0u);
    wr32(sp0 - 0x190u, 0u);
    wr32(sp0 - 0x188u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x17cu, 0u);
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x168u, 0u);
    wr32(sp0 - 0x164u, 0x3f800000u);
    d20 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebx + 0x20u));
    wrf32(sp0 - 0x264u, (float)d20);
    d21 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebx + 0x18u));
    wrf32(sp0 - 0x1a0u, (float)d21);
    wr32(sp0 - 0x178u, cow_f2bits(d20));
    d22 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(ebx + 0x1cu));
    wrf32(sp0 - 0x18cu, (float)d22);
    g->esp = sp0 - 0x2f0u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, esi, esi, sp0 - 0x1a0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(esi + 0xacu, rd32(ebx));
    t23 = rd32(ebx + 4u);
    wr32(esi + 0xb0u, t23);
    t24 = rd32(ebx + 8u);
    wr32(esi + 0xb4u, t24);
    t25 = rd32(ebx + 0x18u);
    wr32(sp0 - 0xa0u, t25);
    t26 = rd32(ebx + 0x1cu);
    wr32(sp0 - 0x8cu, t26);
    t27 = rd32(ebx + 0x20u);
    wr32(sp0 - 0x78u, t27);
    wr32(sp0 - 0x300u, sp0 - 0xa0u);
    wr32(sp0 - 0x304u, sp0 - 0x2c0u);
    wr32(sp0 - 0x308u, sp0 - 0x2c0u);
    wr32(sp0 - 0x2c0u, 0x3f800000u);
    wr32(sp0 - 0x2bcu, 0u);
    wr32(sp0 - 0x2b8u, 0u);
    wr32(sp0 - 0x2b4u, 0u);
    wr32(sp0 - 0x2b0u, 0u);
    wr32(sp0 - 0x2acu, 0x3f800000u);
    wr32(sp0 - 0x2a8u, 0u);
    wr32(sp0 - 0x2a4u, 0u);
    wr32(sp0 - 0x2a0u, 0u);
    wr32(sp0 - 0x29cu, 0u);
    wr32(sp0 - 0x298u, 0x3f800000u);
    wr32(sp0 - 0x294u, 0u);
    wr32(sp0 - 0x290u, 0u);
    wr32(sp0 - 0x28cu, 0u);
    wr32(sp0 - 0x288u, 0u);
    wr32(sp0 - 0x284u, 0x3f800000u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    g->esp = sp0 - 0x2fcu;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x2c0u, sp0 - 0x2c0u, sp0 - 0xa0u);
    t28 = rd32(ebx + 0x10u);
    wr32(sp0 - 0x278u, t28);
    wr32(sp0 - 0x21cu, 0u);
    d29 = (double)(float)fr(g, cos(cow_bits2f(t28)));
    wrf32(sp0 - 0x220u, (float)d29);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x20cu, 0x3f800000u);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x1fcu, 0u);
    wr32(sp0 - 0x1f4u, 0u);
    wr32(sp0 - 0x1f0u, 0u);
    wr32(sp0 - 0x1ecu, 0u);
    wr32(sp0 - 0x1e8u, 0u);
    wr32(sp0 - 0x1e4u, 0x3f800000u);
    wr32(sp0 - 0x2c8u, 0u);
    d30 = fr(g, sin(cow_bits2f(t28)));
    wrf32(sp0 - 0x218u, (float)(double)(float)-d30);
    wrf32(sp0 - 0x200u, (float)(double)(float)d30);
    d31 = (double)(float)fr(g, cos(cow_bits2f(t28)));
    wrf32(sp0 - 0x1f8u, (float)d31);
    loc_2c8 = 0u;
L_101742c0: ;
    wr32(sp0 - 0x2c4u, 4u);
    ebp = sp0 - 0x220u;
    edi = loc_2c8 + sp0 - 0x1e0u;
    loc_2c4 = 4u;
L_101742da: ;
    wr32(edi, 0u);
    eax = ebp;
    ecx = loc_2c8 + sp0 - 0x2c0u;
    edx = 4u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_101742f5: ;
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_101742f5;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    wrf32(edi, (float)x0);
    wr32(sp0 - 0x2c4u, loc_2c4 - 1u);
    if (loc_2c4 != 1u)
    {
        ebp = ebp + 4u;
        edi = edi + 4u;
        loc_2c4 = loc_2c4 - 1u;
        goto L_101742da;
    }
    wr32(sp0 - 0x2c8u, loc_2c8 + 0x10u);
    if ((int32_t)(loc_2c8 + 0x10u) < 64)
    {
        loc_2c8 = loc_2c8 + 0x10u;
        goto L_101742c0;
    }
    t32 = rd32(sp0 - 0x1e0u);
    wr32(sp0 - 0x2c0u, t32);
    t33 = rd32(sp0 - 0x1dcu);
    wr32(sp0 - 0x2bcu, t33);
    t34 = rd32(sp0 - 0x1d8u);
    wr32(sp0 - 0x2b8u, t34);
    t35 = rd32(sp0 - 0x1d4u);
    wr32(sp0 - 0x2b4u, t35);
    t36 = rd32(sp0 - 0x1d0u);
    wr32(sp0 - 0x2b0u, t36);
    t37 = rd32(sp0 - 0x1ccu);
    wr32(sp0 - 0x2acu, t37);
    t38 = rd32(sp0 - 0x1c8u);
    wr32(sp0 - 0x2a8u, t38);
    t39 = rd32(sp0 - 0x1c4u);
    wr32(sp0 - 0x2a4u, t39);
    t40 = rd32(sp0 - 0x1c0u);
    wr32(sp0 - 0x2a0u, t40);
    t41 = rd32(sp0 - 0x1bcu);
    wr32(sp0 - 0x29cu, t41);
    t42 = rd32(sp0 - 0x1b8u);
    wr32(sp0 - 0x298u, t42);
    t43 = rd32(sp0 - 0x1b4u);
    wr32(sp0 - 0x294u, t43);
    t44 = rd32(sp0 - 0x1b0u);
    wr32(sp0 - 0x290u, t44);
    t45 = rd32(sp0 - 0x1acu);
    wr32(sp0 - 0x28cu, t45);
    t46 = rd32(sp0 - 0x1a8u);
    wr32(sp0 - 0x288u, t46);
    t47 = rd32(sp0 - 0x1a4u);
    wr32(sp0 - 0x284u, t47);
    wr32(sp0 - 0x160u, 0x3f800000u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x154u, 0u);
    wr32(sp0 - 0x150u, 0u);
    wr32(sp0 - 0x14cu, 0x3f800000u);
    wr32(sp0 - 0x148u, 0u);
    wr32(sp0 - 0x144u, 0u);
    wr32(sp0 - 0x140u, 0u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x138u, 0x3f800000u);
    wr32(sp0 - 0x134u, 0u);
    wr32(sp0 - 0x124u, 0x3f800000u);
    wr32(sp0 - 0x130u, rd32(ebx));
    t48 = rd32(ebx + 4u);
    wr32(sp0 - 0x12cu, t48);
    t49 = rd32(ebx + 8u);
    wr32(sp0 - 0x128u, t49);
    wr32(sp0 - 0x2c8u, 0u);
    loc_2c8 = 0u;
L_1017448b: ;
    wr32(sp0 - 0x2c4u, 4u);
    ebp = sp0 - 0x160u;
    edi = loc_2c8 + sp0 - 0xe0u;
    loc_2c4 = 4u;
L_101744a5: ;
    wr32(edi, 0u);
    eax = ebp;
    ecx = loc_2c8 + sp0 - 0x2c0u;
    edx = 4u;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_101744c0: ;
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_101744c0;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    wrf32(edi, (float)x0);
    wr32(sp0 - 0x2c4u, loc_2c4 - 1u);
    if (loc_2c4 != 1u)
    {
        ebp = ebp + 4u;
        edi = edi + 4u;
        loc_2c4 = loc_2c4 - 1u;
        goto L_101744a5;
    }
    wr32(sp0 - 0x2c8u, loc_2c8 + 0x10u);
    if ((int32_t)(loc_2c8 + 0x10u) < 64)
    {
        loc_2c8 = loc_2c8 + 0x10u;
        goto L_1017448b;
    }
    t50 = rd32(sp0 - 0xe0u);
    wr32(sp0 - 0x2c0u, t50);
    t51 = rd32(sp0 - 0xdcu);
    wr32(sp0 - 0x2bcu, t51);
    t52 = rd32(sp0 - 0xd8u);
    wr32(sp0 - 0x2b8u, t52);
    t53 = rd32(sp0 - 0xd4u);
    wr32(sp0 - 0x2b4u, t53);
    t54 = rd32(sp0 - 0xd0u);
    wr32(sp0 - 0x2b0u, t54);
    t55 = rd32(sp0 - 0xccu);
    wr32(sp0 - 0x2acu, t55);
    t56 = rd32(sp0 - 0xc8u);
    wr32(sp0 - 0x2a8u, t56);
    t57 = rd32(sp0 - 0xc4u);
    wr32(sp0 - 0x2a4u, t57);
    t58 = rd32(sp0 - 0xc0u);
    wr32(sp0 - 0x2a0u, t58);
    t59 = rd32(sp0 - 0xbcu);
    wr32(sp0 - 0x29cu, t59);
    t60 = rd32(sp0 - 0xb8u);
    wr32(sp0 - 0x298u, t60);
    t61 = rd32(sp0 - 0xb4u);
    wr32(sp0 - 0x294u, t61);
    t62 = rd32(sp0 - 0xb0u);
    wr32(sp0 - 0x290u, t62);
    t63 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0x28cu, t63);
    t64 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x288u, t64);
    t65 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x284u, t65);
    eax = sp0 - 0x5cu;
    ecx = esi + 0x54u;
    edx = 8u;
    loc_2c0 = t50;
    loc_2bc = t51;
    loc_2b8 = t52;
    loc_2b0 = t54;
    loc_2ac = t55;
    loc_2a8 = t56;
    loc_2a0 = t58;
    loc_29c = t59;
    loc_298 = t60;
    loc_290 = t62;
    loc_28c = t63;
    loc_288 = t64;
L_101745b1: ;
    d66 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_2c0) * (double)rdf32(eax - 4u)) + fr(g, cow_bits2f(loc_2b0) * (double)rdf32(eax))) + fr(g, cow_bits2f(loc_2a0) * (double)rdf32(eax + 4u))) + cow_bits2f(loc_290));
    wrf32(ecx - 8u, (float)d66);
    d67 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_2ac) * (double)rdf32(eax)) + fr(g, cow_bits2f(loc_29c) * (double)rdf32(eax + 4u))) + fr(g, cow_bits2f(loc_2bc) * (double)rdf32(eax - 4u))) + cow_bits2f(loc_28c));
    wrf32(ecx - 4u, (float)d67);
    d68 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_2a8) * (double)rdf32(eax)) + fr(g, cow_bits2f(loc_298) * (double)rdf32(eax + 4u))) + fr(g, cow_bits2f(loc_2b8) * (double)rdf32(eax - 4u))) + cow_bits2f(loc_288));
    wrf32(ecx, (float)d68);
    if (edx != 1u)
    {
        eax = eax + 0xcu;
        ecx = ecx + 0xcu;
        edx = edx - 1u;
        goto L_101745b1;
    }
    t69 = rd32(ebx + 0x24u);
    wr32(esi + 0x40u, t69);
    t70 = rd32(ebx + 0x28u);
    wr32(esi + 0x44u, t70);
    t71 = rd32(ebx + 0x2cu);
    wr32(esi + 0x48u, t71);
    wr32(esi + 0xe0u, 0u);
    wr32(esi + 0xe4u, 0u);
    if (rd8(ebx + 0x24u) == 0x7au)
    {
        eax = rd8(ebx + 0x24u);
        ecx = ebx + 0x24u;
        edx = esi + 0xe0u;
        goto L_1017464f;
    }
    eax = rd8(ebx + 0x24u);
    ecx = ebx + 0x24u;
    edx = esi + 0xe0u;
    if ((uint8_t)eax == 0x5au) goto L_1017464f;
    if ((uint8_t)eax == 0x6du) goto L_1017464f;
    if ((uint8_t)eax != 0x4du) goto L_1017465b;
L_1017464f: ;
    wr32(sp0 - 0x2dcu, 4u);
    wr32(sp0 - 0x2e0u, ecx);
    wr32(sp0 - 0x2e4u, edx);
    g->esp = sp0 - 0x2d8u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, edx, ecx, 4u);
L_1017465b: ;
    wr32(esi + 0xe8u, 0u);
    t72 = (uint32_t)(int16_t)rd16(ebx + 0x34u);
    wr32(sp0 - 0x2c4u, t72);
    d73 = fr(g, fr(g, (double)(int32_t)t72 * (double)rdf32(COW_IMG(0x1032ae50u))) + (double)rdf32(ebx + 4u));
    wrf32(esi + 0xb8u, (float)d73);
    t74 = (uint32_t)(int16_t)rd16(ebx + 0x36u);
    wr32(sp0 - 0x2c4u, t74);
    d75 = fr(g, fr(g, (double)(int32_t)t74 * (double)rdf32(COW_IMG(0x1032ae50u))) + (double)rdf32(ebx + 4u));
    wr32(esi + 0xc0u, 0u);
    wr32(esi + 0xc4u, 0u);
    wr32(esi + 0xc8u, 0u);
    wr32(esi + 0xccu, 0u);
    wr32(esi + 0xd0u, 0u);
    wrf32(esi + 0xbcu, (float)d75);
    t76 = rd32(ebx + 4u);
    wr32(esi + 0xdcu, t76);
    t77 = (uint32_t)((int32_t)(rd32(ebx + 0x30u) << 0x18u) >> 0x1cu);
    t78 = rd8(esi + 0x40u);
    wr32(esi + 0xecu, t77);
    if ((uint8_t)t78 != 0x5fu)
    {
        edx = t74;
        wr32(esi + 0xd8u, 0u);
    }
    else
    {
        eax = (t76 & 0xffffff00u) | t78;
        edx = t74;
        wr32(sp0 - 0x2dcu, ebx);
        wr32(sp0 - 0x2e0u, esi);
        g->esp = sp0 - 0x2d8u;
        cow_call_regs(g, COW_IMG(0x10171930u), eax, g->ecx, edx, 0, 2, esi, ebx);
        if ((int32_t)rd32(esi + 0xd4u) <= 0)
        {
            edx = rd32(esi + 0xd4u);
            goto L_1017470e;
        }
        eax = rd32(esi + 0xd8u);
        ecx = 0u;
L_101746f3: ;
        t79 = (rd32(eax) & 0xffff00ffu) | (rd32(eax) >> 8u & 0xdfu) << 8u;
        wr32(eax, t79);
        if ((int32_t)(ecx + 1u) < (int32_t)rd32(esi + 0xd4u))
        {
            eax = eax + 0x1f0u;
            ecx = ecx + 1u;
            goto L_101746f3;
        }
        edx = rd32(esi + 0xd4u);
L_1017470e: ;
        wr8(esi + 0xf0u, 1u);
    }
    ebp = rd32(sp0 - 0x270u);
    esi = esi + 0xf4u;
    loc_27c = rd32(sp0 - 0x27cu);
L_10174729: ;
    wr32(sp0 - 0x27cu, loc_27c + 1u);
    if ((int32_t)(loc_27c + 1u) < (int32_t)rd32(ebp + 8u))
    {
        eax = loc_27c + 1u;
        ebx = ebx + 0x40u;
        loc_27c = loc_27c + 1u;
        goto L_10173db1;
    }
    t80 = rd32(sp0 - 0x280u);
    t81 = rd32(sp0 - 0x2d8u);
    wr32(ebp + 0x10u, t80);
    g->ebx = rd32(sp0 - 0x2ccu);
    g->esi = rd32(sp0 - 0x2d4u);
    g->edi = t81;
    g->ebp = rd32(sp0 - 0x2d0u);
    return;
L_10174754: ;
    t82 = rd32(sp0 - 0x280u);
    t83 = rd32(sp0 - 0x2d8u);
    wr32(ebp + 0x10u, t82);
    g->ebx = rd32(sp0 - 0x2ccu);
    g->esi = rd32(sp0 - 0x2d4u);
    g->edi = t83;
    g->ebp = rd32(sp0 - 0x2d0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10173c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10173c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
