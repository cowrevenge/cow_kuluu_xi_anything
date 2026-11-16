/* f_0x10104f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10104f00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103ec0u), self, 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 0x18u);
    wr32(t1 + 0x64u, t4);
    eax = t4;
    ecx = t2;
    edx = t3;
    esi = t1;
    edi = arg2;
L_10104f1c: ;
    if (rd8(edi) == 0u) goto L_1010547b;
    eax = (eax & 0xffffff00u) | rd8(edi);
L_10104f2b: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        edx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
    }
    else
    {
        wr32(sp0 - 0x14u, 8u);
        wr32(sp0 - 0x18u, (uint32_t)(int8_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), (uint32_t)(int8_t)eax, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (eax == 0u) goto L_10104f5d;
    if (rd8(edi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 1u);
        edi = edi + 1u;
        goto L_10104f2b;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 1u);
    edi = edi + 1u;
L_10104f5d: ;
    if (rd8(edi) == 0x2bu) goto L_10105381;
    eax = (eax & 0xffffff00u) | rd8(edi);
    if ((uint8_t)eax != 0x2du) goto L_10104f9b;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(edi + 1u) * 2u) & 4u;
        edx = (uint32_t)(int8_t)rd8(edi + 1u);
    }
    else
    {
        wr32(sp0 - 0x14u, 4u);
        t7 = (uint32_t)(int8_t)rd8(edi + 1u);
        wr32(sp0 - 0x18u, t7);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), t7, 3, t7, 4u, in_edi);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if (eax == 0u) goto L_10105381;
L_10104f9b: ;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, 0u);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x101054d0u), 3, 0u, edi, sp0 + 4u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 < 0)
    {
        ecx = t11;
        edx = t12;
        goto L_10105183;
    }
    ecx = t11;
    edx = t12;
    ebp = t10;
    if (ebp != 6u)
    {
        cf = ebp < 6u;
        pf = PARITY((uint8_t)(ebp - 6u));
        zf = ebp == 6u;
        sf = (int32_t)(ebp - 6u) < 0;
        of = ((ebp ^ 6u) & (ebp ^ ebp - 6u)) >> 0x1fu;
        goto L_10104fe7;
    }
    wr32(sp0 + 0x18u, 0u);
    wr32(sp0 - 0x14u, sp0 + 0x18u);
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, 0u);
    g->ecx = ecx;
    g->edx = sp0 + 0x18u;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x101055f0u), 3, 0u, edi, sp0 + 0x18u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        ecx = t14;
        edx = t15;
        ebx = t13;
        if (rd32(sp0 + 0x18u) == 0u)
        {
            eax = rd32(sp0 + 0x18u);
        }
        else
        {
            eax = rd32(sp0 + 0x18u);
            wr32(sp0 + 4u, eax);
        }
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        ebx = 0u;
    }
L_10104ff8: ;
    if (rd8(rd32(sp0 + 4u)) == 0u)
    {
        edi = rd32(sp0 + 4u);
        goto L_10105034;
    }
    edi = rd32(sp0 + 4u);
L_10105001: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(edi) * 2u) & 8u;
        edx = (uint32_t)(int8_t)rd8(edi);
    }
    else
    {
        wr32(sp0 - 0x14u, 8u);
        wr32(sp0 - 0x18u, (uint32_t)(int8_t)rd8(edi));
        g->edx = edx;
        t16 = rd8(edi);
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), (uint32_t)(int8_t)t16, 3, (uint32_t)(int8_t)t16, 8u, rd32(sp0 - 0x10u));
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    if (eax == 0u) goto L_10105034;
    if (rd8(edi + 1u) != 0u)
    {
        edi = edi + 1u;
        goto L_10105001;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 1u);
    edi = edi + 1u;
L_10105034: ;
    if (ebp != 0xcu) goto L_10105051;
    t20 = rd32(esi);
    wr8(esi + 0x4eu, rd8(esi + 0x4eu) | 4u);
    t21 = t20 | 1u << (ebp & 0x1fu);
    wr32(esi, t21);
    eax = t21;
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    goto L_10104f1c;
L_10104fe7: ;
    if ((rd32(esi) & 1u << (ebp & 0x1fu)) != 0u)
    {
        ecx = ebp;
        goto L_1010547b;
    }
    eax = 1u << (ebp & 0x1fu);
    ecx = ebp;
    ebx = 0u;
    goto L_10104ff8;
L_10105051: ;
    if (ebp != 0x18u) goto L_1010506e;
    t22 = rd32(esi);
    wr8(esi + 0x4eu, rd8(esi + 0x4eu) | 8u);
    t23 = t22 | 1u << (ebp & 0x1fu);
    wr32(esi, t23);
    eax = t23;
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    goto L_10104f1c;
L_1010506e: ;
    if (ebp != 0xbu) goto L_10105097;
    wr32(sp0 - 0x14u, rd32(arg5));
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10107ed0u), 2, esi, rd32(arg5));
    t24 = rd32(esi) | 1u << (ebp & 0x1fu);
    wr32(esi, t24);
    eax = t24;
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    goto L_10104f1c;
L_10105097: ;
    if (ebp != 0x13u) goto L_101050c1;
    t25 = rd32(arg5 + 4u);
    wr32(sp0 - 0x14u, t25);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10107f10u), 2, esi, t25);
    t26 = rd32(esi) | 1u << (ebp & 0x1fu);
    wr32(esi, t26);
    eax = t26;
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    goto L_10104f1c;
L_101050c1: ;
    if (ebp != 0x14u) goto L_101050eb;
    t27 = rd32(arg5 + 8u);
    wr32(sp0 - 0x14u, t27);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10107f70u), 2, esi, t27);
    t28 = rd32(esi) | 1u << (ebp & 0x1fu);
    wr32(esi, t28);
    eax = t28;
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    goto L_10104f1c;
L_101050eb: ;
    if (ebp != 0x12u) goto L_10105153;
    if ((rd8(esi) & 2u) == 0u)
    {
        if (arg4 == 0u)
        {
            eax = arg4;
        }
        else
        {
            if ((int16_t)rd16(arg4) < 0)
            {
                eax = arg4;
                ecx = arg4;
            }
            else
            {
                eax = 0u;
                ecx = arg4;
                edx = esi + 0x24u;
L_10105118: ;
                if ((int16_t)rd16(arg4 + eax * 2u) < 0)
                {
                    ecx = (ecx & 0xffff0000u) | rd16(arg4 + eax * 2u);
                    goto L_1010513c;
                }
                ecx = (ecx & 0xffff0000u) | rd16(arg4 + eax * 2u);
                wr16(edx, (uint16_t)ecx);
                wr16(esi + 0x22u, (uint16_t)ecx);
                if ((int32_t)(eax + 1u) < 16)
                {
                    eax = eax + 1u;
                    edx = edx + 2u;
                    goto L_10105118;
                }
                edx = edx + 2u;
                t29 = (rd32(esi) & 0xffffff00u) | (uint8_t)(rd32(esi) | 2u);
                wr32(esi, t29);
                eax = t29;
            }
        }
    }
    goto L_10104f1c;
L_1010513c: ;
    if ((int32_t)eax < 16)
    {
        wr16(eax * 2u + esi + 0x24u, 0xffffu);
    }
    t30 = (rd32(esi) & 0xffffff00u) | (uint8_t)(rd32(esi) | 2u);
    wr32(esi, t30);
    eax = t30;
    goto L_10104f1c;
L_10105153: ;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, esi);
    g->esp = sp0 - 8u;
    t31 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, ebp, ebx, 1u, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t32 = g->ecx;
    wr32(sp0 + 4u, t31);
    if (t31 == 0u)
    {
        ecx = t32;
        goto L_1010547b;
    }
    eax = t31;
    pf = PARITY((uint8_t)t31);
    zf = t31 == 0u;
    sf = (int32_t)t31 < 0;
    t33 = rd32(esi) | 1u << (ebp & 0x1fu);
    wr32(esi, t33);
    ecx = ebp;
    edx = 1u << (ebp & 0x1fu);
    edi = eax;
    eax = t33;
    goto L_10104f1c;
L_10105183: ;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 6u, 0u, 0u, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 + 4u, t34);
    if (t34 == 0u)
    {
        ecx = t35;
        edx = t36;
        goto L_101051a9;
    }
    eax = t34;
    edx = t36;
    t37 = rd32(esi) | 0x40u;
    wr32(esi, t37);
    ecx = t37;
    edi = eax;
    goto L_10104f1c;
L_101051a9: ;
    if ((rd32(esi) & 2u) != 0u) goto L_1010520d;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t38 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t39 = g->ecx;
    t40 = g->edx;
    if (t38 != 0u)
    {
        edx = t40;
        goto L_1010520d;
    }
    ecx = t39;
    edx = t40;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(edi) * 2u) & 4u;
        edx = (uint32_t)(int8_t)rd8(edi);
    }
    else
    {
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, (uint32_t)(int8_t)rd8(edi));
        g->edx = edx;
        t41 = rd8(edi);
        g->esp = sp0 - 0xcu;
        t42 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), (uint32_t)(int8_t)t41, 3, (uint32_t)(int8_t)t41, 4u, rd32(sp0 - 0x10u));
        t43 = g->ecx;
        t44 = g->edx;
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    if (eax != 0u) goto L_1010520d;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 1u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t46 = g->edx;
    wr32(sp0 + 4u, t45);
    if (t45 == 0u)
    {
        edx = t46;
        goto L_1010520d;
    }
    eax = t45;
    edx = t46;
    t47 = rd32(esi) | 2u;
    wr32(esi, t47);
    ecx = t47;
    edi = eax;
    goto L_10104f1c;
L_1010520d: ;
    if ((rd32(esi) & 0x10u) != 0u)
    {
        ecx = rd32(esi) & 0x10u;
        goto L_10105249;
    }
    ecx = rd32(esi) & 0x10u;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t48 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 != 0u)
    {
        ecx = t49;
        goto L_10105249;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 4u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 + 4u, t51);
    if (t51 == 0u)
    {
        ecx = t52;
        goto L_10105249;
    }
    eax = t51;
    edx = t53;
    t54 = rd32(esi) | 0x10u;
    wr32(esi, t54);
    ecx = t54;
    edi = eax;
    goto L_10104f1c;
L_10105249: ;
    if ((rd32(esi) & 0x80u) != 0u)
    {
        edx = rd32(esi) & 0x80u;
        goto L_10105288;
    }
    edx = rd32(esi) & 0x80u;
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t55 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 7u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t56 = g->ecx;
    t57 = g->edx;
    if (t55 != 0u)
    {
        ecx = t56;
        edx = t57;
        goto L_10105288;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t58 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 7u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 + 4u, t58);
    if (t58 == 0u)
    {
        ecx = t59;
        edx = t60;
        goto L_10105288;
    }
    eax = t58;
    edx = t60;
    t61 = (rd32(esi) & 0xffffff00u) | (uint8_t)(rd32(esi) | 0x80u);
    wr32(esi, t61);
    ecx = t61;
    edi = eax;
    goto L_10104f1c;
L_10105288: ;
    if ((rd32(esi) & 8u) != 0u) goto L_101052c4;
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t62 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 3u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t63 = g->ecx;
    t64 = g->edx;
    if (t62 != 0u)
    {
        edx = t64;
        goto L_101052c4;
    }
    eax = t62;
    ecx = t63;
    edx = t64;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 3u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t65 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 3u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t66 = g->edx;
    wr32(sp0 + 4u, t65);
    if (t65 == 0u)
    {
        edx = t66;
        goto L_101052c4;
    }
    eax = t65;
    edx = t66;
    t67 = rd32(esi) | 8u;
    wr32(esi, t67);
    ecx = t67;
    edi = eax;
    goto L_10104f1c;
L_101052c4: ;
    if ((rd32(esi) & 4u) != 0u)
    {
        ecx = rd32(esi) & 4u;
        goto L_10105300;
    }
    ecx = rd32(esi) & 4u;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t68 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t69 = g->ecx;
    t70 = g->edx;
    if (t68 != 0u)
    {
        ecx = t69;
        goto L_10105300;
    }
    eax = t68;
    ecx = t69;
    edx = t70;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t71 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 2u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 + 4u, t71);
    if (t71 == 0u)
    {
        ecx = t72;
        goto L_10105300;
    }
    eax = t71;
    edx = t73;
    t74 = rd32(esi) | 4u;
    wr32(esi, t74);
    ecx = t74;
    edi = eax;
    goto L_10104f1c;
L_10105300: ;
    if ((rd32(esi) & 0x20u) != 0u)
    {
        edx = rd32(esi) & 0x20u;
        goto L_1010533c;
    }
    edx = rd32(esi) & 0x20u;
    wr32(sp0 - 0x14u, 5u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t75 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 5u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t76 = g->ecx;
    t77 = g->edx;
    if (t75 != 0u)
    {
        ecx = t76;
        edx = t77;
        goto L_1010533c;
    }
    eax = t75;
    ecx = t76;
    edx = t77;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, 5u, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t79 = g->ecx;
    t80 = g->edx;
    wr32(sp0 + 4u, t78);
    if (t78 == 0u)
    {
        ecx = t79;
        edx = t80;
        goto L_1010533c;
    }
    eax = t78;
    edx = t80;
    t81 = rd32(esi) | 0x20u;
    wr32(esi, t81);
    ecx = t81;
    edi = eax;
    goto L_10104f1c;
L_1010533c: ;
    if (rd32(esi) & 1u) goto L_1010547b;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t82 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, 0u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t83 = g->ecx;
    t84 = g->edx;
    if (t82 != 0u)
    {
        ecx = t83;
        goto L_1010547b;
    }
    eax = t82;
    ecx = t83;
    edx = t84;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t85 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, eax, eax, eax, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t86 = g->ecx;
    t87 = g->edx;
    wr32(sp0 + 4u, t85);
    if (t85 == 0u)
    {
        ecx = t86;
        goto L_1010547b;
    }
    eax = t85;
    edx = t87;
    t88 = rd32(esi) | 1u;
    wr32(esi, t88);
    ecx = t88;
    edi = eax;
    goto L_10104f1c;
L_10105381: ;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, edi + 1u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->edx = edi + 1u;
    g->esp = sp0 - 0x10u;
    t89 = cow_cdecl(g, COW_IMG(0x101054d0u), 3, 1u, edi + 1u, sp0 + 4u);
    t90 = g->ecx;
    t91 = g->edx;
    if (t89 == 6u)
    {
        edx = t91;
        goto L_1010546b;
    }
    ecx = t90;
    edx = t91;
    ebp = t89;
    if ((int32_t)ebp < 0) goto L_1010547b;
    if (ebp == 0xbu) goto L_1010547b;
    if (ebp == 0x13u) goto L_1010547b;
    if (ebp == 0x14u) goto L_1010547b;
    if (ebp == 0xcu) goto L_1010547b;
    cf = ebp < 0xcu;
    pf = PARITY((uint8_t)(ebp - 0xcu));
    zf = ebp == 0xcu;
    sf = (int32_t)(ebp - 0xcu) < 0;
    of = ((ebp ^ 0xcu) & (ebp ^ ebp - 0xcu)) >> 0x1fu;
    if ((1u << (ebp & 0x1fu) & rd32(esi)) != 0u)
    {
        ecx = ebp;
        goto L_1010547b;
    }
    ecx = ebp;
    ebx = 1u << (ebp & 0x1fu);
    wr32(sp0 - 0x14u, ebp);
    wr32(sp0 - 0x18u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t92 = cow_call_regs(g, COW_IMG(0x10105fa0u), g->eax, g->ecx, edx, 1, 5, esi, ebp, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t93 = g->ecx;
    t94 = g->edx;
    if (t92 != 0u)
    {
        ecx = t93;
        goto L_1010547b;
    }
    eax = t92;
    ecx = t93;
    edx = t94;
    t95 = (((eax & 0xffffff00u) | rd8(edi) != 0x2du) - 1u & 0x80u) | ebp;
    wr32(sp0 - 0x14u, t95);
    wr32(sp0 - 0x18u, esi);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10104e50u), 5, esi, t95, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t96 = g->ecx;
    t97 = g->edx;
    if (rd8(rd32(sp0 + 4u)) == 0u)
    {
        ecx = t96;
        edx = t97;
        edi = rd32(sp0 + 4u);
        goto L_10105443;
    }
    ecx = t96;
    edx = t97;
    edi = rd32(sp0 + 4u);
L_10105410: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(edi) * 2u) & 8u;
        edx = (uint32_t)(int8_t)rd8(edi);
    }
    else
    {
        wr32(sp0 - 0x14u, 8u);
        wr32(sp0 - 0x18u, (uint32_t)(int8_t)rd8(edi));
        g->edx = edx;
        t98 = rd8(edi);
        g->esp = sp0 - 0xcu;
        t99 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), (uint32_t)(int8_t)t98, 3, (uint32_t)(int8_t)t98, 8u, rd32(sp0 - 0x10u));
        t100 = g->ecx;
        t101 = g->edx;
        eax = t99;
        ecx = t100;
        edx = t101;
    }
    if (eax == 0u) goto L_10105443;
    if (rd8(edi + 1u) != 0u)
    {
        edi = edi + 1u;
        goto L_10105410;
    }
    edi = edi + 1u;
L_10105443: ;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t102 = cow_thiscall_cdecl(g, COW_IMG(0x10105640u), ecx, 7, esi, ebp, 0u, 1u, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 + 4u, t102);
    if (t102 == 0u)
    {
        eax = t102;
        ecx = t103;
        edx = t104;
    }
    else
    {
        eax = t102;
        edx = t104;
        t105 = rd32(esi) | ebx;
        wr32(esi, t105);
        ecx = t105;
        edi = eax;
    }
    goto L_10104f1c;
L_1010546b: ;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, edi + 1u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101055f0u), 3, 1u, edi + 1u, sp0 + 4u);
    t106 = g->ecx;
    ecx = t106;
L_1010547b: ;
    if ((rd32(esi) & 2u) != 0u)
    {
        eax = rd32(esi);
        edx = rd32(esi) & 2u;
        goto L_101054ad;
    }
    eax = rd32(esi);
    edx = rd32(esi) & 2u;
    if ((int16_t)arg3 < 0) goto L_101054ad;
    ecx = (ecx & 0xffff0000u) | (uint16_t)arg3;
    wr16(esi + 0x4eu, rd16(esi + 0x4eu) | 2u);
    wr16(esi + 0x22u, (uint16_t)ecx);
    wr32(esi, eax | 2u);
    wr16(esi + 0x24u, (uint16_t)ecx);
    wr16(esi + 0x26u, 0xffffu);
    g->ebx = in_ebx;
    return eax | 2u;
L_101054ad: ;
    if (edx != 0u)
    {
        if ((int16_t)rd16(esi + 0x22u) > 0)
        {
            wr16(esi + 0x4eu, rd16(esi + 0x4eu) | 2u);
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10104f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10104f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
