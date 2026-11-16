/* f_0x100ba190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ba190(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_98;
    uint32_t loc_ac;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 0x10u) goto L_100ba7fc;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100ba858u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100ba1c2u: goto L_100ba1c2;
    case 0x100ba1d4u: goto L_100ba1d4;
    case 0x100ba238u: goto L_100ba238;
    case 0x100ba24au: goto L_100ba24a;
    case 0x100ba2b2u: goto L_100ba2b2;
    case 0x100ba2c4u: goto L_100ba2c4;
    case 0x100ba350u: goto L_100ba350;
    case 0x100ba365u: goto L_100ba365;
    case 0x100ba423u: goto L_100ba423;
    case 0x100ba435u: goto L_100ba435;
    case 0x100ba4e7u: goto L_100ba4e7;
    case 0x100ba4fcu: goto L_100ba4fc;
    case 0x100ba564u: goto L_100ba564;
    case 0x100ba576u: goto L_100ba576;
    case 0x100ba5f9u: goto L_100ba5f9;
    case 0x100ba646u: goto L_100ba646;
    case 0x100ba741u: goto L_100ba741;
    default: rt_fatal(g, COW_IMG(0x100ba1bbu), "switch");
    }
    return;
L_100ba1c2: ;
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t102 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t103 = g->edx;
    eax = t102;
    edx = t103;
    ebp = 0xau;
    edi = t102;
L_100ba1d9: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t104 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t105 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t104;
        edx = t105;
        ebx = t104;
    }
    else
    {
        eax = t104;
        edx = t105;
        ebx = t104;
        if ((int16_t)edi <= (int16_t)ebx)
        {
            ebx = 0u;
        }
    }
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    t106 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t107 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t108 = g->edx;
    wr16(self + 0x256u, (uint16_t)t107);
    t109 = (uint32_t)(int16_t)(ebx * 2u);
    wr32(sp0 - 0xacu, t109);
    g->eax = ebx * 2u;
    g->edx = t108;
    t110 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, t109);
    t111 = g->edx;
    wr32(sp0 - 0xacu, t110);
    wr32(sp0 - 0xb0u, 4u);
    wr16(self + 0x256u, (uint16_t)t106);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t110);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba1d4: ;
    ebp = 8u;
    edi = 0u;
    goto L_100ba1d9;
L_100ba238: ;
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t91 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    ebp = 0xau;
    edi = t91;
L_100ba24f: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t93 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t94 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t93;
        edx = t94;
    }
    else
    {
        eax = t93;
        edx = t94;
        if ((int16_t)edi <= (int16_t)eax)
        {
            eax = 0u;
        }
    }
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax << 4u;
    t95 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t96 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t97 = rd32(self + 0x20u);
    wr16(self + 0x256u, (uint16_t)t96);
    t98 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u));
    wr32(sp0 - 0x94u, t98);
    t99 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 4u);
    wr32(sp0 - 0x90u, t99);
    t100 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 8u);
    wr32(sp0 - 0x8cu, t100);
    t101 = rd32(t97 + (uint16_t)t96 + (uint32_t)(int16_t)(eax << 4u) + 0xcu);
    wr16(self + 0x256u, (uint16_t)t95);
    edx = t101;
L_100ba4be: ;
    wr32(sp0 - 0x88u, edx);
    wr32(sp0 - 0xacu, sp0 - 0x94u);
    wr32(sp0 - 0xb0u, 4u);
    wr8(sp0 - 0x85u, 0u);
    g->esp = sp0 - 0xa8u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 4u, sp0 - 0x94u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba24a: ;
    ebp = 8u;
    edi = 0u;
    goto L_100ba24f;
L_100ba2b2: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t83 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    ebp = 8u;
    edi = t83;
L_100ba2c9: ;
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t85 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t86 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t85;
        edx = t86;
        goto L_100ba326;
    }
    eax = t85;
    edx = t86;
    if ((int16_t)edi > (int16_t)eax) goto L_100ba326;
    eax = 0u;
L_100ba2de: ;
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    t87 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t88 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t89 = (uint16_t)t88 + rd32(self + 0x20u);
    wr32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u, t89);
    t90 = rd32(self + 0x1cu);
    wr16(self + 0x256u, (uint16_t)t87);
    wr32(COW_IMG(0x104896e8u) + (uint32_t)(int16_t)eax * 4u, t90);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba2c4: ;
    ebp = 6u;
    edi = 0u;
    goto L_100ba2c9;
L_100ba326: ;
    if ((int16_t)eax < 64) goto L_100ba2de;
    wr32(sp0 - 0xacu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d388u));
    g->esp = sp0 - 0xb0u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba350: ;
    wr32(sp0 - 0xacu, 8u);
    wr32(sp0 - 0x98u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t66 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    edi = t66;
    loc_98 = 0xau;
L_100ba36d: ;
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t68 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((int16_t)t68 < 64)
    {
        eax = (uint32_t)(int16_t)t68;
        edx = t70;
        goto L_100ba38a;
    }
    eax = (uint32_t)(int16_t)t68;
    ecx = t69;
    edx = t70;
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d364u));
L_100ba468: ;
    g->esp = sp0 - 0xb0u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba365: ;
    wr32(sp0 - 0x98u, 8u);
    edi = 0u;
    loc_98 = 8u;
    goto L_100ba36d;
L_100ba38a: ;
    wr32(sp0 - 0x84u, eax);
    if (rd32(COW_IMG(0x104897f8u) + eax * 4u) != 0u)
    {
        loc_84 = eax;
        goto L_100ba3a4;
    }
    ecx = rd32(COW_IMG(0x104897f8u) + eax * 4u);
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d340u));
    goto L_100ba468;
L_100ba3a4: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t71 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    if ((uint16_t)edi == 0u)
    {
        eax = t71;
    }
    else
    {
        eax = t71;
        if ((int16_t)edi <= (int16_t)eax)
        {
            eax = 0u;
        }
    }
    t72 = rd32(sp0 - 0x84u);
    t73 = rd32(self + 0x1cu);
    t74 = rd16(self + 0x256u);
    t75 = rd32(self + 0x20u);
    wr16(self + 0x256u, 0u);
    t76 = rd32(COW_IMG(0x104897f8u) + t72 * 4u);
    wr32(self + 0x20u, t76);
    t77 = rd32(COW_IMG(0x104896e8u) + t72 * 4u);
    wr32(self + 0x1cu, t77);
    t78 = (uint32_t)(int16_t)(eax * 2u);
    wr32(sp0 - 0xacu, t78);
    g->eax = t78;
    g->edx = eax * 2u;
    g->esp = sp0 - 0xa8u;
    t79 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, t78);
    t80 = g->edx;
    wr32(sp0 - 0xacu, t79);
    wr32(sp0 - 0xb0u, 4u);
    wr32(self + 0x1cu, t73);
    wr16(self + 0x256u, (uint16_t)t74);
    wr32(self + 0x20u, t75);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t79);
    t81 = g->ecx;
    t82 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + rd16(sp0 - 0x98u)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t82;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba423: ;
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t57 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    ebp = 0xau;
    edi = t57;
L_100ba43a: ;
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t59 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t60 = g->ecx;
    t61 = g->edx;
    if ((int16_t)t59 < 64)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
        goto L_100ba454;
    }
    eax = t59;
    ecx = t60;
    wr32(sp0 - 0xacu, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d31cu));
    edx = (uint32_t)(int16_t)eax;
    goto L_100ba468;
L_100ba435: ;
    ebp = 8u;
    edi = 0u;
    goto L_100ba43a;
L_100ba454: ;
    if (rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ebx = (uint32_t)(int16_t)eax;
        eax = rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u);
        goto L_100ba483;
    }
    ebx = (uint32_t)(int16_t)eax;
    eax = rd32(COW_IMG(0x104897f8u) + (uint32_t)(int16_t)eax * 4u);
    wr32(sp0 - 0xacu, ebx);
    wr32(sp0 - 0xb0u, COW_IMG(0x1035d2f8u));
    goto L_100ba468;
L_100ba483: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t62 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    if ((uint16_t)edi == 0u)
    {
        eax = t62;
    }
    else
    {
        eax = t62;
        if ((int16_t)edi <= (int16_t)eax)
        {
            eax = 0u;
        }
    }
    t63 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u));
    wr32(sp0 - 0x94u, t63);
    t64 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 4u);
    wr32(sp0 - 0x90u, t64);
    t65 = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 8u);
    wr32(sp0 - 0x8cu, t65);
    edx = rd32((uint32_t)(int16_t)(eax << 4u) + rd32(COW_IMG(0x104897f8u) + ebx * 4u) + 0xcu);
    goto L_100ba4be;
L_100ba4e7: ;
    wr32(sp0 - 0xacu, 8u);
    wr32(sp0 - 0x98u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t47 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    edi = t47;
    loc_98 = 0xau;
L_100ba504: ;
    wr32(sp0 - 0xacu, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t49 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t50 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t49;
        edx = t50;
        ebx = t49;
    }
    else
    {
        eax = t49;
        edx = t50;
        ebx = t49;
        if ((int16_t)edi <= (int16_t)ebx)
        {
            ebx = 0u;
        }
    }
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t51 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t52 = g->edx;
    wr32(sp0 - 0xacu, 2u);
    t53 = rd16(self + 0x256u);
    t54 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    wr32(sp0 - 0xacu, t51);
    t55 = (uint32_t)(int16_t)(ebx * 2u);
    wr32(sp0 - 0xb0u, t55);
    wr16(self + 0x256u, (uint16_t)t54);
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, t55, t51);
    t56 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(rd32(sp0 - 0x98u) + ((in_ebp & 0xffff0000u) | t53)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t56;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba4fc: ;
    wr32(sp0 - 0x98u, 8u);
    edi = 0u;
    loc_98 = 8u;
    goto L_100ba504;
L_100ba564: ;
    wr32(sp0 - 0xacu, 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    ebx = 0xau;
    edi = t34;
L_100ba57b: ;
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t36 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 4u);
    wr32(sp0 - 0xacu, 6u);
    wr32(sp0 - 0x94u, rd32(t36));
    t37 = rd32(t36 + 4u);
    wr32(sp0 - 0x90u, t37);
    t38 = rd32(t36 + 8u);
    wr32(sp0 - 0x8cu, t38);
    t39 = rd32(t36 + 0xcu);
    wr32(sp0 - 0x88u, t39);
    wr8(sp0 - 0x85u, 0u);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t41 = g->edx;
    if ((uint16_t)edi == 0u)
    {
        eax = t40;
        edx = t41;
        ebp = t40;
    }
    else
    {
        eax = t40;
        edx = t41;
        ebp = t40;
        if ((int16_t)edi <= (int16_t)ebp)
        {
            ebp = 0u;
        }
    }
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->edx = edx;
    t42 = rd16(self + 0x256u);
    g->esp = sp0 - 0xa8u;
    t43 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t44 = g->edx;
    wr16(self + 0x256u, (uint16_t)t43);
    wr32(sp0 - 0xacu, sp0 - 0x94u);
    t45 = (uint32_t)(int16_t)(ebp << 4u);
    wr32(sp0 - 0xb0u, t45);
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, t45, sp0 - 0x94u);
    t46 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebx + ((edi & 0xffff0000u) | t42)));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t46;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba576: ;
    ebx = 8u;
    edi = 0u;
    goto L_100ba57b;
L_100ba5f9: ;
    wr32(sp0 - 0xacu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t26 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t27 = g->edx;
    wr32(sp0 - 0xacu, 2u);
    t28 = rd16(self + 0x256u);
    t29 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 2u);
    t30 = (uint32_t)(int16_t)(t26 * 2u);
    wr32(sp0 - 0xacu, t30);
    wr16(self + 0x256u, (uint16_t)t29);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, t30);
    t32 = g->edx;
    wr16(self + 0x256u, (uint16_t)t28);
    t33 = ((in_ebx & 0xffff0000u) | t28) + 6u;
    wr32(sp0 - 0xacu, t33);
    wr32(sp0 - 0xb0u, t31);
    cow_call_regs(g, COW_IMG(0x100b0510u), t31, self, t32, 0, 2, t31, t33);
    return;
L_100ba646: ;
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t14 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
    wr32(sp0 - 0x40u, rd32(t14));
    t15 = rd32(t14 + 4u);
    wr32(sp0 - 0x3cu, t15);
    t16 = (in_ebp & 0xffff0000u) | rd16(self + 0x256u);
    t17 = rd32(t14 + 8u);
    wr32(sp0 - 0x38u, t17);
    t18 = rd32(t14 + 0xcu);
    wr32(sp0 - 0x34u, t18);
    t19 = rd32(self + 0x20u);
    wr8(sp0 - 0x30u, 0u);
    wr8(sp0 - 0x70u, 0u);
    t20 = rd32((uint16_t)t16 + t19 + 5u);
    wr32(sp0 - 0x80u, t20);
    t21 = rd32((uint16_t)t16 + t19 + 9u);
    wr32(sp0 - 0x7cu, t21);
    t22 = rd32((uint16_t)t16 + t19 + 0xdu);
    wr32(sp0 - 0x78u, t22);
    t23 = rd32((uint16_t)t16 + t19 + 0x11u);
    wr32(sp0 - 0x74u, t23);
    if ((rd8((uint16_t)t16 + t19 + 4u) & 0xfu) == 0u)
    {
        ecx = t22;
        edx = t23;
        ebp = t16;
        goto L_100ba6f3;
    }
    eax = rd8((uint16_t)t16 + t19 + 4u) & 0xfu;
    ecx = t22;
    edx = t23;
    ebp = t16;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100ba6ec;
    }
    eax = sp0 - 0x40u;
    ebx = in_ebx;
    edi = sp0 - 0x80u;
L_100ba6bb: ;
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    if ((uint8_t)ecx == 0u) goto L_100ba6df;
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba6e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba6bb;
    }
L_100ba6df: ;
    eax = 0u;
L_100ba6e8: ;
    if (eax != 0u) goto L_100ba72c;
L_100ba6ec: ;
    wr32(sp0 - 0xacu, 0x15u);
    loc_ac = 0x15u;
L_100ba7ee: ;
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t25 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, loc_ac);
    wr16(self + 0x256u, (uint16_t)t25);
L_100ba7fc: ;
    return;
L_100ba6e3: ;
    eax = -cf + 1u - cf;
    goto L_100ba6e8;
L_100ba6f3: ;
    eax = sp0 - 0x40u;
    ebx = in_ebx;
    edi = sp0 - 0x80u;
L_100ba6fb: ;
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba723;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    if ((uint8_t)ecx == 0u) goto L_100ba71f;
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba723;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba6fb;
    }
L_100ba71f: ;
    eax = 0u;
L_100ba728: ;
    if (eax != 0u) goto L_100ba6ec;
L_100ba72c: ;
    t24 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebp + 0x17u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t24;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba723: ;
    eax = -cf + 1u - cf;
    goto L_100ba728;
L_100ba741: ;
    wr32(sp0 - 0xacu, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t3 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
    wr32(sp0 - 0x80u, rd32(t3));
    t4 = rd32(t3 + 4u);
    wr32(sp0 - 0x7cu, t4);
    t5 = rd32(t3 + 8u);
    wr32(sp0 - 0x78u, t5);
    wr32(sp0 - 0xacu, 4u);
    t6 = rd32(t3 + 0xcu);
    wr32(sp0 - 0x74u, t6);
    t7 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 4u);
    wr32(sp0 - 0x40u, rd32(t7));
    t8 = rd32(t7 + 4u);
    wr32(sp0 - 0x3cu, t8);
    t9 = (in_ebp & 0xffff0000u) | rd16(self + 0x256u);
    t10 = rd32(t7 + 8u);
    wr32(sp0 - 0x38u, t10);
    t11 = rd32(t7 + 0xcu);
    wr32(sp0 - 0x34u, t11);
    t12 = rd32(self + 0x20u);
    wr8(sp0 - 0x70u, 0u);
    wr8(sp0 - 0x30u, 0u);
    if ((rd8(t12 + (uint16_t)t9 + 6u) & 0xfu) == 0u)
    {
        ecx = t12;
        edx = t11;
        ebp = t9;
        goto L_100ba807;
    }
    eax = rd8(t12 + (uint16_t)t9 + 6u) & 0xfu;
    ecx = t12;
    edx = t11;
    ebp = t9;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100ba7ec;
    }
    eax = sp0 - 0x80u;
    ebx = in_ebx;
    edi = sp0 - 0x40u;
L_100ba7bb: ;
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba7e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    if ((uint8_t)ecx == 0u) goto L_100ba7df;
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba7e3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba7bb;
    }
L_100ba7df: ;
    eax = 0u;
L_100ba7e8: ;
    if (eax != 0u) goto L_100ba840;
L_100ba7ec: ;
    wr32(sp0 - 0xacu, 7u);
    loc_ac = 7u;
    goto L_100ba7ee;
L_100ba7e3: ;
    eax = -cf + 1u - cf;
    goto L_100ba7e8;
L_100ba807: ;
    eax = sp0 - 0x80u;
    ebx = in_ebx;
    edi = sp0 - 0x40u;
L_100ba80f: ;
    if (rd8(eax) != rd8(edi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(edi);
        goto L_100ba837;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(edi);
    if ((uint8_t)ecx == 0u) goto L_100ba833;
    if (rd8(eax + 1u) != rd8(edi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(edi + 1u);
        goto L_100ba837;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(edi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        edi = edi + 2u;
        goto L_100ba80f;
    }
L_100ba833: ;
    eax = 0u;
L_100ba83c: ;
    if (eax != 0u) goto L_100ba7ec;
L_100ba840: ;
    t13 = rd32(sp0 - 0xa8u);
    wr16(self + 0x256u, (uint16_t)(ebp + 9u));
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = t13;
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_100ba837: ;
    eax = -cf + 1u - cf;
    goto L_100ba83c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ba190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ba190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
