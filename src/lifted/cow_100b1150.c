/* f_0x100b1150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b1150(Guest* g)
{
    uint32_t cf;
    double d31;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = (in_edi & 0xffff0000u) | rd16(self + 0x256u);
    t2 = (rd32(self + 0x20u) & 0xffffff00u) | rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if ((uint8_t)t2 > 0x17u) goto L_100b1d7a;
    eax = (uint8_t)t2;
    ecx = t2;
    edi = t1;
    t3 = rd32(COW_IMG(0x100b1d8cu) + rd8(COW_IMG(0x100b1dc4u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100b118du: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b118d;
    case 0x100b11d8u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b11d8;
    case 0x100b1238u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1238;
    case 0x100b12abu: goto L_100b12ab;
    case 0x100b1493u: goto L_100b1493;
    case 0x100b151eu: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b151e;
    case 0x100b1751u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1751;
    case 0x100b1999u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1999;
    case 0x100b19ddu: goto L_100b19dd;
    case 0x100b1a1au: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1a1a;
    case 0x100b1a50u: goto L_100b1a50;
    case 0x100b1a99u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1a99;
    case 0x100b1b14u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1b14;
    case 0x100b1d35u: edx = rd8(COW_IMG(0x100b1dc4u) + eax); goto L_100b1d35;
    default: rt_fatal(g, COW_IMG(0x100b1186u), "switch");
    }
    return;
L_100b118d: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100b1d72;
    eax = rd16(self + 2u);
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t72 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != (uint16_t)t72)
    {
        eax = t72;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
        wr16(ecx + 0xfcu, (uint16_t)eax);
    }
L_100b1502: ;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
L_100b150f: ;
    wr32(eax + 0x130u, rd32(eax + 0x130u) | 0x20000u);
L_100b1d72: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
L_100b1d7a: ;
    wr8(self + 0x25au, 1u);
    return;
L_100b11d8: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100b1d72;
    eax = rd16(self + 2u);
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t70 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) != (uint32_t)(int8_t)t70)
    {
        eax = t70;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr8(ecx + 0xefu, (uint8_t)eax);
        t71 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
        wr32(ecx + 0x120u, t71);
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    goto L_100b150f;
L_100b1238: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100b1d72;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t69 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) != (uint16_t)t69)
    {
        eax = t69;
        ecx = (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u);
        edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        cf = rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) < (uint16_t)t69;
        pf = PARITY((uint8_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69));
        zf = (uint16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69) == 0u;
        sf = (int16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69) < 0;
        of = ((rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) ^ (uint16_t)t69) & (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) ^ (uint16_t)(rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + (uint32_t)(int8_t)(rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) - 2u) * 2u + 0xfcu) - (uint16_t)t69))) >> 0xfu;
        wr16(ecx * 2u + edx + 0xfcu, (uint16_t)eax);
        wr16(edx + 0xf4u, (uint16_t)(rd16(edx + 0xf4u) | 1u << (ecx & 0x1fu)));
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    goto L_100b150f;
L_100b12ab: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t55 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)t55)
        {
            eax = t55;
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
        }
        else
        {
            eax = t55;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
            wr8(ecx + 0xefu, (uint8_t)eax);
            t56 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t56);
            eax = t56;
        }
        wr32(sp0 - 0x20u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t57 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t58 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) == (uint16_t)t57)
        {
            eax = t57;
            edx = t58;
        }
        else
        {
            eax = t57;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t58;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
            wr16(ecx + 0xfcu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t59 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t59)
        {
            eax = t59;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t59;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t60 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t61 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t60)
        {
            eax = t60;
            edx = t61;
        }
        else
        {
            eax = t60;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t61;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t62 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) == (uint16_t)t62)
        {
            eax = t62;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t62;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t63 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        t64 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) == (uint16_t)t63)
        {
            eax = t63;
            edx = t64;
        }
        else
        {
            eax = t63;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t64;
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t65 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t65)
        {
            eax = t65;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t65;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t66 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
        t67 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) == (uint16_t)t66)
        {
            eax = t66;
            edx = t67;
        }
        else
        {
            eax = t66;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t67;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x40u);
            wr16(ecx + 0x108u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0x12u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t68 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x12u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != (uint16_t)t68)
        {
            eax = t68;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x80u);
            wr16(ecx + 0x10au, (uint16_t)eax);
        }
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x14u));
    wr8(self + 0x25au, 1u);
    return;
L_100b1493: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100b1d72;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    wr8(eax + 0xeeu, 7u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        edx = rd16(self + 2u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, 0u);
    }
    wr32(sp0 - 0x20u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t54 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10eu) != (uint16_t)t54)
    {
        eax = t54;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 2u);
        wr16(ecx + 0x10eu, (uint16_t)eax);
    }
    goto L_100b1502;
L_100b151e: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t44 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if ((int32_t)t44 < 3)
        {
            edi = 0u;
        }
        else
        {
            eax = t44;
            if ((int32_t)eax <= 4) goto L_100b154d;
            if (eax != 8u)
            {
                edi = 0u;
                goto L_100b1552;
            }
L_100b154d: ;
            edi = 1u;
        }
L_100b1552: ;
        wr32(sp0 - 0x20u, 4u);
        t45 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u) & 0x3fffffffu) ^ (uint8_t)edi << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u, t45);
        g->eax = (uint8_t)edi << 0x1eu;
        g->esp = sp0 - 0x1cu;
        t46 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)((uint8_t)t46 + 0x20u))
        {
            eax = (t46 & 0xffffff00u) | (uint8_t)((uint8_t)t46 + 0x20u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
        }
        else
        {
            eax = (t46 & 0xffffff00u) | (uint8_t)((uint8_t)t46 + 0x20u);
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu);
            wr8(ecx + 0xefu, (uint8_t)eax);
            t47 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t47);
            eax = t47;
        }
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t48 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t49 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t48)
        {
            eax = t48;
            edx = t49;
        }
        else
        {
            eax = t48;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t49;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t50 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t50)
        {
            eax = t50;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t50;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t51 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        t52 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t51)
        {
            eax = t51;
            edx = t52;
        }
        else
        {
            eax = t51;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t52;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t53 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) != (uint16_t)t53)
        {
            eax = t53;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x10u);
            wr16(eax + 0x104u, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
            wr16(eax + 0xfcu, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
            wr16(eax + 0x108u, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
            wr16(eax + 0x10au, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10cu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf5u, rd8(eax + 0xf5u) | 1u);
            wr16(eax + 0x10cu, 0u);
        }
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xeu));
    wr8(self + 0x25au, 1u);
    return;
L_100b1751: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if ((int32_t)t32 < 3)
        {
            edi = 0u;
        }
        else
        {
            eax = t32;
            if ((int32_t)eax <= 4) goto L_100b1785;
            if (eax != 8u)
            {
                edi = 0u;
                goto L_100b178a;
            }
L_100b1785: ;
            edi = 1u;
        }
L_100b178a: ;
        wr32(sp0 - 0x20u, 4u);
        t33 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u) & 0x3fffffffu) ^ (uint8_t)edi << 0x1eu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x120u, t33);
        g->eax = (uint8_t)edi << 0x1eu;
        g->esp = sp0 - 0x1cu;
        t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t35 = (t34 & 0xffffff00u) | (uint8_t)((uint8_t)t34 + 0x20u);
        wr32(sp0 - 0xcu, t35);
        if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xefu) == (uint32_t)(int8_t)t35)
        {
            eax = t35;
            edx = (uint32_t)(int8_t)t35;
        }
        else
        {
            eax = t35;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = (uint32_t)(int8_t)t35;
            wr8(ecx + 0xefu, (uint8_t)eax);
            t36 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t36);
            eax = t36;
        }
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t38 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x100u) == (uint16_t)t37)
        {
            eax = t37;
            edx = t38;
        }
        else
        {
            eax = t37;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t38;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t39 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfeu) == (uint16_t)t39)
        {
            eax = t39;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t39;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        t41 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x106u) == (uint16_t)t40)
        {
            eax = t40;
            edx = t41;
        }
        else
        {
            eax = t40;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = t41;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t42 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x102u) == (uint16_t)t42)
        {
            eax = t42;
            edx = rd16(self + 2u);
        }
        else
        {
            eax = t42;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t43 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x104u) != (uint16_t)t43)
        {
            eax = t43;
            ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xfcu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
            wr16(eax + 0xfcu, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x108u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
            wr16(eax + 0x108u, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10au) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
            wr16(eax + 0x10au, 0u);
        }
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x10cu) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr8(eax + 0xf5u, rd8(eax + 0xf5u) | 1u);
            wr16(eax + 0x10cu, 0u);
        }
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x130u) | 0x20000u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x10u));
    wr8(self + 0x25au, 1u);
    return;
L_100b1999: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 0xcu, t30);
        d31 = fr(g, (double)(int32_t)t30 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x204u, (float)d31);
    }
    goto L_100b1d72;
L_100b19dd: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u) goto L_100b1a01;
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100b1d7a;
L_100b1a01: ;
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)(edi + 2u));
    return;
L_100b1a1a: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t29 = g->edx;
        wr32(sp0 - 0x20u, t28);
        cow_fastcall(g, COW_IMG(0x1008a750u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), t29, 1, t28);
    }
    goto L_100b1d72;
L_100b1a50: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        t26 = rd32(eax + 0x128u);
        t27 = t26 ^ (((uint32_t)(int8_t)((uint8_t)ecx != 0x12u) << 4u ^ rd32(eax + 0x128u)) & 0x10u);
        wr32(eax + 0x128u, t27);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b1a99: ;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, sp0 - 4u);
    wr32(sp0 - 0x28u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t22 = g->edx;
    wr32(sp0 - 0x28u, t21);
    g->esp = sp0 - 0x1cu;
    t23 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t22, 3, t21, sp0 - 4u, sp0 - 0xcu);
    if ((uint8_t)t23 == 1u)
    {
        ebx = (uint8_t)ecx != 0x14u;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u) != 0u)
        {
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u);
            t24 = rd32(ecx + 0x74u);
            wr32(sp0 - 0xcu, t24);
            if (rd32(ecx + 0x78u) == rd32(sp0 - 4u))
            {
                t25 = (ebx & 1u) << 4u ^ ((rd32(ecx + 0x128u) & 0xffffff00u) | (rd32(ecx + 0x128u) & 0xefu));
                wr32(ecx + 0x128u, t25);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_100b1b14: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        if (rd8(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xefu) == (uint32_t)(int8_t)t6)
        {
            eax = t6;
            edx = (uint32_t)(int8_t)t6;
        }
        else
        {
            eax = t6;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int8_t)t6;
            wr8(ecx + 0xefu, (uint8_t)eax);
            t7 = (rd32(ecx + 0x120u) & 0xffffff00u) | (uint8_t)(rd32(ecx + 0x120u) | 1u);
            wr32(ecx + 0x120u, t7);
            eax = t7;
        }
        wr32(sp0 - 0x20u, 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t9 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xfcu) == (uint16_t)t8)
        {
            eax = t8;
            edx = t9;
        }
        else
        {
            eax = t8;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t9;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 1u);
            wr16(ecx + 0xfcu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 6u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0xfeu) == (uint16_t)t10)
        {
            eax = t10;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t10;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 2u);
            wr16(ecx + 0xfeu, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        t12 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x100u) == (uint16_t)t11)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t12;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 4u);
            wr16(ecx + 0x100u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xau);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x102u) == (uint16_t)t13)
        {
            eax = t13;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t13;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 8u);
            wr16(ecx + 0x102u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
        t15 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x104u) == (uint16_t)t14)
        {
            eax = t14;
            edx = t15;
        }
        else
        {
            eax = t14;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t15;
            wr16(ecx + 0xf4u, rd16(ecx + 0xf4u) | 0x10u);
            wr16(ecx + 0x104u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x106u) == (uint16_t)t16)
        {
            eax = t16;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t16;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x20u);
            wr16(ecx + 0x106u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
        t18 = g->edx;
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x108u) == (uint16_t)t17)
        {
            eax = t17;
            edx = t18;
        }
        else
        {
            eax = t17;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = t18;
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x40u);
            wr16(ecx + 0x108u, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0x12u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x12u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x10au) == (uint16_t)t19)
        {
            eax = t19;
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            eax = t19;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            wr8(ecx + 0xf4u, rd8(ecx + 0xf4u) | 0x80u);
            wr16(ecx + 0x10au, (uint16_t)eax);
        }
        wr32(sp0 - 0x20u, 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t20 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x14u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x10cu) != (uint16_t)t20)
        {
            eax = t20;
            ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
            wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 1u);
            wr16(ecx + 0x10cu, (uint16_t)eax);
        }
        wr32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x130u) | 0x20000u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x16u));
    wr8(self + 0x25au, 1u);
    return;
L_100b1d35: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 4u, t4);
        d5 = fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x204u, (float)d5);
    }
    goto L_100b1d72;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b1150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b1150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
