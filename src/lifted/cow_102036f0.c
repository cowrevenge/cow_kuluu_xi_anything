/* f_0x102036f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102036f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = rd32(COW_IMG(0x106643e0u));
    t1 = rd32(COW_IMG(0x106643e0u));
    t2 = rd32(COW_IMG(0x106643fcu));
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x10202c20u), 0);
    t4 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t4;
        loc_4 = (self & 0xffffff00u) | (uint8_t)t3;
        goto L_102038ef;
    }
    edx = t4;
    ebx = (t2 & 0xffffff00u) | t2 != 0u;
    edi = t1;
    loc_4 = (self & 0xffffff00u) | (uint8_t)t3;
    t5 = rd32(COW_IMG(0x102038f8u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t5 - RD)
    {
    case 0x10203728u: goto L_10203728;
    case 0x10203789u: goto L_10203789;
    case 0x102037eau: goto L_102037ea;
    case 0x1020385fu: goto L_1020385f;
    case 0x102038dbu: goto L_102038db;
    case 0x102038efu: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_102038ef;
    default: rt_fatal(g, COW_IMG(0x10203721u), "switch");
    }
    return 0;
L_10203728: ;
    if ((uint8_t)ebx == 0u)
    {
        t65 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f3u));
        t66 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f4u));
        g->ebx = ebx;
        g->eax = t66;
        g->esp = sp0 - 0x10u;
        t67 = cow_call_regs(g, COW_IMG(0x10203630u), g->eax, g->ecx, edx, 0, 4, edx, t66, t65, loc_4);
        wr32(COW_IMG(0x106643e0u), t67);
        g->edx = rd32(self);
        t68 = rd32(self);
        t69 = cow_thiscall(g, rd32(t68 + 0x48u), self, 2, t67, 1u);
        t70 = g->ecx;
        t71 = g->edx;
        eax = t69;
        ecx = t70;
        edx = t71;
    }
    else
    {
        t58 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f5u));
        t59 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f6u));
        g->ebx = ebx;
        g->eax = t58;
        g->esp = sp0 - 0x10u;
        t60 = cow_stdcall(g, COW_IMG(0x10203680u), 3, edx, t59, t58);
        wr32(COW_IMG(0x106643e0u), t60);
        g->edx = rd32(self);
        t61 = rd32(self);
        t62 = cow_thiscall(g, rd32(t61 + 0x48u), self, 2, t60, 1u);
        t63 = g->ecx;
        t64 = g->edx;
        eax = t62;
        ecx = t63;
        edx = t64;
    }
L_102038e2: ;
    if (rd32(COW_IMG(0x106643e0u)) != edi)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t72 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t73 = g->edx;
        eax = t72;
        edx = t73;
    }
L_102038ef: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10203789: ;
    if ((uint8_t)ebx == 0u)
    {
        t51 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f3u));
        t52 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f4u));
        g->ebx = ebx;
        g->eax = t52;
        g->esp = sp0 - 0x10u;
        t53 = cow_call_regs(g, COW_IMG(0x10203570u), g->eax, g->ecx, edx, 0, 4, edx, t52, t51, loc_4);
        wr32(COW_IMG(0x106643e0u), t53);
        g->edx = rd32(self);
        t54 = rd32(self);
        t55 = cow_thiscall(g, rd32(t54 + 0x48u), self, 2, t53, 1u);
        t56 = g->ecx;
        t57 = g->edx;
        eax = t55;
        ecx = t56;
        edx = t57;
    }
    else
    {
        t44 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f5u));
        t45 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f6u));
        g->ebx = ebx;
        g->eax = t44;
        g->esp = sp0 - 0x10u;
        t46 = cow_stdcall(g, COW_IMG(0x102035c0u), 3, edx, t45, t44);
        wr32(COW_IMG(0x106643e0u), t46);
        g->edx = rd32(self);
        t47 = rd32(self);
        t48 = cow_thiscall(g, rd32(t47 + 0x48u), self, 2, t46, 1u);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    goto L_102038e2;
L_102037ea: ;
    if (rd32(COW_IMG(0x106643e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643e4u));
        goto L_102038ef;
    }
    if ((uint8_t)ebx == 0u)
    {
        t38 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f3u));
        t39 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f4u));
        g->eax = (uint32_t)(int16_t)arg2;
        g->edx = rd32(self);
        t40 = rd32(self);
        g->esp = sp0 - 0x10u;
        t41 = cow_thiscall(g, rd32(t40 + 0x44u), self, 3, (uint32_t)(int16_t)arg2, t39, t38);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    }
    else
    {
        t32 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f5u));
        t33 = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f6u));
        g->eax = rd32(self);
        g->edx = t33;
        t34 = rd32(self);
        g->esp = sp0 - 0x10u;
        t35 = cow_thiscall(g, rd32(t34 + 0x44u), self, 3, (uint32_t)(int16_t)arg2, t33, t32);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    }
    if ((int32_t)eax >= 0)
    {
        if (rd8(COW_IMG(0x10663b52u) + eax * 0x7cu) == 0u)
        {
            ecx = (eax << 5u) - eax;
            edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
        }
        else
        {
            ecx = (eax << 5u) - eax;
            edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
            wr32(COW_IMG(0x106643e0u), eax);
        }
    }
    goto L_102038e2;
L_1020385f: ;
    if (rd32(COW_IMG(0x106643e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643e4u));
        goto L_102038ef;
    }
    eax = rd32(COW_IMG(0x106643e4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10202fe0u), self, 1, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    else
    {
        ecx = t10;
        edx = t11;
        if (rd32(COW_IMG(0x106643ecu)) == 0u)
        {
            eax = rd32(COW_IMG(0x106643ecu));
            goto L_102038d4;
        }
        eax = rd32(COW_IMG(0x106643ecu));
        t12 = rd32(eax + 8u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t13 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t12, 2, t12, 1u);
        t14 = g->ecx;
        t15 = g->edx;
        if (rd8(COW_IMG(0x106643f0u)) == 0u)
        {
            eax = (t13 & 0xffffff00u) | rd8(COW_IMG(0x106643f0u));
            ecx = t14;
            edx = t15;
            goto L_102038b5;
        }
        edx = t15;
        t16 = rd32(rd32(COW_IMG(0x106643ecu)) + 8u);
        g->ebx = ebx;
        g->edx = edx;
        t17 = rd32(COW_IMG(0x106643ecu));
        g->esp = sp0 - 0x10u;
        t18 = cow_call_regs(g, COW_IMG(0x1015e530u), t17, COW_IMG(0x10621838u), g->edx, 0, 1, t16);
        t19 = g->ecx;
        t20 = g->edx;
        g->ecx = t19;
        g->edx = t20;
        t21 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    goto L_102038e2;
L_102038b5: ;
    if (rd8(COW_IMG(0x106643f1u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643f1u));
    }
    else
    {
        t24 = rd32(rd32(COW_IMG(0x106643ecu)) + 8u);
        g->edx = rd32(COW_IMG(0x106643ecu));
        t25 = rd32(COW_IMG(0x106643ecu));
        g->esp = sp0 - 0x10u;
        t26 = cow_call_regs(g, COW_IMG(0x1015e790u), t24, COW_IMG(0x10621838u), g->edx, 0, 2, t24, 1u);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
L_102038d4: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t29 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    goto L_102038e2;
L_102038db: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10202f00u), g->eax, self, edx, 1, 3, in_edi, in_esi, in_ebx);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    goto L_102038e2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102036f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102036f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
