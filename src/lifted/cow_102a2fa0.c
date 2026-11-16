/* f_0x102a2fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102a2fa0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d24;
    double d43;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_ac;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    const double xin0 = ST(0);
    const double xin1 = ST(1);
    cow_frame(g, sp0, 236u);

    wr32(sp0 - 0xb0u, in_ebx);
    wr32(sp0 - 0xb4u, in_ebp);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0xbf800000u);
    wr32(sp0 - 0xbcu, in_edi);
    t1 = rd32(arg1 + 0x18u) + rd32(arg1 + 0x1cu) * 0xcu;
    wr32(sp0 - 0x9cu, t1);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b0u);
    wr32(sp0 - 0x90u, t2);
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u);
    wr32(sp0 - 0x94u, t3);
    t4 = rd32(rd32(t1 + 4u) + 0x2cu);
    wr32(sp0 - 0x2cu, t4);
    if (rd32(rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu) + 0x30u) == 0u)
    {
        ecx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu + 4u);
        ebp = arg2 * 0x30u + rd32(arg1 + 0x40u);
        loc_9c = t1;
        loc_90 = t2;
        loc_94 = t3;
        loc_2c = t4;
        x1 = (double)rdf32(rd32(t1 + 4u) + 0x1cu);
        x0 = (double)rdf32(rd32(t1 + 4u) + 0xcu);
        t8 = rd32(ecx + 0xcu);
        wr32(sp0 - 0xa8u, t8);
        t9 = rd32(ecx + 0x1cu);
        wr32(sp0 - 0xa4u, t9);
        t10 = rd32(ecx + 0x2cu);
        wr32(sp0 - 0xa0u, t10);
        eax = t10;
        edx = t9;
    }
    else
    {
        eax = rd32(rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu) + 0x30u);
        ecx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu + 4u);
        edx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu);
        ebp = arg2 * 0x30u + rd32(arg1 + 0x40u);
        loc_9c = t1;
        loc_90 = t2;
        loc_94 = t3;
        loc_2c = t4;
        x1 = (double)rdf32(rd32(t1 + 4u) + 0x1cu);
        x0 = (double)rdf32(rd32(t1 + 4u) + 0xcu);
        d5 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(COW_IMG(0x10329cecu))) + x0);
        wrf32(sp0 - 0xa8u, (float)d5);
        d6 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + 0x18u) * (double)rdf32(COW_IMG(0x10329cecu))) + x1);
        wrf32(sp0 - 0xa4u, (float)d6);
        d7 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + 0x28u) * (double)rdf32(COW_IMG(0x10329cecu))) + cow_bits2f(loc_2c));
        wrf32(sp0 - 0xa0u, (float)d7);
    }
    wr32(sp0 - 0xc0u, sp0 - 0x8cu);
    d11 = (double)(float)fr(g, x0 - (double)rdf32(sp0 - 0xa8u));
    wrf32(sp0 - 0x8cu, (float)d11);
    d12 = (double)(float)fr(g, x1 - (double)rdf32(sp0 - 0xa4u));
    wrf32(sp0 - 0x88u, (float)d12);
    d13 = (double)(float)fr(g, cow_bits2f(loc_2c) - (double)rdf32(sp0 - 0xa0u));
    wrf32(sp0 - 0x84u, (float)d13);
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0x8cu);
    d14 = cow_take_float(g);
    wrf32(sp0 - 0xacu, (float)(double)(float)d14);
    wr32(sp0 - 0xc4u, 0x40490fdbu);
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wr32(sp0 - 0xccu, sp0 - 0x40u);
    wr32(sp0 - 0xd0u, sp0 - 0x34u);
    g->ecx = sp0 - 0x34u;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x1027ad10u), 4, sp0 - 0x34u, sp0 - 0x40u, sp0 - 0x8cu, 0x40490fdbu);
    t15 = g->ecx;
    wr32(sp0 - 0xd4u, sp0 - 0x34u);
    wr32(sp0 - 0xd8u, sp0 - 0x24u);
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1027a9f0u), 12, sp0 - 0x24u, sp0 - 0x34u, sp0 - 0x34u, sp0 - 0x40u, sp0 - 0x8cu, 0x40490fdbu, sp0 - 0x8cu, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0xacu));
    wr32(sp0 - 0x98u, 3u);
    eax = sp0 - 0x80u;
    ecx = sp0 - 0x24u;
    loc_98 = 3u;
L_102a3138: ;
    wr32(eax, rd32(ecx));
    t16 = rd32(ecx + 4u);
    wr32(eax + 4u, t16);
    t17 = rd32(ecx + 8u);
    wr32(eax + 8u, t17);
    wr32(sp0 - 0x98u, loc_98 - 1u);
    if (loc_98 != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0xcu;
        loc_98 = loc_98 - 1u;
        goto L_102a3138;
    }
    t18 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x74u, t18);
    t19 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x64u, t19);
    t20 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x54u, t20);
    wr32(sp0 - 0x44u, 0x3f800000u);
    if (arg3 == 0u)
    {
        ecx = t19;
        goto L_102a325a;
    }
    ecx = t19;
    edx = t20;
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = edx;
    fpush(g, xin0);
    g->esp = sp0 - 0xbcu;
    t21 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, sp0 - 0x80u);
    t22 = g->edx;
    t23 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0xc0u, t23);
    wr32(sp0 - 0xc4u, t23);
    d24 = (double)(float)fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a1a8u)));
    wrf32(sp0 - 0xc4u, (float)d24);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    g->ecx = t23;
    t25 = cow_cdecl(g, COW_IMG(0x10283c30u), 3, 0x3f800000u, cow_f2bits(d24), t23);
    t26 = g->ecx;
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xd0u, rd32(ebp));
    wr32(sp0 - 0xd4u, arg1);
    g->ecx = t26;
    g->edx = rd32(ebp);
    t27 = rd32(ebp);
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1028f610u), 11, arg1, t27, 1u, 0x3f800000u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0xacu, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        ecx = t28;
        edx = t29;
    }
    else
    {
        ecx = rd32(arg1 + 0x48u);
        ebx = 0u;
        loc_ac = 0u;
L_102a31d5: ;
        if ((int32_t)rd32(ebx + ecx + 4u) > 0)
        {
            eax = ebx + ecx;
            edx = rd32(ebx + ecx + 4u);
            ebp = 0u;
            edi = 0u;
L_102a31e4: ;
            t30 = rd32(edi + rd32(eax + 0x28u) + 4u);
            wr32(sp0 - 0xc0u, t30);
            g->esp = sp0 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x10283e20u), 1, t30);
            t31 = rd32(sp0 - 0x9cu);
            wr32(sp0 - 0xc4u, t31);
            t32 = edi + rd32(ebx + rd32(arg1 + 0x48u) + 0x28u);
            wr32(sp0 - 0xc8u, t32);
            t33 = rd32(edi + rd32(ebx + rd32(arg1 + 0x48u) + 0x28u) + 0x18u);
            wr32(sp0 - 0xccu, t33);
            g->esp = sp0 - 0xc8u;
            cow_cdecl(g, COW_IMG(0x102a1f40u), 1, t33);
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + rd32(arg1 + 0x48u) + 4u))
            {
                eax = ebx + rd32(arg1 + 0x48u);
                edx = rd32(ebx + rd32(arg1 + 0x48u) + 4u);
                ebp = ebp + 1u;
                edi = edi + 0x90u;
                goto L_102a31e4;
            }
            ecx = rd32(arg1 + 0x48u);
        }
        wr32(sp0 - 0xacu, loc_ac + 1u);
        if ((int32_t)(loc_ac + 1u) < (int32_t)rd32(arg1 + 0x44u))
        {
            ebx = ebx + 0x2cu;
            loc_ac = loc_ac + 1u;
            goto L_102a31d5;
        }
        edx = rd32(arg1 + 0x44u);
    }
    t34 = rd32(rd32(sp0 - 0x9cu) + 4u);
    wr32(sp0 - 0xc0u, t34);
    g->eax = t34;
    g->edx = edx;
    t35 = rd32(sp0 - 0x9cu);
    fpush(g, xin1);
    g->esp = sp0 - 0xbcu;
    t36 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t34);
    t37 = g->edx;
    wr32(sp0 - 0xc4u, rd32(t35));
    g->edx = t37;
    g->esp = sp0 - 0xc0u;
    t38 = cow_cdecl(g, COW_IMG(0x10291200u), 1, rd32(t35));
    t39 = g->edx;
    g->ebx = rd32(sp0 - 0xb0u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->ebp = rd32(sp0 - 0xb4u);
    g->edx = t39;
    g->top = (g->top + 2u) & 7u;
    return t38 & 0xffffff00u;
L_102a325a: ;
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->ecx = ecx;
    g->edx = sp0 - 0x80u;
    fpush(g, xin0);
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10283d80u), 1, sp0 - 0x80u);
    t40 = g->ecx;
    t41 = g->edx;
    t42 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0xc0u, t42);
    wr32(sp0 - 0xc4u, t40);
    d43 = (double)(float)fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a1a8u)));
    wrf32(sp0 - 0xc4u, (float)d43);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    g->eax = t42;
    g->ecx = t40;
    g->edx = t41;
    t44 = cow_cdecl(g, COW_IMG(0x10283c30u), 3, 0x3f800000u, cow_f2bits(d43), t42);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0xccu, 0x3f800000u);
    wr32(sp0 - 0xd0u, 0x3f800000u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0u);
    g->ecx = t45;
    g->edx = t46;
    g->esp = sp0 - 0x98u;
    t47 = cow_cdecl(g, COW_IMG(0x10283a30u), 16, 0u, 0u, 0x3f800000u, 0x3f800000u, 0x3f800000u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xe0u, 0u);
    g->ecx = t48;
    g->edx = t49;
    g->esp = sp0 - 0xd8u;
    t50 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0u, 0u);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0xe4u, 0u);
    g->ecx = t51;
    g->edx = t52;
    g->esp = sp0 - 0xe0u;
    t53 = cow_cdecl(g, COW_IMG(0x10282030u), 1, 0u);
    t54 = g->ecx;
    t55 = g->edx;
    wr32(sp0 - 0xe8u, 0u);
    g->esp = sp0 - 0xe4u;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, t54, t55, 1, 1, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 0xacu, 0u);
    if ((int32_t)rd32(ebp + 4u) <= 0)
    {
        eax = rd32(ebp + 4u);
        ecx = t56;
        edx = t57;
        loc_ac = 0u;
        goto L_102a3310;
    }
    loc_ac = 0u;
L_102a32b6: ;
    t58 = rd32(loc_ac * 4u + rd32(ebp + 8u));
    t59 = rd32((t58 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t58 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u) + 4u);
    wr32(sp0 - 0xc0u, t59);
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10283e20u), 1, t59);
    wr32(sp0 - 0xc4u, 4u);
    t60 = rd32((t58 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t58 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u));
    wr32(sp0 - 0xc8u, t60);
    g->edx = t60;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10285870u), 1, t60);
    t61 = g->edx;
    t62 = rd32(sp0 - 0xacu) + 1u;
    wr32(sp0 - 0xacu, t62);
    if ((int32_t)(rd32(sp0 - 0xacu) + 1u) < (int32_t)rd32(ebp + 4u))
    {
        loc_ac = t62;
        goto L_102a32b6;
    }
    eax = t62;
    ecx = rd32(ebp + 4u);
    edx = t61;
    loc_ac = t62;
L_102a3310: ;
    wr32(sp0 - 0xc0u, 2u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 2u);
    t63 = g->ecx;
    t64 = g->edx;
    t65 = rd32(rd32(sp0 - 0x9cu) + 4u);
    wr32(sp0 - 0xc4u, t65);
    g->eax = t65;
    g->edx = t64;
    t66 = rd32(sp0 - 0x9cu);
    fpush(g, xin1);
    g->esp = sp0 - 0xc0u;
    t67 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t65);
    t68 = g->edx;
    wr32(sp0 - 0xc8u, rd32(t66));
    g->ecx = rd32(t66);
    t69 = rd32(t66);
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10291200u), 1, t69);
    t70 = g->ecx;
    t71 = rd32(sp0 - 0x94u);
    wr32(sp0 - 0xccu, t71);
    t72 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xd0u, t72);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0u);
    g->eax = t72;
    g->edx = t71;
    g->esp = sp0 - 0x98u;
    t73 = cow_cdecl(g, COW_IMG(0x10283a30u), 16, 0u, 0u, t72, t71, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), 2u, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t74 = g->edx;
    g->ebx = rd32(sp0 - 0xb0u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->ebp = rd32(sp0 - 0xb4u);
    g->edx = t74;
    g->top = (g->top + 2u) & 7u;
    return t73 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a2fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
