/* f_0x102b1a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b1a20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d67;
    double d73;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_40c;
    uint32_t loc_418;
    uint32_t loc_41c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1116u);

    wr32(sp0 - 0x424u, in_ebx);
    wr32(sp0 - 0x428u, in_ebp);
    wr32(sp0 - 0x42cu, in_esi);
    wr32(sp0 - 0x430u, in_edi);
    wr32(sp0 - 0x434u, 0x2cu);
    wr32(sp0 - 0x438u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x42cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), self, 3, arg3, 0x2cu, in_edi);
    t2 = g->edx;
    wr32(sp0 - 0x43cu, sp0 - 0x410u);
    wr32(sp0 - 0x440u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x444u, t1 + 1u);
    g->ecx = sp0 - 0x410u;
    g->esp = sp0 - 0x438u;
    cow_cdecl(g, COW_IMG(0x10313683u), 3, t1 + 1u, COW_IMG(0x10352ff0u), sp0 - 0x410u);
    t3 = g->ecx;
    t4 = rd32(sp0 - 0x410u);
    wr32(sp0 - 0x448u, t4);
    wr32(sp0 - 0x44cu, arg1);
    g->esp = sp0 - 0x440u;
    cow_cdecl(g, COW_IMG(0x1029a350u), 3, arg1, t4, rd32(sp0 - 0x444u));
    wr32(sp0 - 0x450u, arg2);
    wr32(sp0 - 0x454u, 0x200u);
    wr32(sp0 - 0x458u, sp0 - 0x400u);
    g->ecx = arg2;
    g->esp = sp0 - 0x448u;
    t5 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, arg2, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_102b1fc2;
    ecx = t6;
    edx = t7;
    ebx = in_ebx;
L_102b1a7b: ;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_102b1db2;
    ecx = ~ecx - 1u;
    if (rd8(sp0 - 0x400u) == 0xau) goto L_102b1db2;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
    if ((uint8_t)eax == 0x23u) goto L_102b1db2;
    eax = 0u;
L_102b1aa5: ;
    t8 = rd8(eax + sp0 - 0x400u);
    wr8(eax + sp0 - 0x200u, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_102b1aa5;
    }
    ecx = (ecx & 0xffffff00u) | t8;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t9 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), in_edi, in_esi);
    esi = t9;
    edi = COW_IMG(0x103bfb94u);
    ecx = 0xcu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102b1db2;
    }
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t10 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x43cu, t10);
    g->edx = t12;
    g->esp = sp0 - 0x438u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t11, 1, t10);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x40cu, t13);
    if ((int32_t)t13 < 1)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        ebp = t13;
        goto L_102b1ddf;
    }
    ecx = t14;
    edx = t15;
    ebp = t13;
    loc_40c = t13;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfb8cu));
    wr32(sp0 - 0x438u, sp0 - 0x200u);
    wr32(sp0 - 0x418u, 0x200u);
    g->ecx = ecx;
    g->esp = sp0 - 0x41cu;
    t16 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x200u, g->ecx, edx, 1, 7, sp0 - 0x200u, COW_IMG(0x103bfb8cu), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        ecx = t17;
        edx = t18;
        loc_418 = 0x200u;
    }
    else
    {
        eax = t16;
        edx = t18;
        wr32(sp0 - 0x434u, sp0 - 0x408u);
        wr32(sp0 - 0x438u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x43cu, eax + 7u);
        g->ecx = sp0 - 0x408u;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        cow_cdecl(g, COW_IMG(0x10313683u), 3, eax + 7u, COW_IMG(0x10352ff0u), sp0 - 0x408u);
        t19 = g->ecx;
        t20 = g->edx;
        if ((int32_t)rd32(sp0 - 0x408u) <= 0)
        {
            ecx = t19;
            edx = t20;
            loc_418 = 0x200u;
        }
        else
        {
            eax = rd32(sp0 - 0x408u);
            ecx = t19;
            edx = t20;
            wr32(sp0 - 0x418u, eax * 0xau);
            loc_418 = eax * 0xau;
        }
    }
    wr32(sp0 - 0x41cu, 0u);
    if ((int32_t)ebp <= 0)
    {
        ebx = 0u;
        goto L_102b1db2;
    }
    ebx = 0u;
    loc_41c = 0u;
L_102b1b56: ;
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->ecx = ecx;
    g->esp = sp0 - 0x42cu;
    t21 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, arg2, 1, 4, sp0 - 0x400u, 0x200u, arg2, rd32(sp0 - 0x430u));
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_102b1e30;
    }
    edx = t23;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t24 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x400u, edx, 1, 4, sp0 - 0x400u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    esi = t24;
    edi = COW_IMG(0x103bfb84u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102b1da5;
    }
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t25 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x43cu, t25);
    g->edx = t27;
    g->esp = sp0 - 0x438u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t26, 1, t25);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x404u, t28);
    if ((int32_t)t28 < 0)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        esi = t28;
        goto L_102b1e81;
    }
    ecx = t29;
    edx = t30;
    loc_404 = t28;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t31 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x43cu, t31);
    g->edx = t33;
    g->esp = sp0 - 0x438u;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t32, 1, t31);
    t35 = g->ecx;
    t36 = g->edx;
    if ((int32_t)t34 < 1)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        esi = t34;
        goto L_102b1ed2;
    }
    ecx = t35;
    edx = t36;
    esi = t34;
    wr32(sp0 - 0x434u, 0x2b1u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, esi * 4u);
    wr32(sp0 - 0x440u, 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t37 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi * 4u, COW_IMG(0x103bf904u), 0x2b1u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u), rd32(sp0 - 0x420u));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x444u, 0x2b2u);
    wr32(sp0 - 0x448u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x44cu, esi * 4u);
    wr32(sp0 - 0x450u, 1u);
    g->edx = t39;
    g->esp = sp0 - 0x42cu;
    t40 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, esi * 4u, COW_IMG(0x103bf904u), 0x2b2u, 1u, rd32(sp0 - 0x43cu), COW_IMG(0x103bf904u), 0x2b1u, rd32(sp0 - 0x430u));
    t41 = g->edx;
    wr32(sp0 - 0x414u, t40);
    t42 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x454u, t42);
    wr32(sp0 - 0x458u, arg2);
    g->edx = t41;
    g->esp = sp0 - 0x448u;
    t43 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), arg2, 4, arg2, t42, 1u, rd32(sp0 - 0x44cu));
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 == 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        goto L_102b1f23;
    }
    ecx = t44;
    edx = t45;
    ebx = t37;
    ebp = t43;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t46 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x43cu, t46);
    g->edx = t48;
    g->esp = sp0 - 0x438u;
    t49 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t47, 1, t46);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(ebx, t49);
    if ((int32_t)esi <= 1)
    {
        ecx = t50;
        edx = t51;
        goto L_102b1c6e;
    }
    ecx = t50;
    edx = t51;
    edi = 1u;
L_102b1c51: ;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t52 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x43cu, t52);
    g->edx = t54;
    g->esp = sp0 - 0x438u;
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t53, 1, t52);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(ebx + edi * 4u, t55);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        ecx = t56;
        edx = t57;
        edi = edi + 1u;
        goto L_102b1c51;
    }
    ecx = t56;
    edx = t57;
L_102b1c6e: ;
    wr32(sp0 - 0x434u, 0x2b9u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->ecx = ecx;
    g->esp = sp0 - 0x430u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2b9u);
    t58 = g->ecx;
    t59 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x440u, t59);
    wr32(sp0 - 0x444u, arg2);
    g->edx = t59;
    g->esp = sp0 - 0x434u;
    t60 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), t58, 4, arg2, t59, rd32(sp0 - 0x43cu), COW_IMG(0x103bf904u));
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 0u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
        goto L_102b1f78;
    }
    ecx = t61;
    edx = t62;
    ebp = t60;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, ebp);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t63 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ebp, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t64 = g->ecx;
    t65 = g->edx;
    wr32(sp0 - 0x43cu, t63);
    g->ebx = ebx;
    g->edx = t65;
    g->esp = sp0 - 0x430u;
    cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t64, 3, t63, rd32(sp0 - 0x438u), COW_IMG(0x103bfba0u));
    t66 = g->edx;
    d67 = cow_take_float(g);
    t68 = rd32(sp0 - 0x414u);
    wrf32(t68, (float)d67);
    if ((int32_t)esi <= 1)
    {
        ecx = t68;
        edx = t66;
        goto L_102b1ce1;
    }
    ecx = t68;
    edx = t66;
    edi = 1u;
L_102b1cc0: ;
    wr32(sp0 - 0x434u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x438u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x428u;
    t69 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t70 = g->ecx;
    t71 = g->edx;
    wr32(sp0 - 0x43cu, t69);
    g->ebx = ebx;
    g->esp = sp0 - 0x430u;
    cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t70, 3, t69, 0u, COW_IMG(0x103bfba0u));
    t72 = g->ecx;
    d73 = cow_take_float(g);
    t74 = rd32(sp0 - 0x414u);
    wrf32(edi * 4u + t74, (float)d73);
    if ((int32_t)(edi + 1u) < (int32_t)esi)
    {
        ecx = t72;
        edx = t74;
        edi = edi + 1u;
        goto L_102b1cc0;
    }
    ecx = t72;
    edx = t74;
L_102b1ce1: ;
    wr32(sp0 - 0x434u, 0x2bfu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, ebp);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bf904u), 0x2bfu);
    t75 = g->ecx;
    t76 = g->edx;
    g->esp = sp0 - 0x43cu;
    t77 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
    wr32(sp0 - 0x420u, t77);
    t78 = rd32(sp0 - 0x414u);
    wr32(t77 + 0x50u, esi);
    wr32(t77 + 0x30u, ebx);
    wr32(t77 + 0x38u, t78);
    t79 = rd32(sp0 - 0x404u);
    wr32(t77 + 0x3cu, 0u);
    wr32(sp0 - 0x440u, t79);
    wr32(sp0 - 0x444u, arg1);
    g->edx = arg1;
    t80 = cow_cdecl(g, COW_IMG(0x1029a440u), 2, arg1, t79);
    t81 = g->edx;
    wr32(rd32(sp0 - 0x420u) + 0x9cu, t80);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(sp0 - 0x420u);
        edx = t81;
        eax = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 - 0x420u) + 0x9cu);
        ecx = rd32(sp0 - 0x420u);
        edx = t81;
        eax = eax + 0x24u;
    }
    wr32(ecx + 0x58u, eax);
    if (rd32(rd32(sp0 - 0x420u) + 0x9cu) == 0u)
    {
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
        wr32(sp0 - 0x434u, sp0 - 0x420u);
        g->esp = sp0 - 0x428u;
        cow_cdecl(g, COW_IMG(0x102af600u), 3, sp0 - 0x420u, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    }
    else
    {
        eax = rd32(sp0 - 0x420u);
        ecx = rd32(rd32(sp0 - 0x420u) + 0x9cu);
        wr32(sp0 - 0x434u, eax);
        wr32(sp0 - 0x438u, arg1);
        g->esp = sp0 - 0x424u;
        cow_call_regs(g, COW_IMG(0x1029a3a0u), eax, g->ecx, g->edx, 1, 5, arg1, eax, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u));
    }
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->ecx = arg2;
    g->esp = sp0 - 0x42cu;
    t82 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x400u, 1, 4, sp0 - 0x400u, 0x200u, arg2, rd32(sp0 - 0x430u));
    t83 = g->ecx;
    t84 = g->edx;
    if (t82 == 0u)
    {
        edx = t84;
        goto L_102b1db2;
    }
    ecx = t83;
    edx = t84;
    ebx = rd32(sp0 - 0x41cu);
    ebp = rd32(sp0 - 0x40cu);
L_102b1da5: ;
    wr32(sp0 - 0x41cu, ebx + 1u);
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        loc_41c = ebx + 1u;
        ebx = ebx + 1u;
        goto L_102b1b56;
    }
    ebx = ebx + 1u;
L_102b1db2: ;
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, 0x200u);
    wr32(sp0 - 0x43cu, sp0 - 0x400u);
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x42cu;
    t121 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x400u, 0x200u, arg2, in_edi);
    t122 = g->ecx;
    t123 = g->edx;
    if (t121 != 0u)
    {
        ecx = t122;
        edx = t123;
        goto L_102b1a7b;
    }
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ddf: ;
    wr32(sp0 - 0x434u, 0x299u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t115 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t116 = g->ecx;
    wr32(sp0 - 0x440u, ebp);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb6cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ecx = t116;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t118;
    g->esp = sp0 - 0x43cu;
    t119 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb6cu), rd32(sp0 - 0x440u));
    t120 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e30: ;
    wr32(sp0 - 0x434u, 0x2a7u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t109 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t110 = g->ecx;
    wr32(sp0 - 0x440u, ebx);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ecx = t110;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t111 = g->ecx;
    t112 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t112;
    g->esp = sp0 - 0x43cu;
    t113 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t114 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1e81: ;
    wr32(sp0 - 0x434u, 0x2acu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t104 = g->ecx;
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb40u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ecx = t104;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t106;
    g->esp = sp0 - 0x43cu;
    t107 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb40u), rd32(sp0 - 0x440u));
    t108 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1ed2: ;
    wr32(sp0 - 0x434u, 0x2afu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    t97 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t98 = g->ecx;
    wr32(sp0 - 0x440u, esi);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb2cu));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->ecx = t98;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t99 = g->ecx;
    t100 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->eax = arg1;
    g->edx = t100;
    g->esp = sp0 - 0x43cu;
    t101 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb2cu), rd32(sp0 - 0x440u));
    t102 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f23: ;
    wr32(sp0 - 0x434u, 0x2b5u);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t91 = g->ecx;
    t92 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t92);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->eax = sp0 - 0x400u;
    g->edx = t92;
    g->esp = sp0 - 0x444u;
    t93 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t94 = g->edx;
    wr32(sp0 - 0x450u, arg1);
    g->ecx = arg1;
    g->esp = sp0 - 0x43cu;
    t95 = cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t96 = g->ecx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x428u);
    return;
L_102b1f78: ;
    wr32(sp0 - 0x434u, 0x2bbu);
    wr32(sp0 - 0x438u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x43cu, COW_IMG(0x103b379cu));
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t85 = g->edx;
    t86 = rd32(sp0 - 0x41cu);
    wr32(sp0 - 0x440u, t86);
    wr32(sp0 - 0x444u, COW_IMG(0x103bfb50u));
    wr32(sp0 - 0x448u, sp0 - 0x400u);
    wr32(sp0 - 0x44cu, COW_IMG(0x103b42fcu));
    g->eax = t86;
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x444u;
    t87 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), sp0 - 0x400u);
    t88 = g->ecx;
    wr32(sp0 - 0x450u, arg1);
    g->ecx = t88;
    g->edx = arg1;
    g->esp = sp0 - 0x43cu;
    cow_cdecl(g, COW_IMG(0x1029a300u), 5, arg1, COW_IMG(0x103b42fcu), sp0 - 0x400u, COW_IMG(0x103bfb50u), rd32(sp0 - 0x440u));
    t89 = g->ecx;
    t90 = g->edx;
    wr32(sp0 - 0x454u, sp0 + 4u);
    g->esp = sp0 - 0x448u;
    cow_cdecl(g, COW_IMG(0x1029a080u), 3, sp0 + 4u, arg1, COW_IMG(0x103b42fcu));
L_102b1fc2: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b1a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
