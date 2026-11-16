/* f_0x100cff40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100cff40(Guest* g)
{
    double d100;
    double d105;
    double d108;
    double d109;
    double d110;
    double d111;
    double d112;
    double d113;
    double d34;
    double d35;
    double d39;
    double d4;
    double d40;
    double d41;
    double d42;
    double d45;
    double d46;
    double d47;
    double d48;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d64;
    double d67;
    double d68;
    double d71;
    double d72;
    double d73;
    double d78;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d91;
    double d94;
    double d95;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    double loc_78_f;
    uint32_t loc_7c;
    double loc_8c_f;
    uint32_t loc_90;
    uint32_t loc_b4;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t106;
    uint32_t t107;
    uint32_t t11;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t43;
    uint32_t t44;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t65;
    uint32_t t66;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t8;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    uint32_t t96;
    uint32_t t97;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 272u);

    wr32(sp0 - 0xb8u, in_ebx);
    wr32(sp0 - 0xbcu, in_ebp);
    wr32(sp0 - 0xc0u, in_esi);
    wr32(sp0 - 0xc4u, in_edi);
    wr32(sp0 - 0xb0u, self);
    t1 = rd32(sp0 - 0xb4u);
    wr32(arg2, 0x4e6e6b28u);
    g->edx = in_edx;
    g->esp = sp0 - 0xc4u;
    t2 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100cff81;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100cff81: ;
    d4 = (double)rdf32(self + 0x59cu);
    t5 = rd32(eax) + 8u;
    wr32(sp0 - 0x7cu, t5);
    if (!(d4 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        esi = t5;
        loc_7c = t5;
        goto L_100cffac;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100cffac: ;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t9 = g->edx;
    wr32(sp0 - 0xc8u, t8);
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t13 = g->edx;
    wr32(sp0 - 0xc8u, t12);
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t12);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10035370u), esi, 0);
    t16 = g->edx;
    if ((int32_t)t15 > 2)
    {
        edx = t16;
        goto L_100d0033;
    }
    edx = t16;
    g->eax = rd32(self);
    g->edx = edx;
    t17 = rd32(self);
    g->esp = sp0 - 0xc4u;
    t18 = cow_thiscall(g, rd32(t17 + 0x1bcu), self, 0);
    t19 = g->edx;
    wr32(sp0 - 0xc8u, t18);
    wr32(sp0 - 0xccu, sp0 - 0xacu);
    t20 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0xacu, t18);
    wr32(sp0 - 0xc8u, sp0 - 0xacu);
    g->edx = sp0 - 0xacu;
    cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x40u, 1, sp0 - 0xacu);
    t21 = g->edx;
    t22 = rd32(sp0 - 0xa4u);
    wr32(arg2, t22);
    g->eax = t22;
    g->edx = t21;
    t23 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t24 = g->edx;
    g->ebx = rd32(sp0 - 0xb8u);
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_100d0033: ;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t25 = cow_thiscall(g, COW_IMG(0x10035370u), esi, 0);
    t26 = g->edx;
    wr32(sp0 - 0x74u, t25);
    if ((int32_t)t25 <= 0)
    {
        edx = t26;
        edi = self;
        goto L_100d01e9;
    }
    edx = t26;
    ebx = 0u;
    edi = self;
    loc_74 = t25;
L_100d0048: ;
    wr32(sp0 - 0xc8u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t27 = cow_thiscall(g, COW_IMG(0x10035390u), esi, 1, ebx);
    t28 = g->edx;
    if ((int8_t)rd8(ebx + rd32(esi + 0x14u)) >= 0)
    {
        edx = t28;
        goto L_100d01c3;
    }
    eax = rd32(esi + 0x14u);
    edx = t28;
    ebp = t27;
    if ((int8_t)rd8(eax + ebp) >= 0) goto L_100d01c3;
    t29 = rd32(sp0 - 0xb0u);
    esi = sp0 - 0x40u;
    edi = sp0 - 0x104u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x108u, sp0 - 0x70u);
    wr32(sp0 - 0x10cu, ebx);
    g->edx = t29;
    g->esp = sp0 - 0xc4u;
    t30 = cow_bridge_indirect(g, COW_IMG(0x1002c680u), 0u, 18u, (const uint32_t[]){ebx, sp0 - 0x70u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u)}, t29 + 0x674u, g->edx, g->eax, 0u);
    t31 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        eax = t30;
        edx = t31;
        goto L_100d01d2;
    }
    edx = t31;
    esi = sp0 - 0x40u;
    edi = sp0 - 0x104u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x108u, sp0 - 0x60u);
    wr32(sp0 - 0x10cu, ebp);
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t32 = cow_bridge_indirect(g, COW_IMG(0x1002c680u), 0u, 18u, (const uint32_t[]){ebp, sp0 - 0x60u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u)}, rd32(sp0 - 0xb0u) + 0x674u, g->edx, g->eax, 0u);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_100d01d2;
    }
    d34 = (double)(float)-(double)rdf32(sp0 - 0x6cu);
    wrf32(sp0 - 0x6cu, (float)d34);
    wr32(sp0 - 0xc8u, sp0 - 0x60u);
    d35 = (double)(float)-(double)rdf32(sp0 - 0x5cu);
    wrf32(sp0 - 0x5cu, (float)d35);
    wr32(sp0 - 0xccu, sp0 - 0x70u);
    wr32(sp0 - 0xd0u, sp0 - 0xacu);
    g->eax = sp0 - 0x70u;
    g->ecx = sp0 - 0xacu;
    g->edx = sp0 - 0x60u;
    g->esp = sp0 - 0xc4u;
    t36 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xacu, sp0 - 0x70u, sp0 - 0x60u);
    t37 = g->ecx;
    t38 = g->edx;
    d39 = (double)rdf32(sp0 - 0xa8u);
    d40 = (double)rdf32(sp0 - 0xacu);
    d41 = (double)(float)fr(g, fr(g, sqrt(fr(g, fr(g, d39 * d39) + fr(g, d40 * d40)))) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x78u, (float)d41);
    d42 = fr(g, fr(g, sqrt(fr(g, fr(g, d39 * d39) + fr(g, d40 * d40)))) * (double)rdf32(COW_IMG(0x1032df40u)));
    if (d42 < (double)rdf32(COW_IMG(0x10329a18u)))
    {
        edx = t38;
        loc_cc = sp0 - 0x70u;
    }
    else
    {
        ecx = t37;
        loc_78_f = d41;
        wr32(sp0 - 0xc8u, 0x3f000000u);
        wr32(sp0 - 0xccu, sp0 - 0xacu);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xacu, sp0 - 0xacu, 0x3f000000u);
        wr32(sp0 - 0xd4u, sp0 - 0x60u);
        wr32(sp0 - 0xd8u, sp0 - 0xacu);
        wr32(sp0 - 0xdcu, sp0 - 0x50u);
        g->esp = sp0 - 0xd0u;
        cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x50u, sp0 - 0xacu, sp0 - 0x60u);
        esi = sp0 - 0x64u;
        edi = 3u;
L_100d0160: ;
        wr32(sp0 - 0xc8u, esi - 0xcu);
        wr32(sp0 - 0xccu, arg1);
        wr32(sp0 - 0xd0u, sp0 - 0xacu);
        g->eax = sp0 - 0xacu;
        g->edx = arg1;
        g->esp = sp0 - 0xc4u;
        t43 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xacu, arg1, esi - 0xcu);
        t44 = g->edx;
        d45 = (double)rdf32(sp0 - 0xa8u);
        d46 = (double)rdf32(sp0 - 0xacu);
        d47 = fr(g, sqrt(fr(g, fr(g, d45 * d45) + fr(g, d46 * d46))));
        d48 = (double)rdf32(sp0 - 0x78u);
        if (!(d47 < d48))
        {
            edx = t44;
        }
        else
        {
            eax = (t43 & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, d48, 0u);
            edx = t44;
            if ((cow_fsw(g, (double)rdf32(arg2), (double)rdf32(esi), 0u) & 0x4100u) == 0u)
            {
                t49 = rd32(esi);
                t50 = rd32(sp0 - 0xb4u);
                wr32(arg2, t49);
                edx = t49;
                loc_b4 = (t50 & 0xffffffu) | 0x1000000u;
            }
        }
        if (edi != 1u)
        {
            esi = esi + 0x10u;
            edi = edi - 1u;
            goto L_100d0160;
        }
        loc_cc = arg1;
    }
    esi = rd32(sp0 - 0x7cu);
    edi = rd32(sp0 - 0xb0u);
    loc_d0 = sp0 - 0xacu;
L_100d01c3: ;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 0x74u))
    {
        ebx = ebx + 1u;
        goto L_100d0048;
    }
    eax = rd32(sp0 - 0x74u);
L_100d01d6: ;
    if (loc_b4 >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_b4 >> 0x18u;
        goto L_100d0491;
    }
L_100d01e9: ;
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 0xdu);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(edi) + 0x1c8u), edi, 2, 0xdu, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wr32(sp0 - 0xccu, 0xfu);
    g->eax = sp0 - 0x8cu;
    t51 = cow_thiscall(g, rd32(rd32(edi) + 0x1c8u), edi, 2, 0xfu, sp0 - 0x8cu);
    d52 = (double)rdf32(sp0 - 0x94u);
    d53 = (double)rdf32(sp0 - 0x9cu);
    d54 = (double)rdf32(sp0 - 0x84u);
    d55 = (double)rdf32(sp0 - 0x8cu);
    d56 = fr(g, sqrt(fr(g, fr(g, d52 * d52) + fr(g, d53 * d53))));
    d57 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
    if (!(d56 < d57))
    {
        x1 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
        x0 = d56;
        d59 = x1;
        x1 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329ce4u)));
        x0 = fr(g, d59 * (double)rdf32(COW_IMG(0x10329d34u)));
    }
    else
    {
        x1 = fr(g, sqrt(fr(g, fr(g, d54 * d54) + fr(g, d55 * d55))));
        x0 = d56;
        d58 = x1;
        x1 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d34u)));
        x0 = fr(g, d58 * (double)rdf32(COW_IMG(0x10329ce4u)));
    }
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 1u);
    d60 = (double)(float)fr(g, x0 + x1);
    wrf32(sp0 - 0xb0u, (float)d60);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, 1u, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    g->esp = sp0 - 0xccu;
    t61 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t62 = g->edx;
    g->edx = t62;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10028170u), t61, 2, sp0 - 0x8cu, sp0 - 0x9cu);
    t63 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    d64 = (double)(float)fr(g, (double)rdf32(sp0 - 0x8cu) + (double)rdf32(sp0 - 0xb0u));
    wrf32(sp0 - 0x8cu, (float)d64);
    g->eax = sp0 - 0x9cu;
    t65 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x9cu);
    t66 = g->ecx;
    d67 = (double)rdf32(sp0 - 0x90u);
    if (!(d67 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (t65 & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t66;
    }
    else
    {
        eax = (t65 & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t66;
        wr32(sp0 - 0x90u, 0x3a83126fu);
        loc_90 = 0x3a83126fu;
    }
    wr32(sp0 - 0xc8u, ecx);
    d68 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_90));
    wrf32(sp0 - 0xc8u, (float)d68);
    wr32(sp0 - 0xccu, sp0 - 0x9cu);
    wr32(sp0 - 0xd0u, sp0 - 0x9cu);
    g->ecx = sp0 - 0x9cu;
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x9cu, sp0 - 0x9cu, cow_f2bits(d68));
    t69 = g->ecx;
    t70 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    d71 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 - 0x9cu));
    wrf32(sp0 - 0xacu, (float)d71);
    d72 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 - 0x98u));
    wrf32(sp0 - 0xa8u, (float)d72);
    d73 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(sp0 - 0x94u));
    wrf32(sp0 - 0xa4u, (float)d73);
    g->edx = t70;
    g->esp = sp0 - 0xc8u;
    t74 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t75 = g->edx;
    g->esp = sp0 - 0xc4u;
    t76 = cow_thiscall(g, COW_IMG(0x10028140u), t74, 1, sp0 - 0x8cu);
    t77 = g->ecx;
    wr32(sp0 - 0xc8u, t77);
    d78 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x80u));
    wrf32(sp0 - 0xc8u, (float)d78);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    wr32(sp0 - 0xd0u, sp0 - 0x8cu);
    t79 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x8cu, sp0 - 0x8cu, cow_f2bits(d78));
    d80 = (double)(float)fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    wrf32(sp0 - 0x8cu, (float)d80);
    d81 = (double)rdf32(sp0 - 0xa8u);
    d82 = (double)rdf32(sp0 - 0xacu);
    d83 = fr(g, fr(g, d81 * d81) + fr(g, d82 * d82));
    d84 = fr(g, fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu)) * d80);
    if (!(d83 < d84))
    {
        loc_8c_f = d80;
    }
    else
    {
        eax = (t79 & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, d84, 0u);
        loc_8c_f = d80;
        d85 = (double)rdf32(sp0 - 0xa0u);
        if ((cow_fsw(g, (double)rdf32(arg2), d85, 0u) & 0x4100u) == 0u)
        {
            t86 = rd32(sp0 - 0xa0u);
            t87 = rd32(sp0 - 0xb4u);
            wr32(arg2, t86);
            loc_b4 = (t87 & 0xffffffu) | 0x1000000u;
        }
    }
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, 3u);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, 3u, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    g->esp = sp0 - 0xccu;
    t88 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t89 = g->edx;
    g->edx = t89;
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, COW_IMG(0x10028170u), t88, 2, sp0 - 0x8cu, sp0 - 0x9cu);
    t90 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x9cu);
    d91 = (double)(float)fr(g, (double)rdf32(sp0 - 0x8cu) + (double)rdf32(sp0 - 0xb0u));
    wrf32(sp0 - 0x8cu, (float)d91);
    g->eax = sp0 - 0x9cu;
    t92 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x9cu);
    t93 = g->ecx;
    d94 = (double)rdf32(sp0 - 0x90u);
    if (!(d94 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (t92 & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t93;
    }
    else
    {
        eax = (t92 & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t93;
        wr32(sp0 - 0x90u, 0x3a83126fu);
        loc_90 = 0x3a83126fu;
    }
    wr32(sp0 - 0xc8u, ecx);
    d95 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / cow_bits2f(loc_90));
    wrf32(sp0 - 0xc8u, (float)d95);
    wr32(sp0 - 0xccu, sp0 - 0x9cu);
    wr32(sp0 - 0xd0u, sp0 - 0x9cu);
    g->ecx = sp0 - 0x9cu;
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x9cu, sp0 - 0x9cu, cow_f2bits(d95));
    t96 = g->ecx;
    t97 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    d98 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(sp0 - 0x9cu));
    wrf32(sp0 - 0xacu, (float)d98);
    d99 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 - 0x98u));
    wrf32(sp0 - 0xa8u, (float)d99);
    d100 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(sp0 - 0x94u));
    wrf32(sp0 - 0xa4u, (float)d100);
    g->edx = t97;
    g->esp = sp0 - 0xc8u;
    t101 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t102 = g->edx;
    g->esp = sp0 - 0xc4u;
    t103 = cow_thiscall(g, COW_IMG(0x10028140u), t101, 1, sp0 - 0x8cu);
    t104 = g->ecx;
    wr32(sp0 - 0xc8u, t104);
    d105 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x80u));
    wrf32(sp0 - 0xc8u, (float)d105);
    wr32(sp0 - 0xccu, sp0 - 0x8cu);
    wr32(sp0 - 0xd0u, sp0 - 0x8cu);
    g->edx = sp0 - 0x8cu;
    t106 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x8cu, sp0 - 0x8cu, cow_f2bits(d105));
    t107 = g->edx;
    d108 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
    d109 = (double)rdf32(sp0 - 0xa8u);
    d110 = (double)rdf32(sp0 - 0xacu);
    d111 = fr(g, fr(g, d109 * d109) + fr(g, d110 * d110));
    d112 = fr(g, d108 * d108);
    if (!(d111 < d112))
    {
        eax = (t106 & 0xffff0000u) | (uint16_t)cow_fsw(g, d111, d112, 1u);
        edx = t107;
    }
    else
    {
        eax = (t106 & 0xffff0000u) | (uint16_t)cow_fsw(g, d111, d112, 1u);
        edx = t107;
        d113 = (double)rdf32(sp0 - 0xa0u);
        if ((cow_fsw(g, (double)rdf32(arg2), d113, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(arg2), d113, 0u) & 0x4100u;
        }
        else
        {
            t114 = rd32(sp0 - 0xa0u);
            t115 = rd32(sp0 - 0xb4u);
            wr32(arg2, t114);
            eax = t114;
            loc_b4 = (t115 & 0xffffffu) | 0x1000000u;
        }
    }
L_100d0491: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t116 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t117 = g->edx;
    g->ebx = rd32(sp0 - 0xb8u);
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    g->edx = t117;
    return (t116 & 0xffffff00u) | rd8(sp0 - 0xb1u);
L_100d01d2: ;
    edi = rd32(sp0 - 0xb0u);
    goto L_100d01d6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cff40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cff40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
