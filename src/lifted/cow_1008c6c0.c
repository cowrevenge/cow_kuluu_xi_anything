/* f_0x1008c6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1008c6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x120u) >> 3u & 1u)
    {
        eax = rd32(self + 0x120u) >> 3u;
        goto L_1008cc22;
    }
    eax = rd32(self + 0x120u) >> 3u;
    if (rd32(self + 0xa0u) == 0u)
    {
        edx = in_edx;
        goto L_1008c6eb;
    }
    ecx = rd32(self + 0xa0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1008cc22;
    }
    edx = t2;
L_1008c6eb: ;
    if (arg1 - 1u > 0x3du) goto L_1008c832;
    t3 = rd32(COW_IMG(0x1008cc28u) + rd8(COW_IMG(0x1008cc34u) + arg1 - 1u) * 4u);
    switch (t3 - RD)
    {
    case 0x1008c711u: goto L_1008c711;
    case 0x1008c804u: goto L_1008c804;
    case 0x1008c832u: goto L_1008c832;
    default: rt_fatal(g, COW_IMG(0x1008c70au), "switch");
    }
    return 0;
L_1008c711: ;
    if (rd32(self + 0xa0u) != 0u)
    {
        ecx = rd32(self + 0xa0u);
        if (rd8(self + 0xeeu) != 3u)
        {
            eax = (arg1 - 1u & 0xffffff00u) | rd8(self + 0xeeu);
            if ((uint8_t)eax != 4u)
            {
                if ((uint8_t)eax != 5u)
                {
                    g->edx = rd32(ecx);
                    t6 = rd32(ecx);
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(t6 + 0x29cu), ecx, 2, 0x30687366u, ecx);
                    t7 = g->edx;
                    t8 = rd32(self + 0xa0u);
                    g->eax = rd32(t8);
                    t9 = rd32(t8);
                    t10 = cow_thiscall(g, rd32(t9 + 0x29cu), t8, 2, 0x31687366u, t8);
                    t11 = rd32(self + 0xa0u);
                    g->edx = rd32(t11);
                    t12 = rd32(t11);
                    cow_thiscall(g, rd32(t12 + 0x29cu), t11, 2, 0x32687366u, t11);
                    t13 = g->edx;
                    t14 = rd32(self + 0xa0u);
                    g->eax = rd32(t14);
                    t15 = rd32(t14);
                    t16 = cow_thiscall(g, rd32(t15 + 0x29cu), t14, 2, 0x33687366u, t14);
                    t17 = rd32(self + 0xa0u);
                    g->edx = rd32(t17);
                    t18 = rd32(t17);
                    cow_thiscall(g, rd32(t18 + 0x29cu), t17, 2, 0x34687366u, t17);
                    t19 = g->edx;
                    t20 = rd32(self + 0xa0u);
                    g->eax = rd32(t20);
                    t21 = rd32(t20);
                    t22 = cow_thiscall(g, rd32(t21 + 0x29cu), t20, 2, 0x35687366u, t20);
                    t23 = rd32(self + 0xa0u);
                    g->edx = rd32(t23);
                    t24 = rd32(t23);
                    cow_thiscall(g, rd32(t24 + 0x29cu), t23, 2, 0x36687366u, t23);
                    t25 = g->edx;
                    t26 = rd32(self + 0xa0u);
                    g->eax = rd32(t26);
                    t27 = rd32(t26);
                    t28 = cow_thiscall(g, rd32(t27 + 0x29cu), t26, 2, 0x37687366u, t26);
                    t29 = rd32(self + 0xa0u);
                    g->edx = rd32(t29);
                    t30 = rd32(t29);
                    cow_thiscall(g, rd32(t30 + 0x29cu), t29, 2, 0x38687366u, t29);
                    t31 = g->edx;
                    t32 = rd32(self + 0xa0u);
                    g->edx = t31;
                    cow_thiscall(g, rd32(rd32(t32) + 0x29cu), t32, 2, 0x39687366u, t32);
                    t33 = g->edx;
                    edx = t33;
                }
            }
        }
    }
L_1008c896: ;
    if (rd32(self + 0x170u) - 1u > 0x3du)
    {
        eax = rd32(self + 0x170u);
        goto L_1008cb5d;
    }
    eax = rd32(self + 0x170u);
    ecx = rd32(self + 0x170u) - 1u;
    t47 = rd32(COW_IMG(0x1008cc74u) + rd8(COW_IMG(0x1008cc9cu) + ecx) * 4u);
    switch (t47 - RD)
    {
    case 0x1008c8b7u: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008c8b7;
    case 0x1008c916u: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008c916;
    case 0x1008c93fu: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008c93f;
    case 0x1008c968u: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008c968;
    case 0x1008c98fu: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008c98f;
    case 0x1008c9c7u: goto L_1008c9c7;
    case 0x1008ca11u: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008ca11;
    case 0x1008cadau: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008cada;
    case 0x1008cb5du: edx = rd8(COW_IMG(0x1008cc9cu) + ecx); goto L_1008cb5d;
    case 0x1008cc20u: goto L_1008cc20;
    default: rt_fatal(g, COW_IMG(0x1008c8b0u), "switch");
    }
    return 0;
L_1008c804: ;
    if (rd32(self + 0xa0u) != 0u)
    {
        ecx = rd32(self + 0xa0u);
        if (rd8(self + 0xeeu) == 2u)
        {
            eax = (arg1 - 1u & 0xffffff00u) | rd8(self + 0xeeu);
            goto L_1008c820;
        }
        eax = (arg1 - 1u & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax != 7u) goto L_1008c896;
L_1008c820: ;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t4 + 0x298u), ecx, 3, 0x6e6f7462u, ecx, 0u);
        t5 = g->edx;
        edx = t5;
    }
    goto L_1008c896;
L_1008c832: ;
    g->eax = arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, arg1);
    t35 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        eax = t34;
        edx = t35;
        goto L_1008c84a;
    }
    eax = t34;
    edx = t35;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, arg1);
    t37 = g->edx;
    if ((uint8_t)t36 == 0u)
    {
        edx = t37;
        goto L_1008c896;
    }
    eax = t36;
    edx = t37;
L_1008c84a: ;
    if (rd8(self + 0xeeu) != 2u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t38 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
    g->ebx = 3u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall(g, COW_IMG(0x1009ab30u), self, 0);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, arg1);
    t43 = g->edx;
    if ((uint8_t)t42 == 0u)
    {
        edx = t43;
    }
    else
    {
        eax = t42;
        edx = t43;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t44 = cow_thiscall(g, COW_IMG(0x100d5ef0u), rd32(self + 0xa0u), 1, 0u);
        t45 = g->edx;
        g->edx = t45;
        cow_thiscall(g, COW_IMG(0x100d60e0u), rd32(self + 0xa0u), 2, 2u, 0u);
        t46 = g->edx;
        wr8(rd32(self + 0xa0u) + 0xb2u, rd8(rd32(self + 0xa0u) + 0xb2u) & 0xbfu);
        edx = t46;
    }
    goto L_1008c896;
L_1008c8b7: ;
    if (rd32(self + 0xa0u) == 0u)
    {
        eax = rd32(self + 0xa0u);
        goto L_1008cc20;
    }
    eax = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) != 5u) goto L_1008cc20;
    if ((int8_t)rd8(self + 0x120u) >= 0) goto L_1008c8f7;
    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
    if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008c8f7;
    g->eax = 0u;
    g->esp = sp0 - 0xcu;
    t69 = cow_thiscall(g, COW_IMG(0x10097a80u), self, 1, 0u);
    g->ebx = in_ebx;
    return (t69 & 0xffffff00u) | 1u;
L_1008c8f7: ;
    t70 = rd32(self + 0x184u) * 0x3cu;
    g->eax = t70;
    g->esp = sp0 - 0xcu;
    t71 = cow_thiscall(g, COW_IMG(0x10097a80u), self, 1, t70);
    g->ebx = in_ebx;
    return (t71 & 0xffffff00u) | 1u;
L_1008c916: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) != 3u) goto L_1008cc20;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t68 = cow_thiscall(g, COW_IMG(0x100ad1e0u), ecx, 1, 1u);
    g->ebx = in_ebx;
    return (t68 & 0xffffff00u) | 1u;
L_1008c93f: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) != 3u) goto L_1008cc20;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t67 = cow_thiscall(g, COW_IMG(0x100ad1e0u), ecx, 1, 0u);
    g->ebx = in_ebx;
    return (t67 & 0xffffff00u) | 1u;
L_1008c968: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) != 3u) goto L_1008cc20;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t66 = cow_thiscall(g, COW_IMG(0x100ad270u), ecx, 0);
    g->ebx = in_ebx;
    return (t66 & 0xffffff00u) | 1u;
L_1008c98f: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) == 2u) goto L_1008c9af;
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax != 7u) goto L_1008cc20;
L_1008c9af: ;
    g->eax = rd32(ecx);
    t64 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t65 = cow_thiscall(g, rd32(t64 + 0x298u), ecx, 3, 0x626f746eu, ecx, 0u);
    g->ebx = in_ebx;
    return (t65 & 0xffffff00u) | 1u;
L_1008c9c7: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (arg1 != 0u) goto L_1008cc20;
    g->edx = rd32(ecx);
    t58 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t58 + 0x29cu), ecx, 2, 0x65746e69u, ecx);
    t59 = g->edx;
    t60 = rd32(self + 0xa0u);
    g->eax = rd32(t60);
    t61 = rd32(t60);
    t62 = cow_thiscall(g, rd32(t61 + 0x29cu), t60, 2, 0x6e6f7465u, t60);
    t63 = rd32(self + 0xa0u);
    eax = t62;
    ecx = t63;
    loc_10 = arg1;
    loc_14 = t63;
    loc_18 = 0x656f746eu;
L_1008cc08: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, loc_18, loc_14, loc_10);
L_1008cc10: ;
    t82 = rd32(self + 0xa0u);
    wr32(t82 + 0x7d8u, 0x20202020u);
    eax = t82;
L_1008cc20: ;
L_1008cc22: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_1008ca11: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) == 3u) goto L_1008cc20;
    edx = (edx & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)edx == 4u) goto L_1008cc20;
    if ((uint8_t)edx == 5u) goto L_1008cc20;
    if (eax == 6u) goto L_1008ca4e;
    if (eax == 0x32u) goto L_1008ca4e;
    if (eax != 0x38u) goto L_1008ca73;
L_1008ca4e: ;
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u) goto L_1008ca73;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t51 = cow_thiscall(g, COW_IMG(0x100d65b0u), ecx, 1, 1u);
    if ((uint8_t)t51 != 0u) goto L_1008ca73;
    eax = t51;
    wr32(self + 0x170u, arg1);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_1008ca73: ;
    t52 = rd32(self + 0xa0u);
    t53 = rd32(COW_IMG(0x1032d498u) + rd32(self + 0x170u) * 4u);
    g->eax = t53;
    g->esp = sp0 - 0xcu;
    t54 = cow_thiscall(g, rd32(rd32(t52) + 0x298u), t52, 3, t53, t52, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    if (rd32(self + 0xa4u) == 0u)
    {
        eax = t54;
        goto L_1008cc20;
    }
    edi = rd32(self + 0xa4u);
    t55 = rd32(COW_IMG(0x1032d498u) + rd32(self + 0x170u) * 4u);
    g->eax = rd32(self + 0x170u);
    t56 = rd32(self + 0x170u);
    g->esp = sp0 - 0xcu;
    t57 = cow_thiscall(g, rd32(rd32(edi) + 0x298u), edi, 3, t55, edi, 0u);
    wr32(edi + 0x7d8u, 0x20202020u);
    g->ebx = in_ebx;
    return (t57 & 0xffffff00u) | 1u;
L_1008cada: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008cc20;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u) goto L_1008cc20;
    if ((uint8_t)eax == 5u) goto L_1008cc20;
    if (rd8(self + 0x12fu) & 1u) goto L_1008cb35;
    if (rd32(self + 0x12cu) >> 0x16u & 1u)
    {
        edx = rd32(self + 0x12cu) >> 0x16u;
        goto L_1008cb35;
    }
    t48 = rd32(COW_IMG(0x1032d5f0u) + (rd32(self + 0x130u) >> 5u & 3u) * 4u);
    edx = t48;
    loc_14 = ecx;
    loc_18 = t48;
L_1008cb3d: ;
    g->eax = rd32(ecx);
    t49 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t50 = cow_thiscall(g, rd32(t49 + 0x298u), ecx, 3, loc_18, loc_14, 0u);
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    g->ebx = in_ebx;
    return (t50 & 0xffffff00u) | 1u;
L_1008cb35: ;
    loc_14 = ecx;
    loc_18 = 0x70656473u;
    goto L_1008cb3d;
L_1008cb5d: ;
    if (eax == 4u) goto L_1008cbc9;
    if (eax == 0u) goto L_1008cbc9;
    if (eax == 7u) goto L_1008cbc9;
    if (eax == 0x21u) goto L_1008cbc9;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t72 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, eax);
    if ((uint8_t)t72 != 0u)
    {
        eax = t72;
        goto L_1008cbc9;
    }
    eax = t72;
    t73 = rd32(self + 0x170u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t74 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, t73);
    if ((uint8_t)t74 != 0u)
    {
        eax = t74;
        goto L_1008cbc9;
    }
    eax = t74;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (rd8(self + 0xeeu) == 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008cc20;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u) goto L_1008cc20;
    if ((uint8_t)eax == 5u) goto L_1008cc20;
    t75 = rd32(COW_IMG(0x1032d498u) + rd32(self + 0x170u) * 4u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(ecx) + 0x298u), ecx, 3, t75, ecx, 0u);
    goto L_1008cc10;
L_1008cbc9: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008cc20;
    ecx = rd32(self + 0xa0u);
    if (arg1 != 0x22u) goto L_1008cc20;
    g->edx = rd32(ecx);
    t76 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t76 + 0x29cu), ecx, 2, 0x65746e69u, ecx);
    t77 = g->edx;
    t78 = rd32(self + 0xa0u);
    g->eax = rd32(t78);
    t79 = rd32(t78);
    t80 = cow_thiscall(g, rd32(t79 + 0x29cu), t78, 2, 0x656f746eu, t78);
    t81 = rd32(self + 0xa0u);
    eax = t80;
    ecx = t81;
    loc_10 = 0u;
    loc_14 = t81;
    loc_18 = 0x6e6f7465u;
    goto L_1008cc08;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008c6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008c6c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
