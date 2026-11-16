/* f_0x101295d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101295d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_68;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0u);
    if (arg1 == 0u) goto L_101295f2;
    if (arg1 != 8u) goto L_101295fe;
L_101295f2: ;
    if ((uint8_t)arg3 == 0u) goto L_10129802;
L_101295fe: ;
    if (arg2 == 0u) goto L_10129768;
    if (arg2 == 1u) goto L_101296f7;
    if (arg2 != 2u)
    {
        eax = arg2 - 2u;
        loc_44 = 0u;
        goto L_10129956;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_call_regs(g, COW_IMG(0x1018ec10u), arg2 - 2u, rd32(self + 0x64044u), g->edx, 1, 0);
    t2 = g->edx;
    wr32(sp0 - 0x44u, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        loc_44 = 0u;
        goto L_10129956;
    }
    eax = t1;
    edx = t2;
    ebx = 0u;
    loc_40 = 0u;
L_1012962f: ;
    if (rd8(eax) == 0u) goto L_101296c8;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->eax = sp0 + 0xcu;
    g->esp = sp0 - 0x54u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 - 0x3cu, 3, sp0 - 0x3cu, sp0 + 0xcu, eax);
    if ((int32_t)rd32(self + 0x64048u) <= (int32_t)rd32(sp0 - 0x30u)) goto L_10129936;
    edx = rd32(self + 0x64048u);
    ebx = t3;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t4 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 + 0xcu, arg1);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101296b8;
    }
    wr32(sp0 - 0x58u, arg4);
    wr32(sp0 - 0x5cu, arg3);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, 1u);
    g->eax = sp0 - 0x3cu;
    g->esp = sp0 - 0x54u;
    t6 = cow_thiscall(g, COW_IMG(0x10129090u), self, 5, 1u, ebx, sp0 - 0x3cu, arg3, arg4);
    t7 = g->ecx;
    wr16(self + 0x6402au, (uint16_t)((uint16_t)t6 + rd16(self + 0x6402au)));
    t8 = t6 + rd32(self + 0x1cu);
    t9 = rd16(self + 0x6402au);
    wr32(self + 0x1cu, t8);
    if ((int16_t)t9 >= 50) goto L_10129936;
    eax = t6;
    edx = t8;
    loc_68 = 1u;
L_101296b8: ;
    t10 = rd32(sp0 - 0x30u);
    t11 = rd32(sp0 - 0x40u);
    wr32(self + 0x64048u, t10);
    ebx = t11;
L_101296c8: ;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t12 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t13 = g->edx;
    wr32(sp0 - 0x40u, ebx + 1u);
    if ((int32_t)(ebx + 1u) > 120) goto L_101296ea;
    eax = t12;
    edx = t13;
    loc_40 = ebx + 1u;
    ebx = ebx + 1u;
    if (eax != 0u) goto L_1012962f;
L_1012993e: ;
    t59 = rd32(sp0 - 0x30u);
    t60 = rd16(self + 0x14u);
    wr32(self, t59);
    wr32(self + 8u, t59);
    t61 = rd32(self + ((uint32_t)(int16_t)t60 << 0xbu) + 0x2cu);
    wr32(self + 4u, t61);
    eax = t61;
L_10129956: ;
    t62 = (uint32_t)(int16_t)rd16(self + 0x6402au);
    wr32(sp0 - 0x58u, t62);
    wr32(sp0 - 0x5cu, arg1);
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x10129490u), 2, arg1, t62);
    return rd32(sp0 - 0x44u);
L_101296ea: ;
    wr32(sp0 - 0x44u, 2u);
    loc_44 = 2u;
    goto L_1012993e;
L_101296f7: ;
    wr32(sp0 - 0x44u, 2u);
    g->esp = sp0 - 0x54u;
    t14 = cow_call_regs(g, COW_IMG(0x1018ec10u), arg2 - 1u, rd32(self + 0x64044u), g->edx, 1, 0);
    if (t14 == 0u)
    {
        eax = t14;
        loc_44 = 2u;
        goto L_10129956;
    }
    eax = t14;
    ebx = 0u;
L_10129712: ;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 + 0xcu, 3, sp0 - 0x3cu, sp0 + 0xcu, eax);
    t15 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 + 0xcu, arg1);
    t17 = g->edx;
    t18 = cow_call_regs(g, COW_IMG(0x1018ece0u), t16, rd32(self + 0x64044u), g->edx, 1, 0);
    if ((int32_t)(ebx + 1u) > 120)
    {
        eax = t18;
        goto L_1012975b;
    }
    eax = t18;
    ebx = ebx + 1u;
    if (eax != 0u) goto L_10129712;
    goto L_10129956;
L_1012975b: ;
    wr32(sp0 - 0x44u, 1u);
    loc_44 = 1u;
    goto L_10129956;
L_10129768: ;
    t19 = rd32(self + 0x64044u);
    wr16(self + 0x6402au, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self, 0u);
    g->eax = arg2;
    g->esp = sp0 - 0x54u;
    t20 = cow_fastcall(g, COW_IMG(0x1018ebc0u), t19, in_edx, 0);
    t21 = g->edx;
    wr16(self + 0x14u, 0u);
    wr16(self + 0x16u, 0u);
    wr32(self + 0x64048u, 0x7fffffffu);
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10127250u), self, 0);
    t23 = g->edx;
    t24 = cow_fastcall(g, COW_IMG(0x1018ebc0u), rd32(self + 0x64044u), t23, 0);
    t25 = g->edx;
    t26 = cow_call_regs(g, COW_IMG(0x1018ec10u), t24, rd32(self + 0x64044u), g->edx, 1, 0);
    wr32(sp0 - 0x44u, 2u);
    if (t26 == 0u)
    {
        eax = t26;
        loc_44 = 2u;
        goto L_10129956;
    }
    eax = t26;
L_101297bf: ;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 + 0xcu, 3, sp0 - 0x3cu, sp0 + 0xcu, eax);
    t27 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 + 0xcu, arg1);
    t29 = g->edx;
    t30 = cow_call_regs(g, COW_IMG(0x1018ece0u), t28, rd32(self + 0x64044u), g->edx, 1, 0);
    if (t30 != 0u)
    {
        eax = t30;
        goto L_101297bf;
    }
    eax = t30;
    goto L_10129956;
L_10129802: ;
    t31 = rd32(self + 0x64044u);
    wr16(self + 0x6402au, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self, 0u);
    g->eax = (arg1 & 0xffffff00u) | (uint8_t)arg3;
    g->esp = sp0 - 0x54u;
    t32 = cow_fastcall(g, COW_IMG(0x1018ebc0u), t31, in_edx, 0);
    t33 = g->edx;
    wr16(self + 0x14u, 0u);
    wr16(self + 0x16u, 0u);
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x10127250u), self, 0);
    t35 = g->edx;
    t36 = cow_fastcall(g, COW_IMG(0x1018ebc0u), rd32(self + 0x64044u), t35, 0);
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_call_regs(g, COW_IMG(0x1018ec10u), t36, rd32(self + 0x64044u), g->edx, 1, 0);
    t39 = g->edx;
    if (t38 == 0u)
    {
        eax = t38;
        edx = t39;
        goto L_10129883;
    }
    eax = t38;
L_10129843: ;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 + 0xcu, 3, sp0 - 0x3cu, sp0 + 0xcu, eax);
    t40 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 + 0xcu, arg1);
    t42 = g->edx;
    g->edx = t42;
    t43 = cow_call_regs(g, COW_IMG(0x1018ece0u), t41, rd32(self + 0x64044u), g->edx, 1, 0);
    t44 = g->edx;
    if (t43 != 0u)
    {
        eax = t43;
        goto L_10129843;
    }
    eax = t43;
    edx = t44;
L_10129883: ;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t45 = cow_call_regs(g, COW_IMG(0x1018ec10u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t46 = g->edx;
    if (t45 == 0u) goto L_1012993e;
    eax = t45;
    edx = t46;
L_10129896: ;
    if (rd8(eax) == 0u) goto L_10129921;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->eax = eax;
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x54u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x10128060u), sp0 + 0xcu, 3, sp0 - 0x3cu, sp0 + 0xcu, eax);
    t48 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 + 0xcu, arg1);
    t50 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        eax = t49;
        edx = t50;
        goto L_1012991f;
    }
    ebx = t47;
    wr32(sp0 - 0x58u, arg4);
    wr32(sp0 - 0x5cu, arg3);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, 1u);
    g->eax = sp0 - 0x3cu;
    g->edx = arg3;
    g->esp = sp0 - 0x54u;
    t51 = cow_thiscall(g, COW_IMG(0x10129090u), self, 5, 1u, ebx, sp0 - 0x3cu, arg3, arg4);
    t52 = g->edx;
    wr16(self + 0x6402au, (uint16_t)((uint16_t)t51 + rd16(self + 0x6402au)));
    t53 = t51 + rd32(self + 0x1cu);
    t54 = rd16(self + 0x6402au);
    wr32(self + 0x1cu, t53);
    if ((int16_t)t54 >= 50) goto L_10129936;
    eax = t51;
    edx = (t52 & 0xffff0000u) | t54;
    wr32(sp0 - 0x58u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t55 = cow_stdcall(g, COW_IMG(0x101293f0u), 1, arg1);
    t56 = g->edx;
    if ((int16_t)t56 >= (int16_t)(uint8_t)t55) goto L_10129936;
    eax = (uint8_t)t55;
    edx = t56;
L_1012991f: ;
L_10129921: ;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t57 = cow_call_regs(g, COW_IMG(0x1018ec50u), eax, rd32(self + 0x64044u), g->edx, 1, 0);
    t58 = g->edx;
    if (t57 != 0u)
    {
        eax = t57;
        edx = t58;
        goto L_10129896;
    }
    goto L_1012993e;
L_10129936: ;
    wr32(sp0 - 0x44u, 0u);
    loc_44 = 0u;
    goto L_1012993e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101295d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101295d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
