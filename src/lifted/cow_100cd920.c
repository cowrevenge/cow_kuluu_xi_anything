/* f_0x100cd920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=11 */
uint32_t cow_fn_100cd920(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_30;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(COW_IMG(0x1048a38cu), 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x10u, self + 0x674u);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        eax = rd32(t1);
        edx = t2;
        loc_18 = 0u;
    }
    else
    {
        eax = rd32(t1);
        edx = t2;
        ebx = 0u;
        ebp = eax + 0x24u;
        loc_18 = 0u;
L_100cd951: ;
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t3 = cow_fastcall(g, COW_IMG(0x1001b360u), ebp, edx, 0);
        t4 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            edx = t4;
            pf = PARITY((uint8_t)t3);
            zf = (uint8_t)t3 == 0u;
            sf = (int8_t)t3 < 0;
            t5 = rd32(sp0 - 0x18u) | 1u << (ebx & 0x1fu);
            wr32(sp0 - 0x18u, t5);
            eax = 1u << (ebx & 0x1fu);
            loc_18 = t5;
        }
        if ((int32_t)(ebx + 1u) < 3)
        {
            ebx = ebx + 1u;
            ebp = ebp + 0x14u;
            goto L_100cd951;
        }
    }
    wr8(sp0 - 0x1au, 0u);
    wr8(sp0 - 0x19u, (arg1 & 0xff000000u) == 0x3f000000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t6 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t7 = g->edx;
    if (t6 == 6u)
    {
        eax = t6;
        edx = t7;
        goto L_100cd9a6;
    }
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t8 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t9 = g->edx;
    if (t8 != 7u)
    {
        eax = t8;
        edx = t9;
        goto L_100cd9ab;
    }
    eax = t8;
    edx = t9;
L_100cd9a6: ;
    wr8(sp0 - 0x1au, 1u);
L_100cd9ab: ;
    if ((int8_t)rd8(self + 0x88u) < 0)
    {
        ebp = rd32(sp0 + 0x28u);
        goto L_100cd9d5;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
    ebp = rd32(sp0 + 0x28u);
    if (rd8(sp0 - 0x19u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x19u);
        goto L_100cda7e;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x19u);
    if (rd8(sp0 - 0x1au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1au);
        goto L_100cda7e;
    }
L_100cd9d5: ;
    if (arg11 == 0u) goto L_100cda05;
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, arg9);
    wr32(sp0 - 0x38u, arg8);
    wr32(sp0 - 0x3cu, arg7);
    wr32(sp0 - 0x40u, arg6);
    wr32(sp0 - 0x44u, arg5);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg3);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    eax = arg11;
    edx = arg2;
    loc_30 = ebp;
L_100cda6e: ;
    wr32(sp0 - 0x58u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t19 = cow_thiscall(g, COW_IMG(0x100cd540u), self, 11, eax, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, loc_30);
    t20 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        edx = t20;
        goto L_100cdcc5;
    }
    eax = t19;
    edx = t20;
L_100cda7e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t21 = cow_thiscall(g, COW_IMG(0x1002c7c0u), rd32(self + 0x7e4u), 0);
    t22 = g->edx;
    if (t21 == 0u)
    {
        edx = t22;
        goto L_100cdae4;
    }
    eax = t21;
    edx = t22;
    edi = t21;
L_100cda8f: ;
    t23 = rd32(edi + 0x1cu);
    wr32(sp0 + 0x28u, t23);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t24 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 0x28u, 0);
    t25 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        edx = t25;
        goto L_100cdb0e;
    }
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, arg9);
    wr32(sp0 - 0x38u, arg8);
    wr32(sp0 - 0x3cu, arg7);
    wr32(sp0 - 0x40u, arg6);
    wr32(sp0 - 0x44u, arg5);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg3);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    t26 = rd32(sp0 + 0x28u);
    wr32(sp0 - 0x58u, t26);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 0x2cu;
    t27 = cow_thiscall(g, COW_IMG(0x100cd540u), self, 11, t26, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, ebp);
    t28 = g->edx;
    if (rd32(edi + 8u) != 0u)
    {
        eax = t27;
        edx = t28;
        edi = rd32(edi + 8u);
        goto L_100cda8f;
    }
    edx = t28;
