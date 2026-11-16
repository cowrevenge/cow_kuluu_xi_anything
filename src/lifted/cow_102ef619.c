/* f_0x102ef619 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ef619(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd8(arg1 + 0x5cu) & 0x40u) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x10u, arg1);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x102f7e44u), in_eax, self, g->edx, 1, 3, arg1, in_edi, in_esi);
        t2 = g->edx;
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    if (rd8(arg1 + 0x113u) == 0u) goto L_102ef747;
    if ((rd8(arg1 + 0x60u) & 2u) == 0u) goto L_102ef747;
    if (rd8(arg1 + 0x114u) == 0u)
    {
        eax = rd8(arg1 + 0x114u);
        goto L_102ef71f;
    }
    eax = rd8(arg1 + 0x114u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef700;
    }
    eax = eax - 1u;
    if (eax == 1u) goto L_102ef6e7;
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef6cc;
    }
    eax = eax - 1u;
    if (eax == 1u) goto L_102ef6af;
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef68d;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102ef749;
    }
    eax = eax - 1u;
    if (rd8(arg1 + 0xd4u) & 1u) goto L_102ef749;
L_102ef681: ;
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102f87d1u), g->eax, ecx, edx, 1, 1, arg1);
    t8 = g->edx;
    edx = t8;
    ebx = in_ebx;
L_102ef9bc: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102ef68d: ;
    if (rd8(arg1 + 0xd4u) & 1u) goto L_102ef6a3;
    if (rd32(arg1 + 0xb8u) >= 2u) goto L_102ef749;
L_102ef6a3: ;
    if (arg3 == 0u) goto L_102ef681;
    wr32(sp0 - 0x10u, 0x55u);
    loc_10 = 0x55u;
L_102ef736: ;
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg3, loc_10, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_102ef681;
L_102ef6af: ;
    t3 = rd32(arg1 + 0xd4u);
    if ((t3 & 3u) == 2u)
    {
        eax = t3;
        ecx = (t3 & 0xffffff00u) | (t3 & 3u);
        goto L_102ef749;
    }
    eax = t3;
    ecx = (t3 & 0xffffff00u) | (t3 & 3u);
    if (arg3 == 0u) goto L_102ef681;
    zf = (eax & 2u) == 0u;
L_102ef72b: ;
    if (zf) goto L_102ef681;
    wr32(sp0 - 0x10u, 0xffu);
    loc_10 = 0xffu;
    goto L_102ef736;
L_102ef6cc: ;
    if ((rd8(arg1 + 0xd4u) & 3u) != 0u) goto L_102ef6de;
    if (rd32(arg1 + 0xb8u) >= 3u) goto L_102ef749;
L_102ef6de: ;
    if (arg3 == 0u) goto L_102ef681;
    wr32(sp0 - 0x10u, 0x33u);
    loc_10 = 0x33u;
    goto L_102ef736;
L_102ef6e7: ;
    t4 = rd32(arg1 + 0xd4u);
    if ((t4 & 7u) == 4u)
    {
        eax = t4;
        ecx = (t4 & 0xffffff00u) | (t4 & 7u);
        goto L_102ef749;
    }
    eax = t4;
    ecx = (t4 & 0xffffff00u) | (t4 & 7u);
    if (arg3 == 0u) goto L_102ef681;
    zf = (eax & 4u) == 0u;
    goto L_102ef72b;
L_102ef700: ;
    if ((rd8(arg1 + 0xd4u) & 7u) != 0u) goto L_102ef712;
    if (rd32(arg1 + 0xb8u) >= 5u) goto L_102ef749;
L_102ef712: ;
    if (arg3 == 0u) goto L_102ef681;
    wr32(sp0 - 0x10u, 0xfu);
    loc_10 = 0xfu;
    goto L_102ef736;
L_102ef71f: ;
    if ((rd8(arg1 + 0xd4u) & 7u) == 0u) goto L_102ef749;
    zf = arg3 == 0u;
    goto L_102ef72b;
L_102ef747: ;
L_102ef749: ;
    if ((rd8(arg1 + 0x58u) & 4u) == 0u)
    {
        wr32(sp0 - 0x10u, COW_IMG(0x10348058u));
        wr32(sp0 - 0x14u, arg1);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x10348058u));
        t9 = g->edx;
        ecx = COW_IMG(0x10348058u);
        edx = t9;
    }
    t10 = rd32(arg1 + 0xdcu);
    wr32(arg1 + 0x70u, t10);
    wr32(sp0 - 0x10u, in_ebx);
    t11 = rd32(arg1 + 0xccu);
    wr32(arg1 + 0x74u, t11);
    eax = t11;
L_102ef772: ;
    if (rd32(arg1 + 0x68u) == 0u)
    {
        if (rd32(arg1 + 0xfcu) == 0u)
        {
L_102ef789: ;
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, arg1);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x102f7fe0u), 5, arg1, 0u, in_ebx, in_edi, in_esi);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x1cu, 4u);
            wr32(sp0 - 0x20u, sp0 + 4u);
            wr32(sp0 - 0x24u, arg1);
            g->ecx = t12;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, t13, 1, 3, arg1, sp0 + 4u, 4u);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp0 - 0x28u, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->ecx = t14;
            g->edx = t15;
            g->esp = sp0 - 0x24u;
            t16 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 + 4u);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(sp0 - 0x2cu, arg1);
            wr32(arg1 + 0xfcu, t16);
            g->ecx = t17;
            g->edx = t18;
            g->esp = sp0 - 0x28u;
            t19 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
            t20 = g->ecx;
            t21 = g->edx;
            wr32(sp0 - 0x30u, 4u);
            wr32(sp0 - 0x34u, arg1 + 0x10cu);
            wr32(sp0 - 0x38u, arg1);
            g->edx = t21;
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x102f7710u), 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 + 4u);
            t22 = g->edx;
            if (rd32(arg1 + 0x10cu) == rd32(COW_IMG(0x10347edcu)))
            {
                eax = COW_IMG(0x10347edcu);
                ecx = rd32(arg1 + 0x10cu);
                edx = t22;
            }
            else
            {
                ecx = rd32(arg1 + 0x10cu);
                edx = t22;
                wr32(sp0 - 0x14u, COW_IMG(0x10348040u));
                wr32(sp0 - 0x18u, arg1);
                g->eax = COW_IMG(0x10347edcu);
                g->esp = sp0 - 0x10u;
                t23 = cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x10348040u));
                t24 = g->edx;
                eax = t23;
                ecx = COW_IMG(0x10348040u);
                edx = t24;
            }
            if (rd32(arg1 + 0xfcu) == 0u) goto L_102ef789;
        }
        t25 = rd32(arg1 + 0xa0u);
        t26 = rd32(arg1 + 0x9cu);
        t27 = rd32(arg1 + 0xfcu);
        t28 = rd32(arg1 + 0xa0u);
        wr32(arg1 + 0x68u, t25);
        wr32(arg1 + 0x64u, t26);
        if (t28 <= t27)
        {
            eax = t25;
            ecx = t26;
            edx = t27;
        }
        else
        {
            eax = t25;
            ecx = t26;
            edx = t27;
            wr32(arg1 + 0x68u, edx);
        }
        t29 = rd32(arg1 + 0x68u);
        wr32(sp0 - 0x14u, t29);
        wr32(sp0 - 0x18u, ecx);
        wr32(sp0 - 0x1cu, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102f7710u), 5, arg1, ecx, t29, in_ebx, in_edi);
        t30 = g->ecx;
        t31 = g->edx;
        t32 = rd32(arg1 + 0x68u);
        wr32(arg1 + 0xfcu, rd32(arg1 + 0xfcu) - t32);
        eax = t32;
        ecx = t30;
        edx = t31;
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, arg1 + 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_cdecl(g, COW_IMG(0x102f7138u), 2, arg1 + 0x64u, 1u);
    t34 = g->edx;
    if (t33 == 1u)
    {
        eax = t33;
        edx = t34;
        goto L_102ef848;
    }
    eax = t33;
    edx = t34;
    if (eax == 0u)
    {
        ecx = 1u;
    }
    else
    {
        if (rd32(arg1 + 0x7cu) != 0u)
        {
            eax = rd32(arg1 + 0x7cu);
        }
        else
        {
            eax = COW_IMG(0x1034802cu);
        }
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t35 = cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, 1u, edx, 1, 2, arg1, eax);
        t36 = g->edx;
        eax = t35;
        ecx = rd32(sp0 - 0x14u);
        edx = t36;
    }
    if (rd32(arg1 + 0x74u) != 0u) goto L_102ef772;
L_102ef86f: ;
    t39 = rd8(arg1 + 0x116u);
    t40 = rd8(arg1 + 0x11au);
    wr8(arg1 + 0xfau, (uint8_t)t40);
    t41 = rd8(arg1 + 0x117u);
    wr8(arg1 + 0xf9u, (uint8_t)t41);
    t42 = rd8(arg1 + 0x119u);
    wr8(arg1 + 0xfbu, (uint8_t)t42);
    wr8(arg1 + 0xf8u, (uint8_t)t39);
    t43 = rd32(arg1 + 0xd0u);
    t44 = rd32(arg1 + 0xd0u);
    wr32(arg1 + 0xf0u, t43);
    t45 = ((uint8_t)t42 * t44 + 7u) >> 3u;
    t46 = rd32(arg1 + 0xdcu);
    wr32(arg1 + 0xf4u, t45);
    wr32(sp0 - 0x14u, rd8(t46));
    t47 = rd32(arg1 + 0xd8u) + 1u;
    wr32(sp0 - 0x18u, t47);
    wr32(sp0 - 0x1cu, t46 + 1u);
    wr32(sp0 - 0x20u, arg1 + 0xf0u);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t47;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f7cc9u), g->eax, g->ecx, edx, 1, 7, arg1, arg1 + 0xf0u, t46 + 1u, t47, rd8(t46), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t48 = g->ecx;
    t49 = g->edx;
    t50 = rd32(arg1 + 0xc8u) + 1u;
    wr32(sp0 - 0x28u, t50);
    t51 = rd32(arg1 + 0xdcu);
    wr32(sp0 - 0x2cu, t51);
    t52 = rd32(arg1 + 0xd8u);
    wr32(sp0 - 0x30u, t52);
    wr32(sp0 - 0x34u, arg1);
    g->eax = t50;
    g->ecx = t48;
    g->edx = t49;
    g->esp = sp0 - 0x1cu;
    t53 = cow_cdecl(g, COW_IMG(0x102f7686u), 6, arg1, t52, t51, t50, arg1, arg1 + 0xf0u);
    t54 = g->ecx;
    t55 = g->edx;
    if (rd32(arg1 + 0x60u) == 0u)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
    }
    else
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        wr32(sp0 - 0x14u, arg1);
        g->ebx = 0u;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t56 = cow_call_regs(g, COW_IMG(0x102f1c49u), g->eax, ecx, edx, 1, 3, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t57 = g->edx;
        eax = t56;
        ecx = arg1;
        edx = t57;
    }
    if (rd8(arg1 + 0x113u) == 0u) goto L_102ef96d;
    if ((rd32(arg1 + 0x60u) & 2u) == 0u)
    {
        eax = rd32(arg1 + 0x60u);
        goto L_102ef96d;
    }
    eax = rd32(arg1 + 0x60u);
    if (rd8(arg1 + 0x114u) >= 6u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x114u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x114u);
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, (uint8_t)ecx);
        t58 = rd32(arg1 + 0xdcu) + 1u;
        wr32(sp0 - 0x1cu, t58);
        wr32(sp0 - 0x20u, arg1 + 0xf0u);
        g->eax = t58;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t59 = cow_cdecl(g, COW_IMG(0x102f7a00u), 4, arg1 + 0xf0u, t58, (uint8_t)ecx, eax);
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
    }
    if (arg3 != 0u)
    {
        t62 = rd32(COW_IMG(0x10347eb8u) + rd8(arg1 + 0x114u) * 4u);
        wr32(sp0 - 0x14u, t62);
        wr32(sp0 - 0x18u, arg3);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = rd8(arg1 + 0x114u);
        g->ecx = ecx;
        g->edx = edx;
        t63 = rd8(arg1 + 0x114u);
        g->esp = sp0 - 8u;
        t64 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg3, t62, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t65 = g->ecx;
        t66 = g->edx;
        eax = t64;
        ecx = t65;
        edx = t66;
    }
    if (arg2 == 0u) goto L_102ef996;
    t67 = rd32(COW_IMG(0x10347e9cu) + rd8(arg1 + 0x114u) * 4u);
    wr32(sp0 - 0x14u, t67);
    wr32(sp0 - 0x18u, arg2);
    eax = rd8(arg1 + 0x114u);
    loc_18 = arg2;
    loc_14 = t67;
L_102ef98d: ;
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t71 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, loc_18, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
L_102ef996: ;
    wr32(sp0 - 0x14u, arg1);
    g->ebx = 0u;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x102f87d1u), g->eax, ecx, edx, 1, 5, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t74 = g->edx;
    if (rd32(arg1 + 0x16cu) == 0u)
    {
        edx = t74;
        ebx = rd32(sp0 - 0x10u);
    }
    else
    {
        eax = rd32(arg1 + 0x16cu);
        edx = t74;
        ebx = rd32(sp0 - 0x10u);
        t75 = rd8(arg1 + 0x114u);
        wr32(sp0 - 0x10u, t75);
        t76 = rd32(arg1 + 0xd4u);
        wr32(sp0 - 0x14u, t76);
        wr32(sp0 - 0x18u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, eax, t75, 3, arg1, t76, t75);
        t77 = g->edx;
        edx = t77;
    }
    goto L_102ef9bc;
L_102ef848: ;
    if (rd32(arg1 + 0x74u) != 0u) goto L_102ef85a;
    if (rd32(arg1 + 0x68u) != 0u) goto L_102ef85a;
    if (rd32(arg1 + 0xfcu) == 0u)
    {
        ecx = 1u;
        goto L_102ef867;
    }
L_102ef85a: ;
    wr32(sp0 - 0x14u, COW_IMG(0x10348014u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t37 = cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, 1u, edx, 1, 2, arg1, COW_IMG(0x10348014u));
    t38 = g->edx;
    eax = t37;
    ecx = COW_IMG(0x10348014u);
    edx = t38;
L_102ef867: ;
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
    wr32(arg1 + 0x5cu, rd32(arg1 + 0x5cu) | 0x20u);
    goto L_102ef86f;
L_102ef96d: ;
    if (arg2 != 0u)
    {
        wr32(sp0 - 0x14u, 0xffu);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t68 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg2, 0xffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t69 = g->ecx;
        t70 = g->edx;
        eax = t68;
        ecx = t69;
        edx = t70;
    }
    if (arg3 == 0u) goto L_102ef996;
    wr32(sp0 - 0x14u, 0xffu);
    wr32(sp0 - 0x18u, arg3);
    loc_18 = arg3;
    loc_14 = 0xffu;
    goto L_102ef98d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef619(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ef619(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
