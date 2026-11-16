/* f_0x10246d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10246d50(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x106690e4u), 0xau);
    wr32(sp0 - 0x20u, in_edi);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t2);
    if (rd32(t1 + 0x14u) != 0u)
    {
        eax = rd32(t1 + 0x14u);
        ebp = t1;
        edi = t2;
        loc_14 = t2;
        if (eax != 3u)
        {
            wr32(sp0 + 4u, arg4);
        }
        else
        {
            t6 = cow_divu(g, arg4 >> 1u, rd8(ebp + 0x36u));
            t7 = cow_modu(g, arg4 >> 1u, rd8(ebp + 0x36u));
            t8 = ((t6 >> 0xau) + 4u) * rd32(ebp + 0x7cu);
            wr32(sp0 + 4u, t8);
        }
    }
    else
    {
        ebp = t1;
        edi = t2;
        loc_14 = t2;
        t3 = cow_divu(g, arg4 >> 1u, rd8(ebp + 0x37u));
        t4 = cow_modu(g, arg4 >> 1u, rd8(ebp + 0x37u));
        t5 = t3 * ((rd8(ebp + 0x37u) >> 1u) + 1u);
        wr32(sp0 + 4u, t5);
    }
    t9 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, in_ebx);
    eax = 0u;
    ecx = t9 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t9 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (rd32(ebp + 0x14u) != 0u)
    {
        eax = rd32(ebp + 0x14u);
        goto L_10246de6;
    }
    eax = rd32(ebp + 0x14u);
    edx = t9;
    eax = ((((eax & 0xffffff00u) | rd8(ebp + 0x37u)) >> 1u) + 1u) * rd8(ebp + 0x36u);
L_10246e1d: ;
    ebx = rd32(ebp + 0x30u) + rd32(ebp + 0x20u) * eax;
    esi = rd32(ebp + 0x30u) + rd32(ebp + 0xb0u) * eax;
L_10246e33: ;
    t11 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t11);
    if ((int32_t)rd32(ebp + 0x24u) >= 0)
    {
        eax = rd32(ebp + 0x24u);
        loc_10 = t11;
        goto L_10246e4a;
    }
    eax = rd32(ebp + 0x24u);
    loc_10 = t11;
    if ((int32_t)esi >= (int32_t)ebx) goto L_10246f14;
L_10246e4a: ;
    wr32(sp0 - 0x28u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x2cu, ebp + 0xbcu);
    g->eax = eax;
    g->ecx = ebp + 0xbcu;
    g->esp = sp0 - 0x18u;
    t12 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, ebp + 0xbcu, COW_IMG(0x1034f2d0u), in_ebx, in_edi, in_esi);
    t13 = g->ecx;
    wr32(sp0 - 0xcu, t12);
    if (t12 == 0u)
    {
        loc_c = t12;
        goto L_10246f14;
    }
    ecx = t13;
    loc_c = t12;
L_10246e6a: ;
    if ((int32_t)ebx >= (int32_t)(esi + loc_10))
    {
        edx = esi + loc_10;
        edi = loc_10;
    }
    else
    {
        edx = esi + loc_10;
        edi = ebx - esi;
    }
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, loc_c);
    g->eax = loc_c;
    g->esp = sp0 - 0x24u;
    t14 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, loc_c, esi, 0u);
    t15 = g->edx;
    t16 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t16);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, 1u);
    t17 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x40u, t17);
    g->esp = sp0 - 0x28u;
    t18 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t15, 1, 6, t17, 1u, edi, t16, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t19 = g->edx;
    t20 = rd32(sp0 - 0x10u) - t18;
    wr32(sp0 - 0x10u, t20);
    if ((int32_t)(rd32(sp0 - 0x10u) - t18) <= 0)
    {
        eax = t18;
        ecx = t20;
        edx = t19;
        esi = t16;
        loc_10 = t20;
        goto L_10246f0b;
    }
    eax = t18;
    edx = t19;
    esi = t16;
    loc_10 = t20;
    if ((int32_t)rd32(ebp + 0x24u) < 0)
    {
        ecx = rd32(ebp + 0x24u);
        goto L_10246f0b;
    }
    ecx = rd32(ebp + 0x24u);
    t21 = eax + rd32(sp0 - 0x14u);
    wr32(sp0 - 0x14u, t21);
    if (rd32(ebp + 0x14u) != 0u)
    {
        eax = rd32(ebp + 0x14u);
        loc_14 = t21;
        goto L_10246edb;
    }
    loc_14 = t21;
    t22 = rd8(ebp + 0x37u);
    esi = (t22 >> 1u) + 1u;
L_10246ecb: ;
    esi = rd32(ebp + 0x30u) + esi * rd8(ebp + 0x36u) * ecx;
    goto L_10246e6a;
L_10246de6: ;
    if (eax != 3u) goto L_10246e0d;
    t10 = rd32(ebp + 0x88u) + ((uint32_t)((int32_t)rd32(ebp + 0x88u) >> 0x1fu) & 0x3ffu);
    edx = (uint32_t)((int32_t)rd32(ebp + 0x88u) >> 0x1fu) & 0x3ffu;
    ebx = rd32(ebp + 0x18u);
    esi = rd32(ebp + 0x30u) + (uint32_t)((int32_t)t10 >> 0xau) * rd32(ebp + 0x7cu);
    goto L_10246e33;
L_10246e0d: ;
    eax = (rd8(ebp + 0x35u) >> 3u) * rd8(ebp + 0x36u);
    edx = rd8(ebp + 0x36u);
    goto L_10246e1d;
L_10246edb: ;
    if (eax != 3u) goto L_10246eff;
    t23 = ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 0x3ffu);
    esi = rd32(ebp + 0x30u) + ((uint32_t)((int32_t)t23 >> 0xau) - 1u) * rd32(ebp + 0x7cu);
    goto L_10246e6a;
L_10246eff: ;
    t24 = rd8(ebp + 0x35u);
    esi = t24 >> 3u;
    goto L_10246ecb;
L_10246f0b: ;
    wr32(sp0 - 0x28u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
L_10246f14: ;
    wr32(COW_IMG(0x106690e4u), 0xbu);
    if (rd32(ebp + 0x14u) != 0u)
    {
        eax = rd32(ebp + 0x14u);
        if (eax != 3u)
        {
            t62 = rd32(sp0 + 0xcu);
            t63 = rd32(sp0 + 8u);
            esi = t63;
            edi = t62;
            ecx = arg4 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = arg4 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (rd32(ebp + 0x14u) == 2u)
            {
                eax = t62;
                edx = eax + (arg4 >> 1u) * 2u;
L_102471b6: ;
                t64 = rd8(eax + 1u);
                t65 = rd8(eax);
                wr16(eax, (uint16_t)(t64 | t65 << 8u));
                if (eax + 2u < edx)
                {
                    eax = eax + 2u;
                    esi = (esi & 0xffff0000u) | t64 | t65 << 8u;
                    goto L_102471b6;
                }
            }
        }
        else
        {
            t29 = rd32(ebp + 0x74u);
            wr32(sp0 - 8u, t29);
            t30 = rd32(sp0 + 8u);
            if ((int32_t)rd32(ebp + 0x8cu) <= 0)
            {
                eax = rd32(ebp + 0x8cu);
                edx = t29;
                esi = t30;
                edi = arg4;
                loc_8 = t29;
                goto L_10247034;
            }
            eax = rd32(ebp + 0x8cu);
            edx = t29;
            ebx = t30;
            loc_8 = t29;
            wr32(sp0 - 0x28u, edx);
            wr32(sp0 - 0x2cu, ebx);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x58u, 2, ebx, edx);
L_10246f90: ;
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t31 = rd32(ebp + 0x5cu);
            wr32(sp0 - 0x30u, t31);
            wr32(sp0 - 0x34u, ebx);
            t32 = rd32(ebp + 0x68u);
            wr32(sp0 - 0x38u, t32);
            g->eax = t31;
            g->esp = sp0 - 0x24u;
            t33 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t32, ebx, t31, sp0 - 8u, sp0 - 4u);
            if (t33 != 0u) goto L_10246fb6;
            if ((int32_t)rd32(sp0 - 4u) < 1) goto L_10246f90;
L_10246fb6: ;
            t34 = rd32(sp0 + 0xcu);
            t35 = rd8(ebp + 0x36u) * rd32(ebp + 0x8cu) * 2u;
            t36 = rd32(ebp + 0x64u);
            esi = t36;
            edi = t34;
            ecx = t35 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t35 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t37 = t34 + rd8(ebp + 0x36u) * rd32(ebp + 0x8cu) * 2u;
            t38 = rd8(ebp + 0x36u);
            t39 = rd32(ebp + 0x8cu);
            t40 = rd32(ebp + 0x88u);
            wr32(sp0 + 0xcu, t37);
            t41 = arg4 - t38 * t39 * 2u;
            t42 = rd32(ebp + 0x20u);
            wr32(sp0 + 4u, t41);
            t43 = rd32(sp0 - 8u);
            wr32(ebp + 0x88u, t40 + t39);
            wr32(ebp + 0x8cu, 0u);
            if ((int32_t)(t40 + t39) < (int32_t)t42)
            {
                eax = t42;
                edx = t43;
                esi = ebx + t43;
            }
            else
            {
                edx = t43;
                esi = ebx + t43;
                if ((int32_t)rd32(ebp + 0x24u) < 0)
                {
                    eax = rd32(ebp + 0x24u);
                }
                else
                {
                    eax = rd32(ebp + 0x24u);
                    wr32(ebp + 0x88u, eax);
                }
            }
L_10247030: ;
            edi = rd32(sp0 + 4u);
L_10247034: ;
            wr32(sp0 - 0x28u, edx);
            wr32(sp0 - 0x2cu, esi);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x58u, 2, esi, edx);
L_1024703e: ;
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t44 = rd32(ebp + 0x5cu);
            wr32(sp0 - 0x30u, t44);
            wr32(sp0 - 0x34u, esi);
            t45 = rd32(ebp + 0x68u);
            wr32(sp0 - 0x38u, t45);
            g->eax = sp0 - 8u;
            g->esp = sp0 - 0x24u;
            t46 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t45, esi, t44, sp0 - 8u, sp0 - 4u);
            wr32(sp0 + 8u, t46);
            if (t46 != 0u) goto L_10247068;
            if ((int32_t)rd32(sp0 - 4u) < 1) goto L_1024703e;
L_10247068: ;
            t47 = esi + rd32(sp0 - 8u);
            wr32(sp0 - 0x14u, t47);
            if ((int32_t)(rd32(ebp + 0x88u) & 0x800003ffu) >= 0)
            {
                eax = rd32(ebp + 0x88u) & 0x800003ffu;
                loc_14 = t47;
            }
            else
            {
                eax = rd32(ebp + 0x88u) & 0x800003ffu;
                loc_14 = t47;
                eax = (eax - 1u | 0xfffffc00u) + 1u;
            }
            if ((int32_t)edi >= (int32_t)(-(eax * 4u) + 0x1000u))
            {
                edx = -(eax * 4u) + 0x1000u;
            }
            else
            {
                edx = edi;
            }
            t48 = rd32(ebp + 0x5cu);
            wr32(sp0 + 4u, edi - edx);
            t49 = rd32(sp0 + 0xcu);
            esi = eax * 4u + t48;
            edi = t49;
            ecx = edx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = edx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t50 = (edx >> 1u) * 2u + rd32(sp0 + 0xcu);
            t51 = rd32(ebp + 0x88u);
            wr32(sp0 + 0xcu, t50);
            t52 = (edx >> 2u) + t51;
            t53 = rd32(ebp + 0x20u);
            wr32(ebp + 0x88u, t52);
            if ((int32_t)t52 < (int32_t)t53)
            {
                edi = 0x400u - (edx >> 2u) - eax;
                goto L_1024713d;
            }
            edi = 0x400u - (edx >> 2u) - eax;
            if ((int32_t)rd32(ebp + 0x24u) < 0) goto L_10247159;
            eax = rd32(ebp + 0x24u);
            wr32(ebp + 0x88u, eax);
            if ((int32_t)rd32(sp0 + 4u) <= 0) goto L_1024713d;
            eax = rd32(sp0 + 4u);
            t54 = rd32(sp0 - 8u);
            wr32(sp0 - 0x28u, t54);
            wr32(sp0 - 0x2cu, loc_14);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x58u, 2, loc_14, t54);
            esi = loc_14;
L_1024710f: ;
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t55 = rd32(ebp + 0x5cu);
            wr32(sp0 - 0x30u, t55);
            wr32(sp0 - 0x34u, esi);
            t56 = rd32(ebp + 0x68u);
            wr32(sp0 - 0x38u, t56);
            g->eax = t56;
            g->esp = sp0 - 0x24u;
            t57 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t56, esi, t55, sp0 - 8u, sp0 - 4u);
            if (t57 != 0u)
            {
                eax = t57;
                goto L_10247135;
            }
            eax = t57;
            if ((int32_t)rd32(sp0 - 4u) < 1) goto L_1024710f;
L_10247135: ;
            edx = rd32(sp0 - 8u);
            esi = esi + rd32(sp0 - 8u);
L_10247149: ;
            if (eax != 0u) goto L_10247159;
            if ((int32_t)rd32(sp0 + 4u) > 0)
            {
                eax = rd32(sp0 + 4u);
                goto L_10247030;
            }
L_10247159: ;
            if ((int32_t)edi > 0)
            {
                t58 = rd32(ebp + 0x5cu);
                t59 = rd8(ebp + 0x36u);
                wr32(ebp + 0x8cu, edi);
                t60 = t59 * edi * 2u;
                t61 = rd32(ebp + 0x64u);
                esi = t58 - edi * 4u + 0x1000u;
                edi = t61;
                ecx = t60 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t60 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
        }
    }
    else
    {
        wr32(sp0 - 0x28u, arg4);
        wr32(sp0 - 0x2cu, ebp + 0x9cu);
        t25 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x30u, t25);
        t26 = rd32(sp0 + 8u);
        wr32(COW_IMG(0x106690e4u), 0xcu);
        wr32(sp0 - 0x34u, t26);
        t27 = rd8(ebp + 0x37u);
        wr32(sp0 - 0x38u, t27);
        t28 = rd8(ebp + 0x36u);
        wr32(sp0 - 0x3cu, t28);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10246ad0u), 15, t28, t27, t26, t25, ebp + 0x9cu, arg4, in_ebx, in_edi, in_esi, in_ebp, loc_14, loc_10, loc_c, rd32(sp0 - 8u), rd32(sp0 - 4u));
    }
    if (rd32(ebp + 0x14u) != 0u)
    {
        eax = rd32(ebp + 0x14u);
        goto L_102471e0;
    }
    t66 = rd8(ebp + 0x37u);
    ecx = (t66 >> 1u) + 1u;
L_102471ff: ;
    eax = rd32(sp0 + 4u);
L_10247203: ;
    t69 = cow_divs(g, eax, ecx * rd8(ebp + 0x36u));
    t70 = cow_mods(g, eax, ecx * rd8(ebp + 0x36u));
    t71 = t69 + rd32(ebp + 0xb0u);
    t72 = rd32(ebp + 0x24u);
    wr32(ebp + 0xb0u, t71);
    if ((int32_t)t72 >= 0)
    {
        ecx = t71;
        edx = t72;
        if ((int32_t)ecx < (int32_t)rd32(ebp + 0x20u)) goto L_1024723a;
        eax = rd32(ebp + 0x20u);
L_1024722a: ;
        if ((int32_t)(ecx + edx - eax) >= (int32_t)eax)
        {
            ecx = ecx + edx - eax;
            goto L_1024722a;
        }
        ecx = ecx + edx - eax;
        wr32(ebp + 0xb0u, ecx);
    }
L_1024723a: ;
    wr32(COW_IMG(0x106690e4u), 0xdu);
    g->edi = in_edi;
    return 0u;
L_1024713d: ;
    eax = rd32(sp0 + 8u);
    edx = rd32(sp0 - 8u);
    esi = loc_14;
    goto L_10247149;
L_102471e0: ;
    if (eax != 3u) goto L_102471f5;
    t67 = rd8(ebp + 0x35u);
    eax = arg4;
    ecx = t67 >> 3u;
    goto L_10247203;
L_102471f5: ;
    t68 = rd8(ebp + 0x35u);
    ecx = t68 >> 3u;
    goto L_102471ff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