L_100cdae4: ;
    if (rd32(self + 0x70u) == 0u) goto L_100cdc56;
    eax = rd32(self + 0x70u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t29 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t30 = g->edx;
    if (t29 > 8u)
    {
        eax = t29;
        edx = t30;
        goto L_100cdcc5;
    }
    eax = t29;
    t31 = rd32(COW_IMG(0x100cdd44u) + rd8(COW_IMG(0x100cdd50u) + eax) * 4u);
    edx = rd8(COW_IMG(0x100cdd50u) + eax);
    switch (t31 - RD)
    {
    case 0x100cdb1bu: goto L_100cdb1b;
    case 0x100cdba5u: goto L_100cdba5;
    case 0x100cdcc5u: goto L_100cdcc5;
    default: rt_fatal(g, COW_IMG(0x100cdb07u), "switch");
    }
    return 0;
L_100cda05: ;
    wr32(sp0 - 0x30u, sp0 + 0x28u);
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, rd32(t10 + 0x400u), self, 1, sp0 + 0x28u);
    t12 = g->edx;
    if (rd32(t11) == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_100cda7e;
    }
    wr32(sp0 - 0x30u, sp0 + 0x28u);
    g->eax = sp0 + 0x28u;
    g->edx = rd32(self);
    t13 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t14 = cow_thiscall(g, rd32(t13 + 0x400u), self, 1, sp0 + 0x28u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10071060u), t14, 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_100cda7e;
    }
    wr32(sp0 - 0x30u, sp0 + 0x28u);
    g->eax = sp0 + 0x28u;
    g->esp = sp0 - 0x2cu;
    t18 = cow_thiscall(g, rd32(rd32(self) + 0x400u), self, 1, sp0 + 0x28u);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, arg9);
    wr32(sp0 - 0x38u, arg8);
    wr32(sp0 - 0x3cu, arg7);
    wr32(sp0 - 0x40u, arg6);
    wr32(sp0 - 0x44u, arg5);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg3);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    eax = rd32(t18);
    edx = arg1;
    loc_30 = ebp;
    goto L_100cda6e;
L_100cdb0e: ;
    wr32(sp0 - 0x14u, 1u);
    loc_14 = 1u;
L_100cdcc5: ;
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t88 = cow_thiscall(g, COW_IMG(0x1002b5a0u), rd32(sp0 - 0x10u), 0);
    if (rd32(t88) == 0u)
    {
        ecx = rd32(COW_IMG(0x1048a38cu));
        goto L_100cdd1d;
    }
    eax = rd32(t88);
    ecx = rd32(COW_IMG(0x1048a38cu));
    if (!(ecx & 1u)) goto L_100cdd1d;
    if (rd32(sp0 - 0x14u) != 0u) goto L_100cdd35;
    edx = rd32(sp0 - 0x14u);
    ebx = eax + 0x24u;
    ebp = rd32(sp0 - 0x18u);
    esi = 0u;
    edi = ecx ^ rd32(sp0 - 0x18u);
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_100cdcf4: ;
    if ((edi & 1u << (esi & 0x1fu)) != 0u)
    {
        eax = 1u << (esi & 0x1fu);
        if ((ebp & eax) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1001b140u), ebx, 0);
            t89 = g->edx;
            edx = t89;
        }
    }
    if ((int32_t)(esi + 1u) < 3)
    {
        ebx = ebx + 0x14u;
        cf = esi + 1u < 3u;
        pf = PARITY((uint8_t)(esi - 2u));
        zf = esi == 2u;
        sf = (int32_t)(esi - 2u) < 0;
        of = ((esi + 1u ^ 3u) & (esi + 1u ^ esi - 2u)) >> 0x1fu;
        esi = esi + 1u;
        goto L_100cdcf4;
    }
    ecx = rd32(COW_IMG(0x1048a38cu));
