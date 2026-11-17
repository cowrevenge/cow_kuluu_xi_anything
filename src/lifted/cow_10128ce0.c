/* f_0x10128ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10128ce0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_648;
    uint32_t loc_658;
    uint32_t loc_660;
    uint32_t loc_668;
    uint32_t loc_66c;
    uint32_t loc_670;
    uint32_t loc_674;
    uint32_t loc_678;
    uint32_t loc_67c;
    uint32_t loc_688;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1728u);

    wr32(sp0 - 0x670u, in_ebx);
    wr32(sp0 - 0x674u, in_ebp);
    wr32(sp0 - 0x678u, in_esi);
    wr32(sp0 - 0x67cu, in_edi);
    wr32(sp0 - 0x658u, 0u);
    wr8(sp0 - 0x662u, 0x1eu);
    wr8(sp0 - 0x661u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x67cu;
    t1 = cow_thiscall(g, COW_IMG(0x10163080u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10128db6;
    }
    edx = t3;
    esi = t1;
    if (rd32(arg3 + 0x38u) == 0u)
    {
        ecx = rd32(arg3 + 0x38u);
        goto L_10128db6;
    }
    ecx = rd32(arg3 + 0x38u);
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx + 0x3fu;
    wr32(sp0 - 0x680u, t4);
    g->eax = eax;
    g->esp = sp0 - 0x674u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, edx, 1, 3, t4, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x658u, t5);
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        ebp = arg2;
        loc_658 = t5;
        loc_670 = in_ebx;
        loc_674 = in_ebp;
        loc_678 = in_esi;
        loc_67c = in_edi;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        loc_658 = t5;
        wr32(sp0 - 0x680u, 0x31u);
        wr8(sp0 - 0x66cu, 0x1eu);
        g->eax = eax;
        g->esp = sp0 - 0x67cu;
        t8 = cow_cdecl(g, COW_IMG(0x10129f80u), 1, 0x31u);
        wr8(sp0 - 0x66bu, (uint8_t)t8);
        wr32(sp0 - 0x680u, arg2);
        wr32(sp0 - 0x684u, sp0 - 0x668u);
        t9 = (esi != 1u) * 8u + 8u;
        wr32(sp0 - 0x688u, t9);
        t10 = rd32(arg3 + 0x38u);
        wr32(sp0 - 0x68cu, t10);
        wr8(sp0 - 0x66au, 0u);
        wr8(sp0 - 0x668u, 0x1eu);
        wr8(sp0 - 0x667u, 1u);
        wr8(sp0 - 0x666u, 0u);
        g->edi = edi;
        g->eax = arg3;
        g->ecx = t10;
        g->esp = sp0 - 0x684u;
        t11 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, t10, t9);
        t12 = g->ecx;
        wr32(sp0 - 0x688u, t11);
        wr32(sp0 - 0x68cu, sp0 - 0x66cu);
        wr32(sp0 - 0x690u, COW_IMG(0x1036f194u));
        t13 = rd32(sp0 - 0x658u);
        wr32(sp0 - 0x694u, t13);
        g->ebx = self;
        g->ecx = t12;
        g->edx = sp0 - 0x66cu;
        g->esp = sp0 - 0x680u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, t13, COW_IMG(0x1036f194u), sp0 - 0x66cu, t11, sp0 - 0x668u);
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
        ebp = t13;
        loc_658 = rd32(sp0 - 0x658u);
        loc_670 = rd32(sp0 - 0x670u);
        loc_674 = rd32(sp0 - 0x674u);
        loc_678 = rd32(sp0 - 0x678u);
        loc_67c = rd32(sp0 - 0x67cu);
    }
L_10128dbd: ;
    edi = ebp;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x680u, (uint16_t)~ecx);
    g->eax = eax;
    g->esp = sp0 - 0x674u;
    t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, (uint16_t)~ecx, edx, 1, 3, (uint16_t)~ecx, loc_67c, loc_678);
    wr32(sp0 - 0x640u, t16);
    wr32(sp0 - 0x684u, ebp);
    wr32(sp0 - 0x688u, sp0 - 0x660u);
    wr32(sp0 - 0x68cu, sp0 - 0x65cu);
    wr8(sp0 - 0x654u, (uint8_t)arg4);
    g->ecx = sp0 - 0x660u;
    g->edx = sp0 - 0x65cu;
    g->esp = sp0 - 0x670u;
    cow_call_regs(g, COW_IMG(0x10128830u), (t16 & 0xffffff00u) | (uint8_t)arg4, g->ecx, g->edx, 1, 7, sp0 - 0x65cu, sp0 - 0x660u, ebp, rd32(sp0 - 0x680u), rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u), rd32(sp0 - 0x674u));
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(sp0 - 0x660u) + 1u;
    wr32(sp0 - 0x690u, t19);
    g->eax = t19;
    g->esp = sp0 - 0x684u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t17, t18, 1, 3, t19, sp0 - 0x65cu, sp0 - 0x660u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x648u, t20);
    wr32(sp0 - 0x668u, 0u);
    if (rd32(sp0 - 0x65cu) == 0u)
    {
        eax = rd32(sp0 - 0x65cu);
        ecx = t21;
        edi = t20;
        loc_648 = t20;
        loc_668 = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x65cu);
        edx = t22;
        edi = t20;
        loc_648 = t20;
        wr32(sp0 - 0x680u, eax * 8u);
        g->eax = eax;
        g->esp = sp0 - 0x674u;
        t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 8u, edx, 1, 3, eax * 8u, rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u));
        t24 = g->ecx;
        wr32(sp0 - 0x668u, t23);
        eax = t23;
        ecx = t24;
        loc_648 = rd32(sp0 - 0x648u);
        loc_668 = t23;
    }
    wr32(sp0 - 0x680u, ebp);
    wr32(sp0 - 0x684u, edi);
    wr32(sp0 - 0x688u, loc_668);
    g->edx = loc_668;
    g->esp = sp0 - 0x674u;
    cow_thiscall_cdecl(g, COW_IMG(0x10128950u), ecx, 5, loc_668, edi, ebp, rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u));
    t25 = g->edx;
    t26 = (uint32_t)(int16_t)rd16(arg1 + 0x32u);
    wr32(sp0 - 0x660u, t26);
    g->eax = t26;
    g->esp = sp0 - 0x67cu;
    t27 = cow_thiscall(g, COW_IMG(0x1012a360u), sp0 - 0x63cu, 0);
    wr32(sp0 - 0x680u, 0u);
    wr32(sp0 - 0x684u, arg4);
    wr32(sp0 - 0x688u, arg5);
    wr32(sp0 - 0x68cu, ebp);
    g->edx = arg5;
    t28 = cow_thiscall(g, COW_IMG(0x1012a420u), sp0 - 0x63cu, 4, ebp, arg5, arg4, 0u);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x63cu, 0);
    t31 = g->edx;
    if (t30 != 0u)
    {
        eax = t30;
        esi = 0u;
        loc_688 = arg5;
        goto L_10128ed3;
    }
    edx = t31;
    esi = 0u;
L_10128e79: ;
    t32 = rd32(sp0 - 0x660u);
    wr32(sp0 - 0x680u, t32);
    wr32(sp0 - 0x684u, 0x7ffu);
    t33 = COW_IMG(0x104e2158u) + ((uint16_t)esi << 0xbu);
    wr32(sp0 - 0x688u, t33);
    g->ebx = self;
    g->eax = t32;
    g->edx = edx;
    g->esp = sp0 - 0x67cu;
    t34 = cow_thiscall(g, COW_IMG(0x1012a4f0u), sp0 - 0x63cu, 3, t33, 0x7ffu, t32);
    t35 = g->edx;
    wr32(sp0 + (uint16_t)esi * 4u - 0x4b0u, (uint32_t)(int16_t)t34);
    if ((uint32_t)(int16_t)t34 == 0u)
    {
        eax = (uint32_t)(int16_t)t34;
        edx = t35;
    }
    else
    {
        eax = (uint32_t)(int16_t)t34;
        edx = t35;
        edi = (uint16_t)esi;
        g->edx = edx;
        g->esp = sp0 - 0x67cu;
        t36 = cow_call_regs(g, COW_IMG(0x1012a410u), eax, sp0 - 0x63cu, g->edx, 1, 0);
        t37 = g->edx;
        wr8(edi + sp0 - 0x5dcu, (uint8_t)t36);
        eax = t36;
        edx = t37;
        esi = esi + 1u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x67cu;
    t38 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x63cu, 0);
    t39 = g->edx;
    if (t38 == 0u)
    {
        edx = t39;
        goto L_10128e79;
    }
    eax = t38;
    loc_688 = rd32(sp0 - 0x688u);
L_10128ed3: ;
    g->eax = eax;
    g->edx = rd32(arg1);
    t40 = rd32(arg1);
    g->esp = sp0 - 0x67cu;
    t41 = cow_thiscall(g, rd32(t40 + 0x58u), arg1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x644u, t41);
    wr32(sp0 - 0x680u, (uint16_t)esi);
    t44 = (t42 & 0xffffff00u) | rd8(arg3);
    wr32(sp0 - 0x684u, t44);
    wr32(sp0 - 0x64cu, (uint16_t)esi);
    g->eax = arg3;
    g->edx = t43;
    t45 = cow_thiscall(g, COW_IMG(0x101281f0u), self, 2, t44, (uint16_t)esi);
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x660u, 0u);
    if ((int32_t)(uint16_t)esi <= 0)
    {
        eax = t45;
        edx = t47;
    }
    else
    {
        eax = t45;
        ecx = t46;
        wr32(sp0 - 0x66cu, COW_IMG(0x104e2158u));
        loc_660 = 0u;
        loc_66c = COW_IMG(0x104e2158u);
        loc_688 = rd32(sp0 - 0x688u);
L_10128f1b: ;
        wr32(sp0 - 0x680u, loc_66c);
        g->edx = loc_66c;
        g->esp = sp0 - 0x674u;
        t48 = cow_call_regs(g, COW_IMG(0x10128680u), eax, g->ecx, g->edx, 1, 3, loc_66c, rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u));
        t49 = g->edx;
        wr32(sp0 - 0x650u, t48 + 1u);
        wr8(sp0 - 0x65cu, 0u);
        g->edx = t49;
        g->esp = sp0 - 0x67cu;
        t50 = cow_thiscall(g, COW_IMG(0x1011ba40u), arg1, 0);
        t51 = g->edx;
        if ((uint8_t)t50 == 0u)
        {
            eax = t50;
            edx = t51;
            goto L_10128f9a;
        }
        edx = t51;
        ebp = t48 + 1u;
        t52 = rd32(sp0 - 0x644u);
        wr32(sp0 - 0x680u, t52);
        esi = arg3;
        edi = sp0 - 0x6bcu;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = t52;
        g->esp = sp0 - 0x67cu;
        t53 = cow_fastcall(g, COW_IMG(0x10129980u), self, edx, 16, rd32(sp0 - 0x6bcu), rd32(sp0 - 0x6b8u), rd32(sp0 - 0x6b4u), rd32(sp0 - 0x6b0u), rd32(sp0 - 0x6acu), rd32(sp0 - 0x6a8u), rd32(sp0 - 0x6a4u), rd32(sp0 - 0x6a0u), rd32(sp0 - 0x69cu), rd32(sp0 - 0x698u), rd32(sp0 - 0x694u), rd32(sp0 - 0x690u), rd32(sp0 - 0x68cu), rd32(sp0 - 0x688u), rd32(sp0 - 0x684u), t52);
        t54 = g->edx;
        if ((uint8_t)t53 == 0u)
        {
            eax = t53;
            edx = t54;
            goto L_10128f9a;
        }
        eax = t53;
        edx = t54;
        wr32(sp0 - 0x680u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x67cu;
        t55 = cow_thiscall(g, COW_IMG(0x10127280u), self, 1, ebp);
        t56 = g->edx;
        wr32(sp0 - 0x680u, 0u);
        wr32(sp0 - 0x684u, 0u);
        t57 = (uint16_t)rd32(sp0 - 0x650u);
        wr32(sp0 - 0x688u, t57);
        wr32(sp0 - 0x68cu, t55 + 0x3cu);
        t58 = rd32(sp0 - 0x66cu);
        wr32(sp0 - 0x690u, t58);
        g->edx = t56;
        t59 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, t58, t55 + 0x3cu, t57, 0u, 0u);
        t60 = g->edx;
        wr16(t55 + t57 * 2u + 0x3au, 0u);
        wr8(sp0 - 0x65cu, 1u);
        eax = t59;
        edx = t60;
        ebp = t55;
L_10128f9e: ;
        esi = arg3;
        edi = ebp;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(sp0 - 0x66cu) == COW_IMG(0x104e2158u))
        {
            edi = rd32(sp0 - 0x66cu);
        }
        else
        {
            edi = rd32(sp0 - 0x66cu);
            t61 = rd8(ebp + 0x15u);
            wr32(ebp + 0x38u, 0u);
            wr8(ebp + 0x15u, t61 & 0xb0u);
        }
        t62 = rd16(sp0 - 0x650u);
        t63 = rd32(sp0 - 0x660u);
        wr16(ebp + 0x10u, (uint16_t)t62);
        t64 = rd32(self + 0x10u);
        t65 = rd16(sp0 + t63 * 4u - 0x4b0u);
        wr32(ebp + 0xcu, t64);
        t66 = ((edx | t62) & 0xffff0000u) | t65;
        wr32(sp0 - 0x680u, t66);
        t67 = rd32(self + 0x10u) + 1u;
        wr32(self + 0x10u, t67);
        wr8(sp0 - 0x661u, rd8(sp0 + t63 - 0x5dcu));
        wr32(sp0 - 0x684u, edi);
        wr32(sp0 - 0x688u, sp0 - 0x662u);
        t68 = rd32(sp0 - 0x654u);
        wr32(sp0 - 0x68cu, t68);
        wr32(sp0 - 0x690u, ebp);
        g->edx = t66;
        g->esp = sp0 - 0x67cu;
        cow_thiscall(g, COW_IMG(0x10128740u), self, 5, ebp, t68, sp0 - 0x662u, edi, t66);
        t69 = g->edx;
        t70 = rd32(sp0 - 0x65cu);
        wr32(sp0 - 0x680u, t70);
        wr8(sp0 - 0x654u, (uint8_t)arg5);
        g->ebx = self;
        cow_call_regs(g, COW_IMG(0x10162560u), t70, arg1, (t69 & 0xffffff00u) | (uint8_t)arg5, 0, 1, t70);
        t71 = g->ecx;
        t72 = g->edx;
        wr32(sp0 - 0x660u, t63 + 1u);
        wr32(sp0 - 0x66cu, edi + 0x800u);
        if ((int32_t)(t63 + 1u) < (int32_t)rd32(sp0 - 0x64cu))
        {
            eax = rd32(sp0 - 0x64cu);
            ecx = t71;
            loc_660 = t63 + 1u;
            loc_66c = edi + 0x800u;
            goto L_10128f14;
        }
        eax = rd32(sp0 - 0x64cu);
        edx = t72;
    }
    t73 = rd32(sp0 - 0x648u);
    wr32(sp0 - 0x680u, t73);
    g->eax = eax;
    g->esp = sp0 - 0x67cu;
    t74 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t73, edx, 1, 1, t73);
    t75 = g->ecx;
    t76 = rd32(sp0 - 0x668u);
    wr32(sp0 - 0x684u, t76);
    g->esp = sp0 - 0x680u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t75, t76, 1, 1, t76);
    t77 = g->ecx;
    t78 = g->edx;
    t79 = rd32(sp0 - 0x640u);
    wr32(sp0 - 0x688u, t79);
    g->eax = t79;
    g->esp = sp0 - 0x684u;
    t80 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t77, t78, 1, 1, t79);
    t81 = g->edx;
    t82 = rd32(sp0 - 0x658u);
    wr32(sp0 - 0x68cu, t82);
    g->esp = sp0 - 0x688u;
    t83 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t82, t81, 1, 1, t82);
    t84 = g->edx;
    g->edx = t84;
    g->esp = sp0 - 0x67cu;
    t85 = cow_thiscall(g, COW_IMG(0x1012a350u), sp0 - 0x63cu, 0);
    t86 = g->edx;
    g->ebx = rd32(sp0 - 0x670u);
    g->esi = rd32(sp0 - 0x678u);
    g->edi = rd32(sp0 - 0x67cu);
    g->ebp = rd32(sp0 - 0x674u);
    g->edx = t86;
    return (t85 & 0xffffff00u) | 1u;
L_10128db6: ;
    ebp = arg2;
    loc_658 = 0u;
    loc_670 = in_ebx;
    loc_674 = in_ebp;
    loc_678 = in_esi;
    loc_67c = in_edi;
    goto L_10128dbd;
L_10128f14: ;
    loc_688 = sp0 - 0x662u;
    goto L_10128f1b;
L_10128f9a: ;
    ebp = sp0 - 0x618u;
    goto L_10128f9e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10128ce0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
