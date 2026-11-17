/* f_0x102a7880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a7880(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
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
    uint32_t t6;
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
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t1);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, in_edx, 1, 7, t1, 2u, 3u, sp0 - 0xcu, in_edi, in_esi, in_ebp);
    t3 = g->edx;
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, 3u);
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, t1);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t3, 1, 7, t1, 2u, 3u, sp0 + 4u, rd32(sp0 - 0x2cu), 2u, 3u);
    t5 = g->ecx;
    wr32(sp0 - 0x40u, sp0 - 8u);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, t1);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 8u, 1, 7, t1, 4u, 4u, sp0 - 8u, rd32(sp0 - 0x3cu), 2u, 3u);
    if (rd32(COW_IMG(0x103be2dcu) + (uint32_t)(int16_t)rd16(sp0 + 4u) * 0xcu) * rd32(sp0 - 8u) > 4u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 + 4u);
        ebp = (in_ebp & 0xffff0000u) | rd16(sp0 + 4u);
        esi = t1;
        edi = rd32(sp0 - 8u);
        goto L_102a7a56;
    }
    ecx = (uint32_t)(int16_t)rd16(sp0 + 4u);
    ebx = (uint32_t)(int16_t)rd16(sp0 + 4u) * 0xcu;
    esi = t1;
    edi = rd32(sp0 - 8u);
    if (edi == 0u)
    {
        eax = 0u;
        ebp = 4u;
        goto L_102a795f;
    }
    wr32(sp0 + 4u, ecx - 1u);
    eax = 0u;
    ecx = ecx - 1u;
    ebp = 4u;
L_102a78f5: ;
    if (ecx > 8u) goto L_102a795c;
    t6 = rd32(COW_IMG(0x102a7dc0u) + rd8(COW_IMG(0x102a7dd0u) + ecx) * 4u);
    switch (t6 - RD)
    {
    case 0x102a7909u: goto L_102a7909;
    case 0x102a7919u: edx = rd8(COW_IMG(0x102a7dd0u) + ecx); goto L_102a7919;
    case 0x102a793eu: goto L_102a793e;
    case 0x102a795cu: goto L_102a795c;
    default: rt_fatal(g, COW_IMG(0x102a7902u), "switch");
    }
    return;
L_102a78f1: ;
    ecx = rd32(sp0 + 4u);
    goto L_102a78f5;
L_102a7909: ;
    t9 = rd32(COW_IMG(0x109a286cu)) + 1u;
    wr32(COW_IMG(0x109a286cu), t9);
    ebp = ebp - 1u;
L_102a795c: ;
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_102a78f1;
    }
L_102a795f: ;
    t10 = ebp + rd32(COW_IMG(0x109a286cu));
    t11 = rd16(sp0 - 0xcu);
    wr32(COW_IMG(0x109a286cu), t10);
    if ((uint32_t)(int16_t)t11 - 0x100u > 0x3du)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_102a7db6;
    }
    ecx = (uint32_t)(int16_t)t11 - 0x100u;
    t12 = rd32(COW_IMG(0x102a7ddcu) + rd8(COW_IMG(0x102a7e0cu) + ecx) * 4u);
    switch (t12 - RD)
    {
    case 0x102a7990u: goto L_102a7990;
    case 0x102a79a2u: goto L_102a79a2;
    case 0x102a79b4u: goto L_102a79b4;
    case 0x102a79c6u: goto L_102a79c6;
    case 0x102a79d8u: goto L_102a79d8;
    case 0x102a79eau: goto L_102a79ea;
    case 0x102a79fcu: goto L_102a79fc;
    case 0x102a7a0eu: goto L_102a7a0e;
    case 0x102a7a20u: goto L_102a7a20;
    case 0x102a7a32u: goto L_102a7a32;
    case 0x102a7a44u: goto L_102a7a44;
    case 0x102a7db6u: loc_10 = in_ebx; loc_14 = in_ebp; loc_18 = in_esi; loc_1c = in_edi; goto L_102a7db6;
    default: rt_fatal(g, COW_IMG(0x102a7989u), "switch");
    }
    return;
L_102a7919: ;
    wr32(sp0 - 0x20u, sp0 - 8u);
    t8 = rd32(COW_IMG(0x103be2d8u) + ebx);
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, t8, sp0 - 8u, in_edi, in_esi, in_ebp);
    eax = (uint16_t)rd32(sp0 - 8u);
    ebp = ebp - 2u;
    goto L_102a795c;
L_102a793e: ;
    wr32(sp0 - 0x20u, sp0 - 4u);
    t7 = rd32(COW_IMG(0x103be2d8u) + ebx);
    wr32(sp0 - 0x24u, t7);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 4u, 1, 7, esi, 4u, t7, sp0 - 4u, in_edi, in_esi, in_ebp);
    eax = rd32(sp0 - 4u);
    ebp = ebp - 4u;
    goto L_102a795c;
L_102a7990: ;
    wr32(arg2 + 0x624u, eax);
    return;
L_102a79a2: ;
    wr32(arg2 + 0x628u, eax);
    return;
L_102a79b4: ;
    wr32(arg2 + 0x614u, eax);
    return;
L_102a79c6: ;
    wr32(arg2 + 0x60cu, eax);
    return;
L_102a79d8: ;
    wr32(arg2 + 0x610u, eax);
    return;
L_102a79ea: ;
    wr32(arg2 + 0x61cu, eax);
    return;
L_102a79fc: ;
    wr32(arg2 + 0x620u, eax);
    return;
L_102a7a0e: ;
    wr32(arg2 + 0x618u, eax);
    return;
L_102a7a20: ;
    wr32(arg2 + 0x630u, eax);
    return;
L_102a7a32: ;
    wr32(arg2 + 0x634u, eax);
    return;
L_102a7a44: ;
    wr32(arg2 + 0x638u, eax);
    return;
L_102a7a56: ;
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 4u, 1, 7, esi, 4u, 4u, sp0 - 4u, in_edi, in_esi, in_ebp);
    t13 = g->edx;
    wr32(sp0 - 8u, rd32(COW_IMG(0x109a286cu)));
    t14 = rd32(sp0 - 4u);
    t15 = rd16(sp0 - 0xcu);
    t16 = rd32(COW_IMG(0x109a286cu));
    wr32(COW_IMG(0x109a286cu), t14);
    if ((uint32_t)(int16_t)t15 == 0x111u)
    {
        eax = (uint32_t)(int16_t)t15 - 0x111u;
        ecx = t14;
        edx = t13;
        loc_8 = t16;
        goto L_102a7c7d;
    }
    eax = (uint32_t)(int16_t)t15 - 0x111u;
    ecx = t14;
    edx = t13;
    loc_8 = t16;
    if (eax == 6u)
    {
        eax = eax - 6u;
        goto L_102a7acf;
    }
    eax = eax - 6u;
    if (eax != 0x29u) goto L_102a7dad;
    if (edi == 0u) goto L_102a7dad;
    edx = arg2;
    ebx = arg2 + 4u;
L_102a7aa8: ;
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, ebx, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t17 = g->ecx;
    t18 = g->edx;
    if (edi != 1u)
    {
        ecx = t17;
        edx = t18;
        ebx = ebx + 2u;
        edi = edi - 1u;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7aa8;
    }
    t19 = rd32(sp0 - 8u);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    t22 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t19);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t21;
    g->edi = t22;
    g->ebp = t20;
    return;
L_102a7acf: ;
    wr32(sp0 - 0xcu, 0u);
    if (rd16(sp0 + 4u) != 3u) goto L_102a7b22;
    if (edi == 0u)
    {
        ebp = 0u;
        loc_c = 0u;
        goto L_102a7b62;
    }
    ebx = 0u;
    ebp = 0u;
L_102a7ae3: ;
    t23 = ebx * 2u + rd32(COW_IMG(0x109a2884u));
    wr32(sp0 - 0x20u, t23);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->eax = rd32(COW_IMG(0x109a2884u));
    t24 = rd32(COW_IMG(0x109a2884u));
    g->esp = sp0 - 0x10u;
    t25 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, t23, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t26 = (t25 & 0xffff0000u) | rd16(ebx * 2u + rd32(COW_IMG(0x109a2884u)));
    t27 = rd32(arg2 + 0x608u);
    wr16(ebx * 2u + t27, (uint16_t)t26);
    if (ebx + 1u < edi)
    {
        edx = arg2;
        ebx = ebx + 1u;
        ebp = ebp + (uint16_t)t26;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7ae3;
    }
    eax = t26;
    ecx = t27;
    ebp = ebp + (uint16_t)t26;
    edx = arg2;
L_102a7b5e: ;
    wr32(sp0 - 0xcu, ebp);
    loc_8 = rd32(sp0 - 8u);
    loc_c = ebp;
L_102a7b62: ;
    wr32(sp0 - 0x20u, 0x2a2u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t33 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebp, 1u, COW_IMG(0x103be434u), 0x2a2u, rd32(sp0 - 0x1cu));
    t34 = g->edx;
    t35 = rd16(sp0 + 4u);
    wr32(arg2, t33);
    if ((uint16_t)t35 != 3u)
    {
        eax = t33;
        edx = t34;
        ebx = t33;
        if (edi == 0u)
        {
            ecx = arg2;
            goto L_102a7c30;
        }
        ebp = 0u;
L_102a7bf9: ;
        wr32(sp0 - 0x20u, 0u);
        t43 = rd32(ebp * 4u + rd32(COW_IMG(0x109a2874u)));
        wr32(sp0 - 0x24u, t43);
        wr32(sp0 - 0x28u, esi);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t43, 1, 3, esi, t43, 0u);
        t44 = g->edx;
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, 1u);
        t45 = rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
        wr32(sp0 - 0x34u, t45);
        wr32(sp0 - 0x38u, ebx);
        g->ecx = t45;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t44, 1, 6, ebx, t45, 1u, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
        t46 = g->ecx;
        if (ebp + 1u < edi)
        {
            eax = rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
            ebx = ebx + rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
            ebp = ebp + 1u;
            goto L_102a7bf9;
        }
        ecx = t46;
        edx = rd32(COW_IMG(0x109aa8a4u));
L_102a7c30: ;
        wr32(sp0 - 0x20u, 0x2b2u);
        wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109a2874u)));
        g->eax = rd32(COW_IMG(0x109a2874u));
        g->edx = edx;
        t47 = rd32(COW_IMG(0x109a2874u));
        g->esp = sp0 - 0x1cu;
        t48 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t47, COW_IMG(0x103be434u), 0x2b2u);
        t49 = g->edx;
        wr32(sp0 - 0x2cu, 0x2b3u);
        wr32(sp0 - 0x30u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x109aa8a4u)));
        eax = t48;
        ecx = rd32(COW_IMG(0x109aa8a4u));
        edx = t49;
        loc_2c = 0x2b3u;
        loc_34 = rd32(COW_IMG(0x109aa8a4u));
    }
    else
    {
        eax = t33;
        ebx = t33;
        if (edi == 0u)
        {
            ecx = arg2;
            goto L_102a7bcd;
        }
        ecx = arg2;
        ebp = 0u;
L_102a7b8d: ;
        wr32(sp0 - 0x20u, 0u);
        t36 = rd16(ebp * 2u + rd32(COW_IMG(0x109aa898u)));
        wr32(sp0 - 0x24u, t36);
        wr32(sp0 - 0x28u, esi);
        g->eax = rd32(COW_IMG(0x109aa898u));
        t37 = rd32(COW_IMG(0x109aa898u));
        g->esp = sp0 - 0x1cu;
        t38 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t36, 1, 3, esi, t36, 0u);
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, 1u);
        t39 = rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
        wr32(sp0 - 0x34u, t39);
        wr32(sp0 - 0x38u, ebx);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, rd32(COW_IMG(0x109a2884u)), 1, 6, ebx, t39, 1u, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
        if (ebp + 1u < edi)
        {
            ecx = rd32(COW_IMG(0x109a2884u));
            ebx = ebx + rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
            ebp = ebp + 1u;
            goto L_102a7b8d;
        }
        eax = rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
        ecx = rd32(COW_IMG(0x109a2884u));
L_102a7bcd: ;
        wr32(sp0 - 0x20u, 0x2aau);
        wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109aa898u)));
        g->ecx = ecx;
        g->edx = rd32(COW_IMG(0x109aa898u));
        t40 = rd32(COW_IMG(0x109aa898u));
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t40, COW_IMG(0x103be434u), 0x2aau);
        t41 = g->ecx;
        t42 = g->edx;
        wr32(sp0 - 0x2cu, 0x2abu);
        wr32(sp0 - 0x30u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x109a2884u)));
        eax = rd32(COW_IMG(0x109a2884u));
        ecx = t41;
        edx = t42;
        loc_2c = 0x2abu;
        loc_34 = rd32(COW_IMG(0x109a2884u));
    }
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, loc_34, COW_IMG(0x103be434u), loc_2c);
    t50 = rd32(sp0 - 0xcu);
    wr32(arg2 + 0x630u, t50);
    t51 = rd32(sp0 - 8u);
    t52 = rd32(sp0 - 0x14u);
    t53 = rd32(sp0 - 0x18u);
    t54 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t51);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t53;
    g->edi = t54;
    g->ebp = t52;
    return;
L_102a7b22: ;
    if (edi == 0u)
    {
        ebp = 0u;
        loc_c = 0u;
        goto L_102a7b62;
    }
    ebx = 0u;
    ebp = 0u;
L_102a7b26: ;
    t28 = ebx * 4u + rd32(COW_IMG(0x109aa8a4u));
    wr32(sp0 - 0x20u, t28);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, rd32(COW_IMG(0x109aa8a4u)), 1, 7, esi, 4u, 4u, t28, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t29 = rd32(COW_IMG(0x109aa8a4u));
    t30 = rd16(ebx * 4u + rd32(COW_IMG(0x109aa8a4u)));
    t31 = rd32(arg2 + 0x608u);
    t32 = rd32(ebx * 4u + rd32(COW_IMG(0x109aa8a4u)));
    wr16(ebx * 2u + t31, (uint16_t)t30);
    if (ebx + 1u < edi)
    {
        ecx = arg2;
        ebx = ebx + 1u;
        ebp = ebp + t32;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7b26;
    }
    eax = (t29 & 0xffff0000u) | t30;
    ecx = arg2;
    edx = t31;
    ebp = ebp + t32;
    goto L_102a7b5e;
L_102a7c7d: ;
    wr32(sp0 - 0x20u, 0x287u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 2u);
    wr16(arg2 + 0x604u, (uint16_t)edi);
    wr32(sp0 - 0x2cu, (uint16_t)edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t55 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, (uint16_t)edi, 2u, COW_IMG(0x103be434u), 0x287u, rd32(sp0 - 0x1cu));
    t56 = g->ecx;
    t57 = g->edx;
    wr32(arg2 + 0x608u, t55);
    if ((uint16_t)ebp != 3u)
    {
        eax = t55;
        ecx = t56;
        goto L_102a7d3a;
    }
    eax = t55;
    edx = t57;
    wr32(sp0 - 0x20u, 0x289u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 2u);
    t58 = rd16(arg2 + 0x604u);
    wr32(sp0 - 0x2cu, t58);
    g->eax = eax;
    g->ecx = t58;
    g->esp = sp0 - 0x18u;
    t59 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t58, 2u, COW_IMG(0x103be434u), 0x289u, rd32(sp0 - 0x1cu));
    t60 = g->ecx;
    wr32(COW_IMG(0x109aa898u), t59);
    wr32(sp0 - 0x30u, 0x28au);
    wr32(sp0 - 0x34u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x38u, 2u);
    t61 = rd16(arg2 + 0x604u);
    wr32(sp0 - 0x3cu, t61);
    g->ecx = t60;
    g->edx = t61;
    g->esp = sp0 - 0x28u;
    t62 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t61, 2u, COW_IMG(0x103be434u), 0x28au, rd32(sp0 - 0x2cu));
    t63 = g->ecx;
    t64 = g->edx;
    wr32(COW_IMG(0x109a2884u), t62);
    if (rd16(arg2 + 0x604u) == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7dad;
    }
    ecx = t63;
    edx = t64;
    edi = 0u;
L_102a7d05: ;
    t65 = edi * 2u + rd32(COW_IMG(0x109aa898u));
    wr32(sp0 - 0x20u, t65);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, t65, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t66 = g->edx;
    if (edi + 1u < rd16(arg2 + 0x604u))
    {
        ecx = rd16(arg2 + 0x604u);
        edx = t66;
        edi = edi + 1u;
        goto L_102a7d05;
    }
    t67 = rd32(sp0 - 8u);
    t68 = rd32(sp0 - 0x14u);
    t69 = rd32(sp0 - 0x18u);
    t70 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t67);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t69;
    g->edi = t70;
    g->ebp = t68;
    return;
L_102a7d3a: ;
    wr32(sp0 - 0x20u, 0x28du);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 4u);
    t71 = rd16(arg2 + 0x604u);
    wr32(sp0 - 0x2cu, t71);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t71;
    g->esp = sp0 - 0x18u;
    t72 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t71, 4u, COW_IMG(0x103be434u), 0x28du, rd32(sp0 - 0x1cu));
    t73 = g->ecx;
    t74 = g->edx;
    wr32(COW_IMG(0x109a2874u), t72);
    wr32(sp0 - 0x30u, 0x28eu);
    wr32(sp0 - 0x34u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x38u, 4u);
    t75 = rd16(arg2 + 0x604u);
    wr32(sp0 - 0x3cu, t75);
    g->eax = t75;
    g->edx = t74;
    g->esp = sp0 - 0x28u;
    t76 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t75, 4u, COW_IMG(0x103be434u), 0x28eu, rd32(sp0 - 0x2cu));
    t77 = g->edx;
    wr32(COW_IMG(0x109aa8a4u), t76);
    if (rd16(arg2 + 0x604u) == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7dad;
    }
    edx = t77;
    edi = 0u;
L_102a7d88: ;
    t78 = edi * 4u + rd32(COW_IMG(0x109a2874u));
    wr32(sp0 - 0x20u, t78);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 4u, 4u, t78, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    if (edi + 1u < rd16(arg2 + 0x604u))
    {
        edx = rd16(arg2 + 0x604u);
        edi = edi + 1u;
        goto L_102a7d88;
    }
    loc_8 = rd32(sp0 - 8u);
L_102a7dad: ;
    wr32(COW_IMG(0x109a286cu), loc_8);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102a7db6: ;
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a7880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a7880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
