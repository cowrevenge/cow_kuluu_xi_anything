/* f_0x100c1190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100c1190(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u) goto L_100c11a1;
    return 0u;
L_100c11a1: ;
    wr32(self + 4u, arg1);
    wr32(self, 1u);
    wr32(self + 0x700u, arg1 + 0x621u);
    wr32(self + 0x704u, arg1 + 5u);
    wr8(self + 0x110u, 0u);
    wr32(self + 0x6f0u, 0u);
    wr32(COW_IMG(0x10480a94u), 0xffffffffu);
    wr32(COW_IMG(0x10480a98u), 0xffffffffu);
    wr32(COW_IMG(0x10480a9cu), 0xffffffffu);
    wr32(COW_IMG(0x10480aa0u), 0xffffffffu);
    wr32(self + 0xcu, 0u);
    eax = 0xc64u;
L_100c11f4: ;
    t1 = eax + rd32(self + 4u);
    wr32(eax + self - 0xc14u, t1);
    if ((int32_t)(eax + 4u) < 3332)
    {
        eax = eax + 4u;
        goto L_100c11f4;
    }
    eax = 0xc50u;
L_100c120f: ;
    t2 = eax + rd32(self + 4u);
    wr32(eax + self - 0xb60u, t2);
    if ((int32_t)(eax + 4u) < 3172)
    {
        eax = eax + 4u;
        goto L_100c120f;
    }
    eax = self + 0x104u;
    ecx = 3u;
L_100c1230: ;
    wr32(eax, eax + 0x5f0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_100c1230;
    }
    wr32(self + 0x10u, COW_IMG(0x103d3c84u));
    wr32(self + 0x14u, COW_IMG(0x103d3c84u));
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_100c1327;
    }
    eax = rd32(self + 4u);
    edx = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xbfeu) * 4u);
    if (rd16(edx + 0x210u) == 0u)
    {
        edx = edx + 0x7cu;
    }
    else
    {
        edx = edx + 0x214u;
    }
    wr32(self + 0x10u, edx);
    t3 = rd16(eax + 0xbfeu);
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x1008aa60u), 1, t3);
    t5 = -(t4 != 0u) + 1u;
    t6 = rd32(self + 4u);
    wr32(self + 0x18u, t5);
    if ((rd32(rd32(COW_IMG(0x10480af0u) + rd16(t6 + 0xbfeu) * 4u) + 0x78u) & 0xff000000u) != 0u)
    {
        eax = rd16(t6 + 0xbfeu);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(t6 + 0xbfeu) * 4u);
        edx = t6;
        goto L_100c12c8;
    }
    wr32(self + 0x20u, 1u);
    wr32(self + 0x28u, 1u);
    wr32(self + 0x30u, 1u);
    wr32(self + 0x48u, 0u);
L_100c13b6: ;
    t38 = rd16(rd32(self + 4u) + 0xbfeu);
    g->edx = t38;
    g->esp = sp0 - 0xcu;
    t39 = cow_cdecl(g, COW_IMG(0x1008aab0u), 1, t38);
    t40 = g->edx;
    wr32(self + 0x38u, t39);
    t41 = rd16(rd32(self + 4u) + 0xbfeu);
    t42 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    t43 = cow_cdecl(g, COW_IMG(0x1008ab00u), 1, t41);
    wr32(self + 0x40u, t43);
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_100c14bb;
    }
    eax = rd32(self + 4u);
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 4u) + 0xc00u) * 4u);
    edx = rd16(rd32(self + 4u) + 0xc00u);
    if (rd16(ecx + 0x210u) == 0u)
    {
        ecx = ecx + 0x7cu;
    }
    else
    {
        ecx = ecx + 0x214u;
    }
    wr32(self + 0x14u, ecx);
    t44 = rd16(eax + 0xc00u);
    g->esp = sp0 - 0xcu;
    t45 = cow_cdecl(g, COW_IMG(0x1008aa60u), 1, t44);
    t46 = -(t45 != 0u) + 1u;
    t47 = rd32(self + 4u);
    wr32(self + 0x1cu, t46);
    if ((rd32(rd32(COW_IMG(0x10480af0u) + rd16(t47 + 0xc00u) * 4u) + 0x78u) & 0xff000000u) != 0u)
    {
        eax = rd16(t47 + 0xc00u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(t47 + 0xc00u) * 4u);
        edx = t47;
        goto L_100c145c;
    }
    wr32(self + 0x24u, 1u);
    wr32(self + 0x2cu, 1u);
    wr32(self + 0x34u, 1u);
    wr32(self + 0x4cu, 0u);
L_100c154b: ;
    t79 = rd16(rd32(self + 4u) + 0xc00u);
    g->edx = t79;
    g->esp = sp0 - 0xcu;
    t80 = cow_cdecl(g, COW_IMG(0x1008aab0u), 1, t79);
    t81 = g->edx;
    wr32(self + 0x3cu, t80);
    t82 = rd16(rd32(self + 4u) + 0xc00u);
    t83 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    t84 = cow_cdecl(g, COW_IMG(0x1008ab00u), 1, t82);
    wr32(self + 0x44u, t84);
    t85 = ~(rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x124u) >> 0x19u) & 1u;
    wr32(self + 0x6f4u, t85);
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = t84;
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        goto L_100c15b6;
    }
    eax = t84;
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    if (ecx == 2u) goto L_100c15b2;
    if (ecx != 3u)
    {
        cf = ecx < 3u;
        zf = ecx == 3u;
        goto L_100c15b9;
    }
L_100c15b2: ;
    ecx = 1u;
L_100c15bb: ;
    t86 = rd32(COW_IMG(0x100c1600u) + ecx * 4u);
    switch (t86 - RD)
    {
    case 0x100c15c2u: goto L_100c15c2;
    case 0x100c15e2u: goto L_100c15e2;
    default: rt_fatal(g, COW_IMG(0x100c15bbu), "switch");
    }
    return 0;
L_100c12c8: ;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x1008aa10u), 1, eax);
    t8 = g->ecx;
    t9 = rd32(self + 4u);
    wr32(self + 0x20u, t7 != 0u);
    t10 = rd16(t9 + 0xbfeu);
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x1008ab90u), 1, t10);
    t12 = rd32(self + 4u);
    wr32(self + 0x28u, t11 != 0u);
    t13 = rd16(t12 + 0xbfeu);
    g->edx = t13;
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x1008abc0u), 1, t13);
    t15 = g->edx;
    wr32(self + 0x30u, t14 != 0u);
    t16 = rd16(rd32(self + 4u) + 0xbfeu);
    t17 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    t18 = cow_cdecl(g, COW_IMG(0x1008ab50u), 1, t16);
    eax = t18;
L_100c13ac: ;
    t37 = -(eax != 0u) + 2u;
    wr32(self + 0x48u, t37);
    goto L_100c13b6;
L_100c1327: ;
    wr32(self + 0x10u, eax + 0x1104u);
    t19 = rd16(eax + 0xbfeu);
    g->ecx = t19;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x1008aa60u), 1, t19);
    t21 = g->ecx;
    t22 = -(t20 != 0u) + 1u;
    t23 = rd32(self + 4u);
    wr32(self + 0x18u, t22);
    t24 = rd16(t23 + 0xbfeu);
    g->esp = sp0 - 0x10u;
    t25 = cow_cdecl(g, COW_IMG(0x1008aa10u), 1, t24);
    t26 = rd32(self + 4u);
    wr32(self + 0x20u, t25 != 0u);
    t27 = rd16(t26 + 0xbfeu);
    g->edx = t27;
    g->esp = sp0 - 0x14u;
    t28 = cow_cdecl(g, COW_IMG(0x1008ab90u), 1, t27);
    t29 = g->edx;
    wr32(self + 0x28u, t28 != 0u);
    t30 = rd16(rd32(self + 4u) + 0xbfeu);
    g->ecx = t30;
    t31 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    t32 = cow_cdecl(g, COW_IMG(0x1008abc0u), 1, t30);
    t33 = g->ecx;
    t34 = rd32(self + 4u);
    wr32(self + 0x30u, t32 != 0u);
    t35 = rd16(t34 + 0xbfeu);
    g->esp = sp0 - 0x1cu;
    t36 = cow_cdecl(g, COW_IMG(0x1008ab50u), 1, t35);
    eax = t36;
    goto L_100c13ac;
L_100c145c: ;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t48 = cow_cdecl(g, COW_IMG(0x1008aa10u), 1, eax);
    t49 = g->ecx;
    t50 = rd32(self + 4u);
    wr32(self + 0x24u, t48 != 0u);
    t51 = rd16(t50 + 0xc00u);
    g->esp = sp0 - 0x10u;
    t52 = cow_cdecl(g, COW_IMG(0x1008ab90u), 1, t51);
    t53 = rd32(self + 4u);
    wr32(self + 0x2cu, t52 != 0u);
    t54 = rd16(t53 + 0xc00u);
    g->edx = t54;
    g->esp = sp0 - 0x14u;
    t55 = cow_cdecl(g, COW_IMG(0x1008abc0u), 1, t54);
    t56 = g->edx;
    wr32(self + 0x34u, t55 != 0u);
    t57 = rd16(rd32(self + 4u) + 0xc00u);
    t58 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    t59 = cow_cdecl(g, COW_IMG(0x1008ab50u), 1, t57);
    eax = t59;
L_100c1541: ;
    t78 = -(eax != 0u) + 2u;
    wr32(self + 0x4cu, t78);
    goto L_100c154b;
L_100c14bb: ;
    wr32(self + 0x14u, eax + 0x1204u);
    t60 = rd16(eax + 0xc00u);
    g->ecx = t60;
    g->esp = sp0 - 0xcu;
    t61 = cow_cdecl(g, COW_IMG(0x1008aa60u), 1, t60);
    t62 = g->ecx;
    t63 = -(t61 != 0u) + 1u;
    t64 = rd32(self + 4u);
    wr32(self + 0x1cu, t63);
    t65 = rd16(t64 + 0xc00u);
    g->esp = sp0 - 0x10u;
    t66 = cow_cdecl(g, COW_IMG(0x1008aa10u), 1, t65);
    t67 = rd32(self + 4u);
    wr32(self + 0x24u, t66 != 0u);
    t68 = rd16(t67 + 0xc00u);
    g->edx = t68;
    g->esp = sp0 - 0x14u;
    t69 = cow_cdecl(g, COW_IMG(0x1008ab90u), 1, t68);
    t70 = g->edx;
    wr32(self + 0x2cu, t69 != 0u);
    t71 = rd16(rd32(self + 4u) + 0xc00u);
    g->ecx = t71;
    t72 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    t73 = cow_cdecl(g, COW_IMG(0x1008abc0u), 1, t71);
    t74 = g->ecx;
    t75 = rd32(self + 4u);
    wr32(self + 0x34u, t73 != 0u);
    t76 = rd16(t75 + 0xc00u);
    g->esp = sp0 - 0x1cu;
    t77 = cow_cdecl(g, COW_IMG(0x1008ab50u), 1, t76);
    eax = t77;
    goto L_100c1541;
L_100c15b6: ;
    cf = ecx < 3u;
    zf = ecx == 3u;
L_100c15b9: ;
    if (!cf && !zf) goto L_100c15f1;
    goto L_100c15bb;
L_100c15c2: ;
    t88 = rd32(self + 0x3cu);
    t89 = rd32(self + 0x38u);
    wr32(self + 0x6fcu, t88);
    wr32(self + 0x6f8u, t89);
    wr8(self + 0x6ecu, 0u);
    return 1u;
L_100c15e2: ;
    t87 = rd32(self + 0x40u);
    wr32(self + 0x6fcu, eax);
    wr32(self + 0x6f8u, t87);
L_100c15f1: ;
    wr8(self + 0x6ecu, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c1190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c1190(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
