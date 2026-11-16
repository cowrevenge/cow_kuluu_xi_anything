/* f_0x100b0a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b0a00(Guest* g)
{
    double d11;
    double d14;
    double d31;
    double d41;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t42;
    uint32_t t43;
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
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = (in_edx & 0xffff0000u) | rd16(self + 0x256u);
    if (rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u) > 0x15u) goto L_100b1081;
    eax = (uint16_t)t1 + rd32(self + 0x20u);
    ecx = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    edx = t1;
    t2 = rd32(COW_IMG(0x100b1090u) + ecx * 4u);
    switch (t2 - RD)
    {
    case 0x100b0a30u: goto L_100b0a30;
    case 0x100b0a55u: goto L_100b0a55;
    case 0x100b0ab0u: goto L_100b0ab0;
    case 0x100b0b16u: goto L_100b0b16;
    case 0x100b0b94u: goto L_100b0b94;
    case 0x100b0c40u: goto L_100b0c40;
    case 0x100b0c4au: goto L_100b0c4a;
    case 0x100b0ccau: goto L_100b0cca;
    case 0x100b0d66u: goto L_100b0d66;
    case 0x100b0daau: goto L_100b0daa;
    case 0x100b0db4u: goto L_100b0db4;
    case 0x100b0dfcu: goto L_100b0dfc;
    case 0x100b0e40u: goto L_100b0e40;
    case 0x100b0e65u: goto L_100b0e65;
    case 0x100b0eadu: goto L_100b0ead;
    case 0x100b0ecdu: goto L_100b0ecd;
    case 0x100b0eedu: goto L_100b0eed;
    case 0x100b0f2bu: goto L_100b0f2b;
    case 0x100b0f50u: goto L_100b0f50;
    case 0x100b0f8eu: goto L_100b0f8e;
    case 0x100b0fb3u: goto L_100b0fb3;
    case 0x100b1062u: goto L_100b1062;
    default: rt_fatal(g, COW_IMG(0x100b0a29u), "switch");
    }
    return;
L_100b0a30: ;
    t84 = rd32(eax + 4u);
    wr32(sp0 - 0x10u, t84);
    t85 = rd32(eax + 8u);
    wr32(sp0 - 0xcu, t85);
    t86 = rd32(eax + 0xcu);
    wr32(sp0 - 8u, t86);
    t87 = rd32(eax + 0x10u);
    wr32(sp0 - 4u, t87);
    wr8(sp0 - 1u, 0u);
    eax = t87;
    edx = t86;
L_100b0a8c: ;
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x34u, 2u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, sp0 - 0x10u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x14u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
L_100b0a55: ;
    t80 = rd32(eax + 4u);
    wr32(sp0 - 0x10u, t80);
    t81 = rd32(eax + 8u);
    wr32(sp0 - 0xcu, t81);
    t82 = rd32(eax + 0xcu);
    wr32(sp0 - 8u, t82);
    t83 = rd32(eax + 0x10u);
    wr32(sp0 - 4u, t83);
    wr8(sp0 - 1u, 0u);
    eax = 0u;
    edx = t82;
L_100b0a7a: ;
    if (rd8(eax + sp0 - 0x10u) == 0x40u)
    {
        wr8(eax + sp0 - 0x10u, 0x20u);
    }
    if ((int32_t)(eax + 1u) < 15)
    {
        eax = eax + 1u;
        goto L_100b0a7a;
    }
    eax = eax + 1u;
    goto L_100b0a8c;
L_100b0ab0: ;
    wr32(sp0 - 0x30u, 4u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t75 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    if ((int16_t)t75 < 0) goto L_100b0ac4;
    eax = t75;
    if ((int16_t)eax < 4) goto L_100b0ac6;
L_100b0ac4: ;
    eax = 0u;
L_100b0ac6: ;
    t76 = rd32(COW_IMG(0x104882b8u) + (uint32_t)(int16_t)eax * 0x100u);
    wr32(sp0 - 0x10u, t76);
    t77 = rd32(COW_IMG(0x104882bcu) + (uint32_t)(int16_t)eax * 0x100u);
    wr32(sp0 - 0xcu, t77);
    t78 = rd32(COW_IMG(0x104882c0u) + (uint32_t)(int16_t)eax * 0x100u);
    wr32(sp0 - 8u, t78);
    t79 = rd32(COW_IMG(0x104882c4u) + (uint32_t)(int16_t)eax * 0x100u);
    wr32(sp0 - 4u, t79);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x34u, 2u);
    wr8(sp0 - 1u, 0u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, sp0 - 0x10u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0b16: ;
    wr32(sp0 - 0x30u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t64 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t65 = g->edx;
    if ((int16_t)t64 < 0)
    {
        eax = t64;
        edx = t65;
        goto L_100b0b2c;
    }
    eax = t64;
    edx = t65;
    edi = t64;
    if ((int16_t)edi < 4) goto L_100b0b2e;
L_100b0b2c: ;
    edi = 0u;
L_100b0b2e: ;
    wr32(sp0 - 0x30u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t66 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
    t67 = COW_IMG(0x10488d08u) + (uint32_t)(int16_t)edi * 0x100u;
    wr32(t67, rd32(t66));
    t68 = rd32(t66 + 4u);
    wr32(t67 + 4u, t68);
    t69 = rd32(t66 + 8u);
    wr32(t67 + 8u, t69);
    t70 = rd32(t66 + 0xcu);
    wr32(t67 + 0xcu, t70);
    wr8(COW_IMG(0x10488d17u) + (uint32_t)(int16_t)edi * 0x100u, 0u);
    t71 = rd32(sp0 - 0x2cu);
    wr32(COW_IMG(0x104882b8u) + (uint32_t)(int16_t)edi * 0x100u, rd32(t67));
    t72 = rd32(t67 + 4u);
    wr32(COW_IMG(0x104882bcu) + (uint32_t)(int16_t)edi * 0x100u, t72);
    t73 = rd32(t67 + 8u);
    t74 = rd32(t67 + 0xcu);
    wr32(COW_IMG(0x104882c0u) + (uint32_t)(int16_t)edi * 0x100u, t73);
    wr32(COW_IMG(0x104882c4u) + (uint32_t)(int16_t)edi * 0x100u, t74);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t71;
    return;
L_100b0b94: ;
    wr32(sp0 - 0x30u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t53 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t54 = g->edx;
    if ((int16_t)t53 >= 0)
    {
        eax = t53;
        edx = t54;
        ebx = t53;
        if ((int16_t)ebx <= 100)
        {
            wr32(sp0 - 0x30u, 2u);
            g->eax = eax;
            g->esp = sp0 - 0x2cu;
            t55 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
            wr32(sp0 - 0x10u, rd32(t55));
            t56 = rd32(t55 + 4u);
            wr32(sp0 - 0xcu, t56);
            t57 = rd32(t55 + 8u);
            wr32(sp0 - 8u, t57);
            t58 = rd32(t55 + 0xcu);
            wr32(sp0 - 4u, t58);
            t59 = rd32(COW_IMG(0x10578478u));
            wr8(sp0 - 1u, 0u);
            if (t59 != 0u)
            {
                eax = t59;
                edx = t58;
                wr8(eax + 0x65u, 1u);
                wr32(eax + 0x68u, 0x80808080u);
                wr32(sp0 - 0x30u, sp0 - 0x10u);
                g->eax = sp0 - 0x10u;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t60 = cow_thiscall(g, COW_IMG(0x10150a30u), rd32(COW_IMG(0x10578478u)), 1, sp0 - 0x10u);
                t61 = g->edx;
                wr32(sp0 - 0x30u, COW_IMG(0x1035bad8u));
                wr8(rd32(COW_IMG(0x10578478u)) + 0x66u, (uint8_t)ebx);
                g->edx = t61;
                t62 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bad8u));
                t63 = g->edx;
                if ((uint8_t)t62 == 0u)
                {
                    eax = t62;
                    edx = t63;
                    wr32(sp0 - 0x30u, 0u);
                    wr32(sp0 - 0x34u, 1u);
                    wr32(sp0 - 0x38u, COW_IMG(0x1035bad8u));
                    g->ebx = ebx;
                    g->esp = sp0 - 0x2cu;
                    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bad8u), 1u, 0u);
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0c40: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035bad8u));
    loc_30 = COW_IMG(0x1035bad8u);
L_100b0e45: ;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, loc_30);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0c4a: ;
    t52 = rd8(eax + 2u);
    if (t52 == 0u) goto L_100b0c90;
    eax = t52;
    if (eax != 1u) goto L_100b0cb4;
    if (rd32(COW_IMG(0x104e2150u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104e2150u));
        wr16(rd32(eax + 0x30u) + 0x60u, 0u);
    }
    if (rd32(COW_IMG(0x104e2154u)) == 0u) goto L_100b0cb4;
    eax = rd32(COW_IMG(0x104e2154u));
    wr16(rd32(eax + 0x30u) + 0x60u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0c90: ;
    if (rd32(COW_IMG(0x104e2150u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104e2150u));
        wr16(rd32(eax + 0x30u) + 0x60u, 1u);
    }
    if (rd32(COW_IMG(0x104e2154u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104e2154u));
        wr16(rd32(eax + 0x30u) + 0x60u, 1u);
    }
L_100b0cb4: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0cca: ;
    t48 = rd8(eax + 2u);
    if (t48 == 0u)
    {
        eax = t48;
        edx = t48;
        goto L_100b0d38;
    }
    eax = t48;
    edx = t48;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100b0d0a;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_100b0d50;
    eax = eax - 1u;
    t49 = rd32(COW_IMG(0x1047d3e8u));
    wr8(COW_IMG(0x104886f4u), 2u);
    if (t49 == 0u) goto L_100b0d50;
    ecx = t49;
    wr32(sp0 - 0x30u, 2u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1014e210u), eax, ecx, g->edx, 0, 1, 2u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0d0a: ;
    t50 = rd32(COW_IMG(0x1047d3e8u));
    wr8(COW_IMG(0x104886f4u), 0u);
    if (t50 == 0u) goto L_100b0d50;
    ecx = t50;
    wr32(sp0 - 0x30u, 0u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1014e210u), eax, ecx, g->edx, 0, 1, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0d38: ;
    t51 = rd32(COW_IMG(0x1047d3e8u));
    wr8(COW_IMG(0x104886f4u), 1u);
    if (t51 != 0u)
    {
        ecx = t51;
        wr32(sp0 - 0x30u, 1u);
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x1014e210u), eax, ecx, g->edx, 0, 1, 1u);
    }
L_100b0d50: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0d66: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d2a8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t44 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035d2a8u));
    t45 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        eax = t44;
        edx = t45;
        wr32(sp0 - 0x30u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t46 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t47 = g->edx;
        if (rd32(COW_IMG(0x1057817cu)) != 0u)
        {
            eax = t46;
            ecx = rd32(COW_IMG(0x1057817cu));
            edx = t47;
            wr32(sp0 - 0x30u, eax);
            wr32(sp0 - 0x34u, 4u);
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1012c1d0u), ecx, 2, 4u, eax);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0daa: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d2a8u));
    loc_30 = COW_IMG(0x1035d2a8u);
    goto L_100b0e45;
L_100b0db4: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d2a8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t38 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035d2a8u));
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        edx = t40;
        edi = 0u;
    }
    else
    {
        ecx = t39;
        edx = t40;
        if (rd32(COW_IMG(0x1057817cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x1057817cu));
            edi = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x1057817cu));
            g->edx = edx;
            d41 = (double)rdf32(eax + 0x18u);
            fpush(g, d41);
            g->esp = sp0 - 0x2cu;
            t42 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t43 = g->edx;
            eax = t42;
            edx = t43;
            edi = t42;
        }
    }
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, 2u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, edi);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0dfc: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d294u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t34 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035d294u));
    t35 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
        wr32(sp0 - 0x30u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t36 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t37 = g->edx;
        if (rd32(COW_IMG(0x10578180u)) != 0u)
        {
            eax = t36;
            ecx = rd32(COW_IMG(0x10578180u));
            edx = t37;
            wr32(sp0 - 0x30u, eax);
            wr32(sp0 - 0x34u, 0u);
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1012c500u), ecx, 2, 0u, eax);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0e40: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d294u));
    loc_30 = COW_IMG(0x1035d294u);
    goto L_100b0e45;
L_100b0e65: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1035d294u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t28 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035d294u));
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        edx = t30;
        edi = 0u;
    }
    else
    {
        ecx = t29;
        edx = t30;
        if (rd32(COW_IMG(0x10578180u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10578180u));
            edi = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x10578180u));
            g->edx = edx;
            d31 = (double)rdf32(eax + 0x18u);
            fpush(g, d31);
            g->esp = sp0 - 0x2cu;
            t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t33 = g->edx;
            eax = t32;
            edx = t33;
            edi = t32;
        }
    }
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, 2u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, edi);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b0ead: ;
    wr32(COW_IMG(0x1047bc8cu), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0ecd: ;
    wr32(COW_IMG(0x1047bc8cu), 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0eed: ;
    if (rd32(COW_IMG(0x1066443cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066443cu));
        wr32(sp0 - 0x30u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t24 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t25 = g->edx;
        wr32(sp0 - 0x30u, t24);
        wr32(sp0 - 0x34u, 2u);
        g->edx = t25;
        g->esp = sp0 - 0x30u;
        t26 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t27 = g->edx;
        wr32(sp0 - 0x34u, t26);
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x10209430u), t26, rd32(COW_IMG(0x1066443cu)), g->edx, 0, 2, t26, rd32(sp0 - 0x30u));
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0f2b: ;
    if (rd32(COW_IMG(0x1066443cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066443cu));
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x102094d0u), ecx, 0);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0f50: ;
    if (rd32(COW_IMG(0x10664440u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664440u));
        wr32(sp0 - 0x30u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t20 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t21 = g->edx;
        wr32(sp0 - 0x30u, t20);
        wr32(sp0 - 0x34u, 2u);
        g->edx = t21;
        g->esp = sp0 - 0x30u;
        t22 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t23 = g->edx;
        wr32(sp0 - 0x34u, t22);
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x10209890u), t22, rd32(COW_IMG(0x10664440u)), g->edx, 0, 2, t22, rd32(sp0 - 0x30u));
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0f8e: ;
    if (rd32(COW_IMG(0x10664440u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664440u));
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x102098b0u), ecx, 0);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    return;
L_100b0fb3: ;
    wr32(sp0 - 0x30u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x30u, 4u);
    d5 = (double)(float)fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x14u, (float)d5);
    g->edx = t4;
    t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t7 = g->edx;
    wr32(sp0 - 0x20u, t6);
    wr32(sp0 - 0x30u, 6u);
    d8 = (double)(float)fr(g, (double)(int32_t)t6 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x18u, (float)d8);
    g->edx = t7;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t10 = g->edx;
    wr32(sp0 - 0x20u, t9);
    wr32(sp0 - 0x30u, 8u);
    d11 = (double)(float)fr(g, (double)(int32_t)t9 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x1cu, (float)d11);
    g->edx = t10;
    t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t13 = g->edx;
    wr32(sp0 - 0x20u, t12);
    wr32(sp0 - 0x30u, 0xau);
    d14 = (double)(float)fr(g, (double)(int32_t)t12 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x20u, (float)d14);
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        eax = t15;
        ecx = rd32(COW_IMG(0x10663888u));
        wr32(sp0 - 0x30u, eax);
        t16 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x34u, t16);
        t17 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x38u, t17);
        t18 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x3cu, t18);
        t19 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x40u, t19);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x101fb070u), ecx, 5, t19, t18, t17, t16, eax);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xcu));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
L_100b1062: ;
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_100b1077;
    eax = rd32(COW_IMG(0x10663888u));
    if (rd32(eax + 8u) != 0u) goto L_100b1081;
L_100b1077: ;
    wr16(self + 0x256u, (uint16_t)(edx + 2u));
L_100b1081: ;
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b0a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b0a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
