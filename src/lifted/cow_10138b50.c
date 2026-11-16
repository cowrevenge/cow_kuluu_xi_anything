/* f_0x10138b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10138b50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 3364u);

    if ((uint32_t)(int16_t)rd32(sp0 + 4u) == 5u)
    {
        edx = rd32(sp0 + 4u);
        goto L_10138b78;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 5u;
    edx = rd32(sp0 + 4u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10138b89;
    }
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), edx);
L_10138b78: ;
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, edx);
    wr32(sp0 + 8u, t2);
    eax = t2;
    wr32(sp0 - 0xd04u, in_esi);
    if (rd16(sp0 + 8u) == 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        ecx = self;
        goto L_10138baf;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    if (rd8(self + 0x2cu) == 0u) goto L_10138e22;
    ecx = (self & 0xffffff00u) | rd8(self + 0x2cu);
L_10138baf: ;
    if ((uint32_t)(int16_t)eax - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)eax - 1u;
        goto L_10138e22;
    }
    eax = (uint32_t)(int16_t)eax - 1u;
    t3 = rd32(COW_IMG(0x10138e2cu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10138bc3u: goto L_10138bc3;
    case 0x10138c37u: goto L_10138c37;
    case 0x10138c9eu: goto L_10138c9e;
    case 0x10138cd8u: goto L_10138cd8;
    case 0x10138d12u: goto L_10138d12;
    case 0x10138d4cu: goto L_10138d4c;
    case 0x10138d82u: goto L_10138d82;
    case 0x10138db8u: goto L_10138db8;
    case 0x10138deeu: goto L_10138dee;
    default: rt_fatal(g, COW_IMG(0x10138bbcu), "switch");
    }
    return 0;
L_10138b89: ;
    g->edx = edx;
    return eax;
L_10138bc3: ;
    wr32(sp0 - 0xd08u, self + 0x2cu);
    wr32(sp0 - 0xd0cu, COW_IMG(0x1036f9b0u));
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f9a8u));
    wr32(sp0 - 0xd14u, sp0 - 0xc00u);
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc00u, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), self + 0x2cu, in_esi);
    wr32(sp0 - 0xd08u, sp0 - 0xc00u);
    g->eax = sp0 - 0xc00u;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t55 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0xd04u;
    t56 = cow_thiscall(g, rd32(t55 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, sp0 - 0xc00u);
    t57 = g->edx;
    t58 = rd32(self + 0x1cu);
    wr32(sp0 - 0xd08u, t58);
    wr32(sp0 - 0xd0cu, 0u);
    g->edx = t57;
    cow_thiscall(g, COW_IMG(0x10127f20u), rd32(COW_IMG(0x10578160u)), 2, 0u, t58);
    t59 = g->edx;
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x10138ef0u), self, 0);
    t61 = g->edx;
    if ((uint8_t)t60 == 0u)
    {
        eax = t60;
        edx = t61;
        goto L_10138e22;
    }
    eax = t60;
    edx = t61;
    if ((rd8(rd32(self + 0x50u) + 0x15u) & 0xfu) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x50u) + 0x15u);
        edx = (edx & 0xffffff00u) | (rd8(rd32(self + 0x50u) + 0x15u) & 0xfu);
        goto L_10138e22;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x50u) + 0x15u);
    edx = (edx & 0xffffff00u) | (rd8(rd32(self + 0x50u) + 0x15u) & 0xfu);
    esi = rd32(self + 0x50u);
    wr8(esi + 0x15u, (uint8_t)(eax | 0x40u));
    g->esi = rd32(sp0 - 0xd04u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0x40u);
L_10138c37: ;
    wr32(sp0 - 0xd08u, in_edi);
    t43 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 0xd0cu, t43);
    g->edx = edx;
    g->esp = sp0 - 0xd00u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103f20u), ecx, 3, t43, in_edi, in_esi);
    t44 = g->edx;
    wr32(sp0 - 0xd10u, self + 0x2cu);
    wr32(sp0 - 0xd14u, t43);
    g->edx = t44;
    g->esp = sp0 - 0xd0cu;
    t45 = cow_cdecl(g, COW_IMG(0x10107690u), 2, t43, self + 0x2cu);
    t46 = g->edx;
    wr32(sp0 - 0xd0cu, COW_IMG(0x1036f96cu));
    g->esp = sp0 - 0xd08u;
    t47 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f96cu));
    wr32(sp0 - 0xd0cu, 1u);
    t48 = rd32(self + 8u);
    wr32(sp0 - 0xd10u, t48);
    g->edx = t48;
    t49 = cow_call_regs(g, COW_IMG(0x1015e790u), t47, COW_IMG(0x10621838u), g->edx, 0, 2, t48, 1u);
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_thiscall(g, COW_IMG(0x10157620u), rd32(COW_IMG(0x1057876cu)), 0);
    t52 = g->edx;
    wr32(sp0 - 0xd0cu, 0u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 1u);
    wr32(sp0 - 0xd1cu, t43);
    wr32(sp0 - 0xd20u, 1u);
    g->edx = t52;
    t53 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t51, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, t43, 1u, 0u, 0u, 0u);
    t54 = g->edx;
    g->edx = t54;
    return t53;
L_10138c9e: ;
    wr32(sp0 - 0xd08u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xd04u;
    cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f99cu));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->edx = t36;
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f99cu), self + 0x2cu, 0u, in_esi);
    t37 = g->edx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->ecx = sp0 - 0xd00u;
    g->edx = t37;
    g->esp = sp0 - 0xd14u;
    t38 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t40;
    g->esp = sp0 - 0xd1cu;
    t41 = cow_call_regs(g, COW_IMG(0x10081460u), t38, t39, g->edx, 1, 1, 0u);
    t42 = g->edx;
    g->edx = t42;
    return t41;
L_10138cd8: ;
    wr32(sp0 - 0xd08u, 0u);
    g->esp = sp0 - 0xd04u;
    cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t27 = g->ecx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f560u));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->ecx = t27;
    g->edx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f560u), self + 0x2cu, 0u, in_esi);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0xd14u;
    t30 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t32;
    g->esp = sp0 - 0xd1cu;
    t33 = cow_call_regs(g, COW_IMG(0x10081460u), t30, t31, g->edx, 1, 1, 0u);
    t34 = g->edx;
    g->edx = t34;
    return t33;
L_10138d12: ;
    wr32(sp0 - 0xd08u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xd04u;
    cow_call_regs(g, COW_IMG(0x10081450u), eax, ecx, g->edx, 1, 1, 0u);
    t20 = g->edx;
    wr32(sp0 - 0xd0cu, self + 0x2cu);
    wr32(sp0 - 0xd10u, COW_IMG(0x1036f980u));
    wr32(sp0 - 0xd14u, sp0 - 0xd00u);
    g->ecx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd00u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd00u, COW_IMG(0x1036f980u), self + 0x2cu, 0u, in_esi);
    t21 = g->ecx;
    wr32(sp0 - 0xd18u, 0u);
    wr32(sp0 - 0xd1cu, sp0 - 0xd00u);
    g->ecx = t21;
    g->edx = sp0 - 0xd00u;
    g->esp = sp0 - 0xd14u;
    t22 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0xd00u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xd20u, 0u);
    g->edx = t24;
    g->esp = sp0 - 0xd1cu;
    t25 = cow_call_regs(g, COW_IMG(0x10081460u), t22, t23, g->edx, 1, 1, 0u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_10138d4c: ;
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x417u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x417u);
    t17 = g->edx;
    wr32(sp0 - 0xd18u, t16);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f50u));
    g->edx = t17;
    g->esp = sp0 - 0xd04u;
    t18 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f50u), self + 0x2cu, t16, 0u, 0u, 1u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10138d82: ;
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x419u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x419u);
    t13 = g->edx;
    wr32(sp0 - 0xd18u, t12);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f70u));
    g->edx = t13;
    g->esp = sp0 - 0xd04u;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f70u), self + 0x2cu, t12, 0u, 0u, 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10138db8: ;
    wr32(sp0 - 0xd08u, 0u);
    wr32(sp0 - 0xd0cu, 1u);
    wr32(sp0 - 0xd10u, 0u);
    wr32(sp0 - 0xd14u, 0u);
    wr32(sp0 - 0xd18u, 0x418u);
    wr32(sp0 - 0xd1cu, 0xeu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xd14u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x418u);
    t9 = g->edx;
    wr32(sp0 - 0xd18u, t8);
    wr32(sp0 - 0xd1cu, self + 0x2cu);
    wr32(sp0 - 0xd20u, COW_IMG(0x10138f90u));
    g->edx = t9;
    g->esp = sp0 - 0xd04u;
    t10 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10138f90u), self + 0x2cu, t8, 0u, 0u, 1u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10138dee: ;
    wr32(sp0 - 0xd08u, 0x400u);
    wr32(sp0 - 0xd0cu, sp0 - 0x800u);
    t4 = (uint32_t)(int16_t)rd16(self + 0x456u);
    wr32(sp0 - 0xd10u, t4);
    wr32(sp0 - 0xd14u, self + 0x56u);
    g->esp = sp0 - 0xce8u;
    t5 = cow_call_regs(g, COW_IMG(0x1011dee0u), g->eax, t4, edx, 1, 11, self + 0x56u, t4, sp0 - 0x800u, 0x400u, in_esi, rd32(sp0 - 0xd00u), rd32(sp0 - 0xcfcu), rd32(sp0 - 0xcf8u), rd32(sp0 - 0xcf4u), rd32(sp0 - 0xcf0u), rd32(sp0 - 0xcecu));
    wr32(sp0 - 0xd08u, sp0 - 0x800u);
    g->esp = sp0 - 0xd04u;
    t6 = cow_fastcall(g, COW_IMG(0x10001d20u), rd32(COW_IMG(0x103d3c64u)), sp0 - 0x800u, 1, sp0 - 0x800u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10138e22: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138b50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
