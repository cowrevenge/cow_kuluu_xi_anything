/* f_0x100bdc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100bdc50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c0;
    uint32_t loc_c4;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, in_edi);
    if (rd8(arg1) - 0x81u > 9u)
    {
        eax = rd8(arg1) - 0x81u;
        goto L_100bde2f;
    }
    eax = rd8(arg1) - 0x81u;
    t1 = rd32(COW_IMG(0x100be034u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100bdc7bu: goto L_100bdc7b;
    case 0x100bdccbu: goto L_100bdccb;
    case 0x100bdd33u: goto L_100bdd33;
    case 0x100bdde3u: goto L_100bdde3;
    case 0x100bde3du: goto L_100bde3d;
    case 0x100bde8eu: goto L_100bde8e;
    case 0x100bdebcu: goto L_100bdebc;
    case 0x100bdf00u: goto L_100bdf00;
    case 0x100bdf52u: goto L_100bdf52;
    case 0x100bdfe9u: goto L_100bdfe9;
    default: rt_fatal(g, COW_IMG(0x100bdc74u), "switch");
    }
    return 0;
L_100bdc7b: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, sp0 - 0x90u);
    wr32(sp0 - 0xc8u, arg1 + 1u);
    wr32(sp0 - 0xccu, self + 0x50u);
    g->ecx = sp0 - 0x90u;
    g->edx = in_edx;
    g->esp = sp0 - 0xc0u;
    t56 = cow_call_regs(g, COW_IMG(0x100bdb80u), sp0 - 0xb0u, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x90u);
    t57 = g->ecx;
    t58 = g->edx;
    t59 = arg1 + t56 + 1u;
    wr32(sp0 - 0xc4u, t59);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t59, g->ecx, t58, 1, 3, self + 0x50u, t59, sp0 - 0xb0u);
    t60 = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
    wr32(sp0 - 0xc0u, t60);
    t61 = (uint8_t)rd32(sp0 - 0x90u);
    wr32(sp0 - 0xc4u, t61);
    g->eax = rd32(self + 4u);
    g->ecx = self;
    g->edx = t61;
    t62 = rd32(self + 4u);
    t63 = cow_stdcall(g, COW_IMG(0x100bda70u), 2, t61, t60);
    t64 = g->ecx;
    t65 = g->edx;
    eax = t63;
    ecx = t64;
    edx = t65;
L_100be01b: ;
    if (eax != 0u) goto L_100bde19;
L_100be023: ;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return eax & 0xffffff00u;
L_100bdccb: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, sp0 - 0x90u);
    wr32(sp0 - 0xc8u, arg1 + 1u);
    wr32(sp0 - 0xccu, self + 0x50u);
    g->ecx = sp0 - 0xb0u;
    g->edx = sp0 - 0x90u;
    g->esp = sp0 - 0xc0u;
    t47 = cow_call_regs(g, COW_IMG(0x100bdb80u), eax, g->ecx, g->edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0x90u);
    t48 = g->ecx;
    t49 = g->edx;
    t50 = arg1 + t47 + 1u;
    wr32(sp0 - 0xc4u, t50);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t50, g->ecx, t49, 1, 3, self + 0x50u, t50, sp0 - 0xb0u);
    t51 = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
    wr32(sp0 - 0xc0u, t51);
    t52 = (uint8_t)rd32(sp0 - 0x90u);
    wr32(sp0 - 0xc4u, t52);
    g->eax = t52;
    g->edx = t51;
    t53 = cow_stdcall(g, COW_IMG(0x100bda50u), 2, t52, t51);
    t54 = g->edx;
    if (t53 != 0u)
    {
        eax = t53;
        edx = t54;
        goto L_100bdd26;
    }
    eax = t53;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return eax & 0xffffff00u;
L_100bdd26: ;
    wr32(sp0 - 0xc0u, eax);
    t55 = rd32(self + 0x704u);
    wr32(sp0 - 0xc4u, t55);
    ecx = t55;
    loc_c0 = eax;
    loc_c4 = t55;
L_100bde21: ;
    g->esp = sp0 - 0xbcu;
    t67 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, edx, 1, 2, loc_c4, loc_c0);
    wr32(self + 0x704u, t67);
    eax = t67;
L_100bde2f: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_100bdd33: ;
    wr32(sp0 - 0xc0u, sp0 - 0xaeu);
    wr32(sp0 - 0xc4u, sp0 - 0xb0u);
    wr32(sp0 - 0xc8u, arg1 + 1u);
    wr32(sp0 - 0xccu, self + 0x50u);
    g->ecx = self;
    g->esp = sp0 - 0xc0u;
    t28 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0xb0u, g->ecx, sp0 - 0xaeu, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    t29 = g->ecx;
    t30 = g->edx;
    t31 = arg1 + t28 + 1u;
    wr32(sp0 - 0xc4u, t31);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    t32 = cow_call_regs(g, COW_IMG(0x100bdbe0u), t31, g->ecx, t30, 1, 3, self + 0x50u, t31, sp0 - 0xaeu);
    t33 = (t32 & 0xffff0000u) | rd16(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
    wr32(sp0 - 0xccu, t33);
    g->eax = t33;
    g->esp = sp0 - 0xc8u;
    t34 = cow_cdecl(g, COW_IMG(0x100bd9d0u), 1, t33);
    t35 = (t34 & 0xffff0000u) | rd16(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xaeu) * 4u + 0xc64u);
    wr32(sp0 - 0xd0u, t35);
    g->eax = t35;
    g->edx = rd32(self + 4u);
    t36 = rd32(self + 4u);
    g->esp = sp0 - 0xccu;
    t37 = cow_cdecl(g, COW_IMG(0x100bd9d0u), 1, t35);
    t38 = g->edx;
    if (t34 == 0u)
    {
        eax = t37;
        goto L_100be023;
    }
    eax = t37;
    edx = t38;
    ebx = t37;
    edi = t34;
    if (ebx == 0u) goto L_100be023;
    wr32(sp0 - 0xc0u, edi);
    t39 = rd32(self + 0x704u);
    wr32(sp0 - 0xc4u, t39);
    g->ecx = t39;
    g->esp = sp0 - 0xbcu;
    t40 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, edx, 1, 2, t39, edi);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0xc8u, COW_IMG(0x1034f2b8u));
    wr32(sp0 - 0xccu, t40);
    wr32(self + 0x704u, t40);
    g->ecx = t41;
    g->esp = sp0 - 0xc4u;
    t43 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, t42, 1, 2, t40, COW_IMG(0x1034f2b8u));
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0xd0u, ebx);
    wr32(sp0 - 0xd4u, t43);
    wr32(self + 0x704u, t43);
    g->esp = sp0 - 0xccu;
    t46 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, t45, 1, 2, t43, ebx);
    wr32(self + 0x704u, t46);
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return (t46 & 0xffffff00u) | 1u;
L_100bdde3: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), self + 0x50u, g->ecx, sp0 - 0xb0u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    if ((uint16_t)rd32(sp0 - 0xb0u) >= 8u)
    {
        eax = rd32(sp0 - 0xb0u);
        goto L_100bde2f;
    }
    eax = rd32(sp0 - 0xb0u);
    ecx = rd32(self + 4u);
    edx = rd32((uint16_t)eax * 4u + rd32(self + 4u) + 0xc64u) * 5u;
    eax = COW_IMG(0x10488210u) + rd32((uint16_t)eax * 4u + rd32(self + 4u) + 0xc64u) * 0x14u;
L_100bde19: ;
    wr32(sp0 - 0xc0u, eax);
    t66 = rd32(self + 0x704u);
    wr32(sp0 - 0xc4u, t66);
    loc_c0 = eax;
    loc_c4 = t66;
    goto L_100bde21;
L_100bde3d: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    if ((uint16_t)rd32(sp0 - 0xb0u) >= 8u)
    {
        eax = rd32(sp0 - 0xb0u);
        goto L_100bde2f;
    }
    eax = rd32(sp0 - 0xb0u);
    t24 = rd32(self + 4u);
    wr8(self + 0x6ecu, 1u);
    t25 = rd32(t24 + (uint16_t)eax * 4u + 0xc64u);
    t26 = rd8(COW_IMG(0x10488220u) + rd32(t24 + (uint16_t)eax * 4u + 0xc64u) * 0x14u);
    t27 = rd32(sp0 - 0xbcu);
    wr8(self + 0x6edu, (uint8_t)t26);
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = t27;
    return ((t25 | t26) & 0xffffff00u) | 1u;
L_100bde8e: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    ecx = self + 0x7f0u;
    edx = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
L_100be012: ;
    wr32(sp0 - 0xc0u, edx);
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t21 = cow_thiscall(g, COW_IMG(0x101c8450u), ecx, 1, edx);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    goto L_100be01b;
L_100bdebc: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    t16 = g->edx;
    t17 = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
    wr32(sp0 - 0xc0u, t17);
    t18 = cow_thiscall(g, COW_IMG(0x101c8450u), self + 0x788u, 1, t17);
    t19 = g->ecx;
    if (t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        goto L_100bdf45;
    }
    eax = t18;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return eax & 0xffffff00u;
L_100bdf00: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0xb0u, g->ecx, in_edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    t12 = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc50u);
    wr32(sp0 - 0xc0u, t12);
    t13 = rd32(self + 4u);
    t14 = cow_thiscall(g, COW_IMG(0x101c8450u), self + 0x858u, 1, t12);
    t15 = g->ecx;
    if (t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        goto L_100bdf45;
    }
    eax = t14;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return eax & 0xffffff00u;
L_100bdf45: ;
    wr32(sp0 - 0xc0u, eax);
    t20 = rd32(self + 0x704u);
    wr32(sp0 - 0xc4u, t20);
    edx = t20;
    loc_c0 = eax;
    loc_c4 = t20;
    goto L_100bde21;
L_100bdf52: ;
    wr32(sp0 - 0xc0u, sp0 - 0xaeu);
    wr32(sp0 - 0xc4u, sp0 - 0xb0u);
    wr32(sp0 - 0xc8u, arg1 + 1u);
    wr32(sp0 - 0xccu, self + 0x50u);
    g->ecx = sp0 - 0xb0u;
    g->esp = sp0 - 0xc0u;
    t2 = cow_call_regs(g, COW_IMG(0x100bdbe0u), sp0 - 0xaeu, g->ecx, in_edx, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = arg1 + t2 + 1u;
    wr32(sp0 - 0xc4u, t5);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->ecx = t3;
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), t5, g->ecx, t4, 1, 3, self + 0x50u, t5, sp0 - 0xaeu);
    t6 = g->ecx;
    if (rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u) == 0u)
    {
        eax = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
        goto L_100bde2f;
    }
    eax = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc64u);
    ecx = t6;
    edx = (uint16_t)rd32(sp0 - 0xb0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 1u);
    wr32(sp0 - 0xc8u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t7 = cow_cdecl(g, COW_IMG(0x100a36f0u), 3, eax, 1u, 0u);
    t8 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        edx = t8;
        goto L_100bdfb1;
    }
    eax = t7;
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return eax & 0xffffff00u;
L_100bdfb1: ;
    wr32(sp0 - 0xc0u, eax);
    wr32(sp0 - 0xc4u, COW_IMG(0x1035d5f0u));
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    g->ebx = self + 0x50u;
    g->ecx = sp0 - 0x80u;
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1035d5f0u), eax, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u));
    t9 = g->ecx;
    wr32(sp0 - 0xccu, sp0 - 0x80u);
    t10 = rd32(self + 0x704u);
    wr32(sp0 - 0xd0u, t10);
    g->esp = sp0 - 0xc8u;
    t11 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, sp0 - 0x80u, 1, 2, t10, sp0 - 0x80u);
    wr32(self + 0x704u, t11);
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return (t11 & 0xffffff00u) | 1u;
L_100bdfe9: ;
    wr32(sp0 - 0xc0u, sp0 - 0xb0u);
    wr32(sp0 - 0xc4u, arg1 + 1u);
    wr32(sp0 - 0xc8u, self + 0x50u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x100bdbe0u), eax, g->ecx, self + 0x50u, 1, 3, self + 0x50u, arg1 + 1u, sp0 - 0xb0u);
    ecx = self + 0x8c0u;
    edx = rd32(rd32(self + 4u) + (uint16_t)rd32(sp0 - 0xb0u) * 4u + 0xc50u);
    goto L_100be012;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bdc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100bdc50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
