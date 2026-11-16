/* f_0x101e6fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e6fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101ee230u), self, 5, 0u, 0u, 0u, 0u, 0x3f800000u);
    t1 = g->edx;
    wr32(self, COW_IMG(0x10339bc0u));
    wr32(COW_IMG(0x1066358cu), 0u);
    wr8(COW_IMG(0x10663588u), 0u);
    wr32(COW_IMG(0x10663644u), 0u);
    wr32(self + 0x158u, 0u);
    eax = COW_IMG(0x1037f45cu);
    ecx = COW_IMG(0x1037fcecu);
    edx = t1;
L_101e6ff4: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f47cu))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e6ff4;
    }
    eax = COW_IMG(0x1037f4d0u);
    ecx = COW_IMG(0x1037fd6cu);
L_101e700d: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f568u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e700d;
    }
    eax = COW_IMG(0x1037f630u);
    ecx = COW_IMG(0x1037ffccu);
L_101e7026: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fac0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7026;
    }
    eax = eax + 8u;
    esi = COW_IMG(0x1037fce8u);
L_101e703d: ;
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
        if (rd16(ecx + 2u) != 0xffffu)
        {
            ecx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x15u;
        }
        else
        {
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t3 = g->edx;
        wr32(esi, t2);
        eax = t2;
        edx = t3;
    }
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381208u))
    {
        esi = esi + 0x20u;
        goto L_101e703d;
    }
    wr32(COW_IMG(0x1038120cu), COW_IMG(0x1037f47cu));
    eax = COW_IMG(0x1037f568u);
    ecx = COW_IMG(0x1038122cu);
L_101e7086: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f590u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7086;
    }
    eax = COW_IMG(0x1037fac0u);
    ecx = COW_IMG(0x103812ccu);
L_101e709f: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fba0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e709f;
    }
    eax = eax + 8u;
    esi = COW_IMG(0x10381208u);
L_101e70b3: ;
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
        if (rd16(ecx + 2u) != 0xffffu)
        {
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x15u;
        }
        else
        {
            edx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t5 = g->edx;
        wr32(esi, t4);
        eax = t4;
        edx = t5;
    }
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381648u))
    {
        esi = esi + 0x20u;
        goto L_101e70b3;
    }
    eax = COW_IMG(0x1037f488u);
    ecx = COW_IMG(0x1038164cu);
L_101e70f2: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f4c8u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e70f2;
    }
    eax = COW_IMG(0x1037f590u);
    ecx = COW_IMG(0x1038174cu);
L_101e710b: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f5d0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e710b;
    }
    eax = COW_IMG(0x1037fba0u);
    ecx = COW_IMG(0x1038184cu);
L_101e7124: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fc70u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7124;
    }
    eax = eax + 8u;
    esi = COW_IMG(0x10381648u);
L_101e7138: ;
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
        if (rd16(ecx + 2u) == 0xfffeu)
        {
            ecx = (ecx & 0xffff0000u) | rd16(ecx + 2u);
            goto L_101e715b;
        }
        ecx = (ecx & 0xffff0000u) | rd16(ecx + 2u);
        if ((uint16_t)ecx == 0xffffu) goto L_101e715b;
        ecx = (uint32_t)(int16_t)eax;
        loc_18 = (uint32_t)(int16_t)eax;
        loc_1c = 0x15u;
L_101e7161: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t7 = g->edx;
        wr32(esi, t6);
        eax = t6;
        edx = t7;
    }
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381b88u))
    {
        esi = esi + 0x20u;
        goto L_101e7138;
    }
    wr32(COW_IMG(0x10381b8cu), COW_IMG(0x1037f4c8u));
    eax = COW_IMG(0x1037f5d0u);
    ecx = COW_IMG(0x10381bacu);
L_101e718a: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f610u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e718a;
    }
    eax = COW_IMG(0x1037fc70u);
    ecx = COW_IMG(0x10381cacu);
L_101e71a3: ;
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fcd0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e71a3;
    }
    eax = eax + 8u;
    esi = COW_IMG(0x10381b88u);
L_101e71b7: ;
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
        if ((int32_t)esi >= (int32_t)COW_IMG(0x10381ba8u))
        {
            if ((int32_t)esi >= (int32_t)COW_IMG(0x10381ca8u)) goto L_101e71ef;
            if (rd16(ecx) != 9u) goto L_101e71e9;
            ecx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
        else
        {
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
L_101e71f5: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(esi, t8);
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381e28u))
    {
        esi = esi + 0x20u;
        goto L_101e71b7;
    }
    if (rd32(COW_IMG(0x10663650u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, in_edi, in_esi);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            ecx = t12;
            edx = t13;
            wr32(COW_IMG(0x10663650u), 0u);
        }
        else
        {
            eax = t11;
            edx = t13;
            esi = t11;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t14 = g->ecx;
            t15 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339b78u));
            wr32(COW_IMG(0x10663650u), esi);
            ecx = t14;
            edx = t15;
        }
    }
    if (rd32(COW_IMG(0x1066364cu)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 == 0u)
        {
            ecx = t17;
            edx = t18;
            wr32(COW_IMG(0x1066364cu), 0u);
        }
        else
        {
            eax = t16;
            edx = t18;
            esi = t16;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t19 = g->ecx;
            t20 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339b30u));
            wr32(COW_IMG(0x1066364cu), esi);
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x10663654u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            ecx = t22;
            edx = t23;
            wr32(COW_IMG(0x10663654u), 0u);
        }
        else
        {
            eax = t21;
            edx = t23;
            esi = t21;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339ae8u));
            wr32(COW_IMG(0x10663654u), esi);
            ecx = t24;
            edx = t25;
        }
    }
    if (rd32(COW_IMG(0x10663658u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x3cu, in_edi, in_esi);
        t27 = g->ecx;
        t28 = g->edx;
        if (t26 == 0u)
        {
            ecx = t27;
            edx = t28;
            wr32(COW_IMG(0x10663658u), 0u);
        }
        else
        {
            eax = t26;
            edx = t28;
            esi = t26;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t29 = g->ecx;
            t30 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339aa0u));
            wr32(COW_IMG(0x10663658u), esi);
            ecx = t29;
            edx = t30;
        }
    }
    if (rd32(COW_IMG(0x1066365cu)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_edi, in_esi);
        t32 = g->ecx;
        t33 = g->edx;
        if (t31 == 0u)
        {
            ecx = t32;
            edx = t33;
            wr32(COW_IMG(0x1066365cu), 0u);
        }
        else
        {
            eax = t31;
            edx = t33;
            esi = t31;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t34 = g->ecx;
            t35 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339a58u));
            wr32(COW_IMG(0x1066365cu), esi);
            ecx = t34;
            edx = t35;
        }
    }
    if (rd32(COW_IMG(0x10663660u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t37 = g->ecx;
        t38 = g->edx;
        if (t36 == 0u)
        {
            ecx = t37;
            edx = t38;
            wr32(COW_IMG(0x10663660u), 0u);
        }
        else
        {
            eax = t36;
            edx = t38;
            esi = t36;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t39 = g->ecx;
            t40 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339a10u));
            wr32(COW_IMG(0x10663660u), esi);
            ecx = t39;
            edx = t40;
        }
    }
    if (rd32(COW_IMG(0x10663664u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 == 0u)
        {
            ecx = t42;
            edx = t43;
            wr32(COW_IMG(0x10663664u), 0u);
        }
        else
        {
            eax = t41;
            edx = t43;
            esi = t41;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t44 = g->ecx;
            t45 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103399c8u));
            wr32(COW_IMG(0x10663664u), esi);
            ecx = t44;
            edx = t45;
        }
    }
    if (rd32(COW_IMG(0x10663668u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x60u, in_edi, in_esi);
        t47 = g->ecx;
        t48 = g->edx;
        if (t46 == 0u)
        {
            ecx = t47;
            edx = t48;
            wr32(COW_IMG(0x10663668u), 0u);
        }
        else
        {
            eax = t46;
            edx = t48;
            esi = t46;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t49 = g->ecx;
            t50 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339980u));
            wr32(COW_IMG(0x10663668u), esi);
            ecx = t49;
            edx = t50;
        }
    }
    if (rd32(COW_IMG(0x1066366cu)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_edi, in_esi);
        t52 = g->ecx;
        t53 = g->edx;
        if (t51 == 0u)
        {
            ecx = t52;
            edx = t53;
            wr32(COW_IMG(0x1066366cu), 0u);
        }
        else
        {
            eax = t51;
            edx = t53;
            esi = t51;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t54 = g->ecx;
            t55 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339938u));
            wr32(COW_IMG(0x1066366cu), esi);
            ecx = t54;
            edx = t55;
        }
    }
    if (rd32(COW_IMG(0x10663670u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t56 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0u)
        {
            ecx = t57;
            edx = t58;
            wr32(COW_IMG(0x10663670u), 0u);
        }
        else
        {
            eax = t56;
            edx = t58;
            esi = t56;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t59 = g->ecx;
            t60 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103398f0u));
            wr32(COW_IMG(0x10663670u), esi);
            ecx = t59;
            edx = t60;
        }
    }
    if (rd32(COW_IMG(0x10663674u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t61 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t62 = g->ecx;
        t63 = g->edx;
        if (t61 == 0u)
        {
            ecx = t62;
            edx = t63;
            wr32(COW_IMG(0x10663674u), 0u);
        }
        else
        {
            eax = t61;
            edx = t63;
            esi = t61;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t64 = g->ecx;
            t65 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103398a8u));
            wr32(COW_IMG(0x10663674u), esi);
            ecx = t64;
            edx = t65;
        }
    }
    if (rd32(COW_IMG(0x10663678u)) == 0u)
    {
        g->esp = sp0 - 0xcu;
        t66 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t67 = g->ecx;
        t68 = g->edx;
        if (t66 == 0u)
        {
            ecx = t67;
            edx = t68;
            wr32(COW_IMG(0x10663678u), 0u);
        }
        else
        {
            eax = t66;
            edx = t68;
            esi = t66;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t69 = g->ecx;
            t70 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339860u));
            wr32(COW_IMG(0x10663678u), esi);
            ecx = t69;
            edx = t70;
        }
    }
    if (rd32(COW_IMG(0x1066367cu)) != 0u) goto L_101e753b;
    g->esp = sp0 - 0xcu;
    t71 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t72 = g->edx;
    if (t71 == 0u) goto L_101e7535;
    eax = t71;
    edx = t72;
    esi = t71;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10339818u));
    wr32(COW_IMG(0x1066367cu), esi);
    return self;
L_101e715b: ;
    edx = (uint32_t)(int16_t)eax;
    loc_18 = (uint32_t)(int16_t)eax;
    loc_1c = 0x13u;
    goto L_101e7161;
L_101e71e9: ;
    edx = (uint32_t)(int16_t)eax;
    loc_18 = (uint32_t)(int16_t)eax;
L_101e71f3: ;
    loc_1c = 0x15u;
    goto L_101e71f5;
L_101e71ef: ;
    loc_18 = (uint32_t)(int16_t)eax;
    eax = (uint32_t)(int16_t)eax;
    goto L_101e71f3;
L_101e7535: ;
    wr32(COW_IMG(0x1066367cu), 0u);
L_101e753b: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