L_100cdd25: ;
    if (ecx == 0u) goto L_100cdd35;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return 0u;
L_100cdb1b: ;
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t32 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t33 = g->edx;
    if ((int32_t)t32 >= 29)
    {
        edx = t33;
        goto L_100cdba5;
    }
    edx = t33;
    if (rd32(self + 0x7e4u) != 0u) goto L_100cdba5;
    g->eax = rd32(self);
    g->edx = edx;
    t34 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t35 = cow_thiscall(g, rd32(t34 + 0x34cu), self, 0);
    t36 = g->edx;
    if (t35 != 0u)
    {
        edx = t36;
        goto L_100cdba5;
    }
    eax = t35;
    g->eax = eax;
    g->edx = rd32(self);
    t37 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t38 = cow_thiscall(g, rd32(t37 + 0x358u), self, 0);
    t39 = g->edx;
    if (t38 != 0u)
    {
        edx = t39;
        goto L_100cdba5;
    }
    edx = t39;
    g->eax = rd32(self);
    g->edx = edx;
    t40 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t41 = cow_thiscall(g, rd32(t40 + 0x360u), self, 0);
    t42 = g->edx;
    if (t41 != 0u)
    {
        edx = t42;
        goto L_100cdba5;
    }
    eax = t41;
    g->eax = eax;
    g->edx = rd32(self);
    t43 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t44 = cow_thiscall(g, rd32(t43 + 0x36cu), self, 0);
    t45 = g->edx;
    if (t44 != 0u)
    {
        edx = t45;
        goto L_100cdba5;
    }
    edx = t45;
    g->eax = rd32(self);
    g->edx = edx;
    t46 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t47 = cow_thiscall(g, rd32(t46 + 0x378u), self, 0);
    t48 = g->edx;
    if (t47 != 0u)
    {
        edx = t48;
        goto L_100cdba5;
    }
    eax = t47;
    g->eax = eax;
    g->edx = rd32(self);
    t49 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t50 = cow_thiscall(g, rd32(t49 + 0x384u), self, 0);
    t51 = g->edx;
    if (t50 != 0u)
    {
        edx = t51;
        goto L_100cdba5;
    }
    edx = t51;
    g->eax = rd32(self);
    g->edx = edx;
    t52 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t53 = cow_thiscall(g, rd32(t52 + 0x394u), self, 0);
    t54 = g->edx;
    if (t53 != 0u)
    {
        edx = t54;
        goto L_100cdba5;
    }
    eax = t53;
    g->eax = eax;
    g->edx = rd32(self);
    t55 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t56 = cow_thiscall(g, rd32(t55 + 0x3a4u), self, 0);
    t57 = g->edx;
    if (t56 == 0u)
    {
        eax = t56;
        edx = t57;
        goto L_100cdcc5;
    }
    edx = t57;
L_100cdba5: ;
    wr32(sp0 - 0x30u, sp0 + 0x24u);
    g->eax = rd32(self);
    t58 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t59 = cow_thiscall(g, rd32(t58 + 0x400u), self, 1, sp0 + 0x24u);
    if (rd32(t59) == 0u) goto L_100cdc1e;
    wr32(sp0 - 0x30u, sp0 + 0x28u);
    g->eax = sp0 + 0x28u;
    g->edx = rd32(self);
    t60 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t61 = cow_thiscall(g, rd32(t60 + 0x400u), self, 1, sp0 + 0x28u);
    t62 = g->edx;
    t63 = cow_thiscall(g, COW_IMG(0x10071060u), t61, 0);
    if ((uint8_t)t63 == 0u) goto L_100cdc1e;
    wr32(sp0 - 0x30u, sp0 + 0x2cu);
    g->eax = sp0 + 0x2cu;
    g->esp = sp0 - 0x2cu;
    t64 = cow_thiscall(g, rd32(rd32(self) + 0x400u), self, 1, sp0 + 0x2cu);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, arg9);
    wr32(sp0 - 0x38u, arg8);
    wr32(sp0 - 0x3cu, arg7);
    wr32(sp0 - 0x40u, arg6);
    wr32(sp0 - 0x44u, arg5);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg3);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    wr32(sp0 - 0x58u, rd32(t64));
    g->eax = rd32(t64);
    g->edx = arg1;
    t65 = rd32(t64);
    t66 = cow_thiscall(g, COW_IMG(0x100cd540u), self, 11, t65, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, ebp);
    t67 = g->edx;
    if ((uint8_t)t66 != 0u)
    {
        eax = t66;
        edx = t67;
        goto L_100cdcc5;
    }
L_100cdc1e: ;
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = rd32(self);
    t68 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t69 = cow_thiscall(g, rd32(t68 + 0x1dcu), self, 1, sp0 - 0xcu);
    t70 = g->edx;
    if (rd32(t69) == 0u)
    {
        eax = t69;
        edx = t70;
        goto L_100cdcc5;
    }
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = rd32(self);
    t71 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t72 = cow_thiscall(g, rd32(t71 + 0x1dcu), self, 1, sp0 - 8u);
    t73 = g->edx;
    g->edx = t73;
    t74 = cow_thiscall(g, COW_IMG(0x10071060u), t72, 0);
    t75 = g->edx;
    if ((uint8_t)t74 == 0u)
    {
        eax = t74;
        edx = t75;
        goto L_100cdcc5;
    }
    eax = sp0 - 4u;
L_100cdc86: ;
    wr32(sp0 - 0x30u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t84 = cow_thiscall(g, rd32(rd32(self) + 0x1dcu), self, 1, eax);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, arg9);
    wr32(sp0 - 0x38u, arg8);
    wr32(sp0 - 0x3cu, arg7);
    wr32(sp0 - 0x40u, arg6);
    wr32(sp0 - 0x44u, arg5);
    wr32(sp0 - 0x48u, arg4);
    wr32(sp0 - 0x4cu, arg3);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x54u, arg1);
    wr32(sp0 - 0x58u, rd32(t84));
    g->eax = rd32(t84);
    g->edx = arg1;
    t85 = rd32(t84);
    t86 = cow_thiscall(g, COW_IMG(0x100cd540u), self, 11, t85, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, ebp);
    t87 = g->edx;
    eax = t86;
    edx = t87;
    goto L_100cdcc5;
L_100cdc56: ;
    wr32(sp0 - 0x30u, sp0 + 0x24u);
    g->eax = sp0 + 0x24u;
    g->edx = rd32(self);
    t76 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t77 = cow_thiscall(g, rd32(t76 + 0x1dcu), self, 1, sp0 + 0x24u);
    t78 = g->edx;
    if (rd32(t77) == 0u)
    {
        eax = t77;
        edx = t78;
        goto L_100cdcc5;
    }
    wr32(sp0 - 0x30u, sp0 + 0x24u);
    g->eax = sp0 + 0x24u;
    g->edx = rd32(self);
    t79 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t80 = cow_thiscall(g, rd32(t79 + 0x1dcu), self, 1, sp0 + 0x24u);
    t81 = g->edx;
    g->edx = t81;
    t82 = cow_thiscall(g, COW_IMG(0x10071060u), t80, 0);
    t83 = g->edx;
    if ((uint8_t)t82 == 0u)
    {
        eax = t82;
        edx = t83;
        goto L_100cdcc5;
    }
    eax = sp0 + 0x24u;
    goto L_100cdc86;
L_100cdd1d: ;
    if (rd32(sp0 - 0x14u) != 0u) goto L_100cdd35;
    goto L_100cdd25;
L_100cdd35: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cd920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cd920(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
